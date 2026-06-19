package ksyntaxhighlighting

/*

#include "gen_definition.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type KSyntaxHighlighting__CommentPosition int

const (
	KSyntaxHighlighting__StartOfLine     KSyntaxHighlighting__CommentPosition = 0
	KSyntaxHighlighting__AfterWhitespace KSyntaxHighlighting__CommentPosition = 1
)

type KSyntaxHighlighting__Definition struct {
	h *C.KSyntaxHighlighting__Definition
}

func (this *KSyntaxHighlighting__Definition) cPointer() *C.KSyntaxHighlighting__Definition {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *KSyntaxHighlighting__Definition) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKSyntaxHighlighting__Definition constructs the type using only CGO pointers.
func newKSyntaxHighlighting__Definition(h *C.KSyntaxHighlighting__Definition) *KSyntaxHighlighting__Definition {
	if h == nil {
		return nil
	}

	return &KSyntaxHighlighting__Definition{h: h}
}

// UnsafeNewKSyntaxHighlighting__Definition constructs the type using only unsafe pointers.
func UnsafeNewKSyntaxHighlighting__Definition(h unsafe.Pointer) *KSyntaxHighlighting__Definition {
	return newKSyntaxHighlighting__Definition((*C.KSyntaxHighlighting__Definition)(h))
}

// NewKSyntaxHighlighting__Definition constructs a new KSyntaxHighlighting::Definition object.
func NewKSyntaxHighlighting__Definition() *KSyntaxHighlighting__Definition {

	return newKSyntaxHighlighting__Definition(C.KSyntaxHighlighting__Definition_new())
}

// NewKSyntaxHighlighting__Definition2 constructs a new KSyntaxHighlighting::Definition object.
func NewKSyntaxHighlighting__Definition2(other *Definition) *KSyntaxHighlighting__Definition {

	return newKSyntaxHighlighting__Definition(C.KSyntaxHighlighting__Definition_new2(other))
}

func (this *KSyntaxHighlighting__Definition) OperatorAssign(rhs *Definition) {
	C.KSyntaxHighlighting__Definition_operatorAssign(this.h, rhs)
}

func (this *KSyntaxHighlighting__Definition) OperatorEqual(other *Definition) bool {
	return (bool)(C.KSyntaxHighlighting__Definition_operatorEqual(this.h, other))
}

func (this *KSyntaxHighlighting__Definition) OperatorNotEqual(other *Definition) bool {
	return (bool)(C.KSyntaxHighlighting__Definition_operatorNotEqual(this.h, other))
}

func (this *KSyntaxHighlighting__Definition) IsValid() bool {
	return (bool)(C.KSyntaxHighlighting__Definition_isValid(this.h))
}

func (this *KSyntaxHighlighting__Definition) FilePath() string {
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Definition_filePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__Definition) Name() string {
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Definition_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__Definition) AlternativeNames() []string {
	var _ma C.struct_miqt_array = C.KSyntaxHighlighting__Definition_alternativeNames(this.h)
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

func (this *KSyntaxHighlighting__Definition) TranslatedName() string {
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Definition_translatedName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__Definition) Section() string {
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Definition_section(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__Definition) TranslatedSection() string {
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Definition_translatedSection(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__Definition) MimeTypes() []string {
	var _ma C.struct_miqt_array = C.KSyntaxHighlighting__Definition_mimeTypes(this.h)
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

func (this *KSyntaxHighlighting__Definition) Extensions() []string {
	var _ma C.struct_miqt_array = C.KSyntaxHighlighting__Definition_extensions(this.h)
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

func (this *KSyntaxHighlighting__Definition) Version() int {
	return (int)(C.KSyntaxHighlighting__Definition_version(this.h))
}

func (this *KSyntaxHighlighting__Definition) Priority() int {
	return (int)(C.KSyntaxHighlighting__Definition_priority(this.h))
}

func (this *KSyntaxHighlighting__Definition) IsHidden() bool {
	return (bool)(C.KSyntaxHighlighting__Definition_isHidden(this.h))
}

func (this *KSyntaxHighlighting__Definition) Style() string {
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Definition_style(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__Definition) Indenter() string {
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Definition_indenter(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__Definition) Author() string {
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Definition_author(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__Definition) License() string {
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Definition_license(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__Definition) IsWordDelimiter(c qt6.QChar) bool {
	return (bool)(C.KSyntaxHighlighting__Definition_isWordDelimiter(this.h, (*C.QChar)(c.UnsafePointer())))
}

func (this *KSyntaxHighlighting__Definition) IsWordWrapDelimiter(c qt6.QChar) bool {
	return (bool)(C.KSyntaxHighlighting__Definition_isWordWrapDelimiter(this.h, (*C.QChar)(c.UnsafePointer())))
}

func (this *KSyntaxHighlighting__Definition) FoldingEnabled() bool {
	return (bool)(C.KSyntaxHighlighting__Definition_foldingEnabled(this.h))
}

func (this *KSyntaxHighlighting__Definition) IndentationBasedFoldingEnabled() bool {
	return (bool)(C.KSyntaxHighlighting__Definition_indentationBasedFoldingEnabled(this.h))
}

func (this *KSyntaxHighlighting__Definition) FoldingIgnoreList() []string {
	var _ma C.struct_miqt_array = C.KSyntaxHighlighting__Definition_foldingIgnoreList(this.h)
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

func (this *KSyntaxHighlighting__Definition) KeywordLists() []string {
	var _ma C.struct_miqt_array = C.KSyntaxHighlighting__Definition_keywordLists(this.h)
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

func (this *KSyntaxHighlighting__Definition) KeywordList(name string) []string {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var _ma C.struct_miqt_array = C.KSyntaxHighlighting__Definition_keywordList(this.h, name_ms)
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

func (this *KSyntaxHighlighting__Definition) SetKeywordList(name string, content []string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	content_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(content))))
	defer C.free(unsafe.Pointer(content_CArray))
	for i := range content {
		content_i_ms := C.struct_miqt_string{}
		content_i_ms.data = C.CString(content[i])
		content_i_ms.len = C.size_t(len(content[i]))
		defer C.free(unsafe.Pointer(content_i_ms.data))
		content_CArray[i] = content_i_ms
	}
	content_ma := C.struct_miqt_array{len: C.size_t(len(content)), data: unsafe.Pointer(content_CArray)}
	return (bool)(C.KSyntaxHighlighting__Definition_setKeywordList(this.h, name_ms, content_ma))
}

func (this *KSyntaxHighlighting__Definition) Formats() []Format {
	var _ma C.struct_miqt_array = C.KSyntaxHighlighting__Definition_formats(this.h)
	_ret := make([]Format, int(_ma.len))
	_outCast := (*[0xffff]C.Format)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		int /* TODO  */
	}
	return _ret
}

