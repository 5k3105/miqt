#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVideoFrameFormat>
#include <qvideoframeformat.h>
#include "gen_qvideoframeformat.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QVideoFrameFormat* QVideoFrameFormat_new() {
	return new (std::nothrow) QVideoFrameFormat();
}

QVideoFrameFormat* QVideoFrameFormat_new2(QSize* size, PixelFormat pixelFormat) {
	return new (std::nothrow) QVideoFrameFormat(*size, pixelFormat);
}

QVideoFrameFormat* QVideoFrameFormat_new3(QVideoFrameFormat* format) {
	return new (std::nothrow) QVideoFrameFormat(*format);
}

void QVideoFrameFormat_swap(QVideoFrameFormat* self, QVideoFrameFormat* other) {
	self->swap(*other);
}

void QVideoFrameFormat_detach(QVideoFrameFormat* self) {
	self->detach();
}

void QVideoFrameFormat_operatorAssign(QVideoFrameFormat* self, QVideoFrameFormat* format) {
	self->operator=(*format);
}

bool QVideoFrameFormat_operatorEqual(const QVideoFrameFormat* self, QVideoFrameFormat* format) {
	return (*self == *format);
}

bool QVideoFrameFormat_operatorNotEqual(const QVideoFrameFormat* self, QVideoFrameFormat* format) {
	return (*self != *format);
}

bool QVideoFrameFormat_isValid(const QVideoFrameFormat* self) {
	return self->isValid();
}

int QVideoFrameFormat_pixelFormat(const QVideoFrameFormat* self) {
	QVideoFrameFormat::PixelFormat _ret = self->pixelFormat();
	return static_cast<int>(_ret);
}

QSize* QVideoFrameFormat_frameSize(const QVideoFrameFormat* self) {
	return new QSize(self->frameSize());
}

void QVideoFrameFormat_setFrameSize(QVideoFrameFormat* self, QSize* size) {
	self->setFrameSize(*size);
}

void QVideoFrameFormat_setFrameSize2(QVideoFrameFormat* self, int width, int height) {
	self->setFrameSize(static_cast<int>(width), static_cast<int>(height));
}

int QVideoFrameFormat_frameWidth(const QVideoFrameFormat* self) {
	return self->frameWidth();
}

int QVideoFrameFormat_frameHeight(const QVideoFrameFormat* self) {
	return self->frameHeight();
}

int QVideoFrameFormat_planeCount(const QVideoFrameFormat* self) {
	return self->planeCount();
}

QRect* QVideoFrameFormat_viewport(const QVideoFrameFormat* self) {
	return new QRect(self->viewport());
}

void QVideoFrameFormat_setViewport(QVideoFrameFormat* self, QRect* viewport) {
	self->setViewport(*viewport);
}

Direction QVideoFrameFormat_scanLineDirection(const QVideoFrameFormat* self) {
	return self->scanLineDirection();
}

void QVideoFrameFormat_setScanLineDirection(QVideoFrameFormat* self, Direction direction) {
	self->setScanLineDirection(direction);
}

double QVideoFrameFormat_frameRate(const QVideoFrameFormat* self) {
	qreal _ret = self->frameRate();
	return static_cast<double>(_ret);
}

void QVideoFrameFormat_setFrameRate(QVideoFrameFormat* self, double rate) {
	self->setFrameRate(static_cast<qreal>(rate));
}

double QVideoFrameFormat_streamFrameRate(const QVideoFrameFormat* self) {
	qreal _ret = self->streamFrameRate();
	return static_cast<double>(_ret);
}

void QVideoFrameFormat_setStreamFrameRate(QVideoFrameFormat* self, double rate) {
	self->setStreamFrameRate(static_cast<qreal>(rate));
}

YCbCrColorSpace QVideoFrameFormat_yCbCrColorSpace(const QVideoFrameFormat* self) {
	return self->yCbCrColorSpace();
}

void QVideoFrameFormat_setYCbCrColorSpace(QVideoFrameFormat* self, YCbCrColorSpace colorSpace) {
	self->setYCbCrColorSpace(colorSpace);
}

ColorSpace QVideoFrameFormat_colorSpace(const QVideoFrameFormat* self) {
	return self->colorSpace();
}

void QVideoFrameFormat_setColorSpace(QVideoFrameFormat* self, ColorSpace colorSpace) {
	self->setColorSpace(colorSpace);
}

ColorTransfer QVideoFrameFormat_colorTransfer(const QVideoFrameFormat* self) {
	return self->colorTransfer();
}

void QVideoFrameFormat_setColorTransfer(QVideoFrameFormat* self, ColorTransfer colorTransfer) {
	self->setColorTransfer(colorTransfer);
}

ColorRange QVideoFrameFormat_colorRange(const QVideoFrameFormat* self) {
	return self->colorRange();
}

void QVideoFrameFormat_setColorRange(QVideoFrameFormat* self, ColorRange range) {
	self->setColorRange(range);
}

bool QVideoFrameFormat_isMirrored(const QVideoFrameFormat* self) {
	return self->isMirrored();
}

void QVideoFrameFormat_setMirrored(QVideoFrameFormat* self, bool mirrored) {
	self->setMirrored(mirrored);
}

int QVideoFrameFormat_rotation(const QVideoFrameFormat* self) {
	QtVideo::Rotation _ret = self->rotation();
	return static_cast<int>(_ret);
}

void QVideoFrameFormat_setRotation(QVideoFrameFormat* self, int rotation) {
	self->setRotation(static_cast<QtVideo::Rotation>(rotation));
}

struct miqt_string QVideoFrameFormat_vertexShaderFileName(const QVideoFrameFormat* self) {
	QString _ret = self->vertexShaderFileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoFrameFormat_fragmentShaderFileName(const QVideoFrameFormat* self) {
	QString _ret = self->fragmentShaderFileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

float QVideoFrameFormat_maxLuminance(const QVideoFrameFormat* self) {
	return self->maxLuminance();
}

void QVideoFrameFormat_setMaxLuminance(QVideoFrameFormat* self, float lum) {
	self->setMaxLuminance(static_cast<float>(lum));
}

PixelFormat QVideoFrameFormat_pixelFormatFromImageFormat(int format) {
	return QVideoFrameFormat::pixelFormatFromImageFormat(static_cast<QImage::Format>(format));
}

int QVideoFrameFormat_imageFormatFromPixelFormat(PixelFormat format) {
	QImage::Format _ret = QVideoFrameFormat::imageFormatFromPixelFormat(format);
	return static_cast<int>(_ret);
}

struct miqt_string QVideoFrameFormat_pixelFormatToString(int pixelFormat) {
	QString _ret = QVideoFrameFormat::pixelFormatToString(static_cast<QVideoFrameFormat::PixelFormat>(pixelFormat));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVideoFrameFormat_delete(QVideoFrameFormat* self) {
	delete self;
}

