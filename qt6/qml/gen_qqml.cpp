#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlTypeNotAvailable>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qqml.h>
#include "gen_qqml.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QQmlTypeNotAvailable_virtbase(QQmlTypeNotAvailable* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QQmlTypeNotAvailable_metaObject(const QQmlTypeNotAvailable* self) {
	return (QMetaObject*) self->metaObject();
}

void* QQmlTypeNotAvailable_metacast(QQmlTypeNotAvailable* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QQmlTypeNotAvailable_tr(const char* s) {
	QString _ret = QQmlTypeNotAvailable::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlTypeNotAvailable_tr2(const char* s, const char* c) {
	QString _ret = QQmlTypeNotAvailable::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlTypeNotAvailable_tr3(const char* s, const char* c, int n) {
	QString _ret = QQmlTypeNotAvailable::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QQmlTypeNotAvailable_delete(QQmlTypeNotAvailable* self) {
	delete self;
}

