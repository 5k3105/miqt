#include <QHostAddress>
#include <QIPv6Address>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qhostaddress.h>
#include "gen_qhostaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QIPv6Address* QIPv6Address_new() {
	return new (std::nothrow) QIPv6Address();
}

QIPv6Address* QIPv6Address_new2(QIPv6Address* param1) {
	return new (std::nothrow) QIPv6Address(*param1);
}

unsigned char QIPv6Address_operatorSubscript(const QIPv6Address* self, int index) {
	quint8 _ret = self->operator[](static_cast<int>(index));
	return static_cast<unsigned char>(_ret);
}

void QIPv6Address_delete(QIPv6Address* self) {
	delete self;
}

QHostAddress* QHostAddress_new() {
	return new (std::nothrow) QHostAddress();
}

QHostAddress* QHostAddress_new2(unsigned int ip4Addr) {
	return new (std::nothrow) QHostAddress(static_cast<quint32>(ip4Addr));
}

QHostAddress* QHostAddress_new3(const unsigned char* ip6Addr) {
	return new (std::nothrow) QHostAddress(static_cast<const quint8*>(ip6Addr));
}

QHostAddress* QHostAddress_new4(QIPv6Address* ip6Addr) {
	return new (std::nothrow) QHostAddress(*ip6Addr);
}

QHostAddress* QHostAddress_new5(struct miqt_string address) {
	QString address_QString = QString::fromUtf8(address.data, address.len);
	return new (std::nothrow) QHostAddress(address_QString);
}

QHostAddress* QHostAddress_new6(QHostAddress* copy) {
	return new (std::nothrow) QHostAddress(*copy);
}

QHostAddress* QHostAddress_new7(SpecialAddress address) {
	return new (std::nothrow) QHostAddress(address);
}

void QHostAddress_operatorAssign(QHostAddress* self, QHostAddress* other) {
	self->operator=(*other);
}

void QHostAddress_operatorAssignWithAddress(QHostAddress* self, SpecialAddress address) {
	self->operator=(address);
}

void QHostAddress_swap(QHostAddress* self, QHostAddress* other) {
	self->swap(*other);
}

void QHostAddress_setAddress(QHostAddress* self, unsigned int ip4Addr) {
	self->setAddress(static_cast<quint32>(ip4Addr));
}

void QHostAddress_setAddressWithIp6Addr(QHostAddress* self, const unsigned char* ip6Addr) {
	self->setAddress(static_cast<const quint8*>(ip6Addr));
}

void QHostAddress_setAddress2(QHostAddress* self, QIPv6Address* ip6Addr) {
	self->setAddress(*ip6Addr);
}

bool QHostAddress_setAddress3(QHostAddress* self, struct miqt_string address) {
	QString address_QString = QString::fromUtf8(address.data, address.len);
	return self->setAddress(address_QString);
}

void QHostAddress_setAddress4(QHostAddress* self, SpecialAddress address) {
	self->setAddress(address);
}

NetworkLayerProtocol QHostAddress_protocol(const QHostAddress* self) {
	return self->protocol();
}

unsigned int QHostAddress_toIPv4Address(const QHostAddress* self) {
	quint32 _ret = self->toIPv4Address();
	return static_cast<unsigned int>(_ret);
}

QIPv6Address* QHostAddress_toIPv6Address(const QHostAddress* self) {
	return new QIPv6Address(self->toIPv6Address());
}

struct miqt_string QHostAddress_toString(const QHostAddress* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHostAddress_scopeId(const QHostAddress* self) {
	QString _ret = self->scopeId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QHostAddress_setScopeId(QHostAddress* self, struct miqt_string id) {
	QString id_QString = QString::fromUtf8(id.data, id.len);
	self->setScopeId(id_QString);
}

bool QHostAddress_isEqual(const QHostAddress* self, QHostAddress* address) {
	return self->isEqual(*address);
}

bool QHostAddress_operatorEqual(const QHostAddress* self, QHostAddress* address) {
	return (*self == *address);
}

bool QHostAddress_operatorEqualWithAddress(const QHostAddress* self, SpecialAddress address) {
	return (*self == address);
}

bool QHostAddress_operatorNotEqual(const QHostAddress* self, QHostAddress* address) {
	return (*self != *address);
}

bool QHostAddress_operatorNotEqualWithAddress(const QHostAddress* self, SpecialAddress address) {
	return (*self != address);
}

bool QHostAddress_isNull(const QHostAddress* self) {
	return self->isNull();
}

void QHostAddress_clear(QHostAddress* self) {
	self->clear();
}

bool QHostAddress_isInSubnet(const QHostAddress* self, QHostAddress* subnet, int netmask) {
	return self->isInSubnet(*subnet, static_cast<int>(netmask));
}

bool QHostAddress_isLoopback(const QHostAddress* self) {
	return self->isLoopback();
}

bool QHostAddress_isGlobal(const QHostAddress* self) {
	return self->isGlobal();
}

bool QHostAddress_isLinkLocal(const QHostAddress* self) {
	return self->isLinkLocal();
}

bool QHostAddress_isSiteLocal(const QHostAddress* self) {
	return self->isSiteLocal();
}

bool QHostAddress_isUniqueLocalUnicast(const QHostAddress* self) {
	return self->isUniqueLocalUnicast();
}

bool QHostAddress_isMulticast(const QHostAddress* self) {
	return self->isMulticast();
}

bool QHostAddress_isBroadcast(const QHostAddress* self) {
	return self->isBroadcast();
}

bool QHostAddress_isPrivateUse(const QHostAddress* self) {
	return self->isPrivateUse();
}

unsigned int QHostAddress_toIPv4AddressWithOk(const QHostAddress* self, bool* ok) {
	quint32 _ret = self->toIPv4Address(ok);
	return static_cast<unsigned int>(_ret);
}

bool QHostAddress_isEqual2(const QHostAddress* self, QHostAddress* address, ConversionMode mode) {
	return self->isEqual(*address, mode);
}

void QHostAddress_delete(QHostAddress* self) {
	delete self;
}

