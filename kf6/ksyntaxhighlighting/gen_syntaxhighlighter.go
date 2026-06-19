package ksyntaxhighlighting

/*

#include "gen_syntaxhighlighter.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type KSyntaxHighlighting__SyntaxHighlighter struct {
	h *C.KSyntaxHighlighting__SyntaxHighlighter
	*qt6.QSyntaxHighlighter
	*AbstractHighlighter
}

func (this *KSyntaxHighlighting__SyntaxHighlighter) cPointer() *C.KSyntaxHighlighting__SyntaxHighlighter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *KSyntaxHighlighting__SyntaxHighlighter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKSyntaxHighlighting__SyntaxHighlighter constructs the type using only CGO pointers.
func newKSyntaxHighlighting__SyntaxHighlighter(h *C.KSyntaxHighlighting__SyntaxHighlighter) *KSyntaxHighlighting__SyntaxHighlighter {
	if h == nil {
		return nil
	}
	var outptr_QSyntaxHighlighter *C.QSyntaxHighlighter = nil
	C.KSyntaxHighlighting__SyntaxHighlighter_virtbase(h, &outptr_QSyntaxHighlighter)

	return &KSyntaxHighlighting__SyntaxHighlighter{h: h,
		QSyntaxHighlighter: qt6.UnsafeNewQSyntaxHighlighter(unsafe.Pointer(outptr_QSyntaxHighlighter))}
}

// UnsafeNewKSyntaxHighlighting__SyntaxHighlighter constructs the type using only unsafe pointers.
func UnsafeNewKSyntaxHighlighting__SyntaxHighlighter(h unsafe.Pointer) *KSyntaxHighlighting__SyntaxHighlighter {
	return newKSyntaxHighlighting__SyntaxHighlighter((*C.KSyntaxHighlighting__SyntaxHighlighter)(h))
}

// NewKSyntaxHighlighting__SyntaxHighlighter constructs a new KSyntaxHighlighting::SyntaxHighlighter object.
func NewKSyntaxHighlighting__SyntaxHighlighter() *KSyntaxHighlighting__SyntaxHighlighter {

	return newKSyntaxHighlighting__SyntaxHighlighter(C.KSyntaxHighlighting__SyntaxHighlighter_new())
}

// NewKSyntaxHighlighting__SyntaxHighlighter2 constructs a new KSyntaxHighlighting::SyntaxHighlighter object.
func NewKSyntaxHighlighting__SyntaxHighlighter2(document *qt6.QTextDocument) *KSyntaxHighlighting__SyntaxHighlighter {

	return newKSyntaxHighlighting__SyntaxHighlighter(C.KSyntaxHighlighting__SyntaxHighlighter_new2((*C.QTextDocument)(document.UnsafePointer())))
}

// NewKSyntaxHighlighting__SyntaxHighlighter3 constructs a new KSyntaxHighlighting::SyntaxHighlighter object.
func NewKSyntaxHighlighting__SyntaxHighlighter3(parent *qt6.QObject) *KSyntaxHighlighting__SyntaxHighlighter {

	return newKSyntaxHighlighting__SyntaxHighlighter(C.KSyntaxHighlighting__SyntaxHighlighter_new3((*C.QObject)(parent.UnsafePointer())))
}

func (this *KSyntaxHighlighting__SyntaxHighlighter) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.KSyntaxHighlighting__SyntaxHighlighter_metaObject(this.h)))
}

func (this *KSyntaxHighlighting__SyntaxHighlighter) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.KSyntaxHighlighting__SyntaxHighlighter_metacast(this.h, param1_Cstring))
}

func KSyntaxHighlighting__SyntaxHighlighter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__SyntaxHighlighter_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__SyntaxHighlighter) SetDefinition(def *Definition) {
	C.KSyntaxHighlighting__SyntaxHighlighter_setDefinition(this.h, def)
}

func (this *KSyntaxHighlighting__SyntaxHighlighter) SetTheme(theme *Theme) {
	C.KSyntaxHighlighting__SyntaxHighlighter_setTheme(this.h, theme)
}

func (this *KSyntaxHighlighting__SyntaxHighlighter) StartsFoldingRegion(startBlock *qt6.QTextBlock) bool {
	return (bool)(C.KSyntaxHighlighting__SyntaxHighlighter_startsFoldingRegion(this.h, (*C.QTextBlock)(startBlock.UnsafePointer())))
}

func (this *KSyntaxHighlighting__SyntaxHighlighter) FindFoldingRegionEnd(startBlock *qt6.QTextBlock) *qt6.QTextBlock {
	_goptr := qt6.UnsafeNewQTextBlock(unsafe.Pointer(C.KSyntaxHighlighting__SyntaxHighlighter_findFoldingRegionEnd(this.h, (*C.QTextBlock)(startBlock.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func KSyntaxHighlighting__SyntaxHighlighter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__SyntaxHighlighter_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func KSyntaxHighlighting__SyntaxHighlighter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__SyntaxHighlighter_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetFormat can only be called from a KSyntaxHighlighting__SyntaxHighlighter that was directly constructed.
func (this *KSyntaxHighlighting__SyntaxHighlighter) SetFormat(start int, count int, format *qt6.QTextCharFormat) {

	var _dynamic_cast_ok C.bool = false
	C.KSyntaxHighlighting__SyntaxHighlighter_protectedbase_setFormat(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(start), (C.int)(count), (*C.QTextCharFormat)(format.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Format can only be called from a KSyntaxHighlighting__SyntaxHighlighter that was directly constructed.
func (this *KSyntaxHighlighting__SyntaxHighlighter) Format(pos int) qt6.QTextCharFormat {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt6.UnsafeNewQTextCharFormat(unsafe.Pointer(C.KSyntaxHighlighting__SyntaxHighlighter_protectedbase_format(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(pos))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// PreviousBlockState can only be called from a KSyntaxHighlighting__SyntaxHighlighter that was directly constructed.
func (this *KSyntaxHighlighting__SyntaxHighlighter) PreviousBlockState() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.KSyntaxHighlighting__SyntaxHighlighter_protectedbase_previousBlockState(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// CurrentBlockState can only be called from a KSyntaxHighlighting__SyntaxHighlighter that was directly constructed.
func (this *KSyntaxHighlighting__SyntaxHighlighter) CurrentBlockState() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.KSyntaxHighlighting__SyntaxHighlighter_protectedbase_currentBlockState(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetCurrentBlockState can only be called from a KSyntaxHighlighting__SyntaxHighlighter that was directly constructed.
func (this *KSyntaxHighlighting__SyntaxHighlighter) SetCurrentBlockState(newState int) {

	var _dynamic_cast_ok C.bool = false
	C.KSyntaxHighlighting__SyntaxHighlighter_protectedbase_setCurrentBlockState(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(newState))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetCurrentBlockUserData can only be called from a KSyntaxHighlighting__SyntaxHighlighter that was directly constructed.
func (this *KSyntaxHighlighting__SyntaxHighlighter) SetCurrentBlockUserData(data *qt6.QTextBlockUserData) {

	var _dynamic_cast_ok C.bool = false
	C.KSyntaxHighlighting__SyntaxHighlighter_protectedbase_setCurrentBlockUserData(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QTextBlockUserData)(data.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// CurrentBlockUserData can only be called from a KSyntaxHighlighting__SyntaxHighlighter that was directly constructed.
func (this *KSyntaxHighlighting__SyntaxHighlighter) CurrentBlockUserData() *qt6.QTextBlockUserData {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQTextBlockUserData(unsafe.Pointer(C.KSyntaxHighlighting__SyntaxHighlighter_protectedbase_currentBlockUserData(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// CurrentBlock can only be called from a KSyntaxHighlighting__SyntaxHighlighter that was directly constructed.
func (this *KSyntaxHighlighting__SyntaxHighlighter) CurrentBlock() qt6.QTextBlock {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt6.UnsafeNewQTextBlock(unsafe.Pointer(C.KSyntaxHighlighting__SyntaxHighlighter_protectedbase_currentBlock(&_dynamic_cast_ok, unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a KSyntaxHighlighting__SyntaxHighlighter that was directly constructed.
func (this *KSyntaxHighlighting__SyntaxHighlighter) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.KSyntaxHighlighting__SyntaxHighlighter_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a KSyntaxHighlighting__SyntaxHighlighter that was directly constructed.
func (this *KSyntaxHighlighting__SyntaxHighlighter) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.KSyntaxHighlighting__SyntaxHighlighter_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a KSyntaxHighlighting__SyntaxHighlighter that was directly constructed.
func (this *KSyntaxHighlighting__SyntaxHighlighter) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.KSyntaxHighlighting__SyntaxHighlighter_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a KSyntaxHighlighting__SyntaxHighlighter that was directly constructed.
func (this *KSyntaxHighlighting__SyntaxHighlighter) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.KSyntaxHighlighting__SyntaxHighlighter_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *KSyntaxHighlighting__SyntaxHighlighter) callVirtualBase_SetDefinition(def *Definition) {

	C.KSyntaxHighlighting__SyntaxHighlighter_virtualbase_setDefinition(unsafe.Pointer(this.h), def)

}
func (this *KSyntaxHighlighting__SyntaxHighlighter) OnSetDefinition(slot func(super func(def *Definition), def *Definition)) {
	ok := C.KSyntaxHighlighting__SyntaxHighlighter_override_virtual_setDefinition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_setDefinition
func miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_setDefinition(self *C.KSyntaxHighlighting__SyntaxHighlighter, cb C.intptr_t, def *C.Definition) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(def *Definition), def *Definition))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	int /* TODO  */

	gofunc((&KSyntaxHighlighting__SyntaxHighlighter{h: self}).callVirtualBase_SetDefinition, slotval1)

}

