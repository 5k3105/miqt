package multimedia

/*

#include "gen_qaudiobufferoutput.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioBufferOutput struct {
	h *C.QAudioBufferOutput
	*qt6.QObject
}

func (this *QAudioBufferOutput) cPointer() *C.QAudioBufferOutput {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioBufferOutput) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioBufferOutput constructs the type using only CGO pointers.
func newQAudioBufferOutput(h *C.QAudioBufferOutput) *QAudioBufferOutput {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAudioBufferOutput_virtbase(h, &outptr_QObject)

	return &QAudioBufferOutput{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQAudioBufferOutput constructs the type using only unsafe pointers.
func UnsafeNewQAudioBufferOutput(h unsafe.Pointer) *QAudioBufferOutput {
	return newQAudioBufferOutput((*C.QAudioBufferOutput)(h))
}

// NewQAudioBufferOutput constructs a new QAudioBufferOutput object.
func NewQAudioBufferOutput() *QAudioBufferOutput {

	return newQAudioBufferOutput(C.QAudioBufferOutput_new())
}

// NewQAudioBufferOutput2 constructs a new QAudioBufferOutput object.
func NewQAudioBufferOutput2(format *QAudioFormat) *QAudioBufferOutput {

	return newQAudioBufferOutput(C.QAudioBufferOutput_new2(format.cPointer()))
}

// NewQAudioBufferOutput3 constructs a new QAudioBufferOutput object.
func NewQAudioBufferOutput3(parent *qt6.QObject) *QAudioBufferOutput {

	return newQAudioBufferOutput(C.QAudioBufferOutput_new3((*C.QObject)(parent.UnsafePointer())))
}

// NewQAudioBufferOutput4 constructs a new QAudioBufferOutput object.
func NewQAudioBufferOutput4(format *QAudioFormat, parent *qt6.QObject) *QAudioBufferOutput {

	return newQAudioBufferOutput(C.QAudioBufferOutput_new4(format.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QAudioBufferOutput) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioBufferOutput_metaObject(this.h)))
}

func (this *QAudioBufferOutput) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioBufferOutput_metacast(this.h, param1_Cstring))
}

func QAudioBufferOutput_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioBufferOutput_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioBufferOutput) Format() *QAudioFormat {
	_goptr := newQAudioFormat(C.QAudioBufferOutput_format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioBufferOutput) AudioBufferReceived(buffer *QAudioBuffer) {
	C.QAudioBufferOutput_audioBufferReceived(this.h, buffer.cPointer())
}
func (this *QAudioBufferOutput) OnAudioBufferReceived(slot func(buffer *QAudioBuffer)) {
	C.QAudioBufferOutput_connect_audioBufferReceived(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioBufferOutput_audioBufferReceived
func miqt_exec_callback_QAudioBufferOutput_audioBufferReceived(cb C.intptr_t, buffer *C.QAudioBuffer) {
	gofunc, ok := cgo.Handle(cb).Value().(func(buffer *QAudioBuffer))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAudioBuffer(buffer)

	gofunc(slotval1)
}

func QAudioBufferOutput_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioBufferOutput_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioBufferOutput_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioBufferOutput_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QAudioBufferOutput that was directly constructed.
func (this *QAudioBufferOutput) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QAudioBufferOutput_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAudioBufferOutput that was directly constructed.
func (this *QAudioBufferOutput) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAudioBufferOutput_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAudioBufferOutput that was directly constructed.
func (this *QAudioBufferOutput) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAudioBufferOutput_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QAudioBufferOutput that was directly constructed.
func (this *QAudioBufferOutput) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAudioBufferOutput_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QAudioBufferOutput) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QAudioBufferOutput_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioBufferOutput) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QAudioBufferOutput_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioBufferOutput_event
func miqt_exec_callback_QAudioBufferOutput_event(self *C.QAudioBufferOutput, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioBufferOutput{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAudioBufferOutput) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QAudioBufferOutput_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioBufferOutput) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QAudioBufferOutput_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioBufferOutput_eventFilter
func miqt_exec_callback_QAudioBufferOutput_eventFilter(self *C.QAudioBufferOutput, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioBufferOutput{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAudioBufferOutput) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QAudioBufferOutput_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioBufferOutput) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QAudioBufferOutput_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioBufferOutput_timerEvent
func miqt_exec_callback_QAudioBufferOutput_timerEvent(self *C.QAudioBufferOutput, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAudioBufferOutput{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioBufferOutput) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QAudioBufferOutput_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioBufferOutput) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QAudioBufferOutput_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioBufferOutput_childEvent
func miqt_exec_callback_QAudioBufferOutput_childEvent(self *C.QAudioBufferOutput, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAudioBufferOutput{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioBufferOutput) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QAudioBufferOutput_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioBufferOutput) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QAudioBufferOutput_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioBufferOutput_customEvent
func miqt_exec_callback_QAudioBufferOutput_customEvent(self *C.QAudioBufferOutput, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioBufferOutput{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioBufferOutput) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioBufferOutput_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioBufferOutput) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAudioBufferOutput_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioBufferOutput_connectNotify
func miqt_exec_callback_QAudioBufferOutput_connectNotify(self *C.QAudioBufferOutput, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioBufferOutput{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioBufferOutput) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioBufferOutput_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioBufferOutput) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAudioBufferOutput_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioBufferOutput_disconnectNotify
func miqt_exec_callback_QAudioBufferOutput_disconnectNotify(self *C.QAudioBufferOutput, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioBufferOutput{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAudioBufferOutput) Delete() {
	C.QAudioBufferOutput_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioBufferOutput) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioBufferOutput) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
