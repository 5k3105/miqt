#include <QOperatingSystemVersion>
#include <QOperatingSystemVersionBase>
#include <QOperatingSystemVersionUnexported>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVersionNumber>
#include <qoperatingsystemversion.h>
#include "gen_qoperatingsystemversion.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new(OSType osType, int vmajor) {
	return new (std::nothrow) QOperatingSystemVersionBase(osType, static_cast<int>(vmajor));
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new2(QOperatingSystemVersionBase* param1) {
	return new (std::nothrow) QOperatingSystemVersionBase(*param1);
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new3(OSType osType, int vmajor, int vminor) {
	return new (std::nothrow) QOperatingSystemVersionBase(osType, static_cast<int>(vmajor), static_cast<int>(vminor));
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new4(OSType osType, int vmajor, int vminor, int vmicro) {
	return new (std::nothrow) QOperatingSystemVersionBase(osType, static_cast<int>(vmajor), static_cast<int>(vminor), static_cast<int>(vmicro));
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_current() {
	return new QOperatingSystemVersionBase(QOperatingSystemVersionBase::current());
}

struct miqt_string QOperatingSystemVersionBase_name(QOperatingSystemVersionBase* osversion) {
	QString _ret = QOperatingSystemVersionBase::name(*osversion);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

OSType QOperatingSystemVersionBase_currentType() {
	return QOperatingSystemVersionBase::currentType();
}

QVersionNumber* QOperatingSystemVersionBase_version(const QOperatingSystemVersionBase* self) {
	return new QVersionNumber(self->version());
}

int QOperatingSystemVersionBase_majorVersion(const QOperatingSystemVersionBase* self) {
	return self->majorVersion();
}

int QOperatingSystemVersionBase_minorVersion(const QOperatingSystemVersionBase* self) {
	return self->minorVersion();
}

int QOperatingSystemVersionBase_microVersion(const QOperatingSystemVersionBase* self) {
	return self->microVersion();
}

int QOperatingSystemVersionBase_segmentCount(const QOperatingSystemVersionBase* self) {
	return self->segmentCount();
}

OSType QOperatingSystemVersionBase_type(const QOperatingSystemVersionBase* self) {
	return self->type();
}

struct miqt_string QOperatingSystemVersionBase_name2(const QOperatingSystemVersionBase* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QOperatingSystemVersionBase_delete(QOperatingSystemVersionBase* self) {
	delete self;
}

QOperatingSystemVersionUnexported* QOperatingSystemVersionUnexported_new(QOperatingSystemVersionBase* other) {
	return new (std::nothrow) QOperatingSystemVersionUnexported(*other);
}

QOperatingSystemVersionUnexported* QOperatingSystemVersionUnexported_new2() {
	return new (std::nothrow) QOperatingSystemVersionUnexported();
}

QOperatingSystemVersionUnexported* QOperatingSystemVersionUnexported_new3(QOperatingSystemVersionUnexported* param1) {
	return new (std::nothrow) QOperatingSystemVersionUnexported(*param1);
}

QOperatingSystemVersionUnexported* QOperatingSystemVersionUnexported_new4(OSType param1, int param2, int param3, int param4) {
	return new (std::nothrow) QOperatingSystemVersionUnexported(param1, static_cast<int>(param2), static_cast<int>(param3), static_cast<int>(param4));
}

void QOperatingSystemVersionUnexported_virtbase(QOperatingSystemVersionUnexported* src, QOperatingSystemVersionBase** outptr_QOperatingSystemVersionBase) {
	*outptr_QOperatingSystemVersionBase = static_cast<QOperatingSystemVersionBase*>(src);
}

void QOperatingSystemVersionUnexported_delete(QOperatingSystemVersionUnexported* self) {
	delete self;
}

QOperatingSystemVersion* QOperatingSystemVersion_new(QOperatingSystemVersionBase* osversion) {
	return new (std::nothrow) QOperatingSystemVersion(*osversion);
}

QOperatingSystemVersion* QOperatingSystemVersion_new2(OSType osType, int vmajor) {
	return new (std::nothrow) QOperatingSystemVersion(osType, static_cast<int>(vmajor));
}

QOperatingSystemVersion* QOperatingSystemVersion_new3(QOperatingSystemVersion* param1) {
	return new (std::nothrow) QOperatingSystemVersion(*param1);
}

QOperatingSystemVersion* QOperatingSystemVersion_new4(OSType osType, int vmajor, int vminor) {
	return new (std::nothrow) QOperatingSystemVersion(osType, static_cast<int>(vmajor), static_cast<int>(vminor));
}

QOperatingSystemVersion* QOperatingSystemVersion_new5(OSType osType, int vmajor, int vminor, int vmicro) {
	return new (std::nothrow) QOperatingSystemVersion(osType, static_cast<int>(vmajor), static_cast<int>(vminor), static_cast<int>(vmicro));
}

void QOperatingSystemVersion_virtbase(QOperatingSystemVersion* src, QOperatingSystemVersionUnexported** outptr_QOperatingSystemVersionUnexported) {
	*outptr_QOperatingSystemVersionUnexported = static_cast<QOperatingSystemVersionUnexported*>(src);
}

QOperatingSystemVersion* QOperatingSystemVersion_current() {
	return new QOperatingSystemVersion(QOperatingSystemVersion::current());
}

OSType QOperatingSystemVersion_currentType() {
	return QOperatingSystemVersion::currentType();
}

OSType QOperatingSystemVersion_type(const QOperatingSystemVersion* self) {
	return self->type();
}

void QOperatingSystemVersion_delete(QOperatingSystemVersion* self) {
	delete self;
}

