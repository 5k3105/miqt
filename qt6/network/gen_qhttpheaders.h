#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QHTTPHEADERS_H
#define MIQT_QT6_NETWORK_GEN_QHTTPHEADERS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAnyStringView;
class QByteArrayView;
class QDateTime;
class QHttpHeaders;
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QByteArrayView QByteArrayView;
typedef struct QDateTime QDateTime;
typedef struct QHttpHeaders QHttpHeaders;
#endif

QHttpHeaders* QHttpHeaders_new();
QHttpHeaders* QHttpHeaders_new2(QHttpHeaders* other);
void QHttpHeaders_operatorAssign(QHttpHeaders* self, QHttpHeaders* other);
void QHttpHeaders_swap(QHttpHeaders* self, QHttpHeaders* other);
bool QHttpHeaders_append(QHttpHeaders* self, QAnyStringView* name, QAnyStringView* value);
bool QHttpHeaders_append2(QHttpHeaders* self, WellKnownHeader name, QAnyStringView* value);
bool QHttpHeaders_insert(QHttpHeaders* self, ptrdiff_t i, QAnyStringView* name, QAnyStringView* value);
bool QHttpHeaders_insert2(QHttpHeaders* self, ptrdiff_t i, WellKnownHeader name, QAnyStringView* value);
bool QHttpHeaders_replace(QHttpHeaders* self, ptrdiff_t i, QAnyStringView* name, QAnyStringView* newValue);
bool QHttpHeaders_replace2(QHttpHeaders* self, ptrdiff_t i, WellKnownHeader name, QAnyStringView* newValue);
bool QHttpHeaders_replaceOrAppend(QHttpHeaders* self, QAnyStringView* name, QAnyStringView* newValue);
bool QHttpHeaders_replaceOrAppend2(QHttpHeaders* self, WellKnownHeader name, QAnyStringView* newValue);
bool QHttpHeaders_contains(const QHttpHeaders* self, QAnyStringView* name);
bool QHttpHeaders_containsWithName(const QHttpHeaders* self, WellKnownHeader name);
void QHttpHeaders_clear(QHttpHeaders* self);
void QHttpHeaders_removeAll(QHttpHeaders* self, QAnyStringView* name);
void QHttpHeaders_removeAllWithName(QHttpHeaders* self, WellKnownHeader name);
void QHttpHeaders_removeAt(QHttpHeaders* self, ptrdiff_t i);
QByteArrayView* QHttpHeaders_value(const QHttpHeaders* self, QAnyStringView* name);
QByteArrayView* QHttpHeaders_valueWithName(const QHttpHeaders* self, WellKnownHeader name);
struct miqt_array /* of struct miqt_string */  QHttpHeaders_values(const QHttpHeaders* self, QAnyStringView* name);
struct miqt_array /* of struct miqt_string */  QHttpHeaders_valuesWithName(const QHttpHeaders* self, WellKnownHeader name);
QByteArrayView* QHttpHeaders_valueAt(const QHttpHeaders* self, ptrdiff_t i);
struct miqt_string QHttpHeaders_combinedValue(const QHttpHeaders* self, QAnyStringView* name);
struct miqt_string QHttpHeaders_combinedValueWithName(const QHttpHeaders* self, WellKnownHeader name);
void QHttpHeaders_setDateTimeValue(QHttpHeaders* self, QAnyStringView* name, QDateTime* dateTime);
void QHttpHeaders_setDateTimeValue2(QHttpHeaders* self, WellKnownHeader name, QDateTime* dateTime);
ptrdiff_t QHttpHeaders_size(const QHttpHeaders* self);
void QHttpHeaders_reserve(QHttpHeaders* self, ptrdiff_t size);
bool QHttpHeaders_isEmpty(const QHttpHeaders* self);
QByteArrayView* QHttpHeaders_wellKnownHeaderName(WellKnownHeader name);
QByteArrayView* QHttpHeaders_value2(const QHttpHeaders* self, QAnyStringView* name, QByteArrayView* defaultValue);
QByteArrayView* QHttpHeaders_value3(const QHttpHeaders* self, WellKnownHeader name, QByteArrayView* defaultValue);

void QHttpHeaders_delete(QHttpHeaders* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
