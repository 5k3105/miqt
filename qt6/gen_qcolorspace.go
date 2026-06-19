package qt6

/*

#include "gen_qcolorspace.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QColorSpace__NamedColorSpace int

const (
	QColorSpace__NamedColorSpace__SRgb        QColorSpace__NamedColorSpace = 1
	QColorSpace__NamedColorSpace__SRgbLinear  QColorSpace__NamedColorSpace = 2
	QColorSpace__NamedColorSpace__AdobeRgb    QColorSpace__NamedColorSpace = 3
	QColorSpace__NamedColorSpace__DisplayP3   QColorSpace__NamedColorSpace = 4
	QColorSpace__NamedColorSpace__ProPhotoRgb QColorSpace__NamedColorSpace = 5
	QColorSpace__NamedColorSpace__Bt2020      QColorSpace__NamedColorSpace = 6
	QColorSpace__NamedColorSpace__Bt2100Pq    QColorSpace__NamedColorSpace = 7
	QColorSpace__NamedColorSpace__Bt2100Hlg   QColorSpace__NamedColorSpace = 8
)

type QColorSpace__Primaries int

const (
	QColorSpace__Primaries__Custom      QColorSpace__Primaries = 0
	QColorSpace__Primaries__SRgb        QColorSpace__Primaries = 1
	QColorSpace__Primaries__AdobeRgb    QColorSpace__Primaries = 2
	QColorSpace__Primaries__DciP3D65    QColorSpace__Primaries = 3
	QColorSpace__Primaries__ProPhotoRgb QColorSpace__Primaries = 4
	QColorSpace__Primaries__Bt2020      QColorSpace__Primaries = 5
)

type QColorSpace__TransferFunction int

const (
	QColorSpace__TransferFunction__Custom      QColorSpace__TransferFunction = 0
	QColorSpace__TransferFunction__Linear      QColorSpace__TransferFunction = 1
	QColorSpace__TransferFunction__Gamma       QColorSpace__TransferFunction = 2
	QColorSpace__TransferFunction__SRgb        QColorSpace__TransferFunction = 3
	QColorSpace__TransferFunction__ProPhotoRgb QColorSpace__TransferFunction = 4
	QColorSpace__TransferFunction__Bt2020      QColorSpace__TransferFunction = 5
	QColorSpace__TransferFunction__St2084      QColorSpace__TransferFunction = 6
	QColorSpace__TransferFunction__Hlg         QColorSpace__TransferFunction = 7
)

type QColorSpace__TransformModel uint8_t

const (
	QColorSpace__ThreeComponentMatrix  QColorSpace__TransformModel = 0
	QColorSpace__ElementListProcessing QColorSpace__TransformModel = 1
)

type QColorSpace__ColorModel uint8_t

const (
	QColorSpace__Undefined QColorSpace__ColorModel = 0
	QColorSpace__Rgb       QColorSpace__ColorModel = 1
	QColorSpace__Gray      QColorSpace__ColorModel = 2
	QColorSpace__Cmyk      QColorSpace__ColorModel = 3
)

type QColorSpace struct {
	h *C.QColorSpace
}

func (this *QColorSpace) cPointer() *C.QColorSpace {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QColorSpace) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQColorSpace constructs the type using only CGO pointers.
func newQColorSpace(h *C.QColorSpace) *QColorSpace {
	if h == nil {
		return nil
	}

	return &QColorSpace{h: h}
}

// UnsafeNewQColorSpace constructs the type using only unsafe pointers.
func UnsafeNewQColorSpace(h unsafe.Pointer) *QColorSpace {
	return newQColorSpace((*C.QColorSpace)(h))
}

// NewQColorSpace constructs a new QColorSpace object.
func NewQColorSpace() *QColorSpace {

	return newQColorSpace(C.QColorSpace_new())
}

// NewQColorSpace2 constructs a new QColorSpace object.
func NewQColorSpace2(namedColorSpace NamedColorSpace) *QColorSpace {

	return newQColorSpace(C.QColorSpace_new2(namedColorSpace))
}

// NewQColorSpace3 constructs a new QColorSpace object.
func NewQColorSpace3(whitePoint QPointF, transferFunction TransferFunction) *QColorSpace {

	return newQColorSpace(C.QColorSpace_new3(whitePoint.cPointer(), transferFunction))
}

// NewQColorSpace4 constructs a new QColorSpace object.
func NewQColorSpace4(whitePoint QPointF, transferFunctionTable []uint16) *QColorSpace {
	transferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(transferFunctionTable))))
	defer C.free(unsafe.Pointer(transferFunctionTable_CArray))
	for i := range transferFunctionTable {
		transferFunctionTable_CArray[i] = (C.uint16_t)(transferFunctionTable[i])
	}
	transferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(transferFunctionTable)), data: unsafe.Pointer(transferFunctionTable_CArray)}

	return newQColorSpace(C.QColorSpace_new4(whitePoint.cPointer(), transferFunctionTable_ma))
}

// NewQColorSpace5 constructs a new QColorSpace object.
func NewQColorSpace5(primaries Primaries, transferFunction TransferFunction) *QColorSpace {

	return newQColorSpace(C.QColorSpace_new5(primaries, transferFunction))
}

// NewQColorSpace6 constructs a new QColorSpace object.
func NewQColorSpace6(primaries Primaries, gamma float32) *QColorSpace {

	return newQColorSpace(C.QColorSpace_new6(primaries, (C.float)(gamma)))
}

// NewQColorSpace7 constructs a new QColorSpace object.
func NewQColorSpace7(primaries Primaries, transferFunctionTable []uint16) *QColorSpace {
	transferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(transferFunctionTable))))
	defer C.free(unsafe.Pointer(transferFunctionTable_CArray))
	for i := range transferFunctionTable {
		transferFunctionTable_CArray[i] = (C.uint16_t)(transferFunctionTable[i])
	}
	transferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(transferFunctionTable)), data: unsafe.Pointer(transferFunctionTable_CArray)}

	return newQColorSpace(C.QColorSpace_new7(primaries, transferFunctionTable_ma))
}

// NewQColorSpace8 constructs a new QColorSpace object.
func NewQColorSpace8(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF, transferFunction TransferFunction) *QColorSpace {

	return newQColorSpace(C.QColorSpace_new8(whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer(), transferFunction))
}

// NewQColorSpace9 constructs a new QColorSpace object.
func NewQColorSpace9(primaryPoints *PrimaryPoints, transferFunction TransferFunction) *QColorSpace {

	return newQColorSpace(C.QColorSpace_new9(primaryPoints, transferFunction))
}

// NewQColorSpace10 constructs a new QColorSpace object.
func NewQColorSpace10(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF, transferFunctionTable []uint16) *QColorSpace {
	transferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(transferFunctionTable))))
	defer C.free(unsafe.Pointer(transferFunctionTable_CArray))
	for i := range transferFunctionTable {
		transferFunctionTable_CArray[i] = (C.uint16_t)(transferFunctionTable[i])
	}
	transferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(transferFunctionTable)), data: unsafe.Pointer(transferFunctionTable_CArray)}

	return newQColorSpace(C.QColorSpace_new10(whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer(), transferFunctionTable_ma))
}

// NewQColorSpace11 constructs a new QColorSpace object.
func NewQColorSpace11(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF, redTransferFunctionTable []uint16, greenTransferFunctionTable []uint16, blueTransferFunctionTable []uint16) *QColorSpace {
	redTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(redTransferFunctionTable))))
	defer C.free(unsafe.Pointer(redTransferFunctionTable_CArray))
	for i := range redTransferFunctionTable {
		redTransferFunctionTable_CArray[i] = (C.uint16_t)(redTransferFunctionTable[i])
	}
	redTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(redTransferFunctionTable)), data: unsafe.Pointer(redTransferFunctionTable_CArray)}
	greenTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(greenTransferFunctionTable))))
	defer C.free(unsafe.Pointer(greenTransferFunctionTable_CArray))
	for i := range greenTransferFunctionTable {
		greenTransferFunctionTable_CArray[i] = (C.uint16_t)(greenTransferFunctionTable[i])
	}
	greenTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(greenTransferFunctionTable)), data: unsafe.Pointer(greenTransferFunctionTable_CArray)}
	blueTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(blueTransferFunctionTable))))
	defer C.free(unsafe.Pointer(blueTransferFunctionTable_CArray))
	for i := range blueTransferFunctionTable {
		blueTransferFunctionTable_CArray[i] = (C.uint16_t)(blueTransferFunctionTable[i])
	}
	blueTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(blueTransferFunctionTable)), data: unsafe.Pointer(blueTransferFunctionTable_CArray)}

	return newQColorSpace(C.QColorSpace_new11(whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer(), redTransferFunctionTable_ma, greenTransferFunctionTable_ma, blueTransferFunctionTable_ma))
}

// NewQColorSpace12 constructs a new QColorSpace object.
func NewQColorSpace12(colorSpace *QColorSpace) *QColorSpace {

	return newQColorSpace(C.QColorSpace_new12(colorSpace.cPointer()))
}

// NewQColorSpace13 constructs a new QColorSpace object.
func NewQColorSpace13(whitePoint QPointF, transferFunction TransferFunction, gamma float32) *QColorSpace {

	return newQColorSpace(C.QColorSpace_new13(whitePoint.cPointer(), transferFunction, (C.float)(gamma)))
}

// NewQColorSpace14 constructs a new QColorSpace object.
func NewQColorSpace14(primaries Primaries, transferFunction TransferFunction, gamma float32) *QColorSpace {

	return newQColorSpace(C.QColorSpace_new14(primaries, transferFunction, (C.float)(gamma)))
}

// NewQColorSpace15 constructs a new QColorSpace object.
func NewQColorSpace15(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF, transferFunction TransferFunction, gamma float32) *QColorSpace {

	return newQColorSpace(C.QColorSpace_new15(whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer(), transferFunction, (C.float)(gamma)))
}

// NewQColorSpace16 constructs a new QColorSpace object.
func NewQColorSpace16(primaryPoints *PrimaryPoints, transferFunction TransferFunction, gamma float32) *QColorSpace {

	return newQColorSpace(C.QColorSpace_new16(primaryPoints, transferFunction, (C.float)(gamma)))
}

func (this *QColorSpace) OperatorAssign(colorSpace *QColorSpace) {
	C.QColorSpace_operatorAssign(this.h, colorSpace.cPointer())
}

func (this *QColorSpace) Swap(colorSpace *QColorSpace) {
	C.QColorSpace_swap(this.h, colorSpace.cPointer())
}

func (this *QColorSpace) Primaries() Primaries {
	int /* TODO  */
}

