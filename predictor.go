package treelite

// #cgo LDFLAGS: -ltreelite -ltreelite_runtime
// #include <stdlib.h>
// #include "treelite/c_api.h"
// #include "treelite/c_api_common.h"
// #include "treelite/c_api_runtime.h"
import "C"
import (
	"errors"
)

var (
	errCreatePredictor = errors.New("create predictor failed")
	errQueryNumClass   = errors.New("query num class failed")
	errFreePredictor   = errors.New("free predictor failed")
	errPredictBatch    = errors.New("predict batch failed")
)

type Predictor struct {
	pointer  C.PredictorHandle
	dataType string
	numClass int
}

func NewPredictor(libraryPath string, NumWorkerThread int) (*Predictor, error) {
	var handle C.PredictorHandle
	ret := C.TreelitePredictorLoad(
		C.CString(libraryPath),
		C.int(NumWorkerThread),
		&handle,
	)
	if C.int(ret) == -1 {
		return nil, errCreatePredictor
	}

	dataType, err := treelitePredictorQueryLeafOutputType(handle)
	if err != nil {
		return nil, err
	}

	numClass, err := treeliteQueryNumClass(handle)
	if err != nil {
		return nil, err
	}

	return &Predictor{handle, dataType, numClass}, nil
}

func (p *Predictor) Close() error {
	ret := C.TreelitePredictorFree(p.pointer)
	if C.int(ret) == -1 {
		return errFreePredictor
	}
	return nil
}

func treelitePredictorQueryLeafOutputType(
	pointer C.PredictorHandle,
) (string, error) {

	var result *C.char

	ret := C.TreelitePredictorQueryLeafOutputType(
		pointer,
		&result,
	)
	if C.int(ret) == -1 {
		return "", errCreatePredictor
	}

	return C.GoString(result), nil
}

func (p Predictor) DataType() string {
	return p.dataType
}

func treeliteQueryNumClass(pointer C.PredictorHandle) (int, error) {
	var result uint64

	ret := C.TreelitePredictorQueryNumClass(
		pointer,
		(*C.ulong)(&result),
	)
	if C.int(ret) == -1 {
		return 0, errQueryNumClass
	}

	return int(result), nil
}

func (p Predictor) NumClass() int {
	return p.numClass
}

func (p Predictor) PredictBatch(
	dmat *DMatrix,
	verbose bool,
	predMargin bool,
) ([]float32, error) {
	var verboseInt, predMarginInt int32
	if verbose {
		verboseInt = 1
	}
	if predMargin {
		predMarginInt = 1
	}

	output := make([]float32, dmat.row*p.numClass)

	var outputSize uint64

	ret := C.TreelitePredictorPredictBatch(
		p.pointer,
		dmat.pointer,
		C.int(verboseInt),
		C.int(predMarginInt),
		(C.PredictorOutputHandle)(&output[0]),
		(*C.ulong)(&outputSize),
	)
	if C.int(ret) == -1 {
		return nil, errPredictBatch
	}

	return output, nil
}
