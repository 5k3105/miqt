#include <QAnyStringView>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVersionNumber>
#include <qversionnumber.h>
#include "gen_qversionnumber.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QVersionNumber* QVersionNumber_new() {
	return new (std::nothrow) QVersionNumber();
}

QVersionNumber* QVersionNumber_new2(QSpan<const int> args) {
	return new (std::nothrow) QVersionNumber(args);
}

QVersionNumber* QVersionNumber_new3(int maj) {
	return new (std::nothrow) QVersionNumber(static_cast<int>(maj));
}

QVersionNumber* QVersionNumber_new4(int maj, int min) {
	return new (std::nothrow) QVersionNumber(static_cast<int>(maj), static_cast<int>(min));
}

QVersionNumber* QVersionNumber_new5(int maj, int min, int mic) {
	return new (std::nothrow) QVersionNumber(static_cast<int>(maj), static_cast<int>(min), static_cast<int>(mic));
}

QVersionNumber* QVersionNumber_new6(QVersionNumber* param1) {
	return new (std::nothrow) QVersionNumber(*param1);
}

bool QVersionNumber_isNull(const QVersionNumber* self) {
	return self->isNull();
}

bool QVersionNumber_isNormalized(const QVersionNumber* self) {
	return self->isNormalized();
}

int QVersionNumber_majorVersion(const QVersionNumber* self) {
	return self->majorVersion();
}

int QVersionNumber_minorVersion(const QVersionNumber* self) {
	return self->minorVersion();
}

int QVersionNumber_microVersion(const QVersionNumber* self) {
	return self->microVersion();
}

QVersionNumber* QVersionNumber_normalized(const QVersionNumber* self) {
	return new QVersionNumber(self->normalized());
}

struct miqt_array /* of int */  QVersionNumber_segments(const QVersionNumber* self) {
	QList<int> _ret = self->segments();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QVersionNumber_segmentAt(const QVersionNumber* self, ptrdiff_t index) {
	return self->segmentAt((qsizetype)(index));
}

ptrdiff_t QVersionNumber_segmentCount(const QVersionNumber* self) {
	qsizetype _ret = self->segmentCount();
	return static_cast<ptrdiff_t>(_ret);
}

const_iterator QVersionNumber_begin(const QVersionNumber* self) {
	return self->begin();
}

const_iterator QVersionNumber_end(const QVersionNumber* self) {
	return self->end();
}

const_iterator QVersionNumber_cbegin(const QVersionNumber* self) {
	return self->cbegin();
}

const_iterator QVersionNumber_cend(const QVersionNumber* self) {
	return self->cend();
}

const_reverse_iterator QVersionNumber_rbegin(const QVersionNumber* self) {
	return self->rbegin();
}

const_reverse_iterator QVersionNumber_rend(const QVersionNumber* self) {
	return self->rend();
}

const_reverse_iterator QVersionNumber_crbegin(const QVersionNumber* self) {
	return self->crbegin();
}

const_reverse_iterator QVersionNumber_crend(const QVersionNumber* self) {
	return self->crend();
}

const_iterator QVersionNumber_constBegin(const QVersionNumber* self) {
	return self->constBegin();
}

const_iterator QVersionNumber_constEnd(const QVersionNumber* self) {
	return self->constEnd();
}

bool QVersionNumber_isPrefixOf(const QVersionNumber* self, QVersionNumber* other) {
	return self->isPrefixOf(*other);
}

int QVersionNumber_compare(QVersionNumber* v1, QVersionNumber* v2) {
	return QVersionNumber::compare(*v1, *v2);
}

QVersionNumber* QVersionNumber_commonPrefix(QVersionNumber* v1, QVersionNumber* v2) {
	return new QVersionNumber(QVersionNumber::commonPrefix(*v1, *v2));
}

struct miqt_string QVersionNumber_toString(const QVersionNumber* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVersionNumber* QVersionNumber_fromString(QAnyStringView* string) {
	return new QVersionNumber(QVersionNumber::fromString(*string));
}

void QVersionNumber_operatorAssign(QVersionNumber* self, QVersionNumber* param1) {
	self->operator=(*param1);
}

QVersionNumber* QVersionNumber_fromString2(QAnyStringView* string, ptrdiff_t* suffixIndex) {
	return new QVersionNumber(QVersionNumber::fromString(*string, (qsizetype*)(suffixIndex)));
}

void QVersionNumber_delete(QVersionNumber* self) {
	delete self;
}

