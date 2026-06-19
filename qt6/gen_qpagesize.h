#pragma once
#ifndef MIQT_QT6_GEN_QPAGESIZE_H
#define MIQT_QT6_GEN_QPAGESIZE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPageSize;
class QRect;
class QRectF;
class QSize;
class QSizeF;
#else
typedef struct QPageSize QPageSize;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
#endif

QPageSize* QPageSize_new();
QPageSize* QPageSize_new2(PageSizeId pageSizeId);
QPageSize* QPageSize_new3(QSize* pointSize);
QPageSize* QPageSize_new4(QSizeF* size, Unit units);
QPageSize* QPageSize_new5(QPageSize* other);
QPageSize* QPageSize_new6(QSize* pointSize, struct miqt_string name);
QPageSize* QPageSize_new7(QSize* pointSize, struct miqt_string name, SizeMatchPolicy matchPolicy);
QPageSize* QPageSize_new8(QSizeF* size, Unit units, struct miqt_string name);
QPageSize* QPageSize_new9(QSizeF* size, Unit units, struct miqt_string name, SizeMatchPolicy matchPolicy);
void QPageSize_operatorAssign(QPageSize* self, QPageSize* other);
void QPageSize_swap(QPageSize* self, QPageSize* other);
bool QPageSize_isEquivalentTo(const QPageSize* self, QPageSize* other);
bool QPageSize_isValid(const QPageSize* self);
struct miqt_string QPageSize_key(const QPageSize* self);
struct miqt_string QPageSize_name(const QPageSize* self);
PageSizeId QPageSize_id(const QPageSize* self);
int QPageSize_windowsId(const QPageSize* self);
QSizeF* QPageSize_definitionSize(const QPageSize* self);
Unit QPageSize_definitionUnits(const QPageSize* self);
QSizeF* QPageSize_size(const QPageSize* self, Unit units);
QSize* QPageSize_sizePoints(const QPageSize* self);
QSize* QPageSize_sizePixels(const QPageSize* self, int resolution);
QRectF* QPageSize_rect(const QPageSize* self, Unit units);
QRect* QPageSize_rectPoints(const QPageSize* self);
QRect* QPageSize_rectPixels(const QPageSize* self, int resolution);
struct miqt_string QPageSize_keyWithPageSizeId(PageSizeId pageSizeId);
struct miqt_string QPageSize_nameWithPageSizeId(PageSizeId pageSizeId);
PageSizeId QPageSize_idWithPointSize(QSize* pointSize);
PageSizeId QPageSize_id2(QSizeF* size, Unit units);
PageSizeId QPageSize_idWithWindowsId(int windowsId);
int QPageSize_windowsIdWithPageSizeId(PageSizeId pageSizeId);
QSizeF* QPageSize_definitionSizeWithPageSizeId(PageSizeId pageSizeId);
Unit QPageSize_definitionUnitsWithPageSizeId(PageSizeId pageSizeId);
QSizeF* QPageSize_size2(PageSizeId pageSizeId, Unit units);
QSize* QPageSize_sizePointsWithPageSizeId(PageSizeId pageSizeId);
QSize* QPageSize_sizePixels2(PageSizeId pageSizeId, int resolution);
PageSizeId QPageSize_id3(QSize* pointSize, SizeMatchPolicy matchPolicy);
PageSizeId QPageSize_id4(QSizeF* size, Unit units, SizeMatchPolicy matchPolicy);

void QPageSize_delete(QPageSize* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
