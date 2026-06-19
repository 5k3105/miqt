package qt6

/*

#include "gen_quuid.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

		type QUuid__Variant int
		const (
QUuid__VarUnknown QUuid__Variant = -1
QUuid__NCS QUuid__Variant = 0
QUuid__DCE QUuid__Variant = 2
QUuid__Microsoft QUuid__Variant = 6
QUuid__Reserved QUuid__Variant = 7

)


		type QUuid__Version int
		const (
QUuid__VerUnknown QUuid__Version = -1
QUuid__Time QUuid__Version = 1
QUuid__EmbeddedPOSIX QUuid__Version = 2
QUuid__Md5 QUuid__Version = 3
QUuid__Name QUuid__Version = 3
QUuid__Random QUuid__Version = 4
QUuid__Sha1 QUuid__Version = 5
QUuid__UnixEpoch QUuid__Version = 7

)


		type QUuid__StringFormat int
		const (
QUuid__WithBraces QUuid__StringFormat = 0
QUuid__WithoutBraces QUuid__StringFormat = 1
QUuid__Id128 QUuid__StringFormat = 3

)


		type QUuid struct {
			h *C.QUuid
		
		}
		
		func (this *QUuid) cPointer() *C.QUuid {
			if this == nil {
				return nil
			}
			return this.h
		}
		
		func (this *QUuid) UnsafePointer() unsafe.Pointer {
			if this == nil {
				return nil
			}
			return unsafe.Pointer(this.h)
		}
		
		
			// newQUuid constructs the type using only CGO pointers.
			func newQUuid(h *C.QUuid) *QUuid {
				if h == nil {
					return nil
				}
		
				return &QUuid{h: h}
			}

			// UnsafeNewQUuid constructs the type using only unsafe pointers.
			func UnsafeNewQUuid(h unsafe.Pointer) *QUuid {
				return newQUuid( (*C.QUuid)(h) )
			}

		
			// NewQUuid constructs a new QUuid object.
			func NewQUuid() *QUuid {
				
				return newQUuid(C.QUuid_new())
			}

			
			// NewQUuid2 constructs a new QUuid object.
			func NewQUuid2(l uint, w1 uint16, w2 uint16, b1 byte, b2 byte, b3 byte, b4 byte, b5 byte, b6 byte, b7 byte, b8 byte) *QUuid {
				
				return newQUuid(C.QUuid_new2((C.uint)(l), (C.ushort)(w1), (C.ushort)(w2), (C.uchar)(b1), (C.uchar)(b2), (C.uchar)(b3), (C.uchar)(b4), (C.uchar)(b5), (C.uchar)(b6), (C.uchar)(b7), (C.uchar)(b8)))
			}

			
			// NewQUuid3 constructs a new QUuid object.
			func NewQUuid3(id128 Id128Bytes) *QUuid {
				
				return newQUuid(C.QUuid_new3(id128))
			}

			
			// NewQUuid4 constructs a new QUuid object.
			func NewQUuid4(stringVal QAnyStringView) *QUuid {
				
				return newQUuid(C.QUuid_new4(stringVal.cPointer()))
			}

			
			// NewQUuid5 constructs a new QUuid object.
			func NewQUuid5(param1 *QUuid) *QUuid {
				
				return newQUuid(C.QUuid_new5(param1.cPointer()))
			}

			
			// NewQUuid6 constructs a new QUuid object.
			func NewQUuid6(id128 Id128Bytes, order QSysInfo__Endian) *QUuid {
				
				return newQUuid(C.QUuid_new6(id128, (C.int)(order)))
			}

			
			func QUuid_FromString(stringVal QAnyStringView) *QUuid {
				_goptr := newQUuid(C.QUuid_fromString(stringVal.cPointer()))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QUuid) ToString() string {
				var _ms C.struct_miqt_string =  C.QUuid_toString(this.h)
_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
C.free(unsafe.Pointer(_ms.data))
return _ret}
			
			func (this *QUuid) ToByteArray() []byte {
				var _bytearray C.struct_miqt_string =  C.QUuid_toByteArray(this.h)
_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
C.free(unsafe.Pointer(_bytearray.data))
return _ret}
			
			func (this *QUuid) ToBytes() Id128Bytes {
				int /* TODO  */}
			
			func (this *QUuid) ToRfc4122() []byte {
				var _bytearray C.struct_miqt_string =  C.QUuid_toRfc4122(this.h)
_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
C.free(unsafe.Pointer(_bytearray.data))
return _ret}
			
			func QUuid_FromBytes(bytes unsafe.Pointer) *QUuid {
				_goptr := newQUuid(C.QUuid_fromBytes(bytes))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func QUuid_FromRfc4122(param1 QByteArrayView) *QUuid {
				_goptr := newQUuid(C.QUuid_fromRfc4122(param1.cPointer()))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QUuid) IsNull() bool {
				return (bool)(C.QUuid_isNull(this.h))
}
			
			func QUuid_CreateUuid() *QUuid {
				_goptr := newQUuid(C.QUuid_createUuid())
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func QUuid_CreateUuidV5(ns QUuid, baseData QByteArrayView) *QUuid {
				_goptr := newQUuid(C.QUuid_createUuidV5(ns.cPointer(), baseData.cPointer()))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func QUuid_CreateUuidV3(ns QUuid, baseData QByteArrayView) *QUuid {
				_goptr := newQUuid(C.QUuid_createUuidV3(ns.cPointer(), baseData.cPointer()))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func QUuid_CreateUuidV7() *QUuid {
				_goptr := newQUuid(C.QUuid_createUuidV7())
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QUuid) Variant() Variant {
				int /* TODO  */}
			
			func (this *QUuid) Version() Version {
				int /* TODO  */}
			
			func (this *QUuid) Data1() uint {
				return (uint)(C.QUuid_data1(this.h))
}
			
			func (this *QUuid) SetData1(data1 uint)  {
				 C.QUuid_setData1(this.h, (C.uint)(data1))
}
			
			func (this *QUuid) Data2() uint16 {
				return (uint16)(C.QUuid_data2(this.h))
}
			
			func (this *QUuid) SetData2(data2 uint16)  {
				 C.QUuid_setData2(this.h, (C.ushort)(data2))
}
			
			func (this *QUuid) Data3() uint16 {
				return (uint16)(C.QUuid_data3(this.h))
}
			
			func (this *QUuid) SetData3(data3 uint16)  {
				 C.QUuid_setData3(this.h, (C.ushort)(data3))
}
			
			func (this *QUuid) ToStringWithMode(mode StringFormat) string {
				var _ms C.struct_miqt_string =  C.QUuid_toStringWithMode(this.h, mode)
_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
C.free(unsafe.Pointer(_ms.data))
return _ret}
			
			func (this *QUuid) ToByteArrayWithMode(mode StringFormat) []byte {
				var _bytearray C.struct_miqt_string =  C.QUuid_toByteArrayWithMode(this.h, mode)
_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
C.free(unsafe.Pointer(_bytearray.data))
return _ret}
			
			func (this *QUuid) ToBytesWithOrder(order QSysInfo__Endian) Id128Bytes {
				int /* TODO  */}
			
			func QUuid_FromBytes2(bytes unsafe.Pointer, order QSysInfo__Endian) *QUuid {
				_goptr := newQUuid(C.QUuid_fromBytes2(bytes, (C.int)(order)))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			// Delete this object from C++ memory.
			func (this *QUuid) Delete() {
				C.QUuid_delete(this.h)
			}

			// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
			// from C++ memory once it is unreachable from Go memory.
			func (this *QUuid) GoGC() {
				runtime.SetFinalizer(this, func(this *QUuid) {
					this.Delete()
					runtime.KeepAlive(this.h)
				})
			}
			
		type QUuid__Id128Bytes struct {
			h *C.QUuid__Id128Bytes
		
		}
		
		func (this *QUuid__Id128Bytes) cPointer() *C.QUuid__Id128Bytes {
			if this == nil {
				return nil
			}
			return this.h
		}
		
		func (this *QUuid__Id128Bytes) UnsafePointer() unsafe.Pointer {
			if this == nil {
				return nil
			}
			return unsafe.Pointer(this.h)
		}
		
		
			// newQUuid__Id128Bytes constructs the type using only CGO pointers.
			func newQUuid__Id128Bytes(h *C.QUuid__Id128Bytes) *QUuid__Id128Bytes {
				if h == nil {
					return nil
				}
		
				return &QUuid__Id128Bytes{h: h}
			}

			// UnsafeNewQUuid__Id128Bytes constructs the type using only unsafe pointers.
			func UnsafeNewQUuid__Id128Bytes(h unsafe.Pointer) *QUuid__Id128Bytes {
				return newQUuid__Id128Bytes( (*C.QUuid__Id128Bytes)(h) )
			}

		
			// NewQUuid__Id128Bytes constructs a new QUuid::Id128Bytes object.
			func NewQUuid__Id128Bytes() *QUuid__Id128Bytes {
				
				return newQUuid__Id128Bytes(C.QUuid__Id128Bytes_new())
			}

			
			// NewQUuid__Id128Bytes2 constructs a new QUuid::Id128Bytes object.
			func NewQUuid__Id128Bytes2(param1 *Id128Bytes) *QUuid__Id128Bytes {
				
				return newQUuid__Id128Bytes(C.QUuid__Id128Bytes_new2(param1))
			}

			
			func (this *QUuid__Id128Bytes) Data16() quint16[8] {
				int /* TODO  */}
			
			func (this *QUuid__Id128Bytes) SetData16(data16 quint16[8])  {
				 C.QUuid__Id128Bytes_setData16(this.h, data16)
}
			
			func (this *QUuid__Id128Bytes) Data32() quint32[4] {
				int /* TODO  */}
			
			func (this *QUuid__Id128Bytes) SetData32(data32 quint32[4])  {
				 C.QUuid__Id128Bytes_setData32(this.h, data32)
}
			
			func (this *QUuid__Id128Bytes) Data64() quint64[2] {
				int /* TODO  */}
			
			func (this *QUuid__Id128Bytes) SetData64(data64 quint64[2])  {
				 C.QUuid__Id128Bytes_setData64(this.h, data64)
}
			
			func (this *QUuid__Id128Bytes) Data128() unsigned __int128[1] {
				int /* TODO  */}
			
			func (this *QUuid__Id128Bytes) SetData128(data128 unsigned __int128[1])  {
				 C.QUuid__Id128Bytes_setData128(this.h, data128)
}
			
			func (this *QUuid__Id128Bytes) ToQByteArrayView() *QByteArrayView {
				_goptr := newQByteArrayView(C.QUuid__Id128Bytes_ToQByteArrayView(this.h))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			// Delete this object from C++ memory.
			func (this *QUuid__Id128Bytes) Delete() {
				C.QUuid__Id128Bytes_delete(this.h)
			}

			// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
			// from C++ memory once it is unreachable from Go memory.
			func (this *QUuid__Id128Bytes) GoGC() {
				runtime.SetFinalizer(this, func(this *QUuid__Id128Bytes) {
					this.Delete()
					runtime.KeepAlive(this.h)
				})
			}
			