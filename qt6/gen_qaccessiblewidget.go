package qt6

/*

#include "gen_qaccessiblewidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QAccessibleWidget struct {
	h *C.QAccessibleWidget
	*QAccessibleObject
	*QAccessibleActionInterface
}

func (this *QAccessibleWidget) cPointer() *C.QAccessibleWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleWidget constructs the type using only CGO pointers.
func newQAccessibleWidget(h *C.QAccessibleWidget) *QAccessibleWidget {
	if h == nil {
		return nil
	}
	var outptr_QAccessibleObject *C.QAccessibleObject = nil
	var outptr_QAccessibleActionInterface *C.QAccessibleActionInterface = nil
	C.QAccessibleWidget_virtbase(h, &outptr_QAccessibleObject, &outptr_QAccessibleActionInterface)

	return &QAccessibleWidget{h: h,
		QAccessibleObject:          newQAccessibleObject(outptr_QAccessibleObject),
		QAccessibleActionInterface: newQAccessibleActionInterface(outptr_QAccessibleActionInterface)}
}

// UnsafeNewQAccessibleWidget constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleWidget(h unsafe.Pointer) *QAccessibleWidget {
	return newQAccessibleWidget((*C.QAccessibleWidget)(h))
}

// NewQAccessibleWidget constructs a new QAccessibleWidget object.
func NewQAccessibleWidget(o *QWidget) *QAccessibleWidget {

	return newQAccessibleWidget(C.QAccessibleWidget_new(o.cPointer()))
}

// NewQAccessibleWidget2 constructs a new QAccessibleWidget object.
func NewQAccessibleWidget2(o *QWidget, r QAccessible__Role, name string) *QAccessibleWidget {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQAccessibleWidget(C.QAccessibleWidget_new2(o.cPointer(), (C.int)(r), name_ms))
}

// NewQAccessibleWidget3 constructs a new QAccessibleWidget object.
func NewQAccessibleWidget3(o *QWidget, r QAccessible__Role) *QAccessibleWidget {

	return newQAccessibleWidget(C.QAccessibleWidget_new3(o.cPointer(), (C.int)(r)))
}

func (this *QAccessibleWidget) IsValid() bool {
	return (bool)(C.QAccessibleWidget_isValid(this.h))
}

func (this *QAccessibleWidget) Window() *QWindow {
	return newQWindow(C.QAccessibleWidget_window(this.h))
}

func (this *QAccessibleWidget) ChildCount() int {
	return (int)(C.QAccessibleWidget_childCount(this.h))
}

func (this *QAccessibleWidget) IndexOfChild(child *QAccessibleInterface) int {
	return (int)(C.QAccessibleWidget_indexOfChild(this.h, child.cPointer()))
}

func (this *QAccessibleWidget) FocusChild() *QAccessibleInterface {
	return newQAccessibleInterface(C.QAccessibleWidget_focusChild(this.h))
}

func (this *QAccessibleWidget) Rect() *QRect {
	_goptr := newQRect(C.QAccessibleWidget_rect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleWidget) Parent() *QAccessibleInterface {
	return newQAccessibleInterface(C.QAccessibleWidget_parent(this.h))
}

func (this *QAccessibleWidget) Child(index int) *QAccessibleInterface {
	return newQAccessibleInterface(C.QAccessibleWidget_child(this.h, (C.int)(index)))
}

func (this *QAccessibleWidget) Text(t QAccessible__Text) string {
	var _ms C.struct_miqt_string = C.QAccessibleWidget_text(this.h, (C.int)(t))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleWidget) Role() QAccessible__Role {
	return (QAccessible__Role)(C.QAccessibleWidget_role(this.h))
}

func (this *QAccessibleWidget) State() *QAccessible__State {
	_goptr := newQAccessible__State(C.QAccessibleWidget_state(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleWidget) ForegroundColor() *QColor {
	_goptr := newQColor(C.QAccessibleWidget_foregroundColor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleWidget) BackgroundColor() *QColor {
	_goptr := newQColor(C.QAccessibleWidget_backgroundColor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleWidget) InterfaceCast(t QAccessible__InterfaceType) unsafe.Pointer {
	return (unsafe.Pointer)(C.QAccessibleWidget_interfaceCast(this.h, (C.int)(t)))
}

func (this *QAccessibleWidget) ActionNames() []string {
	var _ma C.struct_miqt_array = C.QAccessibleWidget_actionNames(this.h)
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

func (this *QAccessibleWidget) DoAction(actionName string) {
	actionName_ms := C.struct_miqt_string{}
	actionName_ms.data = C.CString(actionName)
	actionName_ms.len = C.size_t(len(actionName))
	defer C.free(unsafe.Pointer(actionName_ms.data))
	C.QAccessibleWidget_doAction(this.h, actionName_ms)
}

func (this *QAccessibleWidget) KeyBindingsForAction(actionName string) []string {
	actionName_ms := C.struct_miqt_string{}
	actionName_ms.data = C.CString(actionName)
	actionName_ms.len = C.size_t(len(actionName))
	defer C.free(unsafe.Pointer(actionName_ms.data))
	var _ma C.struct_miqt_array = C.QAccessibleWidget_keyBindingsForAction(this.h, actionName_ms)
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

type QAccessibleWidgetV2 struct {
	h *C.QAccessibleWidgetV2
	*QAccessibleWidget
	*QAccessibleAttributesInterface
}

func (this *QAccessibleWidgetV2) cPointer() *C.QAccessibleWidgetV2 {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleWidgetV2) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleWidgetV2 constructs the type using only CGO pointers.
func newQAccessibleWidgetV2(h *C.QAccessibleWidgetV2) *QAccessibleWidgetV2 {
	if h == nil {
		return nil
	}
	var outptr_QAccessibleWidget *C.QAccessibleWidget = nil
	var outptr_QAccessibleAttributesInterface *C.QAccessibleAttributesInterface = nil
	C.QAccessibleWidgetV2_virtbase(h, &outptr_QAccessibleWidget, &outptr_QAccessibleAttributesInterface)

	return &QAccessibleWidgetV2{h: h,
		QAccessibleWidget:              newQAccessibleWidget(outptr_QAccessibleWidget),
		QAccessibleAttributesInterface: newQAccessibleAttributesInterface(outptr_QAccessibleAttributesInterface)}
}

// UnsafeNewQAccessibleWidgetV2 constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleWidgetV2(h unsafe.Pointer) *QAccessibleWidgetV2 {
	return newQAccessibleWidgetV2((*C.QAccessibleWidgetV2)(h))
}

// NewQAccessibleWidgetV2 constructs a new QAccessibleWidgetV2 object.
func NewQAccessibleWidgetV2(object *QWidget) *QAccessibleWidgetV2 {

	return newQAccessibleWidgetV2(C.QAccessibleWidgetV2_new(object.cPointer()))
}

// NewQAccessibleWidgetV22 constructs a new QAccessibleWidgetV2 object.
func NewQAccessibleWidgetV22(object *QWidget, role QAccessible__Role, name string) *QAccessibleWidgetV2 {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQAccessibleWidgetV2(C.QAccessibleWidgetV2_new2(object.cPointer(), (C.int)(role), name_ms))
}

// NewQAccessibleWidgetV23 constructs a new QAccessibleWidgetV2 object.
func NewQAccessibleWidgetV23(object *QWidget, role QAccessible__Role) *QAccessibleWidgetV2 {

	return newQAccessibleWidgetV2(C.QAccessibleWidgetV2_new3(object.cPointer(), (C.int)(role)))
}

func (this *QAccessibleWidgetV2) InterfaceCast(t QAccessible__InterfaceType) unsafe.Pointer {
	return (unsafe.Pointer)(C.QAccessibleWidgetV2_interfaceCast(this.h, (C.int)(t)))
}

func (this *QAccessibleWidgetV2) AttributeKeys() []QAccessible__Attribute {
	var _ma C.struct_miqt_array = C.QAccessibleWidgetV2_attributeKeys(this.h)
	_ret := make([]QAccessible__Attribute, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QAccessible__Attribute)(_outCast[i])
	}
	return _ret
}

func (this *QAccessibleWidgetV2) AttributeValue(key QAccessible__Attribute) *QVariant {
	_goptr := newQVariant(C.QAccessibleWidgetV2_attributeValue(this.h, (C.int)(key)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}
