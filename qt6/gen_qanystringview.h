#pragma once
#ifndef MIQT_QT6_GEN_QANYSTRINGVIEW_H
#define MIQT_QT6_GEN_QANYSTRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAnyStringView;
class QChar;
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QChar QChar;
#endif

QAnyStringView* QAnyStringView_new();
QAnyStringView* QAnyStringView_new2(struct miqt_string str);
QAnyStringView* QAnyStringView_new3(struct miqt_string str);
QAnyStringView* QAnyStringView_new4(QAnyStringView* param1);
QAnyStringView* QAnyStringView_mid(const QAnyStringView* self, ptrdiff_t pos);
QAnyStringView* QAnyStringView_left(const QAnyStringView* self, ptrdiff_t n);
QAnyStringView* QAnyStringView_right(const QAnyStringView* self, ptrdiff_t n);
QAnyStringView* QAnyStringView_sliced(const QAnyStringView* self, ptrdiff_t pos);
QAnyStringView* QAnyStringView_sliced2(const QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n);
QAnyStringView* QAnyStringView_first(const QAnyStringView* self, ptrdiff_t n);
QAnyStringView* QAnyStringView_last(const QAnyStringView* self, ptrdiff_t n);
QAnyStringView* QAnyStringView_chopped(const QAnyStringView* self, ptrdiff_t n);
QAnyStringView* QAnyStringView_slice(QAnyStringView* self, ptrdiff_t pos);
QAnyStringView* QAnyStringView_slice2(QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n);
void QAnyStringView_truncate(QAnyStringView* self, ptrdiff_t n);
void QAnyStringView_chop(QAnyStringView* self, ptrdiff_t n);
struct miqt_string QAnyStringView_toString(const QAnyStringView* self);
ptrdiff_t QAnyStringView_size(const QAnyStringView* self);
const void* QAnyStringView_data(const QAnyStringView* self);
int QAnyStringView_compare(QAnyStringView* lhs, QAnyStringView* rhs);
bool QAnyStringView_equal(QAnyStringView* lhs, QAnyStringView* rhs);
QChar* QAnyStringView_front(const QAnyStringView* self);
QChar* QAnyStringView_back(const QAnyStringView* self);
bool QAnyStringView_empty(const QAnyStringView* self);
ptrdiff_t QAnyStringView_sizeBytes(const QAnyStringView* self);
ptrdiff_t QAnyStringView_maxSize(const QAnyStringView* self);
bool QAnyStringView_isNull(const QAnyStringView* self);
bool QAnyStringView_isEmpty(const QAnyStringView* self);
ptrdiff_t QAnyStringView_length(const QAnyStringView* self);
void QAnyStringView_operatorAssign(QAnyStringView* self, QAnyStringView* param1);
QAnyStringView* QAnyStringView_mid2(const QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n);
int QAnyStringView_compare2(QAnyStringView* lhs, QAnyStringView* rhs, int cs);

void QAnyStringView_delete(QAnyStringView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
