#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QSCREENCAPTURE_H
#define MIQT_QT6_MULTIMEDIA_GEN_QSCREENCAPTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMediaCaptureSession;
class QMetaMethod;
class QMetaObject;
class QObject;
class QScreen;
class QScreenCapture;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QScreen QScreen;
typedef struct QScreenCapture QScreenCapture;
typedef struct QTimerEvent QTimerEvent;
#endif

QScreenCapture* QScreenCapture_new();
QScreenCapture* QScreenCapture_new2(QObject* parent);
void QScreenCapture_virtbase(QScreenCapture* src, QObject** outptr_QObject);
QMetaObject* QScreenCapture_metaObject(const QScreenCapture* self);
void* QScreenCapture_metacast(QScreenCapture* self, const char* param1);
struct miqt_string QScreenCapture_tr(const char* s);
QMediaCaptureSession* QScreenCapture_captureSession(const QScreenCapture* self);
void QScreenCapture_setScreen(QScreenCapture* self, QScreen* screen);
QScreen* QScreenCapture_screen(const QScreenCapture* self);
bool QScreenCapture_isActive(const QScreenCapture* self);
Error QScreenCapture_error(const QScreenCapture* self);
struct miqt_string QScreenCapture_errorString(const QScreenCapture* self);
void QScreenCapture_setActive(QScreenCapture* self, bool active);
void QScreenCapture_start(QScreenCapture* self);
void QScreenCapture_stop(QScreenCapture* self);
void QScreenCapture_activeChanged(QScreenCapture* self, bool param1);
void QScreenCapture_connect_activeChanged(QScreenCapture* self, intptr_t slot);
void QScreenCapture_errorChanged(QScreenCapture* self);
void QScreenCapture_connect_errorChanged(QScreenCapture* self, intptr_t slot);
void QScreenCapture_screenChanged(QScreenCapture* self, QScreen* param1);
void QScreenCapture_connect_screenChanged(QScreenCapture* self, intptr_t slot);
void QScreenCapture_errorOccurred(QScreenCapture* self, int error, struct miqt_string errorString);
void QScreenCapture_connect_errorOccurred(QScreenCapture* self, intptr_t slot);
struct miqt_string QScreenCapture_tr2(const char* s, const char* c);
struct miqt_string QScreenCapture_tr3(const char* s, const char* c, int n);

bool QScreenCapture_override_virtual_event(void* self, intptr_t slot);
bool QScreenCapture_virtualbase_event(void* self, QEvent* event);
bool QScreenCapture_override_virtual_eventFilter(void* self, intptr_t slot);
bool QScreenCapture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QScreenCapture_override_virtual_timerEvent(void* self, intptr_t slot);
void QScreenCapture_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QScreenCapture_override_virtual_childEvent(void* self, intptr_t slot);
void QScreenCapture_virtualbase_childEvent(void* self, QChildEvent* event);
bool QScreenCapture_override_virtual_customEvent(void* self, intptr_t slot);
void QScreenCapture_virtualbase_customEvent(void* self, QEvent* event);
bool QScreenCapture_override_virtual_connectNotify(void* self, intptr_t slot);
void QScreenCapture_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QScreenCapture_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QScreenCapture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QScreenCapture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QScreenCapture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QScreenCapture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QScreenCapture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QScreenCapture_delete(QScreenCapture* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
