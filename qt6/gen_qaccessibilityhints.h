#pragma once
#ifndef MIQT_QT6_GEN_QACCESSIBILITYHINTS_H
#define MIQT_QT6_GEN_QACCESSIBILITYHINTS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAccessibilityHints;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAccessibilityHints QAccessibilityHints;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAccessibilityHints* QAccessibilityHints_new();
QAccessibilityHints* QAccessibilityHints_new2(QObject* parent);
void QAccessibilityHints_virtbase(QAccessibilityHints* src, QObject** outptr_QObject);
QMetaObject* QAccessibilityHints_metaObject(const QAccessibilityHints* self);
void* QAccessibilityHints_metacast(QAccessibilityHints* self, const char* param1);
struct miqt_string QAccessibilityHints_tr(const char* s);
int QAccessibilityHints_contrastPreference(const QAccessibilityHints* self);
void QAccessibilityHints_contrastPreferenceChanged(QAccessibilityHints* self, int contrastPreference);
void QAccessibilityHints_connect_contrastPreferenceChanged(QAccessibilityHints* self, intptr_t slot);
bool QAccessibilityHints_event(QAccessibilityHints* self, QEvent* event);
struct miqt_string QAccessibilityHints_tr2(const char* s, const char* c);
struct miqt_string QAccessibilityHints_tr3(const char* s, const char* c, int n);

bool QAccessibilityHints_override_virtual_event(void* self, intptr_t slot);
bool QAccessibilityHints_virtualbase_event(void* self, QEvent* event);
bool QAccessibilityHints_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAccessibilityHints_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAccessibilityHints_override_virtual_timerEvent(void* self, intptr_t slot);
void QAccessibilityHints_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAccessibilityHints_override_virtual_childEvent(void* self, intptr_t slot);
void QAccessibilityHints_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAccessibilityHints_override_virtual_customEvent(void* self, intptr_t slot);
void QAccessibilityHints_virtualbase_customEvent(void* self, QEvent* event);
bool QAccessibilityHints_override_virtual_connectNotify(void* self, intptr_t slot);
void QAccessibilityHints_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAccessibilityHints_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAccessibilityHints_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QAccessibilityHints_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAccessibilityHints_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAccessibilityHints_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAccessibilityHints_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QAccessibilityHints_delete(QAccessibilityHints* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
