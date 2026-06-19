package kwidgetsaddons

/*

#include "gen_kmultitabbar.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type KMultiTabBar__KMultiTabBarPosition int

const (
	KMultiTabBar__Left   KMultiTabBar__KMultiTabBarPosition = 0
	KMultiTabBar__Right  KMultiTabBar__KMultiTabBarPosition = 1
	KMultiTabBar__Top    KMultiTabBar__KMultiTabBarPosition = 2
	KMultiTabBar__Bottom KMultiTabBar__KMultiTabBarPosition = 3
)

type KMultiTabBar__KMultiTabBarStyle int

const (
	KMultiTabBar__VSNET     KMultiTabBar__KMultiTabBarStyle = 0
	KMultiTabBar__KDEV3ICON KMultiTabBar__KMultiTabBarStyle = 2
	KMultiTabBar__STYLELAST KMultiTabBar__KMultiTabBarStyle = 65535
)

type KMultiTabBar struct {
	h *C.KMultiTabBar
	*qt6.QWidget
}

func (this *KMultiTabBar) cPointer() *C.KMultiTabBar {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *KMultiTabBar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKMultiTabBar constructs the type using only CGO pointers.
func newKMultiTabBar(h *C.KMultiTabBar) *KMultiTabBar {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.KMultiTabBar_virtbase(h, &outptr_QWidget)

	return &KMultiTabBar{h: h,
		QWidget: qt6.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewKMultiTabBar constructs the type using only unsafe pointers.
func UnsafeNewKMultiTabBar(h unsafe.Pointer) *KMultiTabBar {
	return newKMultiTabBar((*C.KMultiTabBar)(h))
}

// NewKMultiTabBar constructs a new KMultiTabBar object.
func NewKMultiTabBar(parent *qt6.QWidget) *KMultiTabBar {

	return newKMultiTabBar(C.KMultiTabBar_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewKMultiTabBar2 constructs a new KMultiTabBar object.
func NewKMultiTabBar2() *KMultiTabBar {

	return newKMultiTabBar(C.KMultiTabBar_new2())
}

// NewKMultiTabBar3 constructs a new KMultiTabBar object.
func NewKMultiTabBar3(pos KMultiTabBarPosition) *KMultiTabBar {

	return newKMultiTabBar(C.KMultiTabBar_new3(pos))
}

// NewKMultiTabBar4 constructs a new KMultiTabBar object.
func NewKMultiTabBar4(pos KMultiTabBarPosition, parent *qt6.QWidget) *KMultiTabBar {

	return newKMultiTabBar(C.KMultiTabBar_new4(pos, (*C.QWidget)(parent.UnsafePointer())))
}

func (this *KMultiTabBar) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.KMultiTabBar_metaObject(this.h)))
}

func (this *KMultiTabBar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.KMultiTabBar_metacast(this.h, param1_Cstring))
}

func KMultiTabBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.KMultiTabBar_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KMultiTabBar) AppendButton(icon *qt6.QIcon) int {
	return (int)(C.KMultiTabBar_appendButton(this.h, (*C.QIcon)(icon.UnsafePointer())))
}

func (this *KMultiTabBar) RemoveButton(id int) {
	C.KMultiTabBar_removeButton(this.h, (C.int)(id))
}

func (this *KMultiTabBar) AppendTab(icon *qt6.QIcon) int {
	return (int)(C.KMultiTabBar_appendTab(this.h, (*C.QIcon)(icon.UnsafePointer())))
}

func (this *KMultiTabBar) RemoveTab(id int) {
	C.KMultiTabBar_removeTab(this.h, (C.int)(id))
}

func (this *KMultiTabBar) SetTab(id int, state bool) {
	C.KMultiTabBar_setTab(this.h, (C.int)(id), (C.bool)(state))
}

func (this *KMultiTabBar) IsTabRaised(id int) bool {
	return (bool)(C.KMultiTabBar_isTabRaised(this.h, (C.int)(id)))
}

func (this *KMultiTabBar) Button(id int) *KMultiTabBarButton {
	return newKMultiTabBarButton(C.KMultiTabBar_button(this.h, (C.int)(id)))
}

func (this *KMultiTabBar) Tab(id int) *KMultiTabBarTab {
	return newKMultiTabBarTab(C.KMultiTabBar_tab(this.h, (C.int)(id)))
}

func (this *KMultiTabBar) SetPosition(pos KMultiTabBarPosition) {
	C.KMultiTabBar_setPosition(this.h, pos)
}

func (this *KMultiTabBar) Position() KMultiTabBarPosition {
	int /* TODO  */
}

