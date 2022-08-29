package treelite_test

import (
	"math"
	"testing"

	"github.com/getumen/go-treelite"
	"github.com/stretchr/testify/assert"
)

func TestDMatrix_CreaetFromMat(t *testing.T) {
	data := []float32{0, 1, 2, 3, 4, 5}
	nrow := 2
	ncol := 3
	nonZero := 6

	target, err := treelite.CreateFromMat(data, nrow, ncol, float32(math.NaN()))
	if err != nil {
		t.Fatal(err)
	}
	defer target.Close()

	assert.Equal(t, nrow, target.Row())
	assert.Equal(t, ncol, target.Col())
	assert.Equal(t, nonZero, target.Element())
}

func TestDMatrix_CreateFromCSR(t *testing.T) {
	data := []float32{10, 20, 30, 40, 50, 60, 70, 80}
	indices := []uint32{0, 1, 1, 3, 2, 3, 4, 5}
	headers := []uint64{0, 2, 4, 7, 8}
	nrow := 4
	ncol := 6
	nonZero := 8

	target, err := treelite.CreateFromCSR(
		headers,
		indices,
		data,
		nrow,
		ncol,
	)
	if err != nil {
		t.Fatal(err)
	}
	defer target.Close()

	assert.Equal(t, nrow, target.Row())
	assert.Equal(t, ncol, target.Col())
	assert.Equal(t, nonZero, target.Element())
}
