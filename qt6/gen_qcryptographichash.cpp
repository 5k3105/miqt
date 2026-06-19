#include <QByteArray>
#include <QByteArrayView>
#include <QCryptographicHash>
#include <QIODevice>
#include <qcryptographichash.h>
#include "gen_qcryptographichash.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QCryptographicHash* QCryptographicHash_new(Algorithm method) {
	return new (std::nothrow) QCryptographicHash(method);
}

void QCryptographicHash_swap(QCryptographicHash* self, QCryptographicHash* other) {
	self->swap(*other);
}

void QCryptographicHash_reset(QCryptographicHash* self) {
	self->reset();
}

Algorithm QCryptographicHash_algorithm(const QCryptographicHash* self) {
	return self->algorithm();
}

void QCryptographicHash_addData(QCryptographicHash* self, const char* data, ptrdiff_t length) {
	self->addData(data, (qsizetype)(length));
}

void QCryptographicHash_addDataWithData(QCryptographicHash* self, QByteArrayView* data) {
	self->addData(*data);
}

bool QCryptographicHash_addDataWithDevice(QCryptographicHash* self, QIODevice* device) {
	return self->addData(device);
}

struct miqt_string QCryptographicHash_result(const QCryptographicHash* self) {
	QByteArray _qb = self->result();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QByteArrayView* QCryptographicHash_resultView(const QCryptographicHash* self) {
	return new QByteArrayView(self->resultView());
}

struct miqt_string QCryptographicHash_hash(QByteArrayView* data, Algorithm method) {
	QByteArray _qb = QCryptographicHash::hash(*data, method);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QByteArrayView* QCryptographicHash_hashInto(QSpan<char> buffer, QByteArrayView* data, Algorithm method) {
	return new QByteArrayView(QCryptographicHash::hashInto(buffer, *data, method));
}

QByteArrayView* QCryptographicHash_hashInto2(QSpan<uchar> buffer, QByteArrayView* data, Algorithm method) {
	return new QByteArrayView(QCryptographicHash::hashInto(buffer, *data, method));
}

QByteArrayView* QCryptographicHash_hashInto3(QSpan<std::byte> buffer, QByteArrayView* data, Algorithm method) {
	return new QByteArrayView(QCryptographicHash::hashInto(buffer, *data, method));
}

QByteArrayView* QCryptographicHash_hashInto4(QSpan<char> buffer, QSpan<const QByteArrayView> data, Algorithm method) {
	return new QByteArrayView(QCryptographicHash::hashInto(buffer, data, method));
}

QByteArrayView* QCryptographicHash_hashInto5(QSpan<uchar> buffer, QSpan<const QByteArrayView> data, Algorithm method) {
	return new QByteArrayView(QCryptographicHash::hashInto(buffer, data, method));
}

QByteArrayView* QCryptographicHash_hashInto6(QSpan<std::byte> buffer, QSpan<const QByteArrayView> data, Algorithm method) {
	return new QByteArrayView(QCryptographicHash::hashInto(buffer, data, method));
}

int QCryptographicHash_hashLength(Algorithm method) {
	return QCryptographicHash::hashLength(method);
}

bool QCryptographicHash_supportsAlgorithm(Algorithm method) {
	return QCryptographicHash::supportsAlgorithm(method);
}

void QCryptographicHash_delete(QCryptographicHash* self) {
	delete self;
}

