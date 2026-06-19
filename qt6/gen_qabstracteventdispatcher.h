#pragma once
#ifndef MIQT_QT6_GEN_QABSTRACTEVENTDISPATCHER_H
#define MIQT_QT6_GEN_QABSTRACTEVENTDISPATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractEventDispatcher;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAbstractEventDispatcher__TimerInfo)
typedef QAbstractEventDispatcher::TimerInfo QAbstractEventDispatcher__TimerInfo;
#else
class QAbstractEventDispatcher__TimerInfo;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAbstractEventDispatcher__TimerInfoV2)
typedef QAbstractEventDispatcher::TimerInfoV2 QAbstractEventDispatcher__TimerInfoV2;
#else
class QAbstractEventDispatcher__TimerInfoV2;
#endif
class QAbstractEventDispatcherV2;
class QAbstractNativeEventFilter;
class QDeadlineTimer;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSocketNotifier;
class QThread;
#else
typedef struct QAbstractEventDispatcher QAbstractEventDispatcher;
typedef struct QAbstractEventDispatcher__TimerInfo QAbstractEventDispatcher__TimerInfo;
typedef struct QAbstractEventDispatcher__TimerInfoV2 QAbstractEventDispatcher__TimerInfoV2;
typedef struct QAbstractEventDispatcherV2 QAbstractEventDispatcherV2;
typedef struct QAbstractNativeEventFilter QAbstractNativeEventFilter;
typedef struct QDeadlineTimer QDeadlineTimer;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSocketNotifier QSocketNotifier;
typedef struct QThread QThread;
#endif

