package kwidgetsaddons

/*

#include "gen_kmessagewidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type KMessageWidget__MessageType int

const (
	KMessageWidget__Positive    KMessageWidget__MessageType = 0
	KMessageWidget__Information KMessageWidget__MessageType = 1
	KMessageWidget__Warning     KMessageWidget__MessageType = 2
	KMessageWidget__Error       KMessageWidget__MessageType = 3
)

type KMessageWidget__Position int

const (
	KMessageWidget__Inline KMessageWidget__Position = 0
	KMessageWidget__Header KMessageWidget__Position = 1
	KMessageWidget__Footer KMessageWidget__Position = 2
)

type KMessageWidget struct {
	h *C.KMessageWidget
	*qt6.QFrame
}

func (this *KMessageWidget) cPointer() *C.KMessageWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *KMessageWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKMessageWidget constructs the type using only CGO pointers.
func newKMessageWidget(h *C.KMessageWidget) *KMessageWidget {
	if h == nil {
		return nil
	}
	var outptr_QFrame *C.QFrame = nil
	C.KMessageWidget_virtbase(h, &outptr_QFrame)

	return &KMessageWidget{h: h,
		QFrame: qt6.UnsafeNewQFrame(unsafe.Pointer(outptr_QFrame))}
}

// UnsafeNewKMessageWidget constructs the type using only unsafe pointers.
func UnsafeNewKMessageWidget(h unsafe.Pointer) *KMessageWidget {
	return newKMessageWidget((*C.KMessageWidget)(h))
}

// NewKMessageWidget constructs a new KMessageWidget object.
func NewKMessageWidget(parent *qt6.QWidget) *KMessageWidget {

	return newKMessageWidget(C.KMessageWidget_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewKMessageWidget2 constructs a new KMessageWidget object.
func NewKMessageWidget2() *KMessageWidget {

	return newKMessageWidget(C.KMessageWidget_new2())
}

// NewKMessageWidget3 constructs a new KMessageWidget object.
func NewKMessageWidget3(text string) *KMessageWidget {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newKMessageWidget(C.KMessageWidget_new3(text_ms))
}

// NewKMessageWidget4 constructs a new KMessageWidget object.
func NewKMessageWidget4(text string, parent *qt6.QWidget) *KMessageWidget {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newKMessageWidget(C.KMessageWidget_new4(text_ms, (*C.QWidget)(parent.UnsafePointer())))
}

func (this *KMessageWidget) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.KMessageWidget_metaObject(this.h)))
}

func (this *KMessageWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.KMessageWidget_metacast(this.h, param1_Cstring))
}

func KMessageWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.KMessageWidget_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KMessageWidget) Position() Position {
	int /* TODO  */
}

func (this *KMessageWidget) Text() string {
	var _ms C.struct_miqt_string = C.KMessageWidget_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KMessageWidget) TextFormat() qt6.TextFormat {
	return (qt6.TextFormat)(C.KMessageWidget_textFormat(this.h))
}

func (this *KMessageWidget) SetTextFormat(textFormat qt6.TextFormat) {
	C.KMessageWidget_setTextFormat(this.h, (C.int)(textFormat))
}

func (this *KMessageWidget) WordWrap() bool {
	return (bool)(C.KMessageWidget_wordWrap(this.h))
}

func (this *KMessageWidget) IsCloseButtonVisible() bool {
	return (bool)(C.KMessageWidget_isCloseButtonVisible(this.h))
}

func (this *KMessageWidget) MessageType() MessageType {
	int /* TODO  */
}

func (this *KMessageWidget) AddAction(action *qt6.QAction) {
	C.KMessageWidget_addAction(this.h, (*C.QAction)(action.UnsafePointer()))
}

func (this *KMessageWidget) RemoveAction(action *qt6.QAction) {
	C.KMessageWidget_removeAction(this.h, (*C.QAction)(action.UnsafePointer()))
}

func (this *KMessageWidget) ClearActions() {
	C.KMessageWidget_clearActions(this.h)
}

func (this *KMessageWidget) SizeHint() *qt6.QSize {
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.KMessageWidget_sizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KMessageWidget) MinimumSizeHint() *qt6.QSize {
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.KMessageWidget_minimumSizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KMessageWidget) HeightForWidth(width int) int {
	return (int)(C.KMessageWidget_heightForWidth(this.h, (C.int)(width)))
}

