package treelite_test

import (
	"bufio"
	"io"
	"math"
	"os"
	"strconv"
	"strings"
	"testing"

	"github.com/getumen/go-treelite"
	"github.com/stretchr/testify/assert"
)

func TestAnnotator(t *testing.T) {
	model, err := treelite.LoadXGBoostModel("testdata/xgboost.model")
	if err != nil {
		t.Fatal(err)
	}
	defer model.Close()

	nCol := 30
	var nRow int
	feature := make([]float32, 0)

	featureFile, err := os.Open("testdata/feature.csv")
	if err != nil {
		t.Fatal(err)
	}
	scanner := bufio.NewScanner(featureFile)
	for scanner.Scan() {
		nRow++
		featureValues := strings.Split(scanner.Text(), ",")
		for _, valueString := range featureValues {
			value, err := strconv.ParseFloat(valueString, 32)
			if err != nil {
				t.Fatal(err)
			}
			feature = append(feature, float32(value))
		}
	}

	dMatrix, err := treelite.CreateFromMat(feature, nRow, nCol, float32(math.NaN()))
	if err != nil {
		t.Fatal(err)
	}
	defer dMatrix.Close()

	target, err := treelite.NewAnnotator(model, dMatrix, 1, true)
	if err != nil {
		t.Fatal(err)
	}
	defer target.Close()

	err = target.Save("testdata/go-annotation.json")
	if err != nil {
		t.Fatal(err)
	}

	expectedFile, err := os.Open("testdata/go-annotation.json")
	if err != nil {
		t.Fatal(err)
	}
	defer expectedFile.Close()
	expectedJson, err := io.ReadAll(expectedFile)
	if err != nil {
		t.Fatal(err)
	}

	actualFile, err := os.Open("testdata/annotation.json")
	if err != nil {
		t.Fatal(err)
	}
	defer actualFile.Close()
	actualJson, err := io.ReadAll(actualFile)
	if err != nil {
		t.Fatal(err)
	}

	assert.JSONEq(t, string(expectedJson), string(actualJson))
}