func (this *KSyntaxHighlighting__SyntaxHighlighter) callVirtualBase_SetTheme(theme *Theme) {

	C.KSyntaxHighlighting__SyntaxHighlighter_virtualbase_setTheme(unsafe.Pointer(this.h), theme)

}
func (this *KSyntaxHighlighting__SyntaxHighlighter) OnSetTheme(slot func(super func(theme *Theme), theme *Theme)) {
	ok := C.KSyntaxHighlighting__SyntaxHighlighter_override_virtual_setTheme(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_setTheme
func miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_setTheme(self *C.KSyntaxHighlighting__SyntaxHighlighter, cb C.intptr_t, theme *C.Theme) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(theme *Theme), theme *Theme))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	int /* TODO  */

	gofunc((&KSyntaxHighlighting__SyntaxHighlighter{h: self}).callVirtualBase_SetTheme, slotval1)

}

func (this *KSyntaxHighlighting__SyntaxHighlighter) callVirtualBase_HighlightBlock(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	C.KSyntaxHighlighting__SyntaxHighlighter_virtualbase_highlightBlock(unsafe.Pointer(this.h), text_ms)

}
func (this *KSyntaxHighlighting__SyntaxHighlighter) OnHighlightBlock(slot func(super func(text string), text string)) {
	ok := C.KSyntaxHighlighting__SyntaxHighlighter_override_virtual_highlightBlock(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_highlightBlock
func miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_highlightBlock(self *C.KSyntaxHighlighting__SyntaxHighlighter, cb C.intptr_t, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(text string), text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	gofunc((&KSyntaxHighlighting__SyntaxHighlighter{h: self}).callVirtualBase_HighlightBlock, slotval1)

}

func (this *KSyntaxHighlighting__SyntaxHighlighter) callVirtualBase_ApplyFormat(offset int, length int, format *Format) {

	C.KSyntaxHighlighting__SyntaxHighlighter_virtualbase_applyFormat(unsafe.Pointer(this.h), (C.int)(offset), (C.int)(length), format)

}
func (this *KSyntaxHighlighting__SyntaxHighlighter) OnApplyFormat(slot func(super func(offset int, length int, format *Format), offset int, length int, format *Format)) {
	ok := C.KSyntaxHighlighting__SyntaxHighlighter_override_virtual_applyFormat(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_applyFormat
func miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_applyFormat(self *C.KSyntaxHighlighting__SyntaxHighlighter, cb C.intptr_t, offset C.int, length C.int, format *C.Format) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset int, length int, format *Format), offset int, length int, format *Format))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(offset)

	slotval2 := (int)(length)

	int /* TODO  */

	gofunc((&KSyntaxHighlighting__SyntaxHighlighter{h: self}).callVirtualBase_ApplyFormat, slotval1, slotval2, slotval3)

}

