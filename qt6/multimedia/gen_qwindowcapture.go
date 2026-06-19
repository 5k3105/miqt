package multimedia

/*

#include "gen_qwindowcapture.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWindowCapture__Error int

const (
	QWindowCapture__NoError               QWindowCapture__Error = 0
	QWindowCapture__InternalError         QWindowCapture__Error = 1
	QWindowCapture__CapturingNotSupported QWindowCapture__Error = 2
	QWindowCapture__CaptureFailed         QWindowCapture__Error = 4
	QWindowCapture__NotFound              QWindowCapture__Error = 5
)

type QWindowCapture struct {
	h *C.QWindowCapture
	*qt6.QObject
}

func (this *QWindowCapture) cPointer() *C.QWindowCapture {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWindowCapture) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWindowCapture constructs the type using only CGO pointers.
func newQWindowCapture(h *C.QWindowCapture) *QWindowCapture {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWindowCapture_virtbase(h, &outptr_QObject)

	return &QWindowCapture{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWindowCapture constructs the type using only unsafe pointers.
func UnsafeNewQWindowCapture(h unsafe.Pointer) *QWindowCapture {
	return newQWindowCapture((*C.QWindowCapture)(h))
}

// NewQWindowCapture constructs a new QWindowCapture object.
func NewQWindowCapture() *QWindowCapture {

	return newQWindowCapture(C.QWindowCapture_new())
}

// NewQWindowCapture2 constructs a new QWindowCapture object.
func NewQWindowCapture2(parent *qt6.QObject) *QWindowCapture {

	return newQWindowCapture(C.QWindowCapture_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QWindowCapture) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWindowCapture_metaObject(this.h)))
}

func (this *QWindowCapture) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWindowCapture_metacast(this.h, param1_Cstring))
}

func QWindowCapture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWindowCapture_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWindowCapture_CapturableWindows() []QCapturableWindow {
	var _ma C.struct_miqt_array = C.QWindowCapture_capturableWindows()
	_ret := make([]QCapturableWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QCapturableWindow)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCapturableWindow(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWindowCapture) CaptureSession() *QMediaCaptureSession {
	return newQMediaCaptureSession(C.QWindowCapture_captureSession(this.h))
}

func (this *QWindowCapture) SetWindow(window QCapturableWindow) {
	C.QWindowCapture_setWindow(this.h, window.cPointer())
}

func (this *QWindowCapture) Window() *QCapturableWindow {
	_goptr := newQCapturableWindow(C.QWindowCapture_window(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindowCapture) IsActive() bool {
	return (bool)(C.QWindowCapture_isActive(this.h))
}

func (this *QWindowCapture) Error() Error {
	int /* TODO  */
}

func (this *QWindowCapture) ErrorString() string {
	var _ms C.struct_miqt_string = C.QWindowCapture_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWindowCapture) SetActive(active bool) {
	C.QWindowCapture_setActive(this.h, (C.bool)(active))
}

func (this *QWindowCapture) Start() {
	C.QWindowCapture_start(this.h)
}

func (this *QWindowCapture) Stop() {
	C.QWindowCapture_stop(this.h)
}

func (this *QWindowCapture) ActiveChanged(param1 bool) {
	C.QWindowCapture_activeChanged(this.h, (C.bool)(param1))
}
func (this *QWindowCapture) OnActiveChanged(slot func(param1 bool)) {
	C.QWindowCapture_connect_activeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindowCapture_activeChanged
func miqt_exec_callback_QWindowCapture_activeChanged(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QWindowCapture) WindowChanged(window QCapturableWindow) {
	C.QWindowCapture_windowChanged(this.h, window.cPointer())
}
func (this *QWindowCapture) OnWindowChanged(slot func(window QCapturableWindow)) {
	C.QWindowCapture_connect_windowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindowCapture_windowChanged
func miqt_exec_callback_QWindowCapture_windowChanged(cb C.intptr_t, window *C.QCapturableWindow) {
	gofunc, ok := cgo.Handle(cb).Value().(func(window QCapturableWindow))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	window_goptr := newQCapturableWindow(window)
	window_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *window_goptr

	gofunc(slotval1)
}

func (this *QWindowCapture) ErrorChanged() {
	C.QWindowCapture_errorChanged(this.h)
}
func (this *QWindowCapture) OnErrorChanged(slot func()) {
	C.QWindowCapture_connect_errorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindowCapture_errorChanged
func miqt_exec_callback_QWindowCapture_errorChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWindowCapture) ErrorOccurred(error QWindowCapture__Error, errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))
	C.QWindowCapture_errorOccurred(this.h, (C.int)(error), errorString_ms)
}
func (this *QWindowCapture) OnErrorOccurred(slot func(error QWindowCapture__Error, errorString string)) {
	C.QWindowCapture_connect_errorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindowCapture_errorOccurred
func miqt_exec_callback_QWindowCapture_errorOccurred(cb C.intptr_t, error C.int, errorString C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QWindowCapture__Error, errorString string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWindowCapture__Error)(error)

	var errorString_ms C.struct_miqt_string = errorString
	errorString_ret := C.GoStringN(errorString_ms.data, C.int(int64(errorString_ms.len)))
	C.free(unsafe.Pointer(errorString_ms.data))
	slotval2 := errorString_ret

	gofunc(slotval1, slotval2)
}

func QWindowCapture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWindowCapture_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWindowCapture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWindowCapture_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QWindowCapture that was directly constructed.
func (this *QWindowCapture) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QWindowCapture_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QWindowCapture that was directly constructed.
func (this *QWindowCapture) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWindowCapture_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QWindowCapture that was directly constructed.
func (this *QWindowCapture) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWindowCapture_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QWindowCapture that was directly constructed.
func (this *QWindowCapture) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWindowCapture_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QWindowCapture) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QWindowCapture_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWindowCapture) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QWindowCapture_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindowCapture_event
func miqt_exec_callback_QWindowCapture_event(self *C.QWindowCapture, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWindowCapture{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWindowCapture) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QWindowCapture_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWindowCapture) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QWindowCapture_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindowCapture_eventFilter
func miqt_exec_callback_QWindowCapture_eventFilter(self *C.QWindowCapture, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWindowCapture{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWindowCapture) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QWindowCapture_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWindowCapture) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QWindowCapture_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindowCapture_timerEvent
func miqt_exec_callback_QWindowCapture_timerEvent(self *C.QWindowCapture, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QWindowCapture{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWindowCapture) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QWindowCapture_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWindowCapture) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QWindowCapture_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindowCapture_childEvent
func miqt_exec_callback_QWindowCapture_childEvent(self *C.QWindowCapture, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QWindowCapture{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWindowCapture) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QWindowCapture_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWindowCapture) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QWindowCapture_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindowCapture_customEvent
func miqt_exec_callback_QWindowCapture_customEvent(self *C.QWindowCapture, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWindowCapture{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWindowCapture) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QWindowCapture_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWindowCapture) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QWindowCapture_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindowCapture_connectNotify
func miqt_exec_callback_QWindowCapture_connectNotify(self *C.QWindowCapture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWindowCapture{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWindowCapture) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QWindowCapture_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWindowCapture) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QWindowCapture_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindowCapture_disconnectNotify
func miqt_exec_callback_QWindowCapture_disconnectNotify(self *C.QWindowCapture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWindowCapture{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWindowCapture) Delete() {
	C.QWindowCapture_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWindowCapture) GoGC() {
	runtime.SetFinalizer(this, func(this *QWindowCapture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
