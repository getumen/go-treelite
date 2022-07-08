package treelite

// #cgo LDFLAGS: -ltreelite -ltreelite_runtime
// #include <stdlib.h>
// #include "treelite/c_api.h"
// #include "treelite/c_api_common.h"
// #include "treelite/c_api_runtime.h"
import "C"
import (
	"errors"
	"unsafe"
)

var (
	errCreateDMatrixHandle = errors.New("create dmatrix failed")
	errFreeDMatrix         = errors.New("free dmatrix failed")
)

// DMatrix is treelite DMatrix
type DMatrix struct {
	pointer C.DMatrixHandle
	row     int
	col     int
	element int
}

// CreaetFromMat creates a dense DMatrix from the given data
func CreaetFromMat(
	data []float32,
	nrow, ncol int,
	missing float32,
) (*DMatrix, error) {
	var handle C.DMatrixHandle
	ret := C.TreeliteDMatrixCreateFromMat(
		unsafe.Pointer(&data[0]),
		C.CString("float32"),
		C.ulong(nrow),
		C.ulong(ncol),
		unsafe.Pointer(&missing),
		&handle,
	)

	if C.int(ret) == -1 {
		return nil, errCreateDMatrixHandle
	}

	return &DMatrix{
		pointer: handle,
		row:     nrow,
		col:     ncol,
		element: len(data),
	}, nil
}

// CreateFromCSR creates a sparse DMatrix from the given data
func CreateFromCSR(
	header []uint64,
	indices []uint32,
	data []float32,
	nrow, ncol int,
) (*DMatrix, error) {
	var handle C.DMatrixHandle
	ret := C.TreeliteDMatrixCreateFromCSR(
		unsafe.Pointer(&data[0]),
		C.CString("float32"),
		(*C.uint)(&indices[0]),
		(*C.ulong)(&header[0]),
		C.ulong(nrow),
		C.ulong(ncol),
		&handle,
	)

	if C.int(ret) == -1 {
		return nil, errCreateDMatrixHandle
	}

	var row, col, element uint64

	// CSR format removes zero element
	ret = C.TreeliteDMatrixGetDimension(
		handle,
		(*C.ulong)(&row),
		(*C.ulong)(&col),
		(*C.ulong)(&element),
	)
	if C.int(ret) == -1 {
		return nil, errCreateDMatrixHandle
	}

	return &DMatrix{
		pointer: handle,
		row:     nrow,
		col:     ncol,
		element: int(element),
	}, nil
}

// Close frees internally allocated memory
func (d *DMatrix) Close() error {
	ret := C.TreeliteDMatrixFree(d.pointer)
	if C.int(ret) == -1 {
		return errFreeDMatrix
	}
	return nil
}

// Col returns the number of columns
func (d DMatrix) Col() int {
	return d.col
}

// Row returns the number of rows
func (d DMatrix) Row() int {
	return d.row
}

// Element returns the number of internal elements
func (d DMatrix) Element() int {
	return d.element
}
