#include <QScrollerProperties>
#include <QVariant>
#include <qscrollerproperties.h>
#include "gen_qscrollerproperties.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QScrollerProperties* QScrollerProperties_new() {
	return new (std::nothrow) QScrollerProperties();
}

QScrollerProperties* QScrollerProperties_new2(QScrollerProperties* sp) {
	return new (std::nothrow) QScrollerProperties(*sp);
}

void QScrollerProperties_operatorAssign(QScrollerProperties* self, QScrollerProperties* sp) {
	self->operator=(*sp);
}

bool QScrollerProperties_operatorEqual(const QScrollerProperties* self, QScrollerProperties* sp) {
	return (*self == *sp);
}

bool QScrollerProperties_operatorNotEqual(const QScrollerProperties* self, QScrollerProperties* sp) {
	return (*self != *sp);
}

void QScrollerProperties_setDefaultScrollerProperties(QScrollerProperties* sp) {
	QScrollerProperties::setDefaultScrollerProperties(*sp);
}

void QScrollerProperties_unsetDefaultScrollerProperties() {
	QScrollerProperties::unsetDefaultScrollerProperties();
}

QVariant* QScrollerProperties_scrollMetric(const QScrollerProperties* self, ScrollMetric metric) {
	return new QVariant(self->scrollMetric(metric));
}

void QScrollerProperties_setScrollMetric(QScrollerProperties* self, ScrollMetric metric, QVariant* value) {
	self->setScrollMetric(metric, *value);
}

void QScrollerProperties_delete(QScrollerProperties* self) {
	delete self;
}

