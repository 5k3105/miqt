package network

/*

#include "gen_qrestaccessmanager.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QRestAccessManager struct {
	h *C.QRestAccessManager
	*qt6.QObject
}

func (this *QRestAccessManager) cPointer() *C.QRestAccessManager {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRestAccessManager) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRestAccessManager constructs the type using only CGO pointers.
func newQRestAccessManager(h *C.QRestAccessManager) *QRestAccessManager {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QRestAccessManager_virtbase(h, &outptr_QObject)

	return &QRestAccessManager{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQRestAccessManager constructs the type using only unsafe pointers.
func UnsafeNewQRestAccessManager(h unsafe.Pointer) *QRestAccessManager {
	return newQRestAccessManager((*C.QRestAccessManager)(h))
}

// NewQRestAccessManager constructs a new QRestAccessManager object.
func NewQRestAccessManager(manager *QNetworkAccessManager) *QRestAccessManager {

	return newQRestAccessManager(C.QRestAccessManager_new(manager.cPointer()))
}

// NewQRestAccessManager2 constructs a new QRestAccessManager object.
func NewQRestAccessManager2(manager *QNetworkAccessManager, parent *qt6.QObject) *QRestAccessManager {

	return newQRestAccessManager(C.QRestAccessManager_new2(manager.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QRestAccessManager) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QRestAccessManager_metaObject(this.h)))
}

func (this *QRestAccessManager) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRestAccessManager_metacast(this.h, param1_Cstring))
}

func QRestAccessManager_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRestAccessManager_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRestAccessManager) NetworkAccessManager() *QNetworkAccessManager {
	return newQNetworkAccessManager(C.QRestAccessManager_networkAccessManager(this.h))
}

func (this *QRestAccessManager) DeleteResource(request *QNetworkRequest) *QNetworkReply {
	return newQNetworkReply(C.QRestAccessManager_deleteResource(this.h, request.cPointer()))
}

func (this *QRestAccessManager) Head(request *QNetworkRequest) *QNetworkReply {
	return newQNetworkReply(C.QRestAccessManager_head(this.h, request.cPointer()))
}

func (this *QRestAccessManager) Get(request *QNetworkRequest) *QNetworkReply {
	return newQNetworkReply(C.QRestAccessManager_get(this.h, request.cPointer()))
}

func (this *QRestAccessManager) Get2(request *QNetworkRequest, data []byte) *QNetworkReply {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	return newQNetworkReply(C.QRestAccessManager_get2(this.h, request.cPointer(), data_alias))
}

func (this *QRestAccessManager) Get3(request *QNetworkRequest, data *qt6.QJsonDocument) *QNetworkReply {
	return newQNetworkReply(C.QRestAccessManager_get3(this.h, request.cPointer(), (*C.QJsonDocument)(data.UnsafePointer())))
}

func (this *QRestAccessManager) Get4(request *QNetworkRequest, data *qt6.QIODevice) *QNetworkReply {
	return newQNetworkReply(C.QRestAccessManager_get4(this.h, request.cPointer(), (*C.QIODevice)(data.UnsafePointer())))
}

func (this *QRestAccessManager) Post(request *QNetworkRequest, data *qt6.QJsonDocument) *QNetworkReply {
	return newQNetworkReply(C.QRestAccessManager_post(this.h, request.cPointer(), (*C.QJsonDocument)(data.UnsafePointer())))
}

func (this *QRestAccessManager) Post2(request *QNetworkRequest, data map[string]qt6.QVariant) *QNetworkReply {
	data_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(data))))
	defer C.free(unsafe.Pointer(data_Keys_CArray))
	data_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(data))))
	defer C.free(unsafe.Pointer(data_Values_CArray))
	data_ctr := 0
	for data_k, data_v := range data {
		data_k_ms := C.struct_miqt_string{}
		data_k_ms.data = C.CString(data_k)
		data_k_ms.len = C.size_t(len(data_k))
		defer C.free(unsafe.Pointer(data_k_ms.data))
		data_Keys_CArray[data_ctr] = data_k_ms
		data_Values_CArray[data_ctr] = (*C.QVariant)(data_v.UnsafePointer())
		data_ctr++
	}
	data_mm := C.struct_miqt_map{
		len:    C.size_t(len(data)),
		keys:   unsafe.Pointer(data_Keys_CArray),
		values: unsafe.Pointer(data_Values_CArray),
	}
	return newQNetworkReply(C.QRestAccessManager_post2(this.h, request.cPointer(), data_mm))
}

func (this *QRestAccessManager) Post3(request *QNetworkRequest, data []byte) *QNetworkReply {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	return newQNetworkReply(C.QRestAccessManager_post3(this.h, request.cPointer(), data_alias))
}

func (this *QRestAccessManager) Post4(request *QNetworkRequest, data *QHttpMultiPart) *QNetworkReply {
	return newQNetworkReply(C.QRestAccessManager_post4(this.h, request.cPointer(), data.cPointer()))
}

func (this *QRestAccessManager) Post5(request *QNetworkRequest, data *qt6.QIODevice) *QNetworkReply {
	return newQNetworkReply(C.QRestAccessManager_post5(this.h, request.cPointer(), (*C.QIODevice)(data.UnsafePointer())))
}

func (this *QRestAccessManager) Put(request *QNetworkRequest, data *qt6.QJsonDocument) *QNetworkReply {
	return newQNetworkReply(C.QRestAccessManager_put(this.h, request.cPointer(), (*C.QJsonDocument)(data.UnsafePointer())))
}

func (this *QRestAccessManager) Put2(request *QNetworkRequest, data map[string]qt6.QVariant) *QNetworkReply {
	data_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(data))))
	defer C.free(unsafe.Pointer(data_Keys_CArray))
	data_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(data))))
	defer C.free(unsafe.Pointer(data_Values_CArray))
	data_ctr := 0
	for data_k, data_v := range data {
		data_k_ms := C.struct_miqt_string{}
		data_k_ms.data = C.CString(data_k)
		data_k_ms.len = C.size_t(len(data_k))
		defer C.free(unsafe.Pointer(data_k_ms.data))
		data_Keys_CArray[data_ctr] = data_k_ms
		data_Values_CArray[data_ctr] = (*C.QVariant)(data_v.UnsafePointer())
		data_ctr++
	}
	data_mm := C.struct_miqt_map{
		len:    C.size_t(len(data)),
		keys:   unsafe.Pointer(data_Keys_CArray),
		values: unsafe.Pointer(data_Values_CArray),
	}
	return newQNetworkReply(C.QRestAccessManager_put2(this.h, request.cPointer(), data_mm))
}

func (this *QRestAccessManager) Put3(request *QNetworkRequest, data []byte) *QNetworkReply {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	return newQNetworkReply(C.QRestAccessManager_put3(this.h, request.cPointer(), data_alias))
}

func (this *QRestAccessManager) Put4(request *QNetworkRequest, data *QHttpMultiPart) *QNetworkReply {
	return newQNetworkReply(C.QRestAccessManager_put4(this.h, request.cPointer(), data.cPointer()))
}

func (this *QRestAccessManager) Put5(request *QNetworkRequest, data *qt6.QIODevice) *QNetworkReply {
	return newQNetworkReply(C.QRestAccessManager_put5(this.h, request.cPointer(), (*C.QIODevice)(data.UnsafePointer())))
}

func (this *QRestAccessManager) Patch(request *QNetworkRequest, data *qt6.QJsonDocument) *QNetworkReply {
	return newQNetworkReply(C.QRestAccessManager_patch(this.h, request.cPointer(), (*C.QJsonDocument)(data.UnsafePointer())))
}

func (this *QRestAccessManager) Patch2(request *QNetworkRequest, data map[string]qt6.QVariant) *QNetworkReply {
	data_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(data))))
	defer C.free(unsafe.Pointer(data_Keys_CArray))
	data_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(data))))
	defer C.free(unsafe.Pointer(data_Values_CArray))
	data_ctr := 0
	for data_k, data_v := range data {
		data_k_ms := C.struct_miqt_string{}
		data_k_ms.data = C.CString(data_k)
		data_k_ms.len = C.size_t(len(data_k))
		defer C.free(unsafe.Pointer(data_k_ms.data))
		data_Keys_CArray[data_ctr] = data_k_ms
		data_Values_CArray[data_ctr] = (*C.QVariant)(data_v.UnsafePointer())
		data_ctr++
	}
	data_mm := C.struct_miqt_map{
		len:    C.size_t(len(data)),
		keys:   unsafe.Pointer(data_Keys_CArray),
		values: unsafe.Pointer(data_Values_CArray),
	}
	return newQNetworkReply(C.QRestAccessManager_patch2(this.h, request.cPointer(), data_mm))
}

func (this *QRestAccessManager) Patch3(request *QNetworkRequest, data []byte) *QNetworkReply {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	return newQNetworkReply(C.QRestAccessManager_patch3(this.h, request.cPointer(), data_alias))
}

func (this *QRestAccessManager) Patch4(request *QNetworkRequest, data *qt6.QIODevice) *QNetworkReply {
	return newQNetworkReply(C.QRestAccessManager_patch4(this.h, request.cPointer(), (*C.QIODevice)(data.UnsafePointer())))
}

func (this *QRestAccessManager) SendCustomRequest(request *QNetworkRequest, method []byte, data []byte) *QNetworkReply {
	method_alias := C.struct_miqt_string{}
	if len(method) > 0 {
		method_alias.data = (*C.char)(unsafe.Pointer(&method[0]))
	} else {
		method_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	method_alias.len = C.size_t(len(method))
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	return newQNetworkReply(C.QRestAccessManager_sendCustomRequest(this.h, request.cPointer(), method_alias, data_alias))
}

func (this *QRestAccessManager) SendCustomRequest2(request *QNetworkRequest, method []byte, data *qt6.QIODevice) *QNetworkReply {
	method_alias := C.struct_miqt_string{}
	if len(method) > 0 {
		method_alias.data = (*C.char)(unsafe.Pointer(&method[0]))
	} else {
		method_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	method_alias.len = C.size_t(len(method))
	return newQNetworkReply(C.QRestAccessManager_sendCustomRequest2(this.h, request.cPointer(), method_alias, (*C.QIODevice)(data.UnsafePointer())))
}

func (this *QRestAccessManager) SendCustomRequest3(request *QNetworkRequest, method []byte, data *QHttpMultiPart) *QNetworkReply {
	method_alias := C.struct_miqt_string{}
	if len(method) > 0 {
		method_alias.data = (*C.char)(unsafe.Pointer(&method[0]))
	} else {
		method_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	method_alias.len = C.size_t(len(method))
	return newQNetworkReply(C.QRestAccessManager_sendCustomRequest3(this.h, request.cPointer(), method_alias, data.cPointer()))
}

func QRestAccessManager_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRestAccessManager_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRestAccessManager_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRestAccessManager_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QRestAccessManager that was directly constructed.
func (this *QRestAccessManager) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QRestAccessManager_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QRestAccessManager that was directly constructed.
func (this *QRestAccessManager) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QRestAccessManager_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QRestAccessManager that was directly constructed.
func (this *QRestAccessManager) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QRestAccessManager_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QRestAccessManager that was directly constructed.
func (this *QRestAccessManager) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QRestAccessManager_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QRestAccessManager) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QRestAccessManager_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QRestAccessManager) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QRestAccessManager_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRestAccessManager_event
func miqt_exec_callback_QRestAccessManager_event(self *C.QRestAccessManager, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QRestAccessManager{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QRestAccessManager) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QRestAccessManager_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QRestAccessManager) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QRestAccessManager_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRestAccessManager_eventFilter
func miqt_exec_callback_QRestAccessManager_eventFilter(self *C.QRestAccessManager, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QRestAccessManager{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QRestAccessManager) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QRestAccessManager_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QRestAccessManager) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QRestAccessManager_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRestAccessManager_timerEvent
func miqt_exec_callback_QRestAccessManager_timerEvent(self *C.QRestAccessManager, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QRestAccessManager{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QRestAccessManager) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QRestAccessManager_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QRestAccessManager) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QRestAccessManager_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRestAccessManager_childEvent
func miqt_exec_callback_QRestAccessManager_childEvent(self *C.QRestAccessManager, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QRestAccessManager{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QRestAccessManager) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QRestAccessManager_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QRestAccessManager) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QRestAccessManager_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRestAccessManager_customEvent
func miqt_exec_callback_QRestAccessManager_customEvent(self *C.QRestAccessManager, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QRestAccessManager{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QRestAccessManager) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QRestAccessManager_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QRestAccessManager) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QRestAccessManager_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRestAccessManager_connectNotify
func miqt_exec_callback_QRestAccessManager_connectNotify(self *C.QRestAccessManager, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QRestAccessManager{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QRestAccessManager) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QRestAccessManager_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QRestAccessManager) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QRestAccessManager_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRestAccessManager_disconnectNotify
func miqt_exec_callback_QRestAccessManager_disconnectNotify(self *C.QRestAccessManager, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QRestAccessManager{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QRestAccessManager) Delete() {
	C.QRestAccessManager_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRestAccessManager) GoGC() {
	runtime.SetFinalizer(this, func(this *QRestAccessManager) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
