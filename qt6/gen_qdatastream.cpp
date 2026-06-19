#include <QByteArray>
#include <QDataStream>
#include <QIODevice>
#include <QIODeviceBase>
#include <qdatastream.h>
#include "gen_qdatastream.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QDataStream* QDataStream_new() {
	return new (std::nothrow) QDataStream();
}

QDataStream* QDataStream_new2(QIODevice* param1) {
	return new (std::nothrow) QDataStream(param1);
}

QDataStream* QDataStream_new3(struct miqt_string param1) {
	QByteArray param1_QByteArray(param1.data, param1.len);
	return new (std::nothrow) QDataStream(param1_QByteArray);
}

void QDataStream_virtbase(QDataStream* src, QIODeviceBase** outptr_QIODeviceBase) {
	*outptr_QIODeviceBase = static_cast<QIODeviceBase*>(src);
}

QIODevice* QDataStream_device(const QDataStream* self) {
	return self->device();
}

void QDataStream_setDevice(QDataStream* self, QIODevice* device) {
	self->setDevice(device);
}

bool QDataStream_atEnd(const QDataStream* self) {
	return self->atEnd();
}

Status QDataStream_status(const QDataStream* self) {
	return self->status();
}

void QDataStream_setStatus(QDataStream* self, Status status) {
	self->setStatus(status);
}

void QDataStream_resetStatus(QDataStream* self) {
	self->resetStatus();
}

FloatingPointPrecision QDataStream_floatingPointPrecision(const QDataStream* self) {
	return self->floatingPointPrecision();
}

void QDataStream_setFloatingPointPrecision(QDataStream* self, FloatingPointPrecision precision) {
	self->setFloatingPointPrecision(precision);
}

ByteOrder QDataStream_byteOrder(const QDataStream* self) {
	return self->byteOrder();
}

void QDataStream_setByteOrder(QDataStream* self, ByteOrder byteOrder) {
	self->setByteOrder(byteOrder);
}

int QDataStream_version(const QDataStream* self) {
	return self->version();
}

void QDataStream_setVersion(QDataStream* self, int version) {
	self->setVersion(static_cast<int>(version));
}

void QDataStream_operatorShiftRight(QDataStream* self, char* i) {
	self->operator>>(static_cast<char&>(*i));
}

void QDataStream_operatorShiftRightWithQint8(QDataStream* self, signed char* i) {
	self->operator>>(static_cast<qint8&>(*i));
}

void QDataStream_operatorShiftRightWithQuint8(QDataStream* self, unsigned char* i) {
	self->operator>>(static_cast<quint8&>(*i));
}

void QDataStream_operatorShiftRightWithQint16(QDataStream* self, short* i) {
	self->operator>>(static_cast<qint16&>(*i));
}

void QDataStream_operatorShiftRightWithQuint16(QDataStream* self, unsigned short* i) {
	self->operator>>(static_cast<quint16&>(*i));
}

void QDataStream_operatorShiftRightWithQint32(QDataStream* self, int* i) {
	self->operator>>(static_cast<qint32&>(*i));
}

void QDataStream_operatorShiftRightWithQuint32(QDataStream* self, unsigned int* i) {
	self->operator>>(static_cast<quint32&>(*i));
}

void QDataStream_operatorShiftRightWithQint64(QDataStream* self, long long* i) {
	self->operator>>(static_cast<qint64&>(*i));
}

void QDataStream_operatorShiftRightWithQuint64(QDataStream* self, unsigned long long* i) {
	self->operator>>(static_cast<quint64&>(*i));
}

void QDataStream_operatorShiftRightWithBool(QDataStream* self, bool* i) {
	self->operator>>(*i);
}

void QDataStream_operatorShiftRightWithFloat(QDataStream* self, float* f) {
	self->operator>>(static_cast<float&>(*f));
}

void QDataStream_operatorShiftRightWithDouble(QDataStream* self, double* f) {
	self->operator>>(static_cast<double&>(*f));
}

