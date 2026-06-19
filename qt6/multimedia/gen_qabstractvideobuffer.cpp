#include <QAbstractVideoBuffer>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractVideoBuffer__MapData
#include <QVideoFrameFormat>
#include <qabstractvideobuffer.h>
#include "gen_qabstractvideobuffer.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

MapData QAbstractVideoBuffer_map(QAbstractVideoBuffer* self, int mode) {
	return self->map(static_cast<QVideoFrame::MapMode>(mode));
}

void QAbstractVideoBuffer_unmap(QAbstractVideoBuffer* self) {
	self->unmap();
}

QVideoFrameFormat* QAbstractVideoBuffer_format(const QAbstractVideoBuffer* self) {
	return new QVideoFrameFormat(self->format());
}

void QAbstractVideoBuffer_delete(QAbstractVideoBuffer* self) {
	delete self;
}

int QAbstractVideoBuffer__MapData_planeCount(const QAbstractVideoBuffer__MapData* self) {
	return self->planeCount;
}

void QAbstractVideoBuffer__MapData_setPlaneCount(QAbstractVideoBuffer__MapData* self, int planeCount) {
	self->planeCount = static_cast<int>(planeCount);
}

int[4] QAbstractVideoBuffer__MapData_bytesPerLine(const QAbstractVideoBuffer__MapData* self) {
	return self->bytesPerLine;
}

void QAbstractVideoBuffer__MapData_setBytesPerLine(QAbstractVideoBuffer__MapData* self, int[4] bytesPerLine) {
	self->bytesPerLine = bytesPerLine;
}

uchar [4]* QAbstractVideoBuffer__MapData_data(const QAbstractVideoBuffer__MapData* self) {
	return self->data;
}

void QAbstractVideoBuffer__MapData_setData(QAbstractVideoBuffer__MapData* self, uchar [4]* data) {
	self->data = data;
}

int[4] QAbstractVideoBuffer__MapData_dataSize(const QAbstractVideoBuffer__MapData* self) {
	return self->dataSize;
}

void QAbstractVideoBuffer__MapData_setDataSize(QAbstractVideoBuffer__MapData* self, int[4] dataSize) {
	self->dataSize = dataSize;
}

void QAbstractVideoBuffer__MapData_delete(QAbstractVideoBuffer__MapData* self) {
	delete self;
}

