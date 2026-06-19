#include <QJSNumberCoercion>
#include <qjsnumbercoercion.h>
#include "gen_qjsnumbercoercion.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QJSNumberCoercion* QJSNumberCoercion_new(QJSNumberCoercion* param1) {
	return new (std::nothrow) QJSNumberCoercion(*param1);
}

bool QJSNumberCoercion_isInteger(double d) {
	return QJSNumberCoercion::isInteger(static_cast<double>(d));
}

bool QJSNumberCoercion_isArrayIndex(double d) {
	return QJSNumberCoercion::isArrayIndex(static_cast<double>(d));
}

bool QJSNumberCoercion_isArrayIndexWithQint64(long long i) {
	return QJSNumberCoercion::isArrayIndex(static_cast<qint64>(i));
}

bool QJSNumberCoercion_isArrayIndexWithQuint64(unsigned long long i) {
	return QJSNumberCoercion::isArrayIndex(static_cast<quint64>(i));
}

int QJSNumberCoercion_toInteger(double d) {
	return QJSNumberCoercion::toInteger(static_cast<double>(d));
}

bool QJSNumberCoercion_equals(double lhs, double rhs) {
	return QJSNumberCoercion::equals(static_cast<double>(lhs), static_cast<double>(rhs));
}

double QJSNumberCoercion_roundTowards0(double d) {
	return QJSNumberCoercion::roundTowards0(static_cast<double>(d));
}

void QJSNumberCoercion_delete(QJSNumberCoercion* self) {
	delete self;
}

