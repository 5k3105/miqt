package kwidgetsaddons

/*

#include "gen_kcolorbutton.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type KColorButton struct {
	h *C.KColorButton
	*qt6.QPushButton
}

func (this *KColorButton) cPointer() *C.KColorButton {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *KColorButton) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKColorButton constructs the type using only CGO pointers.
func newKColorButton(h *C.KColorButton) *KColorButton {
	if h == nil {
		return nil
	}
	var outptr_QPushButton *C.QPushButton = nil
	C.KColorButton_virtbase(h, &outptr_QPushButton)

	return &KColorButton{h: h,
		QPushButton: qt6.UnsafeNewQPushButton(unsafe.Pointer(outptr_QPushButton))}
}

// UnsafeNewKColorButton constructs the type using only unsafe pointers.
func UnsafeNewKColorButton(h unsafe.Pointer) *KColorButton {
	return newKColorButton((*C.KColorButton)(h))
}

// NewKColorButton constructs a new KColorButton object.
func NewKColorButton(parent *qt6.QWidget) *KColorButton {

	return newKColorButton(C.KColorButton_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewKColorButton2 constructs a new KColorButton object.
func NewKColorButton2() *KColorButton {

	return newKColorButton(C.KColorButton_new2())
}

// NewKColorButton3 constructs a new KColorButton object.
func NewKColorButton3(c *qt6.QColor) *KColorButton {

	return newKColorButton(C.KColorButton_new3((*C.QColor)(c.UnsafePointer())))
}

// NewKColorButton4 constructs a new KColorButton object.
func NewKColorButton4(c *qt6.QColor, defaultColor *qt6.QColor) *KColorButton {

	return newKColorButton(C.KColorButton_new4((*C.QColor)(c.UnsafePointer()), (*C.QColor)(defaultColor.UnsafePointer())))
}

// NewKColorButton5 constructs a new KColorButton object.
func NewKColorButton5(c *qt6.QColor, parent *qt6.QWidget) *KColorButton {

	return newKColorButton(C.KColorButton_new5((*C.QColor)(c.UnsafePointer()), (*C.QWidget)(parent.UnsafePointer())))
}

// NewKColorButton6 constructs a new KColorButton object.
func NewKColorButton6(c *qt6.QColor, defaultColor *qt6.QColor, parent *qt6.QWidget) *KColorButton {

	return newKColorButton(C.KColorButton_new6((*C.QColor)(c.UnsafePointer()), (*C.QColor)(defaultColor.UnsafePointer()), (*C.QWidget)(parent.UnsafePointer())))
}

func (this *KColorButton) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.KColorButton_metaObject(this.h)))
}

func (this *KColorButton) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.KColorButton_metacast(this.h, param1_Cstring))
}

func KColorButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.KColorButton_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KColorButton) Color() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.KColorButton_color(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KColorButton) SetColor(c *qt6.QColor) {
	C.KColorButton_setColor(this.h, (*C.QColor)(c.UnsafePointer()))
}

func (this *KColorButton) SetAlphaChannelEnabled(alpha bool) {
	C.KColorButton_setAlphaChannelEnabled(this.h, (C.bool)(alpha))
}

func (this *KColorButton) IsAlphaChannelEnabled() bool {
	return (bool)(C.KColorButton_isAlphaChannelEnabled(this.h))
}

func (this *KColorButton) DefaultColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.KColorButton_defaultColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KColorButton) SetDefaultColor(c *qt6.QColor) {
	C.KColorButton_setDefaultColor(this.h, (*C.QColor)(c.UnsafePointer()))
}

func (this *KColorButton) SizeHint() *qt6.QSize {
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.KColorButton_sizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KColorButton) MinimumSizeHint() *qt6.QSize {
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.KColorButton_minimumSizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KColorButton) Changed(newColor *qt6.QColor) {
	C.KColorButton_changed(this.h, (*C.QColor)(newColor.UnsafePointer()))
}
func (this *KColorButton) OnChanged(slot func(newColor *qt6.QColor)) {
	C.KColorButton_connect_changed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_KColorButton_changed
func miqt_exec_callback_KColorButton_changed(cb C.intptr_t, newColor *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newColor *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(newColor))

	gofunc(slotval1)
}

func KColorButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KColorButton_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func KColorButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KColorButton_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// UpdateMicroFocus can only be called from a KColorButton that was directly constructed.
func (this *KColorButton) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.KColorButton_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a KColorButton that was directly constructed.
func (this *KColorButton) Create() {

	var _dynamic_cast_ok C.bool = false
	C.KColorButton_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a KColorButton that was directly constructed.
func (this *KColorButton) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.KColorButton_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a KColorButton that was directly constructed.
func (this *KColorButton) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.KColorButton_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a KColorButton that was directly constructed.
func (this *KColorButton) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.KColorButton_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a KColorButton that was directly constructed.
func (this *KColorButton) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.KColorButton_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a KColorButton that was directly constructed.
func (this *KColorButton) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.KColorButton_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a KColorButton that was directly constructed.
func (this *KColorButton) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.KColorButton_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a KColorButton that was directly constructed.
func (this *KColorButton) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.KColorButton_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// GetDecodedMetricF can only be called from a KColorButton that was directly constructed.
func (this *KColorButton) GetDecodedMetricF(metricA PaintDeviceMetric, metricB PaintDeviceMetric) float64 {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (float64)(C.KColorButton_protectedbase_getDecodedMetricF(&_dynamic_cast_ok, unsafe.Pointer(this.h), metricA, metricB))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *KColorButton) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.KColorButton_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *KColorButton) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.KColorButton_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_sizeHint
func miqt_exec_callback_KColorButton_sizeHint(self *C.KColorButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KColorButton{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *KColorButton) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.KColorButton_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *KColorButton) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.KColorButton_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_minimumSizeHint
func miqt_exec_callback_KColorButton_minimumSizeHint(self *C.KColorButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KColorButton{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *KColorButton) callVirtualBase_PaintEvent(pe *qt6.QPaintEvent) {

	C.KColorButton_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(pe.UnsafePointer()))

}
func (this *KColorButton) OnPaintEvent(slot func(super func(pe *qt6.QPaintEvent), pe *qt6.QPaintEvent)) {
	ok := C.KColorButton_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_paintEvent
func miqt_exec_callback_KColorButton_paintEvent(self *C.KColorButton, cb C.intptr_t, pe *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pe *qt6.QPaintEvent), pe *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(pe))

	gofunc((&KColorButton{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_DragEnterEvent(param1 *qt6.QDragEnterEvent) {

	C.KColorButton_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(param1.UnsafePointer()))

}
func (this *KColorButton) OnDragEnterEvent(slot func(super func(param1 *qt6.QDragEnterEvent), param1 *qt6.QDragEnterEvent)) {
	ok := C.KColorButton_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_dragEnterEvent
func miqt_exec_callback_KColorButton_dragEnterEvent(self *C.KColorButton, cb C.intptr_t, param1 *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QDragEnterEvent), param1 *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(param1))

	gofunc((&KColorButton{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_DropEvent(param1 *qt6.QDropEvent) {

	C.KColorButton_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(param1.UnsafePointer()))

}
func (this *KColorButton) OnDropEvent(slot func(super func(param1 *qt6.QDropEvent), param1 *qt6.QDropEvent)) {
	ok := C.KColorButton_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_dropEvent
func miqt_exec_callback_KColorButton_dropEvent(self *C.KColorButton, cb C.intptr_t, param1 *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QDropEvent), param1 *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(param1))

	gofunc((&KColorButton{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_MousePressEvent(e *qt6.QMouseEvent) {

	C.KColorButton_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *KColorButton) OnMousePressEvent(slot func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent)) {
	ok := C.KColorButton_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_mousePressEvent
func miqt_exec_callback_KColorButton_mousePressEvent(self *C.KColorButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(e))

	gofunc((&KColorButton{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_MouseMoveEvent(e *qt6.QMouseEvent) {

	C.KColorButton_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *KColorButton) OnMouseMoveEvent(slot func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent)) {
	ok := C.KColorButton_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_mouseMoveEvent
func miqt_exec_callback_KColorButton_mouseMoveEvent(self *C.KColorButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(e))

	gofunc((&KColorButton{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_KeyPressEvent(e *qt6.QKeyEvent) {

	C.KColorButton_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(e.UnsafePointer()))

}
func (this *KColorButton) OnKeyPressEvent(slot func(super func(e *qt6.QKeyEvent), e *qt6.QKeyEvent)) {
	ok := C.KColorButton_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_keyPressEvent
func miqt_exec_callback_KColorButton_keyPressEvent(self *C.KColorButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QKeyEvent), e *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(e))

	gofunc((&KColorButton{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_Event(e *qt6.QEvent) bool {

	return (bool)(C.KColorButton_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *KColorButton) OnEvent(slot func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool) {
	ok := C.KColorButton_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_event
func miqt_exec_callback_KColorButton_event(self *C.KColorButton, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&KColorButton{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *KColorButton) callVirtualBase_FocusInEvent(param1 *qt6.QFocusEvent) {

	C.KColorButton_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(param1.UnsafePointer()))

}
func (this *KColorButton) OnFocusInEvent(slot func(super func(param1 *qt6.QFocusEvent), param1 *qt6.QFocusEvent)) {
	ok := C.KColorButton_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_focusInEvent
func miqt_exec_callback_KColorButton_focusInEvent(self *C.KColorButton, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QFocusEvent), param1 *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(param1))

	gofunc((&KColorButton{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_FocusOutEvent(param1 *qt6.QFocusEvent) {

	C.KColorButton_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(param1.UnsafePointer()))

}
func (this *KColorButton) OnFocusOutEvent(slot func(super func(param1 *qt6.QFocusEvent), param1 *qt6.QFocusEvent)) {
	ok := C.KColorButton_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_focusOutEvent
func miqt_exec_callback_KColorButton_focusOutEvent(self *C.KColorButton, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QFocusEvent), param1 *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(param1))

	gofunc((&KColorButton{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_InitStyleOption(option *qt6.QStyleOptionButton) {

	C.KColorButton_virtualbase_initStyleOption(unsafe.Pointer(this.h), (*C.QStyleOptionButton)(option.UnsafePointer()))

}
func (this *KColorButton) OnInitStyleOption(slot func(super func(option *qt6.QStyleOptionButton), option *qt6.QStyleOptionButton)) {
	ok := C.KColorButton_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_initStyleOption
func miqt_exec_callback_KColorButton_initStyleOption(self *C.KColorButton, cb C.intptr_t, option *C.QStyleOptionButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *qt6.QStyleOptionButton), option *qt6.QStyleOptionButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQStyleOptionButton(unsafe.Pointer(option))

	gofunc((&KColorButton{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *KColorButton) callVirtualBase_HitButton(pos *qt6.QPoint) bool {

	return (bool)(C.KColorButton_virtualbase_hitButton(unsafe.Pointer(this.h), (*C.QPoint)(pos.UnsafePointer())))

}
func (this *KColorButton) OnHitButton(slot func(super func(pos *qt6.QPoint) bool, pos *qt6.QPoint) bool) {
	ok := C.KColorButton_override_virtual_hitButton(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_hitButton
func miqt_exec_callback_KColorButton_hitButton(self *C.KColorButton, cb C.intptr_t, pos *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *qt6.QPoint) bool, pos *qt6.QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(pos))

	virtualReturn := gofunc((&KColorButton{h: self}).callVirtualBase_HitButton, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *KColorButton) callVirtualBase_CheckStateSet() {

	C.KColorButton_virtualbase_checkStateSet(unsafe.Pointer(this.h))

}
func (this *KColorButton) OnCheckStateSet(slot func(super func())) {
	ok := C.KColorButton_override_virtual_checkStateSet(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_checkStateSet
func miqt_exec_callback_KColorButton_checkStateSet(self *C.KColorButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&KColorButton{h: self}).callVirtualBase_CheckStateSet)

}

func (this *KColorButton) callVirtualBase_NextCheckState() {

	C.KColorButton_virtualbase_nextCheckState(unsafe.Pointer(this.h))

}
func (this *KColorButton) OnNextCheckState(slot func(super func())) {
	ok := C.KColorButton_override_virtual_nextCheckState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_nextCheckState
func miqt_exec_callback_KColorButton_nextCheckState(self *C.KColorButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&KColorButton{h: self}).callVirtualBase_NextCheckState)

}

func (this *KColorButton) callVirtualBase_KeyReleaseEvent(e *qt6.QKeyEvent) {

	C.KColorButton_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(e.UnsafePointer()))

}
func (this *KColorButton) OnKeyReleaseEvent(slot func(super func(e *qt6.QKeyEvent), e *qt6.QKeyEvent)) {
	ok := C.KColorButton_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_keyReleaseEvent
func miqt_exec_callback_KColorButton_keyReleaseEvent(self *C.KColorButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QKeyEvent), e *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(e))

	gofunc((&KColorButton{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_MouseReleaseEvent(e *qt6.QMouseEvent) {

	C.KColorButton_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *KColorButton) OnMouseReleaseEvent(slot func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent)) {
	ok := C.KColorButton_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_mouseReleaseEvent
func miqt_exec_callback_KColorButton_mouseReleaseEvent(self *C.KColorButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(e))

	gofunc((&KColorButton{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_ChangeEvent(e *qt6.QEvent) {

	C.KColorButton_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer()))

}
func (this *KColorButton) OnChangeEvent(slot func(super func(e *qt6.QEvent), e *qt6.QEvent)) {
	ok := C.KColorButton_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_changeEvent
func miqt_exec_callback_KColorButton_changeEvent(self *C.KColorButton, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QEvent), e *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(e))

	gofunc((&KColorButton{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_TimerEvent(e *qt6.QTimerEvent) {

	C.KColorButton_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(e.UnsafePointer()))

}
func (this *KColorButton) OnTimerEvent(slot func(super func(e *qt6.QTimerEvent), e *qt6.QTimerEvent)) {
	ok := C.KColorButton_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_timerEvent
func miqt_exec_callback_KColorButton_timerEvent(self *C.KColorButton, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QTimerEvent), e *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(e))

	gofunc((&KColorButton{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_DevType() int {

	return (int)(C.KColorButton_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *KColorButton) OnDevType(slot func(super func() int) int) {
	ok := C.KColorButton_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_devType
func miqt_exec_callback_KColorButton_devType(self *C.KColorButton, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KColorButton{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *KColorButton) callVirtualBase_SetVisible(visible bool) {

	C.KColorButton_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *KColorButton) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.KColorButton_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_setVisible
func miqt_exec_callback_KColorButton_setVisible(self *C.KColorButton, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&KColorButton{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *KColorButton) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.KColorButton_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *KColorButton) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.KColorButton_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_heightForWidth
func miqt_exec_callback_KColorButton_heightForWidth(self *C.KColorButton, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&KColorButton{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *KColorButton) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.KColorButton_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *KColorButton) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.KColorButton_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_hasHeightForWidth
func miqt_exec_callback_KColorButton_hasHeightForWidth(self *C.KColorButton, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KColorButton{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *KColorButton) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.KColorButton_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *KColorButton) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.KColorButton_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_paintEngine
func miqt_exec_callback_KColorButton_paintEngine(self *C.KColorButton, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KColorButton{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *KColorButton) callVirtualBase_MouseDoubleClickEvent(event *qt6.QMouseEvent) {

	C.KColorButton_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *KColorButton) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.KColorButton_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_mouseDoubleClickEvent
func miqt_exec_callback_KColorButton_mouseDoubleClickEvent(self *C.KColorButton, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&KColorButton{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_WheelEvent(event *qt6.QWheelEvent) {

	C.KColorButton_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *KColorButton) OnWheelEvent(slot func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent)) {
	ok := C.KColorButton_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_wheelEvent
func miqt_exec_callback_KColorButton_wheelEvent(self *C.KColorButton, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&KColorButton{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.KColorButton_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *KColorButton) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.KColorButton_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_enterEvent
func miqt_exec_callback_KColorButton_enterEvent(self *C.KColorButton, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&KColorButton{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.KColorButton_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *KColorButton) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.KColorButton_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_leaveEvent
func miqt_exec_callback_KColorButton_leaveEvent(self *C.KColorButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&KColorButton{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.KColorButton_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *KColorButton) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.KColorButton_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_moveEvent
func miqt_exec_callback_KColorButton_moveEvent(self *C.KColorButton, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&KColorButton{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_ResizeEvent(event *qt6.QResizeEvent) {

	C.KColorButton_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *KColorButton) OnResizeEvent(slot func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent)) {
	ok := C.KColorButton_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_resizeEvent
func miqt_exec_callback_KColorButton_resizeEvent(self *C.KColorButton, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&KColorButton{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_CloseEvent(event *qt6.QCloseEvent) {

	C.KColorButton_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *KColorButton) OnCloseEvent(slot func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent)) {
	ok := C.KColorButton_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_closeEvent
func miqt_exec_callback_KColorButton_closeEvent(self *C.KColorButton, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&KColorButton{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_ContextMenuEvent(event *qt6.QContextMenuEvent) {

	C.KColorButton_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *KColorButton) OnContextMenuEvent(slot func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent)) {
	ok := C.KColorButton_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_contextMenuEvent
func miqt_exec_callback_KColorButton_contextMenuEvent(self *C.KColorButton, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&KColorButton{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.KColorButton_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *KColorButton) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.KColorButton_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_tabletEvent
func miqt_exec_callback_KColorButton_tabletEvent(self *C.KColorButton, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&KColorButton{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.KColorButton_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *KColorButton) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.KColorButton_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_actionEvent
func miqt_exec_callback_KColorButton_actionEvent(self *C.KColorButton, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&KColorButton{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_DragMoveEvent(event *qt6.QDragMoveEvent) {

	C.KColorButton_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *KColorButton) OnDragMoveEvent(slot func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent)) {
	ok := C.KColorButton_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_dragMoveEvent
func miqt_exec_callback_KColorButton_dragMoveEvent(self *C.KColorButton, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&KColorButton{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_DragLeaveEvent(event *qt6.QDragLeaveEvent) {

	C.KColorButton_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *KColorButton) OnDragLeaveEvent(slot func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent)) {
	ok := C.KColorButton_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_dragLeaveEvent
func miqt_exec_callback_KColorButton_dragLeaveEvent(self *C.KColorButton, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&KColorButton{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_ShowEvent(event *qt6.QShowEvent) {

	C.KColorButton_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *KColorButton) OnShowEvent(slot func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent)) {
	ok := C.KColorButton_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_showEvent
func miqt_exec_callback_KColorButton_showEvent(self *C.KColorButton, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&KColorButton{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.KColorButton_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *KColorButton) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.KColorButton_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_hideEvent
func miqt_exec_callback_KColorButton_hideEvent(self *C.KColorButton, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&KColorButton{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.KColorButton_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *KColorButton) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.KColorButton_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_nativeEvent
func miqt_exec_callback_KColorButton_nativeEvent(self *C.KColorButton, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&KColorButton{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *KColorButton) callVirtualBase_Metric(param1 PaintDeviceMetric) int {

	return (int)(C.KColorButton_virtualbase_metric(unsafe.Pointer(this.h), param1))

}
func (this *KColorButton) OnMetric(slot func(super func(param1 PaintDeviceMetric) int, param1 PaintDeviceMetric) int) {
	ok := C.KColorButton_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_metric
func miqt_exec_callback_KColorButton_metric(self *C.KColorButton, cb C.intptr_t, param1 C.PaintDeviceMetric) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 PaintDeviceMetric) int, param1 PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	int /* TODO  */

	virtualReturn := gofunc((&KColorButton{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *KColorButton) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.KColorButton_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *KColorButton) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.KColorButton_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_initPainter
func miqt_exec_callback_KColorButton_initPainter(self *C.KColorButton, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&KColorButton{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *KColorButton) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.KColorButton_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *KColorButton) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.KColorButton_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_redirected
func miqt_exec_callback_KColorButton_redirected(self *C.KColorButton, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&KColorButton{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *KColorButton) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.KColorButton_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *KColorButton) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.KColorButton_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_sharedPainter
func miqt_exec_callback_KColorButton_sharedPainter(self *C.KColorButton, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KColorButton{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *KColorButton) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.KColorButton_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *KColorButton) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.KColorButton_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_inputMethodEvent
func miqt_exec_callback_KColorButton_inputMethodEvent(self *C.KColorButton, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&KColorButton{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.KColorButton_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *KColorButton) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.KColorButton_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_inputMethodQuery
func miqt_exec_callback_KColorButton_inputMethodQuery(self *C.KColorButton, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(param1)

	virtualReturn := gofunc((&KColorButton{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *KColorButton) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.KColorButton_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *KColorButton) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.KColorButton_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_focusNextPrevChild
func miqt_exec_callback_KColorButton_focusNextPrevChild(self *C.KColorButton, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&KColorButton{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *KColorButton) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.KColorButton_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *KColorButton) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.KColorButton_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_eventFilter
func miqt_exec_callback_KColorButton_eventFilter(self *C.KColorButton, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&KColorButton{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *KColorButton) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.KColorButton_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *KColorButton) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.KColorButton_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_childEvent
func miqt_exec_callback_KColorButton_childEvent(self *C.KColorButton, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&KColorButton{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.KColorButton_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *KColorButton) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.KColorButton_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_customEvent
func miqt_exec_callback_KColorButton_customEvent(self *C.KColorButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&KColorButton{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *KColorButton) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.KColorButton_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *KColorButton) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.KColorButton_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_connectNotify
func miqt_exec_callback_KColorButton_connectNotify(self *C.KColorButton, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&KColorButton{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *KColorButton) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.KColorButton_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *KColorButton) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.KColorButton_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KColorButton_disconnectNotify
func miqt_exec_callback_KColorButton_disconnectNotify(self *C.KColorButton, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&KColorButton{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *KColorButton) Delete() {
	C.KColorButton_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *KColorButton) GoGC() {
	runtime.SetFinalizer(this, func(this *KColorButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
