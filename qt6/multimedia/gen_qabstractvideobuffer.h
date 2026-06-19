#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QABSTRACTVIDEOBUFFER_H
#define MIQT_QT6_MULTIMEDIA_GEN_QABSTRACTVIDEOBUFFER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractVideoBuffer;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAbstractVideoBuffer__MapData)
typedef QAbstractVideoBuffer::MapData QAbstractVideoBuffer__MapData;
#else
class QAbstractVideoBuffer__MapData;
#endif
class QVideoFrameFormat;
#else
typedef struct QAbstractVideoBuffer QAbstractVideoBuffer;
typedef struct QAbstractVideoBuffer__MapData QAbstractVideoBuffer__MapData;
typedef struct QVideoFrameFormat QVideoFrameFormat;
#endif

MapData QAbstractVideoBuffer_map(QAbstractVideoBuffer* self, int mode);
void QAbstractVideoBuffer_unmap(QAbstractVideoBuffer* self);
QVideoFrameFormat* QAbstractVideoBuffer_format(const QAbstractVideoBuffer* self);

void QAbstractVideoBuffer_delete(QAbstractVideoBuffer* self);

int QAbstractVideoBuffer__MapData_planeCount(const QAbstractVideoBuffer__MapData* self);
void QAbstractVideoBuffer__MapData_setPlaneCount(QAbstractVideoBuffer__MapData* self, int planeCount);
int[4] QAbstractVideoBuffer__MapData_bytesPerLine(const QAbstractVideoBuffer__MapData* self);
void QAbstractVideoBuffer__MapData_setBytesPerLine(QAbstractVideoBuffer__MapData* self, int[4] bytesPerLine);
uchar [4]* QAbstractVideoBuffer__MapData_data(const QAbstractVideoBuffer__MapData* self);
void QAbstractVideoBuffer__MapData_setData(QAbstractVideoBuffer__MapData* self, uchar [4]* data);
int[4] QAbstractVideoBuffer__MapData_dataSize(const QAbstractVideoBuffer__MapData* self);
void QAbstractVideoBuffer__MapData_setDataSize(QAbstractVideoBuffer__MapData* self, int[4] dataSize);

void QAbstractVideoBuffer__MapData_delete(QAbstractVideoBuffer__MapData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
