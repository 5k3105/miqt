#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QWINDOWCAPTURE_H
#define MIQT_QT6_MULTIMEDIA_GEN_QWINDOWCAPTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCapturableWindow;
class QChildEvent;
class QEvent;
class QMediaCaptureSession;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QWindowCapture;
#else
typedef struct QCapturableWindow QCapturableWindow;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWindowCapture QWindowCapture;
#endif

QWindowCapture* QWindowCapture_new();
QWindowCapture* QWindowCapture_new2(QObject* parent);
void QWindowCapture_virtbase(QWindowCapture* src, QObject** outptr_QObject);
QMetaObject* QWindowCapture_metaObject(const QWindowCapture* self);
void* QWindowCapture_metacast(QWindowCapture* self, const char* param1);
struct miqt_string QWindowCapture_tr(const char* s);
struct miqt_array /* of QCapturableWindow* */  QWindowCapture_capturableWindows();
QMediaCaptureSession* QWindowCapture_captureSession(const QWindowCapture* self);
void QWindowCapture_setWindow(QWindowCapture* self, QCapturableWindow* window);
QCapturableWindow* QWindowCapture_window(const QWindowCapture* self);
bool QWindowCapture_isActive(const QWindowCapture* self);
Error QWindowCapture_error(const QWindowCapture* self);
struct miqt_string QWindowCapture_errorString(const QWindowCapture* self);
void QWindowCapture_setActive(QWindowCapture* self, bool active);
void QWindowCapture_start(QWindowCapture* self);
void QWindowCapture_stop(QWindowCapture* self);
void QWindowCapture_activeChanged(QWindowCapture* self, bool param1);
void QWindowCapture_connect_activeChanged(QWindowCapture* self, intptr_t slot);
void QWindowCapture_windowChanged(QWindowCapture* self, QCapturableWindow* window);
void QWindowCapture_connect_windowChanged(QWindowCapture* self, intptr_t slot);
void QWindowCapture_errorChanged(QWindowCapture* self);
void QWindowCapture_connect_errorChanged(QWindowCapture* self, intptr_t slot);
void QWindowCapture_errorOccurred(QWindowCapture* self, int error, struct miqt_string errorString);
void QWindowCapture_connect_errorOccurred(QWindowCapture* self, intptr_t slot);
struct miqt_string QWindowCapture_tr2(const char* s, const char* c);
struct miqt_string QWindowCapture_tr3(const char* s, const char* c, int n);

bool QWindowCapture_override_virtual_event(void* self, intptr_t slot);
bool QWindowCapture_virtualbase_event(void* self, QEvent* event);
bool QWindowCapture_override_virtual_eventFilter(void* self, intptr_t slot);
bool QWindowCapture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QWindowCapture_override_virtual_timerEvent(void* self, intptr_t slot);
void QWindowCapture_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QWindowCapture_override_virtual_childEvent(void* self, intptr_t slot);
void QWindowCapture_virtualbase_childEvent(void* self, QChildEvent* event);
bool QWindowCapture_override_virtual_customEvent(void* self, intptr_t slot);
void QWindowCapture_virtualbase_customEvent(void* self, QEvent* event);
bool QWindowCapture_override_virtual_connectNotify(void* self, intptr_t slot);
void QWindowCapture_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QWindowCapture_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QWindowCapture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QWindowCapture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QWindowCapture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QWindowCapture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QWindowCapture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QWindowCapture_delete(QWindowCapture* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