func (this *KSyntaxHighlighting__Definition) IncludedDefinitions() []Definition {
	var _ma C.struct_miqt_array = C.KSyntaxHighlighting__Definition_includedDefinitions(this.h)
	_ret := make([]Definition, int(_ma.len))
	_outCast := (*[0xffff]C.Definition)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		int /* TODO  */
	}
	return _ret
}

func (this *KSyntaxHighlighting__Definition) SingleLineCommentMarker() string {
	var _ms C.struct_miqt_string = C.KSyntaxHighlighting__Definition_singleLineCommentMarker(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *KSyntaxHighlighting__Definition) SingleLineCommentPosition() CommentPosition {
	int /* TODO  */
}

func (this *KSyntaxHighlighting__Definition) MultiLineCommentMarker() struct {
	First  string
	Second string
} {
	var _mm C.struct_miqt_map = C.KSyntaxHighlighting__Definition_multiLineCommentMarker(this.h)
	_First_CArray := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Second_CArray := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.values))
	var _first_ms C.struct_miqt_string = _First_CArray[0]
	_first_ret := C.GoStringN(_first_ms.data, C.int(int64(_first_ms.len)))
	C.free(unsafe.Pointer(_first_ms.data))
	_entry_First := _first_ret
	var _second_ms C.struct_miqt_string = _Second_CArray[0]
	_second_ret := C.GoStringN(_second_ms.data, C.int(int64(_second_ms.len)))
	C.free(unsafe.Pointer(_second_ms.data))
	_entry_Second := _second_ret
	return struct {
		First  string
		Second string
	}{First: _entry_First, Second: _entry_Second}
}

func (this *KSyntaxHighlighting__Definition) CharacterEncodings() []struct {
	First  qt6.QChar
	Second string
} {
	var _ma C.struct_miqt_array = C.KSyntaxHighlighting__Definition_characterEncodings(this.h)
	_ret := make([]struct {
		First  qt6.QChar
		Second string
	}, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_map)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_mm C.struct_miqt_map = _outCast[i]
		_lv_First_CArray := (*[0xffff]*C.QChar)(unsafe.Pointer(_lv_mm.keys))
		_lv_Second_CArray := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_lv_mm.values))
		_lv_first_goptr := qt6.UnsafeNewQChar(unsafe.Pointer(_lv_First_CArray[0]))
		_lv_first_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_lv_entry_First := *_lv_first_goptr

		var _lv_second_ms C.struct_miqt_string = _lv_Second_CArray[0]
		_lv_second_ret := C.GoStringN(_lv_second_ms.data, C.int(int64(_lv_second_ms.len)))
		C.free(unsafe.Pointer(_lv_second_ms.data))
		_lv_entry_Second := _lv_second_ret
		_ret[i] = struct {
			First  qt6.QChar
			Second string
		}{First: _lv_entry_First, Second: _lv_entry_Second}
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *KSyntaxHighlighting__Definition) Delete() {
	C.KSyntaxHighlighting__Definition_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *KSyntaxHighlighting__Definition) GoGC() {
	runtime.SetFinalizer(this, func(this *KSyntaxHighlighting__Definition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
