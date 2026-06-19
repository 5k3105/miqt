#pragma once
#ifndef MIQT_QT6_GEN_QMESSAGEAUTHENTICATIONCODE_H
#define MIQT_QT6_GEN_QMESSAGEAUTHENTICATIONCODE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArrayView;
class QIODevice;
class QMessageAuthenticationCode;
#else
typedef struct QByteArrayView QByteArrayView;
typedef struct QIODevice QIODevice;
typedef struct QMessageAuthenticationCode QMessageAuthenticationCode;
#endif

QMessageAuthenticationCode* QMessageAuthenticationCode_new(int method);
QMessageAuthenticationCode* QMessageAuthenticationCode_new2(int method, QByteArrayView* key);
void QMessageAuthenticationCode_swap(QMessageAuthenticationCode* self, QMessageAuthenticationCode* other);
void QMessageAuthenticationCode_reset(QMessageAuthenticationCode* self);
void QMessageAuthenticationCode_setKey(QMessageAuthenticationCode* self, QByteArrayView* key);
void QMessageAuthenticationCode_addData(QMessageAuthenticationCode* self, const char* data, ptrdiff_t length);
void QMessageAuthenticationCode_addDataWithData(QMessageAuthenticationCode* self, QByteArrayView* data);
bool QMessageAuthenticationCode_addDataWithDevice(QMessageAuthenticationCode* self, QIODevice* device);
QByteArrayView* QMessageAuthenticationCode_resultView(const QMessageAuthenticationCode* self);
struct miqt_string QMessageAuthenticationCode_result(const QMessageAuthenticationCode* self);
struct miqt_string QMessageAuthenticationCode_hash(QByteArrayView* message, QByteArrayView* key, int method);
QByteArrayView* QMessageAuthenticationCode_hashInto(QSpan<char> buffer, QByteArrayView* message, QByteArrayView* key, int method);
QByteArrayView* QMessageAuthenticationCode_hashInto2(QSpan<uchar> buffer, QByteArrayView* message, QByteArrayView* key, int method);
QByteArrayView* QMessageAuthenticationCode_hashInto3(QSpan<std::byte> buffer, QByteArrayView* message, QByteArrayView* key, int method);
QByteArrayView* QMessageAuthenticationCode_hashInto4(QSpan<char> buffer, QSpan<const QByteArrayView> messageParts, QByteArrayView* key, int method);
QByteArrayView* QMessageAuthenticationCode_hashInto5(QSpan<uchar> buffer, QSpan<const QByteArrayView> messageParts, QByteArrayView* key, int method);
QByteArrayView* QMessageAuthenticationCode_hashInto6(QSpan<std::byte> buffer, QSpan<const QByteArrayView> message, QByteArrayView* key, int method);

void QMessageAuthenticationCode_delete(QMessageAuthenticationCode* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
