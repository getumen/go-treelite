package treelite_test

import (
	"bufio"
	"math"
	"os"
	"runtime"
	"strconv"
	"strings"
	"testing"

	"github.com/getumen/go-treelite"
	"github.com/stretchr/testify/assert"
)

func TestPredictor_Load(t *testing.T) {
	// if your test failed, check os and arch oh your PC.
	target, err := treelite.NewPredictor("test_data/compiled_model.so", 1)
	if err != nil {
		t.Fatal(err)
	}
	defer target.Close()
}

func TestPredictor_DataType(t *testing.T) {
	// if your test failed, check os and arch oh your PC.
	target, err := treelite.NewPredictor("test_data/compiled_model.so", runtime.NumCPU())
	if err != nil {
		t.Fatal(err)
	}
	defer target.Close()

	assert.Equal(t, "float32", target.DataType())
}

func TestPredictor_NumClass(t *testing.T) {
	// if your test failed, check os and arch oh your PC.
	target, err := treelite.NewPredictor("test_data/compiled_model.so", 1)
	if err != nil {
		t.Fatal(err)
	}
	defer target.Close()

	assert.Equal(t, 1, target.NumClass())
}

func TestPredictor_PredictBatch(t *testing.T) {
	nCol := 30
	var nRow int
	feature := make([]float32, 0)

	featureFile, err := os.Open("test_data/feature.csv")
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

	dMatrix, err := treelite.CreaetFromMat(feature, nRow, nCol, float32(math.NaN()))
	if err != nil {
		t.Fatal(err)
	}
	defer dMatrix.Close()

	expectedScores := make([]float32, 0)

	scoreFile, err := os.Open("test_data/score.csv")
	if err != nil {
		t.Fatal(err)
	}
	scanner = bufio.NewScanner(scoreFile)
	for scanner.Scan() {
		nRow++
		scoreValues := strings.Split(scanner.Text(), ",")
		for _, valueString := range scoreValues {
			value, err := strconv.ParseFloat(valueString, 32)
			if err != nil {
				t.Fatal(err)
			}
			expectedScores = append(expectedScores, float32(value))
		}
	}

	// if your test failed, check os and arch oh your PC.
	model, err := treelite.NewPredictor("test_data/compiled_model.so", 1)
	if err != nil {
		t.Fatal(err)
	}
	defer model.Close()

	actualScore, err := model.PredictBatch(dMatrix, true, false)
	if err != nil {
		t.Fatal(err)
	}
	assert.Equal(t, len(expectedScores), len(actualScore))
	assert.InDeltaSlice(t, expectedScores, actualScore, 1e-7)
}
