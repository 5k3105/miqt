#include <QAnyStringView>
#include <QByteArray>
#include <QByteArrayView>
#include <QDateTime>
#include <QHttpHeaders>
#include <QList>
#include <qhttpheaders.h>
#include "gen_qhttpheaders.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QHttpHeaders* QHttpHeaders_new() {
	return new (std::nothrow) QHttpHeaders();
}

QHttpHeaders* QHttpHeaders_new2(QHttpHeaders* other) {
	return new (std::nothrow) QHttpHeaders(*other);
}

void QHttpHeaders_operatorAssign(QHttpHeaders* self, QHttpHeaders* other) {
	self->operator=(*other);
}

void QHttpHeaders_swap(QHttpHeaders* self, QHttpHeaders* other) {
	self->swap(*other);
}

bool QHttpHeaders_append(QHttpHeaders* self, QAnyStringView* name, QAnyStringView* value) {
	return self->append(*name, *value);
}

bool QHttpHeaders_append2(QHttpHeaders* self, WellKnownHeader name, QAnyStringView* value) {
	return self->append(name, *value);
}

bool QHttpHeaders_insert(QHttpHeaders* self, ptrdiff_t i, QAnyStringView* name, QAnyStringView* value) {
	return self->insert((qsizetype)(i), *name, *value);
}

bool QHttpHeaders_insert2(QHttpHeaders* self, ptrdiff_t i, WellKnownHeader name, QAnyStringView* value) {
	return self->insert((qsizetype)(i), name, *value);
}

bool QHttpHeaders_replace(QHttpHeaders* self, ptrdiff_t i, QAnyStringView* name, QAnyStringView* newValue) {
	return self->replace((qsizetype)(i), *name, *newValue);
}

bool QHttpHeaders_replace2(QHttpHeaders* self, ptrdiff_t i, WellKnownHeader name, QAnyStringView* newValue) {
	return self->replace((qsizetype)(i), name, *newValue);
}

bool QHttpHeaders_replaceOrAppend(QHttpHeaders* self, QAnyStringView* name, QAnyStringView* newValue) {
	return self->replaceOrAppend(*name, *newValue);
}

bool QHttpHeaders_replaceOrAppend2(QHttpHeaders* self, WellKnownHeader name, QAnyStringView* newValue) {
	return self->replaceOrAppend(name, *newValue);
}

bool QHttpHeaders_contains(const QHttpHeaders* self, QAnyStringView* name) {
	return self->contains(*name);
}

bool QHttpHeaders_containsWithName(const QHttpHeaders* self, WellKnownHeader name) {
	return self->contains(name);
}

void QHttpHeaders_clear(QHttpHeaders* self) {
	self->clear();
}

void QHttpHeaders_removeAll(QHttpHeaders* self, QAnyStringView* name) {
	self->removeAll(*name);
}

void QHttpHeaders_removeAllWithName(QHttpHeaders* self, WellKnownHeader name) {
	self->removeAll(name);
}

void QHttpHeaders_removeAt(QHttpHeaders* self, ptrdiff_t i) {
	self->removeAt((qsizetype)(i));
}

QByteArrayView* QHttpHeaders_value(const QHttpHeaders* self, QAnyStringView* name) {
	return new QByteArrayView(self->value(*name));
}

QByteArrayView* QHttpHeaders_valueWithName(const QHttpHeaders* self, WellKnownHeader name) {
	return new QByteArrayView(self->value(name));
}

struct miqt_array /* of struct miqt_string */  QHttpHeaders_values(const QHttpHeaders* self, QAnyStringView* name) {
	QList<QByteArray> _ret = self->values(*name);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QHttpHeaders_valuesWithName(const QHttpHeaders* self, WellKnownHeader name) {
	QList<QByteArray> _ret = self->values(name);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QByteArrayView* QHttpHeaders_valueAt(const QHttpHeaders* self, ptrdiff_t i) {
	return new QByteArrayView(self->valueAt((qsizetype)(i)));
}

struct miqt_string QHttpHeaders_combinedValue(const QHttpHeaders* self, QAnyStringView* name) {
	QByteArray _qb = self->combinedValue(*name);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QHttpHeaders_combinedValueWithName(const QHttpHeaders* self, WellKnownHeader name) {
	QByteArray _qb = self->combinedValue(name);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QHttpHeaders_setDateTimeValue(QHttpHeaders* self, QAnyStringView* name, QDateTime* dateTime) {
	self->setDateTimeValue(*name, *dateTime);
}

void QHttpHeaders_setDateTimeValue2(QHttpHeaders* self, WellKnownHeader name, QDateTime* dateTime) {
	self->setDateTimeValue(name, *dateTime);
}

ptrdiff_t QHttpHeaders_size(const QHttpHeaders* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

void QHttpHeaders_reserve(QHttpHeaders* self, ptrdiff_t size) {
	self->reserve((qsizetype)(size));
}

bool QHttpHeaders_isEmpty(const QHttpHeaders* self) {
	return self->isEmpty();
}

QByteArrayView* QHttpHeaders_wellKnownHeaderName(WellKnownHeader name) {
	return new QByteArrayView(QHttpHeaders::wellKnownHeaderName(name));
}

QByteArrayView* QHttpHeaders_value2(const QHttpHeaders* self, QAnyStringView* name, QByteArrayView* defaultValue) {
	return new QByteArrayView(self->value(*name, *defaultValue));
}

QByteArrayView* QHttpHeaders_value3(const QHttpHeaders* self, WellKnownHeader name, QByteArrayView* defaultValue) {
	return new QByteArrayView(self->value(name, *defaultValue));
}

void QHttpHeaders_delete(QHttpHeaders* self) {
	delete self;
}

