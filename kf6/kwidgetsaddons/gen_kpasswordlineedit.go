package kwidgetsaddons

/*

#include "gen_kpasswordlineedit.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type KPasswordLineEdit struct {
	h *C.KPasswordLineEdit
	*qt6.QWidget
}

func (this *KPasswordLineEdit) cPointer() *C.KPasswordLineEdit {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *KPasswordLineEdit) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKPasswordLineEdit constructs the type using only CGO pointers.
func newKPasswordLineEdit(h *C.KPasswordLineEdit) *KPasswordLineEdit {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.KPasswordLineEdit_virtbase(h, &outptr_QWidget)

	return &KPasswordLineEdit{h: h,
		QWidget: qt6.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewKPasswordLineEdit constructs the type using only unsafe pointers.
func UnsafeNewKPasswordLineEdit(h unsafe.Pointer) *KPasswordLineEdit {
	return newKPasswordLineEdit((*C.KPasswordLineEdit)(h))
}

// NewKPasswordLineEdit constructs a new KPasswordLineEdit object.
func NewKPasswordLineEdit(parent *qt6.QWidget) *KPasswordLineEdit {

	return newKPasswordLineEdit(C.KPasswordLineEdit_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewKPasswordLineEdit2 constructs a new KPasswordLineEdit object.
func NewKPasswordLineEdit2() *KPasswordLineEdit {

	return newKPasswordLineEdit(C.KPasswordLineEdit_new2())
}

func (this *KPasswordLineEdit) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.KPasswordLineEdit_metaObject(this.h)))
}

func (this *KPasswordLineEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.KPasswordLineEdit_metacast(this.h, param1_Cstring))
}

func KPasswordLineEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.KPasswordLineEdit_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KPasswordLineEdit) SetPassword(password string) {
	password_ms := C.struct_miqt_string{}
	password_ms.data = C.CString(password)
	password_ms.len = C.size_t(len(password))
	defer C.free(unsafe.Pointer(password_ms.data))
	C.KPasswordLineEdit_setPassword(this.h, password_ms)
}

func (this *KPasswordLineEdit) Password() string {
	var _ms C.struct_miqt_string = C.KPasswordLineEdit_password(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KPasswordLineEdit) Clear() {
	C.KPasswordLineEdit_clear(this.h)
}

func (this *KPasswordLineEdit) SetClearButtonEnabled(clear bool) {
	C.KPasswordLineEdit_setClearButtonEnabled(this.h, (C.bool)(clear))
}

func (this *KPasswordLineEdit) IsClearButtonEnabled() bool {
	return (bool)(C.KPasswordLineEdit_isClearButtonEnabled(this.h))
}

func (this *KPasswordLineEdit) SetEchoMode(mode qt6.QLineEdit__EchoMode) {
	C.KPasswordLineEdit_setEchoMode(this.h, (C.int)(mode))
}

func (this *KPasswordLineEdit) EchoMode() qt6.QLineEdit__EchoMode {
	return (qt6.QLineEdit__EchoMode)(C.KPasswordLineEdit_echoMode(this.h))
}

func (this *KPasswordLineEdit) SetReadOnly(readOnly bool) {
	C.KPasswordLineEdit_setReadOnly(this.h, (C.bool)(readOnly))
}

func (this *KPasswordLineEdit) IsReadOnly() bool {
	return (bool)(C.KPasswordLineEdit_isReadOnly(this.h))
}

func (this *KPasswordLineEdit) RevealPasswordMode() KPassword__RevealMode {
	int /* TODO  */
}

func (this *KPasswordLineEdit) SetRevealPasswordMode(revealPasswordMode KPassword__RevealMode) {
	C.KPasswordLineEdit_setRevealPasswordMode(this.h, revealPasswordMode)
}

func (this *KPasswordLineEdit) SetRevealPasswordAvailable(reveal bool) {
	C.KPasswordLineEdit_setRevealPasswordAvailable(this.h, (C.bool)(reveal))
}

func (this *KPasswordLineEdit) IsRevealPasswordAvailable() bool {
	return (bool)(C.KPasswordLineEdit_isRevealPasswordAvailable(this.h))
}

func (this *KPasswordLineEdit) ToggleEchoModeAction() *qt6.QAction {
	return qt6.UnsafeNewQAction(unsafe.Pointer(C.KPasswordLineEdit_toggleEchoModeAction(this.h)))
}

func (this *KPasswordLineEdit) LineEdit() *qt6.QLineEdit {
	return qt6.UnsafeNewQLineEdit(unsafe.Pointer(C.KPasswordLineEdit_lineEdit(this.h)))
}

