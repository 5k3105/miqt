#include <QJsonArray>
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonArray__const_iterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonArray__iterator
#include <QJsonValue>
#include <QJsonValueConstRef>
#include <QJsonValueRef>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qjsonarray.h>
#include "gen_qjsonarray.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QJsonArray* QJsonArray_new() {
	return new (std::nothrow) QJsonArray();
}

QJsonArray* QJsonArray_new2(QJsonArray* other) {
	return new (std::nothrow) QJsonArray(*other);
}

void QJsonArray_operatorAssign(QJsonArray* self, QJsonArray* other) {
	self->operator=(*other);
}

QJsonArray* QJsonArray_fromStringList(struct miqt_array /* of struct miqt_string */  list) {
	QStringList list_QList;
	list_QList.reserve(list.len);
	struct miqt_string* list_arr = static_cast<struct miqt_string*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
		list_QList.push_back(list_arr_i_QString);
	}
	return new QJsonArray(QJsonArray::fromStringList(list_QList));
}

QJsonArray* QJsonArray_fromVariantList(struct miqt_array /* of QVariant* */  list) {
	QVariantList list_QList;
	list_QList.reserve(list.len);
	QVariant** list_arr = static_cast<QVariant**>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(*(list_arr[i]));
	}
	return new QJsonArray(QJsonArray::fromVariantList(list_QList));
}

