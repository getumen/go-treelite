package treelite

// #cgo LDFLAGS: -ltreelite -ltreelite_runtime
// #include <stdlib.h>
// #include "treelite/c_api.h"
// #include "treelite/c_api_common.h"
// #include "treelite/c_api_runtime.h"
import "C"
import (
	"errors"
	"io"
	"unsafe"
)

var (
	errLoadModel = errors.New("load model error")
	errFreeModel = errors.New("free model error")
)

type Model struct {
	pointer C.ModelHandle
}

func (m *Model) Close() error {
	ret := C.TreeliteFreeModel(
		m.pointer,
	)
	if ret == -1 {
		return errFreeModel
	}
	return nil
}

func LoadLightGBMModel(modelPath string) (*Model, error) {
	var handle C.ModelHandle
	ret := C.TreeliteLoadLightGBMModel(
		C.CString(modelPath),
		&handle,
	)
	if ret == -1 {
		return nil, errLoadModel
	}
	return &Model{
		pointer: handle,
	}, nil
}

func LoadXGBoostModel(modelPath string) (*Model, error) {
	var handle C.ModelHandle
	ret := C.TreeliteLoadXGBoostModel(
		C.CString(modelPath),
		&handle,
	)
	if ret == -1 {
		return nil, errLoadModel
	}
	return &Model{
		pointer: handle,
	}, nil
}

func LoadXGBoostJSON(modelPath string) (*Model, error) {
	var handle C.ModelHandle
	ret := C.TreeliteLoadXGBoostJSON(
		C.CString(modelPath),
		&handle,
	)
	if ret == -1 {
		return nil, errLoadModel
	}
	return &Model{
		pointer: handle,
	}, nil
}

func LoadXGBoostJSONString(modelJSON string) (*Model, error) {
	var handle C.ModelHandle
	ret := C.TreeliteLoadXGBoostJSONString(
		C.CString(modelJSON),
		C.ulong(len(modelJSON)),
		&handle,
	)
	if ret == -1 {
		return nil, errLoadModel
	}
	return &Model{
		pointer: handle,
	}, nil
}

func LoadXGBoostModelFromMemoryBuffer(reader io.Reader) (*Model, error) {
	buf, err := io.ReadAll(reader)
	if err != nil {
		return nil, err
	}
	var handle C.ModelHandle
	ret := C.TreeliteLoadXGBoostModelFromMemoryBuffer(
		unsafe.Pointer(&buf[0]),
		C.ulong(len(buf)),
		&handle,
	)
	if ret == -1 {
		return nil, errLoadModel
	}
	return &Model{
		pointer: handle,
	}, nil
}

func LoadLightGBMModelFromString(modelString string) (*Model, error) {
	var handle C.ModelHandle
	ret := C.TreeliteLoadLightGBMModelFromString(
		C.CString(modelString),
		&handle,
	)
	if ret == -1 {
		return nil, errLoadModel
	}
	return &Model{
		pointer: handle,
	}, nil
}
