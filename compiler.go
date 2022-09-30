package treelite

// #cgo LDFLAGS: -ltreelite -ltreelite_runtime
// #include <stdlib.h>
// #include "treelite/c_api.h"
// #include "treelite/c_api_common.h"
// #include "treelite/c_api_runtime.h"
import "C"
import (
	"encoding/json"
	"errors"
	"fmt"
	"io"
	"io/ioutil"
	"log"
	"os"
	"os/exec"
	"path"
	"runtime"
	"sync"
)

var (
	errCreateCompiler = errors.New("create compiler failed")
	errFreeCompiler   = errors.New("free compiler failed")
	errGenerateCode   = errors.New("generate code failed")
	errCompile        = errors.New("compile failed")
)

// CompilerParam is a compiler setting
type CompilerParam struct {
	// name of model annotation file.
	// Use the class treelite.Annotator to generate this file.
	AnnotationPath string `json:"annotate_in,omitempty"`
	// whether to quantize threshold points
	Quantize BooleanInC `json:"quantize,omitempty"`
	// option to enable parallel compilation;
	// if set to nonzero, the trees will be evely distributed into [parallel_comp] files.
	// Set this option to improve compilation time and reduce memory consumption during compilation.
	ParallelComp int `json:"parallel_comp,omitempty"`
	// produce extra messages
	Verbose BooleanInC `json:"verbose,omitempty"`
	// native lib name (without extension)
	NativeLibName string `json:"native_lib_name,omitempty"`
	// parameter for folding rarely visited subtrees (no if/else blocks);
	// all nodes whose data counts are lower than that of the root node of the decision tree by [code_folding_req] will be folded.
	// To diable folding, set to +inf. If hessian sums are available, they will be used as proxies of data counts.
	CodeFoldingReq float64 `json:"code_folding_req,omitempty"`
	// Only applicable when compiler is set to failsafe.
	// If set to a positive value, the fail-safe compiler will not emit large constant arrays to the C code.
	// Instead, the arrays will be emitted as an ELF binary (Linux only).
	// For large arrays, it is much faster to directly dump ELF binaries than to pass them to a C compiler.
	DumpArrayAsELF BooleanInC `json:"dump_array_as_elf,omitempty"`
}

// BooleanInC generates int representation in json
type BooleanInC bool

// MarshalJSON returns int representation of bool
func (b *BooleanInC) MarshalJSON() ([]byte, error) {
	if *b {
		return []byte("1"), nil
	}
	return []byte("0"), nil
}

// Compiler produces optimize prediction subroutine (in C) from a given decision tree ensemble.
type Compiler struct {
	pointer C.CompilerHandle
}

// NewCompiler creates new compiler by the given setting
func NewCompiler(
	name string,
	param *CompilerParam,
) (*Compiler, error) {
	jsonBytes, err := json.Marshal(param)
	if err != nil {
		return nil, err
	}
	var handle C.CompilerHandle
	ret := C.TreeliteCompilerCreateV2(
		C.CString(name),
		C.CString(string(jsonBytes)),
		&handle,
	)
	if ret == -1 {
		return nil, errCreateCompiler
	}
	return &Compiler{
		pointer: handle,
	}, nil
}

// Close frees internally allocated memory
func (c *Compiler) Close() error {
	ret := C.TreeliteCompilerFree(
		c.pointer,
	)
	if ret == -1 {
		return errFreeCompiler
	}
	return nil
}

// GenerateCode generate C source code from the given model
func (c *Compiler) GenerateCode(model *Model, destPath string) error {

	ret := C.TreeliteCompilerGenerateCodeV2(
		c.pointer,
		model.pointer,
		C.CString(destPath),
	)
	if ret == -1 {
		return errGenerateCode
	}
	return nil
}

// ExportSharedLib exports shared object of optimized model
// compileOptions is compiler option  e.g. -g
func (c *Compiler) ExportSharedLib(
	model *Model,
	destPath string,
	toolChain string,
	compileOptions []string,
) error {

	if compileOptions == nil {
		compileOptions = make([]string, 0)
	}

	dir, err := ioutil.TempDir("", "example")
	if err != nil {
		return err
	}
	defer func() {
		err = os.RemoveAll(dir)
		if err != nil {
			log.Printf("fail to remove %s", dir)
		}
	}()
	err = c.GenerateCode(model, dir)
	if err != nil {
		return err
	}

	if toolChain != "gcc" {
		return errors.New("unsupported compiler")
	}

	compileOptions = append(compileOptions, "-lm")

	var recipe Recipe

	recipeJson, err := ioutil.ReadFile(path.Join(dir, "recipe.json"))
	if err != nil {
		return errCompile
	}

	if err := json.Unmarshal(recipeJson, &recipe); err != nil {
		return errCompile
	}

	objectNameChan := make(chan string)
	wg := sync.WaitGroup{}

	for _, source := range recipe.Sources {
		wg.Add(1)

		go func(sourceName string) {
			defer wg.Done()
			objectName := path.Join(dir, fmt.Sprintf("%s.o", sourceName))

			objOptions := []string{
				"-Ofast",
				"-o",
				objectName,
				"-c",
				path.Join(dir, fmt.Sprintf("%s.c", sourceName)),
				"-fPIC",
				"-std=c99",
			}
			objOptions = append(objOptions, compileOptions...)

			_, err := exec.Command("gcc", objOptions...).Output()
			if err != nil {
				log.Fatalf("fail to compile %s", objectName)
			}
			objectNameChan <- objectName
		}(source.Name)
	}

	go func() {
		wg.Wait()
		close(objectNameChan)
	}()

	objectNameList := make([]string, 0)
	for objectName := range objectNameChan {
		objectNameList = append(objectNameList, objectName)
	}

	ext := GetSharedLibExtension()

	tempFile := path.Join(dir, "output."+ext)

	libOptions := []string{
		"-shared",
		"-std=c99",
		"-O3",
		"-o",
		tempFile,
	}
	libOptions = append(libOptions, objectNameList...)
	libOptions = append(libOptions, compileOptions...)

	err = exec.Command("gcc", libOptions...).Run()
	if err != nil {
		return err
	}

	err = fileCopy(destPath+"."+ext, tempFile)
	if err != nil {
		return err
	}
	return nil
}

func GetSharedLibExtension() string {
	if runtime.GOOS == "darwin" {
		return "dylib"
	} else if runtime.GOOS == "win32" || runtime.GOOS == "cygwin" {
		return "dll"
	} else {
		return "so"
	}
}

type Recipe struct {
	Target  string `json:"target"`
	Sources []struct {
		Name   string `json:"name"`
		Length int    `json:"length"`
	} `json:"sources"`
}

func fileCopy(dest, src string) error {
	if exist, err := fileExists(dest); err != nil {
		return err
	} else if exist {
		err = os.Remove(dest)
		if err != nil {
			return err
		}
	}

	srcFile, err := os.Open(src)
	if err != nil {
		return nil
	}
	defer srcFile.Close()
	destFile, err := os.Create(dest)
	if err != nil {
		return nil
	}
	defer destFile.Close()
	_, err = io.Copy(destFile, srcFile)
	if err != nil {
		return nil
	}
	return nil
}

func fileExists(name string) (bool, error) {
	if _, err := os.Stat(name); err == nil {
		return true, nil
	} else if errors.Is(err, os.ErrNotExist) {
		return false, nil
	} else {
		return false, err
	}
}
