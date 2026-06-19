package qt6

/*

#include "gen_qrhiwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QRhiWidget__Api int

const (
	QRhiWidget__Null       QRhiWidget__Api = 0
	QRhiWidget__OpenGL     QRhiWidget__Api = 1
	QRhiWidget__Metal      QRhiWidget__Api = 2
	QRhiWidget__Vulkan     QRhiWidget__Api = 3
	QRhiWidget__Direct3D11 QRhiWidget__Api = 4
	QRhiWidget__Direct3D12 QRhiWidget__Api = 5
)

type QRhiWidget__TextureFormat int

const (
	QRhiWidget__RGBA8   QRhiWidget__TextureFormat = 0
	QRhiWidget__RGBA16F QRhiWidget__TextureFormat = 1
	QRhiWidget__RGBA32F QRhiWidget__TextureFormat = 2
	QRhiWidget__RGB10A2 QRhiWidget__TextureFormat = 3
)

type QRhiWidget struct {
	h *C.QRhiWidget
	*QWidget
}

func (this *QRhiWidget) cPointer() *C.QRhiWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRhiWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRhiWidget constructs the type using only CGO pointers.
func newQRhiWidget(h *C.QRhiWidget) *QRhiWidget {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QRhiWidget_virtbase(h, &outptr_QWidget)

	return &QRhiWidget{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQRhiWidget constructs the type using only unsafe pointers.
func UnsafeNewQRhiWidget(h unsafe.Pointer) *QRhiWidget {
	return newQRhiWidget((*C.QRhiWidget)(h))
}

// NewQRhiWidget constructs a new QRhiWidget object.
func NewQRhiWidget(parent *QWidget) *QRhiWidget {

	return newQRhiWidget(C.QRhiWidget_new(parent.cPointer()))
}

// NewQRhiWidget2 constructs a new QRhiWidget object.
func NewQRhiWidget2() *QRhiWidget {

	return newQRhiWidget(C.QRhiWidget_new2())
}

// NewQRhiWidget3 constructs a new QRhiWidget object.
func NewQRhiWidget3(parent *QWidget, f WindowType) *QRhiWidget {

	return newQRhiWidget(C.QRhiWidget_new3(parent.cPointer(), (C.int)(f)))
}

func (this *QRhiWidget) MetaObject() *QMetaObject {
	return newQMetaObject(C.QRhiWidget_metaObject(this.h))
}

func (this *QRhiWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRhiWidget_metacast(this.h, param1_Cstring))
}

func QRhiWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRhiWidget_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRhiWidget) Api() Api {
	int /* TODO  */
}

func (this *QRhiWidget) SetApi(api Api) {
	C.QRhiWidget_setApi(this.h, api)
}

func (this *QRhiWidget) IsDebugLayerEnabled() bool {
	return (bool)(C.QRhiWidget_isDebugLayerEnabled(this.h))
}

func (this *QRhiWidget) SetDebugLayerEnabled(enable bool) {
	C.QRhiWidget_setDebugLayerEnabled(this.h, (C.bool)(enable))
}

func (this *QRhiWidget) SampleCount() int {
	return (int)(C.QRhiWidget_sampleCount(this.h))
}

func (this *QRhiWidget) SetSampleCount(samples int) {
	C.QRhiWidget_setSampleCount(this.h, (C.int)(samples))
}

func (this *QRhiWidget) ColorBufferFormat() TextureFormat {
	int /* TODO  */
}

func (this *QRhiWidget) SetColorBufferFormat(format TextureFormat) {
	C.QRhiWidget_setColorBufferFormat(this.h, format)
}

