#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QNETWORKREQUESTFACTORY_H
#define MIQT_QT6_NETWORK_GEN_QNETWORKREQUESTFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QHttpHeaders;
class QNetworkRequest;
class QNetworkRequestFactory;
class QSslConfiguration;
class QUrl;
class QUrlQuery;
class QVariant;
#else
typedef struct QHttpHeaders QHttpHeaders;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QNetworkRequestFactory QNetworkRequestFactory;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QUrl QUrl;
typedef struct QUrlQuery QUrlQuery;
typedef struct QVariant QVariant;
#endif

QNetworkRequestFactory* QNetworkRequestFactory_new();
QNetworkRequestFactory* QNetworkRequestFactory_new2(QUrl* baseUrl);
QNetworkRequestFactory* QNetworkRequestFactory_new3(QNetworkRequestFactory* other);
void QNetworkRequestFactory_operatorAssign(QNetworkRequestFactory* self, QNetworkRequestFactory* other);
void QNetworkRequestFactory_swap(QNetworkRequestFactory* self, QNetworkRequestFactory* other);
QUrl* QNetworkRequestFactory_baseUrl(const QNetworkRequestFactory* self);
void QNetworkRequestFactory_setBaseUrl(QNetworkRequestFactory* self, QUrl* url);
QSslConfiguration* QNetworkRequestFactory_sslConfiguration(const QNetworkRequestFactory* self);
void QNetworkRequestFactory_setSslConfiguration(QNetworkRequestFactory* self, QSslConfiguration* configuration);
QNetworkRequest* QNetworkRequestFactory_createRequest(const QNetworkRequestFactory* self);
QNetworkRequest* QNetworkRequestFactory_createRequestWithQuery(const QNetworkRequestFactory* self, QUrlQuery* query);
QNetworkRequest* QNetworkRequestFactory_createRequestWithPath(const QNetworkRequestFactory* self, struct miqt_string path);
QNetworkRequest* QNetworkRequestFactory_createRequest2(const QNetworkRequestFactory* self, struct miqt_string path, QUrlQuery* query);
void QNetworkRequestFactory_setCommonHeaders(QNetworkRequestFactory* self, QHttpHeaders* headers);
QHttpHeaders* QNetworkRequestFactory_commonHeaders(const QNetworkRequestFactory* self);
void QNetworkRequestFactory_clearCommonHeaders(QNetworkRequestFactory* self);
struct miqt_string QNetworkRequestFactory_bearerToken(const QNetworkRequestFactory* self);
void QNetworkRequestFactory_setBearerToken(QNetworkRequestFactory* self, struct miqt_string token);
void QNetworkRequestFactory_clearBearerToken(QNetworkRequestFactory* self);
struct miqt_string QNetworkRequestFactory_userName(const QNetworkRequestFactory* self);
void QNetworkRequestFactory_setUserName(QNetworkRequestFactory* self, struct miqt_string userName);
void QNetworkRequestFactory_clearUserName(QNetworkRequestFactory* self);
struct miqt_string QNetworkRequestFactory_password(const QNetworkRequestFactory* self);
void QNetworkRequestFactory_setPassword(QNetworkRequestFactory* self, struct miqt_string password);
void QNetworkRequestFactory_clearPassword(QNetworkRequestFactory* self);
QUrlQuery* QNetworkRequestFactory_queryParameters(const QNetworkRequestFactory* self);
void QNetworkRequestFactory_setQueryParameters(QNetworkRequestFactory* self, QUrlQuery* query);
void QNetworkRequestFactory_clearQueryParameters(QNetworkRequestFactory* self);
void QNetworkRequestFactory_setPriority(QNetworkRequestFactory* self, int priority);
int QNetworkRequestFactory_priority(const QNetworkRequestFactory* self);
QVariant* QNetworkRequestFactory_attribute(const QNetworkRequestFactory* self, int attribute);
QVariant* QNetworkRequestFactory_attribute2(const QNetworkRequestFactory* self, int attribute, QVariant* defaultValue);
void QNetworkRequestFactory_setAttribute(QNetworkRequestFactory* self, int attribute, QVariant* value);
void QNetworkRequestFactory_clearAttribute(QNetworkRequestFactory* self, int attribute);
void QNetworkRequestFactory_clearAttributes(QNetworkRequestFactory* self);

void QNetworkRequestFactory_delete(QNetworkRequestFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
