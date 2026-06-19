package qt6

/*

#include "gen_qtmocconstants.h"
#include <stdlib.h>

*/
import "C"

type QtMocConstants__ int

const (
	QtMocConstants__OutputRevision QtMocConstants__ = 13
)

type QtMocConstants__PropertyFlags uint

const (
	QtMocConstants__Invalid    QtMocConstants__PropertyFlags = 0
	QtMocConstants__Readable   QtMocConstants__PropertyFlags = 1
	QtMocConstants__Writable   QtMocConstants__PropertyFlags = 2
	QtMocConstants__Resettable QtMocConstants__PropertyFlags = 4
	QtMocConstants__EnumOrFlag QtMocConstants__PropertyFlags = 8
	QtMocConstants__Alias      QtMocConstants__PropertyFlags = 16
	QtMocConstants__Virtual    QtMocConstants__PropertyFlags = 32
	QtMocConstants__Override   QtMocConstants__PropertyFlags = 64
	QtMocConstants__StdCppSet  QtMocConstants__PropertyFlags = 256
	QtMocConstants__Constant   QtMocConstants__PropertyFlags = 1024
	QtMocConstants__Final      QtMocConstants__PropertyFlags = 2048
	QtMocConstants__Designable QtMocConstants__PropertyFlags = 4096
	QtMocConstants__Scriptable QtMocConstants__PropertyFlags = 16384
	QtMocConstants__Stored     QtMocConstants__PropertyFlags = 65536
	QtMocConstants__User       QtMocConstants__PropertyFlags = 1048576
	QtMocConstants__Required   QtMocConstants__PropertyFlags = 16777216
	QtMocConstants__Bindable   QtMocConstants__PropertyFlags = 33554432
)

type QtMocConstants__MethodFlags uint

const (
	QtMocConstants__AccessPrivate       QtMocConstants__MethodFlags = 0
	QtMocConstants__AccessProtected     QtMocConstants__MethodFlags = 1
	QtMocConstants__AccessPublic        QtMocConstants__MethodFlags = 2
	QtMocConstants__AccessMask          QtMocConstants__MethodFlags = 3
	QtMocConstants__MethodMethod        QtMocConstants__MethodFlags = 0
	QtMocConstants__MethodSignal        QtMocConstants__MethodFlags = 4
	QtMocConstants__MethodSlot          QtMocConstants__MethodFlags = 8
	QtMocConstants__MethodConstructor   QtMocConstants__MethodFlags = 12
	QtMocConstants__MethodTypeMask      QtMocConstants__MethodFlags = 12
	QtMocConstants__MethodCompatibility QtMocConstants__MethodFlags = 16
	QtMocConstants__MethodCloned        QtMocConstants__MethodFlags = 32
	QtMocConstants__MethodScriptable    QtMocConstants__MethodFlags = 64
	QtMocConstants__MethodRevisioned    QtMocConstants__MethodFlags = 128
	QtMocConstants__MethodIsConst       QtMocConstants__MethodFlags = 256
)

type QtMocConstants__MetaObjectFlag uint

const (
	QtMocConstants__DynamicMetaObject              QtMocConstants__MetaObjectFlag = 1
	QtMocConstants__RequiresVariantMetaObject      QtMocConstants__MetaObjectFlag = 2
	QtMocConstants__PropertyAccessInStaticMetaCall QtMocConstants__MetaObjectFlag = 4
	QtMocConstants__AllocatedMetaObject            QtMocConstants__MetaObjectFlag = 8
)

type QtMocConstants__MetaDataFlags uint

const (
	QtMocConstants__TypeNameIndexMask  QtMocConstants__MetaDataFlags = 2147483647
	QtMocConstants__IsUnresolvedSignal QtMocConstants__MetaDataFlags = 1879048192
)

type QtMocConstants__EnumFlags uint

const (
	QtMocConstants__EnumIsFlag   QtMocConstants__EnumFlags = 1
	QtMocConstants__EnumIsScoped QtMocConstants__EnumFlags = 2
	QtMocConstants__EnumIs64Bit  QtMocConstants__EnumFlags = 64
)