func (this *QRhiWidget) FixedColorBufferSize() *QSize {
	_goptr := newQSize(C.QRhiWidget_fixedColorBufferSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRhiWidget) SetFixedColorBufferSize(pixelSize QSize) {
	C.QRhiWidget_setFixedColorBufferSize(this.h, pixelSize.cPointer())
}

func (this *QRhiWidget) SetFixedColorBufferSize2(w int, h int) {
	C.QRhiWidget_setFixedColorBufferSize2(this.h, (C.int)(w), (C.int)(h))
}

func (this *QRhiWidget) IsMirrorVerticallyEnabled() bool {
	return (bool)(C.QRhiWidget_isMirrorVerticallyEnabled(this.h))
}

func (this *QRhiWidget) SetMirrorVertically(enabled bool) {
	C.QRhiWidget_setMirrorVertically(this.h, (C.bool)(enabled))
}

func (this *QRhiWidget) GrabFramebuffer() *QImage {
	_goptr := newQImage(C.QRhiWidget_grabFramebuffer(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRhiWidget) FrameSubmitted() {
	C.QRhiWidget_frameSubmitted(this.h)
}
func (this *QRhiWidget) OnFrameSubmitted(slot func()) {
	C.QRhiWidget_connect_frameSubmitted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRhiWidget_frameSubmitted
func miqt_exec_callback_QRhiWidget_frameSubmitted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QRhiWidget) RenderFailed() {
	C.QRhiWidget_renderFailed(this.h)
}
func (this *QRhiWidget) OnRenderFailed(slot func()) {
	C.QRhiWidget_connect_renderFailed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRhiWidget_renderFailed
func miqt_exec_callback_QRhiWidget_renderFailed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QRhiWidget) SampleCountChanged(samples int) {
	C.QRhiWidget_sampleCountChanged(this.h, (C.int)(samples))
}
func (this *QRhiWidget) OnSampleCountChanged(slot func(samples int)) {
	C.QRhiWidget_connect_sampleCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRhiWidget_sampleCountChanged
func miqt_exec_callback_QRhiWidget_sampleCountChanged(cb C.intptr_t, samples C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(samples int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(samples)

	gofunc(slotval1)
}

func (this *QRhiWidget) ColorBufferFormatChanged(format TextureFormat) {
	C.QRhiWidget_colorBufferFormatChanged(this.h, format)
}
func (this *QRhiWidget) OnColorBufferFormatChanged(slot func(format TextureFormat)) {
	C.QRhiWidget_connect_colorBufferFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRhiWidget_colorBufferFormatChanged
func miqt_exec_callback_QRhiWidget_colorBufferFormatChanged(cb C.intptr_t, format C.TextureFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(format TextureFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	int /* TODO  */

	gofunc(slotval1)
}

func (this *QRhiWidget) FixedColorBufferSizeChanged(pixelSize *QSize) {
	C.QRhiWidget_fixedColorBufferSizeChanged(this.h, pixelSize.cPointer())
}
func (this *QRhiWidget) OnFixedColorBufferSizeChanged(slot func(pixelSize *QSize)) {
	C.QRhiWidget_connect_fixedColorBufferSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRhiWidget_fixedColorBufferSizeChanged
func miqt_exec_callback_QRhiWidget_fixedColorBufferSizeChanged(cb C.intptr_t, pixelSize *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pixelSize *QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSize(pixelSize)

	gofunc(slotval1)
}

func (this *QRhiWidget) MirrorVerticallyChanged(enabled bool) {
	C.QRhiWidget_mirrorVerticallyChanged(this.h, (C.bool)(enabled))
}
func (this *QRhiWidget) OnMirrorVerticallyChanged(slot func(enabled bool)) {
	C.QRhiWidget_connect_mirrorVerticallyChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRhiWidget_mirrorVerticallyChanged
func miqt_exec_callback_QRhiWidget_mirrorVerticallyChanged(cb C.intptr_t, enabled C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(enabled bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(enabled)

	gofunc(slotval1)
}

func QRhiWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRhiWidget_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRhiWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRhiWidget_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// IsAutoRenderTargetEnabled can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) IsAutoRenderTargetEnabled() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QRhiWidget_protectedbase_isAutoRenderTargetEnabled(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetAutoRenderTarget can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) SetAutoRenderTarget(enabled bool) {

	var _dynamic_cast_ok C.bool = false
	C.QRhiWidget_protectedbase_setAutoRenderTarget(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(enabled))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ColorTexture can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) ColorTexture() *QRhiTexture {

	var _dynamic_cast_ok C.bool = false
	int /* TODO  */
	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// MsaaColorBuffer can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) MsaaColorBuffer() *QRhiRenderBuffer {

	var _dynamic_cast_ok C.bool = false
	int /* TODO  */
	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// ResolveTexture can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) ResolveTexture() *QRhiTexture {

	var _dynamic_cast_ok C.bool = false
	int /* TODO  */
	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DepthStencilBuffer can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) DepthStencilBuffer() *QRhiRenderBuffer {

	var _dynamic_cast_ok C.bool = false
	int /* TODO  */
	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// RenderTarget can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) RenderTarget() *QRhiRenderTarget {

	var _dynamic_cast_ok C.bool = false
	int /* TODO  */
	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// UpdateMicroFocus can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QRhiWidget_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QRhiWidget_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QRhiWidget_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QRhiWidget_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QRhiWidget_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QRhiWidget_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QRhiWidget_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QRhiWidget_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QRhiWidget_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// GetDecodedMetricF can only be called from a QRhiWidget that was directly constructed.
func (this *QRhiWidget) GetDecodedMetricF(metricA PaintDeviceMetric, metricB PaintDeviceMetric) float64 {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (float64)(C.QRhiWidget_protectedbase_getDecodedMetricF(&_dynamic_cast_ok, unsafe.Pointer(this.h), metricA, metricB))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QRhiWidget) callVirtualBase_Initialize(cb *QRhiCommandBuffer) {

	C.QRhiWidget_virtualbase_initialize(unsafe.Pointer(this.h), cb)

}
func (this *QRhiWidget) OnInitialize(slot func(super func(cb *QRhiCommandBuffer), cb *QRhiCommandBuffer)) {
	ok := C.QRhiWidget_override_virtual_initialize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_initialize
func miqt_exec_callback_QRhiWidget_initialize(self *C.QRhiWidget, cb C.intptr_t, cb *C.QRhiCommandBuffer) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cb *QRhiCommandBuffer), cb *QRhiCommandBuffer))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	int /* TODO  */

	gofunc((&QRhiWidget{h: self}).callVirtualBase_Initialize, slotval1)

}

func (this *QRhiWidget) callVirtualBase_Render(cb *QRhiCommandBuffer) {

	C.QRhiWidget_virtualbase_render(unsafe.Pointer(this.h), cb)

}
func (this *QRhiWidget) OnRender(slot func(super func(cb *QRhiCommandBuffer), cb *QRhiCommandBuffer)) {
	ok := C.QRhiWidget_override_virtual_render(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_render
func miqt_exec_callback_QRhiWidget_render(self *C.QRhiWidget, cb C.intptr_t, cb *C.QRhiCommandBuffer) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cb *QRhiCommandBuffer), cb *QRhiCommandBuffer))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	int /* TODO  */

	gofunc((&QRhiWidget{h: self}).callVirtualBase_Render, slotval1)

}

func (this *QRhiWidget) callVirtualBase_ReleaseResources() {

	C.QRhiWidget_virtualbase_releaseResources(unsafe.Pointer(this.h))

}
func (this *QRhiWidget) OnReleaseResources(slot func(super func())) {
	ok := C.QRhiWidget_override_virtual_releaseResources(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_releaseResources
func miqt_exec_callback_QRhiWidget_releaseResources(self *C.QRhiWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QRhiWidget{h: self}).callVirtualBase_ReleaseResources)

}

func (this *QRhiWidget) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QRhiWidget_virtualbase_resizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRhiWidget) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	ok := C.QRhiWidget_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_resizeEvent
func miqt_exec_callback_QRhiWidget_resizeEvent(self *C.QRhiWidget, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(e)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QRhiWidget_virtualbase_paintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRhiWidget) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	ok := C.QRhiWidget_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_paintEvent
func miqt_exec_callback_QRhiWidget_paintEvent(self *C.QRhiWidget, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QRhiWidget_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QRhiWidget) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QRhiWidget_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_event
func miqt_exec_callback_QRhiWidget_event(self *C.QRhiWidget, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QRhiWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QRhiWidget) callVirtualBase_DevType() int {

	return (int)(C.QRhiWidget_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QRhiWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QRhiWidget_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_devType
func miqt_exec_callback_QRhiWidget_devType(self *C.QRhiWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRhiWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QRhiWidget) callVirtualBase_SetVisible(visible bool) {

	C.QRhiWidget_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QRhiWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QRhiWidget_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_setVisible
func miqt_exec_callback_QRhiWidget_setVisible(self *C.QRhiWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QRhiWidget) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QRhiWidget_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QRhiWidget) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QRhiWidget_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_sizeHint
func miqt_exec_callback_QRhiWidget_sizeHint(self *C.QRhiWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRhiWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QRhiWidget) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QRhiWidget_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QRhiWidget) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QRhiWidget_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_minimumSizeHint
func miqt_exec_callback_QRhiWidget_minimumSizeHint(self *C.QRhiWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRhiWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QRhiWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QRhiWidget_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QRhiWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QRhiWidget_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_heightForWidth
func miqt_exec_callback_QRhiWidget_heightForWidth(self *C.QRhiWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QRhiWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QRhiWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QRhiWidget_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QRhiWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QRhiWidget_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_hasHeightForWidth
func miqt_exec_callback_QRhiWidget_hasHeightForWidth(self *C.QRhiWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRhiWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QRhiWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QRhiWidget_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QRhiWidget) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QRhiWidget_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_paintEngine
func miqt_exec_callback_QRhiWidget_paintEngine(self *C.QRhiWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRhiWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QRhiWidget) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QRhiWidget_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QRhiWidget_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_mousePressEvent
func miqt_exec_callback_QRhiWidget_mousePressEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QRhiWidget_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QRhiWidget_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_mouseReleaseEvent
func miqt_exec_callback_QRhiWidget_mouseReleaseEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QRhiWidget_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QRhiWidget_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_mouseDoubleClickEvent
func miqt_exec_callback_QRhiWidget_mouseDoubleClickEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QRhiWidget_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QRhiWidget_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_mouseMoveEvent
func miqt_exec_callback_QRhiWidget_mouseMoveEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QRhiWidget_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QRhiWidget_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_wheelEvent
func miqt_exec_callback_QRhiWidget_wheelEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QRhiWidget_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QRhiWidget_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_keyPressEvent
func miqt_exec_callback_QRhiWidget_keyPressEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QRhiWidget_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QRhiWidget_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_keyReleaseEvent
func miqt_exec_callback_QRhiWidget_keyReleaseEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QRhiWidget_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QRhiWidget_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_focusInEvent
func miqt_exec_callback_QRhiWidget_focusInEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QRhiWidget_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QRhiWidget_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_focusOutEvent
func miqt_exec_callback_QRhiWidget_focusOutEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QRhiWidget_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QRhiWidget_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_enterEvent
func miqt_exec_callback_QRhiWidget_enterEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QRhiWidget_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QRhiWidget_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_leaveEvent
func miqt_exec_callback_QRhiWidget_leaveEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QRhiWidget_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QRhiWidget_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_moveEvent
func miqt_exec_callback_QRhiWidget_moveEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QRhiWidget_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QRhiWidget_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_closeEvent
func miqt_exec_callback_QRhiWidget_closeEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QRhiWidget_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QRhiWidget_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_contextMenuEvent
func miqt_exec_callback_QRhiWidget_contextMenuEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QRhiWidget_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QRhiWidget_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_tabletEvent
func miqt_exec_callback_QRhiWidget_tabletEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QRhiWidget_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QRhiWidget_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_actionEvent
func miqt_exec_callback_QRhiWidget_actionEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QRhiWidget_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QRhiWidget_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_dragEnterEvent
func miqt_exec_callback_QRhiWidget_dragEnterEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QRhiWidget_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QRhiWidget_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_dragMoveEvent
func miqt_exec_callback_QRhiWidget_dragMoveEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QRhiWidget_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QRhiWidget_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_dragLeaveEvent
func miqt_exec_callback_QRhiWidget_dragLeaveEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QRhiWidget_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QRhiWidget_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_dropEvent
func miqt_exec_callback_QRhiWidget_dropEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QRhiWidget_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QRhiWidget_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_showEvent
func miqt_exec_callback_QRhiWidget_showEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QRhiWidget_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QRhiWidget_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_hideEvent
func miqt_exec_callback_QRhiWidget_hideEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QRhiWidget_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QRhiWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QRhiWidget_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_nativeEvent
func miqt_exec_callback_QRhiWidget_nativeEvent(self *C.QRhiWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QRhiWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QRhiWidget) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QRhiWidget_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRhiWidget) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QRhiWidget_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_changeEvent
func miqt_exec_callback_QRhiWidget_changeEvent(self *C.QRhiWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_Metric(param1 PaintDeviceMetric) int {

	return (int)(C.QRhiWidget_virtualbase_metric(unsafe.Pointer(this.h), param1))

}
func (this *QRhiWidget) OnMetric(slot func(super func(param1 PaintDeviceMetric) int, param1 PaintDeviceMetric) int) {
	ok := C.QRhiWidget_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_metric
func miqt_exec_callback_QRhiWidget_metric(self *C.QRhiWidget, cb C.intptr_t, param1 C.PaintDeviceMetric) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 PaintDeviceMetric) int, param1 PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	int /* TODO  */

	virtualReturn := gofunc((&QRhiWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QRhiWidget) callVirtualBase_InitPainter(painter *QPainter) {

	C.QRhiWidget_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QRhiWidget) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QRhiWidget_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_initPainter
func miqt_exec_callback_QRhiWidget_initPainter(self *C.QRhiWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QRhiWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QRhiWidget_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QRhiWidget) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QRhiWidget_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_redirected
func miqt_exec_callback_QRhiWidget_redirected(self *C.QRhiWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QRhiWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QRhiWidget) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QRhiWidget_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QRhiWidget) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QRhiWidget_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_sharedPainter
func miqt_exec_callback_QRhiWidget_sharedPainter(self *C.QRhiWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRhiWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QRhiWidget) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QRhiWidget_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRhiWidget) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QRhiWidget_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_inputMethodEvent
func miqt_exec_callback_QRhiWidget_inputMethodEvent(self *C.QRhiWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QRhiWidget_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QRhiWidget) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QRhiWidget_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_inputMethodQuery
func miqt_exec_callback_QRhiWidget_inputMethodQuery(self *C.QRhiWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QRhiWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QRhiWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QRhiWidget_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QRhiWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QRhiWidget_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_focusNextPrevChild
func miqt_exec_callback_QRhiWidget_focusNextPrevChild(self *C.QRhiWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QRhiWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QRhiWidget) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QRhiWidget_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QRhiWidget) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QRhiWidget_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_eventFilter
func miqt_exec_callback_QRhiWidget_eventFilter(self *C.QRhiWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QRhiWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QRhiWidget) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QRhiWidget_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QRhiWidget_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_timerEvent
func miqt_exec_callback_QRhiWidget_timerEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QRhiWidget_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QRhiWidget_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_childEvent
func miqt_exec_callback_QRhiWidget_childEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_CustomEvent(event *QEvent) {

	C.QRhiWidget_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRhiWidget) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QRhiWidget_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_customEvent
func miqt_exec_callback_QRhiWidget_customEvent(self *C.QRhiWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QRhiWidget) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QRhiWidget_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QRhiWidget) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QRhiWidget_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_connectNotify
func miqt_exec_callback_QRhiWidget_connectNotify(self *C.QRhiWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QRhiWidget) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QRhiWidget_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QRhiWidget) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QRhiWidget_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRhiWidget_disconnectNotify
func miqt_exec_callback_QRhiWidget_disconnectNotify(self *C.QRhiWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QRhiWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QRhiWidget) Delete() {
	C.QRhiWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRhiWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QRhiWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
