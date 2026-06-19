#pragma once
#ifndef MIQT_QT6_GEN_QJSONOBJECT_H
#define MIQT_QT6_GEN_QJSONOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAnyStringView;
class QJsonObject;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__const_iterator)
typedef QJsonObject::const_iterator QJsonObject__const_iterator;
#else
class QJsonObject__const_iterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__iterator)
typedef QJsonObject::iterator QJsonObject__iterator;
#else
class QJsonObject__iterator;
#endif
class QJsonValue;
class QJsonValueConstRef;
class QJsonValueRef;
class QVariant;
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QJsonObject QJsonObject;
typedef struct QJsonObject__const_iterator QJsonObject__const_iterator;
typedef struct QJsonObject__iterator QJsonObject__iterator;
typedef struct QJsonValue QJsonValue;
typedef struct QJsonValueConstRef QJsonValueConstRef;
typedef struct QJsonValueRef QJsonValueRef;
typedef struct QVariant QVariant;
#endif

QJsonObject* QJsonObject_new();
QJsonObject* QJsonObject_new2(QJsonObject* other);
void QJsonObject_operatorAssign(QJsonObject* self, QJsonObject* other);
void QJsonObject_swap(QJsonObject* self, QJsonObject* other);
QJsonObject* QJsonObject_fromVariantMap(struct miqt_map /* of struct miqt_string to QVariant* */  map);
struct miqt_map /* of struct miqt_string to QVariant* */  QJsonObject_toVariantMap(const QJsonObject* self);
QJsonObject* QJsonObject_fromVariantHash(struct miqt_map /* of struct miqt_string to QVariant* */  map);
struct miqt_map /* of struct miqt_string to QVariant* */  QJsonObject_toVariantHash(const QJsonObject* self);
struct miqt_array /* of struct miqt_string */  QJsonObject_keys(const QJsonObject* self);
ptrdiff_t QJsonObject_size(const QJsonObject* self);
ptrdiff_t QJsonObject_count(const QJsonObject* self);
ptrdiff_t QJsonObject_length(const QJsonObject* self);
bool QJsonObject_isEmpty(const QJsonObject* self);
QJsonValue* QJsonObject_value(const QJsonObject* self, struct miqt_string key);
QJsonValue* QJsonObject_operatorSubscript(const QJsonObject* self, struct miqt_string key);
QJsonValueRef* QJsonObject_operatorSubscriptWithKey(QJsonObject* self, struct miqt_string key);
void QJsonObject_remove(QJsonObject* self, struct miqt_string key);
QJsonValue* QJsonObject_take(QJsonObject* self, struct miqt_string key);
bool QJsonObject_contains(const QJsonObject* self, struct miqt_string key);
iterator QJsonObject_begin(QJsonObject* self);
const_iterator QJsonObject_begin2(const QJsonObject* self);
const_iterator QJsonObject_constBegin(const QJsonObject* self);
iterator QJsonObject_end(QJsonObject* self);
const_iterator QJsonObject_end2(const QJsonObject* self);
const_iterator QJsonObject_constEnd(const QJsonObject* self);
key_value_iterator QJsonObject_keyValueBegin(QJsonObject* self);
key_value_iterator QJsonObject_keyValueEnd(QJsonObject* self);
const_key_value_iterator QJsonObject_keyValueBegin2(const QJsonObject* self);
const_key_value_iterator QJsonObject_constKeyValueBegin(const QJsonObject* self);
const_key_value_iterator QJsonObject_keyValueEnd2(const QJsonObject* self);
const_key_value_iterator QJsonObject_constKeyValueEnd(const QJsonObject* self);
iterator QJsonObject_erase(QJsonObject* self, iterator it);
iterator QJsonObject_find(QJsonObject* self, struct miqt_string key);
const_iterator QJsonObject_findWithKey(const QJsonObject* self, struct miqt_string key);
const_iterator QJsonObject_constFind(const QJsonObject* self, struct miqt_string key);
iterator QJsonObject_insert(QJsonObject* self, struct miqt_string key, QJsonValue* value);
bool QJsonObject_empty(const QJsonObject* self);

void QJsonObject_delete(QJsonObject* self);

