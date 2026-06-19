#pragma once
#ifndef MIQT_QT6_GEN_QTIPCCOMMON_H
#define MIQT_QT6_GEN_QTIPCCOMMON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QNativeIpcKey;
#else
typedef struct QNativeIpcKey QNativeIpcKey;
#endif

QNativeIpcKey* QNativeIpcKey_new();
QNativeIpcKey* QNativeIpcKey_new2(Type type);
QNativeIpcKey* QNativeIpcKey_new3(struct miqt_string k);
QNativeIpcKey* QNativeIpcKey_new4(QNativeIpcKey* other);
QNativeIpcKey* QNativeIpcKey_new5(struct miqt_string k, Type type);
Type QNativeIpcKey_legacyDefaultTypeForOs();
void QNativeIpcKey_operatorAssign(QNativeIpcKey* self, QNativeIpcKey* other);
void QNativeIpcKey_swap(QNativeIpcKey* self, QNativeIpcKey* other);
bool QNativeIpcKey_isEmpty(const QNativeIpcKey* self);
bool QNativeIpcKey_isValid(const QNativeIpcKey* self);
Type QNativeIpcKey_type(const QNativeIpcKey* self);
void QNativeIpcKey_setType(QNativeIpcKey* self, Type type);
struct miqt_string QNativeIpcKey_nativeKey(const QNativeIpcKey* self);
void QNativeIpcKey_setNativeKey(QNativeIpcKey* self, struct miqt_string newKey);
struct miqt_string QNativeIpcKey_toString(const QNativeIpcKey* self);
QNativeIpcKey* QNativeIpcKey_fromString(struct miqt_string string);

void QNativeIpcKey_delete(QNativeIpcKey* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
