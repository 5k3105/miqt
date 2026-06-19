package ksyntaxhighlighting

/*

#include "gen_repository.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type KSyntaxHighlighting__Repository__DefaultTheme int

const (
	KSyntaxHighlighting__Repository__LightTheme KSyntaxHighlighting__Repository__DefaultTheme = 0
	KSyntaxHighlighting__Repository__DarkTheme  KSyntaxHighlighting__Repository__DefaultTheme = 1
)

type KSyntaxHighlighting__Repository struct {
	h *C.KSyntaxHighlighting__Repository
	*qt6.QObject
}

func (this *KSyntaxHighlighting__Repository) cPointer() *C.KSyntaxHighlighting__Repository {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *KSyntaxHighlighting__Repository) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKSyntaxHighlighting__Repository constructs the type using only CGO pointers.
func newKSyntaxHighlighting__Repository(h *C.KSyntaxHighlighting__Repository) *KSyntaxHighlighting__Repository {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.KSyntaxHighlighting__Repository_virtbase(h, &outptr_QObject)

	return &KSyntaxHighlighting__Repository{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewKSyntaxHighlighting__Repository constructs the type using only unsafe pointers.
func UnsafeNewKSyntaxHighlighting__Repository(h unsafe.Pointer) *KSyntaxHighlighting__Repository {
	return newKSyntaxHighlighting__Repository((*C.KSyntaxHighlighting__Repository)(h))
}

// NewKSyntaxHighlighting__Repository constructs a new KSyntaxHighlighting::Repository object.
func NewKSyntaxHighlighting__Repository() *KSyntaxHighlighting__Repository {

	return newKSyntaxHighlighting__Repository(C.KSyntaxHighlighting__Repository_new())
}

func (this *KSyntaxHighlighting__Repository) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.KSyntaxHighlighting__Repository_metaObject(this.h)))
}

func (this *KSyntaxHighlighting__Repository) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.KSyntaxHighlighting__Repository_metacast(this.h, param1_Cstring))
}

func KSyntaxHighlighting__Repository_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Repository_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__Repository) DefinitionForName(defName string) *KSyntaxHighlighting__Definition {
	defName_ms := C.struct_miqt_string{}
	defName_ms.data = C.CString(defName)
	defName_ms.len = C.size_t(len(defName))
	defer C.free(unsafe.Pointer(defName_ms.data))
	_goptr := newKSyntaxHighlighting__Definition(C.KSyntaxHighlighting__Repository_definitionForName(this.h, defName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KSyntaxHighlighting__Repository) DefinitionForFileName(fileName string) *KSyntaxHighlighting__Definition {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	_goptr := newKSyntaxHighlighting__Definition(C.KSyntaxHighlighting__Repository_definitionForFileName(this.h, fileName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KSyntaxHighlighting__Repository) DefinitionsForFileName(fileName string) []KSyntaxHighlighting__Definition {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _ma C.struct_miqt_array = C.KSyntaxHighlighting__Repository_definitionsForFileName(this.h, fileName_ms)
	_ret := make([]KSyntaxHighlighting__Definition, int(_ma.len))
	_outCast := (*[0xffff]*C.KSyntaxHighlighting__Definition)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newKSyntaxHighlighting__Definition(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *KSyntaxHighlighting__Repository) DefinitionForMimeType(mimeType string) *KSyntaxHighlighting__Definition {
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	_goptr := newKSyntaxHighlighting__Definition(C.KSyntaxHighlighting__Repository_definitionForMimeType(this.h, mimeType_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KSyntaxHighlighting__Repository) DefinitionsForMimeType(mimeType string) []KSyntaxHighlighting__Definition {
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	var _ma C.struct_miqt_array = C.KSyntaxHighlighting__Repository_definitionsForMimeType(this.h, mimeType_ms)
	_ret := make([]KSyntaxHighlighting__Definition, int(_ma.len))
	_outCast := (*[0xffff]*C.KSyntaxHighlighting__Definition)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newKSyntaxHighlighting__Definition(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *KSyntaxHighlighting__Repository) Definitions() []KSyntaxHighlighting__Definition {
	var _ma C.struct_miqt_array = C.KSyntaxHighlighting__Repository_definitions(this.h)
	_ret := make([]KSyntaxHighlighting__Definition, int(_ma.len))
	_outCast := (*[0xffff]*C.KSyntaxHighlighting__Definition)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newKSyntaxHighlighting__Definition(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *KSyntaxHighlighting__Repository) Themes() []KSyntaxHighlighting__Theme {
	var _ma C.struct_miqt_array = C.KSyntaxHighlighting__Repository_themes(this.h)
	_ret := make([]KSyntaxHighlighting__Theme, int(_ma.len))
	_outCast := (*[0xffff]*C.KSyntaxHighlighting__Theme)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newKSyntaxHighlighting__Theme(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *KSyntaxHighlighting__Repository) Theme(themeName string) *KSyntaxHighlighting__Theme {
	themeName_ms := C.struct_miqt_string{}
	themeName_ms.data = C.CString(themeName)
	themeName_ms.len = C.size_t(len(themeName))
	defer C.free(unsafe.Pointer(themeName_ms.data))
	_goptr := newKSyntaxHighlighting__Theme(C.KSyntaxHighlighting__Repository_theme(this.h, themeName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KSyntaxHighlighting__Repository) DefaultTheme() *KSyntaxHighlighting__Theme {
	_goptr := newKSyntaxHighlighting__Theme(C.KSyntaxHighlighting__Repository_defaultTheme(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KSyntaxHighlighting__Repository) ThemeForPalette(palette *qt6.QPalette) Theme {
	int /* TODO  */
}

