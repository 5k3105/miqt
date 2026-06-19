package ksyntaxhighlighting

/*

#include "gen_foldingregion.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type KSyntaxHighlighting__FoldingRegion__Type int

const (
	KSyntaxHighlighting__FoldingRegion__None  KSyntaxHighlighting__FoldingRegion__Type = 0
	KSyntaxHighlighting__FoldingRegion__Begin KSyntaxHighlighting__FoldingRegion__Type = 1
	KSyntaxHighlighting__FoldingRegion__End   KSyntaxHighlighting__FoldingRegion__Type = 2
)

type KSyntaxHighlighting__FoldingRegion struct {
	h *C.KSyntaxHighlighting__FoldingRegion
}

func (this *KSyntaxHighlighting__FoldingRegion) cPointer() *C.KSyntaxHighlighting__FoldingRegion {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *KSyntaxHighlighting__FoldingRegion) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKSyntaxHighlighting__FoldingRegion constructs the type using only CGO pointers.
func newKSyntaxHighlighting__FoldingRegion(h *C.KSyntaxHighlighting__FoldingRegion) *KSyntaxHighlighting__FoldingRegion {
	if h == nil {
		return nil
	}

	return &KSyntaxHighlighting__FoldingRegion{h: h}
}

// UnsafeNewKSyntaxHighlighting__FoldingRegion constructs the type using only unsafe pointers.
func UnsafeNewKSyntaxHighlighting__FoldingRegion(h unsafe.Pointer) *KSyntaxHighlighting__FoldingRegion {
	return newKSyntaxHighlighting__FoldingRegion((*C.KSyntaxHighlighting__FoldingRegion)(h))
}

// NewKSyntaxHighlighting__FoldingRegion constructs a new KSyntaxHighlighting::FoldingRegion object.
func NewKSyntaxHighlighting__FoldingRegion() *KSyntaxHighlighting__FoldingRegion {

	return newKSyntaxHighlighting__FoldingRegion(C.KSyntaxHighlighting__FoldingRegion_new())
}

// NewKSyntaxHighlighting__FoldingRegion2 constructs a new KSyntaxHighlighting::FoldingRegion object.
func NewKSyntaxHighlighting__FoldingRegion2(param1 *FoldingRegion) *KSyntaxHighlighting__FoldingRegion {

	return newKSyntaxHighlighting__FoldingRegion(C.KSyntaxHighlighting__FoldingRegion_new2(param1))
}

func (this *KSyntaxHighlighting__FoldingRegion) OperatorEqual(other *FoldingRegion) bool {
	return (bool)(C.KSyntaxHighlighting__FoldingRegion_operatorEqual(this.h, other))
}

func (this *KSyntaxHighlighting__FoldingRegion) IsValid() bool {
	return (bool)(C.KSyntaxHighlighting__FoldingRegion_isValid(this.h))
}

func (this *KSyntaxHighlighting__FoldingRegion) Id() int {
	return (int)(C.KSyntaxHighlighting__FoldingRegion_id(this.h))
}

func (this *KSyntaxHighlighting__FoldingRegion) Type() Type {
	int /* TODO  */
}

func (this *KSyntaxHighlighting__FoldingRegion) Sibling() FoldingRegion {
	int /* TODO  */
}

// Delete this object from C++ memory.
func (this *KSyntaxHighlighting__FoldingRegion) Delete() {
	C.KSyntaxHighlighting__FoldingRegion_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *KSyntaxHighlighting__FoldingRegion) GoGC() {
	runtime.SetFinalizer(this, func(this *KSyntaxHighlighting__FoldingRegion) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
