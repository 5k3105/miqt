#pragma once
#ifndef MIQT_QT6_GEN_QSYSTEMSEMAPHORE_H
#define MIQT_QT6_GEN_QSYSTEMSEMAPHORE_H

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
class QSystemSemaphore;
#else
typedef struct QNativeIpcKey QNativeIpcKey;
typedef struct QSystemSemaphore QSystemSemaphore;
#endif

QSystemSemaphore* QSystemSemaphore_new(QNativeIpcKey* key);
QSystemSemaphore* QSystemSemaphore_new2(struct miqt_string key);
QSystemSemaphore* QSystemSemaphore_new3(QNativeIpcKey* key, int initialValue);
QSystemSemaphore* QSystemSemaphore_new4(QNativeIpcKey* key, int initialValue, AccessMode param3);
QSystemSemaphore* QSystemSemaphore_new5(struct miqt_string key, int initialValue);
QSystemSemaphore* QSystemSemaphore_new6(struct miqt_string key, int initialValue, AccessMode mode);
struct miqt_string QSystemSemaphore_tr(const char* sourceText);
void QSystemSemaphore_setNativeKey(QSystemSemaphore* self, QNativeIpcKey* key);
void QSystemSemaphore_setNativeKeyWithKey(QSystemSemaphore* self, struct miqt_string key);
QNativeIpcKey* QSystemSemaphore_nativeIpcKey(const QSystemSemaphore* self);
void QSystemSemaphore_setKey(QSystemSemaphore* self, struct miqt_string key);
struct miqt_string QSystemSemaphore_key(const QSystemSemaphore* self);
bool QSystemSemaphore_acquire(QSystemSemaphore* self);
bool QSystemSemaphore_release(QSystemSemaphore* self);
SystemSemaphoreError QSystemSemaphore_error(const QSystemSemaphore* self);
struct miqt_string QSystemSemaphore_errorString(const QSystemSemaphore* self);
bool QSystemSemaphore_isKeyTypeSupported(uint16_t type);
QNativeIpcKey* QSystemSemaphore_platformSafeKey(struct miqt_string key);
QNativeIpcKey* QSystemSemaphore_legacyNativeKey(struct miqt_string key);
struct miqt_string QSystemSemaphore_tr2(const char* sourceText, const char* disambiguation);
struct miqt_string QSystemSemaphore_tr3(const char* sourceText, const char* disambiguation, int n);
void QSystemSemaphore_setNativeKey2(QSystemSemaphore* self, QNativeIpcKey* key, int initialValue);
void QSystemSemaphore_setNativeKey3(QSystemSemaphore* self, QNativeIpcKey* key, int initialValue, AccessMode param3);
void QSystemSemaphore_setNativeKey4(QSystemSemaphore* self, struct miqt_string key, int initialValue);
void QSystemSemaphore_setNativeKey5(QSystemSemaphore* self, struct miqt_string key, int initialValue, AccessMode mode);
void QSystemSemaphore_setNativeKey6(QSystemSemaphore* self, struct miqt_string key, int initialValue, AccessMode mode, uint16_t type);
void QSystemSemaphore_setKey2(QSystemSemaphore* self, struct miqt_string key, int initialValue);
void QSystemSemaphore_setKey3(QSystemSemaphore* self, struct miqt_string key, int initialValue, AccessMode mode);
bool QSystemSemaphore_releaseWithInt(QSystemSemaphore* self, int n);
QNativeIpcKey* QSystemSemaphore_platformSafeKey2(struct miqt_string key, uint16_t type);
QNativeIpcKey* QSystemSemaphore_legacyNativeKey2(struct miqt_string key, uint16_t type);

void QSystemSemaphore_delete(QSystemSemaphore* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