QJsonObject__iterator* QJsonObject__iterator_new();
QJsonObject__iterator* QJsonObject__iterator_new2(QJsonObject* obj, ptrdiff_t index);
QJsonObject__iterator* QJsonObject__iterator_new3(const iterator* other);
void QJsonObject__iterator_operatorAssign(QJsonObject__iterator* self, const iterator* other);
struct miqt_string QJsonObject__iterator_key(const QJsonObject__iterator* self);
QAnyStringView* QJsonObject__iterator_keyView(const QJsonObject__iterator* self);
QJsonValueRef* QJsonObject__iterator_value(const QJsonObject__iterator* self);
QJsonValueRef* QJsonObject__iterator_operatorMultiply(const QJsonObject__iterator* self);
QJsonValueConstRef* QJsonObject__iterator_operatorMinusGreater(const QJsonObject__iterator* self);
QJsonValueRef* QJsonObject__iterator_operatorMinusGreater2(QJsonObject__iterator* self);
QJsonValueRef* QJsonObject__iterator_operatorSubscript(const QJsonObject__iterator* self, ptrdiff_t j);
iterator* QJsonObject__iterator_operatorPlusPlus(QJsonObject__iterator* self);
iterator QJsonObject__iterator_operatorPlusPlusWithInt(QJsonObject__iterator* self, int param1);
iterator* QJsonObject__iterator_operatorMinusMinus(QJsonObject__iterator* self);
iterator QJsonObject__iterator_operatorMinusMinusWithInt(QJsonObject__iterator* self, int param1);
iterator QJsonObject__iterator_operatorPlus(const QJsonObject__iterator* self, ptrdiff_t j);
iterator QJsonObject__iterator_operatorMinus(const QJsonObject__iterator* self, ptrdiff_t j);
iterator* QJsonObject__iterator_operatorPlusAssign(QJsonObject__iterator* self, ptrdiff_t j);
iterator* QJsonObject__iterator_operatorMinusAssign(QJsonObject__iterator* self, ptrdiff_t j);
ptrdiff_t QJsonObject__iterator_operatorMinusWithIterator(const QJsonObject__iterator* self, iterator j);

void QJsonObject__iterator_delete(QJsonObject__iterator* self);

QJsonObject__const_iterator* QJsonObject__const_iterator_new();
QJsonObject__const_iterator* QJsonObject__const_iterator_new2(QJsonObject* obj, ptrdiff_t index);
QJsonObject__const_iterator* QJsonObject__const_iterator_new3(const iterator* other);
QJsonObject__const_iterator* QJsonObject__const_iterator_new4(const const_iterator* other);
void QJsonObject__const_iterator_operatorAssign(QJsonObject__const_iterator* self, const const_iterator* other);
struct miqt_string QJsonObject__const_iterator_key(const QJsonObject__const_iterator* self);
QAnyStringView* QJsonObject__const_iterator_keyView(const QJsonObject__const_iterator* self);
QJsonValueConstRef* QJsonObject__const_iterator_value(const QJsonObject__const_iterator* self);
QJsonValueConstRef* QJsonObject__const_iterator_operatorMultiply(const QJsonObject__const_iterator* self);
QJsonValueConstRef* QJsonObject__const_iterator_operatorMinusGreater(const QJsonObject__const_iterator* self);
QJsonValueConstRef* QJsonObject__const_iterator_operatorSubscript(const QJsonObject__const_iterator* self, ptrdiff_t j);
const_iterator* QJsonObject__const_iterator_operatorPlusPlus(QJsonObject__const_iterator* self);
const_iterator QJsonObject__const_iterator_operatorPlusPlusWithInt(QJsonObject__const_iterator* self, int param1);
const_iterator* QJsonObject__const_iterator_operatorMinusMinus(QJsonObject__const_iterator* self);
const_iterator QJsonObject__const_iterator_operatorMinusMinusWithInt(QJsonObject__const_iterator* self, int param1);
const_iterator QJsonObject__const_iterator_operatorPlus(const QJsonObject__const_iterator* self, ptrdiff_t j);
const_iterator QJsonObject__const_iterator_operatorMinus(const QJsonObject__const_iterator* self, ptrdiff_t j);
const_iterator* QJsonObject__const_iterator_operatorPlusAssign(QJsonObject__const_iterator* self, ptrdiff_t j);
const_iterator* QJsonObject__const_iterator_operatorMinusAssign(QJsonObject__const_iterator* self, ptrdiff_t j);
ptrdiff_t QJsonObject__const_iterator_operatorMinusWithConstIterator(const QJsonObject__const_iterator* self, const_iterator j);

void QJsonObject__const_iterator_delete(QJsonObject__const_iterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
