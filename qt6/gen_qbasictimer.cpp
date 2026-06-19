#include <QBasicTimer>
#include <QObject>
#include <qbasictimer.h>
#include "gen_qbasictimer.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QBasicTimer* QBasicTimer_new() {
	return new (std::nothrow) QBasicTimer();
}

void QBasicTimer_swap(QBasicTimer* self, QBasicTimer* other) {
	self->swap(*other);
}

bool QBasicTimer_isActive(const QBasicTimer* self) {
	return self->isActive();
}

int QBasicTimer_timerId(const QBasicTimer* self) {
	return self->timerId();
}

int QBasicTimer_id(const QBasicTimer* self) {
	Qt::TimerId _ret = self->id();
	return static_cast<int>(_ret);
}

void QBasicTimer_start(QBasicTimer* self, int msec, QObject* obj) {
	self->start(static_cast<int>(msec), obj);
}

void QBasicTimer_start2(QBasicTimer* self, int msec, int timerType, QObject* obj) {
	self->start(static_cast<int>(msec), static_cast<Qt::TimerType>(timerType), obj);
}

void QBasicTimer_start3(QBasicTimer* self, Duration duration, QObject* obj) {
	self->start(duration, obj);
}

void QBasicTimer_start4(QBasicTimer* self, Duration duration, int timerType, QObject* obj) {
	self->start(duration, static_cast<Qt::TimerType>(timerType), obj);
}

void QBasicTimer_stop(QBasicTimer* self) {
	self->stop();
}

void QBasicTimer_delete(QBasicTimer* self) {
	delete self;
}

