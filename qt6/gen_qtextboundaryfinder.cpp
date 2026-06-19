#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBoundaryFinder>
#include <qtextboundaryfinder.h>
#include "gen_qtextboundaryfinder.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QTextBoundaryFinder* QTextBoundaryFinder_new() {
	return new (std::nothrow) QTextBoundaryFinder();
}

QTextBoundaryFinder* QTextBoundaryFinder_new2(QTextBoundaryFinder* other) {
	return new (std::nothrow) QTextBoundaryFinder(*other);
}

QTextBoundaryFinder* QTextBoundaryFinder_new3(BoundaryType type, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new (std::nothrow) QTextBoundaryFinder(type, string_QString);
}

QTextBoundaryFinder* QTextBoundaryFinder_new4(BoundaryType type, QChar* chars, ptrdiff_t length) {
	return new (std::nothrow) QTextBoundaryFinder(type, chars, (qsizetype)(length));
}

QTextBoundaryFinder* QTextBoundaryFinder_new5(BoundaryType type, QChar* chars, ptrdiff_t length, unsigned char* buffer) {
	return new (std::nothrow) QTextBoundaryFinder(type, chars, (qsizetype)(length), static_cast<unsigned char*>(buffer));
}

QTextBoundaryFinder* QTextBoundaryFinder_new6(BoundaryType type, QChar* chars, ptrdiff_t length, unsigned char* buffer, ptrdiff_t bufferSize) {
	return new (std::nothrow) QTextBoundaryFinder(type, chars, (qsizetype)(length), static_cast<unsigned char*>(buffer), (qsizetype)(bufferSize));
}

void QTextBoundaryFinder_operatorAssign(QTextBoundaryFinder* self, QTextBoundaryFinder* other) {
	self->operator=(*other);
}

void QTextBoundaryFinder_swap(QTextBoundaryFinder* self, QTextBoundaryFinder* other) {
	self->swap(*other);
}

bool QTextBoundaryFinder_isValid(const QTextBoundaryFinder* self) {
	return self->isValid();
}

BoundaryType QTextBoundaryFinder_type(const QTextBoundaryFinder* self) {
	return self->type();
}

struct miqt_string QTextBoundaryFinder_string(const QTextBoundaryFinder* self) {
	QString _ret = self->string();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextBoundaryFinder_toStart(QTextBoundaryFinder* self) {
	self->toStart();
}

void QTextBoundaryFinder_toEnd(QTextBoundaryFinder* self) {
	self->toEnd();
}

ptrdiff_t QTextBoundaryFinder_position(const QTextBoundaryFinder* self) {
	qsizetype _ret = self->position();
	return static_cast<ptrdiff_t>(_ret);
}

void QTextBoundaryFinder_setPosition(QTextBoundaryFinder* self, ptrdiff_t position) {
	self->setPosition((qsizetype)(position));
}

ptrdiff_t QTextBoundaryFinder_toNextBoundary(QTextBoundaryFinder* self) {
	qsizetype _ret = self->toNextBoundary();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QTextBoundaryFinder_toPreviousBoundary(QTextBoundaryFinder* self) {
	qsizetype _ret = self->toPreviousBoundary();
	return static_cast<ptrdiff_t>(_ret);
}

bool QTextBoundaryFinder_isAtBoundary(const QTextBoundaryFinder* self) {
	return self->isAtBoundary();
}

BoundaryReasons QTextBoundaryFinder_boundaryReasons(const QTextBoundaryFinder* self) {
	return self->boundaryReasons();
}

void QTextBoundaryFinder_delete(QTextBoundaryFinder* self) {
	delete self;
}

