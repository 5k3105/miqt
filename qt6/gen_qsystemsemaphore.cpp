#include <QNativeIpcKey>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSystemSemaphore>
#include <qsystemsemaphore.h>
#include "gen_qsystemsemaphore.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSystemSemaphore* QSystemSemaphore_new(QNativeIpcKey* key) {
	return new (std::nothrow) QSystemSemaphore(*key);
}

QSystemSemaphore* QSystemSemaphore_new2(struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new (std::nothrow) QSystemSemaphore(key_QString);
}

QSystemSemaphore* QSystemSemaphore_new3(QNativeIpcKey* key, int initialValue) {
	return new (std::nothrow) QSystemSemaphore(*key, static_cast<int>(initialValue));
}

QSystemSemaphore* QSystemSemaphore_new4(QNativeIpcKey* key, int initialValue, AccessMode param3) {
	return new (std::nothrow) QSystemSemaphore(*key, static_cast<int>(initialValue), param3);
}

QSystemSemaphore* QSystemSemaphore_new5(struct miqt_string key, int initialValue) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new (std::nothrow) QSystemSemaphore(key_QString, static_cast<int>(initialValue));
}

QSystemSemaphore* QSystemSemaphore_new6(struct miqt_string key, int initialValue, AccessMode mode) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new (std::nothrow) QSystemSemaphore(key_QString, static_cast<int>(initialValue), mode);
}

struct miqt_string QSystemSemaphore_tr(const char* sourceText) {
	QString _ret = QSystemSemaphore::tr(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSystemSemaphore_setNativeKey(QSystemSemaphore* self, QNativeIpcKey* key) {
	self->setNativeKey(*key);
}

void QSystemSemaphore_setNativeKeyWithKey(QSystemSemaphore* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setNativeKey(key_QString);
}

QNativeIpcKey* QSystemSemaphore_nativeIpcKey(const QSystemSemaphore* self) {
	return new QNativeIpcKey(self->nativeIpcKey());
}

void QSystemSemaphore_setKey(QSystemSemaphore* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setKey(key_QString);
}

struct miqt_string QSystemSemaphore_key(const QSystemSemaphore* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSystemSemaphore_acquire(QSystemSemaphore* self) {
	return self->acquire();
}

bool QSystemSemaphore_release(QSystemSemaphore* self) {
	return self->release();
}

SystemSemaphoreError QSystemSemaphore_error(const QSystemSemaphore* self) {
	return self->error();
}

struct miqt_string QSystemSemaphore_errorString(const QSystemSemaphore* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSystemSemaphore_isKeyTypeSupported(uint16_t type) {
	return QSystemSemaphore::isKeyTypeSupported(static_cast<QNativeIpcKey::Type>(type));
}

QNativeIpcKey* QSystemSemaphore_platformSafeKey(struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QNativeIpcKey(QSystemSemaphore::platformSafeKey(key_QString));
}

QNativeIpcKey* QSystemSemaphore_legacyNativeKey(struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QNativeIpcKey(QSystemSemaphore::legacyNativeKey(key_QString));
}

struct miqt_string QSystemSemaphore_tr2(const char* sourceText, const char* disambiguation) {
	QString _ret = QSystemSemaphore::tr(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSystemSemaphore_tr3(const char* sourceText, const char* disambiguation, int n) {
	QString _ret = QSystemSemaphore::tr(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSystemSemaphore_setNativeKey2(QSystemSemaphore* self, QNativeIpcKey* key, int initialValue) {
	self->setNativeKey(*key, static_cast<int>(initialValue));
}

void QSystemSemaphore_setNativeKey3(QSystemSemaphore* self, QNativeIpcKey* key, int initialValue, AccessMode param3) {
	self->setNativeKey(*key, static_cast<int>(initialValue), param3);
}

void QSystemSemaphore_setNativeKey4(QSystemSemaphore* self, struct miqt_string key, int initialValue) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setNativeKey(key_QString, static_cast<int>(initialValue));
}

void QSystemSemaphore_setNativeKey5(QSystemSemaphore* self, struct miqt_string key, int initialValue, AccessMode mode) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setNativeKey(key_QString, static_cast<int>(initialValue), mode);
}

void QSystemSemaphore_setNativeKey6(QSystemSemaphore* self, struct miqt_string key, int initialValue, AccessMode mode, uint16_t type) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setNativeKey(key_QString, static_cast<int>(initialValue), mode, static_cast<QNativeIpcKey::Type>(type));
}

void QSystemSemaphore_setKey2(QSystemSemaphore* self, struct miqt_string key, int initialValue) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setKey(key_QString, static_cast<int>(initialValue));
}

void QSystemSemaphore_setKey3(QSystemSemaphore* self, struct miqt_string key, int initialValue, AccessMode mode) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setKey(key_QString, static_cast<int>(initialValue), mode);
}

bool QSystemSemaphore_releaseWithInt(QSystemSemaphore* self, int n) {
	return self->release(static_cast<int>(n));
}

QNativeIpcKey* QSystemSemaphore_platformSafeKey2(struct miqt_string key, uint16_t type) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QNativeIpcKey(QSystemSemaphore::platformSafeKey(key_QString, static_cast<QNativeIpcKey::Type>(type)));
}

QNativeIpcKey* QSystemSemaphore_legacyNativeKey2(struct miqt_string key, uint16_t type) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QNativeIpcKey(QSystemSemaphore::legacyNativeKey(key_QString, static_cast<QNativeIpcKey::Type>(type)));
}

void QSystemSemaphore_delete(QSystemSemaphore* self) {
	delete self;
}

