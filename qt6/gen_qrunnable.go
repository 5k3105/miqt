package qt6

/*

#include "gen_qrunnable.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QRunnable struct {
	h *C.QRunnable
}

func (this *QRunnable) cPointer() *C.QRunnable {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRunnable) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRunnable constructs the type using only CGO pointers.
func newQRunnable(h *C.QRunnable) *QRunnable {
	if h == nil {
		return nil
	}

	return &QRunnable{h: h}
}

// UnsafeNewQRunnable constructs the type using only unsafe pointers.
func UnsafeNewQRunnable(h unsafe.Pointer) *QRunnable {
	return newQRunnable((*C.QRunnable)(h))
}

// NewQRunnable constructs a new QRunnable object.
func NewQRunnable() *QRunnable {

	return newQRunnable(C.QRunnable_new())
}

func (this *QRunnable) Run() {
	C.QRunnable_run(this.h)
}

func (this *QRunnable) AutoDelete() bool {
	return (bool)(C.QRunnable_autoDelete(this.h))
}

func (this *QRunnable) SetAutoDelete(autoDelete bool) {
	C.QRunnable_setAutoDelete(this.h, (C.bool)(autoDelete))
}
func (this *QRunnable) OnRun(slot func()) {
	ok := C.QRunnable_override_virtual_run(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRunnable_run
func miqt_exec_callback_QRunnable_run(self *C.QRunnable, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}

// Delete this object from C++ memory.
func (this *QRunnable) Delete() {
	C.QRunnable_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRunnable) GoGC() {
	runtime.SetFinalizer(this, func(this *QRunnable) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGenericRunnable struct {
	h *C.QGenericRunnable
	*QRunnable
}

func (this *QGenericRunnable) cPointer() *C.QGenericRunnable {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGenericRunnable) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGenericRunnable constructs the type using only CGO pointers.
func newQGenericRunnable(h *C.QGenericRunnable) *QGenericRunnable {
	if h == nil {
		return nil
	}
	var outptr_QRunnable *C.QRunnable = nil
	C.QGenericRunnable_virtbase(h, &outptr_QRunnable)

	return &QGenericRunnable{h: h,
		QRunnable: newQRunnable(outptr_QRunnable)}
}

// UnsafeNewQGenericRunnable constructs the type using only unsafe pointers.
func UnsafeNewQGenericRunnable(h unsafe.Pointer) *QGenericRunnable {
	return newQGenericRunnable((*C.QGenericRunnable)(h))
}

func (this *QGenericRunnable) Run() {
	C.QGenericRunnable_run(this.h)
}

// Delete this object from C++ memory.
func (this *QGenericRunnable) Delete() {
	C.QGenericRunnable_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGenericRunnable) GoGC() {
	runtime.SetFinalizer(this, func(this *QGenericRunnable) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
