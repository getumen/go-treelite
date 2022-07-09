package treelite_test

import (
	"os"
	"testing"

	"github.com/getumen/go-treelite"
)

func TestModel_LoadXGBoostModel(t *testing.T) {
	target, err := treelite.LoadXGBoostModel("testdata/xgboost.model")
	if err != nil {
		t.Fatal(err)
	}
	defer target.Close()
}

func TestModel_LoadXGBoostModelFromMemoryBuffer(t *testing.T) {
	f, err := os.Open("testdata/xgboost.model")
	if err != nil {
		t.Fatal(err)
	}
	defer f.Close()
	target, err := treelite.LoadXGBoostModelFromMemoryBuffer(f)
	if err != nil {
		t.Fatal(err)
	}
	defer target.Close()
}
