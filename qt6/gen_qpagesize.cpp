#include <QPageSize>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpagesize.h>
#include "gen_qpagesize.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPageSize* QPageSize_new() {
	return new (std::nothrow) QPageSize();
}

QPageSize* QPageSize_new2(PageSizeId pageSizeId) {
	return new (std::nothrow) QPageSize(pageSizeId);
}

QPageSize* QPageSize_new3(QSize* pointSize) {
	return new (std::nothrow) QPageSize(*pointSize);
}

QPageSize* QPageSize_new4(QSizeF* size, Unit units) {
	return new (std::nothrow) QPageSize(*size, units);
}

QPageSize* QPageSize_new5(QPageSize* other) {
	return new (std::nothrow) QPageSize(*other);
}

QPageSize* QPageSize_new6(QSize* pointSize, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) QPageSize(*pointSize, name_QString);
}

QPageSize* QPageSize_new7(QSize* pointSize, struct miqt_string name, SizeMatchPolicy matchPolicy) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) QPageSize(*pointSize, name_QString, matchPolicy);
}

QPageSize* QPageSize_new8(QSizeF* size, Unit units, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) QPageSize(*size, units, name_QString);
}

QPageSize* QPageSize_new9(QSizeF* size, Unit units, struct miqt_string name, SizeMatchPolicy matchPolicy) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) QPageSize(*size, units, name_QString, matchPolicy);
}

void QPageSize_operatorAssign(QPageSize* self, QPageSize* other) {
	self->operator=(*other);
}

void QPageSize_swap(QPageSize* self, QPageSize* other) {
	self->swap(*other);
}

bool QPageSize_isEquivalentTo(const QPageSize* self, QPageSize* other) {
	return self->isEquivalentTo(*other);
}

bool QPageSize_isValid(const QPageSize* self) {
	return self->isValid();
}

struct miqt_string QPageSize_key(const QPageSize* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSize_name(const QPageSize* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

PageSizeId QPageSize_id(const QPageSize* self) {
	return self->id();
}

int QPageSize_windowsId(const QPageSize* self) {
	return self->windowsId();
}

QSizeF* QPageSize_definitionSize(const QPageSize* self) {
	return new QSizeF(self->definitionSize());
}

Unit QPageSize_definitionUnits(const QPageSize* self) {
	return self->definitionUnits();
}

QSizeF* QPageSize_size(const QPageSize* self, Unit units) {
	return new QSizeF(self->size(units));
}

QSize* QPageSize_sizePoints(const QPageSize* self) {
	return new QSize(self->sizePoints());
}

QSize* QPageSize_sizePixels(const QPageSize* self, int resolution) {
	return new QSize(self->sizePixels(static_cast<int>(resolution)));
}

QRectF* QPageSize_rect(const QPageSize* self, Unit units) {
	return new QRectF(self->rect(units));
}

QRect* QPageSize_rectPoints(const QPageSize* self) {
	return new QRect(self->rectPoints());
}

QRect* QPageSize_rectPixels(const QPageSize* self, int resolution) {
	return new QRect(self->rectPixels(static_cast<int>(resolution)));
}

struct miqt_string QPageSize_keyWithPageSizeId(PageSizeId pageSizeId) {
	QString _ret = QPageSize::key(pageSizeId);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSize_nameWithPageSizeId(PageSizeId pageSizeId) {
	QString _ret = QPageSize::name(pageSizeId);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

PageSizeId QPageSize_idWithPointSize(QSize* pointSize) {
	return QPageSize::id(*pointSize);
}

PageSizeId QPageSize_id2(QSizeF* size, Unit units) {
	return QPageSize::id(*size, units);
}

PageSizeId QPageSize_idWithWindowsId(int windowsId) {
	return QPageSize::id(static_cast<int>(windowsId));
}

int QPageSize_windowsIdWithPageSizeId(PageSizeId pageSizeId) {
	return QPageSize::windowsId(pageSizeId);
}

QSizeF* QPageSize_definitionSizeWithPageSizeId(PageSizeId pageSizeId) {
	return new QSizeF(QPageSize::definitionSize(pageSizeId));
}

Unit QPageSize_definitionUnitsWithPageSizeId(PageSizeId pageSizeId) {
	return QPageSize::definitionUnits(pageSizeId);
}

QSizeF* QPageSize_size2(PageSizeId pageSizeId, Unit units) {
	return new QSizeF(QPageSize::size(pageSizeId, units));
}

QSize* QPageSize_sizePointsWithPageSizeId(PageSizeId pageSizeId) {
	return new QSize(QPageSize::sizePoints(pageSizeId));
}

QSize* QPageSize_sizePixels2(PageSizeId pageSizeId, int resolution) {
	return new QSize(QPageSize::sizePixels(pageSizeId, static_cast<int>(resolution)));
}

PageSizeId QPageSize_id3(QSize* pointSize, SizeMatchPolicy matchPolicy) {
	return QPageSize::id(*pointSize, matchPolicy);
}

PageSizeId QPageSize_id4(QSizeF* size, Unit units, SizeMatchPolicy matchPolicy) {
	return QPageSize::id(*size, units, matchPolicy);
}

void QPageSize_delete(QPageSize* self) {
	delete self;
}

