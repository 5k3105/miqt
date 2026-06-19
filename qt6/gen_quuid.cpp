#include <QAnyStringView>
#include <QByteArray>
#include <QByteArrayView>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUuid>
#define WORKAROUND_INNER_CLASS_DEFINITION_QUuid__Id128Bytes
#include <quuid.h>
#include "gen_quuid.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QUuid* QUuid_new() {
	return new (std::nothrow) QUuid();
}

QUuid* QUuid_new2(unsigned int l, unsigned short w1, unsigned short w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8) {
	return new (std::nothrow) QUuid(static_cast<uint>(l), static_cast<ushort>(w1), static_cast<ushort>(w2), static_cast<uchar>(b1), static_cast<uchar>(b2), static_cast<uchar>(b3), static_cast<uchar>(b4), static_cast<uchar>(b5), static_cast<uchar>(b6), static_cast<uchar>(b7), static_cast<uchar>(b8));
}

QUuid* QUuid_new3(Id128Bytes id128) {
	return new (std::nothrow) QUuid(id128);
}

QUuid* QUuid_new4(QAnyStringView* string) {
	return new (std::nothrow) QUuid(*string);
}

QUuid* QUuid_new5(QUuid* param1) {
	return new (std::nothrow) QUuid(*param1);
}

QUuid* QUuid_new6(Id128Bytes id128, int order) {
	return new (std::nothrow) QUuid(id128, static_cast<QSysInfo::Endian>(order));
}

QUuid* QUuid_fromString(QAnyStringView* string) {
	return new QUuid(QUuid::fromString(*string));
}

struct miqt_string QUuid_toString(const QUuid* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUuid_toByteArray(const QUuid* self) {
	QByteArray _qb = self->toByteArray();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

Id128Bytes QUuid_toBytes(const QUuid* self) {
	return self->toBytes();
}

struct miqt_string QUuid_toRfc4122(const QUuid* self) {
	QByteArray _qb = self->toRfc4122();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QUuid* QUuid_fromBytes(const void* bytes) {
	return new QUuid(QUuid::fromBytes(bytes));
}

QUuid* QUuid_fromRfc4122(QByteArrayView* param1) {
	return new QUuid(QUuid::fromRfc4122(*param1));
}

bool QUuid_isNull(const QUuid* self) {
	return self->isNull();
}

QUuid* QUuid_createUuid() {
	return new QUuid(QUuid::createUuid());
}

QUuid* QUuid_createUuidV5(QUuid* ns, QByteArrayView* baseData) {
	return new QUuid(QUuid::createUuidV5(*ns, *baseData));
}

QUuid* QUuid_createUuidV3(QUuid* ns, QByteArrayView* baseData) {
	return new QUuid(QUuid::createUuidV3(*ns, *baseData));
}

QUuid* QUuid_createUuidV7() {
	return new QUuid(QUuid::createUuidV7());
}

Variant QUuid_variant(const QUuid* self) {
	return self->variant();
}

Version QUuid_version(const QUuid* self) {
	return self->version();
}

unsigned int QUuid_data1(const QUuid* self) {
	uint data1_ret = self->data1;
	return static_cast<unsigned int>(data1_ret);
}

void QUuid_setData1(QUuid* self, unsigned int data1) {
	self->data1 = static_cast<uint>(data1);
}

unsigned short QUuid_data2(const QUuid* self) {
	ushort data2_ret = self->data2;
	return static_cast<unsigned short>(data2_ret);
}

void QUuid_setData2(QUuid* self, unsigned short data2) {
	self->data2 = static_cast<ushort>(data2);
}

unsigned short QUuid_data3(const QUuid* self) {
	ushort data3_ret = self->data3;
	return static_cast<unsigned short>(data3_ret);
}

void QUuid_setData3(QUuid* self, unsigned short data3) {
	self->data3 = static_cast<ushort>(data3);
}

struct miqt_string QUuid_toStringWithMode(const QUuid* self, StringFormat mode) {
	QString _ret = self->toString(mode);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUuid_toByteArrayWithMode(const QUuid* self, StringFormat mode) {
	QByteArray _qb = self->toByteArray(mode);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

Id128Bytes QUuid_toBytesWithOrder(const QUuid* self, int order) {
	return self->toBytes(static_cast<QSysInfo::Endian>(order));
}

QUuid* QUuid_fromBytes2(const void* bytes, int order) {
	return new QUuid(QUuid::fromBytes(bytes, static_cast<QSysInfo::Endian>(order)));
}

void QUuid_delete(QUuid* self) {
	delete self;
}

QUuid__Id128Bytes* QUuid__Id128Bytes_new() {
	return new (std::nothrow) QUuid::Id128Bytes();
}

QUuid__Id128Bytes* QUuid__Id128Bytes_new2(const Id128Bytes* param1) {
	return new (std::nothrow) QUuid::Id128Bytes(*param1);
}

quint16[8] QUuid__Id128Bytes_data16(const QUuid__Id128Bytes* self) {
	return self->data16;
}

void QUuid__Id128Bytes_setData16(QUuid__Id128Bytes* self, quint16[8] data16) {
	self->data16 = data16;
}

quint32[4] QUuid__Id128Bytes_data32(const QUuid__Id128Bytes* self) {
	return self->data32;
}

void QUuid__Id128Bytes_setData32(QUuid__Id128Bytes* self, quint32[4] data32) {
	self->data32 = data32;
}

quint64[2] QUuid__Id128Bytes_data64(const QUuid__Id128Bytes* self) {
	return self->data64;
}

void QUuid__Id128Bytes_setData64(QUuid__Id128Bytes* self, quint64[2] data64) {
	self->data64 = data64;
}

unsigned __int128[1] QUuid__Id128Bytes_data128(const QUuid__Id128Bytes* self) {
	return self->data128;
}

void QUuid__Id128Bytes_setData128(QUuid__Id128Bytes* self, unsigned __int128[1] data128) {
	self->data128 = data128;
}

QByteArrayView* QUuid__Id128Bytes_ToQByteArrayView(const QUuid__Id128Bytes* self) {
	return new QByteArrayView(self->operator QByteArrayView());
}

void QUuid__Id128Bytes_delete(QUuid__Id128Bytes* self) {
	delete self;
}

