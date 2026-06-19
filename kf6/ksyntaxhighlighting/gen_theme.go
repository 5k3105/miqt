package ksyntaxhighlighting

/*

#include "gen_theme.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type KSyntaxHighlighting__Theme__TextStyle int

const (
	KSyntaxHighlighting__Theme__Normal         KSyntaxHighlighting__Theme__TextStyle = 0
	KSyntaxHighlighting__Theme__Keyword        KSyntaxHighlighting__Theme__TextStyle = 1
	KSyntaxHighlighting__Theme__Function       KSyntaxHighlighting__Theme__TextStyle = 2
	KSyntaxHighlighting__Theme__Variable       KSyntaxHighlighting__Theme__TextStyle = 3
	KSyntaxHighlighting__Theme__ControlFlow    KSyntaxHighlighting__Theme__TextStyle = 4
	KSyntaxHighlighting__Theme__Operator       KSyntaxHighlighting__Theme__TextStyle = 5
	KSyntaxHighlighting__Theme__BuiltIn        KSyntaxHighlighting__Theme__TextStyle = 6
	KSyntaxHighlighting__Theme__Extension      KSyntaxHighlighting__Theme__TextStyle = 7
	KSyntaxHighlighting__Theme__Preprocessor   KSyntaxHighlighting__Theme__TextStyle = 8
	KSyntaxHighlighting__Theme__Attribute      KSyntaxHighlighting__Theme__TextStyle = 9
	KSyntaxHighlighting__Theme__Char           KSyntaxHighlighting__Theme__TextStyle = 10
	KSyntaxHighlighting__Theme__SpecialChar    KSyntaxHighlighting__Theme__TextStyle = 11
	KSyntaxHighlighting__Theme__String         KSyntaxHighlighting__Theme__TextStyle = 12
	KSyntaxHighlighting__Theme__VerbatimString KSyntaxHighlighting__Theme__TextStyle = 13
	KSyntaxHighlighting__Theme__SpecialString  KSyntaxHighlighting__Theme__TextStyle = 14
	KSyntaxHighlighting__Theme__Import         KSyntaxHighlighting__Theme__TextStyle = 15
	KSyntaxHighlighting__Theme__DataType       KSyntaxHighlighting__Theme__TextStyle = 16
	KSyntaxHighlighting__Theme__DecVal         KSyntaxHighlighting__Theme__TextStyle = 17
	KSyntaxHighlighting__Theme__BaseN          KSyntaxHighlighting__Theme__TextStyle = 18
	KSyntaxHighlighting__Theme__Float          KSyntaxHighlighting__Theme__TextStyle = 19
	KSyntaxHighlighting__Theme__Constant       KSyntaxHighlighting__Theme__TextStyle = 20
	KSyntaxHighlighting__Theme__Comment        KSyntaxHighlighting__Theme__TextStyle = 21
	KSyntaxHighlighting__Theme__Documentation  KSyntaxHighlighting__Theme__TextStyle = 22
	KSyntaxHighlighting__Theme__Annotation     KSyntaxHighlighting__Theme__TextStyle = 23
	KSyntaxHighlighting__Theme__CommentVar     KSyntaxHighlighting__Theme__TextStyle = 24
	KSyntaxHighlighting__Theme__RegionMarker   KSyntaxHighlighting__Theme__TextStyle = 25
	KSyntaxHighlighting__Theme__Information    KSyntaxHighlighting__Theme__TextStyle = 26
	KSyntaxHighlighting__Theme__Warning        KSyntaxHighlighting__Theme__TextStyle = 27
	KSyntaxHighlighting__Theme__Alert          KSyntaxHighlighting__Theme__TextStyle = 28
	KSyntaxHighlighting__Theme__Error          KSyntaxHighlighting__Theme__TextStyle = 29
	KSyntaxHighlighting__Theme__Others         KSyntaxHighlighting__Theme__TextStyle = 30
)

type KSyntaxHighlighting__Theme__EditorColorRole int

const (
	KSyntaxHighlighting__Theme__BackgroundColor             KSyntaxHighlighting__Theme__EditorColorRole = 0
	KSyntaxHighlighting__Theme__TextSelection               KSyntaxHighlighting__Theme__EditorColorRole = 1
	KSyntaxHighlighting__Theme__CurrentLine                 KSyntaxHighlighting__Theme__EditorColorRole = 2
	KSyntaxHighlighting__Theme__SearchHighlight             KSyntaxHighlighting__Theme__EditorColorRole = 3
	KSyntaxHighlighting__Theme__ReplaceHighlight            KSyntaxHighlighting__Theme__EditorColorRole = 4
	KSyntaxHighlighting__Theme__BracketMatching             KSyntaxHighlighting__Theme__EditorColorRole = 5
	KSyntaxHighlighting__Theme__TabMarker                   KSyntaxHighlighting__Theme__EditorColorRole = 6
	KSyntaxHighlighting__Theme__SpellChecking               KSyntaxHighlighting__Theme__EditorColorRole = 7
	KSyntaxHighlighting__Theme__IndentationLine             KSyntaxHighlighting__Theme__EditorColorRole = 8
	KSyntaxHighlighting__Theme__IconBorder                  KSyntaxHighlighting__Theme__EditorColorRole = 9
	KSyntaxHighlighting__Theme__CodeFolding                 KSyntaxHighlighting__Theme__EditorColorRole = 10
	KSyntaxHighlighting__Theme__LineNumbers                 KSyntaxHighlighting__Theme__EditorColorRole = 11
	KSyntaxHighlighting__Theme__CurrentLineNumber           KSyntaxHighlighting__Theme__EditorColorRole = 12
	KSyntaxHighlighting__Theme__WordWrapMarker              KSyntaxHighlighting__Theme__EditorColorRole = 13
	KSyntaxHighlighting__Theme__ModifiedLines               KSyntaxHighlighting__Theme__EditorColorRole = 14
	KSyntaxHighlighting__Theme__SavedLines                  KSyntaxHighlighting__Theme__EditorColorRole = 15
	KSyntaxHighlighting__Theme__Separator                   KSyntaxHighlighting__Theme__EditorColorRole = 16
	KSyntaxHighlighting__Theme__MarkBookmark                KSyntaxHighlighting__Theme__EditorColorRole = 17
	KSyntaxHighlighting__Theme__MarkBreakpointActive        KSyntaxHighlighting__Theme__EditorColorRole = 18
	KSyntaxHighlighting__Theme__MarkBreakpointReached       KSyntaxHighlighting__Theme__EditorColorRole = 19
	KSyntaxHighlighting__Theme__MarkBreakpointDisabled      KSyntaxHighlighting__Theme__EditorColorRole = 20
	KSyntaxHighlighting__Theme__MarkExecution               KSyntaxHighlighting__Theme__EditorColorRole = 21
	KSyntaxHighlighting__Theme__MarkWarning                 KSyntaxHighlighting__Theme__EditorColorRole = 22
	KSyntaxHighlighting__Theme__MarkError                   KSyntaxHighlighting__Theme__EditorColorRole = 23
	KSyntaxHighlighting__Theme__TemplateBackground          KSyntaxHighlighting__Theme__EditorColorRole = 24
	KSyntaxHighlighting__Theme__TemplatePlaceholder         KSyntaxHighlighting__Theme__EditorColorRole = 25
	KSyntaxHighlighting__Theme__TemplateFocusedPlaceholder  KSyntaxHighlighting__Theme__EditorColorRole = 26
	KSyntaxHighlighting__Theme__TemplateReadOnlyPlaceholder KSyntaxHighlighting__Theme__EditorColorRole = 27
)

type KSyntaxHighlighting__Theme struct {
	h *C.KSyntaxHighlighting__Theme
}

func (this *KSyntaxHighlighting__Theme) cPointer() *C.KSyntaxHighlighting__Theme {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *KSyntaxHighlighting__Theme) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKSyntaxHighlighting__Theme constructs the type using only CGO pointers.
func newKSyntaxHighlighting__Theme(h *C.KSyntaxHighlighting__Theme) *KSyntaxHighlighting__Theme {
	if h == nil {
		return nil
	}

	return &KSyntaxHighlighting__Theme{h: h}
}

// UnsafeNewKSyntaxHighlighting__Theme constructs the type using only unsafe pointers.
func UnsafeNewKSyntaxHighlighting__Theme(h unsafe.Pointer) *KSyntaxHighlighting__Theme {
	return newKSyntaxHighlighting__Theme((*C.KSyntaxHighlighting__Theme)(h))
}

// NewKSyntaxHighlighting__Theme constructs a new KSyntaxHighlighting::Theme object.
func NewKSyntaxHighlighting__Theme() *KSyntaxHighlighting__Theme {

	return newKSyntaxHighlighting__Theme(C.KSyntaxHighlighting__Theme_new())
}

// NewKSyntaxHighlighting__Theme2 constructs a new KSyntaxHighlighting::Theme object.
func NewKSyntaxHighlighting__Theme2(copyVal *Theme) *KSyntaxHighlighting__Theme {

	return newKSyntaxHighlighting__Theme(C.KSyntaxHighlighting__Theme_new2(copyVal))
}

func (this *KSyntaxHighlighting__Theme) OperatorAssign(other *Theme) {
	C.KSyntaxHighlighting__Theme_operatorAssign(this.h, other)
}

func (this *KSyntaxHighlighting__Theme) IsValid() bool {
	return (bool)(C.KSyntaxHighlighting__Theme_isValid(this.h))
}

func (this *KSyntaxHighlighting__Theme) Name() string {
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Theme_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__Theme) TranslatedName() string {
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Theme_translatedName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__Theme) IsReadOnly() bool {
	return (bool)(C.KSyntaxHighlighting__Theme_isReadOnly(this.h))
}

func (this *KSyntaxHighlighting__Theme) FilePath() string {
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Theme_filePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__Theme) TextColor(style TextStyle) uint {
	return (uint)(C.KSyntaxHighlighting__Theme_textColor(this.h, style))
}

func (this *KSyntaxHighlighting__Theme) SelectedTextColor(style TextStyle) uint {
	return (uint)(C.KSyntaxHighlighting__Theme_selectedTextColor(this.h, style))
}

func (this *KSyntaxHighlighting__Theme) BackgroundColor(style TextStyle) uint {
	return (uint)(C.KSyntaxHighlighting__Theme_backgroundColor(this.h, style))
}

func (this *KSyntaxHighlighting__Theme) SelectedBackgroundColor(style TextStyle) uint {
	return (uint)(C.KSyntaxHighlighting__Theme_selectedBackgroundColor(this.h, style))
}

func (this *KSyntaxHighlighting__Theme) IsBold(style TextStyle) bool {
	return (bool)(C.KSyntaxHighlighting__Theme_isBold(this.h, style))
}

func (this *KSyntaxHighlighting__Theme) IsItalic(style TextStyle) bool {
	return (bool)(C.KSyntaxHighlighting__Theme_isItalic(this.h, style))
}

func (this *KSyntaxHighlighting__Theme) IsUnderline(style TextStyle) bool {
	return (bool)(C.KSyntaxHighlighting__Theme_isUnderline(this.h, style))
}

func (this *KSyntaxHighlighting__Theme) IsStrikeThrough(style TextStyle) bool {
	return (bool)(C.KSyntaxHighlighting__Theme_isStrikeThrough(this.h, style))
}

func (this *KSyntaxHighlighting__Theme) EditorColor(role EditorColorRole) uint {
	return (uint)(C.KSyntaxHighlighting__Theme_editorColor(this.h, role))
}

// Delete this object from C++ memory.
func (this *KSyntaxHighlighting__Theme) Delete() {
	C.KSyntaxHighlighting__Theme_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *KSyntaxHighlighting__Theme) GoGC() {
	runtime.SetFinalizer(this, func(this *KSyntaxHighlighting__Theme) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