void QDataStream_operatorShiftRightWithStr(QDataStream* self, char* str) {
	self->operator>>(str);
}

void QDataStream_operatorShiftLeft(QDataStream* self, char i) {
	self->operator<<(static_cast<char>(i));
}

void QDataStream_operatorShiftLeftWithQint8(QDataStream* self, signed char i) {
	self->operator<<(static_cast<qint8>(i));
}

void QDataStream_operatorShiftLeftWithQuint8(QDataStream* self, unsigned char i) {
	self->operator<<(static_cast<quint8>(i));
}

void QDataStream_operatorShiftLeftWithQint16(QDataStream* self, short i) {
	self->operator<<(static_cast<qint16>(i));
}

void QDataStream_operatorShiftLeftWithQuint16(QDataStream* self, unsigned short i) {
	self->operator<<(static_cast<quint16>(i));
}

void QDataStream_operatorShiftLeftWithQint32(QDataStream* self, int i) {
	self->operator<<(static_cast<qint32>(i));
}

void QDataStream_operatorShiftLeftWithQuint32(QDataStream* self, unsigned int i) {
	self->operator<<(static_cast<quint32>(i));
}

void QDataStream_operatorShiftLeftWithQint64(QDataStream* self, long long i) {
	self->operator<<(static_cast<qint64>(i));
}

void QDataStream_operatorShiftLeftWithQuint64(QDataStream* self, unsigned long long i) {
	self->operator<<(static_cast<quint64>(i));
}

void QDataStream_operatorShiftLeftWithFloat(QDataStream* self, float f) {
	self->operator<<(static_cast<float>(f));
}

void QDataStream_operatorShiftLeftWithDouble(QDataStream* self, double f) {
	self->operator<<(static_cast<double>(f));
}

void QDataStream_operatorShiftLeftWithStr(QDataStream* self, const char* str) {
	self->operator<<(str);
}

bool QDataStream_ToBool(const QDataStream* self) {
	return self->operator bool();
}

QDataStream* QDataStream_readBytes(QDataStream* self, char* param1, unsigned int* len) {
	QDataStream& _ret = self->readBytes(param1, static_cast<uint&>(*len));
	// Cast returned reference into pointer
	return &_ret;
}

QDataStream* QDataStream_readBytes2(QDataStream* self, char* param1, long long* len) {
	QDataStream& _ret = self->readBytes(param1, static_cast<qint64&>(*len));
	// Cast returned reference into pointer
	return &_ret;
}

long long QDataStream_readRawData(QDataStream* self, char* param1, long long len) {
	qint64 _ret = self->readRawData(param1, static_cast<qint64>(len));
	return static_cast<long long>(_ret);
}

void QDataStream_writeBytes(QDataStream* self, const char* param1, long long len) {
	self->writeBytes(param1, static_cast<qint64>(len));
}

long long QDataStream_writeRawData(QDataStream* self, const char* param1, long long len) {
	qint64 _ret = self->writeRawData(param1, static_cast<qint64>(len));
	return static_cast<long long>(_ret);
}

long long QDataStream_skipRawData(QDataStream* self, long long len) {
	qint64 _ret = self->skipRawData(static_cast<qint64>(len));
	return static_cast<long long>(_ret);
}

void QDataStream_startTransaction(QDataStream* self) {
	self->startTransaction();
}

bool QDataStream_commitTransaction(QDataStream* self) {
	return self->commitTransaction();
}

void QDataStream_rollbackTransaction(QDataStream* self) {
	self->rollbackTransaction();
}

void QDataStream_abortTransaction(QDataStream* self) {
	self->abortTransaction();
}

bool QDataStream_isDeviceTransactionStarted(const QDataStream* self) {
	return self->isDeviceTransactionStarted();
}

void QDataStream_delete(QDataStream* self) {
	delete self;
}