func (this *KMultiTabBar) SetStyle(style KMultiTabBarStyle) {
	C.KMultiTabBar_setStyle(this.h, style)
}

func (this *KMultiTabBar) TabStyle() KMultiTabBarStyle {
	int /* TODO  */
}

func KMultiTabBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KMultiTabBar_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func KMultiTabBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KMultiTabBar_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KMultiTabBar) AppendButton2(icon *qt6.QIcon, id int) int {
	return (int)(C.KMultiTabBar_appendButton2(this.h, (*C.QIcon)(icon.UnsafePointer()), (C.int)(id)))
}

func (this *KMultiTabBar) AppendButton3(icon *qt6.QIcon, id int, popup *qt6.QMenu) int {
	return (int)(C.KMultiTabBar_appendButton3(this.h, (*C.QIcon)(icon.UnsafePointer()), (C.int)(id), (*C.QMenu)(popup.UnsafePointer())))
}

func (this *KMultiTabBar) AppendButton4(icon *qt6.QIcon, id int, popup *qt6.QMenu, not_used_yet string) int {
	not_used_yet_ms := C.struct_miqt_string{}
	not_used_yet_ms.data = C.CString(not_used_yet)
	not_used_yet_ms.len = C.size_t(len(not_used_yet))
	defer C.free(unsafe.Pointer(not_used_yet_ms.data))
	return (int)(C.KMultiTabBar_appendButton4(this.h, (*C.QIcon)(icon.UnsafePointer()), (C.int)(id), (*C.QMenu)(popup.UnsafePointer()), not_used_yet_ms))
}

func (this *KMultiTabBar) AppendTab2(icon *qt6.QIcon, id int) int {
	return (int)(C.KMultiTabBar_appendTab2(this.h, (*C.QIcon)(icon.UnsafePointer()), (C.int)(id)))
}

func (this *KMultiTabBar) AppendTab3(icon *qt6.QIcon, id int, text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.KMultiTabBar_appendTab3(this.h, (*C.QIcon)(icon.UnsafePointer()), (C.int)(id), text_ms))
}

