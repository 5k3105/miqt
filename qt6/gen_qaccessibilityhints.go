package qt6

/*

#include "gen_qaccessibilityhints.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAccessibilityHints struct {
	h *C.QAccessibilityHints
	*QObject
}

func (this *QAccessibilityHints) cPointer() *C.QAccessibilityHints {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibilityHints) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibilityHints constructs the type using only CGO pointers.
func newQAccessibilityHints(h *C.QAccessibilityHints) *QAccessibilityHints {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAccessibilityHints_virtbase(h, &outptr_QObject)

	return &QAccessibilityHints{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQAccessibilityHints constructs the type using only unsafe pointers.
func UnsafeNewQAccessibilityHints(h unsafe.Pointer) *QAccessibilityHints {
	return newQAccessibilityHints((*C.QAccessibilityHints)(h))
}

// NewQAccessibilityHints constructs a new QAccessibilityHints object.
func NewQAccessibilityHints() *QAccessibilityHints {

	return newQAccessibilityHints(C.QAccessibilityHints_new())
}

// NewQAccessibilityHints2 constructs a new QAccessibilityHints object.
func NewQAccessibilityHints2(parent *QObject) *QAccessibilityHints {

	return newQAccessibilityHints(C.QAccessibilityHints_new2(parent.cPointer()))
}

func (this *QAccessibilityHints) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAccessibilityHints_metaObject(this.h))
}

func (this *QAccessibilityHints) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAccessibilityHints_metacast(this.h, param1_Cstring))
}

func QAccessibilityHints_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAccessibilityHints_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibilityHints) ContrastPreference() ContrastPreference {
	return (ContrastPreference)(C.QAccessibilityHints_contrastPreference(this.h))
}

func (this *QAccessibilityHints) ContrastPreferenceChanged(contrastPreference ContrastPreference) {
	C.QAccessibilityHints_contrastPreferenceChanged(this.h, (C.int)(contrastPreference))
}
func (this *QAccessibilityHints) OnContrastPreferenceChanged(slot func(contrastPreference ContrastPreference)) {
	C.QAccessibilityHints_connect_contrastPreferenceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibilityHints_contrastPreferenceChanged
func miqt_exec_callback_QAccessibilityHints_contrastPreferenceChanged(cb C.intptr_t, contrastPreference C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(contrastPreference ContrastPreference))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (ContrastPreference)(contrastPreference)

	gofunc(slotval1)
}

func QAccessibilityHints_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAccessibilityHints_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibilityHints_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAccessibilityHints_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QAccessibilityHints that was directly constructed.
func (this *QAccessibilityHints) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QAccessibilityHints_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAccessibilityHints that was directly constructed.
func (this *QAccessibilityHints) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAccessibilityHints_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAccessibilityHints that was directly constructed.
func (this *QAccessibilityHints) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAccessibilityHints_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QAccessibilityHints that was directly constructed.
func (this *QAccessibilityHints) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAccessibilityHints_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QAccessibilityHints) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QAccessibilityHints_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAccessibilityHints) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QAccessibilityHints_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessibilityHints_event
func miqt_exec_callback_QAccessibilityHints_event(self *C.QAccessibilityHints, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QAccessibilityHints{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAccessibilityHints) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAccessibilityHints_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAccessibilityHints) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QAccessibilityHints_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessibilityHints_eventFilter
func miqt_exec_callback_QAccessibilityHints_eventFilter(self *C.QAccessibilityHints, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QAccessibilityHints{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAccessibilityHints) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAccessibilityHints_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAccessibilityHints) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QAccessibilityHints_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessibilityHints_timerEvent
func miqt_exec_callback_QAccessibilityHints_timerEvent(self *C.QAccessibilityHints, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QAccessibilityHints{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAccessibilityHints) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAccessibilityHints_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAccessibilityHints) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QAccessibilityHints_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessibilityHints_childEvent
func miqt_exec_callback_QAccessibilityHints_childEvent(self *C.QAccessibilityHints, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QAccessibilityHints{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAccessibilityHints) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAccessibilityHints_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAccessibilityHints) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAccessibilityHints_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessibilityHints_customEvent
func miqt_exec_callback_QAccessibilityHints_customEvent(self *C.QAccessibilityHints, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAccessibilityHints{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAccessibilityHints) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAccessibilityHints_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAccessibilityHints) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAccessibilityHints_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessibilityHints_connectNotify
func miqt_exec_callback_QAccessibilityHints_connectNotify(self *C.QAccessibilityHints, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAccessibilityHints{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAccessibilityHints) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAccessibilityHints_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAccessibilityHints) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAccessibilityHints_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessibilityHints_disconnectNotify
func miqt_exec_callback_QAccessibilityHints_disconnectNotify(self *C.QAccessibilityHints, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAccessibilityHints{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAccessibilityHints) Delete() {
	C.QAccessibilityHints_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAccessibilityHints) GoGC() {
	runtime.SetFinalizer(this, func(this *QAccessibilityHints) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
