#pragma once
#ifndef MIQT_QT6_GEN_QUUID_H
#define MIQT_QT6_GEN_QUUID_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAnyStringView;
class QByteArrayView;
class QUuid;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QUuid__Id128Bytes)
typedef QUuid::Id128Bytes QUuid__Id128Bytes;
#else
class QUuid__Id128Bytes;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QByteArrayView QByteArrayView;
typedef struct QUuid QUuid;
typedef struct QUuid__Id128Bytes QUuid__Id128Bytes;
#endif

QUuid* QUuid_new();
QUuid* QUuid_new2(unsigned int l, unsigned short w1, unsigned short w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8);
QUuid* QUuid_new3(Id128Bytes id128);
QUuid* QUuid_new4(QAnyStringView* string);
QUuid* QUuid_new5(QUuid* param1);
QUuid* QUuid_new6(Id128Bytes id128, int order);
QUuid* QUuid_fromString(QAnyStringView* string);
struct miqt_string QUuid_toString(const QUuid* self);
struct miqt_string QUuid_toByteArray(const QUuid* self);
Id128Bytes QUuid_toBytes(const QUuid* self);
struct miqt_string QUuid_toRfc4122(const QUuid* self);
QUuid* QUuid_fromBytes(const void* bytes);
QUuid* QUuid_fromRfc4122(QByteArrayView* param1);
bool QUuid_isNull(const QUuid* self);
QUuid* QUuid_createUuid();
QUuid* QUuid_createUuidV5(QUuid* ns, QByteArrayView* baseData);
QUuid* QUuid_createUuidV3(QUuid* ns, QByteArrayView* baseData);
QUuid* QUuid_createUuidV7();
Variant QUuid_variant(const QUuid* self);
Version QUuid_version(const QUuid* self);
unsigned int QUuid_data1(const QUuid* self);
void QUuid_setData1(QUuid* self, unsigned int data1);
unsigned short QUuid_data2(const QUuid* self);
void QUuid_setData2(QUuid* self, unsigned short data2);
unsigned short QUuid_data3(const QUuid* self);
void QUuid_setData3(QUuid* self, unsigned short data3);
struct miqt_string QUuid_toStringWithMode(const QUuid* self, StringFormat mode);
struct miqt_string QUuid_toByteArrayWithMode(const QUuid* self, StringFormat mode);
Id128Bytes QUuid_toBytesWithOrder(const QUuid* self, int order);
QUuid* QUuid_fromBytes2(const void* bytes, int order);

void QUuid_delete(QUuid* self);

QUuid__Id128Bytes* QUuid__Id128Bytes_new();
QUuid__Id128Bytes* QUuid__Id128Bytes_new2(const Id128Bytes* param1);
quint16[8] QUuid__Id128Bytes_data16(const QUuid__Id128Bytes* self);
void QUuid__Id128Bytes_setData16(QUuid__Id128Bytes* self, quint16[8] data16);
quint32[4] QUuid__Id128Bytes_data32(const QUuid__Id128Bytes* self);
void QUuid__Id128Bytes_setData32(QUuid__Id128Bytes* self, quint32[4] data32);
quint64[2] QUuid__Id128Bytes_data64(const QUuid__Id128Bytes* self);
void QUuid__Id128Bytes_setData64(QUuid__Id128Bytes* self, quint64[2] data64);
unsigned __int128[1] QUuid__Id128Bytes_data128(const QUuid__Id128Bytes* self);
void QUuid__Id128Bytes_setData128(QUuid__Id128Bytes* self, unsigned __int128[1] data128);
QByteArrayView* QUuid__Id128Bytes_ToQByteArrayView(const QUuid__Id128Bytes* self);

void QUuid__Id128Bytes_delete(QUuid__Id128Bytes* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