func (this *KSyntaxHighlighting__SyntaxHighlighter) callVirtualBase_ApplyFolding(offset int, length int, region FoldingRegion) {

	C.KSyntaxHighlighting__SyntaxHighlighter_virtualbase_applyFolding(unsafe.Pointer(this.h), (C.int)(offset), (C.int)(length), region)

}
func (this *KSyntaxHighlighting__SyntaxHighlighter) OnApplyFolding(slot func(super func(offset int, length int, region FoldingRegion), offset int, length int, region FoldingRegion)) {
	ok := C.KSyntaxHighlighting__SyntaxHighlighter_override_virtual_applyFolding(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_applyFolding
func miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_applyFolding(self *C.KSyntaxHighlighting__SyntaxHighlighter, cb C.intptr_t, offset C.int, length C.int, region C.FoldingRegion) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset int, length int, region FoldingRegion), offset int, length int, region FoldingRegion))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(offset)

	slotval2 := (int)(length)

	int /* TODO  */

	gofunc((&KSyntaxHighlighting__SyntaxHighlighter{h: self}).callVirtualBase_ApplyFolding, slotval1, slotval2, slotval3)

}

func (this *KSyntaxHighlighting__SyntaxHighlighter) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.KSyntaxHighlighting__SyntaxHighlighter_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *KSyntaxHighlighting__SyntaxHighlighter) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.KSyntaxHighlighting__SyntaxHighlighter_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_event
func miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_event(self *C.KSyntaxHighlighting__SyntaxHighlighter, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&KSyntaxHighlighting__SyntaxHighlighter{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *KSyntaxHighlighting__SyntaxHighlighter) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.KSyntaxHighlighting__SyntaxHighlighter_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *KSyntaxHighlighting__SyntaxHighlighter) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.KSyntaxHighlighting__SyntaxHighlighter_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_eventFilter
func miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_eventFilter(self *C.KSyntaxHighlighting__SyntaxHighlighter, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&KSyntaxHighlighting__SyntaxHighlighter{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *KSyntaxHighlighting__SyntaxHighlighter) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.KSyntaxHighlighting__SyntaxHighlighter_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *KSyntaxHighlighting__SyntaxHighlighter) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.KSyntaxHighlighting__SyntaxHighlighter_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_timerEvent
func miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_timerEvent(self *C.KSyntaxHighlighting__SyntaxHighlighter, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&KSyntaxHighlighting__SyntaxHighlighter{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *KSyntaxHighlighting__SyntaxHighlighter) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.KSyntaxHighlighting__SyntaxHighlighter_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *KSyntaxHighlighting__SyntaxHighlighter) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.KSyntaxHighlighting__SyntaxHighlighter_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_childEvent
func miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_childEvent(self *C.KSyntaxHighlighting__SyntaxHighlighter, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&KSyntaxHighlighting__SyntaxHighlighter{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *KSyntaxHighlighting__SyntaxHighlighter) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.KSyntaxHighlighting__SyntaxHighlighter_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *KSyntaxHighlighting__SyntaxHighlighter) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.KSyntaxHighlighting__SyntaxHighlighter_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_customEvent
func miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_customEvent(self *C.KSyntaxHighlighting__SyntaxHighlighter, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&KSyntaxHighlighting__SyntaxHighlighter{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *KSyntaxHighlighting__SyntaxHighlighter) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.KSyntaxHighlighting__SyntaxHighlighter_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *KSyntaxHighlighting__SyntaxHighlighter) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.KSyntaxHighlighting__SyntaxHighlighter_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_connectNotify
func miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_connectNotify(self *C.KSyntaxHighlighting__SyntaxHighlighter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&KSyntaxHighlighting__SyntaxHighlighter{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *KSyntaxHighlighting__SyntaxHighlighter) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.KSyntaxHighlighting__SyntaxHighlighter_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *KSyntaxHighlighting__SyntaxHighlighter) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.KSyntaxHighlighting__SyntaxHighlighter_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_disconnectNotify
func miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_disconnectNotify(self *C.KSyntaxHighlighting__SyntaxHighlighter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&KSyntaxHighlighting__SyntaxHighlighter{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *KSyntaxHighlighting__SyntaxHighlighter) Delete() {
	C.KSyntaxHighlighting__SyntaxHighlighter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *KSyntaxHighlighting__SyntaxHighlighter) GoGC() {
	runtime.SetFinalizer(this, func(this *KSyntaxHighlighting__SyntaxHighlighter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
