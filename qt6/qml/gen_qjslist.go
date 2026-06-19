package qml

/*

#include "gen_qjslist.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QJSListIndexClamp struct {
	h *C.QJSListIndexClamp
}

func (this *QJSListIndexClamp) cPointer() *C.QJSListIndexClamp {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJSListIndexClamp) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJSListIndexClamp constructs the type using only CGO pointers.
func newQJSListIndexClamp(h *C.QJSListIndexClamp) *QJSListIndexClamp {
	if h == nil {
		return nil
	}

	return &QJSListIndexClamp{h: h}
}

// UnsafeNewQJSListIndexClamp constructs the type using only unsafe pointers.
func UnsafeNewQJSListIndexClamp(h unsafe.Pointer) *QJSListIndexClamp {
	return newQJSListIndexClamp((*C.QJSListIndexClamp)(h))
}

// NewQJSListIndexClamp constructs a new QJSListIndexClamp object.
func NewQJSListIndexClamp(param1 *QJSListIndexClamp) *QJSListIndexClamp {

	return newQJSListIndexClamp(C.QJSListIndexClamp_new(param1.cPointer()))
}

// NewQJSListIndexClamp2 constructs a new QJSListIndexClamp object.
func NewQJSListIndexClamp2() *QJSListIndexClamp {

	return newQJSListIndexClamp(C.QJSListIndexClamp_new2())
}

func QJSListIndexClamp_Clamp(start int64, max int64) int64 {
	return (int64)(C.QJSListIndexClamp_clamp((C.ptrdiff_t)(start), (C.ptrdiff_t)(max)))
}

func (this *QJSListIndexClamp) OperatorAssign(param1 *QJSListIndexClamp) {
	C.QJSListIndexClamp_operatorAssign(this.h, param1.cPointer())
}

func QJSListIndexClamp_Clamp2(start int64, max int64, min int64) int64 {
	return (int64)(C.QJSListIndexClamp_clamp2((C.ptrdiff_t)(start), (C.ptrdiff_t)(max), (C.ptrdiff_t)(min)))
}

// Delete this object from C++ memory.
func (this *QJSListIndexClamp) Delete() {
	C.QJSListIndexClamp_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJSListIndexClamp) GoGC() {
	runtime.SetFinalizer(this, func(this *QJSListIndexClamp) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QJSListForInIterator struct {
	h *C.QJSListForInIterator
}

func (this *QJSListForInIterator) cPointer() *C.QJSListForInIterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJSListForInIterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJSListForInIterator constructs the type using only CGO pointers.
func newQJSListForInIterator(h *C.QJSListForInIterator) *QJSListForInIterator {
	if h == nil {
		return nil
	}

	return &QJSListForInIterator{h: h}
}

// UnsafeNewQJSListForInIterator constructs the type using only unsafe pointers.
func UnsafeNewQJSListForInIterator(h unsafe.Pointer) *QJSListForInIterator {
	return newQJSListForInIterator((*C.QJSListForInIterator)(h))
}

// NewQJSListForInIterator constructs a new QJSListForInIterator object.
func NewQJSListForInIterator() *QJSListForInIterator {

	return newQJSListForInIterator(C.QJSListForInIterator_new())
}

// NewQJSListForInIterator2 constructs a new QJSListForInIterator object.
func NewQJSListForInIterator2(param1 *QJSListForInIterator) *QJSListForInIterator {

	return newQJSListForInIterator(C.QJSListForInIterator_new2(param1.cPointer()))
}

func (this *QJSListForInIterator) HasNext() bool {
	return (bool)(C.QJSListForInIterator_hasNext(this.h))
}

func (this *QJSListForInIterator) Next() int64 {
	return (int64)(C.QJSListForInIterator_next(this.h))
}

// Delete this object from C++ memory.
func (this *QJSListForInIterator) Delete() {
	C.QJSListForInIterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJSListForInIterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QJSListForInIterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QJSListForOfIterator struct {
	h *C.QJSListForOfIterator
}

func (this *QJSListForOfIterator) cPointer() *C.QJSListForOfIterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJSListForOfIterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJSListForOfIterator constructs the type using only CGO pointers.
func newQJSListForOfIterator(h *C.QJSListForOfIterator) *QJSListForOfIterator {
	if h == nil {
		return nil
	}

	return &QJSListForOfIterator{h: h}
}

// UnsafeNewQJSListForOfIterator constructs the type using only unsafe pointers.
func UnsafeNewQJSListForOfIterator(h unsafe.Pointer) *QJSListForOfIterator {
	return newQJSListForOfIterator((*C.QJSListForOfIterator)(h))
}

// NewQJSListForOfIterator constructs a new QJSListForOfIterator object.
func NewQJSListForOfIterator() *QJSListForOfIterator {

	return newQJSListForOfIterator(C.QJSListForOfIterator_new())
}

// NewQJSListForOfIterator2 constructs a new QJSListForOfIterator object.
func NewQJSListForOfIterator2(param1 *QJSListForOfIterator) *QJSListForOfIterator {

	return newQJSListForOfIterator(C.QJSListForOfIterator_new2(param1.cPointer()))
}

func (this *QJSListForOfIterator) Init() {
	C.QJSListForOfIterator_init(this.h)
}

// Delete this object from C++ memory.
func (this *QJSListForOfIterator) Delete() {
	C.QJSListForOfIterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJSListForOfIterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QJSListForOfIterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
