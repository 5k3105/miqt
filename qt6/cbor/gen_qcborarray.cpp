#include <QCborArray>
#define WORKAROUND_INNER_CLASS_DEFINITION_QCborArray__ConstIterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QCborArray__Iterator
#include <QCborValue>
#include <QCborValueConstRef>
#include <QCborValueRef>
#include <QJsonArray>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qcborarray.h>
#include "gen_qcborarray.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QCborArray* QCborArray_new() {
	return new (std::nothrow) QCborArray();
}

QCborArray* QCborArray_new2(QCborArray* other) {
	return new (std::nothrow) QCborArray(*other);
}

void QCborArray_operatorAssign(QCborArray* self, QCborArray* other) {
	self->operator=(*other);
}

void QCborArray_swap(QCborArray* self, QCborArray* other) {
	self->swap(*other);
}

QCborValue* QCborArray_toCborValue(const QCborArray* self) {
	return new QCborValue(self->toCborValue());
}

ptrdiff_t QCborArray_size(const QCborArray* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

bool QCborArray_isEmpty(const QCborArray* self) {
	return self->isEmpty();
}

void QCborArray_clear(QCborArray* self) {
	self->clear();
}

QCborValue* QCborArray_at(const QCborArray* self, ptrdiff_t i) {
	return new QCborValue(self->at((qsizetype)(i)));
}

QCborValue* QCborArray_first(const QCborArray* self) {
	return new QCborValue(self->first());
}

QCborValue* QCborArray_last(const QCborArray* self) {
	return new QCborValue(self->last());
}

QCborValue* QCborArray_operatorSubscript(const QCborArray* self, ptrdiff_t i) {
	return new QCborValue(self->operator[]((qsizetype)(i)));
}

QCborValueRef* QCborArray_first2(QCborArray* self) {
	return new QCborValueRef(self->first());
}

QCborValueRef* QCborArray_last2(QCborArray* self) {
	return new QCborValueRef(self->last());
}

QCborValueRef* QCborArray_operatorSubscriptWithQsizetype(QCborArray* self, ptrdiff_t i) {
	return new QCborValueRef(self->operator[]((qsizetype)(i)));
}

void QCborArray_insert(QCborArray* self, ptrdiff_t i, QCborValue* value) {
	self->insert((qsizetype)(i), *value);
}

void QCborArray_prepend(QCborArray* self, QCborValue* value) {
	self->prepend(*value);
}

void QCborArray_append(QCborArray* self, QCborValue* value) {
	self->append(*value);
}

QCborValue* QCborArray_extract(QCborArray* self, ConstIterator it) {
	return new QCborValue(self->extract(it));
}

QCborValue* QCborArray_extractWithIt(QCborArray* self, Iterator it) {
	return new QCborValue(self->extract(it));
}

void QCborArray_removeAt(QCborArray* self, ptrdiff_t i) {
	self->removeAt((qsizetype)(i));
}

QCborValue* QCborArray_takeAt(QCborArray* self, ptrdiff_t i) {
	return new QCborValue(self->takeAt((qsizetype)(i)));
}

void QCborArray_removeFirst(QCborArray* self) {
	self->removeFirst();
}

void QCborArray_removeLast(QCborArray* self) {
	self->removeLast();
}

QCborValue* QCborArray_takeFirst(QCborArray* self) {
	return new QCborValue(self->takeFirst());
}

QCborValue* QCborArray_takeLast(QCborArray* self) {
	return new QCborValue(self->takeLast());
}

bool QCborArray_contains(const QCborArray* self, QCborValue* value) {
	return self->contains(*value);
}

int QCborArray_compare(const QCborArray* self, QCborArray* other) {
	return self->compare(*other);
}

iterator QCborArray_begin(QCborArray* self) {
	return self->begin();
}

const_iterator QCborArray_constBegin(const QCborArray* self) {
	return self->constBegin();
}

const_iterator QCborArray_begin2(const QCborArray* self) {
	return self->begin();
}

const_iterator QCborArray_cbegin(const QCborArray* self) {
	return self->cbegin();
}

iterator QCborArray_end(QCborArray* self) {
	return self->end();
}

const_iterator QCborArray_constEnd(const QCborArray* self) {
	return self->constEnd();
}

const_iterator QCborArray_end2(const QCborArray* self) {
	return self->end();
}

const_iterator QCborArray_cend(const QCborArray* self) {
	return self->cend();
}

iterator QCborArray_insert2(QCborArray* self, iterator before, QCborValue* value) {
	return self->insert(before, *value);
}

iterator QCborArray_insert3(QCborArray* self, const_iterator before, QCborValue* value) {
	return self->insert(before, *value);
}

iterator QCborArray_erase(QCborArray* self, iterator it) {
	return self->erase(it);
}

iterator QCborArray_eraseWithIt(QCborArray* self, const_iterator it) {
	return self->erase(it);
}

void QCborArray_pushBack(QCborArray* self, QCborValue* t) {
	self->push_back(*t);
}

void QCborArray_pushFront(QCborArray* self, QCborValue* t) {
	self->push_front(*t);
}

void QCborArray_popFront(QCborArray* self) {
	self->pop_front();
}

void QCborArray_popBack(QCborArray* self) {
	self->pop_back();
}

bool QCborArray_empty(const QCborArray* self) {
	return self->empty();
}

QCborArray* QCborArray_operatorPlus(const QCborArray* self, QCborValue* v) {
	return new QCborArray(self->operator+(*v));
}

QCborArray* QCborArray_operatorPlusAssign(QCborArray* self, QCborValue* v) {
	QCborArray& _ret = self->operator+=(*v);
	// Cast returned reference into pointer
	return &_ret;
}

QCborArray* QCborArray_operatorShiftLeft(QCborArray* self, QCborValue* v) {
	QCborArray& _ret = self->operator<<(*v);
	// Cast returned reference into pointer
	return &_ret;
}

QCborArray* QCborArray_fromStringList(struct miqt_array /* of struct miqt_string */  list) {
	QStringList list_QList;
	list_QList.reserve(list.len);
	struct miqt_string* list_arr = static_cast<struct miqt_string*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
		list_QList.push_back(list_arr_i_QString);
	}
	return new QCborArray(QCborArray::fromStringList(list_QList));
}

