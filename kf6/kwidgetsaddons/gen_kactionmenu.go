package kwidgetsaddons

/*

#include "gen_kactionmenu.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type KActionMenu struct {
	h *C.KActionMenu
	*qt6.QWidgetAction
}

func (this *KActionMenu) cPointer() *C.KActionMenu {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *KActionMenu) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKActionMenu constructs the type using only CGO pointers.
func newKActionMenu(h *C.KActionMenu) *KActionMenu {
	if h == nil {
		return nil
	}
	var outptr_QWidgetAction *C.QWidgetAction = nil
	C.KActionMenu_virtbase(h, &outptr_QWidgetAction)

	return &KActionMenu{h: h,
		QWidgetAction: qt6.UnsafeNewQWidgetAction(unsafe.Pointer(outptr_QWidgetAction))}
}

// UnsafeNewKActionMenu constructs the type using only unsafe pointers.
func UnsafeNewKActionMenu(h unsafe.Pointer) *KActionMenu {
	return newKActionMenu((*C.KActionMenu)(h))
}

// NewKActionMenu constructs a new KActionMenu object.
func NewKActionMenu(parent *qt6.QObject) *KActionMenu {

	return newKActionMenu(C.KActionMenu_new((*C.QObject)(parent.UnsafePointer())))
}

// NewKActionMenu2 constructs a new KActionMenu object.
func NewKActionMenu2(text string, parent *qt6.QObject) *KActionMenu {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newKActionMenu(C.KActionMenu_new2(text_ms, (*C.QObject)(parent.UnsafePointer())))
}

// NewKActionMenu3 constructs a new KActionMenu object.
func NewKActionMenu3(icon *qt6.QIcon, text string, parent *qt6.QObject) *KActionMenu {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newKActionMenu(C.KActionMenu_new3((*C.QIcon)(icon.UnsafePointer()), text_ms, (*C.QObject)(parent.UnsafePointer())))
}

func (this *KActionMenu) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.KActionMenu_metaObject(this.h)))
}

func (this *KActionMenu) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.KActionMenu_metacast(this.h, param1_Cstring))
}

func KActionMenu_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.KActionMenu_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KActionMenu) AddAction(action *qt6.QAction) {
	C.KActionMenu_addAction(this.h, (*C.QAction)(action.UnsafePointer()))
}

func (this *KActionMenu) AddSeparator() *qt6.QAction {
	return qt6.UnsafeNewQAction(unsafe.Pointer(C.KActionMenu_addSeparator(this.h)))
}

func (this *KActionMenu) InsertAction(before *qt6.QAction, action *qt6.QAction) {
	C.KActionMenu_insertAction(this.h, (*C.QAction)(before.UnsafePointer()), (*C.QAction)(action.UnsafePointer()))
}

func (this *KActionMenu) InsertSeparator(before *qt6.QAction) *qt6.QAction {
	return qt6.UnsafeNewQAction(unsafe.Pointer(C.KActionMenu_insertSeparator(this.h, (*C.QAction)(before.UnsafePointer()))))
}

func (this *KActionMenu) RemoveAction(action *qt6.QAction) {
	C.KActionMenu_removeAction(this.h, (*C.QAction)(action.UnsafePointer()))
}

func (this *KActionMenu) PopupMode() qt6.QToolButton__ToolButtonPopupMode {
	return (qt6.QToolButton__ToolButtonPopupMode)(C.KActionMenu_popupMode(this.h))
}

func (this *KActionMenu) SetPopupMode(popupMode qt6.QToolButton__ToolButtonPopupMode) {
	C.KActionMenu_setPopupMode(this.h, (C.int)(popupMode))
}

func (this *KActionMenu) CreateWidget(parent *qt6.QWidget) *qt6.QWidget {
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.KActionMenu_createWidget(this.h, (*C.QWidget)(parent.UnsafePointer()))))
}

func KActionMenu_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KActionMenu_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func KActionMenu_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KActionMenu_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// CreatedWidgets can only be called from a KActionMenu that was directly constructed.
func (this *KActionMenu) CreatedWidgets() []*qt6.QWidget {

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.KActionMenu_protectedbase_createdWidgets(&_dynamic_cast_ok, unsafe.Pointer(this.h))
	_ret := make([]*qt6.QWidget, int(_ma.len))
	_outCast := (*[0xffff]*C.QWidget)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt6.UnsafeNewQWidget(unsafe.Pointer(_outCast[i]))
	}
	_method_ret := _ret

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a KActionMenu that was directly constructed.
func (this *KActionMenu) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.KActionMenu_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a KActionMenu that was directly constructed.
func (this *KActionMenu) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.KActionMenu_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a KActionMenu that was directly constructed.
func (this *KActionMenu) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.KActionMenu_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a KActionMenu that was directly constructed.
func (this *KActionMenu) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.KActionMenu_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *KActionMenu) callVirtualBase_CreateWidget(parent *qt6.QWidget) *qt6.QWidget {

	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.KActionMenu_virtualbase_createWidget(unsafe.Pointer(this.h), (*C.QWidget)(parent.UnsafePointer()))))

}
func (this *KActionMenu) OnCreateWidget(slot func(super func(parent *qt6.QWidget) *qt6.QWidget, parent *qt6.QWidget) *qt6.QWidget) {
	ok := C.KActionMenu_override_virtual_createWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KActionMenu_createWidget
func miqt_exec_callback_KActionMenu_createWidget(self *C.KActionMenu, cb C.intptr_t, parent *C.QWidget) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt6.QWidget) *qt6.QWidget, parent *qt6.QWidget) *qt6.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(parent))

	virtualReturn := gofunc((&KActionMenu{h: self}).callVirtualBase_CreateWidget, slotval1)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}

func (this *KActionMenu) callVirtualBase_Event(param1 *qt6.QEvent) bool {

	return (bool)(C.KActionMenu_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *KActionMenu) OnEvent(slot func(super func(param1 *qt6.QEvent) bool, param1 *qt6.QEvent) bool) {
	ok := C.KActionMenu_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KActionMenu_event
func miqt_exec_callback_KActionMenu_event(self *C.KActionMenu, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent) bool, param1 *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&KActionMenu{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *KActionMenu) callVirtualBase_EventFilter(param1 *qt6.QObject, param2 *qt6.QEvent) bool {

	return (bool)(C.KActionMenu_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *KActionMenu) OnEventFilter(slot func(super func(param1 *qt6.QObject, param2 *qt6.QEvent) bool, param1 *qt6.QObject, param2 *qt6.QEvent) bool) {
	ok := C.KActionMenu_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KActionMenu_eventFilter
func miqt_exec_callback_KActionMenu_eventFilter(self *C.KActionMenu, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QObject, param2 *qt6.QEvent) bool, param1 *qt6.QObject, param2 *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&KActionMenu{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *KActionMenu) callVirtualBase_DeleteWidget(widget *qt6.QWidget) {

	C.KActionMenu_virtualbase_deleteWidget(unsafe.Pointer(this.h), (*C.QWidget)(widget.UnsafePointer()))

}
func (this *KActionMenu) OnDeleteWidget(slot func(super func(widget *qt6.QWidget), widget *qt6.QWidget)) {
	ok := C.KActionMenu_override_virtual_deleteWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KActionMenu_deleteWidget
func miqt_exec_callback_KActionMenu_deleteWidget(self *C.KActionMenu, cb C.intptr_t, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(widget *qt6.QWidget), widget *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc((&KActionMenu{h: self}).callVirtualBase_DeleteWidget, slotval1)

}

func (this *KActionMenu) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.KActionMenu_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *KActionMenu) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.KActionMenu_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KActionMenu_timerEvent
func miqt_exec_callback_KActionMenu_timerEvent(self *C.KActionMenu, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&KActionMenu{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *KActionMenu) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.KActionMenu_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *KActionMenu) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.KActionMenu_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KActionMenu_childEvent
func miqt_exec_callback_KActionMenu_childEvent(self *C.KActionMenu, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&KActionMenu{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *KActionMenu) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.KActionMenu_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *KActionMenu) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.KActionMenu_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KActionMenu_customEvent
func miqt_exec_callback_KActionMenu_customEvent(self *C.KActionMenu, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&KActionMenu{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *KActionMenu) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.KActionMenu_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *KActionMenu) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.KActionMenu_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KActionMenu_connectNotify
func miqt_exec_callback_KActionMenu_connectNotify(self *C.KActionMenu, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&KActionMenu{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *KActionMenu) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.KActionMenu_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *KActionMenu) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.KActionMenu_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KActionMenu_disconnectNotify
func miqt_exec_callback_KActionMenu_disconnectNotify(self *C.KActionMenu, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&KActionMenu{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *KActionMenu) Delete() {
	C.KActionMenu_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *KActionMenu) GoGC() {
	runtime.SetFinalizer(this, func(this *KActionMenu) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
