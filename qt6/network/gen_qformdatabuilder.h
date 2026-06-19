#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QFORMDATABUILDER_H
#define MIQT_QT6_NETWORK_GEN_QFORMDATABUILDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAnyStringView;
class QByteArrayView;
class QFormDataBuilder;
class QFormDataPartBuilder;
class QHttpHeaders;
class QIODevice;
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QByteArrayView QByteArrayView;
typedef struct QFormDataBuilder QFormDataBuilder;
typedef struct QFormDataPartBuilder QFormDataPartBuilder;
typedef struct QHttpHeaders QHttpHeaders;
typedef struct QIODevice QIODevice;
#endif

QFormDataPartBuilder* QFormDataPartBuilder_new();
QFormDataPartBuilder* QFormDataPartBuilder_new2(QFormDataPartBuilder* param1);
void QFormDataPartBuilder_swap(QFormDataPartBuilder* self, QFormDataPartBuilder* other);
QFormDataPartBuilder* QFormDataPartBuilder_setBody(QFormDataPartBuilder* self, QByteArrayView* data);
QFormDataPartBuilder* QFormDataPartBuilder_setBodyDevice(QFormDataPartBuilder* self, QIODevice* body);
QFormDataPartBuilder* QFormDataPartBuilder_setHeaders(QFormDataPartBuilder* self, QHttpHeaders* headers);
QFormDataPartBuilder* QFormDataPartBuilder_setBody2(QFormDataPartBuilder* self, QByteArrayView* data, QAnyStringView* fileName);
QFormDataPartBuilder* QFormDataPartBuilder_setBody3(QFormDataPartBuilder* self, QByteArrayView* data, QAnyStringView* fileName, QAnyStringView* mimeType);
QFormDataPartBuilder* QFormDataPartBuilder_setBodyDevice2(QFormDataPartBuilder* self, QIODevice* body, QAnyStringView* fileName);
QFormDataPartBuilder* QFormDataPartBuilder_setBodyDevice3(QFormDataPartBuilder* self, QIODevice* body, QAnyStringView* fileName, QAnyStringView* mimeType);

void QFormDataPartBuilder_delete(QFormDataPartBuilder* self);

QFormDataBuilder* QFormDataBuilder_new();
void QFormDataBuilder_swap(QFormDataBuilder* self, QFormDataBuilder* other);
QFormDataPartBuilder* QFormDataBuilder_part(QFormDataBuilder* self, QAnyStringView* name);

void QFormDataBuilder_delete(QFormDataBuilder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