QCborArray* QCborArray_fromVariantList(struct miqt_array /* of QVariant* */  list) {
	QVariantList list_QList;
	list_QList.reserve(list.len);
	QVariant** list_arr = static_cast<QVariant**>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(*(list_arr[i]));
	}
	return new QCborArray(QCborArray::fromVariantList(list_QList));
}

QCborArray* QCborArray_fromJsonArray(QJsonArray* array) {
	return new QCborArray(QCborArray::fromJsonArray(*array));
}

struct miqt_array /* of QVariant* */  QCborArray_toVariantList(const QCborArray* self) {
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

QJsonArray* QCborArray_toJsonArray(const QCborArray* self) {
	return new QJsonArray(self->toJsonArray());
}

void QCborArray_delete(QCborArray* self) {
	delete self;
}

QCborArray__Iterator* QCborArray__Iterator_new() {
	return new (std::nothrow) QCborArray::Iterator();
}

QCborArray__Iterator* QCborArray__Iterator_new2(const Iterator* param1) {
	return new (std::nothrow) QCborArray::Iterator(*param1);
}

void QCborArray__Iterator_operatorAssign(QCborArray__Iterator* self, const Iterator* other) {
	self->operator=(*other);
}

QCborValueRef* QCborArray__Iterator_operatorMultiply(const QCborArray__Iterator* self) {
	return new QCborValueRef(self->operator*());
}

QCborValueRef* QCborArray__Iterator_operatorMinusGreater(QCborArray__Iterator* self) {
	return self->operator->();
}

QCborValueConstRef* QCborArray__Iterator_operatorMinusGreater2(const QCborArray__Iterator* self) {
	return (QCborValueConstRef*) self->operator->();
}

QCborValueRef* QCborArray__Iterator_operatorSubscript(const QCborArray__Iterator* self, ptrdiff_t j) {
	return new QCborValueRef(self->operator[]((qsizetype)(j)));
}

Iterator* QCborArray__Iterator_operatorPlusPlus(QCborArray__Iterator* self) {
	return &self->operator++();
}

Iterator QCborArray__Iterator_operatorPlusPlusWithInt(QCborArray__Iterator* self, int param1) {
	return self->operator++(static_cast<int>(param1));
}

Iterator* QCborArray__Iterator_operatorMinusMinus(QCborArray__Iterator* self) {
	return &self->operator--();
}

Iterator QCborArray__Iterator_operatorMinusMinusWithInt(QCborArray__Iterator* self, int param1) {
	return self->operator--(static_cast<int>(param1));
}

Iterator* QCborArray__Iterator_operatorPlusAssign(QCborArray__Iterator* self, ptrdiff_t j) {
	return &self->operator+=((qsizetype)(j));
}

Iterator* QCborArray__Iterator_operatorMinusAssign(QCborArray__Iterator* self, ptrdiff_t j) {
	return &self->operator-=((qsizetype)(j));
}

Iterator QCborArray__Iterator_operatorPlus(const QCborArray__Iterator* self, ptrdiff_t j) {
	return self->operator+((qsizetype)(j));
}

Iterator QCborArray__Iterator_operatorMinus(const QCborArray__Iterator* self, ptrdiff_t j) {
	return self->operator-((qsizetype)(j));
}

ptrdiff_t QCborArray__Iterator_operatorMinusWithIterator(const QCborArray__Iterator* self, Iterator j) {
	qsizetype _ret = self->operator-(j);
	return static_cast<ptrdiff_t>(_ret);
}

void QCborArray__Iterator_delete(QCborArray__Iterator* self) {
	delete self;
}

QCborArray__ConstIterator* QCborArray__ConstIterator_new() {
	return new (std::nothrow) QCborArray::ConstIterator();
}

QCborArray__ConstIterator* QCborArray__ConstIterator_new2(const ConstIterator* param1) {
	return new (std::nothrow) QCborArray::ConstIterator(*param1);
}

void QCborArray__ConstIterator_operatorAssign(QCborArray__ConstIterator* self, const ConstIterator* other) {
	self->operator=(*other);
}

QCborValueConstRef* QCborArray__ConstIterator_operatorMultiply(const QCborArray__ConstIterator* self) {
	return new QCborValueConstRef(self->operator*());
}

QCborValueConstRef* QCborArray__ConstIterator_operatorMinusGreater(const QCborArray__ConstIterator* self) {
	return (QCborValueConstRef*) self->operator->();
}

QCborValueConstRef* QCborArray__ConstIterator_operatorSubscript(const QCborArray__ConstIterator* self, ptrdiff_t j) {
	return new QCborValueConstRef(self->operator[]((qsizetype)(j)));
}

ConstIterator* QCborArray__ConstIterator_operatorPlusPlus(QCborArray__ConstIterator* self) {
	return &self->operator++();
}

ConstIterator QCborArray__ConstIterator_operatorPlusPlusWithInt(QCborArray__ConstIterator* self, int param1) {
	return self->operator++(static_cast<int>(param1));
}

ConstIterator* QCborArray__ConstIterator_operatorMinusMinus(QCborArray__ConstIterator* self) {
	return &self->operator--();
}

ConstIterator QCborArray__ConstIterator_operatorMinusMinusWithInt(QCborArray__ConstIterator* self, int param1) {
	return self->operator--(static_cast<int>(param1));
}

ConstIterator* QCborArray__ConstIterator_operatorPlusAssign(QCborArray__ConstIterator* self, ptrdiff_t j) {
	return &self->operator+=((qsizetype)(j));
}

ConstIterator* QCborArray__ConstIterator_operatorMinusAssign(QCborArray__ConstIterator* self, ptrdiff_t j) {
	return &self->operator-=((qsizetype)(j));
}

ConstIterator QCborArray__ConstIterator_operatorPlus(const QCborArray__ConstIterator* self, ptrdiff_t j) {
	return self->operator+((qsizetype)(j));
}

ConstIterator QCborArray__ConstIterator_operatorMinus(const QCborArray__ConstIterator* self, ptrdiff_t j) {
	return self->operator-((qsizetype)(j));
}

ptrdiff_t QCborArray__ConstIterator_operatorMinusWithConstIterator(const QCborArray__ConstIterator* self, ConstIterator j) {
	qsizetype _ret = self->operator-(j);
	return static_cast<ptrdiff_t>(_ret);
}

void QCborArray__ConstIterator_delete(QCborArray__ConstIterator* self) {
	delete self;
}

