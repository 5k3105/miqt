package multimedia

/*

#include "gen_qscreencapture.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QScreenCapture__Error int

const (
	QScreenCapture__NoError               QScreenCapture__Error = 0
	QScreenCapture__InternalError         QScreenCapture__Error = 1
	QScreenCapture__CapturingNotSupported QScreenCapture__Error = 2
	QScreenCapture__CaptureFailed         QScreenCapture__Error = 4
	QScreenCapture__NotFound              QScreenCapture__Error = 5
)

type QScreenCapture struct {
	h *C.QScreenCapture
	*qt6.QObject
}

func (this *QScreenCapture) cPointer() *C.QScreenCapture {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScreenCapture) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScreenCapture constructs the type using only CGO pointers.
func newQScreenCapture(h *C.QScreenCapture) *QScreenCapture {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QScreenCapture_virtbase(h, &outptr_QObject)

	return &QScreenCapture{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQScreenCapture constructs the type using only unsafe pointers.
func UnsafeNewQScreenCapture(h unsafe.Pointer) *QScreenCapture {
	return newQScreenCapture((*C.QScreenCapture)(h))
}

// NewQScreenCapture constructs a new QScreenCapture object.
func NewQScreenCapture() *QScreenCapture {

	return newQScreenCapture(C.QScreenCapture_new())
}

// NewQScreenCapture2 constructs a new QScreenCapture object.
func NewQScreenCapture2(parent *qt6.QObject) *QScreenCapture {

	return newQScreenCapture(C.QScreenCapture_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QScreenCapture) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QScreenCapture_metaObject(this.h)))
}

func (this *QScreenCapture) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScreenCapture_metacast(this.h, param1_Cstring))
}

func QScreenCapture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScreenCapture_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScreenCapture) CaptureSession() *QMediaCaptureSession {
	return newQMediaCaptureSession(C.QScreenCapture_captureSession(this.h))
}

func (this *QScreenCapture) SetScreen(screen *qt6.QScreen) {
	C.QScreenCapture_setScreen(this.h, (*C.QScreen)(screen.UnsafePointer()))
}

func (this *QScreenCapture) Screen() *qt6.QScreen {
	return qt6.UnsafeNewQScreen(unsafe.Pointer(C.QScreenCapture_screen(this.h)))
}

func (this *QScreenCapture) IsActive() bool {
	return (bool)(C.QScreenCapture_isActive(this.h))
}

func (this *QScreenCapture) Error() Error {
	int /* TODO  */
}

func (this *QScreenCapture) ErrorString() string {
	var _ms C.struct_miqt_string = C.QScreenCapture_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScreenCapture) SetActive(active bool) {
	C.QScreenCapture_setActive(this.h, (C.bool)(active))
}

func (this *QScreenCapture) Start() {
	C.QScreenCapture_start(this.h)
}

func (this *QScreenCapture) Stop() {
	C.QScreenCapture_stop(this.h)
}

func (this *QScreenCapture) ActiveChanged(param1 bool) {
	C.QScreenCapture_activeChanged(this.h, (C.bool)(param1))
}
func (this *QScreenCapture) OnActiveChanged(slot func(param1 bool)) {
	C.QScreenCapture_connect_activeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScreenCapture_activeChanged
func miqt_exec_callback_QScreenCapture_activeChanged(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QScreenCapture) ErrorChanged() {
	C.QScreenCapture_errorChanged(this.h)
}
func (this *QScreenCapture) OnErrorChanged(slot func()) {
	C.QScreenCapture_connect_errorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScreenCapture_errorChanged
func miqt_exec_callback_QScreenCapture_errorChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QScreenCapture) ScreenChanged(param1 *qt6.QScreen) {
	C.QScreenCapture_screenChanged(this.h, (*C.QScreen)(param1.UnsafePointer()))
}
func (this *QScreenCapture) OnScreenChanged(slot func(param1 *qt6.QScreen)) {
	C.QScreenCapture_connect_screenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScreenCapture_screenChanged
func miqt_exec_callback_QScreenCapture_screenChanged(cb C.intptr_t, param1 *C.QScreen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *qt6.QScreen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQScreen(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QScreenCapture) ErrorOccurred(error QScreenCapture__Error, errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))
	C.QScreenCapture_errorOccurred(this.h, (C.int)(error), errorString_ms)
}
func (this *QScreenCapture) OnErrorOccurred(slot func(error QScreenCapture__Error, errorString string)) {
	C.QScreenCapture_connect_errorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScreenCapture_errorOccurred
func miqt_exec_callback_QScreenCapture_errorOccurred(cb C.intptr_t, error C.int, errorString C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QScreenCapture__Error, errorString string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QScreenCapture__Error)(error)

	var errorString_ms C.struct_miqt_string = errorString
	errorString_ret := C.GoStringN(errorString_ms.data, C.int(int64(errorString_ms.len)))
	C.free(unsafe.Pointer(errorString_ms.data))
	slotval2 := errorString_ret

	gofunc(slotval1, slotval2)
}

func QScreenCapture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScreenCapture_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScreenCapture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScreenCapture_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QScreenCapture that was directly constructed.
func (this *QScreenCapture) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QScreenCapture_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QScreenCapture that was directly constructed.
func (this *QScreenCapture) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QScreenCapture_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QScreenCapture that was directly constructed.
func (this *QScreenCapture) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QScreenCapture_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QScreenCapture that was directly constructed.
func (this *QScreenCapture) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QScreenCapture_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QScreenCapture) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QScreenCapture_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScreenCapture) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QScreenCapture_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScreenCapture_event
func miqt_exec_callback_QScreenCapture_event(self *C.QScreenCapture, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScreenCapture{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScreenCapture) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QScreenCapture_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScreenCapture) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QScreenCapture_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScreenCapture_eventFilter
func miqt_exec_callback_QScreenCapture_eventFilter(self *C.QScreenCapture, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScreenCapture{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QScreenCapture) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QScreenCapture_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QScreenCapture) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QScreenCapture_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScreenCapture_timerEvent
func miqt_exec_callback_QScreenCapture_timerEvent(self *C.QScreenCapture, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QScreenCapture{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QScreenCapture) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QScreenCapture_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QScreenCapture) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QScreenCapture_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScreenCapture_childEvent
func miqt_exec_callback_QScreenCapture_childEvent(self *C.QScreenCapture, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QScreenCapture{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QScreenCapture) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QScreenCapture_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QScreenCapture) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QScreenCapture_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScreenCapture_customEvent
func miqt_exec_callback_QScreenCapture_customEvent(self *C.QScreenCapture, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QScreenCapture{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QScreenCapture) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QScreenCapture_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScreenCapture) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QScreenCapture_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScreenCapture_connectNotify
func miqt_exec_callback_QScreenCapture_connectNotify(self *C.QScreenCapture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScreenCapture{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QScreenCapture) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QScreenCapture_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScreenCapture) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QScreenCapture_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScreenCapture_disconnectNotify
func miqt_exec_callback_QScreenCapture_disconnectNotify(self *C.QScreenCapture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScreenCapture{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QScreenCapture) Delete() {
	C.QScreenCapture_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScreenCapture) GoGC() {
	runtime.SetFinalizer(this, func(this *QScreenCapture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
