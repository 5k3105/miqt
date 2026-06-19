#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QVIDEOFRAMEINPUT_H
#define MIQT_QT6_MULTIMEDIA_GEN_QVIDEOFRAMEINPUT_H

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
class QTimerEvent;
class QVideoFrame;
class QVideoFrameFormat;
class QVideoFrameInput;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoFrameFormat QVideoFrameFormat;
typedef struct QVideoFrameInput QVideoFrameInput;
#endif

QVideoFrameInput* QVideoFrameInput_new();
QVideoFrameInput* QVideoFrameInput_new2(QVideoFrameFormat* format);
QVideoFrameInput* QVideoFrameInput_new3(QObject* parent);
QVideoFrameInput* QVideoFrameInput_new4(QVideoFrameFormat* format, QObject* parent);
void QVideoFrameInput_virtbase(QVideoFrameInput* src, QObject** outptr_QObject);
QMetaObject* QVideoFrameInput_metaObject(const QVideoFrameInput* self);
void* QVideoFrameInput_metacast(QVideoFrameInput* self, const char* param1);
struct miqt_string QVideoFrameInput_tr(const char* s);
bool QVideoFrameInput_sendVideoFrame(QVideoFrameInput* self, QVideoFrame* frame);
QVideoFrameFormat* QVideoFrameInput_format(const QVideoFrameInput* self);
QMediaCaptureSession* QVideoFrameInput_captureSession(const QVideoFrameInput* self);
void QVideoFrameInput_readyToSendVideoFrame(QVideoFrameInput* self);
void QVideoFrameInput_connect_readyToSendVideoFrame(QVideoFrameInput* self, intptr_t slot);
struct miqt_string QVideoFrameInput_tr2(const char* s, const char* c);
struct miqt_string QVideoFrameInput_tr3(const char* s, const char* c, int n);

bool QVideoFrameInput_override_virtual_event(void* self, intptr_t slot);
bool QVideoFrameInput_virtualbase_event(void* self, QEvent* event);
bool QVideoFrameInput_override_virtual_eventFilter(void* self, intptr_t slot);
bool QVideoFrameInput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QVideoFrameInput_override_virtual_timerEvent(void* self, intptr_t slot);
void QVideoFrameInput_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QVideoFrameInput_override_virtual_childEvent(void* self, intptr_t slot);
void QVideoFrameInput_virtualbase_childEvent(void* self, QChildEvent* event);
bool QVideoFrameInput_override_virtual_customEvent(void* self, intptr_t slot);
void QVideoFrameInput_virtualbase_customEvent(void* self, QEvent* event);
bool QVideoFrameInput_override_virtual_connectNotify(void* self, intptr_t slot);
void QVideoFrameInput_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QVideoFrameInput_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QVideoFrameInput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QVideoFrameInput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QVideoFrameInput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QVideoFrameInput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QVideoFrameInput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QVideoFrameInput_delete(QVideoFrameInput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
