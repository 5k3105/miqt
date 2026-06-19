package ksyntaxhighlighting

/*

#include "gen_format.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type KSyntaxHighlighting__Format struct {
	h *C.KSyntaxHighlighting__Format
}

func (this *KSyntaxHighlighting__Format) cPointer() *C.KSyntaxHighlighting__Format {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *KSyntaxHighlighting__Format) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKSyntaxHighlighting__Format constructs the type using only CGO pointers.
func newKSyntaxHighlighting__Format(h *C.KSyntaxHighlighting__Format) *KSyntaxHighlighting__Format {
	if h == nil {
		return nil
	}

	return &KSyntaxHighlighting__Format{h: h}
}

// UnsafeNewKSyntaxHighlighting__Format constructs the type using only unsafe pointers.
func UnsafeNewKSyntaxHighlighting__Format(h unsafe.Pointer) *KSyntaxHighlighting__Format {
	return newKSyntaxHighlighting__Format((*C.KSyntaxHighlighting__Format)(h))
}

// NewKSyntaxHighlighting__Format constructs a new KSyntaxHighlighting::Format object.
func NewKSyntaxHighlighting__Format() *KSyntaxHighlighting__Format {

	return newKSyntaxHighlighting__Format(C.KSyntaxHighlighting__Format_new())
}

// NewKSyntaxHighlighting__Format2 constructs a new KSyntaxHighlighting::Format object.
func NewKSyntaxHighlighting__Format2(other *Format) *KSyntaxHighlighting__Format {

	return newKSyntaxHighlighting__Format(C.KSyntaxHighlighting__Format_new2(other))
}

func (this *KSyntaxHighlighting__Format) OperatorAssign(other *Format) {
	C.KSyntaxHighlighting__Format_operatorAssign(this.h, other)
}

func (this *KSyntaxHighlighting__Format) IsValid() bool {
	return (bool)(C.KSyntaxHighlighting__Format_isValid(this.h))
}

func (this *KSyntaxHighlighting__Format) Name() string {
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Format_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__Format) Id() int {
	return (int)(C.KSyntaxHighlighting__Format_id(this.h))
}

func (this *KSyntaxHighlighting__Format) TextStyle() Theme__TextStyle {
	int /* TODO  */
}

func (this *KSyntaxHighlighting__Format) IsDefaultTextStyle(theme *Theme) bool {
	return (bool)(C.KSyntaxHighlighting__Format_isDefaultTextStyle(this.h, theme))
}

func (this *KSyntaxHighlighting__Format) HasTextColor(theme *Theme) bool {
	return (bool)(C.KSyntaxHighlighting__Format_hasTextColor(this.h, theme))
}

func (this *KSyntaxHighlighting__Format) TextColor(theme *Theme) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.KSyntaxHighlighting__Format_textColor(this.h, theme)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KSyntaxHighlighting__Format) SelectedTextColor(theme *Theme) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.KSyntaxHighlighting__Format_selectedTextColor(this.h, theme)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KSyntaxHighlighting__Format) HasBackgroundColor(theme *Theme) bool {
	return (bool)(C.KSyntaxHighlighting__Format_hasBackgroundColor(this.h, theme))
}

func (this *KSyntaxHighlighting__Format) BackgroundColor(theme *Theme) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.KSyntaxHighlighting__Format_backgroundColor(this.h, theme)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KSyntaxHighlighting__Format) SelectedBackgroundColor(theme *Theme) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.KSyntaxHighlighting__Format_selectedBackgroundColor(this.h, theme)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *KSyntaxHighlighting__Format) IsBold(theme *Theme) bool {
	return (bool)(C.KSyntaxHighlighting__Format_isBold(this.h, theme))
}

func (this *KSyntaxHighlighting__Format) IsItalic(theme *Theme) bool {
	return (bool)(C.KSyntaxHighlighting__Format_isItalic(this.h, theme))
}

func (this *KSyntaxHighlighting__Format) IsUnderline(theme *Theme) bool {
	return (bool)(C.KSyntaxHighlighting__Format_isUnderline(this.h, theme))
}

func (this *KSyntaxHighlighting__Format) IsStrikeThrough(theme *Theme) bool {
	return (bool)(C.KSyntaxHighlighting__Format_isStrikeThrough(this.h, theme))
}

func (this *KSyntaxHighlighting__Format) SpellCheck() bool {
	return (bool)(C.KSyntaxHighlighting__Format_spellCheck(this.h))
}

func (this *KSyntaxHighlighting__Format) HasBoldOverride() bool {
	return (bool)(C.KSyntaxHighlighting__Format_hasBoldOverride(this.h))
}

func (this *KSyntaxHighlighting__Format) HasItalicOverride() bool {
	return (bool)(C.KSyntaxHighlighting__Format_hasItalicOverride(this.h))
}

func (this *KSyntaxHighlighting__Format) HasUnderlineOverride() bool {
	return (bool)(C.KSyntaxHighlighting__Format_hasUnderlineOverride(this.h))
}

func (this *KSyntaxHighlighting__Format) HasStrikeThroughOverride() bool {
	return (bool)(C.KSyntaxHighlighting__Format_hasStrikeThroughOverride(this.h))
}

func (this *KSyntaxHighlighting__Format) HasTextColorOverride() bool {
	return (bool)(C.KSyntaxHighlighting__Format_hasTextColorOverride(this.h))
}

func (this *KSyntaxHighlighting__Format) HasBackgroundColorOverride() bool {
	return (bool)(C.KSyntaxHighlighting__Format_hasBackgroundColorOverride(this.h))
}

func (this *KSyntaxHighlighting__Format) HasSelectedTextColorOverride() bool {
	return (bool)(C.KSyntaxHighlighting__Format_hasSelectedTextColorOverride(this.h))
}

func (this *KSyntaxHighlighting__Format) HasSelectedBackgroundColorOverride() bool {
	return (bool)(C.KSyntaxHighlighting__Format_hasSelectedBackgroundColorOverride(this.h))
}

// Delete this object from C++ memory.
func (this *KSyntaxHighlighting__Format) Delete() {
	C.KSyntaxHighlighting__Format_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *KSyntaxHighlighting__Format) GoGC() {
	runtime.SetFinalizer(this, func(this *KSyntaxHighlighting__Format) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
