#include <QColorSpace>
#include <QPdfOutputIntent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qpdfoutputintent.h>
#include "gen_qpdfoutputintent.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPdfOutputIntent* QPdfOutputIntent_new() {
	return new (std::nothrow) QPdfOutputIntent();
}

QPdfOutputIntent* QPdfOutputIntent_new2(QPdfOutputIntent* other) {
	return new (std::nothrow) QPdfOutputIntent(*other);
}

void QPdfOutputIntent_operatorAssign(QPdfOutputIntent* self, QPdfOutputIntent* other) {
	self->operator=(*other);
}

void QPdfOutputIntent_swap(QPdfOutputIntent* self, QPdfOutputIntent* other) {
	self->swap(*other);
}

struct miqt_string QPdfOutputIntent_outputConditionIdentifier(const QPdfOutputIntent* self) {
	QString _ret = self->outputConditionIdentifier();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPdfOutputIntent_setOutputConditionIdentifier(QPdfOutputIntent* self, struct miqt_string identifier) {
	QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
	self->setOutputConditionIdentifier(identifier_QString);
}

struct miqt_string QPdfOutputIntent_outputCondition(const QPdfOutputIntent* self) {
	QString _ret = self->outputCondition();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPdfOutputIntent_setOutputCondition(QPdfOutputIntent* self, struct miqt_string condition) {
	QString condition_QString = QString::fromUtf8(condition.data, condition.len);
	self->setOutputCondition(condition_QString);
}

QUrl* QPdfOutputIntent_registryName(const QPdfOutputIntent* self) {
	return new QUrl(self->registryName());
}

void QPdfOutputIntent_setRegistryName(QPdfOutputIntent* self, QUrl* name) {
	self->setRegistryName(*name);
}

QColorSpace* QPdfOutputIntent_outputProfile(const QPdfOutputIntent* self) {
	return new QColorSpace(self->outputProfile());
}

void QPdfOutputIntent_setOutputProfile(QPdfOutputIntent* self, QColorSpace* profile) {
	self->setOutputProfile(*profile);
}

void QPdfOutputIntent_delete(QPdfOutputIntent* self) {
	delete self;
}

