package qt6

/*

#include "gen_qscreen_platform.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime/cgo"
	"unsafe"
)

type QNativeInterface__QWaylandScreen struct {
	h *C.QNativeInterface__QWaylandScreen
}

func (this *QNativeInterface__QWaylandScreen) cPointer() *C.QNativeInterface__QWaylandScreen {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNativeInterface__QWaylandScreen) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNativeInterface__QWaylandScreen constructs the type using only CGO pointers.
func newQNativeInterface__QWaylandScreen(h *C.QNativeInterface__QWaylandScreen) *QNativeInterface__QWaylandScreen {
	if h == nil {
		return nil
	}

	return &QNativeInterface__QWaylandScreen{h: h}
}

// UnsafeNewQNativeInterface__QWaylandScreen constructs the type using only unsafe pointers.
func UnsafeNewQNativeInterface__QWaylandScreen(h unsafe.Pointer) *QNativeInterface__QWaylandScreen {
	return newQNativeInterface__QWaylandScreen((*C.QNativeInterface__QWaylandScreen)(h))
}

// NewQNativeInterface__QWaylandScreen constructs a new QNativeInterface::QWaylandScreen object.
func NewQNativeInterface__QWaylandScreen() *QNativeInterface__QWaylandScreen {

	return newQNativeInterface__QWaylandScreen(C.QNativeInterface__QWaylandScreen_new())
}

func (this *QNativeInterface__QWaylandScreen) Output() *wl_output {
	int /* TODO  */
}
func (this *QNativeInterface__QWaylandScreen) OnOutput(slot func() *wl_output) {
	ok := C.QNativeInterface__QWaylandScreen_override_virtual_output(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNativeInterface__QWaylandScreen_output
func miqt_exec_callback_QNativeInterface__QWaylandScreen_output(self *C.QNativeInterface__QWaylandScreen, cb C.intptr_t) *C.wl_output {
	gofunc, ok := cgo.Handle(cb).Value().(func() *wl_output)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn

}