// UpdateSeparator can only be called from a KMultiTabBar that was directly constructed.
func (this *KMultiTabBar) UpdateSeparator() {

	var _dynamic_cast_ok C.bool = false
	C.KMultiTabBar_protectedbase_updateSeparator(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a KMultiTabBar that was directly constructed.
func (this *KMultiTabBar) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.KMultiTabBar_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a KMultiTabBar that was directly constructed.
func (this *KMultiTabBar) Create() {

	var _dynamic_cast_ok C.bool = false
	C.KMultiTabBar_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a KMultiTabBar that was directly constructed.
func (this *KMultiTabBar) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.KMultiTabBar_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a KMultiTabBar that was directly constructed.
func (this *KMultiTabBar) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.KMultiTabBar_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a KMultiTabBar that was directly constructed.
func (this *KMultiTabBar) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.KMultiTabBar_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a KMultiTabBar that was directly constructed.
func (this *KMultiTabBar) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.KMultiTabBar_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a KMultiTabBar that was directly constructed.
func (this *KMultiTabBar) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.KMultiTabBar_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a KMultiTabBar that was directly constructed.
func (this *KMultiTabBar) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.KMultiTabBar_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a KMultiTabBar that was directly constructed.
func (this *KMultiTabBar) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.KMultiTabBar_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// GetDecodedMetricF can only be called from a KMultiTabBar that was directly constructed.
func (this *KMultiTabBar) GetDecodedMetricF(metricA PaintDeviceMetric, metricB PaintDeviceMetric) float64 {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (float64)(C.KMultiTabBar_protectedbase_getDecodedMetricF(&_dynamic_cast_ok, unsafe.Pointer(this.h), metricA, metricB))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *KMultiTabBar) callVirtualBase_FontChange(param1 *qt6.QFont) {

	C.KMultiTabBar_virtualbase_fontChange(unsafe.Pointer(this.h), (*C.QFont)(param1.UnsafePointer()))

}
func (this *KMultiTabBar) OnFontChange(slot func(super func(param1 *qt6.QFont), param1 *qt6.QFont)) {
	ok := C.KMultiTabBar_override_virtual_fontChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_fontChange
func miqt_exec_callback_KMultiTabBar_fontChange(self *C.KMultiTabBar, cb C.intptr_t, param1 *C.QFont) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QFont), param1 *qt6.QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFont(unsafe.Pointer(param1))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_FontChange, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_PaintEvent(param1 *qt6.QPaintEvent) {

	C.KMultiTabBar_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *KMultiTabBar) OnPaintEvent(slot func(super func(param1 *qt6.QPaintEvent), param1 *qt6.QPaintEvent)) {
	ok := C.KMultiTabBar_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_paintEvent
func miqt_exec_callback_KMultiTabBar_paintEvent(self *C.KMultiTabBar, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QPaintEvent), param1 *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_DevType() int {

	return (int)(C.KMultiTabBar_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *KMultiTabBar) OnDevType(slot func(super func() int) int) {
	ok := C.KMultiTabBar_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_devType
func miqt_exec_callback_KMultiTabBar_devType(self *C.KMultiTabBar, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KMultiTabBar{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *KMultiTabBar) callVirtualBase_SetVisible(visible bool) {

	C.KMultiTabBar_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *KMultiTabBar) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.KMultiTabBar_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_setVisible
func miqt_exec_callback_KMultiTabBar_setVisible(self *C.KMultiTabBar, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.KMultiTabBar_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *KMultiTabBar) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.KMultiTabBar_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_sizeHint
func miqt_exec_callback_KMultiTabBar_sizeHint(self *C.KMultiTabBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KMultiTabBar{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *KMultiTabBar) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.KMultiTabBar_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *KMultiTabBar) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.KMultiTabBar_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_minimumSizeHint
func miqt_exec_callback_KMultiTabBar_minimumSizeHint(self *C.KMultiTabBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KMultiTabBar{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *KMultiTabBar) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.KMultiTabBar_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *KMultiTabBar) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.KMultiTabBar_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_heightForWidth
func miqt_exec_callback_KMultiTabBar_heightForWidth(self *C.KMultiTabBar, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&KMultiTabBar{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *KMultiTabBar) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.KMultiTabBar_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *KMultiTabBar) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.KMultiTabBar_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_hasHeightForWidth
func miqt_exec_callback_KMultiTabBar_hasHeightForWidth(self *C.KMultiTabBar, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KMultiTabBar{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *KMultiTabBar) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.KMultiTabBar_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *KMultiTabBar) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.KMultiTabBar_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_paintEngine
func miqt_exec_callback_KMultiTabBar_paintEngine(self *C.KMultiTabBar, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KMultiTabBar{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *KMultiTabBar) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.KMultiTabBar_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *KMultiTabBar) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.KMultiTabBar_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_event
func miqt_exec_callback_KMultiTabBar_event(self *C.KMultiTabBar, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&KMultiTabBar{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *KMultiTabBar) callVirtualBase_MousePressEvent(event *qt6.QMouseEvent) {

	C.KMultiTabBar_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnMousePressEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.KMultiTabBar_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_mousePressEvent
func miqt_exec_callback_KMultiTabBar_mousePressEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_MouseReleaseEvent(event *qt6.QMouseEvent) {

	C.KMultiTabBar_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnMouseReleaseEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.KMultiTabBar_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_mouseReleaseEvent
func miqt_exec_callback_KMultiTabBar_mouseReleaseEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_MouseDoubleClickEvent(event *qt6.QMouseEvent) {

	C.KMultiTabBar_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.KMultiTabBar_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_mouseDoubleClickEvent
func miqt_exec_callback_KMultiTabBar_mouseDoubleClickEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_MouseMoveEvent(event *qt6.QMouseEvent) {

	C.KMultiTabBar_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnMouseMoveEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.KMultiTabBar_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_mouseMoveEvent
func miqt_exec_callback_KMultiTabBar_mouseMoveEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_WheelEvent(event *qt6.QWheelEvent) {

	C.KMultiTabBar_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnWheelEvent(slot func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent)) {
	ok := C.KMultiTabBar_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_wheelEvent
func miqt_exec_callback_KMultiTabBar_wheelEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_KeyPressEvent(event *qt6.QKeyEvent) {

	C.KMultiTabBar_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnKeyPressEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.KMultiTabBar_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_keyPressEvent
func miqt_exec_callback_KMultiTabBar_keyPressEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.KMultiTabBar_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.KMultiTabBar_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_keyReleaseEvent
func miqt_exec_callback_KMultiTabBar_keyReleaseEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.KMultiTabBar_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.KMultiTabBar_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_focusInEvent
func miqt_exec_callback_KMultiTabBar_focusInEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.KMultiTabBar_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.KMultiTabBar_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_focusOutEvent
func miqt_exec_callback_KMultiTabBar_focusOutEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.KMultiTabBar_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.KMultiTabBar_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_enterEvent
func miqt_exec_callback_KMultiTabBar_enterEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.KMultiTabBar_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.KMultiTabBar_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_leaveEvent
func miqt_exec_callback_KMultiTabBar_leaveEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.KMultiTabBar_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.KMultiTabBar_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_moveEvent
func miqt_exec_callback_KMultiTabBar_moveEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_ResizeEvent(event *qt6.QResizeEvent) {

	C.KMultiTabBar_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnResizeEvent(slot func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent)) {
	ok := C.KMultiTabBar_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_resizeEvent
func miqt_exec_callback_KMultiTabBar_resizeEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_CloseEvent(event *qt6.QCloseEvent) {

	C.KMultiTabBar_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnCloseEvent(slot func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent)) {
	ok := C.KMultiTabBar_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_closeEvent
func miqt_exec_callback_KMultiTabBar_closeEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_ContextMenuEvent(event *qt6.QContextMenuEvent) {

	C.KMultiTabBar_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnContextMenuEvent(slot func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent)) {
	ok := C.KMultiTabBar_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_contextMenuEvent
func miqt_exec_callback_KMultiTabBar_contextMenuEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.KMultiTabBar_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.KMultiTabBar_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_tabletEvent
func miqt_exec_callback_KMultiTabBar_tabletEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.KMultiTabBar_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.KMultiTabBar_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_actionEvent
func miqt_exec_callback_KMultiTabBar_actionEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_DragEnterEvent(event *qt6.QDragEnterEvent) {

	C.KMultiTabBar_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnDragEnterEvent(slot func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent)) {
	ok := C.KMultiTabBar_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_dragEnterEvent
func miqt_exec_callback_KMultiTabBar_dragEnterEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_DragMoveEvent(event *qt6.QDragMoveEvent) {

	C.KMultiTabBar_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnDragMoveEvent(slot func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent)) {
	ok := C.KMultiTabBar_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_dragMoveEvent
func miqt_exec_callback_KMultiTabBar_dragMoveEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_DragLeaveEvent(event *qt6.QDragLeaveEvent) {

	C.KMultiTabBar_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnDragLeaveEvent(slot func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent)) {
	ok := C.KMultiTabBar_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_dragLeaveEvent
func miqt_exec_callback_KMultiTabBar_dragLeaveEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_DropEvent(event *qt6.QDropEvent) {

	C.KMultiTabBar_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnDropEvent(slot func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent)) {
	ok := C.KMultiTabBar_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_dropEvent
func miqt_exec_callback_KMultiTabBar_dropEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_ShowEvent(event *qt6.QShowEvent) {

	C.KMultiTabBar_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnShowEvent(slot func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent)) {
	ok := C.KMultiTabBar_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_showEvent
func miqt_exec_callback_KMultiTabBar_showEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.KMultiTabBar_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.KMultiTabBar_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_hideEvent
func miqt_exec_callback_KMultiTabBar_hideEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.KMultiTabBar_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *KMultiTabBar) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.KMultiTabBar_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_nativeEvent
func miqt_exec_callback_KMultiTabBar_nativeEvent(self *C.KMultiTabBar, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&KMultiTabBar{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *KMultiTabBar) callVirtualBase_ChangeEvent(param1 *qt6.QEvent) {

	C.KMultiTabBar_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *KMultiTabBar) OnChangeEvent(slot func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent)) {
	ok := C.KMultiTabBar_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_changeEvent
func miqt_exec_callback_KMultiTabBar_changeEvent(self *C.KMultiTabBar, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_Metric(param1 PaintDeviceMetric) int {

	return (int)(C.KMultiTabBar_virtualbase_metric(unsafe.Pointer(this.h), param1))

}
func (this *KMultiTabBar) OnMetric(slot func(super func(param1 PaintDeviceMetric) int, param1 PaintDeviceMetric) int) {
	ok := C.KMultiTabBar_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_metric
func miqt_exec_callback_KMultiTabBar_metric(self *C.KMultiTabBar, cb C.intptr_t, param1 C.PaintDeviceMetric) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 PaintDeviceMetric) int, param1 PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	int /* TODO  */

	virtualReturn := gofunc((&KMultiTabBar{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *KMultiTabBar) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.KMultiTabBar_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *KMultiTabBar) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.KMultiTabBar_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_initPainter
func miqt_exec_callback_KMultiTabBar_initPainter(self *C.KMultiTabBar, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.KMultiTabBar_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *KMultiTabBar) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.KMultiTabBar_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_redirected
func miqt_exec_callback_KMultiTabBar_redirected(self *C.KMultiTabBar, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&KMultiTabBar{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *KMultiTabBar) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.KMultiTabBar_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *KMultiTabBar) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.KMultiTabBar_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_sharedPainter
func miqt_exec_callback_KMultiTabBar_sharedPainter(self *C.KMultiTabBar, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KMultiTabBar{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *KMultiTabBar) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.KMultiTabBar_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *KMultiTabBar) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.KMultiTabBar_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_inputMethodEvent
func miqt_exec_callback_KMultiTabBar_inputMethodEvent(self *C.KMultiTabBar, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.KMultiTabBar_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *KMultiTabBar) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.KMultiTabBar_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_inputMethodQuery
func miqt_exec_callback_KMultiTabBar_inputMethodQuery(self *C.KMultiTabBar, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(param1)

	virtualReturn := gofunc((&KMultiTabBar{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *KMultiTabBar) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.KMultiTabBar_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *KMultiTabBar) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.KMultiTabBar_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_focusNextPrevChild
func miqt_exec_callback_KMultiTabBar_focusNextPrevChild(self *C.KMultiTabBar, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&KMultiTabBar{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *KMultiTabBar) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.KMultiTabBar_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *KMultiTabBar) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.KMultiTabBar_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_eventFilter
func miqt_exec_callback_KMultiTabBar_eventFilter(self *C.KMultiTabBar, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&KMultiTabBar{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *KMultiTabBar) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.KMultiTabBar_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.KMultiTabBar_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_timerEvent
func miqt_exec_callback_KMultiTabBar_timerEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.KMultiTabBar_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.KMultiTabBar_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_childEvent
func miqt_exec_callback_KMultiTabBar_childEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.KMultiTabBar_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *KMultiTabBar) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.KMultiTabBar_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_customEvent
func miqt_exec_callback_KMultiTabBar_customEvent(self *C.KMultiTabBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.KMultiTabBar_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *KMultiTabBar) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.KMultiTabBar_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_connectNotify
func miqt_exec_callback_KMultiTabBar_connectNotify(self *C.KMultiTabBar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *KMultiTabBar) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.KMultiTabBar_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *KMultiTabBar) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.KMultiTabBar_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMultiTabBar_disconnectNotify
func miqt_exec_callback_KMultiTabBar_disconnectNotify(self *C.KMultiTabBar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&KMultiTabBar{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *KMultiTabBar) Delete() {
	C.KMultiTabBar_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *KMultiTabBar) GoGC() {
	runtime.SetFinalizer(this, func(this *KMultiTabBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type KMultiTabBarButton struct {
	h *C.KMultiTabBarButton
	*qt6.QPushButton
}

func (this *KMultiTabBarButton) cPointer() *C.KMultiTabBarButton {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *KMultiTabBarButton) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKMultiTabBarButton constructs the type using only CGO pointers.
func newKMultiTabBarButton(h *C.KMultiTabBarButton) *KMultiTabBarButton {
	if h == nil {
		return nil
	}
	var outptr_QPushButton *C.QPushButton = nil
	C.KMultiTabBarButton_virtbase(h, &outptr_QPushButton)

	return &KMultiTabBarButton{h: h,
		QPushButton: qt6.UnsafeNewQPushButton(unsafe.Pointer(outptr_QPushButton))}
}

// UnsafeNewKMultiTabBarButton constructs the type using only unsafe pointers.
func UnsafeNewKMultiTabBarButton(h unsafe.Pointer) *KMultiTabBarButton {
	return newKMultiTabBarButton((*C.KMultiTabBarButton)(h))
}

func (this *KMultiTabBarButton) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.KMultiTabBarButton_metaObject(this.h)))
}

func (this *KMultiTabBarButton) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.KMultiTabBarButton_metacast(this.h, param1_Cstring))
}

func KMultiTabBarButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.KMultiTabBarButton_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KMultiTabBarButton) Id() int {
	return (int)(C.KMultiTabBarButton_id(this.h))
}

func (this *KMultiTabBarButton) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.KMultiTabBarButton_setText(this.h, text_ms)
}

func (this *KMultiTabBarButton) Clicked(id int) {
	C.KMultiTabBarButton_clicked(this.h, (C.int)(id))
}
func (this *KMultiTabBarButton) OnClicked(slot func(id int)) {
	C.KMultiTabBarButton_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_KMultiTabBarButton_clicked
func miqt_exec_callback_KMultiTabBarButton_clicked(cb C.intptr_t, id C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	gofunc(slotval1)
}

func KMultiTabBarButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KMultiTabBarButton_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func KMultiTabBarButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KMultiTabBarButton_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *KMultiTabBarButton) Delete() {
	C.KMultiTabBarButton_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *KMultiTabBarButton) GoGC() {
	runtime.SetFinalizer(this, func(this *KMultiTabBarButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type KMultiTabBarTab struct {
	h *C.KMultiTabBarTab
	*KMultiTabBarButton
}

func (this *KMultiTabBarTab) cPointer() *C.KMultiTabBarTab {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *KMultiTabBarTab) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKMultiTabBarTab constructs the type using only CGO pointers.
func newKMultiTabBarTab(h *C.KMultiTabBarTab) *KMultiTabBarTab {
	if h == nil {
		return nil
	}
	var outptr_KMultiTabBarButton *C.KMultiTabBarButton = nil
	C.KMultiTabBarTab_virtbase(h, &outptr_KMultiTabBarButton)

	return &KMultiTabBarTab{h: h,
		KMultiTabBarButton: newKMultiTabBarButton(outptr_KMultiTabBarButton)}
}

// UnsafeNewKMultiTabBarTab constructs the type using only unsafe pointers.
func UnsafeNewKMultiTabBarTab(h unsafe.Pointer) *KMultiTabBarTab {
	return newKMultiTabBarTab((*C.KMultiTabBarTab)(h))
}

func (this *KMultiTabBarTab) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.KMultiTabBarTab_metaObject(this.h)))
}

func (this *KMultiTabBarTab) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.KMultiTabBarTab_metacast(this.h, param1_Cstring))
}

func KMultiTabBarTab_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.KMultiTabBarTab_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KMultiTabBarTab) SizeHint() *qt6.QSize {
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.KMultiTabBarTab_sizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KMultiTabBarTab) MinimumSizeHint() *qt6.QSize {
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.KMultiTabBarTab_minimumSizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KMultiTabBarTab) SetPosition(position KMultiTabBar__KMultiTabBarPosition) {
	C.KMultiTabBarTab_setPosition(this.h, (C.int)(position))
}

func (this *KMultiTabBarTab) SetStyle(style KMultiTabBar__KMultiTabBarStyle) {
	C.KMultiTabBarTab_setStyle(this.h, (C.int)(style))
}

func (this *KMultiTabBarTab) SetState(state bool) {
	C.KMultiTabBarTab_setState(this.h, (C.bool)(state))
}

func KMultiTabBarTab_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KMultiTabBarTab_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func KMultiTabBarTab_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KMultiTabBarTab_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *KMultiTabBarTab) Delete() {
	C.KMultiTabBarTab_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *KMultiTabBarTab) GoGC() {
	runtime.SetFinalizer(this, func(this *KMultiTabBarTab) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
