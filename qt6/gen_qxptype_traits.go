package qt6

/*

#include "gen_qxptype_traits.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type qxp__nonesuch struct {
	h *C.qxp__nonesuch
}

func (this *qxp__nonesuch) cPointer() *C.qxp__nonesuch {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *qxp__nonesuch) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newqxp__nonesuch constructs the type using only CGO pointers.
func newqxp__nonesuch(h *C.qxp__nonesuch) *qxp__nonesuch {
	if h == nil {
		return nil
	}

	return &qxp__nonesuch{h: h}
}

// UnsafeNewqxp__nonesuch constructs the type using only unsafe pointers.
func UnsafeNewqxp__nonesuch(h unsafe.Pointer) *qxp__nonesuch {
	return newqxp__nonesuch((*C.qxp__nonesuch)(h))
}