func (this *KPasswordLineEdit) EchoModeChanged(echoMode qt6.QLineEdit__EchoMode) {
	C.KPasswordLineEdit_echoModeChanged(this.h, (C.int)(echoMode))
}
func (this *KPasswordLineEdit) OnEchoModeChanged(slot func(echoMode qt6.QLineEdit__EchoMode)) {
	C.KPasswordLineEdit_connect_echoModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_KPasswordLineEdit_echoModeChanged
func miqt_exec_callback_KPasswordLineEdit_echoModeChanged(cb C.intptr_t, echoMode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(echoMode qt6.QLineEdit__EchoMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QLineEdit__EchoMode)(echoMode)

	gofunc(slotval1)
}

func (this *KPasswordLineEdit) PasswordChanged(password string) {
	password_ms := C.struct_miqt_string{}
	password_ms.data = C.CString(password)
	password_ms.len = C.size_t(len(password))
	defer C.free(unsafe.Pointer(password_ms.data))
	C.KPasswordLineEdit_passwordChanged(this.h, password_ms)
}
func (this *KPasswordLineEdit) OnPasswordChanged(slot func(password string)) {
	C.KPasswordLineEdit_connect_passwordChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_KPasswordLineEdit_passwordChanged
func miqt_exec_callback_KPasswordLineEdit_passwordChanged(cb C.intptr_t, password C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(password string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var password_ms C.struct_miqt_string = password
	password_ret := C.GoStringN(password_ms.data, C.int(int64(password_ms.len)))
	C.free(unsafe.Pointer(password_ms.data))
	slotval1 := password_ret

	gofunc(slotval1)
}

func KPasswordLineEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KPasswordLineEdit_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func KPasswordLineEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KPasswordLineEdit_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// UpdateMicroFocus can only be called from a KPasswordLineEdit that was directly constructed.
func (this *KPasswordLineEdit) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.KPasswordLineEdit_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a KPasswordLineEdit that was directly constructed.
func (this *KPasswordLineEdit) Create() {

	var _dynamic_cast_ok C.bool = false
	C.KPasswordLineEdit_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a KPasswordLineEdit that was directly constructed.
func (this *KPasswordLineEdit) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.KPasswordLineEdit_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a KPasswordLineEdit that was directly constructed.
func (this *KPasswordLineEdit) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.KPasswordLineEdit_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a KPasswordLineEdit that was directly constructed.
func (this *KPasswordLineEdit) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.KPasswordLineEdit_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a KPasswordLineEdit that was directly constructed.
func (this *KPasswordLineEdit) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.KPasswordLineEdit_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a KPasswordLineEdit that was directly constructed.
func (this *KPasswordLineEdit) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.KPasswordLineEdit_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a KPasswordLineEdit that was directly constructed.
func (this *KPasswordLineEdit) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.KPasswordLineEdit_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a KPasswordLineEdit that was directly constructed.
func (this *KPasswordLineEdit) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.KPasswordLineEdit_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// GetDecodedMetricF can only be called from a KPasswordLineEdit that was directly constructed.
func (this *KPasswordLineEdit) GetDecodedMetricF(metricA PaintDeviceMetric, metricB PaintDeviceMetric) float64 {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (float64)(C.KPasswordLineEdit_protectedbase_getDecodedMetricF(&_dynamic_cast_ok, unsafe.Pointer(this.h), metricA, metricB))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *KPasswordLineEdit) callVirtualBase_DevType() int {

	return (int)(C.KPasswordLineEdit_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *KPasswordLineEdit) OnDevType(slot func(super func() int) int) {
	ok := C.KPasswordLineEdit_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_devType
func miqt_exec_callback_KPasswordLineEdit_devType(self *C.KPasswordLineEdit, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *KPasswordLineEdit) callVirtualBase_SetVisible(visible bool) {

	C.KPasswordLineEdit_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *KPasswordLineEdit) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.KPasswordLineEdit_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_setVisible
func miqt_exec_callback_KPasswordLineEdit_setVisible(self *C.KPasswordLineEdit, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.KPasswordLineEdit_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *KPasswordLineEdit) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.KPasswordLineEdit_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_sizeHint
func miqt_exec_callback_KPasswordLineEdit_sizeHint(self *C.KPasswordLineEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *KPasswordLineEdit) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.KPasswordLineEdit_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *KPasswordLineEdit) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.KPasswordLineEdit_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_minimumSizeHint
func miqt_exec_callback_KPasswordLineEdit_minimumSizeHint(self *C.KPasswordLineEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *KPasswordLineEdit) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.KPasswordLineEdit_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *KPasswordLineEdit) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.KPasswordLineEdit_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_heightForWidth
func miqt_exec_callback_KPasswordLineEdit_heightForWidth(self *C.KPasswordLineEdit, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *KPasswordLineEdit) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.KPasswordLineEdit_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *KPasswordLineEdit) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.KPasswordLineEdit_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_hasHeightForWidth
func miqt_exec_callback_KPasswordLineEdit_hasHeightForWidth(self *C.KPasswordLineEdit, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *KPasswordLineEdit) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.KPasswordLineEdit_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *KPasswordLineEdit) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.KPasswordLineEdit_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_paintEngine
func miqt_exec_callback_KPasswordLineEdit_paintEngine(self *C.KPasswordLineEdit, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *KPasswordLineEdit) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.KPasswordLineEdit_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *KPasswordLineEdit) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.KPasswordLineEdit_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_event
func miqt_exec_callback_KPasswordLineEdit_event(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *KPasswordLineEdit) callVirtualBase_MousePressEvent(event *qt6.QMouseEvent) {

	C.KPasswordLineEdit_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnMousePressEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_mousePressEvent
func miqt_exec_callback_KPasswordLineEdit_mousePressEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_MouseReleaseEvent(event *qt6.QMouseEvent) {

	C.KPasswordLineEdit_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnMouseReleaseEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_mouseReleaseEvent
func miqt_exec_callback_KPasswordLineEdit_mouseReleaseEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_MouseDoubleClickEvent(event *qt6.QMouseEvent) {

	C.KPasswordLineEdit_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_mouseDoubleClickEvent
func miqt_exec_callback_KPasswordLineEdit_mouseDoubleClickEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_MouseMoveEvent(event *qt6.QMouseEvent) {

	C.KPasswordLineEdit_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnMouseMoveEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_mouseMoveEvent
func miqt_exec_callback_KPasswordLineEdit_mouseMoveEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_WheelEvent(event *qt6.QWheelEvent) {

	C.KPasswordLineEdit_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnWheelEvent(slot func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_wheelEvent
func miqt_exec_callback_KPasswordLineEdit_wheelEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_KeyPressEvent(event *qt6.QKeyEvent) {

	C.KPasswordLineEdit_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnKeyPressEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_keyPressEvent
func miqt_exec_callback_KPasswordLineEdit_keyPressEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.KPasswordLineEdit_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_keyReleaseEvent
func miqt_exec_callback_KPasswordLineEdit_keyReleaseEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.KPasswordLineEdit_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_focusInEvent
func miqt_exec_callback_KPasswordLineEdit_focusInEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.KPasswordLineEdit_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_focusOutEvent
func miqt_exec_callback_KPasswordLineEdit_focusOutEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.KPasswordLineEdit_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_enterEvent
func miqt_exec_callback_KPasswordLineEdit_enterEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.KPasswordLineEdit_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_leaveEvent
func miqt_exec_callback_KPasswordLineEdit_leaveEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_PaintEvent(event *qt6.QPaintEvent) {

	C.KPasswordLineEdit_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnPaintEvent(slot func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_paintEvent
func miqt_exec_callback_KPasswordLineEdit_paintEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.KPasswordLineEdit_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_moveEvent
func miqt_exec_callback_KPasswordLineEdit_moveEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_ResizeEvent(event *qt6.QResizeEvent) {

	C.KPasswordLineEdit_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnResizeEvent(slot func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_resizeEvent
func miqt_exec_callback_KPasswordLineEdit_resizeEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_CloseEvent(event *qt6.QCloseEvent) {

	C.KPasswordLineEdit_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnCloseEvent(slot func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_closeEvent
func miqt_exec_callback_KPasswordLineEdit_closeEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_ContextMenuEvent(event *qt6.QContextMenuEvent) {

	C.KPasswordLineEdit_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnContextMenuEvent(slot func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_contextMenuEvent
func miqt_exec_callback_KPasswordLineEdit_contextMenuEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.KPasswordLineEdit_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_tabletEvent
func miqt_exec_callback_KPasswordLineEdit_tabletEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.KPasswordLineEdit_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_actionEvent
func miqt_exec_callback_KPasswordLineEdit_actionEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_DragEnterEvent(event *qt6.QDragEnterEvent) {

	C.KPasswordLineEdit_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnDragEnterEvent(slot func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_dragEnterEvent
func miqt_exec_callback_KPasswordLineEdit_dragEnterEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_DragMoveEvent(event *qt6.QDragMoveEvent) {

	C.KPasswordLineEdit_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnDragMoveEvent(slot func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_dragMoveEvent
func miqt_exec_callback_KPasswordLineEdit_dragMoveEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_DragLeaveEvent(event *qt6.QDragLeaveEvent) {

	C.KPasswordLineEdit_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnDragLeaveEvent(slot func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_dragLeaveEvent
func miqt_exec_callback_KPasswordLineEdit_dragLeaveEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_DropEvent(event *qt6.QDropEvent) {

	C.KPasswordLineEdit_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnDropEvent(slot func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_dropEvent
func miqt_exec_callback_KPasswordLineEdit_dropEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_ShowEvent(event *qt6.QShowEvent) {

	C.KPasswordLineEdit_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnShowEvent(slot func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_showEvent
func miqt_exec_callback_KPasswordLineEdit_showEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.KPasswordLineEdit_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_hideEvent
func miqt_exec_callback_KPasswordLineEdit_hideEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.KPasswordLineEdit_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *KPasswordLineEdit) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.KPasswordLineEdit_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_nativeEvent
func miqt_exec_callback_KPasswordLineEdit_nativeEvent(self *C.KPasswordLineEdit, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *KPasswordLineEdit) callVirtualBase_ChangeEvent(param1 *qt6.QEvent) {

	C.KPasswordLineEdit_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnChangeEvent(slot func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_changeEvent
func miqt_exec_callback_KPasswordLineEdit_changeEvent(self *C.KPasswordLineEdit, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_Metric(param1 PaintDeviceMetric) int {

	return (int)(C.KPasswordLineEdit_virtualbase_metric(unsafe.Pointer(this.h), param1))

}
func (this *KPasswordLineEdit) OnMetric(slot func(super func(param1 PaintDeviceMetric) int, param1 PaintDeviceMetric) int) {
	ok := C.KPasswordLineEdit_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_metric
func miqt_exec_callback_KPasswordLineEdit_metric(self *C.KPasswordLineEdit, cb C.intptr_t, param1 C.PaintDeviceMetric) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 PaintDeviceMetric) int, param1 PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	int /* TODO  */

	virtualReturn := gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *KPasswordLineEdit) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.KPasswordLineEdit_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.KPasswordLineEdit_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_initPainter
func miqt_exec_callback_KPasswordLineEdit_initPainter(self *C.KPasswordLineEdit, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.KPasswordLineEdit_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *KPasswordLineEdit) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.KPasswordLineEdit_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_redirected
func miqt_exec_callback_KPasswordLineEdit_redirected(self *C.KPasswordLineEdit, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *KPasswordLineEdit) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.KPasswordLineEdit_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *KPasswordLineEdit) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.KPasswordLineEdit_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_sharedPainter
func miqt_exec_callback_KPasswordLineEdit_sharedPainter(self *C.KPasswordLineEdit, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *KPasswordLineEdit) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.KPasswordLineEdit_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_inputMethodEvent
func miqt_exec_callback_KPasswordLineEdit_inputMethodEvent(self *C.KPasswordLineEdit, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.KPasswordLineEdit_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *KPasswordLineEdit) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.KPasswordLineEdit_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_inputMethodQuery
func miqt_exec_callback_KPasswordLineEdit_inputMethodQuery(self *C.KPasswordLineEdit, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(param1)

	virtualReturn := gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *KPasswordLineEdit) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.KPasswordLineEdit_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *KPasswordLineEdit) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.KPasswordLineEdit_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_focusNextPrevChild
func miqt_exec_callback_KPasswordLineEdit_focusNextPrevChild(self *C.KPasswordLineEdit, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *KPasswordLineEdit) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.KPasswordLineEdit_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *KPasswordLineEdit) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.KPasswordLineEdit_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_eventFilter
func miqt_exec_callback_KPasswordLineEdit_eventFilter(self *C.KPasswordLineEdit, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *KPasswordLineEdit) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.KPasswordLineEdit_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_timerEvent
func miqt_exec_callback_KPasswordLineEdit_timerEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.KPasswordLineEdit_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_childEvent
func miqt_exec_callback_KPasswordLineEdit_childEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.KPasswordLineEdit_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.KPasswordLineEdit_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_customEvent
func miqt_exec_callback_KPasswordLineEdit_customEvent(self *C.KPasswordLineEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.KPasswordLineEdit_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.KPasswordLineEdit_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_connectNotify
func miqt_exec_callback_KPasswordLineEdit_connectNotify(self *C.KPasswordLineEdit, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *KPasswordLineEdit) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.KPasswordLineEdit_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *KPasswordLineEdit) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.KPasswordLineEdit_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KPasswordLineEdit_disconnectNotify
func miqt_exec_callback_KPasswordLineEdit_disconnectNotify(self *C.KPasswordLineEdit, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&KPasswordLineEdit{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *KPasswordLineEdit) Delete() {
	C.KPasswordLineEdit_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *KPasswordLineEdit) GoGC() {
	runtime.SetFinalizer(this, func(this *KPasswordLineEdit) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