struct miqt_array /* of QVariant* */  QJsonArray_toVariantList(const QJsonArray* self) {
	QVariantList _ret = self->toVariantList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QVariant(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

ptrdiff_t QJsonArray_size(const QJsonArray* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QJsonArray_count(const QJsonArray* self) {
	qsizetype _ret = self->count();
	return static_cast<ptrdiff_t>(_ret);
}

bool QJsonArray_isEmpty(const QJsonArray* self) {
	return self->isEmpty();
}

QJsonValue* QJsonArray_at(const QJsonArray* self, ptrdiff_t i) {
	return new QJsonValue(self->at((qsizetype)(i)));
}

QJsonValue* QJsonArray_first(const QJsonArray* self) {
	return new QJsonValue(self->first());
}

QJsonValue* QJsonArray_last(const QJsonArray* self) {
	return new QJsonValue(self->last());
}

void QJsonArray_prepend(QJsonArray* self, QJsonValue* value) {
	self->prepend(*value);
}

void QJsonArray_append(QJsonArray* self, QJsonValue* value) {
	self->append(*value);
}

void QJsonArray_removeAt(QJsonArray* self, ptrdiff_t i) {
	self->removeAt((qsizetype)(i));
}

QJsonValue* QJsonArray_takeAt(QJsonArray* self, ptrdiff_t i) {
	return new QJsonValue(self->takeAt((qsizetype)(i)));
}

void QJsonArray_removeFirst(QJsonArray* self) {
	self->removeFirst();
}

void QJsonArray_removeLast(QJsonArray* self) {
	self->removeLast();
}

void QJsonArray_insert(QJsonArray* self, ptrdiff_t i, QJsonValue* value) {
	self->insert((qsizetype)(i), *value);
}

void QJsonArray_replace(QJsonArray* self, ptrdiff_t i, QJsonValue* value) {
	self->replace((qsizetype)(i), *value);
}

bool QJsonArray_contains(const QJsonArray* self, QJsonValue* element) {
	return self->contains(*element);
}

QJsonValueRef* QJsonArray_operatorSubscript(QJsonArray* self, ptrdiff_t i) {
	return new QJsonValueRef(self->operator[]((qsizetype)(i)));
}

QJsonValue* QJsonArray_operatorSubscriptWithQsizetype(const QJsonArray* self, ptrdiff_t i) {
	return new QJsonValue(self->operator[]((qsizetype)(i)));
}

void QJsonArray_swap(QJsonArray* self, QJsonArray* other) {
	self->swap(*other);
}

iterator QJsonArray_begin(QJsonArray* self) {
	return self->begin();
}

const_iterator QJsonArray_begin2(const QJsonArray* self) {
	return self->begin();
}

const_iterator QJsonArray_constBegin(const QJsonArray* self) {
	return self->constBegin();
}

const_iterator QJsonArray_cbegin(const QJsonArray* self) {
	return self->cbegin();
}

iterator QJsonArray_end(QJsonArray* self) {
	return self->end();
}

const_iterator QJsonArray_end2(const QJsonArray* self) {
	return self->end();
}

const_iterator QJsonArray_constEnd(const QJsonArray* self) {
	return self->constEnd();
}

const_iterator QJsonArray_cend(const QJsonArray* self) {
	return self->cend();
}

iterator QJsonArray_insert2(QJsonArray* self, iterator before, QJsonValue* value) {
	return self->insert(before, *value);
}

iterator QJsonArray_erase(QJsonArray* self, iterator it) {
	return self->erase(it);
}

QJsonArray* QJsonArray_operatorPlus(const QJsonArray* self, QJsonValue* v) {
	return new QJsonArray(self->operator+(*v));
}

QJsonArray* QJsonArray_operatorPlusAssign(QJsonArray* self, QJsonValue* v) {
	QJsonArray& _ret = self->operator+=(*v);
	// Cast returned reference into pointer
	return &_ret;
}

QJsonArray* QJsonArray_operatorShiftLeft(QJsonArray* self, QJsonValue* v) {
	QJsonArray& _ret = self->operator<<(*v);
	// Cast returned reference into pointer
	return &_ret;
}

void QJsonArray_pushBack(QJsonArray* self, QJsonValue* t) {
	self->push_back(*t);
}

void QJsonArray_pushFront(QJsonArray* self, QJsonValue* t) {
	self->push_front(*t);
}

void QJsonArray_popFront(QJsonArray* self) {
	self->pop_front();
}

void QJsonArray_popBack(QJsonArray* self) {
	self->pop_back();
}

bool QJsonArray_empty(const QJsonArray* self) {
	return self->empty();
}

void QJsonArray_delete(QJsonArray* self) {
	delete self;
}

QJsonArray__iterator* QJsonArray__iterator_new() {
	return new (std::nothrow) QJsonArray::iterator();
}

QJsonArray__iterator* QJsonArray__iterator_new2(QJsonArray* array, ptrdiff_t index) {
	return new (std::nothrow) QJsonArray::iterator(array, (qsizetype)(index));
}

QJsonArray__iterator* QJsonArray__iterator_new3(const iterator* other) {
	return new (std::nothrow) QJsonArray::iterator(*other);
}

void QJsonArray__iterator_operatorAssign(QJsonArray__iterator* self, const iterator* other) {
	self->operator=(*other);
}

QJsonValueRef* QJsonArray__iterator_operatorMultiply(const QJsonArray__iterator* self) {
	return new QJsonValueRef(self->operator*());
}

QJsonValueConstRef* QJsonArray__iterator_operatorMinusGreater(const QJsonArray__iterator* self) {
	return (QJsonValueConstRef*) self->operator->();
}

QJsonValueRef* QJsonArray__iterator_operatorMinusGreater2(QJsonArray__iterator* self) {
	return self->operator->();
}

QJsonValueRef* QJsonArray__iterator_operatorSubscript(const QJsonArray__iterator* self, ptrdiff_t j) {
	return new QJsonValueRef(self->operator[]((qsizetype)(j)));
}

iterator* QJsonArray__iterator_operatorPlusPlus(QJsonArray__iterator* self) {
	return &self->operator++();
}

iterator QJsonArray__iterator_operatorPlusPlusWithInt(QJsonArray__iterator* self, int param1) {
	return self->operator++(static_cast<int>(param1));
}

iterator* QJsonArray__iterator_operatorMinusMinus(QJsonArray__iterator* self) {
	return &self->operator--();
}

iterator QJsonArray__iterator_operatorMinusMinusWithInt(QJsonArray__iterator* self, int param1) {
	return self->operator--(static_cast<int>(param1));
}

iterator* QJsonArray__iterator_operatorPlusAssign(QJsonArray__iterator* self, ptrdiff_t j) {
	return &self->operator+=((qsizetype)(j));
}

iterator* QJsonArray__iterator_operatorMinusAssign(QJsonArray__iterator* self, ptrdiff_t j) {
	return &self->operator-=((qsizetype)(j));
}

iterator QJsonArray__iterator_operatorPlus(const QJsonArray__iterator* self, ptrdiff_t j) {
	return self->operator+((qsizetype)(j));
}

iterator QJsonArray__iterator_operatorMinus(const QJsonArray__iterator* self, ptrdiff_t j) {
	return self->operator-((qsizetype)(j));
}

ptrdiff_t QJsonArray__iterator_operatorMinusWithIterator(const QJsonArray__iterator* self, iterator j) {
	qsizetype _ret = self->operator-(j);
	return static_cast<ptrdiff_t>(_ret);
}

void QJsonArray__iterator_delete(QJsonArray__iterator* self) {
	delete self;
}

QJsonArray__const_iterator* QJsonArray__const_iterator_new() {
	return new (std::nothrow) QJsonArray::const_iterator();
}

QJsonArray__const_iterator* QJsonArray__const_iterator_new2(QJsonArray* array, ptrdiff_t index) {
	return new (std::nothrow) QJsonArray::const_iterator(array, (qsizetype)(index));
}

QJsonArray__const_iterator* QJsonArray__const_iterator_new3(const iterator* o) {
	return new (std::nothrow) QJsonArray::const_iterator(*o);
}

QJsonArray__const_iterator* QJsonArray__const_iterator_new4(const const_iterator* other) {
	return new (std::nothrow) QJsonArray::const_iterator(*other);
}

void QJsonArray__const_iterator_operatorAssign(QJsonArray__const_iterator* self, const const_iterator* other) {
	self->operator=(*other);
}

QJsonValueConstRef* QJsonArray__const_iterator_operatorMultiply(const QJsonArray__const_iterator* self) {
	return new QJsonValueConstRef(self->operator*());
}

QJsonValueConstRef* QJsonArray__const_iterator_operatorMinusGreater(const QJsonArray__const_iterator* self) {
	return (QJsonValueConstRef*) self->operator->();
}

QJsonValueConstRef* QJsonArray__const_iterator_operatorSubscript(const QJsonArray__const_iterator* self, ptrdiff_t j) {
	return new QJsonValueConstRef(self->operator[]((qsizetype)(j)));
}

const_iterator* QJsonArray__const_iterator_operatorPlusPlus(QJsonArray__const_iterator* self) {
	return &self->operator++();
}

const_iterator QJsonArray__const_iterator_operatorPlusPlusWithInt(QJsonArray__const_iterator* self, int param1) {
	return self->operator++(static_cast<int>(param1));
}

const_iterator* QJsonArray__const_iterator_operatorMinusMinus(QJsonArray__const_iterator* self) {
	return &self->operator--();
}

const_iterator QJsonArray__const_iterator_operatorMinusMinusWithInt(QJsonArray__const_iterator* self, int param1) {
	return self->operator--(static_cast<int>(param1));
}

const_iterator* QJsonArray__const_iterator_operatorPlusAssign(QJsonArray__const_iterator* self, ptrdiff_t j) {
	return &self->operator+=((qsizetype)(j));
}

const_iterator* QJsonArray__const_iterator_operatorMinusAssign(QJsonArray__const_iterator* self, ptrdiff_t j) {
	return &self->operator-=((qsizetype)(j));
}

const_iterator QJsonArray__const_iterator_operatorPlus(const QJsonArray__const_iterator* self, ptrdiff_t j) {
	return self->operator+((qsizetype)(j));
}

const_iterator QJsonArray__const_iterator_operatorMinus(const QJsonArray__const_iterator* self, ptrdiff_t j) {
	return self->operator-((qsizetype)(j));
}

ptrdiff_t QJsonArray__const_iterator_operatorMinusWithConstIterator(const QJsonArray__const_iterator* self, const_iterator j) {
	qsizetype _ret = self->operator-(j);
	return static_cast<ptrdiff_t>(_ret);
}

void QJsonArray__const_iterator_delete(QJsonArray__const_iterator* self) {
	delete self;
}

