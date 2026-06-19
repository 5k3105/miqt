#include <QCborMap>
#define WORKAROUND_INNER_CLASS_DEFINITION_QCborMap__ConstIterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QCborMap__Iterator
#include <QCborValue>
#include <QCborValueConstRef>
#include <QCborValueRef>
#include <QHash>
#include <QJsonObject>
#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qcbormap.h>
#include "gen_qcbormap.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QCborMap* QCborMap_new() {
	return new (std::nothrow) QCborMap();
}

QCborMap* QCborMap_new2(QCborMap* other) {
	return new (std::nothrow) QCborMap(*other);
}

void QCborMap_operatorAssign(QCborMap* self, QCborMap* other) {
	self->operator=(*other);
}

void QCborMap_swap(QCborMap* self, QCborMap* other) {
	self->swap(*other);
}

QCborValue* QCborMap_toCborValue(const QCborMap* self) {
	return new QCborValue(self->toCborValue());
}

ptrdiff_t QCborMap_size(const QCborMap* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

bool QCborMap_isEmpty(const QCborMap* self) {
	return self->isEmpty();
}

void QCborMap_clear(QCborMap* self) {
	self->clear();
}

struct miqt_array /* of QCborValue* */  QCborMap_keys(const QCborMap* self) {
	QList<QCborValue> _ret = self->keys();
	// Convert QList<> from C++ memory to manually-managed C memory
	QCborValue** _arr = static_cast<QCborValue**>(malloc(sizeof(QCborValue*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QCborValue(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QCborValue* QCborMap_value(const QCborMap* self, long long key) {
	return new QCborValue(self->value(static_cast<qint64>(key)));
}

QCborValue* QCborMap_value2(const QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValue(self->value(key_QString));
}

QCborValue* QCborMap_value3(const QCborMap* self, QCborValue* key) {
	return new QCborValue(self->value(*key));
}

QCborValue* QCborMap_operatorSubscript(const QCborMap* self, long long key) {
	return new QCborValue(self->operator[](static_cast<qint64>(key)));
}

QCborValue* QCborMap_operatorSubscript2(const QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValue(self->operator[](key_QString));
}

QCborValue* QCborMap_operatorSubscript3(const QCborMap* self, QCborValue* key) {
	return new QCborValue(self->operator[](*key));
}

QCborValueRef* QCborMap_operatorSubscript4(QCborMap* self, long long key) {
	return new QCborValueRef(self->operator[](static_cast<qint64>(key)));
}

QCborValueRef* QCborMap_operatorSubscript6(QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValueRef(self->operator[](key_QString));
}

QCborValueRef* QCborMap_operatorSubscript7(QCborMap* self, QCborValue* key) {
	return new QCborValueRef(self->operator[](*key));
}

QCborValue* QCborMap_take(QCborMap* self, long long key) {
	return new QCborValue(self->take(static_cast<qint64>(key)));
}

QCborValue* QCborMap_take2(QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValue(self->take(key_QString));
}

QCborValue* QCborMap_take3(QCborMap* self, QCborValue* key) {
	return new QCborValue(self->take(*key));
}

void QCborMap_remove(QCborMap* self, long long key) {
	self->remove(static_cast<qint64>(key));
}

void QCborMap_remove2(QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->remove(key_QString);
}

void QCborMap_remove3(QCborMap* self, QCborValue* key) {
	self->remove(*key);
}

bool QCborMap_contains(const QCborMap* self, long long key) {
	return self->contains(static_cast<qint64>(key));
}

bool QCborMap_contains2(const QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->contains(key_QString);
}

bool QCborMap_contains3(const QCborMap* self, QCborValue* key) {
	return self->contains(*key);
}

int QCborMap_compare(const QCborMap* self, QCborMap* other) {
	return self->compare(*other);
}

iterator QCborMap_begin(QCborMap* self) {
	return self->begin();
}

const_iterator QCborMap_constBegin(const QCborMap* self) {
	return self->constBegin();
}

const_iterator QCborMap_begin2(const QCborMap* self) {
	return self->begin();
}

const_iterator QCborMap_cbegin(const QCborMap* self) {
	return self->cbegin();
}

iterator QCborMap_end(QCborMap* self) {
	return self->end();
}

const_iterator QCborMap_constEnd(const QCborMap* self) {
	return self->constEnd();
}

const_iterator QCborMap_end2(const QCborMap* self) {
	return self->end();
}

const_iterator QCborMap_cend(const QCborMap* self) {
	return self->cend();
}

iterator QCborMap_erase(QCborMap* self, iterator it) {
	return self->erase(it);
}

iterator QCborMap_eraseWithIt(QCborMap* self, const_iterator it) {
	return self->erase(it);
}

QCborValue* QCborMap_extract(QCborMap* self, iterator it) {
	return new QCborValue(self->extract(it));
}

QCborValue* QCborMap_extractWithIt(QCborMap* self, const_iterator it) {
	return new QCborValue(self->extract(it));
}

bool QCborMap_empty(const QCborMap* self) {
	return self->empty();
}

key_value_iterator QCborMap_keyValueBegin(QCborMap* self) {
	return self->keyValueBegin();
}

key_value_iterator QCborMap_keyValueEnd(QCborMap* self) {
	return self->keyValueEnd();
}

const_key_value_iterator QCborMap_keyValueBegin2(const QCborMap* self) {
	return self->keyValueBegin();
}

const_key_value_iterator QCborMap_constKeyValueBegin(const QCborMap* self) {
	return self->constKeyValueBegin();
}

const_key_value_iterator QCborMap_keyValueEnd2(const QCborMap* self) {
	return self->keyValueEnd();
}

const_key_value_iterator QCborMap_constKeyValueEnd(const QCborMap* self) {
	return self->constKeyValueEnd();
}

iterator QCborMap_find(QCborMap* self, long long key) {
	return self->find(static_cast<qint64>(key));
}

iterator QCborMap_find2(QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->find(key_QString);
}

iterator QCborMap_find3(QCborMap* self, QCborValue* key) {
	return self->find(*key);
}

const_iterator QCborMap_constFind(const QCborMap* self, long long key) {
	return self->constFind(static_cast<qint64>(key));
}

const_iterator QCborMap_constFind2(const QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->constFind(key_QString);
}

const_iterator QCborMap_constFind3(const QCborMap* self, QCborValue* key) {
	return self->constFind(*key);
}

const_iterator QCborMap_find4(const QCborMap* self, long long key) {
	return self->find(static_cast<qint64>(key));
}

const_iterator QCborMap_find6(const QCborMap* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->find(key_QString);
}

const_iterator QCborMap_find7(const QCborMap* self, QCborValue* key) {
	return self->find(*key);
}

iterator QCborMap_insert(QCborMap* self, long long key, QCborValue* value_) {
	return self->insert(static_cast<qint64>(key), *value_);
}

iterator QCborMap_insert3(QCborMap* self, struct miqt_string key, QCborValue* value_) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->insert(key_QString, *value_);
}

iterator QCborMap_insert4(QCborMap* self, QCborValue* key, QCborValue* value_) {
	return self->insert(*key, *value_);
}

iterator QCborMap_insertWithValueType(QCborMap* self, value_type v) {
	return self->insert(v);
}

QCborMap* QCborMap_fromVariantMap(struct miqt_map /* of struct miqt_string to QVariant* */  map) {
	QVariantMap map_QMap;
	struct miqt_string* map_karr = static_cast<struct miqt_string*>(map.keys);
	QVariant** map_varr = static_cast<QVariant**>(map.values);
	for(size_t i = 0; i < map.len; ++i) {
		QString map_karr_i_QString = QString::fromUtf8(map_karr[i].data, map_karr[i].len);
		map_QMap[map_karr_i_QString] = *(map_varr[i]);
	}
	return new QCborMap(QCborMap::fromVariantMap(map_QMap));
}

QCborMap* QCborMap_fromVariantHash(struct miqt_map /* of struct miqt_string to QVariant* */  hash) {
	QVariantHash hash_QMap;
	hash_QMap.reserve(hash.len);
	struct miqt_string* hash_karr = static_cast<struct miqt_string*>(hash.keys);
	QVariant** hash_varr = static_cast<QVariant**>(hash.values);
	for(size_t i = 0; i < hash.len; ++i) {
		QString hash_karr_i_QString = QString::fromUtf8(hash_karr[i].data, hash_karr[i].len);
		hash_QMap[hash_karr_i_QString] = *(hash_varr[i]);
	}
	return new QCborMap(QCborMap::fromVariantHash(hash_QMap));
}

QCborMap* QCborMap_fromJsonObject(QJsonObject* o) {
	return new QCborMap(QCborMap::fromJsonObject(*o));
}

struct miqt_map /* of struct miqt_string to QVariant* */  QCborMap_toVariantMap(const QCborMap* self) {
	QVariantMap _ret = self->toVariantMap();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _mapkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _mapkey_b = _mapkey_ret.toUtf8();
		struct miqt_string _mapkey_ms;
		_mapkey_ms.len = _mapkey_b.length();
		_mapkey_ms.data = static_cast<char*>(malloc(_mapkey_ms.len));
		memcpy(_mapkey_ms.data, _mapkey_b.data(), _mapkey_ms.len);
		_karr[_ctr] = _mapkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

struct miqt_map /* of struct miqt_string to QVariant* */  QCborMap_toVariantHash(const QCborMap* self) {
	QVariantHash _ret = self->toVariantHash();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _hashkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _hashkey_b = _hashkey_ret.toUtf8();
		struct miqt_string _hashkey_ms;
		_hashkey_ms.len = _hashkey_b.length();
		_hashkey_ms.data = static_cast<char*>(malloc(_hashkey_ms.len));
		memcpy(_hashkey_ms.data, _hashkey_b.data(), _hashkey_ms.len);
		_karr[_ctr] = _hashkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

QJsonObject* QCborMap_toJsonObject(const QCborMap* self) {
	return new QJsonObject(self->toJsonObject());
}

void QCborMap_delete(QCborMap* self) {
	delete self;
}

QCborMap__Iterator* QCborMap__Iterator_new() {
	return new (std::nothrow) QCborMap::Iterator();
}

QCborMap__Iterator* QCborMap__Iterator_new2(const Iterator* param1) {
	return new (std::nothrow) QCborMap::Iterator(*param1);
}

void QCborMap__Iterator_operatorAssign(QCborMap__Iterator* self, const Iterator* other) {
	self->operator=(*other);
}

value_type QCborMap__Iterator_operatorMultiply(const QCborMap__Iterator* self) {
	return self->operator*();
}

value_type QCborMap__Iterator_operatorSubscript(const QCborMap__Iterator* self, ptrdiff_t j) {
	return self->operator[]((qsizetype)(j));
}

QCborValueRef* QCborMap__Iterator_operatorMinusGreater(QCborMap__Iterator* self) {
	return self->operator->();
}

QCborValueConstRef* QCborMap__Iterator_operatorMinusGreater2(const QCborMap__Iterator* self) {
	return (QCborValueConstRef*) self->operator->();
}

QCborValue* QCborMap__Iterator_key(const QCborMap__Iterator* self) {
	return new QCborValue(self->key());
}

QCborValueConstRef* QCborMap__Iterator_keyRef(const QCborMap__Iterator* self) {
	return new QCborValueConstRef(self->keyRef());
}

QCborValueRef* QCborMap__Iterator_value(const QCborMap__Iterator* self) {
	return new QCborValueRef(self->value());
}

Iterator* QCborMap__Iterator_operatorPlusPlus(QCborMap__Iterator* self) {
	return &self->operator++();
}

Iterator QCborMap__Iterator_operatorPlusPlusWithInt(QCborMap__Iterator* self, int param1) {
	return self->operator++(static_cast<int>(param1));
}

Iterator* QCborMap__Iterator_operatorMinusMinus(QCborMap__Iterator* self) {
	return &self->operator--();
}

Iterator QCborMap__Iterator_operatorMinusMinusWithInt(QCborMap__Iterator* self, int param1) {
	return self->operator--(static_cast<int>(param1));
}

Iterator* QCborMap__Iterator_operatorPlusAssign(QCborMap__Iterator* self, ptrdiff_t j) {
	return &self->operator+=((qsizetype)(j));
}

Iterator* QCborMap__Iterator_operatorMinusAssign(QCborMap__Iterator* self, ptrdiff_t j) {
	return &self->operator-=((qsizetype)(j));
}

Iterator QCborMap__Iterator_operatorPlus(const QCborMap__Iterator* self, ptrdiff_t j) {
	return self->operator+((qsizetype)(j));
}

Iterator QCborMap__Iterator_operatorMinus(const QCborMap__Iterator* self, ptrdiff_t j) {
	return self->operator-((qsizetype)(j));
}

ptrdiff_t QCborMap__Iterator_operatorMinusWithIterator(const QCborMap__Iterator* self, Iterator j) {
	qsizetype _ret = self->operator-(j);
	return static_cast<ptrdiff_t>(_ret);
}

void QCborMap__Iterator_delete(QCborMap__Iterator* self) {
	delete self;
}

QCborMap__ConstIterator* QCborMap__ConstIterator_new() {
	return new (std::nothrow) QCborMap::ConstIterator();
}

QCborMap__ConstIterator* QCborMap__ConstIterator_new2(const ConstIterator* param1) {
	return new (std::nothrow) QCborMap::ConstIterator(*param1);
}

void QCborMap__ConstIterator_operatorAssign(QCborMap__ConstIterator* self, const ConstIterator* other) {
	self->operator=(*other);
}

value_type QCborMap__ConstIterator_operatorMultiply(const QCborMap__ConstIterator* self) {
	return self->operator*();
}

value_type QCborMap__ConstIterator_operatorSubscript(const QCborMap__ConstIterator* self, ptrdiff_t j) {
	return self->operator[]((qsizetype)(j));
}

QCborValueConstRef* QCborMap__ConstIterator_operatorMinusGreater(const QCborMap__ConstIterator* self) {
	return (QCborValueConstRef*) self->operator->();
}

QCborValue* QCborMap__ConstIterator_key(const QCborMap__ConstIterator* self) {
	return new QCborValue(self->key());
}

QCborValueConstRef* QCborMap__ConstIterator_keyRef(const QCborMap__ConstIterator* self) {
	return new QCborValueConstRef(self->keyRef());
}

QCborValueConstRef* QCborMap__ConstIterator_value(const QCborMap__ConstIterator* self) {
	return new QCborValueConstRef(self->value());
}

ConstIterator* QCborMap__ConstIterator_operatorPlusPlus(QCborMap__ConstIterator* self) {
	return &self->operator++();
}

ConstIterator QCborMap__ConstIterator_operatorPlusPlusWithInt(QCborMap__ConstIterator* self, int param1) {
	return self->operator++(static_cast<int>(param1));
}

ConstIterator* QCborMap__ConstIterator_operatorMinusMinus(QCborMap__ConstIterator* self) {
	return &self->operator--();
}

ConstIterator QCborMap__ConstIterator_operatorMinusMinusWithInt(QCborMap__ConstIterator* self, int param1) {
	return self->operator--(static_cast<int>(param1));
}

ConstIterator* QCborMap__ConstIterator_operatorPlusAssign(QCborMap__ConstIterator* self, ptrdiff_t j) {
	return &self->operator+=((qsizetype)(j));
}

ConstIterator* QCborMap__ConstIterator_operatorMinusAssign(QCborMap__ConstIterator* self, ptrdiff_t j) {
	return &self->operator-=((qsizetype)(j));
}

ConstIterator QCborMap__ConstIterator_operatorPlus(const QCborMap__ConstIterator* self, ptrdiff_t j) {
	return self->operator+((qsizetype)(j));
}

ConstIterator QCborMap__ConstIterator_operatorMinus(const QCborMap__ConstIterator* self, ptrdiff_t j) {
	return self->operator-((qsizetype)(j));
}

ptrdiff_t QCborMap__ConstIterator_operatorMinusWithConstIterator(const QCborMap__ConstIterator* self, ConstIterator j) {
	qsizetype _ret = self->operator-(j);
	return static_cast<ptrdiff_t>(_ret);
}

void QCborMap__ConstIterator_delete(QCborMap__ConstIterator* self) {
	delete self;
}

