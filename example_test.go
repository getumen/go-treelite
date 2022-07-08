package treelite_test

import (
	"bufio"
	"fmt"
	"log"
	"math"
	"os"
	"runtime"
	"strconv"
	"strings"

	"github.com/getumen/go-treelite"
)

func Example() {
	data, nRow, nCol := loadData()

	dMatrix, err := treelite.CreaetFromMat(data, nRow, nCol, float32(math.NaN()))
	if err != nil {
		log.Fatal(err)
	}
	defer dMatrix.Close()

	model, err := treelite.LoadXGBoostModel("test_data/xgboost.model")
	if err != nil {
		log.Fatal(err)
	}
	defer model.Close()

	annotator, err := treelite.NewAnnotator(model, dMatrix, 1, true)
	if err != nil {
		log.Fatal(err)
	}
	defer annotator.Close()

	err = annotator.Save("test_data/go-example-annotation.json")
	if err != nil {
		log.Fatal(err)
	}

	compiler, err := treelite.NewCompiler(
		"ast_native",
		&treelite.CompilerParam{
			AnnotationPath: "test_data/go-example-annotation.json",
			Quantize:       true,
			ParallelComp:   true,
			Verbose:        true,
		},
	)
	if err != nil {
		log.Fatal(err)
	}
	defer compiler.Close()

	err = compiler.ExportSharedLib(
		model,
		"test_data/go_example_compiled_model",
		"gcc",
		nil,
	)
	if err != nil {
		log.Fatal(err)
	}

	predictor, err := treelite.NewPredictor(
		"test_data/go_example_compiled_model.so",
		runtime.NumCPU(),
	)
	if err != nil {
		log.Fatal(err)
	}
	defer predictor.Close()

	scores, err := predictor.PredictBatch(dMatrix, true, false)
	if err != nil {
		log.Fatal(err)
	}
	fmt.Printf("%+v\n", scores)
}

func loadData() ([]float32, int, int) {
	nCol := 30
	var nRow int
	feature := make([]float32, 0)
	featureFile, err := os.Open("test_data/feature.csv")
	if err != nil {
		log.Fatal(err)
	}
	scanner := bufio.NewScanner(featureFile)
	for scanner.Scan() {
		nRow++
		featureValues := strings.Split(scanner.Text(), ",")
		for _, valueString := range featureValues {
			value, err := strconv.ParseFloat(valueString, 32)
			if err != nil {
				log.Fatal(err)
			}
			feature = append(feature, float32(value))
		}
	}

	return feature, nRow, nCol
}
