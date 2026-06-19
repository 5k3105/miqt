#include <QByteArray>
#include <QByteArrayView>
#include <QChar>
#include <QLatin1Char>
#include <QLatin1String>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qlatin1stringview.h>
#include "gen_qlatin1stringview.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QLatin1String* QLatin1String_new() {
	return new (std::nothrow) QLatin1String();
}

QLatin1String* QLatin1String_new2(const char* s) {
	return new (std::nothrow) QLatin1String(s);
}

QLatin1String* QLatin1String_new3(const char* f, const char* l) {
	return new (std::nothrow) QLatin1String(f, l);
}

QLatin1String* QLatin1String_new4(const char* s, ptrdiff_t sz) {
	return new (std::nothrow) QLatin1String(s, (qsizetype)(sz));
}

QLatin1String* QLatin1String_new5(struct miqt_string s) {
	QByteArray s_QByteArray(s.data, s.len);
	return new (std::nothrow) QLatin1String(s_QByteArray);
}

QLatin1String* QLatin1String_new6(QByteArrayView* s) {
	return new (std::nothrow) QLatin1String(*s);
}

struct miqt_string QLatin1String_toString(const QLatin1String* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLatin1String_toUtf8(const QLatin1String* self) {
	QByteArray _qb = self->toUtf8();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

const char* QLatin1String_latin1(const QLatin1String* self) {
	return (const char*) self->latin1();
}

ptrdiff_t QLatin1String_size(const QLatin1String* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

const char* QLatin1String_data(const QLatin1String* self) {
	return (const char*) self->data();
}

const char* QLatin1String_constData(const QLatin1String* self) {
	return (const char*) self->constData();
}

const char* QLatin1String_constBegin(const QLatin1String* self) {
	return (const char*) self->constBegin();
}

const char* QLatin1String_constEnd(const QLatin1String* self) {
	return (const char*) self->constEnd();
}

QLatin1Char* QLatin1String_first(const QLatin1String* self) {
	return new QLatin1Char(self->first());
}

QLatin1Char* QLatin1String_last(const QLatin1String* self) {
	return new QLatin1Char(self->last());
}

ptrdiff_t QLatin1String_length(const QLatin1String* self) {
	qsizetype _ret = self->length();
	return static_cast<ptrdiff_t>(_ret);
}

bool QLatin1String_isNull(const QLatin1String* self) {
	return self->isNull();
}

bool QLatin1String_isEmpty(const QLatin1String* self) {
	return self->isEmpty();
}

bool QLatin1String_empty(const QLatin1String* self) {
	return self->empty();
}

QLatin1Char* QLatin1String_at(const QLatin1String* self, ptrdiff_t i) {
	return new QLatin1Char(self->at((qsizetype)(i)));
}

QLatin1Char* QLatin1String_operatorSubscript(const QLatin1String* self, ptrdiff_t i) {
	return new QLatin1Char(self->operator[]((qsizetype)(i)));
}

QLatin1Char* QLatin1String_front(const QLatin1String* self) {
	return new QLatin1Char(self->front());
}

QLatin1Char* QLatin1String_back(const QLatin1String* self) {
	return new QLatin1Char(self->back());
}

int QLatin1String_compareWithQChar(const QLatin1String* self, QChar* c) {
	return self->compare(*c);
}

int QLatin1String_compare3(const QLatin1String* self, QChar* c, int cs) {
	return self->compare(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QLatin1String_startsWithWithQChar(const QLatin1String* self, QChar* c) {
	return self->startsWith(*c);
}

bool QLatin1String_startsWith2(const QLatin1String* self, QChar* c, int cs) {
	return self->startsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QLatin1String_endsWithWithQChar(const QLatin1String* self, QChar* c) {
	return self->endsWith(*c);
}

bool QLatin1String_endsWith2(const QLatin1String* self, QChar* c, int cs) {
	return self->endsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QLatin1String_indexOfWithQChar(const QLatin1String* self, QChar* c) {
	qsizetype _ret = self->indexOf(*c);
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QLatin1String_indexOf2(const QLatin1String* self, QChar* c, ptrdiff_t from, int cs) {
	qsizetype _ret = self->indexOf(*c, (qsizetype)(from), static_cast<Qt::CaseSensitivity>(cs));
	return static_cast<ptrdiff_t>(_ret);
}

bool QLatin1String_containsWithQChar(const QLatin1String* self, QChar* c) {
	return self->contains(*c);
}

ptrdiff_t QLatin1String_lastIndexOfWithQChar(const QLatin1String* self, QChar* c) {
	qsizetype _ret = self->lastIndexOf(*c);
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QLatin1String_lastIndexOf4(const QLatin1String* self, QChar* c, int cs) {
	qsizetype _ret = self->lastIndexOf(*c, static_cast<Qt::CaseSensitivity>(cs));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QLatin1String_lastIndexOf5(const QLatin1String* self, QChar* c, ptrdiff_t from) {
	qsizetype _ret = self->lastIndexOf(*c, (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QLatin1String_lastIndexOf6(const QLatin1String* self, QChar* c, ptrdiff_t from, int cs) {
	qsizetype _ret = self->lastIndexOf(*c, (qsizetype)(from), static_cast<Qt::CaseSensitivity>(cs));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QLatin1String_countWithCh(const QLatin1String* self, QChar* ch) {
	qsizetype _ret = self->count(*ch);
	return static_cast<ptrdiff_t>(_ret);
}

short QLatin1String_toShort(const QLatin1String* self) {
	return self->toShort();
}

unsigned short QLatin1String_toUShort(const QLatin1String* self) {
	ushort _ret = self->toUShort();
	return static_cast<unsigned short>(_ret);
}

int QLatin1String_toInt(const QLatin1String* self) {
	return self->toInt();
}

unsigned int QLatin1String_toUInt(const QLatin1String* self) {
	uint _ret = self->toUInt();
	return static_cast<unsigned int>(_ret);
}

long QLatin1String_toLong(const QLatin1String* self) {
	return self->toLong();
}

unsigned long QLatin1String_toULong(const QLatin1String* self) {
	ulong _ret = self->toULong();
	return static_cast<unsigned long>(_ret);
}

long long QLatin1String_toLongLong(const QLatin1String* self) {
	qlonglong _ret = self->toLongLong();
	return static_cast<long long>(_ret);
}

unsigned long long QLatin1String_toULongLong(const QLatin1String* self) {
	qulonglong _ret = self->toULongLong();
	return static_cast<unsigned long long>(_ret);
}

float QLatin1String_toFloat(const QLatin1String* self) {
	return self->toFloat();
}

double QLatin1String_toDouble(const QLatin1String* self) {
	return self->toDouble();
}

const_iterator QLatin1String_begin(const QLatin1String* self) {
	return self->begin();
}

const_iterator QLatin1String_cbegin(const QLatin1String* self) {
	return self->cbegin();
}

const_iterator QLatin1String_end(const QLatin1String* self) {
	return self->end();
}

const_iterator QLatin1String_cend(const QLatin1String* self) {
	return self->cend();
}

const_reverse_iterator QLatin1String_rbegin(const QLatin1String* self) {
	return self->rbegin();
}

const_reverse_iterator QLatin1String_crbegin(const QLatin1String* self) {
	return self->crbegin();
}

const_reverse_iterator QLatin1String_rend(const QLatin1String* self) {
	return self->rend();
}

const_reverse_iterator QLatin1String_crend(const QLatin1String* self) {
	return self->crend();
}

ptrdiff_t QLatin1String_maxSize(const QLatin1String* self) {
	qsizetype _ret = self->max_size();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QLatin1String_maxSize2() {
	qsizetype _ret = QLatin1String::maxSize();
	return static_cast<ptrdiff_t>(_ret);
}

void QLatin1String_chop(QLatin1String* self, ptrdiff_t n) {
	self->chop((qsizetype)(n));
}

void QLatin1String_truncate(QLatin1String* self, ptrdiff_t n) {
	self->truncate((qsizetype)(n));
}

ptrdiff_t QLatin1String_indexOf7(const QLatin1String* self, QChar* c, ptrdiff_t from) {
	qsizetype _ret = self->indexOf(*c, (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

bool QLatin1String_contains4(const QLatin1String* self, QChar* c, int cs) {
	return self->contains(*c, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QLatin1String_count4(const QLatin1String* self, QChar* ch, int cs) {
	qsizetype _ret = self->count(*ch, static_cast<Qt::CaseSensitivity>(cs));
	return static_cast<ptrdiff_t>(_ret);
}

short QLatin1String_toShortWithOk(const QLatin1String* self, bool* ok) {
	return self->toShort(ok);
}

short QLatin1String_toShort2(const QLatin1String* self, bool* ok, int base) {
	return self->toShort(ok, static_cast<int>(base));
}

unsigned short QLatin1String_toUShortWithOk(const QLatin1String* self, bool* ok) {
	ushort _ret = self->toUShort(ok);
	return static_cast<unsigned short>(_ret);
}

unsigned short QLatin1String_toUShort2(const QLatin1String* self, bool* ok, int base) {
	ushort _ret = self->toUShort(ok, static_cast<int>(base));
	return static_cast<unsigned short>(_ret);
}

int QLatin1String_toIntWithOk(const QLatin1String* self, bool* ok) {
	return self->toInt(ok);
}

int QLatin1String_toInt2(const QLatin1String* self, bool* ok, int base) {
	return self->toInt(ok, static_cast<int>(base));
}

unsigned int QLatin1String_toUIntWithOk(const QLatin1String* self, bool* ok) {
	uint _ret = self->toUInt(ok);
	return static_cast<unsigned int>(_ret);
}

unsigned int QLatin1String_toUInt2(const QLatin1String* self, bool* ok, int base) {
	uint _ret = self->toUInt(ok, static_cast<int>(base));
	return static_cast<unsigned int>(_ret);
}

long QLatin1String_toLongWithOk(const QLatin1String* self, bool* ok) {
	return self->toLong(ok);
}

long QLatin1String_toLong2(const QLatin1String* self, bool* ok, int base) {
	return self->toLong(ok, static_cast<int>(base));
}

unsigned long QLatin1String_toULongWithOk(const QLatin1String* self, bool* ok) {
	ulong _ret = self->toULong(ok);
	return static_cast<unsigned long>(_ret);
}

unsigned long QLatin1String_toULong2(const QLatin1String* self, bool* ok, int base) {
	ulong _ret = self->toULong(ok, static_cast<int>(base));
	return static_cast<unsigned long>(_ret);
}

long long QLatin1String_toLongLongWithOk(const QLatin1String* self, bool* ok) {
	qlonglong _ret = self->toLongLong(ok);
	return static_cast<long long>(_ret);
}

long long QLatin1String_toLongLong2(const QLatin1String* self, bool* ok, int base) {
	qlonglong _ret = self->toLongLong(ok, static_cast<int>(base));
	return static_cast<long long>(_ret);
}

unsigned long long QLatin1String_toULongLongWithOk(const QLatin1String* self, bool* ok) {
	qulonglong _ret = self->toULongLong(ok);
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QLatin1String_toULongLong2(const QLatin1String* self, bool* ok, int base) {
	qulonglong _ret = self->toULongLong(ok, static_cast<int>(base));
	return static_cast<unsigned long long>(_ret);
}

float QLatin1String_toFloatWithOk(const QLatin1String* self, bool* ok) {
	return self->toFloat(ok);
}

double QLatin1String_toDoubleWithOk(const QLatin1String* self, bool* ok) {
	return self->toDouble(ok);
}

void QLatin1String_delete(QLatin1String* self) {
	delete self;
}

