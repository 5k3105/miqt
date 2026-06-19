#pragma once
#ifndef MIQT_QT6_GEN_QCRYPTOGRAPHICHASH_H
#define MIQT_QT6_GEN_QCRYPTOGRAPHICHASH_H

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
class QCryptographicHash;
class QIODevice;
#else
typedef struct QByteArrayView QByteArrayView;
typedef struct QCryptographicHash QCryptographicHash;
typedef struct QIODevice QIODevice;
#endif

QCryptographicHash* QCryptographicHash_new(Algorithm method);
void QCryptographicHash_swap(QCryptographicHash* self, QCryptographicHash* other);
void QCryptographicHash_reset(QCryptographicHash* self);
Algorithm QCryptographicHash_algorithm(const QCryptographicHash* self);
void QCryptographicHash_addData(QCryptographicHash* self, const char* data, ptrdiff_t length);
void QCryptographicHash_addDataWithData(QCryptographicHash* self, QByteArrayView* data);
bool QCryptographicHash_addDataWithDevice(QCryptographicHash* self, QIODevice* device);
struct miqt_string QCryptographicHash_result(const QCryptographicHash* self);
QByteArrayView* QCryptographicHash_resultView(const QCryptographicHash* self);
struct miqt_string QCryptographicHash_hash(QByteArrayView* data, Algorithm method);
QByteArrayView* QCryptographicHash_hashInto(QSpan<char> buffer, QByteArrayView* data, Algorithm method);
QByteArrayView* QCryptographicHash_hashInto2(QSpan<uchar> buffer, QByteArrayView* data, Algorithm method);
QByteArrayView* QCryptographicHash_hashInto3(QSpan<std::byte> buffer, QByteArrayView* data, Algorithm method);
QByteArrayView* QCryptographicHash_hashInto4(QSpan<char> buffer, QSpan<const QByteArrayView> data, Algorithm method);
QByteArrayView* QCryptographicHash_hashInto5(QSpan<uchar> buffer, QSpan<const QByteArrayView> data, Algorithm method);
QByteArrayView* QCryptographicHash_hashInto6(QSpan<std::byte> buffer, QSpan<const QByteArrayView> data, Algorithm method);
int QCryptographicHash_hashLength(Algorithm method);
bool QCryptographicHash_supportsAlgorithm(Algorithm method);

void QCryptographicHash_delete(QCryptographicHash* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
