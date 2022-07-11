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
)

var (
	errCreateCompiler = errors.New("create compiler failed")
	errFreeCompiler   = errors.New("free compiler failed")
	errGenerateCode   = errors.New("generate code failed")
	errCompile        = errors.New("compile failed")
)

// CompilerParam is a compiler setting
type CompilerParam struct {
	AnnotationPath string     `json:"annotate_in,omitempty"`
	Quantize       BooleanInC `json:"quantize,omitempty"`
	ParallelComp   BooleanInC `json:"parallel_comp,omitempty"`
	Verbose        BooleanInC `json:"verbose,omitempty"`
	NativeLibName  string     `json:"native_lib_name,omitempty"`
	CodeFoldingReq float64    `json:"code_folding_req,omitempty"`
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

	objectNameList := make([]string, 0)
	for _, source := range recipe.Sources {

		objectName := path.Join(dir, fmt.Sprintf("%s.o", source.Name))

		objOptions := []string{
			"-c",
			"-O3",
			"-o",
			objectName,
			path.Join(dir, fmt.Sprintf("%s.c", source.Name)),
			"-fPIC",
			"-std=c99",
		}
		objOptions = append(objOptions, compileOptions...)

		err = exec.Command("gcc", objOptions...).Run()
		if err != nil {
			return err
		}
		objectNameList = append(objectNameList, objectName)
	}

	var ext string
	if runtime.GOOS == "darwin" {
		ext = ".dylib"
	} else if runtime.GOOS == "win32" || runtime.GOOS == "cygwin" {
		ext = ".dll"
	} else {
		ext = ".so"
	}

	tempFile := path.Join(dir, "output"+ext)

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

	err = fileCopy(destPath+ext, tempFile)
	if err != nil {
		return err
	}
	return nil
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