func (this *KMessageWidget) Icon() *qt6.QIcon {
	_goptr := qt6.UnsafeNewQIcon(unsafe.Pointer(C.KMessageWidget_icon(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KMessageWidget) IsHideAnimationRunning() bool {
	return (bool)(C.KMessageWidget_isHideAnimationRunning(this.h))
}

func (this *KMessageWidget) IsShowAnimationRunning() bool {
	return (bool)(C.KMessageWidget_isShowAnimationRunning(this.h))
}

func (this *KMessageWidget) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.KMessageWidget_setText(this.h, text_ms)
}

func (this *KMessageWidget) SetPosition(position Position) {
	C.KMessageWidget_setPosition(this.h, position)
}

func (this *KMessageWidget) SetWordWrap(wordWrap bool) {
	C.KMessageWidget_setWordWrap(this.h, (C.bool)(wordWrap))
}

func (this *KMessageWidget) SetCloseButtonVisible(visible bool) {
	C.KMessageWidget_setCloseButtonVisible(this.h, (C.bool)(visible))
}

func (this *KMessageWidget) SetMessageType(typeVal KMessageWidget__MessageType) {
	C.KMessageWidget_setMessageType(this.h, (C.int)(typeVal))
}

func (this *KMessageWidget) AnimatedShow() {
	C.KMessageWidget_animatedShow(this.h)
}

func (this *KMessageWidget) AnimatedHide() {
	C.KMessageWidget_animatedHide(this.h)
}

func (this *KMessageWidget) SetIcon(icon *qt6.QIcon) {
	C.KMessageWidget_setIcon(this.h, (*C.QIcon)(icon.UnsafePointer()))
}

func (this *KMessageWidget) LinkActivated(contents string) {
	contents_ms := C.struct_miqt_string{}
	contents_ms.data = C.CString(contents)
	contents_ms.len = C.size_t(len(contents))
	defer C.free(unsafe.Pointer(contents_ms.data))
	C.KMessageWidget_linkActivated(this.h, contents_ms)
}
func (this *KMessageWidget) OnLinkActivated(slot func(contents string)) {
	C.KMessageWidget_connect_linkActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_KMessageWidget_linkActivated
func miqt_exec_callback_KMessageWidget_linkActivated(cb C.intptr_t, contents C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(contents string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var contents_ms C.struct_miqt_string = contents
	contents_ret := C.GoStringN(contents_ms.data, C.int(int64(contents_ms.len)))
	C.free(unsafe.Pointer(contents_ms.data))
	slotval1 := contents_ret

	gofunc(slotval1)
}

func (this *KMessageWidget) LinkHovered(contents string) {
	contents_ms := C.struct_miqt_string{}
	contents_ms.data = C.CString(contents)
	contents_ms.len = C.size_t(len(contents))
	defer C.free(unsafe.Pointer(contents_ms.data))
	C.KMessageWidget_linkHovered(this.h, contents_ms)
}
func (this *KMessageWidget) OnLinkHovered(slot func(contents string)) {
	C.KMessageWidget_connect_linkHovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_KMessageWidget_linkHovered
func miqt_exec_callback_KMessageWidget_linkHovered(cb C.intptr_t, contents C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(contents string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var contents_ms C.struct_miqt_string = contents
	contents_ret := C.GoStringN(contents_ms.data, C.int(int64(contents_ms.len)))
	C.free(unsafe.Pointer(contents_ms.data))
	slotval1 := contents_ret

	gofunc(slotval1)
}

func (this *KMessageWidget) HideAnimationFinished() {
	C.KMessageWidget_hideAnimationFinished(this.h)
}
func (this *KMessageWidget) OnHideAnimationFinished(slot func()) {
	C.KMessageWidget_connect_hideAnimationFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_KMessageWidget_hideAnimationFinished
func miqt_exec_callback_KMessageWidget_hideAnimationFinished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *KMessageWidget) ShowAnimationFinished() {
	C.KMessageWidget_showAnimationFinished(this.h)
}
func (this *KMessageWidget) OnShowAnimationFinished(slot func()) {
	C.KMessageWidget_connect_showAnimationFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_KMessageWidget_showAnimationFinished
func miqt_exec_callback_KMessageWidget_showAnimationFinished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func KMessageWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KMessageWidget_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func KMessageWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KMessageWidget_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// DrawFrame can only be called from a KMessageWidget that was directly constructed.
func (this *KMessageWidget) DrawFrame(param1 *qt6.QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.KMessageWidget_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a KMessageWidget that was directly constructed.
func (this *KMessageWidget) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.KMessageWidget_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a KMessageWidget that was directly constructed.
func (this *KMessageWidget) Create() {

	var _dynamic_cast_ok C.bool = false
	C.KMessageWidget_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a KMessageWidget that was directly constructed.
func (this *KMessageWidget) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.KMessageWidget_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a KMessageWidget that was directly constructed.
func (this *KMessageWidget) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.KMessageWidget_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a KMessageWidget that was directly constructed.
func (this *KMessageWidget) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.KMessageWidget_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a KMessageWidget that was directly constructed.
func (this *KMessageWidget) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.KMessageWidget_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a KMessageWidget that was directly constructed.
func (this *KMessageWidget) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.KMessageWidget_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a KMessageWidget that was directly constructed.
func (this *KMessageWidget) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.KMessageWidget_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a KMessageWidget that was directly constructed.
func (this *KMessageWidget) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.KMessageWidget_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// GetDecodedMetricF can only be called from a KMessageWidget that was directly constructed.
func (this *KMessageWidget) GetDecodedMetricF(metricA PaintDeviceMetric, metricB PaintDeviceMetric) float64 {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (float64)(C.KMessageWidget_protectedbase_getDecodedMetricF(&_dynamic_cast_ok, unsafe.Pointer(this.h), metricA, metricB))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *KMessageWidget) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.KMessageWidget_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *KMessageWidget) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.KMessageWidget_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_sizeHint
func miqt_exec_callback_KMessageWidget_sizeHint(self *C.KMessageWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KMessageWidget{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *KMessageWidget) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.KMessageWidget_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *KMessageWidget) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.KMessageWidget_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_minimumSizeHint
func miqt_exec_callback_KMessageWidget_minimumSizeHint(self *C.KMessageWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KMessageWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *KMessageWidget) callVirtualBase_HeightForWidth(width int) int {

	return (int)(C.KMessageWidget_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(width)))

}
func (this *KMessageWidget) OnHeightForWidth(slot func(super func(width int) int, width int) int) {
	ok := C.KMessageWidget_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_heightForWidth
func miqt_exec_callback_KMessageWidget_heightForWidth(self *C.KMessageWidget, cb C.intptr_t, width C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(width int) int, width int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(width)

	virtualReturn := gofunc((&KMessageWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *KMessageWidget) callVirtualBase_PaintEvent(event *qt6.QPaintEvent) {

	C.KMessageWidget_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnPaintEvent(slot func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent)) {
	ok := C.KMessageWidget_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_paintEvent
func miqt_exec_callback_KMessageWidget_paintEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.KMessageWidget_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *KMessageWidget) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.KMessageWidget_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_event
func miqt_exec_callback_KMessageWidget_event(self *C.KMessageWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&KMessageWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *KMessageWidget) callVirtualBase_ResizeEvent(event *qt6.QResizeEvent) {

	C.KMessageWidget_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnResizeEvent(slot func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent)) {
	ok := C.KMessageWidget_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_resizeEvent
func miqt_exec_callback_KMessageWidget_resizeEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_ChangeEvent(param1 *qt6.QEvent) {

	C.KMessageWidget_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *KMessageWidget) OnChangeEvent(slot func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent)) {
	ok := C.KMessageWidget_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_changeEvent
func miqt_exec_callback_KMessageWidget_changeEvent(self *C.KMessageWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_InitStyleOption(option *qt6.QStyleOptionFrame) {

	C.KMessageWidget_virtualbase_initStyleOption(unsafe.Pointer(this.h), (*C.QStyleOptionFrame)(option.UnsafePointer()))

}
func (this *KMessageWidget) OnInitStyleOption(slot func(super func(option *qt6.QStyleOptionFrame), option *qt6.QStyleOptionFrame)) {
	ok := C.KMessageWidget_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_initStyleOption
func miqt_exec_callback_KMessageWidget_initStyleOption(self *C.KMessageWidget, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *qt6.QStyleOptionFrame), option *qt6.QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQStyleOptionFrame(unsafe.Pointer(option))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *KMessageWidget) callVirtualBase_DevType() int {

	return (int)(C.KMessageWidget_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *KMessageWidget) OnDevType(slot func(super func() int) int) {
	ok := C.KMessageWidget_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_devType
func miqt_exec_callback_KMessageWidget_devType(self *C.KMessageWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KMessageWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *KMessageWidget) callVirtualBase_SetVisible(visible bool) {

	C.KMessageWidget_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *KMessageWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.KMessageWidget_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_setVisible
func miqt_exec_callback_KMessageWidget_setVisible(self *C.KMessageWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&KMessageWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *KMessageWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.KMessageWidget_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *KMessageWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.KMessageWidget_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_hasHeightForWidth
func miqt_exec_callback_KMessageWidget_hasHeightForWidth(self *C.KMessageWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KMessageWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *KMessageWidget) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.KMessageWidget_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *KMessageWidget) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.KMessageWidget_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_paintEngine
func miqt_exec_callback_KMessageWidget_paintEngine(self *C.KMessageWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KMessageWidget{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *KMessageWidget) callVirtualBase_MousePressEvent(event *qt6.QMouseEvent) {

	C.KMessageWidget_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnMousePressEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.KMessageWidget_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_mousePressEvent
func miqt_exec_callback_KMessageWidget_mousePressEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_MouseReleaseEvent(event *qt6.QMouseEvent) {

	C.KMessageWidget_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnMouseReleaseEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.KMessageWidget_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_mouseReleaseEvent
func miqt_exec_callback_KMessageWidget_mouseReleaseEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_MouseDoubleClickEvent(event *qt6.QMouseEvent) {

	C.KMessageWidget_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.KMessageWidget_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_mouseDoubleClickEvent
func miqt_exec_callback_KMessageWidget_mouseDoubleClickEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_MouseMoveEvent(event *qt6.QMouseEvent) {

	C.KMessageWidget_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnMouseMoveEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.KMessageWidget_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_mouseMoveEvent
func miqt_exec_callback_KMessageWidget_mouseMoveEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_WheelEvent(event *qt6.QWheelEvent) {

	C.KMessageWidget_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnWheelEvent(slot func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent)) {
	ok := C.KMessageWidget_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_wheelEvent
func miqt_exec_callback_KMessageWidget_wheelEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_KeyPressEvent(event *qt6.QKeyEvent) {

	C.KMessageWidget_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnKeyPressEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.KMessageWidget_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_keyPressEvent
func miqt_exec_callback_KMessageWidget_keyPressEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.KMessageWidget_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.KMessageWidget_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_keyReleaseEvent
func miqt_exec_callback_KMessageWidget_keyReleaseEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.KMessageWidget_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.KMessageWidget_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_focusInEvent
func miqt_exec_callback_KMessageWidget_focusInEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.KMessageWidget_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.KMessageWidget_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_focusOutEvent
func miqt_exec_callback_KMessageWidget_focusOutEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.KMessageWidget_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.KMessageWidget_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_enterEvent
func miqt_exec_callback_KMessageWidget_enterEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.KMessageWidget_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.KMessageWidget_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_leaveEvent
func miqt_exec_callback_KMessageWidget_leaveEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.KMessageWidget_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.KMessageWidget_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_moveEvent
func miqt_exec_callback_KMessageWidget_moveEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_CloseEvent(event *qt6.QCloseEvent) {

	C.KMessageWidget_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnCloseEvent(slot func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent)) {
	ok := C.KMessageWidget_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_closeEvent
func miqt_exec_callback_KMessageWidget_closeEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_ContextMenuEvent(event *qt6.QContextMenuEvent) {

	C.KMessageWidget_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnContextMenuEvent(slot func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent)) {
	ok := C.KMessageWidget_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_contextMenuEvent
func miqt_exec_callback_KMessageWidget_contextMenuEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.KMessageWidget_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.KMessageWidget_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_tabletEvent
func miqt_exec_callback_KMessageWidget_tabletEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.KMessageWidget_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.KMessageWidget_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_actionEvent
func miqt_exec_callback_KMessageWidget_actionEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_DragEnterEvent(event *qt6.QDragEnterEvent) {

	C.KMessageWidget_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnDragEnterEvent(slot func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent)) {
	ok := C.KMessageWidget_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_dragEnterEvent
func miqt_exec_callback_KMessageWidget_dragEnterEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_DragMoveEvent(event *qt6.QDragMoveEvent) {

	C.KMessageWidget_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnDragMoveEvent(slot func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent)) {
	ok := C.KMessageWidget_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_dragMoveEvent
func miqt_exec_callback_KMessageWidget_dragMoveEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_DragLeaveEvent(event *qt6.QDragLeaveEvent) {

	C.KMessageWidget_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnDragLeaveEvent(slot func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent)) {
	ok := C.KMessageWidget_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_dragLeaveEvent
func miqt_exec_callback_KMessageWidget_dragLeaveEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_DropEvent(event *qt6.QDropEvent) {

	C.KMessageWidget_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnDropEvent(slot func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent)) {
	ok := C.KMessageWidget_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_dropEvent
func miqt_exec_callback_KMessageWidget_dropEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_ShowEvent(event *qt6.QShowEvent) {

	C.KMessageWidget_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnShowEvent(slot func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent)) {
	ok := C.KMessageWidget_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_showEvent
func miqt_exec_callback_KMessageWidget_showEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.KMessageWidget_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.KMessageWidget_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_hideEvent
func miqt_exec_callback_KMessageWidget_hideEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.KMessageWidget_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *KMessageWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.KMessageWidget_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_nativeEvent
func miqt_exec_callback_KMessageWidget_nativeEvent(self *C.KMessageWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&KMessageWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *KMessageWidget) callVirtualBase_Metric(param1 PaintDeviceMetric) int {

	return (int)(C.KMessageWidget_virtualbase_metric(unsafe.Pointer(this.h), param1))

}
func (this *KMessageWidget) OnMetric(slot func(super func(param1 PaintDeviceMetric) int, param1 PaintDeviceMetric) int) {
	ok := C.KMessageWidget_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_metric
func miqt_exec_callback_KMessageWidget_metric(self *C.KMessageWidget, cb C.intptr_t, param1 C.PaintDeviceMetric) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 PaintDeviceMetric) int, param1 PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	int /* TODO  */

	virtualReturn := gofunc((&KMessageWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *KMessageWidget) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.KMessageWidget_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *KMessageWidget) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.KMessageWidget_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_initPainter
func miqt_exec_callback_KMessageWidget_initPainter(self *C.KMessageWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *KMessageWidget) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.KMessageWidget_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *KMessageWidget) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.KMessageWidget_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_redirected
func miqt_exec_callback_KMessageWidget_redirected(self *C.KMessageWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&KMessageWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *KMessageWidget) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.KMessageWidget_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *KMessageWidget) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.KMessageWidget_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_sharedPainter
func miqt_exec_callback_KMessageWidget_sharedPainter(self *C.KMessageWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&KMessageWidget{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *KMessageWidget) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.KMessageWidget_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *KMessageWidget) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.KMessageWidget_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_inputMethodEvent
func miqt_exec_callback_KMessageWidget_inputMethodEvent(self *C.KMessageWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.KMessageWidget_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *KMessageWidget) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.KMessageWidget_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_inputMethodQuery
func miqt_exec_callback_KMessageWidget_inputMethodQuery(self *C.KMessageWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(param1)

	virtualReturn := gofunc((&KMessageWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *KMessageWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.KMessageWidget_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *KMessageWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.KMessageWidget_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_focusNextPrevChild
func miqt_exec_callback_KMessageWidget_focusNextPrevChild(self *C.KMessageWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&KMessageWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *KMessageWidget) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.KMessageWidget_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *KMessageWidget) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.KMessageWidget_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_eventFilter
func miqt_exec_callback_KMessageWidget_eventFilter(self *C.KMessageWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&KMessageWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *KMessageWidget) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.KMessageWidget_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.KMessageWidget_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_timerEvent
func miqt_exec_callback_KMessageWidget_timerEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.KMessageWidget_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.KMessageWidget_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_childEvent
func miqt_exec_callback_KMessageWidget_childEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.KMessageWidget_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *KMessageWidget) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.KMessageWidget_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_customEvent
func miqt_exec_callback_KMessageWidget_customEvent(self *C.KMessageWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *KMessageWidget) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.KMessageWidget_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *KMessageWidget) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.KMessageWidget_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_connectNotify
func miqt_exec_callback_KMessageWidget_connectNotify(self *C.KMessageWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *KMessageWidget) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.KMessageWidget_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *KMessageWidget) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.KMessageWidget_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KMessageWidget_disconnectNotify
func miqt_exec_callback_KMessageWidget_disconnectNotify(self *C.KMessageWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&KMessageWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *KMessageWidget) Delete() {
	C.KMessageWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *KMessageWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *KMessageWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
