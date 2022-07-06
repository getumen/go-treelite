package treelite

// #cgo LDFLAGS: -ltreelite -ltreelite_runtime
// #include <stdlib.h>
// #include "treelite/c_api.h"
// #include "treelite/c_api_common.h"
// #include "treelite/c_api_runtime.h"
import "C"
import "errors"

var (
	errCreateAnnotator = errors.New("create annotator failed")
	errSaveAnnotator   = errors.New("save annotator failed")
	errFreeAnnotator   = errors.New("free annotator failed")
)

type Annotator struct {
	pointer C.AnnotationHandle
}

func NewAnnotator(
	model *Model,
	dmatrix *DMatrix,
	numThread int,
	verbose bool,
) (*Annotator, error) {
	var handle C.AnnotationHandle

	var verboseInt int32
	if verbose {
		verboseInt = 1
	}

	ret := C.TreeliteAnnotateBranch(
		model.pointer,
		dmatrix.pointer,
		C.int(numThread),
		C.int(verboseInt),
		&handle,
	)
	if ret == -1 {
		return nil, errCreateAnnotator
	}
	return &Annotator{
		pointer: handle,
	}, nil
}

func (a Annotator) Save(path string) error {
	ret := C.TreeliteAnnotationSave(
		a.pointer,
		C.CString(path),
	)
	if ret == -1 {
		return errSaveAnnotator
	}
	return nil
}

func (a Annotator) Close() error {
	ret := C.TreeliteAnnotationFree(
		a.pointer,
	)
	if ret == -1 {
		return errFreeAnnotator
	}
	return nil
}
