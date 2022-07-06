package treelite_test

import (
	"encoding/json"
	"runtime"
	"testing"

	"github.com/getumen/go-treelite"
	"github.com/stretchr/testify/assert"
)

func TestCompiler_GenerateCode(t *testing.T) {
	target, err := treelite.NewCompiler(
		"ast_native",
		&treelite.CompilerParam{
			AnnotationPath: "test_data/annotation.json",
			Quantize:       true,
			ParallelComp:   true,
			Verbose:        true,
		},
	)
	if err != nil {
		t.Fatal(err)
	}
	defer target.Close()

	model, err := treelite.LoadXGBoostModel("test_data/xgboost.model")
	if err != nil {
		t.Fatal(err)
	}
	defer model.Close()

	err = target.GenerateCode(
		model,
		"test_data/compiled_model",
	)
	if err != nil {
		t.Fatal(err)
	}
}

func TestCompiler_ExportSharedLib(t *testing.T) {
	target, err := treelite.NewCompiler(
		"ast_native",
		&treelite.CompilerParam{
			AnnotationPath: "test_data/annotation.json",
			Quantize:       true,
			ParallelComp:   true,
			Verbose:        true,
		},
	)
	if err != nil {
		t.Fatal(err)
	}
	defer target.Close()

	model, err := treelite.LoadXGBoostModel("test_data/xgboost.model")
	if err != nil {
		t.Fatal(err)
	}
	defer model.Close()

	err = target.ExportSharedLib(
		model,
		"test_data/go_compiled_model",
		"gcc",
		nil,
	)
	if err != nil {
		t.Fatal(err)
	}

	predictor, err := treelite.NewPredictor("./test_data/go_compiled_model.so", runtime.NumCPU())
	if err != nil {
		t.Fatal(err)
	}
	defer predictor.Close()
}

func TestCompilerParam(t *testing.T) {
	expected := `{
		"annotate_in": "path",
		"quantize": 1,
		"verbose": 1,
		"native_lib_name": "model.so"
	}`

	target := &treelite.CompilerParam{
		AnnotationPath: "path",
		Quantize:       true,
		ParallelComp:   false,
		Verbose:        true,
		NativeLibName:  "model.so",
	}

	result, err := json.Marshal(target)
	if err != nil {
		t.Fatal(err)
	}
	assert.JSONEq(t, expected, string(result))
}
