#include <QAbstractNetworkCache>
#include <QDateTime>
#include <QHttpHeaders>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkCacheMetaData>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qabstractnetworkcache.h>
#include "gen_qabstractnetworkcache.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QNetworkCacheMetaData* QNetworkCacheMetaData_new() {
	return new (std::nothrow) QNetworkCacheMetaData();
}

QNetworkCacheMetaData* QNetworkCacheMetaData_new2(QNetworkCacheMetaData* other) {
	return new (std::nothrow) QNetworkCacheMetaData(*other);
}

void QNetworkCacheMetaData_operatorAssign(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
	self->operator=(*other);
}

void QNetworkCacheMetaData_swap(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
	self->swap(*other);
}

bool QNetworkCacheMetaData_operatorEqual(const QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
	return (*self == *other);
}

bool QNetworkCacheMetaData_operatorNotEqual(const QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
	return (*self != *other);
}

bool QNetworkCacheMetaData_isValid(const QNetworkCacheMetaData* self) {
	return self->isValid();
}

QUrl* QNetworkCacheMetaData_url(const QNetworkCacheMetaData* self) {
	return new QUrl(self->url());
}

void QNetworkCacheMetaData_setUrl(QNetworkCacheMetaData* self, QUrl* url) {
	self->setUrl(*url);
}

RawHeaderList QNetworkCacheMetaData_rawHeaders(const QNetworkCacheMetaData* self) {
	return self->rawHeaders();
}

void QNetworkCacheMetaData_setRawHeaders(QNetworkCacheMetaData* self, const RawHeaderList* headers) {
	self->setRawHeaders(*headers);
}

QHttpHeaders* QNetworkCacheMetaData_headers(const QNetworkCacheMetaData* self) {
	return new QHttpHeaders(self->headers());
}

void QNetworkCacheMetaData_setHeaders(QNetworkCacheMetaData* self, QHttpHeaders* headers) {
	self->setHeaders(*headers);
}

QDateTime* QNetworkCacheMetaData_lastModified(const QNetworkCacheMetaData* self) {
	return new QDateTime(self->lastModified());
}

void QNetworkCacheMetaData_setLastModified(QNetworkCacheMetaData* self, QDateTime* dateTime) {
	self->setLastModified(*dateTime);
}

QDateTime* QNetworkCacheMetaData_expirationDate(const QNetworkCacheMetaData* self) {
	return new QDateTime(self->expirationDate());
}

void QNetworkCacheMetaData_setExpirationDate(QNetworkCacheMetaData* self, QDateTime* dateTime) {
	self->setExpirationDate(*dateTime);
}

bool QNetworkCacheMetaData_saveToDisk(const QNetworkCacheMetaData* self) {
	return self->saveToDisk();
}

void QNetworkCacheMetaData_setSaveToDisk(QNetworkCacheMetaData* self, bool allow) {
	self->setSaveToDisk(allow);
}

AttributesMap QNetworkCacheMetaData_attributes(const QNetworkCacheMetaData* self) {
	return self->attributes();
}

void QNetworkCacheMetaData_setAttributes(QNetworkCacheMetaData* self, const AttributesMap* attributes) {
	self->setAttributes(*attributes);
}

void QNetworkCacheMetaData_delete(QNetworkCacheMetaData* self) {
	delete self;
}

void QAbstractNetworkCache_virtbase(QAbstractNetworkCache* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractNetworkCache_metaObject(const QAbstractNetworkCache* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractNetworkCache_metacast(QAbstractNetworkCache* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractNetworkCache_tr(const char* s) {
	QString _ret = QAbstractNetworkCache::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QNetworkCacheMetaData* QAbstractNetworkCache_metaData(QAbstractNetworkCache* self, QUrl* url) {
	return new QNetworkCacheMetaData(self->metaData(*url));
}

void QAbstractNetworkCache_updateMetaData(QAbstractNetworkCache* self, QNetworkCacheMetaData* metaData) {
	self->updateMetaData(*metaData);
}

QIODevice* QAbstractNetworkCache_data(QAbstractNetworkCache* self, QUrl* url) {
	return self->data(*url);
}

bool QAbstractNetworkCache_remove(QAbstractNetworkCache* self, QUrl* url) {
	return self->remove(*url);
}

long long QAbstractNetworkCache_cacheSize(const QAbstractNetworkCache* self) {
	qint64 _ret = self->cacheSize();
	return static_cast<long long>(_ret);
}

QIODevice* QAbstractNetworkCache_prepare(QAbstractNetworkCache* self, QNetworkCacheMetaData* metaData) {
	return self->prepare(*metaData);
}

void QAbstractNetworkCache_insert(QAbstractNetworkCache* self, QIODevice* device) {
	self->insert(device);
}

void QAbstractNetworkCache_clear(QAbstractNetworkCache* self) {
	self->clear();
}

struct miqt_string QAbstractNetworkCache_tr2(const char* s, const char* c) {
	QString _ret = QAbstractNetworkCache::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractNetworkCache_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractNetworkCache::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractNetworkCache_delete(QAbstractNetworkCache* self) {
	delete self;
}