void QAbstractEventDispatcher_virtbase(QAbstractEventDispatcher* src, QObject** outptr_QObject);
QMetaObject* QAbstractEventDispatcher_metaObject(const QAbstractEventDispatcher* self);
void* QAbstractEventDispatcher_metacast(QAbstractEventDispatcher* self, const char* param1);
struct miqt_string QAbstractEventDispatcher_tr(const char* s);
QAbstractEventDispatcher* QAbstractEventDispatcher_instance();
bool QAbstractEventDispatcher_processEvents(QAbstractEventDispatcher* self, int flags);
void QAbstractEventDispatcher_registerSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier);
void QAbstractEventDispatcher_unregisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier);
int QAbstractEventDispatcher_registerTimer(QAbstractEventDispatcher* self, Duration interval, int timerType, QObject* object);
int QAbstractEventDispatcher_registerTimer2(QAbstractEventDispatcher* self, long long interval, int timerType, QObject* object);
void QAbstractEventDispatcher_registerTimer3(QAbstractEventDispatcher* self, int timerId, long long interval, int timerType, QObject* object);
bool QAbstractEventDispatcher_unregisterTimer(QAbstractEventDispatcher* self, int timerId);
bool QAbstractEventDispatcher_unregisterTimers(QAbstractEventDispatcher* self, QObject* object);
struct miqt_array /* of TimerInfo */  QAbstractEventDispatcher_registeredTimers(const QAbstractEventDispatcher* self, QObject* object);
int QAbstractEventDispatcher_remainingTime(QAbstractEventDispatcher* self, int timerId);
void QAbstractEventDispatcher_registerTimer4(QAbstractEventDispatcher* self, int timerId, Duration interval, int timerType, QObject* object);
bool QAbstractEventDispatcher_unregisterTimerWithTimerId(QAbstractEventDispatcher* self, int timerId);
struct miqt_array /* of TimerInfoV2 */  QAbstractEventDispatcher_timersForObject(const QAbstractEventDispatcher* self, QObject* object);
Duration QAbstractEventDispatcher_remainingTimeWithTimerId(const QAbstractEventDispatcher* self, int timerId);
void QAbstractEventDispatcher_wakeUp(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_interrupt(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_startingUp(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_closingDown(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_installNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj);
void QAbstractEventDispatcher_removeNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj);
bool QAbstractEventDispatcher_filterNativeEvent(QAbstractEventDispatcher* self, struct miqt_string eventType, void* message, intptr_t* result);
void QAbstractEventDispatcher_aboutToBlock(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_connect_aboutToBlock(QAbstractEventDispatcher* self, intptr_t slot);
void QAbstractEventDispatcher_awake(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_connect_awake(QAbstractEventDispatcher* self, intptr_t slot);
struct miqt_string QAbstractEventDispatcher_tr2(const char* s, const char* c);
struct miqt_string QAbstractEventDispatcher_tr3(const char* s, const char* c, int n);
QAbstractEventDispatcher* QAbstractEventDispatcher_instanceWithThread(QThread* thread);

void QAbstractEventDispatcher_delete(QAbstractEventDispatcher* self);

QAbstractEventDispatcherV2* QAbstractEventDispatcherV2_new();
QAbstractEventDispatcherV2* QAbstractEventDispatcherV2_new2(QObject* parent);
void QAbstractEventDispatcherV2_virtbase(QAbstractEventDispatcherV2* src, QAbstractEventDispatcher** outptr_QAbstractEventDispatcher);
QMetaObject* QAbstractEventDispatcherV2_metaObject(const QAbstractEventDispatcherV2* self);
void* QAbstractEventDispatcherV2_metacast(QAbstractEventDispatcherV2* self, const char* param1);
struct miqt_string QAbstractEventDispatcherV2_tr(const char* s);
void QAbstractEventDispatcherV2_registerTimer(QAbstractEventDispatcherV2* self, int timerId, Duration interval, int timerType, QObject* object);
bool QAbstractEventDispatcherV2_unregisterTimer(QAbstractEventDispatcherV2* self, int timerId);
struct miqt_array /* of TimerInfoV2 */  QAbstractEventDispatcherV2_timersForObject(const QAbstractEventDispatcherV2* self, QObject* object);
Duration QAbstractEventDispatcherV2_remainingTime(const QAbstractEventDispatcherV2* self, int timerId);
bool QAbstractEventDispatcherV2_processEventsWithDeadline(QAbstractEventDispatcherV2* self, int flags, QDeadlineTimer* deadline);
struct miqt_string QAbstractEventDispatcherV2_tr2(const char* s, const char* c);
struct miqt_string QAbstractEventDispatcherV2_tr3(const char* s, const char* c, int n);

void QAbstractEventDispatcherV2_delete(QAbstractEventDispatcherV2* self);

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new();
QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new2(int id, int i, int t);
QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new3(const TimerInfo* param1);
int QAbstractEventDispatcher__TimerInfo_timerId(const QAbstractEventDispatcher__TimerInfo* self);
void QAbstractEventDispatcher__TimerInfo_setTimerId(QAbstractEventDispatcher__TimerInfo* self, int timerId);
int QAbstractEventDispatcher__TimerInfo_interval(const QAbstractEventDispatcher__TimerInfo* self);
void QAbstractEventDispatcher__TimerInfo_setInterval(QAbstractEventDispatcher__TimerInfo* self, int interval);
int QAbstractEventDispatcher__TimerInfo_timerType(const QAbstractEventDispatcher__TimerInfo* self);
void QAbstractEventDispatcher__TimerInfo_setTimerType(QAbstractEventDispatcher__TimerInfo* self, int timerType);

void QAbstractEventDispatcher__TimerInfo_delete(QAbstractEventDispatcher__TimerInfo* self);

QAbstractEventDispatcher__TimerInfoV2* QAbstractEventDispatcher__TimerInfoV2_new(const TimerInfoV2* param1);
QAbstractEventDispatcher__TimerInfoV2* QAbstractEventDispatcher__TimerInfoV2_new2();
Duration QAbstractEventDispatcher__TimerInfoV2_interval(const QAbstractEventDispatcher__TimerInfoV2* self);
void QAbstractEventDispatcher__TimerInfoV2_setInterval(QAbstractEventDispatcher__TimerInfoV2* self, Duration interval);
int QAbstractEventDispatcher__TimerInfoV2_timerId(const QAbstractEventDispatcher__TimerInfoV2* self);
void QAbstractEventDispatcher__TimerInfoV2_setTimerId(QAbstractEventDispatcher__TimerInfoV2* self, int timerId);
int QAbstractEventDispatcher__TimerInfoV2_timerType(const QAbstractEventDispatcher__TimerInfoV2* self);
void QAbstractEventDispatcher__TimerInfoV2_setTimerType(QAbstractEventDispatcher__TimerInfoV2* self, int timerType);
void QAbstractEventDispatcher__TimerInfoV2_operatorAssign(QAbstractEventDispatcher__TimerInfoV2* self, const TimerInfoV2* param1);

void QAbstractEventDispatcher__TimerInfoV2_delete(QAbstractEventDispatcher__TimerInfoV2* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
