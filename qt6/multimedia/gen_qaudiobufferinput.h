#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QAUDIOBUFFERINPUT_H
#define MIQT_QT6_MULTIMEDIA_GEN_QAUDIOBUFFERINPUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioBuffer;
class QAudioBufferInput;
class QAudioFormat;
class QChildEvent;
class QEvent;
class QMediaCaptureSession;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAudioBuffer QAudioBuffer;
typedef struct QAudioBufferInput QAudioBufferInput;
typedef struct QAudioFormat QAudioFormat;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioBufferInput* QAudioBufferInput_new();
QAudioBufferInput* QAudioBufferInput_new2(QAudioFormat* format);
QAudioBufferInput* QAudioBufferInput_new3(QObject* parent);
QAudioBufferInput* QAudioBufferInput_new4(QAudioFormat* format, QObject* parent);
void QAudioBufferInput_virtbase(QAudioBufferInput* src, QObject** outptr_QObject);
QMetaObject* QAudioBufferInput_metaObject(const QAudioBufferInput* self);
void* QAudioBufferInput_metacast(QAudioBufferInput* self, const char* param1);
struct miqt_string QAudioBufferInput_tr(const char* s);
bool QAudioBufferInput_sendAudioBuffer(QAudioBufferInput* self, QAudioBuffer* audioBuffer);
QAudioFormat* QAudioBufferInput_format(const QAudioBufferInput* self);
QMediaCaptureSession* QAudioBufferInput_captureSession(const QAudioBufferInput* self);
void QAudioBufferInput_readyToSendAudioBuffer(QAudioBufferInput* self);
void QAudioBufferInput_connect_readyToSendAudioBuffer(QAudioBufferInput* self, intptr_t slot);
struct miqt_string QAudioBufferInput_tr2(const char* s, const char* c);
struct miqt_string QAudioBufferInput_tr3(const char* s, const char* c, int n);

bool QAudioBufferInput_override_virtual_event(void* self, intptr_t slot);
bool QAudioBufferInput_virtualbase_event(void* self, QEvent* event);
bool QAudioBufferInput_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAudioBufferInput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAudioBufferInput_override_virtual_timerEvent(void* self, intptr_t slot);
void QAudioBufferInput_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAudioBufferInput_override_virtual_childEvent(void* self, intptr_t slot);
void QAudioBufferInput_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAudioBufferInput_override_virtual_customEvent(void* self, intptr_t slot);
void QAudioBufferInput_virtualbase_customEvent(void* self, QEvent* event);
bool QAudioBufferInput_override_virtual_connectNotify(void* self, intptr_t slot);
void QAudioBufferInput_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAudioBufferInput_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAudioBufferInput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QAudioBufferInput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAudioBufferInput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAudioBufferInput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAudioBufferInput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QAudioBufferInput_delete(QAudioBufferInput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
