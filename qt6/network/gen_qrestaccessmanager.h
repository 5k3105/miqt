#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QRESTACCESSMANAGER_H
#define MIQT_QT6_NETWORK_GEN_QRESTACCESSMANAGER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QHttpMultiPart;
class QIODevice;
class QJsonDocument;
class QMetaMethod;
class QMetaObject;
class QNetworkAccessManager;
class QNetworkReply;
class QNetworkRequest;
class QObject;
class QRestAccessManager;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHttpMultiPart QHttpMultiPart;
typedef struct QIODevice QIODevice;
typedef struct QJsonDocument QJsonDocument;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkAccessManager QNetworkAccessManager;
typedef struct QNetworkReply QNetworkReply;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QObject QObject;
typedef struct QRestAccessManager QRestAccessManager;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QRestAccessManager* QRestAccessManager_new(QNetworkAccessManager* manager);
QRestAccessManager* QRestAccessManager_new2(QNetworkAccessManager* manager, QObject* parent);
void QRestAccessManager_virtbase(QRestAccessManager* src, QObject** outptr_QObject);
QMetaObject* QRestAccessManager_metaObject(const QRestAccessManager* self);
void* QRestAccessManager_metacast(QRestAccessManager* self, const char* param1);
struct miqt_string QRestAccessManager_tr(const char* s);
QNetworkAccessManager* QRestAccessManager_networkAccessManager(const QRestAccessManager* self);
QNetworkReply* QRestAccessManager_deleteResource(QRestAccessManager* self, QNetworkRequest* request);
QNetworkReply* QRestAccessManager_head(QRestAccessManager* self, QNetworkRequest* request);
QNetworkReply* QRestAccessManager_get(QRestAccessManager* self, QNetworkRequest* request);
QNetworkReply* QRestAccessManager_get2(QRestAccessManager* self, QNetworkRequest* request, struct miqt_string data);
QNetworkReply* QRestAccessManager_get3(QRestAccessManager* self, QNetworkRequest* request, QJsonDocument* data);
QNetworkReply* QRestAccessManager_get4(QRestAccessManager* self, QNetworkRequest* request, QIODevice* data);
QNetworkReply* QRestAccessManager_post(QRestAccessManager* self, QNetworkRequest* request, QJsonDocument* data);
QNetworkReply* QRestAccessManager_post2(QRestAccessManager* self, QNetworkRequest* request, struct miqt_map /* of struct miqt_string to QVariant* */  data);
QNetworkReply* QRestAccessManager_post3(QRestAccessManager* self, QNetworkRequest* request, struct miqt_string data);
QNetworkReply* QRestAccessManager_post4(QRestAccessManager* self, QNetworkRequest* request, QHttpMultiPart* data);
QNetworkReply* QRestAccessManager_post5(QRestAccessManager* self, QNetworkRequest* request, QIODevice* data);
QNetworkReply* QRestAccessManager_put(QRestAccessManager* self, QNetworkRequest* request, QJsonDocument* data);
QNetworkReply* QRestAccessManager_put2(QRestAccessManager* self, QNetworkRequest* request, struct miqt_map /* of struct miqt_string to QVariant* */  data);
QNetworkReply* QRestAccessManager_put3(QRestAccessManager* self, QNetworkRequest* request, struct miqt_string data);
QNetworkReply* QRestAccessManager_put4(QRestAccessManager* self, QNetworkRequest* request, QHttpMultiPart* data);
QNetworkReply* QRestAccessManager_put5(QRestAccessManager* self, QNetworkRequest* request, QIODevice* data);
QNetworkReply* QRestAccessManager_patch(QRestAccessManager* self, QNetworkRequest* request, QJsonDocument* data);
QNetworkReply* QRestAccessManager_patch2(QRestAccessManager* self, QNetworkRequest* request, struct miqt_map /* of struct miqt_string to QVariant* */  data);
QNetworkReply* QRestAccessManager_patch3(QRestAccessManager* self, QNetworkRequest* request, struct miqt_string data);
QNetworkReply* QRestAccessManager_patch4(QRestAccessManager* self, QNetworkRequest* request, QIODevice* data);
QNetworkReply* QRestAccessManager_sendCustomRequest(QRestAccessManager* self, QNetworkRequest* request, struct miqt_string method, struct miqt_string data);
QNetworkReply* QRestAccessManager_sendCustomRequest2(QRestAccessManager* self, QNetworkRequest* request, struct miqt_string method, QIODevice* data);
QNetworkReply* QRestAccessManager_sendCustomRequest3(QRestAccessManager* self, QNetworkRequest* request, struct miqt_string method, QHttpMultiPart* data);
struct miqt_string QRestAccessManager_tr2(const char* s, const char* c);
struct miqt_string QRestAccessManager_tr3(const char* s, const char* c, int n);

bool QRestAccessManager_override_virtual_event(void* self, intptr_t slot);
bool QRestAccessManager_virtualbase_event(void* self, QEvent* event);
bool QRestAccessManager_override_virtual_eventFilter(void* self, intptr_t slot);
bool QRestAccessManager_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QRestAccessManager_override_virtual_timerEvent(void* self, intptr_t slot);
void QRestAccessManager_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QRestAccessManager_override_virtual_childEvent(void* self, intptr_t slot);
void QRestAccessManager_virtualbase_childEvent(void* self, QChildEvent* event);
bool QRestAccessManager_override_virtual_customEvent(void* self, intptr_t slot);
void QRestAccessManager_virtualbase_customEvent(void* self, QEvent* event);
bool QRestAccessManager_override_virtual_connectNotify(void* self, intptr_t slot);
void QRestAccessManager_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QRestAccessManager_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QRestAccessManager_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QRestAccessManager_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QRestAccessManager_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QRestAccessManager_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QRestAccessManager_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QRestAccessManager_delete(QRestAccessManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
