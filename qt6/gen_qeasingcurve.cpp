#include <QEasingCurve>
#include <QList>
#include <QPointF>
#include <qeasingcurve.h>
#include "gen_qeasingcurve.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QEasingCurve* QEasingCurve_new() {
	return new (std::nothrow) QEasingCurve();
}

QEasingCurve* QEasingCurve_new2(QEasingCurve* other) {
	return new (std::nothrow) QEasingCurve(*other);
}

QEasingCurve* QEasingCurve_new3(Type type) {
	return new (std::nothrow) QEasingCurve(type);
}

void QEasingCurve_operatorAssign(QEasingCurve* self, QEasingCurve* other) {
	self->operator=(*other);
}

void QEasingCurve_swap(QEasingCurve* self, QEasingCurve* other) {
	self->swap(*other);
}

double QEasingCurve_amplitude(const QEasingCurve* self) {
	qreal _ret = self->amplitude();
	return static_cast<double>(_ret);
}

void QEasingCurve_setAmplitude(QEasingCurve* self, double amplitude) {
	self->setAmplitude(static_cast<qreal>(amplitude));
}

double QEasingCurve_period(const QEasingCurve* self) {
	qreal _ret = self->period();
	return static_cast<double>(_ret);
}

void QEasingCurve_setPeriod(QEasingCurve* self, double period) {
	self->setPeriod(static_cast<qreal>(period));
}

double QEasingCurve_overshoot(const QEasingCurve* self) {
	qreal _ret = self->overshoot();
	return static_cast<double>(_ret);
}

void QEasingCurve_setOvershoot(QEasingCurve* self, double overshoot) {
	self->setOvershoot(static_cast<qreal>(overshoot));
}

void QEasingCurve_addCubicBezierSegment(QEasingCurve* self, QPointF* c1, QPointF* c2, QPointF* endPoint) {
	self->addCubicBezierSegment(*c1, *c2, *endPoint);
}

void QEasingCurve_addTCBSegment(QEasingCurve* self, QPointF* nextPoint, double t, double c, double b) {
	self->addTCBSegment(*nextPoint, static_cast<qreal>(t), static_cast<qreal>(c), static_cast<qreal>(b));
}

struct miqt_array /* of QPointF* */  QEasingCurve_toCubicSpline(const QEasingCurve* self) {
	QList<QPointF> _ret = self->toCubicSpline();
	// Convert QList<> from C++ memory to manually-managed C memory
	QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QPointF(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

Type QEasingCurve_type(const QEasingCurve* self) {
	return self->type();
}

void QEasingCurve_setType(QEasingCurve* self, Type type) {
	self->setType(type);
}

void QEasingCurve_setCustomType(QEasingCurve* self, EasingFunction func) {
	self->setCustomType(func);
}

EasingFunction QEasingCurve_customType(const QEasingCurve* self) {
	return self->customType();
}

double QEasingCurve_valueForProgress(const QEasingCurve* self, double progress) {
	qreal _ret = self->valueForProgress(static_cast<qreal>(progress));
	return static_cast<double>(_ret);
}

void QEasingCurve_delete(QEasingCurve* self) {
	delete self;
}

