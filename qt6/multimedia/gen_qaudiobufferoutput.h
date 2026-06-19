#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QAUDIOBUFFEROUTPUT_H
#define MIQT_QT6_MULTIMEDIA_GEN_QAUDIOBUFFEROUTPUT_H

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
class QAudioBufferOutput;
class QAudioFormat;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAudioBuffer QAudioBuffer;
typedef struct QAudioBufferOutput QAudioBufferOutput;
typedef struct QAudioFormat QAudioFormat;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioBufferOutput* QAudioBufferOutput_new();
QAudioBufferOutput* QAudioBufferOutput_new2(QAudioFormat* format);
QAudioBufferOutput* QAudioBufferOutput_new3(QObject* parent);
QAudioBufferOutput* QAudioBufferOutput_new4(QAudioFormat* format, QObject* parent);
void QAudioBufferOutput_virtbase(QAudioBufferOutput* src, QObject** outptr_QObject);
QMetaObject* QAudioBufferOutput_metaObject(const QAudioBufferOutput* self);
void* QAudioBufferOutput_metacast(QAudioBufferOutput* self, const char* param1);
struct miqt_string QAudioBufferOutput_tr(const char* s);
QAudioFormat* QAudioBufferOutput_format(const QAudioBufferOutput* self);
void QAudioBufferOutput_audioBufferReceived(QAudioBufferOutput* self, QAudioBuffer* buffer);
void QAudioBufferOutput_connect_audioBufferReceived(QAudioBufferOutput* self, intptr_t slot);
struct miqt_string QAudioBufferOutput_tr2(const char* s, const char* c);
struct miqt_string QAudioBufferOutput_tr3(const char* s, const char* c, int n);

bool QAudioBufferOutput_override_virtual_event(void* self, intptr_t slot);
bool QAudioBufferOutput_virtualbase_event(void* self, QEvent* event);
bool QAudioBufferOutput_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAudioBufferOutput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAudioBufferOutput_override_virtual_timerEvent(void* self, intptr_t slot);
void QAudioBufferOutput_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAudioBufferOutput_override_virtual_childEvent(void* self, intptr_t slot);
void QAudioBufferOutput_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAudioBufferOutput_override_virtual_customEvent(void* self, intptr_t slot);
void QAudioBufferOutput_virtualbase_customEvent(void* self, QEvent* event);
bool QAudioBufferOutput_override_virtual_connectNotify(void* self, intptr_t slot);
void QAudioBufferOutput_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAudioBufferOutput_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAudioBufferOutput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QAudioBufferOutput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAudioBufferOutput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAudioBufferOutput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAudioBufferOutput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QAudioBufferOutput_delete(QAudioBufferOutput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
