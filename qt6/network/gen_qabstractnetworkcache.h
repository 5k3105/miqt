#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QABSTRACTNETWORKCACHE_H
#define MIQT_QT6_NETWORK_GEN_QABSTRACTNETWORKCACHE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractNetworkCache;
class QDateTime;
class QHttpHeaders;
class QIODevice;
class QMetaMethod;
class QMetaObject;
class QNetworkCacheMetaData;
class QObject;
class QUrl;
#else
typedef struct QAbstractNetworkCache QAbstractNetworkCache;
typedef struct QDateTime QDateTime;
typedef struct QHttpHeaders QHttpHeaders;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkCacheMetaData QNetworkCacheMetaData;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QNetworkCacheMetaData* QNetworkCacheMetaData_new();
QNetworkCacheMetaData* QNetworkCacheMetaData_new2(QNetworkCacheMetaData* other);
void QNetworkCacheMetaData_operatorAssign(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other);
void QNetworkCacheMetaData_swap(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other);
bool QNetworkCacheMetaData_operatorEqual(const QNetworkCacheMetaData* self, QNetworkCacheMetaData* other);
bool QNetworkCacheMetaData_operatorNotEqual(const QNetworkCacheMetaData* self, QNetworkCacheMetaData* other);
bool QNetworkCacheMetaData_isValid(const QNetworkCacheMetaData* self);
QUrl* QNetworkCacheMetaData_url(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_setUrl(QNetworkCacheMetaData* self, QUrl* url);
RawHeaderList QNetworkCacheMetaData_rawHeaders(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_setRawHeaders(QNetworkCacheMetaData* self, const RawHeaderList* headers);
QHttpHeaders* QNetworkCacheMetaData_headers(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_setHeaders(QNetworkCacheMetaData* self, QHttpHeaders* headers);
QDateTime* QNetworkCacheMetaData_lastModified(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_setLastModified(QNetworkCacheMetaData* self, QDateTime* dateTime);
QDateTime* QNetworkCacheMetaData_expirationDate(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_setExpirationDate(QNetworkCacheMetaData* self, QDateTime* dateTime);
bool QNetworkCacheMetaData_saveToDisk(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_setSaveToDisk(QNetworkCacheMetaData* self, bool allow);
AttributesMap QNetworkCacheMetaData_attributes(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_setAttributes(QNetworkCacheMetaData* self, const AttributesMap* attributes);

void QNetworkCacheMetaData_delete(QNetworkCacheMetaData* self);

void QAbstractNetworkCache_virtbase(QAbstractNetworkCache* src, QObject** outptr_QObject);
QMetaObject* QAbstractNetworkCache_metaObject(const QAbstractNetworkCache* self);
void* QAbstractNetworkCache_metacast(QAbstractNetworkCache* self, const char* param1);
struct miqt_string QAbstractNetworkCache_tr(const char* s);
QNetworkCacheMetaData* QAbstractNetworkCache_metaData(QAbstractNetworkCache* self, QUrl* url);
void QAbstractNetworkCache_updateMetaData(QAbstractNetworkCache* self, QNetworkCacheMetaData* metaData);
QIODevice* QAbstractNetworkCache_data(QAbstractNetworkCache* self, QUrl* url);
bool QAbstractNetworkCache_remove(QAbstractNetworkCache* self, QUrl* url);
long long QAbstractNetworkCache_cacheSize(const QAbstractNetworkCache* self);
QIODevice* QAbstractNetworkCache_prepare(QAbstractNetworkCache* self, QNetworkCacheMetaData* metaData);
void QAbstractNetworkCache_insert(QAbstractNetworkCache* self, QIODevice* device);
void QAbstractNetworkCache_clear(QAbstractNetworkCache* self);
struct miqt_string QAbstractNetworkCache_tr2(const char* s, const char* c);
struct miqt_string QAbstractNetworkCache_tr3(const char* s, const char* c, int n);

void QAbstractNetworkCache_delete(QAbstractNetworkCache* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
