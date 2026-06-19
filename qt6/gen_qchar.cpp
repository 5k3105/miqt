#include <QChar>
#include <QLatin1Char>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qchar.h>
#include "gen_qchar.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QLatin1Char* QLatin1Char_new(char c) {
	return new (std::nothrow) QLatin1Char(static_cast<char>(c));
}

QLatin1Char* QLatin1Char_new2(QLatin1Char* param1) {
	return new (std::nothrow) QLatin1Char(*param1);
}

char QLatin1Char_toLatin1(const QLatin1Char* self) {
	return self->toLatin1();
}

void QLatin1Char_delete(QLatin1Char* self) {
	delete self;
}

QChar* QChar_new() {
	return new (std::nothrow) QChar();
}

QChar* QChar_new2(unsigned char c, unsigned char r) {
	return new (std::nothrow) QChar(static_cast<uchar>(c), static_cast<uchar>(r));
}

QChar* QChar_new3(QChar* param1) {
	return new (std::nothrow) QChar(*param1);
}

Category QChar_category(const QChar* self) {
	return self->category();
}

Direction QChar_direction(const QChar* self) {
	return self->direction();
}

JoiningType QChar_joiningType(const QChar* self) {
	return self->joiningType();
}

unsigned char QChar_combiningClass(const QChar* self) {
	return self->combiningClass();
}

QChar* QChar_mirroredChar(const QChar* self) {
	return new QChar(self->mirroredChar());
}

bool QChar_hasMirrored(const QChar* self) {
	return self->hasMirrored();
}

struct miqt_string QChar_decomposition(const QChar* self) {
	QString _ret = self->decomposition();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

Decomposition QChar_decompositionTag(const QChar* self) {
	return self->decompositionTag();
}

int QChar_digitValue(const QChar* self) {
	return self->digitValue();
}

QChar* QChar_toLower(const QChar* self) {
	return new QChar(self->toLower());
}

QChar* QChar_toUpper(const QChar* self) {
	return new QChar(self->toUpper());
}

QChar* QChar_toTitleCase(const QChar* self) {
	return new QChar(self->toTitleCase());
}

QChar* QChar_toCaseFolded(const QChar* self) {
	return new QChar(self->toCaseFolded());
}

Script QChar_script(const QChar* self) {
	return self->script();
}

UnicodeVersion QChar_unicodeVersion(const QChar* self) {
	return self->unicodeVersion();
}

char QChar_toLatin1(const QChar* self) {
	return self->toLatin1();
}

QChar* QChar_fromLatin1(char c) {
	return new QChar(QChar::fromLatin1(static_cast<char>(c)));
}

bool QChar_isNull(const QChar* self) {
	return self->isNull();
}

bool QChar_isPrint(const QChar* self) {
	return self->isPrint();
}

bool QChar_isSpace(const QChar* self) {
	return self->isSpace();
}

bool QChar_isMark(const QChar* self) {
	return self->isMark();
}

bool QChar_isPunct(const QChar* self) {
	return self->isPunct();
}

bool QChar_isSymbol(const QChar* self) {
	return self->isSymbol();
}

bool QChar_isLetter(const QChar* self) {
	return self->isLetter();
}

bool QChar_isNumber(const QChar* self) {
	return self->isNumber();
}

bool QChar_isLetterOrNumber(const QChar* self) {
	return self->isLetterOrNumber();
}

bool QChar_isDigit(const QChar* self) {
	return self->isDigit();
}

bool QChar_isLower(const QChar* self) {
	return self->isLower();
}

bool QChar_isUpper(const QChar* self) {
	return self->isUpper();
}

bool QChar_isTitleCase(const QChar* self) {
	return self->isTitleCase();
}

bool QChar_isNonCharacter(const QChar* self) {
	return self->isNonCharacter();
}

bool QChar_isHighSurrogate(const QChar* self) {
	return self->isHighSurrogate();
}

bool QChar_isLowSurrogate(const QChar* self) {
	return self->isLowSurrogate();
}

bool QChar_isSurrogate(const QChar* self) {
	return self->isSurrogate();
}

unsigned char QChar_cell(const QChar* self) {
	uchar _ret = self->cell();
	return static_cast<unsigned char>(_ret);
}

unsigned char QChar_row(const QChar* self) {
	uchar _ret = self->row();
	return static_cast<unsigned char>(_ret);
}

void QChar_setCell(QChar* self, unsigned char acell) {
	self->setCell(static_cast<uchar>(acell));
}

void QChar_setRow(QChar* self, unsigned char arow) {
	self->setRow(static_cast<uchar>(arow));
}

UnicodeVersion QChar_currentUnicodeVersion() {
	return QChar::currentUnicodeVersion();
}

void QChar_delete(QChar* self) {
	delete self;
}