func (this *QColorSpace) TransferFunction() TransferFunction {
	int /* TODO  */
}

func (this *QColorSpace) Gamma() float32 {
	return (float32)(C.QColorSpace_gamma(this.h))
}

func (this *QColorSpace) Description() string {
	var _ms C.struct_miqt_string = C.QColorSpace_description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QColorSpace) SetDescription(description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QColorSpace_setDescription(this.h, description_ms)
}

func (this *QColorSpace) SetTransferFunction(transferFunction TransferFunction) {
	C.QColorSpace_setTransferFunction(this.h, transferFunction)
}

func (this *QColorSpace) SetTransferFunctionWithTransferFunctionTable(transferFunctionTable []uint16) {
	transferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(transferFunctionTable))))
	defer C.free(unsafe.Pointer(transferFunctionTable_CArray))
	for i := range transferFunctionTable {
		transferFunctionTable_CArray[i] = (C.uint16_t)(transferFunctionTable[i])
	}
	transferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(transferFunctionTable)), data: unsafe.Pointer(transferFunctionTable_CArray)}
	C.QColorSpace_setTransferFunctionWithTransferFunctionTable(this.h, transferFunctionTable_ma)
}

func (this *QColorSpace) SetTransferFunctions(redTransferFunctionTable []uint16, greenTransferFunctionTable []uint16, blueTransferFunctionTable []uint16) {
	redTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(redTransferFunctionTable))))
	defer C.free(unsafe.Pointer(redTransferFunctionTable_CArray))
	for i := range redTransferFunctionTable {
		redTransferFunctionTable_CArray[i] = (C.uint16_t)(redTransferFunctionTable[i])
	}
	redTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(redTransferFunctionTable)), data: unsafe.Pointer(redTransferFunctionTable_CArray)}
	greenTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(greenTransferFunctionTable))))
	defer C.free(unsafe.Pointer(greenTransferFunctionTable_CArray))
	for i := range greenTransferFunctionTable {
		greenTransferFunctionTable_CArray[i] = (C.uint16_t)(greenTransferFunctionTable[i])
	}
	greenTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(greenTransferFunctionTable)), data: unsafe.Pointer(greenTransferFunctionTable_CArray)}
	blueTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(blueTransferFunctionTable))))
	defer C.free(unsafe.Pointer(blueTransferFunctionTable_CArray))
	for i := range blueTransferFunctionTable {
		blueTransferFunctionTable_CArray[i] = (C.uint16_t)(blueTransferFunctionTable[i])
	}
	blueTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(blueTransferFunctionTable)), data: unsafe.Pointer(blueTransferFunctionTable_CArray)}
	C.QColorSpace_setTransferFunctions(this.h, redTransferFunctionTable_ma, greenTransferFunctionTable_ma, blueTransferFunctionTable_ma)
}

