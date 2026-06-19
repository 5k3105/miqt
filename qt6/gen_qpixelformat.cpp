#include <QPixelFormat>
#include <qpixelformat.h>
#include "gen_qpixelformat.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPixelFormat* QPixelFormat_new() {
	return new (std::nothrow) QPixelFormat();
}

QPixelFormat* QPixelFormat_new2(ColorModel colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, AlphaUsage alphaUsage, AlphaPosition alphaPosition, AlphaPremultiplied premultiplied, TypeInterpretation typeInterpretation) {
	return new (std::nothrow) QPixelFormat(colorModel, static_cast<uchar>(firstSize), static_cast<uchar>(secondSize), static_cast<uchar>(thirdSize), static_cast<uchar>(fourthSize), static_cast<uchar>(fifthSize), static_cast<uchar>(alphaSize), alphaUsage, alphaPosition, premultiplied, typeInterpretation);
}

QPixelFormat* QPixelFormat_new3(QPixelFormat* param1) {
	return new (std::nothrow) QPixelFormat(*param1);
}

QPixelFormat* QPixelFormat_new4(ColorModel colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, AlphaUsage alphaUsage, AlphaPosition alphaPosition, AlphaPremultiplied premultiplied, TypeInterpretation typeInterpretation, ByteOrder byteOrder) {
	return new (std::nothrow) QPixelFormat(colorModel, static_cast<uchar>(firstSize), static_cast<uchar>(secondSize), static_cast<uchar>(thirdSize), static_cast<uchar>(fourthSize), static_cast<uchar>(fifthSize), static_cast<uchar>(alphaSize), alphaUsage, alphaPosition, premultiplied, typeInterpretation, byteOrder);
}

QPixelFormat* QPixelFormat_new5(ColorModel colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, AlphaUsage alphaUsage, AlphaPosition alphaPosition, AlphaPremultiplied premultiplied, TypeInterpretation typeInterpretation, ByteOrder byteOrder, unsigned char subEnum) {
	return new (std::nothrow) QPixelFormat(colorModel, static_cast<uchar>(firstSize), static_cast<uchar>(secondSize), static_cast<uchar>(thirdSize), static_cast<uchar>(fourthSize), static_cast<uchar>(fifthSize), static_cast<uchar>(alphaSize), alphaUsage, alphaPosition, premultiplied, typeInterpretation, byteOrder, static_cast<uchar>(subEnum));
}

ColorModel QPixelFormat_colorModel(const QPixelFormat* self) {
	return self->colorModel();
}

unsigned char QPixelFormat_channelCount(const QPixelFormat* self) {
	uchar _ret = self->channelCount();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_redSize(const QPixelFormat* self) {
	uchar _ret = self->redSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_greenSize(const QPixelFormat* self) {
	uchar _ret = self->greenSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_blueSize(const QPixelFormat* self) {
	uchar _ret = self->blueSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_cyanSize(const QPixelFormat* self) {
	uchar _ret = self->cyanSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_magentaSize(const QPixelFormat* self) {
	uchar _ret = self->magentaSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_yellowSize(const QPixelFormat* self) {
	uchar _ret = self->yellowSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_blackSize(const QPixelFormat* self) {
	uchar _ret = self->blackSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_hueSize(const QPixelFormat* self) {
	uchar _ret = self->hueSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_saturationSize(const QPixelFormat* self) {
	uchar _ret = self->saturationSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_lightnessSize(const QPixelFormat* self) {
	uchar _ret = self->lightnessSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_brightnessSize(const QPixelFormat* self) {
	uchar _ret = self->brightnessSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_alphaSize(const QPixelFormat* self) {
	uchar _ret = self->alphaSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_bitsPerPixel(const QPixelFormat* self) {
	uchar _ret = self->bitsPerPixel();
	return static_cast<unsigned char>(_ret);
}

AlphaUsage QPixelFormat_alphaUsage(const QPixelFormat* self) {
	return self->alphaUsage();
}

AlphaPosition QPixelFormat_alphaPosition(const QPixelFormat* self) {
	return self->alphaPosition();
}

AlphaPremultiplied QPixelFormat_premultiplied(const QPixelFormat* self) {
	return self->premultiplied();
}

TypeInterpretation QPixelFormat_typeInterpretation(const QPixelFormat* self) {
	return self->typeInterpretation();
}

ByteOrder QPixelFormat_byteOrder(const QPixelFormat* self) {
	return self->byteOrder();
}

YUVLayout QPixelFormat_yuvLayout(const QPixelFormat* self) {
	return self->yuvLayout();
}

unsigned char QPixelFormat_subEnum(const QPixelFormat* self) {
	uchar _ret = self->subEnum();
	return static_cast<unsigned char>(_ret);
}

void QPixelFormat_delete(QPixelFormat* self) {
	delete self;
}

