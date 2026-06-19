#include <QNativeIpcKey>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qtipccommon.h>
#include "gen_qtipccommon.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QNativeIpcKey* QNativeIpcKey_new() {
	return new (std::nothrow) QNativeIpcKey();
}

QNativeIpcKey* QNativeIpcKey_new2(Type type) {
	return new (std::nothrow) QNativeIpcKey(type);
}

QNativeIpcKey* QNativeIpcKey_new3(struct miqt_string k) {
	QString k_QString = QString::fromUtf8(k.data, k.len);
	return new (std::nothrow) QNativeIpcKey(k_QString);
}

QNativeIpcKey* QNativeIpcKey_new4(QNativeIpcKey* other) {
	return new (std::nothrow) QNativeIpcKey(*other);
}

QNativeIpcKey* QNativeIpcKey_new5(struct miqt_string k, Type type) {
	QString k_QString = QString::fromUtf8(k.data, k.len);
	return new (std::nothrow) QNativeIpcKey(k_QString, type);
}

Type QNativeIpcKey_legacyDefaultTypeForOs() {
	return QNativeIpcKey::legacyDefaultTypeForOs();
}

void QNativeIpcKey_operatorAssign(QNativeIpcKey* self, QNativeIpcKey* other) {
	self->operator=(*other);
}

void QNativeIpcKey_swap(QNativeIpcKey* self, QNativeIpcKey* other) {
	self->swap(*other);
}

bool QNativeIpcKey_isEmpty(const QNativeIpcKey* self) {
	return self->isEmpty();
}

bool QNativeIpcKey_isValid(const QNativeIpcKey* self) {
	return self->isValid();
}

Type QNativeIpcKey_type(const QNativeIpcKey* self) {
	return self->type();
}

void QNativeIpcKey_setType(QNativeIpcKey* self, Type type) {
	self->setType(type);
}

struct miqt_string QNativeIpcKey_nativeKey(const QNativeIpcKey* self) {
	QString _ret = self->nativeKey();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNativeIpcKey_setNativeKey(QNativeIpcKey* self, struct miqt_string newKey) {
	QString newKey_QString = QString::fromUtf8(newKey.data, newKey.len);
	self->setNativeKey(newKey_QString);
}

struct miqt_string QNativeIpcKey_toString(const QNativeIpcKey* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QNativeIpcKey* QNativeIpcKey_fromString(struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QNativeIpcKey(QNativeIpcKey::fromString(string_QString));
}

void QNativeIpcKey_delete(QNativeIpcKey* self) {
	delete self;
}

