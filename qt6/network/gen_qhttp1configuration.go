package network

/*

#include "gen_qhttp1configuration.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QHttp1Configuration struct {
	h *C.QHttp1Configuration
}

func (this *QHttp1Configuration) cPointer() *C.QHttp1Configuration {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHttp1Configuration) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHttp1Configuration constructs the type using only CGO pointers.
func newQHttp1Configuration(h *C.QHttp1Configuration) *QHttp1Configuration {
	if h == nil {
		return nil
	}

	return &QHttp1Configuration{h: h}
}

// UnsafeNewQHttp1Configuration constructs the type using only unsafe pointers.
func UnsafeNewQHttp1Configuration(h unsafe.Pointer) *QHttp1Configuration {
	return newQHttp1Configuration((*C.QHttp1Configuration)(h))
}

// NewQHttp1Configuration constructs a new QHttp1Configuration object.
func NewQHttp1Configuration() *QHttp1Configuration {

	return newQHttp1Configuration(C.QHttp1Configuration_new())
}

// NewQHttp1Configuration2 constructs a new QHttp1Configuration object.
func NewQHttp1Configuration2(other *QHttp1Configuration) *QHttp1Configuration {

	return newQHttp1Configuration(C.QHttp1Configuration_new2(other.cPointer()))
}

func (this *QHttp1Configuration) OperatorAssign(other *QHttp1Configuration) {
	C.QHttp1Configuration_operatorAssign(this.h, other.cPointer())
}

func (this *QHttp1Configuration) SetNumberOfConnectionsPerHost(amount int64) {
	C.QHttp1Configuration_setNumberOfConnectionsPerHost(this.h, (C.ptrdiff_t)(amount))
}

func (this *QHttp1Configuration) NumberOfConnectionsPerHost() int64 {
	return (int64)(C.QHttp1Configuration_numberOfConnectionsPerHost(this.h))
}

func (this *QHttp1Configuration) Swap(other *QHttp1Configuration) {
	C.QHttp1Configuration_swap(this.h, other.cPointer())
}

// Delete this object from C++ memory.
func (this *QHttp1Configuration) Delete() {
	C.QHttp1Configuration_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHttp1Configuration) GoGC() {
	runtime.SetFinalizer(this, func(this *QHttp1Configuration) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
