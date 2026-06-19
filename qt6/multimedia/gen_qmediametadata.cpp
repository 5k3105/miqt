#include <QList>
#include <QMediaMetaData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qmediametadata.h>
#include "gen_qmediametadata.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMediaMetaData* QMediaMetaData_new(QMediaMetaData* param1) {
	return new (std::nothrow) QMediaMetaData(*param1);
}

QMediaMetaData* QMediaMetaData_new2() {
	return new (std::nothrow) QMediaMetaData();
}

QVariant* QMediaMetaData_value(const QMediaMetaData* self, Key k) {
	return new QVariant(self->value(k));
}

void QMediaMetaData_insert(QMediaMetaData* self, Key k, QVariant* value) {
	self->insert(k, *value);
}

void QMediaMetaData_remove(QMediaMetaData* self, Key k) {
	self->remove(k);
}

struct miqt_array /* of Key */  QMediaMetaData_keys(const QMediaMetaData* self) {
	QList<Key> _ret = self->keys();
	// Convert QList<> from C++ memory to manually-managed C memory
	Key* _arr = static_cast<Key*>(malloc(sizeof(Key) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QVariant* QMediaMetaData_operatorSubscript(QMediaMetaData* self, Key k) {
	QVariant& _ret = self->operator[](k);
	// Cast returned reference into pointer
	return &_ret;
}

void QMediaMetaData_clear(QMediaMetaData* self) {
	self->clear();
}

bool QMediaMetaData_isEmpty(const QMediaMetaData* self) {
	return self->isEmpty();
}

struct miqt_string QMediaMetaData_stringValue(const QMediaMetaData* self, Key k) {
	QString _ret = self->stringValue(k);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaMetaData_metaDataKeyToString(Key k) {
	QString _ret = QMediaMetaData::metaDataKeyToString(k);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaMetaData_operatorAssign(QMediaMetaData* self, QMediaMetaData* param1) {
	self->operator=(*param1);
}

void QMediaMetaData_delete(QMediaMetaData* self) {
	delete self;
}

