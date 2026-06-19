#pragma once
#ifndef MIQT_QT6_GEN_QCHRONOTIMER_H
#define MIQT_QT6_GEN_QCHRONOTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QChronoTimer;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QChronoTimer QChronoTimer;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QChronoTimer* QChronoTimer_new();
QChronoTimer* QChronoTimer_new2(QObject* parent);
void QChronoTimer_virtbase(QChronoTimer* src, QObject** outptr_QObject);
QMetaObject* QChronoTimer_metaObject(const QChronoTimer* self);
void* QChronoTimer_metacast(QChronoTimer* self, const char* param1);
struct miqt_string QChronoTimer_tr(const char* s);
bool QChronoTimer_isActive(const QChronoTimer* self);
int QChronoTimer_id(const QChronoTimer* self);
void QChronoTimer_setTimerType(QChronoTimer* self, int atype);
int QChronoTimer_timerType(const QChronoTimer* self);
void QChronoTimer_setSingleShot(QChronoTimer* self, bool singleShot);
bool QChronoTimer_isSingleShot(const QChronoTimer* self);
void QChronoTimer_start(QChronoTimer* self);
void QChronoTimer_stop(QChronoTimer* self);
void QChronoTimer_timerEvent(QChronoTimer* self, QTimerEvent* param1);
struct miqt_string QChronoTimer_tr2(const char* s, const char* c);
struct miqt_string QChronoTimer_tr3(const char* s, const char* c, int n);

bool QChronoTimer_override_virtual_timerEvent(void* self, intptr_t slot);
void QChronoTimer_virtualbase_timerEvent(void* self, QTimerEvent* param1);
bool QChronoTimer_override_virtual_event(void* self, intptr_t slot);
bool QChronoTimer_virtualbase_event(void* self, QEvent* event);
bool QChronoTimer_override_virtual_eventFilter(void* self, intptr_t slot);
bool QChronoTimer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QChronoTimer_override_virtual_childEvent(void* self, intptr_t slot);
void QChronoTimer_virtualbase_childEvent(void* self, QChildEvent* event);
bool QChronoTimer_override_virtual_customEvent(void* self, intptr_t slot);
void QChronoTimer_virtualbase_customEvent(void* self, QEvent* event);
bool QChronoTimer_override_virtual_connectNotify(void* self, intptr_t slot);
void QChronoTimer_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QChronoTimer_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QChronoTimer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QChronoTimer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QChronoTimer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QChronoTimer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QChronoTimer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QChronoTimer_delete(QChronoTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
