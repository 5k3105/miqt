#include <QAnyStringView>
#include <QByteArrayView>
#include <QFormDataBuilder>
#include <QFormDataPartBuilder>
#include <QHttpHeaders>
#include <QIODevice>
#include <qformdatabuilder.h>
#include "gen_qformdatabuilder.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QFormDataPartBuilder* QFormDataPartBuilder_new() {
	return new (std::nothrow) QFormDataPartBuilder();
}

QFormDataPartBuilder* QFormDataPartBuilder_new2(QFormDataPartBuilder* param1) {
	return new (std::nothrow) QFormDataPartBuilder(*param1);
}

void QFormDataPartBuilder_swap(QFormDataPartBuilder* self, QFormDataPartBuilder* other) {
	self->swap(*other);
}

QFormDataPartBuilder* QFormDataPartBuilder_setBody(QFormDataPartBuilder* self, QByteArrayView* data) {
	return new QFormDataPartBuilder(self->setBody(*data));
}

QFormDataPartBuilder* QFormDataPartBuilder_setBodyDevice(QFormDataPartBuilder* self, QIODevice* body) {
	return new QFormDataPartBuilder(self->setBodyDevice(body));
}

QFormDataPartBuilder* QFormDataPartBuilder_setHeaders(QFormDataPartBuilder* self, QHttpHeaders* headers) {
	return new QFormDataPartBuilder(self->setHeaders(*headers));
}

QFormDataPartBuilder* QFormDataPartBuilder_setBody2(QFormDataPartBuilder* self, QByteArrayView* data, QAnyStringView* fileName) {
	return new QFormDataPartBuilder(self->setBody(*data, *fileName));
}

QFormDataPartBuilder* QFormDataPartBuilder_setBody3(QFormDataPartBuilder* self, QByteArrayView* data, QAnyStringView* fileName, QAnyStringView* mimeType) {
	return new QFormDataPartBuilder(self->setBody(*data, *fileName, *mimeType));
}

QFormDataPartBuilder* QFormDataPartBuilder_setBodyDevice2(QFormDataPartBuilder* self, QIODevice* body, QAnyStringView* fileName) {
	return new QFormDataPartBuilder(self->setBodyDevice(body, *fileName));
}

QFormDataPartBuilder* QFormDataPartBuilder_setBodyDevice3(QFormDataPartBuilder* self, QIODevice* body, QAnyStringView* fileName, QAnyStringView* mimeType) {
	return new QFormDataPartBuilder(self->setBodyDevice(body, *fileName, *mimeType));
}

void QFormDataPartBuilder_delete(QFormDataPartBuilder* self) {
	delete self;
}

QFormDataBuilder* QFormDataBuilder_new() {
	return new (std::nothrow) QFormDataBuilder();
}

void QFormDataBuilder_swap(QFormDataBuilder* self, QFormDataBuilder* other) {
	self->swap(*other);
}

QFormDataPartBuilder* QFormDataBuilder_part(QFormDataBuilder* self, QAnyStringView* name) {
	return new QFormDataPartBuilder(self->part(*name));
}

void QFormDataBuilder_delete(QFormDataBuilder* self) {
	delete self;
}

