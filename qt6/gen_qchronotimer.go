package qt6

/*

#include "gen_qchronotimer.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QChronoTimer struct {
	h *C.QChronoTimer
	*QObject
}

func (this *QChronoTimer) cPointer() *C.QChronoTimer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QChronoTimer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQChronoTimer constructs the type using only CGO pointers.
func newQChronoTimer(h *C.QChronoTimer) *QChronoTimer {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QChronoTimer_virtbase(h, &outptr_QObject)

	return &QChronoTimer{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQChronoTimer constructs the type using only unsafe pointers.
func UnsafeNewQChronoTimer(h unsafe.Pointer) *QChronoTimer {
	return newQChronoTimer((*C.QChronoTimer)(h))
}

// NewQChronoTimer constructs a new QChronoTimer object.
func NewQChronoTimer() *QChronoTimer {

	return newQChronoTimer(C.QChronoTimer_new())
}

// NewQChronoTimer2 constructs a new QChronoTimer object.
func NewQChronoTimer2(parent *QObject) *QChronoTimer {

	return newQChronoTimer(C.QChronoTimer_new2(parent.cPointer()))
}

func (this *QChronoTimer) MetaObject() *QMetaObject {
	return newQMetaObject(C.QChronoTimer_metaObject(this.h))
}

func (this *QChronoTimer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QChronoTimer_metacast(this.h, param1_Cstring))
}

func QChronoTimer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QChronoTimer_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QChronoTimer) IsActive() bool {
	return (bool)(C.QChronoTimer_isActive(this.h))
}

func (this *QChronoTimer) Id() TimerId {
	return (TimerId)(C.QChronoTimer_id(this.h))
}

func (this *QChronoTimer) SetTimerType(atype TimerType) {
	C.QChronoTimer_setTimerType(this.h, (C.int)(atype))
}

func (this *QChronoTimer) TimerType() TimerType {
	return (TimerType)(C.QChronoTimer_timerType(this.h))
}

func (this *QChronoTimer) SetSingleShot(singleShot bool) {
	C.QChronoTimer_setSingleShot(this.h, (C.bool)(singleShot))
}

func (this *QChronoTimer) IsSingleShot() bool {
	return (bool)(C.QChronoTimer_isSingleShot(this.h))
}

func (this *QChronoTimer) Start() {
	C.QChronoTimer_start(this.h)
}

func (this *QChronoTimer) Stop() {
	C.QChronoTimer_stop(this.h)
}

func QChronoTimer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QChronoTimer_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QChronoTimer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QChronoTimer_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QChronoTimer that was directly constructed.
func (this *QChronoTimer) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QChronoTimer_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QChronoTimer that was directly constructed.
func (this *QChronoTimer) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QChronoTimer_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QChronoTimer that was directly constructed.
func (this *QChronoTimer) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QChronoTimer_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QChronoTimer that was directly constructed.
func (this *QChronoTimer) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QChronoTimer_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QChronoTimer) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QChronoTimer_virtualbase_timerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QChronoTimer) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	ok := C.QChronoTimer_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChronoTimer_timerEvent
func miqt_exec_callback_QChronoTimer_timerEvent(self *C.QChronoTimer, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(param1)

	gofunc((&QChronoTimer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QChronoTimer) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QChronoTimer_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QChronoTimer) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QChronoTimer_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChronoTimer_event
func miqt_exec_callback_QChronoTimer_event(self *C.QChronoTimer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QChronoTimer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QChronoTimer) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QChronoTimer_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QChronoTimer) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QChronoTimer_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChronoTimer_eventFilter
func miqt_exec_callback_QChronoTimer_eventFilter(self *C.QChronoTimer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QChronoTimer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QChronoTimer) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QChronoTimer_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QChronoTimer) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QChronoTimer_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChronoTimer_childEvent
func miqt_exec_callback_QChronoTimer_childEvent(self *C.QChronoTimer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QChronoTimer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QChronoTimer) callVirtualBase_CustomEvent(event *QEvent) {

	C.QChronoTimer_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QChronoTimer) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QChronoTimer_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChronoTimer_customEvent
func miqt_exec_callback_QChronoTimer_customEvent(self *C.QChronoTimer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QChronoTimer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QChronoTimer) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QChronoTimer_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QChronoTimer) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QChronoTimer_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChronoTimer_connectNotify
func miqt_exec_callback_QChronoTimer_connectNotify(self *C.QChronoTimer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QChronoTimer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QChronoTimer) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QChronoTimer_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QChronoTimer) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QChronoTimer_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChronoTimer_disconnectNotify
func miqt_exec_callback_QChronoTimer_disconnectNotify(self *C.QChronoTimer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QChronoTimer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QChronoTimer) Delete() {
	C.QChronoTimer_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QChronoTimer) GoGC() {
	runtime.SetFinalizer(this, func(this *QChronoTimer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
