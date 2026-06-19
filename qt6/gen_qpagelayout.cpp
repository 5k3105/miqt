#include <QMargins>
#include <QMarginsF>
#include <QPageLayout>
#include <QPageSize>
#include <QRect>
#include <QRectF>
#include <qpagelayout.h>
#include "gen_qpagelayout.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPageLayout* QPageLayout_new() {
	return new (std::nothrow) QPageLayout();
}

QPageLayout* QPageLayout_new2(QPageSize* pageSize, Orientation orientation, QMarginsF* margins) {
	return new (std::nothrow) QPageLayout(*pageSize, orientation, *margins);
}

QPageLayout* QPageLayout_new3(QPageLayout* other) {
	return new (std::nothrow) QPageLayout(*other);
}

QPageLayout* QPageLayout_new4(QPageSize* pageSize, Orientation orientation, QMarginsF* margins, Unit units) {
	return new (std::nothrow) QPageLayout(*pageSize, orientation, *margins, units);
}

QPageLayout* QPageLayout_new5(QPageSize* pageSize, Orientation orientation, QMarginsF* margins, Unit units, QMarginsF* minMargins) {
	return new (std::nothrow) QPageLayout(*pageSize, orientation, *margins, units, *minMargins);
}

void QPageLayout_operatorAssign(QPageLayout* self, QPageLayout* other) {
	self->operator=(*other);
}

void QPageLayout_swap(QPageLayout* self, QPageLayout* other) {
	self->swap(*other);
}

bool QPageLayout_isEquivalentTo(const QPageLayout* self, QPageLayout* other) {
	return self->isEquivalentTo(*other);
}

bool QPageLayout_isValid(const QPageLayout* self) {
	return self->isValid();
}

void QPageLayout_setMode(QPageLayout* self, Mode mode) {
	self->setMode(mode);
}

Mode QPageLayout_mode(const QPageLayout* self) {
	return self->mode();
}

void QPageLayout_setPageSize(QPageLayout* self, QPageSize* pageSize) {
	self->setPageSize(*pageSize);
}

QPageSize* QPageLayout_pageSize(const QPageLayout* self) {
	return new QPageSize(self->pageSize());
}

void QPageLayout_setOrientation(QPageLayout* self, Orientation orientation) {
	self->setOrientation(orientation);
}

Orientation QPageLayout_orientation(const QPageLayout* self) {
	return self->orientation();
}

void QPageLayout_setUnits(QPageLayout* self, Unit units) {
	self->setUnits(units);
}

Unit QPageLayout_units(const QPageLayout* self) {
	return self->units();
}

bool QPageLayout_setMargins(QPageLayout* self, QMarginsF* margins) {
	return self->setMargins(*margins);
}

bool QPageLayout_setLeftMargin(QPageLayout* self, double leftMargin) {
	return self->setLeftMargin(static_cast<qreal>(leftMargin));
}

bool QPageLayout_setRightMargin(QPageLayout* self, double rightMargin) {
	return self->setRightMargin(static_cast<qreal>(rightMargin));
}

bool QPageLayout_setTopMargin(QPageLayout* self, double topMargin) {
	return self->setTopMargin(static_cast<qreal>(topMargin));
}

bool QPageLayout_setBottomMargin(QPageLayout* self, double bottomMargin) {
	return self->setBottomMargin(static_cast<qreal>(bottomMargin));
}

QMarginsF* QPageLayout_margins(const QPageLayout* self) {
	return new QMarginsF(self->margins());
}

QMarginsF* QPageLayout_marginsWithUnits(const QPageLayout* self, Unit units) {
	return new QMarginsF(self->margins(units));
}

QMargins* QPageLayout_marginsPoints(const QPageLayout* self) {
	return new QMargins(self->marginsPoints());
}

QMargins* QPageLayout_marginsPixels(const QPageLayout* self, int resolution) {
	return new QMargins(self->marginsPixels(static_cast<int>(resolution)));
}

void QPageLayout_setMinimumMargins(QPageLayout* self, QMarginsF* minMargins) {
	self->setMinimumMargins(*minMargins);
}

QMarginsF* QPageLayout_minimumMargins(const QPageLayout* self) {
	return new QMarginsF(self->minimumMargins());
}

QMarginsF* QPageLayout_maximumMargins(const QPageLayout* self) {
	return new QMarginsF(self->maximumMargins());
}

QRectF* QPageLayout_fullRect(const QPageLayout* self) {
	return new QRectF(self->fullRect());
}

QRectF* QPageLayout_fullRectWithUnits(const QPageLayout* self, Unit units) {
	return new QRectF(self->fullRect(units));
}

QRect* QPageLayout_fullRectPoints(const QPageLayout* self) {
	return new QRect(self->fullRectPoints());
}

QRect* QPageLayout_fullRectPixels(const QPageLayout* self, int resolution) {
	return new QRect(self->fullRectPixels(static_cast<int>(resolution)));
}

QRectF* QPageLayout_paintRect(const QPageLayout* self) {
	return new QRectF(self->paintRect());
}

QRectF* QPageLayout_paintRectWithUnits(const QPageLayout* self, Unit units) {
	return new QRectF(self->paintRect(units));
}

QRect* QPageLayout_paintRectPoints(const QPageLayout* self) {
	return new QRect(self->paintRectPoints());
}

QRect* QPageLayout_paintRectPixels(const QPageLayout* self, int resolution) {
	return new QRect(self->paintRectPixels(static_cast<int>(resolution)));
}

void QPageLayout_setPageSize2(QPageLayout* self, QPageSize* pageSize, QMarginsF* minMargins) {
	self->setPageSize(*pageSize, *minMargins);
}

bool QPageLayout_setMargins2(QPageLayout* self, QMarginsF* margins, OutOfBoundsPolicy outOfBoundsPolicy) {
	return self->setMargins(*margins, outOfBoundsPolicy);
}

bool QPageLayout_setLeftMargin2(QPageLayout* self, double leftMargin, OutOfBoundsPolicy outOfBoundsPolicy) {
	return self->setLeftMargin(static_cast<qreal>(leftMargin), outOfBoundsPolicy);
}

bool QPageLayout_setRightMargin2(QPageLayout* self, double rightMargin, OutOfBoundsPolicy outOfBoundsPolicy) {
	return self->setRightMargin(static_cast<qreal>(rightMargin), outOfBoundsPolicy);
}

bool QPageLayout_setTopMargin2(QPageLayout* self, double topMargin, OutOfBoundsPolicy outOfBoundsPolicy) {
	return self->setTopMargin(static_cast<qreal>(topMargin), outOfBoundsPolicy);
}

bool QPageLayout_setBottomMargin2(QPageLayout* self, double bottomMargin, OutOfBoundsPolicy outOfBoundsPolicy) {
	return self->setBottomMargin(static_cast<qreal>(bottomMargin), outOfBoundsPolicy);
}

void QPageLayout_delete(QPageLayout* self) {
	delete self;
}

