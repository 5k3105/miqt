package network

/*

#include "gen_qhttpheaders.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QHttpHeaders__WellKnownHeader int

const (
	QHttpHeaders__AIM                                 QHttpHeaders__WellKnownHeader = 0
	QHttpHeaders__Accept                              QHttpHeaders__WellKnownHeader = 1
	QHttpHeaders__AcceptAdditions                     QHttpHeaders__WellKnownHeader = 2
	QHttpHeaders__AcceptCH                            QHttpHeaders__WellKnownHeader = 3
	QHttpHeaders__AcceptDatetime                      QHttpHeaders__WellKnownHeader = 4
	QHttpHeaders__AcceptEncoding                      QHttpHeaders__WellKnownHeader = 5
	QHttpHeaders__AcceptFeatures                      QHttpHeaders__WellKnownHeader = 6
	QHttpHeaders__AcceptLanguage                      QHttpHeaders__WellKnownHeader = 7
	QHttpHeaders__AcceptPatch                         QHttpHeaders__WellKnownHeader = 8
	QHttpHeaders__AcceptPost                          QHttpHeaders__WellKnownHeader = 9
	QHttpHeaders__AcceptRanges                        QHttpHeaders__WellKnownHeader = 10
	QHttpHeaders__AcceptSignature                     QHttpHeaders__WellKnownHeader = 11
	QHttpHeaders__AccessControlAllowCredentials       QHttpHeaders__WellKnownHeader = 12
	QHttpHeaders__AccessControlAllowHeaders           QHttpHeaders__WellKnownHeader = 13
	QHttpHeaders__AccessControlAllowMethods           QHttpHeaders__WellKnownHeader = 14
	QHttpHeaders__AccessControlAllowOrigin            QHttpHeaders__WellKnownHeader = 15
	QHttpHeaders__AccessControlExposeHeaders          QHttpHeaders__WellKnownHeader = 16
	QHttpHeaders__AccessControlMaxAge                 QHttpHeaders__WellKnownHeader = 17
	QHttpHeaders__AccessControlRequestHeaders         QHttpHeaders__WellKnownHeader = 18
	QHttpHeaders__AccessControlRequestMethod          QHttpHeaders__WellKnownHeader = 19
	QHttpHeaders__Age                                 QHttpHeaders__WellKnownHeader = 20
	QHttpHeaders__Allow                               QHttpHeaders__WellKnownHeader = 21
	QHttpHeaders__ALPN                                QHttpHeaders__WellKnownHeader = 22
	QHttpHeaders__AltSvc                              QHttpHeaders__WellKnownHeader = 23
	QHttpHeaders__AltUsed                             QHttpHeaders__WellKnownHeader = 24
	QHttpHeaders__Alternates                          QHttpHeaders__WellKnownHeader = 25
	QHttpHeaders__ApplyToRedirectRef                  QHttpHeaders__WellKnownHeader = 26
	QHttpHeaders__AuthenticationControl               QHttpHeaders__WellKnownHeader = 27
	QHttpHeaders__AuthenticationInfo                  QHttpHeaders__WellKnownHeader = 28
	QHttpHeaders__Authorization                       QHttpHeaders__WellKnownHeader = 29
	QHttpHeaders__CacheControl                        QHttpHeaders__WellKnownHeader = 30
	QHttpHeaders__CacheStatus                         QHttpHeaders__WellKnownHeader = 31
	QHttpHeaders__CalManagedID                        QHttpHeaders__WellKnownHeader = 32
	QHttpHeaders__CalDAVTimezones                     QHttpHeaders__WellKnownHeader = 33
	QHttpHeaders__CapsuleProtocol                     QHttpHeaders__WellKnownHeader = 34
	QHttpHeaders__CDNCacheControl                     QHttpHeaders__WellKnownHeader = 35
	QHttpHeaders__CDNLoop                             QHttpHeaders__WellKnownHeader = 36
	QHttpHeaders__CertNotAfter                        QHttpHeaders__WellKnownHeader = 37
	QHttpHeaders__CertNotBefore                       QHttpHeaders__WellKnownHeader = 38
	QHttpHeaders__ClearSiteData                       QHttpHeaders__WellKnownHeader = 39
	QHttpHeaders__ClientCert                          QHttpHeaders__WellKnownHeader = 40
	QHttpHeaders__ClientCertChain                     QHttpHeaders__WellKnownHeader = 41
	QHttpHeaders__Close                               QHttpHeaders__WellKnownHeader = 42
	QHttpHeaders__Connection                          QHttpHeaders__WellKnownHeader = 43
	QHttpHeaders__ContentDigest                       QHttpHeaders__WellKnownHeader = 44
	QHttpHeaders__ContentDisposition                  QHttpHeaders__WellKnownHeader = 45
	QHttpHeaders__ContentEncoding                     QHttpHeaders__WellKnownHeader = 46
	QHttpHeaders__ContentID                           QHttpHeaders__WellKnownHeader = 47
	QHttpHeaders__ContentLanguage                     QHttpHeaders__WellKnownHeader = 48
	QHttpHeaders__ContentLength                       QHttpHeaders__WellKnownHeader = 49
	QHttpHeaders__ContentLocation                     QHttpHeaders__WellKnownHeader = 50
	QHttpHeaders__ContentRange                        QHttpHeaders__WellKnownHeader = 51
	QHttpHeaders__ContentSecurityPolicy               QHttpHeaders__WellKnownHeader = 52
	QHttpHeaders__ContentSecurityPolicyReportOnly     QHttpHeaders__WellKnownHeader = 53
	QHttpHeaders__ContentType                         QHttpHeaders__WellKnownHeader = 54
	QHttpHeaders__Cookie                              QHttpHeaders__WellKnownHeader = 55
	QHttpHeaders__CrossOriginEmbedderPolicy           QHttpHeaders__WellKnownHeader = 56
	QHttpHeaders__CrossOriginEmbedderPolicyReportOnly QHttpHeaders__WellKnownHeader = 57
	QHttpHeaders__CrossOriginOpenerPolicy             QHttpHeaders__WellKnownHeader = 58
	QHttpHeaders__CrossOriginOpenerPolicyReportOnly   QHttpHeaders__WellKnownHeader = 59
	QHttpHeaders__CrossOriginResourcePolicy           QHttpHeaders__WellKnownHeader = 60
	QHttpHeaders__DASL                                QHttpHeaders__WellKnownHeader = 61
	QHttpHeaders__Date                                QHttpHeaders__WellKnownHeader = 62
	QHttpHeaders__DAV                                 QHttpHeaders__WellKnownHeader = 63
	QHttpHeaders__DeltaBase                           QHttpHeaders__WellKnownHeader = 64
	QHttpHeaders__Depth                               QHttpHeaders__WellKnownHeader = 65
	QHttpHeaders__Destination                         QHttpHeaders__WellKnownHeader = 66
	QHttpHeaders__DifferentialID                      QHttpHeaders__WellKnownHeader = 67
	QHttpHeaders__DPoP                                QHttpHeaders__WellKnownHeader = 68
	QHttpHeaders__DPoPNonce                           QHttpHeaders__WellKnownHeader = 69
	QHttpHeaders__EarlyData                           QHttpHeaders__WellKnownHeader = 70
	QHttpHeaders__ETag                                QHttpHeaders__WellKnownHeader = 71
	QHttpHeaders__Expect                              QHttpHeaders__WellKnownHeader = 72
	QHttpHeaders__ExpectCT                            QHttpHeaders__WellKnownHeader = 73
	QHttpHeaders__Expires                             QHttpHeaders__WellKnownHeader = 74
	QHttpHeaders__Forwarded                           QHttpHeaders__WellKnownHeader = 75
	QHttpHeaders__From                                QHttpHeaders__WellKnownHeader = 76
	QHttpHeaders__Hobareg                             QHttpHeaders__WellKnownHeader = 77
	QHttpHeaders__Host                                QHttpHeaders__WellKnownHeader = 78
	QHttpHeaders__If                                  QHttpHeaders__WellKnownHeader = 79
	QHttpHeaders__IfMatch                             QHttpHeaders__WellKnownHeader = 80
	QHttpHeaders__IfModifiedSince                     QHttpHeaders__WellKnownHeader = 81
	QHttpHeaders__IfNoneMatch                         QHttpHeaders__WellKnownHeader = 82
	QHttpHeaders__IfRange                             QHttpHeaders__WellKnownHeader = 83
	QHttpHeaders__IfScheduleTagMatch                  QHttpHeaders__WellKnownHeader = 84
	QHttpHeaders__IfUnmodifiedSince                   QHttpHeaders__WellKnownHeader = 85
	QHttpHeaders__IM                                  QHttpHeaders__WellKnownHeader = 86
	QHttpHeaders__IncludeReferredTokenBindingID       QHttpHeaders__WellKnownHeader = 87
	QHttpHeaders__KeepAlive                           QHttpHeaders__WellKnownHeader = 88
	QHttpHeaders__Label                               QHttpHeaders__WellKnownHeader = 89
	QHttpHeaders__LastEventID                         QHttpHeaders__WellKnownHeader = 90
	QHttpHeaders__LastModified                        QHttpHeaders__WellKnownHeader = 91
	QHttpHeaders__Link                                QHttpHeaders__WellKnownHeader = 92
	QHttpHeaders__Location                            QHttpHeaders__WellKnownHeader = 93
	QHttpHeaders__LockToken                           QHttpHeaders__WellKnownHeader = 94
	QHttpHeaders__MaxForwards                         QHttpHeaders__WellKnownHeader = 95
	QHttpHeaders__MementoDatetime                     QHttpHeaders__WellKnownHeader = 96
	QHttpHeaders__Meter                               QHttpHeaders__WellKnownHeader = 97
	QHttpHeaders__MIMEVersion                         QHttpHeaders__WellKnownHeader = 98
	QHttpHeaders__Negotiate                           QHttpHeaders__WellKnownHeader = 99
	QHttpHeaders__NEL                                 QHttpHeaders__WellKnownHeader = 100
	QHttpHeaders__ODataEntityId                       QHttpHeaders__WellKnownHeader = 101
	QHttpHeaders__ODataIsolation                      QHttpHeaders__WellKnownHeader = 102
	QHttpHeaders__ODataMaxVersion                     QHttpHeaders__WellKnownHeader = 103
	QHttpHeaders__ODataVersion                        QHttpHeaders__WellKnownHeader = 104
	QHttpHeaders__OptionalWWWAuthenticate             QHttpHeaders__WellKnownHeader = 105
	QHttpHeaders__OrderingType                        QHttpHeaders__WellKnownHeader = 106
	QHttpHeaders__Origin                              QHttpHeaders__WellKnownHeader = 107
	QHttpHeaders__OriginAgentCluster                  QHttpHeaders__WellKnownHeader = 108
	QHttpHeaders__OSCORE                              QHttpHeaders__WellKnownHeader = 109
	QHttpHeaders__OSLCCoreVersion                     QHttpHeaders__WellKnownHeader = 110
	QHttpHeaders__Overwrite                           QHttpHeaders__WellKnownHeader = 111
	QHttpHeaders__PingFrom                            QHttpHeaders__WellKnownHeader = 112
	QHttpHeaders__PingTo                              QHttpHeaders__WellKnownHeader = 113
	QHttpHeaders__Position                            QHttpHeaders__WellKnownHeader = 114
	QHttpHeaders__Prefer                              QHttpHeaders__WellKnownHeader = 115
	QHttpHeaders__PreferenceApplied                   QHttpHeaders__WellKnownHeader = 116
	QHttpHeaders__Priority                            QHttpHeaders__WellKnownHeader = 117
	QHttpHeaders__ProxyAuthenticate                   QHttpHeaders__WellKnownHeader = 118
	QHttpHeaders__ProxyAuthenticationInfo             QHttpHeaders__WellKnownHeader = 119
	QHttpHeaders__ProxyAuthorization                  QHttpHeaders__WellKnownHeader = 120
	QHttpHeaders__ProxyStatus                         QHttpHeaders__WellKnownHeader = 121
	QHttpHeaders__PublicKeyPins                       QHttpHeaders__WellKnownHeader = 122
	QHttpHeaders__PublicKeyPinsReportOnly             QHttpHeaders__WellKnownHeader = 123
	QHttpHeaders__Range                               QHttpHeaders__WellKnownHeader = 124
	QHttpHeaders__RedirectRef                         QHttpHeaders__WellKnownHeader = 125
	QHttpHeaders__Referer                             QHttpHeaders__WellKnownHeader = 126
	QHttpHeaders__Refresh                             QHttpHeaders__WellKnownHeader = 127
	QHttpHeaders__ReplayNonce                         QHttpHeaders__WellKnownHeader = 128
	QHttpHeaders__ReprDigest                          QHttpHeaders__WellKnownHeader = 129
	QHttpHeaders__RetryAfter                          QHttpHeaders__WellKnownHeader = 130
	QHttpHeaders__ScheduleReply                       QHttpHeaders__WellKnownHeader = 131
	QHttpHeaders__ScheduleTag                         QHttpHeaders__WellKnownHeader = 132
	QHttpHeaders__SecPurpose                          QHttpHeaders__WellKnownHeader = 133
	QHttpHeaders__SecTokenBinding                     QHttpHeaders__WellKnownHeader = 134
	QHttpHeaders__SecWebSocketAccept                  QHttpHeaders__WellKnownHeader = 135
	QHttpHeaders__SecWebSocketExtensions              QHttpHeaders__WellKnownHeader = 136
	QHttpHeaders__SecWebSocketKey                     QHttpHeaders__WellKnownHeader = 137
	QHttpHeaders__SecWebSocketProtocol                QHttpHeaders__WellKnownHeader = 138
	QHttpHeaders__SecWebSocketVersion                 QHttpHeaders__WellKnownHeader = 139
	QHttpHeaders__Server                              QHttpHeaders__WellKnownHeader = 140
	QHttpHeaders__ServerTiming                        QHttpHeaders__WellKnownHeader = 141
	QHttpHeaders__SetCookie                           QHttpHeaders__WellKnownHeader = 142
	QHttpHeaders__Signature                           QHttpHeaders__WellKnownHeader = 143
	QHttpHeaders__SignatureInput                      QHttpHeaders__WellKnownHeader = 144
	QHttpHeaders__SLUG                                QHttpHeaders__WellKnownHeader = 145
	QHttpHeaders__SoapAction                          QHttpHeaders__WellKnownHeader = 146
	QHttpHeaders__StatusURI                           QHttpHeaders__WellKnownHeader = 147
	QHttpHeaders__StrictTransportSecurity             QHttpHeaders__WellKnownHeader = 148
	QHttpHeaders__Sunset                              QHttpHeaders__WellKnownHeader = 149
	QHttpHeaders__SurrogateCapability                 QHttpHeaders__WellKnownHeader = 150
	QHttpHeaders__SurrogateControl                    QHttpHeaders__WellKnownHeader = 151
	QHttpHeaders__TCN                                 QHttpHeaders__WellKnownHeader = 152
	QHttpHeaders__TE                                  QHttpHeaders__WellKnownHeader = 153
	QHttpHeaders__Timeout                             QHttpHeaders__WellKnownHeader = 154
	QHttpHeaders__Topic                               QHttpHeaders__WellKnownHeader = 155
	QHttpHeaders__Traceparent                         QHttpHeaders__WellKnownHeader = 156
	QHttpHeaders__Tracestate                          QHttpHeaders__WellKnownHeader = 157
	QHttpHeaders__Trailer                             QHttpHeaders__WellKnownHeader = 158
	QHttpHeaders__TransferEncoding                    QHttpHeaders__WellKnownHeader = 159
	QHttpHeaders__TTL                                 QHttpHeaders__WellKnownHeader = 160
	QHttpHeaders__Upgrade                             QHttpHeaders__WellKnownHeader = 161
	QHttpHeaders__Urgency                             QHttpHeaders__WellKnownHeader = 162
	QHttpHeaders__UserAgent                           QHttpHeaders__WellKnownHeader = 163
	QHttpHeaders__VariantVary                         QHttpHeaders__WellKnownHeader = 164
	QHttpHeaders__Vary                                QHttpHeaders__WellKnownHeader = 165
	QHttpHeaders__Via                                 QHttpHeaders__WellKnownHeader = 166
	QHttpHeaders__WantContentDigest                   QHttpHeaders__WellKnownHeader = 167
	QHttpHeaders__WantReprDigest                      QHttpHeaders__WellKnownHeader = 168
	QHttpHeaders__WWWAuthenticate                     QHttpHeaders__WellKnownHeader = 169
	QHttpHeaders__XContentTypeOptions                 QHttpHeaders__WellKnownHeader = 170
	QHttpHeaders__XFrameOptions                       QHttpHeaders__WellKnownHeader = 171
	QHttpHeaders__AcceptCharset                       QHttpHeaders__WellKnownHeader = 172
	QHttpHeaders__CPEPInfo                            QHttpHeaders__WellKnownHeader = 173
	QHttpHeaders__Pragma                              QHttpHeaders__WellKnownHeader = 174
	QHttpHeaders__ProtocolInfo                        QHttpHeaders__WellKnownHeader = 175
	QHttpHeaders__ProtocolQuery                       QHttpHeaders__WellKnownHeader = 176
)

type QHttpHeaders struct {
	h *C.QHttpHeaders
}

func (this *QHttpHeaders) cPointer() *C.QHttpHeaders {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHttpHeaders) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHttpHeaders constructs the type using only CGO pointers.
func newQHttpHeaders(h *C.QHttpHeaders) *QHttpHeaders {
	if h == nil {
		return nil
	}

	return &QHttpHeaders{h: h}
}

// UnsafeNewQHttpHeaders constructs the type using only unsafe pointers.
func UnsafeNewQHttpHeaders(h unsafe.Pointer) *QHttpHeaders {
	return newQHttpHeaders((*C.QHttpHeaders)(h))
}

// NewQHttpHeaders constructs a new QHttpHeaders object.
func NewQHttpHeaders() *QHttpHeaders {

	return newQHttpHeaders(C.QHttpHeaders_new())
}

// NewQHttpHeaders2 constructs a new QHttpHeaders object.
func NewQHttpHeaders2(other *QHttpHeaders) *QHttpHeaders {

	return newQHttpHeaders(C.QHttpHeaders_new2(other.cPointer()))
}

func (this *QHttpHeaders) OperatorAssign(other *QHttpHeaders) {
	C.QHttpHeaders_operatorAssign(this.h, other.cPointer())
}

func (this *QHttpHeaders) Swap(other *QHttpHeaders) {
	C.QHttpHeaders_swap(this.h, other.cPointer())
}

func (this *QHttpHeaders) Append(name qt6.QAnyStringView, value qt6.QAnyStringView) bool {
	return (bool)(C.QHttpHeaders_append(this.h, (*C.QAnyStringView)(name.UnsafePointer()), (*C.QAnyStringView)(value.UnsafePointer())))
}

func (this *QHttpHeaders) Append2(name WellKnownHeader, value qt6.QAnyStringView) bool {
	return (bool)(C.QHttpHeaders_append2(this.h, name, (*C.QAnyStringView)(value.UnsafePointer())))
}

func (this *QHttpHeaders) Insert(i int64, name qt6.QAnyStringView, value qt6.QAnyStringView) bool {
	return (bool)(C.QHttpHeaders_insert(this.h, (C.ptrdiff_t)(i), (*C.QAnyStringView)(name.UnsafePointer()), (*C.QAnyStringView)(value.UnsafePointer())))
}

func (this *QHttpHeaders) Insert2(i int64, name WellKnownHeader, value qt6.QAnyStringView) bool {
	return (bool)(C.QHttpHeaders_insert2(this.h, (C.ptrdiff_t)(i), name, (*C.QAnyStringView)(value.UnsafePointer())))
}

func (this *QHttpHeaders) Replace(i int64, name qt6.QAnyStringView, newValue qt6.QAnyStringView) bool {
	return (bool)(C.QHttpHeaders_replace(this.h, (C.ptrdiff_t)(i), (*C.QAnyStringView)(name.UnsafePointer()), (*C.QAnyStringView)(newValue.UnsafePointer())))
}

func (this *QHttpHeaders) Replace2(i int64, name WellKnownHeader, newValue qt6.QAnyStringView) bool {
	return (bool)(C.QHttpHeaders_replace2(this.h, (C.ptrdiff_t)(i), name, (*C.QAnyStringView)(newValue.UnsafePointer())))
}

func (this *QHttpHeaders) ReplaceOrAppend(name qt6.QAnyStringView, newValue qt6.QAnyStringView) bool {
	return (bool)(C.QHttpHeaders_replaceOrAppend(this.h, (*C.QAnyStringView)(name.UnsafePointer()), (*C.QAnyStringView)(newValue.UnsafePointer())))
}

func (this *QHttpHeaders) ReplaceOrAppend2(name WellKnownHeader, newValue qt6.QAnyStringView) bool {
	return (bool)(C.QHttpHeaders_replaceOrAppend2(this.h, name, (*C.QAnyStringView)(newValue.UnsafePointer())))
}

func (this *QHttpHeaders) Contains(name qt6.QAnyStringView) bool {
	return (bool)(C.QHttpHeaders_contains(this.h, (*C.QAnyStringView)(name.UnsafePointer())))
}

func (this *QHttpHeaders) ContainsWithName(name WellKnownHeader) bool {
	return (bool)(C.QHttpHeaders_containsWithName(this.h, name))
}

func (this *QHttpHeaders) Clear() {
	C.QHttpHeaders_clear(this.h)
}

func (this *QHttpHeaders) RemoveAll(name qt6.QAnyStringView) {
	C.QHttpHeaders_removeAll(this.h, (*C.QAnyStringView)(name.UnsafePointer()))
}

func (this *QHttpHeaders) RemoveAllWithName(name WellKnownHeader) {
	C.QHttpHeaders_removeAllWithName(this.h, name)
}

func (this *QHttpHeaders) RemoveAt(i int64) {
	C.QHttpHeaders_removeAt(this.h, (C.ptrdiff_t)(i))
}

func (this *QHttpHeaders) Value(name qt6.QAnyStringView) *qt6.QByteArrayView {
	_goptr := qt6.UnsafeNewQByteArrayView(unsafe.Pointer(C.QHttpHeaders_value(this.h, (*C.QAnyStringView)(name.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHttpHeaders) ValueWithName(name WellKnownHeader) *qt6.QByteArrayView {
	_goptr := qt6.UnsafeNewQByteArrayView(unsafe.Pointer(C.QHttpHeaders_valueWithName(this.h, name)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHttpHeaders) Values(name qt6.QAnyStringView) [][]byte {
	var _ma C.struct_miqt_array = C.QHttpHeaders_values(this.h, (*C.QAnyStringView)(name.UnsafePointer()))
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QHttpHeaders) ValuesWithName(name WellKnownHeader) [][]byte {
	var _ma C.struct_miqt_array = C.QHttpHeaders_valuesWithName(this.h, name)
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QHttpHeaders) ValueAt(i int64) *qt6.QByteArrayView {
	_goptr := qt6.UnsafeNewQByteArrayView(unsafe.Pointer(C.QHttpHeaders_valueAt(this.h, (C.ptrdiff_t)(i))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHttpHeaders) CombinedValue(name qt6.QAnyStringView) []byte {
	var _bytearray C.struct_miqt_string = C.QHttpHeaders_combinedValue(this.h, (*C.QAnyStringView)(name.UnsafePointer()))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QHttpHeaders) CombinedValueWithName(name WellKnownHeader) []byte {
	var _bytearray C.struct_miqt_string = C.QHttpHeaders_combinedValueWithName(this.h, name)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QHttpHeaders) SetDateTimeValue(name qt6.QAnyStringView, dateTime *qt6.QDateTime) {
	C.QHttpHeaders_setDateTimeValue(this.h, (*C.QAnyStringView)(name.UnsafePointer()), (*C.QDateTime)(dateTime.UnsafePointer()))
}

func (this *QHttpHeaders) SetDateTimeValue2(name WellKnownHeader, dateTime *qt6.QDateTime) {
	C.QHttpHeaders_setDateTimeValue2(this.h, name, (*C.QDateTime)(dateTime.UnsafePointer()))
}

func (this *QHttpHeaders) Size() int64 {
	return (int64)(C.QHttpHeaders_size(this.h))
}

func (this *QHttpHeaders) Reserve(size int64) {
	C.QHttpHeaders_reserve(this.h, (C.ptrdiff_t)(size))
}

func (this *QHttpHeaders) IsEmpty() bool {
	return (bool)(C.QHttpHeaders_isEmpty(this.h))
}

func QHttpHeaders_WellKnownHeaderName(name WellKnownHeader) *qt6.QByteArrayView {
	_goptr := qt6.UnsafeNewQByteArrayView(unsafe.Pointer(C.QHttpHeaders_wellKnownHeaderName(name)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHttpHeaders) Value2(name qt6.QAnyStringView, defaultValue qt6.QByteArrayView) *qt6.QByteArrayView {
	_goptr := qt6.UnsafeNewQByteArrayView(unsafe.Pointer(C.QHttpHeaders_value2(this.h, (*C.QAnyStringView)(name.UnsafePointer()), (*C.QByteArrayView)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHttpHeaders) Value3(name WellKnownHeader, defaultValue qt6.QByteArrayView) *qt6.QByteArrayView {
	_goptr := qt6.UnsafeNewQByteArrayView(unsafe.Pointer(C.QHttpHeaders_value3(this.h, name, (*C.QByteArrayView)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QHttpHeaders) Delete() {
	C.QHttpHeaders_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHttpHeaders) GoGC() {
	runtime.SetFinalizer(this, func(this *QHttpHeaders) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