func (this *KSyntaxHighlighting__Repository) Reload() {
	C.KSyntaxHighlighting__Repository_reload(this.h)
}

func (this *KSyntaxHighlighting__Repository) AddCustomSearchPath(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.KSyntaxHighlighting__Repository_addCustomSearchPath(this.h, path_ms)
}

func (this *KSyntaxHighlighting__Repository) CustomSearchPaths() []string {
	var _ma C.struct_miqt_array = C.KSyntaxHighlighting__Repository_customSearchPaths(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *KSyntaxHighlighting__Repository) AboutToReload() {
	C.KSyntaxHighlighting__Repository_aboutToReload(this.h)
}
func (this *KSyntaxHighlighting__Repository) OnAboutToReload(slot func()) {
	C.KSyntaxHighlighting__Repository_connect_aboutToReload(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_KSyntaxHighlighting__Repository_aboutToReload
func miqt_exec_callback_KSyntaxHighlighting__Repository_aboutToReload(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *KSyntaxHighlighting__Repository) Reloaded() {
	C.KSyntaxHighlighting__Repository_reloaded(this.h)
}
func (this *KSyntaxHighlighting__Repository) OnReloaded(slot func()) {
	C.KSyntaxHighlighting__Repository_connect_reloaded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_KSyntaxHighlighting__Repository_reloaded
func miqt_exec_callback_KSyntaxHighlighting__Repository_reloaded(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func KSyntaxHighlighting__Repository_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Repository_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func KSyntaxHighlighting__Repository_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Repository_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__Repository) DefaultThemeWithKSyntaxHighlightingRepositoryDefaultTheme(t KSyntaxHighlighting__Repository__DefaultTheme) *KSyntaxHighlighting__Theme {
	_goptr := newKSyntaxHighlighting__Theme(C.KSyntaxHighlighting__Repository_defaultThemeWithKSyntaxHighlightingRepositoryDefaultTheme(this.h, (C.int)(t)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Sender can only be called from a KSyntaxHighlighting__Repository that was directly constructed.
func (this *KSyntaxHighlighting__Repository) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.KSyntaxHighlighting__Repository_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a KSyntaxHighlighting__Repository that was directly constructed.
func (this *KSyntaxHighlighting__Repository) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.KSyntaxHighlighting__Repository_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a KSyntaxHighlighting__Repository that was directly constructed.
func (this *KSyntaxHighlighting__Repository) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.KSyntaxHighlighting__Repository_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a KSyntaxHighlighting__Repository that was directly constructed.
func (this *KSyntaxHighlighting__Repository) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.KSyntaxHighlighting__Repository_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *KSyntaxHighlighting__Repository) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.KSyntaxHighlighting__Repository_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *KSyntaxHighlighting__Repository) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.KSyntaxHighlighting__Repository_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__Repository_event
func miqt_exec_callback_KSyntaxHighlighting__Repository_event(self *C.KSyntaxHighlighting__Repository, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&KSyntaxHighlighting__Repository{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *KSyntaxHighlighting__Repository) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.KSyntaxHighlighting__Repository_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *KSyntaxHighlighting__Repository) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.KSyntaxHighlighting__Repository_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__Repository_eventFilter
func miqt_exec_callback_KSyntaxHighlighting__Repository_eventFilter(self *C.KSyntaxHighlighting__Repository, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&KSyntaxHighlighting__Repository{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *KSyntaxHighlighting__Repository) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.KSyntaxHighlighting__Repository_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *KSyntaxHighlighting__Repository) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.KSyntaxHighlighting__Repository_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__Repository_timerEvent
func miqt_exec_callback_KSyntaxHighlighting__Repository_timerEvent(self *C.KSyntaxHighlighting__Repository, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&KSyntaxHighlighting__Repository{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *KSyntaxHighlighting__Repository) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.KSyntaxHighlighting__Repository_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *KSyntaxHighlighting__Repository) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.KSyntaxHighlighting__Repository_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__Repository_childEvent
func miqt_exec_callback_KSyntaxHighlighting__Repository_childEvent(self *C.KSyntaxHighlighting__Repository, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&KSyntaxHighlighting__Repository{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *KSyntaxHighlighting__Repository) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.KSyntaxHighlighting__Repository_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *KSyntaxHighlighting__Repository) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.KSyntaxHighlighting__Repository_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__Repository_customEvent
func miqt_exec_callback_KSyntaxHighlighting__Repository_customEvent(self *C.KSyntaxHighlighting__Repository, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&KSyntaxHighlighting__Repository{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *KSyntaxHighlighting__Repository) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.KSyntaxHighlighting__Repository_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *KSyntaxHighlighting__Repository) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.KSyntaxHighlighting__Repository_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__Repository_connectNotify
func miqt_exec_callback_KSyntaxHighlighting__Repository_connectNotify(self *C.KSyntaxHighlighting__Repository, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&KSyntaxHighlighting__Repository{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *KSyntaxHighlighting__Repository) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.KSyntaxHighlighting__Repository_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *KSyntaxHighlighting__Repository) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.KSyntaxHighlighting__Repository_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__Repository_disconnectNotify
func miqt_exec_callback_KSyntaxHighlighting__Repository_disconnectNotify(self *C.KSyntaxHighlighting__Repository, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&KSyntaxHighlighting__Repository{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *KSyntaxHighlighting__Repository) Delete() {
	C.KSyntaxHighlighting__Repository_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *KSyntaxHighlighting__Repository) GoGC() {
	runtime.SetFinalizer(this, func(this *KSyntaxHighlighting__Repository) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
