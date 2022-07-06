package treelite_test

import (
	"os"
	"testing"

	"github.com/getumen/go-treelite"
)

func TestModel_LoadXGBoostModel(t *testing.T) {
	target, err := treelite.LoadXGBoostModel("test_data/xgboost.model")
	if err != nil {
		t.Fatal(err)
	}
	defer target.Close()
}

func TestModel_LoadXGBoostModelFromMemoryBuffer(t *testing.T) {
	f, err := os.Open("test_data/xgboost.model")
	if err != nil {
		t.Fatal(err)
	}
	defer f.Close()
	target, err := treelite.LoadXGBoostModelFromMemoryBuffer(f)
	defer target.Close()
}
