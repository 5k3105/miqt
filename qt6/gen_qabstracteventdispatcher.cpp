#include <QAbstractEventDispatcher>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractEventDispatcher__TimerInfo
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractEventDispatcher__TimerInfoV2
#include <QAbstractEventDispatcherV2>
#include <QAbstractNativeEventFilter>
#include <QByteArray>
#include <QDeadlineTimer>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSocketNotifier>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <qabstracteventdispatcher.h>
#include "gen_qabstracteventdispatcher.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractEventDispatcher_aboutToBlock(intptr_t);
void miqt_exec_callback_QAbstractEventDispatcher_awake(intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

void QAbstractEventDispatcher_virtbase(QAbstractEventDispatcher* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractEventDispatcher_metaObject(const QAbstractEventDispatcher* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractEventDispatcher_metacast(QAbstractEventDispatcher* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractEventDispatcher_tr(const char* s) {
	QString _ret = QAbstractEventDispatcher::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractEventDispatcher* QAbstractEventDispatcher_instance() {
	return QAbstractEventDispatcher::instance();
}

bool QAbstractEventDispatcher_processEvents(QAbstractEventDispatcher* self, int flags) {
	return self->processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags));
}

void QAbstractEventDispatcher_registerSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier) {
	self->registerSocketNotifier(notifier);
}

void QAbstractEventDispatcher_unregisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier) {
	self->unregisterSocketNotifier(notifier);
}

int QAbstractEventDispatcher_registerTimer(QAbstractEventDispatcher* self, Duration interval, int timerType, QObject* object) {
	Qt::TimerId _ret = self->registerTimer(interval, static_cast<Qt::TimerType>(timerType), object);
	return static_cast<int>(_ret);
}

int QAbstractEventDispatcher_registerTimer2(QAbstractEventDispatcher* self, long long interval, int timerType, QObject* object) {
	return self->registerTimer(static_cast<qint64>(interval), static_cast<Qt::TimerType>(timerType), object);
}

void QAbstractEventDispatcher_registerTimer3(QAbstractEventDispatcher* self, int timerId, long long interval, int timerType, QObject* object) {
	self->registerTimer(static_cast<int>(timerId), static_cast<qint64>(interval), static_cast<Qt::TimerType>(timerType), object);
}

bool QAbstractEventDispatcher_unregisterTimer(QAbstractEventDispatcher* self, int timerId) {
	return self->unregisterTimer(static_cast<int>(timerId));
}

bool QAbstractEventDispatcher_unregisterTimers(QAbstractEventDispatcher* self, QObject* object) {
	return self->unregisterTimers(object);
}

struct miqt_array /* of TimerInfo */  QAbstractEventDispatcher_registeredTimers(const QAbstractEventDispatcher* self, QObject* object) {
	QList<TimerInfo> _ret = self->registeredTimers(object);
	// Convert QList<> from C++ memory to manually-managed C memory
	TimerInfo* _arr = static_cast<TimerInfo*>(malloc(sizeof(TimerInfo) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QAbstractEventDispatcher_remainingTime(QAbstractEventDispatcher* self, int timerId) {
	return self->remainingTime(static_cast<int>(timerId));
}

void QAbstractEventDispatcher_registerTimer4(QAbstractEventDispatcher* self, int timerId, Duration interval, int timerType, QObject* object) {
	self->registerTimer(static_cast<Qt::TimerId>(timerId), interval, static_cast<Qt::TimerType>(timerType), object);
}

bool QAbstractEventDispatcher_unregisterTimerWithTimerId(QAbstractEventDispatcher* self, int timerId) {
	return self->unregisterTimer(static_cast<Qt::TimerId>(timerId));
}

struct miqt_array /* of TimerInfoV2 */  QAbstractEventDispatcher_timersForObject(const QAbstractEventDispatcher* self, QObject* object) {
	QList<TimerInfoV2> _ret = self->timersForObject(object);
	// Convert QList<> from C++ memory to manually-managed C memory
	TimerInfoV2* _arr = static_cast<TimerInfoV2*>(malloc(sizeof(TimerInfoV2) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

Duration QAbstractEventDispatcher_remainingTimeWithTimerId(const QAbstractEventDispatcher* self, int timerId) {
	return self->remainingTime(static_cast<Qt::TimerId>(timerId));
}

void QAbstractEventDispatcher_wakeUp(QAbstractEventDispatcher* self) {
	self->wakeUp();
}

void QAbstractEventDispatcher_interrupt(QAbstractEventDispatcher* self) {
	self->interrupt();
}

void QAbstractEventDispatcher_startingUp(QAbstractEventDispatcher* self) {
	self->startingUp();
}

void QAbstractEventDispatcher_closingDown(QAbstractEventDispatcher* self) {
	self->closingDown();
}

void QAbstractEventDispatcher_installNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj) {
	self->installNativeEventFilter(filterObj);
}

void QAbstractEventDispatcher_removeNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj) {
	self->removeNativeEventFilter(filterObj);
}

bool QAbstractEventDispatcher_filterNativeEvent(QAbstractEventDispatcher* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return self->filterNativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

void QAbstractEventDispatcher_aboutToBlock(QAbstractEventDispatcher* self) {
	self->aboutToBlock();
}

void QAbstractEventDispatcher_connect_aboutToBlock(QAbstractEventDispatcher* self, intptr_t slot) {
	QAbstractEventDispatcher::connect(self, static_cast<void (QAbstractEventDispatcher::*)()>(&QAbstractEventDispatcher::aboutToBlock), self, [=]() {
		miqt_exec_callback_QAbstractEventDispatcher_aboutToBlock(slot);
	});
}

void QAbstractEventDispatcher_awake(QAbstractEventDispatcher* self) {
	self->awake();
}

void QAbstractEventDispatcher_connect_awake(QAbstractEventDispatcher* self, intptr_t slot) {
	QAbstractEventDispatcher::connect(self, static_cast<void (QAbstractEventDispatcher::*)()>(&QAbstractEventDispatcher::awake), self, [=]() {
		miqt_exec_callback_QAbstractEventDispatcher_awake(slot);
	});
}

struct miqt_string QAbstractEventDispatcher_tr2(const char* s, const char* c) {
	QString _ret = QAbstractEventDispatcher::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractEventDispatcher_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractEventDispatcher::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractEventDispatcher* QAbstractEventDispatcher_instanceWithThread(QThread* thread) {
	return QAbstractEventDispatcher::instance(thread);
}

void QAbstractEventDispatcher_delete(QAbstractEventDispatcher* self) {
	delete self;
}

QAbstractEventDispatcherV2* QAbstractEventDispatcherV2_new() {
	return new (std::nothrow) QAbstractEventDispatcherV2();
}

QAbstractEventDispatcherV2* QAbstractEventDispatcherV2_new2(QObject* parent) {
	return new (std::nothrow) QAbstractEventDispatcherV2(parent);
}

void QAbstractEventDispatcherV2_virtbase(QAbstractEventDispatcherV2* src, QAbstractEventDispatcher** outptr_QAbstractEventDispatcher) {
	*outptr_QAbstractEventDispatcher = static_cast<QAbstractEventDispatcher*>(src);
}

QMetaObject* QAbstractEventDispatcherV2_metaObject(const QAbstractEventDispatcherV2* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractEventDispatcherV2_metacast(QAbstractEventDispatcherV2* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractEventDispatcherV2_tr(const char* s) {
	QString _ret = QAbstractEventDispatcherV2::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractEventDispatcherV2_registerTimer(QAbstractEventDispatcherV2* self, int timerId, Duration interval, int timerType, QObject* object) {
	self->registerTimer(static_cast<Qt::TimerId>(timerId), interval, static_cast<Qt::TimerType>(timerType), object);
}

bool QAbstractEventDispatcherV2_unregisterTimer(QAbstractEventDispatcherV2* self, int timerId) {
	return self->unregisterTimer(static_cast<Qt::TimerId>(timerId));
}

struct miqt_array /* of TimerInfoV2 */  QAbstractEventDispatcherV2_timersForObject(const QAbstractEventDispatcherV2* self, QObject* object) {
	QList<TimerInfoV2> _ret = self->timersForObject(object);
	// Convert QList<> from C++ memory to manually-managed C memory
	TimerInfoV2* _arr = static_cast<TimerInfoV2*>(malloc(sizeof(TimerInfoV2) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

Duration QAbstractEventDispatcherV2_remainingTime(const QAbstractEventDispatcherV2* self, int timerId) {
	return self->remainingTime(static_cast<Qt::TimerId>(timerId));
}

bool QAbstractEventDispatcherV2_processEventsWithDeadline(QAbstractEventDispatcherV2* self, int flags, QDeadlineTimer* deadline) {
	return self->processEventsWithDeadline(static_cast<QEventLoop::ProcessEventsFlags>(flags), *deadline);
}

struct miqt_string QAbstractEventDispatcherV2_tr2(const char* s, const char* c) {
	QString _ret = QAbstractEventDispatcherV2::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractEventDispatcherV2_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractEventDispatcherV2::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractEventDispatcherV2_delete(QAbstractEventDispatcherV2* self) {
	delete self;
}

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new() {
	return new (std::nothrow) QAbstractEventDispatcher::TimerInfo();
}

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new2(int id, int i, int t) {
	return new (std::nothrow) QAbstractEventDispatcher::TimerInfo(static_cast<int>(id), static_cast<int>(i), static_cast<Qt::TimerType>(t));
}

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new3(const TimerInfo* param1) {
	return new (std::nothrow) QAbstractEventDispatcher::TimerInfo(*param1);
}

int QAbstractEventDispatcher__TimerInfo_timerId(const QAbstractEventDispatcher__TimerInfo* self) {
	return self->timerId;
}

void QAbstractEventDispatcher__TimerInfo_setTimerId(QAbstractEventDispatcher__TimerInfo* self, int timerId) {
	self->timerId = static_cast<int>(timerId);
}

int QAbstractEventDispatcher__TimerInfo_interval(const QAbstractEventDispatcher__TimerInfo* self) {
	return self->interval;
}

void QAbstractEventDispatcher__TimerInfo_setInterval(QAbstractEventDispatcher__TimerInfo* self, int interval) {
	self->interval = static_cast<int>(interval);
}

int QAbstractEventDispatcher__TimerInfo_timerType(const QAbstractEventDispatcher__TimerInfo* self) {
	Qt::TimerType timerType_ret = self->timerType;
	return static_cast<int>(timerType_ret);
}

void QAbstractEventDispatcher__TimerInfo_setTimerType(QAbstractEventDispatcher__TimerInfo* self, int timerType) {
	self->timerType = static_cast<Qt::TimerType>(timerType);
}

void QAbstractEventDispatcher__TimerInfo_delete(QAbstractEventDispatcher__TimerInfo* self) {
	delete self;
}

QAbstractEventDispatcher__TimerInfoV2* QAbstractEventDispatcher__TimerInfoV2_new(const TimerInfoV2* param1) {
	return new (std::nothrow) QAbstractEventDispatcher::TimerInfoV2(*param1);
}

QAbstractEventDispatcher__TimerInfoV2* QAbstractEventDispatcher__TimerInfoV2_new2() {
	return new (std::nothrow) QAbstractEventDispatcher::TimerInfoV2();
}

Duration QAbstractEventDispatcher__TimerInfoV2_interval(const QAbstractEventDispatcher__TimerInfoV2* self) {
	return self->interval;
}

void QAbstractEventDispatcher__TimerInfoV2_setInterval(QAbstractEventDispatcher__TimerInfoV2* self, Duration interval) {
	self->interval = interval;
}

int QAbstractEventDispatcher__TimerInfoV2_timerId(const QAbstractEventDispatcher__TimerInfoV2* self) {
	Qt::TimerId timerId_ret = self->timerId;
	return static_cast<int>(timerId_ret);
}

void QAbstractEventDispatcher__TimerInfoV2_setTimerId(QAbstractEventDispatcher__TimerInfoV2* self, int timerId) {
	self->timerId = static_cast<Qt::TimerId>(timerId);
}

int QAbstractEventDispatcher__TimerInfoV2_timerType(const QAbstractEventDispatcher__TimerInfoV2* self) {
	Qt::TimerType timerType_ret = self->timerType;
	return static_cast<int>(timerType_ret);
}

void QAbstractEventDispatcher__TimerInfoV2_setTimerType(QAbstractEventDispatcher__TimerInfoV2* self, int timerType) {
	self->timerType = static_cast<Qt::TimerType>(timerType);
}

void QAbstractEventDispatcher__TimerInfoV2_operatorAssign(QAbstractEventDispatcher__TimerInfoV2* self, const TimerInfoV2* param1) {
	self->operator=(*param1);
}

void QAbstractEventDispatcher__TimerInfoV2_delete(QAbstractEventDispatcher__TimerInfoV2* self) {
	delete self;
}