func (this *QColorSpace) WithTransferFunction(transferFunction TransferFunction) *QColorSpace {
	_goptr := newQColorSpace(C.QColorSpace_withTransferFunction(this.h, transferFunction))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) WithTransferFunctionWithTransferFunctionTable(transferFunctionTable []uint16) *QColorSpace {
	transferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(transferFunctionTable))))
	defer C.free(unsafe.Pointer(transferFunctionTable_CArray))
	for i := range transferFunctionTable {
		transferFunctionTable_CArray[i] = (C.uint16_t)(transferFunctionTable[i])
	}
	transferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(transferFunctionTable)), data: unsafe.Pointer(transferFunctionTable_CArray)}
	_goptr := newQColorSpace(C.QColorSpace_withTransferFunctionWithTransferFunctionTable(this.h, transferFunctionTable_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) WithTransferFunctions(redTransferFunctionTable []uint16, greenTransferFunctionTable []uint16, blueTransferFunctionTable []uint16) *QColorSpace {
	redTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(redTransferFunctionTable))))
	defer C.free(unsafe.Pointer(redTransferFunctionTable_CArray))
	for i := range redTransferFunctionTable {
		redTransferFunctionTable_CArray[i] = (C.uint16_t)(redTransferFunctionTable[i])
	}
	redTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(redTransferFunctionTable)), data: unsafe.Pointer(redTransferFunctionTable_CArray)}
	greenTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(greenTransferFunctionTable))))
	defer C.free(unsafe.Pointer(greenTransferFunctionTable_CArray))
	for i := range greenTransferFunctionTable {
		greenTransferFunctionTable_CArray[i] = (C.uint16_t)(greenTransferFunctionTable[i])
	}
	greenTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(greenTransferFunctionTable)), data: unsafe.Pointer(greenTransferFunctionTable_CArray)}
	blueTransferFunctionTable_CArray := (*[0xffff]C.uint16_t)(C.malloc(C.size_t(8 * len(blueTransferFunctionTable))))
	defer C.free(unsafe.Pointer(blueTransferFunctionTable_CArray))
	for i := range blueTransferFunctionTable {
		blueTransferFunctionTable_CArray[i] = (C.uint16_t)(blueTransferFunctionTable[i])
	}
	blueTransferFunctionTable_ma := C.struct_miqt_array{len: C.size_t(len(blueTransferFunctionTable)), data: unsafe.Pointer(blueTransferFunctionTable_CArray)}
	_goptr := newQColorSpace(C.QColorSpace_withTransferFunctions(this.h, redTransferFunctionTable_ma, greenTransferFunctionTable_ma, blueTransferFunctionTable_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) SetPrimaries(primariesId Primaries) {
	C.QColorSpace_setPrimaries(this.h, primariesId)
}

func (this *QColorSpace) SetPrimaries2(whitePoint *QPointF, redPoint *QPointF, greenPoint *QPointF, bluePoint *QPointF) {
	C.QColorSpace_setPrimaries2(this.h, whitePoint.cPointer(), redPoint.cPointer(), greenPoint.cPointer(), bluePoint.cPointer())
}

func (this *QColorSpace) SetWhitePoint(whitePoint QPointF) {
	C.QColorSpace_setWhitePoint(this.h, whitePoint.cPointer())
}

func (this *QColorSpace) WhitePoint() *QPointF {
	_goptr := newQPointF(C.QColorSpace_whitePoint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) SetPrimaryPoints(primaryPoints *PrimaryPoints) {
	C.QColorSpace_setPrimaryPoints(this.h, primaryPoints)
}

func (this *QColorSpace) PrimaryPoints() PrimaryPoints {
	int /* TODO  */
}

func (this *QColorSpace) TransformModel() TransformModel {
	int /* TODO  */
}

func (this *QColorSpace) ColorModel() ColorModel {
	int /* TODO  */
}

func (this *QColorSpace) Detach() {
	C.QColorSpace_detach(this.h)
}

func (this *QColorSpace) IsValid() bool {
	return (bool)(C.QColorSpace_isValid(this.h))
}

func (this *QColorSpace) IsValidTarget() bool {
	return (bool)(C.QColorSpace_isValidTarget(this.h))
}

func QColorSpace_FromIccProfile(iccProfile []byte) *QColorSpace {
	iccProfile_alias := C.struct_miqt_string{}
	if len(iccProfile) > 0 {
		iccProfile_alias.data = (*C.char)(unsafe.Pointer(&iccProfile[0]))
	} else {
		iccProfile_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	iccProfile_alias.len = C.size_t(len(iccProfile))
	_goptr := newQColorSpace(C.QColorSpace_fromIccProfile(iccProfile_alias))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) IccProfile() []byte {
	var _bytearray C.struct_miqt_string = C.QColorSpace_iccProfile(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QColorSpace) TransformationToColorSpace(colorspace *QColorSpace) *QColorTransform {
	_goptr := newQColorTransform(C.QColorSpace_transformationToColorSpace(this.h, colorspace.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QColorSpace_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorSpace) SetTransferFunction2(transferFunction TransferFunction, gamma float32) {
	C.QColorSpace_setTransferFunction2(this.h, transferFunction, (C.float)(gamma))
}

func (this *QColorSpace) WithTransferFunction2(transferFunction TransferFunction, gamma float32) *QColorSpace {
	_goptr := newQColorSpace(C.QColorSpace_withTransferFunction2(this.h, transferFunction, (C.float)(gamma)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QColorSpace) Delete() {
	C.QColorSpace_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QColorSpace) GoGC() {
	runtime.SetFinalizer(this, func(this *QColorSpace) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QColorSpace__PrimaryPoints struct {
	h *C.QColorSpace__PrimaryPoints
}

func (this *QColorSpace__PrimaryPoints) cPointer() *C.QColorSpace__PrimaryPoints {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QColorSpace__PrimaryPoints) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQColorSpace__PrimaryPoints constructs the type using only CGO pointers.
func newQColorSpace__PrimaryPoints(h *C.QColorSpace__PrimaryPoints) *QColorSpace__PrimaryPoints {
	if h == nil {
		return nil
	}

	return &QColorSpace__PrimaryPoints{h: h}
}

// UnsafeNewQColorSpace__PrimaryPoints constructs the type using only unsafe pointers.
func UnsafeNewQColorSpace__PrimaryPoints(h unsafe.Pointer) *QColorSpace__PrimaryPoints {
	return newQColorSpace__PrimaryPoints((*C.QColorSpace__PrimaryPoints)(h))
}

func QColorSpace__PrimaryPoints_FromPrimaries(primaries Primaries) PrimaryPoints {
	int /* TODO  */
}

func (this *QColorSpace__PrimaryPoints) IsValid() bool {
	return (bool)(C.QColorSpace__PrimaryPoints_isValid(this.h))
}

func (this *QColorSpace__PrimaryPoints) WhitePoint() *QPointF {
	whitePoint_goptr := newQPointF(C.QColorSpace__PrimaryPoints_whitePoint(this.h))
	whitePoint_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return whitePoint_goptr
}

func (this *QColorSpace__PrimaryPoints) SetWhitePoint(whitePoint QPointF) {
	C.QColorSpace__PrimaryPoints_setWhitePoint(this.h, whitePoint.cPointer())
}

func (this *QColorSpace__PrimaryPoints) RedPoint() *QPointF {
	redPoint_goptr := newQPointF(C.QColorSpace__PrimaryPoints_redPoint(this.h))
	redPoint_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return redPoint_goptr
}

func (this *QColorSpace__PrimaryPoints) SetRedPoint(redPoint QPointF) {
	C.QColorSpace__PrimaryPoints_setRedPoint(this.h, redPoint.cPointer())
}

func (this *QColorSpace__PrimaryPoints) GreenPoint() *QPointF {
	greenPoint_goptr := newQPointF(C.QColorSpace__PrimaryPoints_greenPoint(this.h))
	greenPoint_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return greenPoint_goptr
}

func (this *QColorSpace__PrimaryPoints) SetGreenPoint(greenPoint QPointF) {
	C.QColorSpace__PrimaryPoints_setGreenPoint(this.h, greenPoint.cPointer())
}

func (this *QColorSpace__PrimaryPoints) BluePoint() *QPointF {
	bluePoint_goptr := newQPointF(C.QColorSpace__PrimaryPoints_bluePoint(this.h))
	bluePoint_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return bluePoint_goptr
}

func (this *QColorSpace__PrimaryPoints) SetBluePoint(bluePoint QPointF) {
	C.QColorSpace__PrimaryPoints_setBluePoint(this.h, bluePoint.cPointer())
}

// Delete this object from C++ memory.
func (this *QColorSpace__PrimaryPoints) Delete() {
	C.QColorSpace__PrimaryPoints_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QColorSpace__PrimaryPoints) GoGC() {
	runtime.SetFinalizer(this, func(this *QColorSpace__PrimaryPoints) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
