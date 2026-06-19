#pragma once
#ifndef MIQT_QT6_QML_GEN_QJSLIST_H
#define MIQT_QT6_QML_GEN_QJSLIST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QJSListForInIterator;
class QJSListForOfIterator;
class QJSListIndexClamp;
#else
typedef struct QJSListForInIterator QJSListForInIterator;
typedef struct QJSListForOfIterator QJSListForOfIterator;
typedef struct QJSListIndexClamp QJSListIndexClamp;
#endif

QJSListIndexClamp* QJSListIndexClamp_new(QJSListIndexClamp* param1);
QJSListIndexClamp* QJSListIndexClamp_new2();
ptrdiff_t QJSListIndexClamp_clamp(ptrdiff_t start, ptrdiff_t max);
void QJSListIndexClamp_operatorAssign(QJSListIndexClamp* self, QJSListIndexClamp* param1);
ptrdiff_t QJSListIndexClamp_clamp2(ptrdiff_t start, ptrdiff_t max, ptrdiff_t min);

void QJSListIndexClamp_delete(QJSListIndexClamp* self);

QJSListForInIterator* QJSListForInIterator_new();
QJSListForInIterator* QJSListForInIterator_new2(QJSListForInIterator* param1);
bool QJSListForInIterator_hasNext(const QJSListForInIterator* self);
ptrdiff_t QJSListForInIterator_next(QJSListForInIterator* self);

void QJSListForInIterator_delete(QJSListForInIterator* self);

QJSListForOfIterator* QJSListForOfIterator_new();
QJSListForOfIterator* QJSListForOfIterator_new2(QJSListForOfIterator* param1);
void QJSListForOfIterator_init(QJSListForOfIterator* self);

void QJSListForOfIterator_delete(QJSListForOfIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
