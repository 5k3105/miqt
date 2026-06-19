package multimedia

/*

#include "gen_qcapturablewindow.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QCapturableWindow struct {
	h *C.QCapturableWindow
}

func (this *QCapturableWindow) cPointer() *C.QCapturableWindow {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCapturableWindow) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCapturableWindow constructs the type using only CGO pointers.
func newQCapturableWindow(h *C.QCapturableWindow) *QCapturableWindow {
	if h == nil {
		return nil
	}

	return &QCapturableWindow{h: h}
}

// UnsafeNewQCapturableWindow constructs the type using only unsafe pointers.
func UnsafeNewQCapturableWindow(h unsafe.Pointer) *QCapturableWindow {
	return newQCapturableWindow((*C.QCapturableWindow)(h))
}

// NewQCapturableWindow constructs a new QCapturableWindow object.
func NewQCapturableWindow() *QCapturableWindow {

	return newQCapturableWindow(C.QCapturableWindow_new())
}

// NewQCapturableWindow2 constructs a new QCapturableWindow object.
func NewQCapturableWindow2(window *qt6.QWindow) *QCapturableWindow {

	return newQCapturableWindow(C.QCapturableWindow_new2((*C.QWindow)(window.UnsafePointer())))
}

// NewQCapturableWindow3 constructs a new QCapturableWindow object.
func NewQCapturableWindow3(other *QCapturableWindow) *QCapturableWindow {

	return newQCapturableWindow(C.QCapturableWindow_new3(other.cPointer()))
}

func (this *QCapturableWindow) OperatorAssign(other *QCapturableWindow) {
	C.QCapturableWindow_operatorAssign(this.h, other.cPointer())
}

func (this *QCapturableWindow) Swap(other *QCapturableWindow) {
	C.QCapturableWindow_swap(this.h, other.cPointer())
}

func (this *QCapturableWindow) IsValid() bool {
	return (bool)(C.QCapturableWindow_isValid(this.h))
}

func (this *QCapturableWindow) Description() string {
	var _ms C.struct_miqt_string = C.QCapturableWindow_description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCapturableWindow) Delete() {
	C.QCapturableWindow_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCapturableWindow) GoGC() {
	runtime.SetFinalizer(this, func(this *QCapturableWindow) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
