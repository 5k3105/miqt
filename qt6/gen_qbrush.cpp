#include <QBrush>
#include <QColor>
#include <QConicalGradient>
#include <QGradient>
#define WORKAROUND_INNER_CLASS_DEFINITION_QGradient__QGradientData
#include <QImage>
#include <QLinearGradient>
#include <QPixmap>
#include <QPointF>
#include <QRadialGradient>
#include <QTransform>
#include <QVariant>
#include <qbrush.h>
#include "gen_qbrush.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QBrush* QBrush_new() {
	return new (std::nothrow) QBrush();
}

QBrush* QBrush_new2(int bs) {
	return new (std::nothrow) QBrush(static_cast<Qt::BrushStyle>(bs));
}

QBrush* QBrush_new3(QColor* color) {
	return new (std::nothrow) QBrush(*color);
}

QBrush* QBrush_new4(int color) {
	return new (std::nothrow) QBrush(static_cast<Qt::GlobalColor>(color));
}

QBrush* QBrush_new5(QColor* color, QPixmap* pixmap) {
	return new (std::nothrow) QBrush(*color, *pixmap);
}

QBrush* QBrush_new6(int color, QPixmap* pixmap) {
	return new (std::nothrow) QBrush(static_cast<Qt::GlobalColor>(color), *pixmap);
}

QBrush* QBrush_new7(QPixmap* pixmap) {
	return new (std::nothrow) QBrush(*pixmap);
}

QBrush* QBrush_new8(QImage* image) {
	return new (std::nothrow) QBrush(*image);
}

QBrush* QBrush_new9(QBrush* brush) {
	return new (std::nothrow) QBrush(*brush);
}

QBrush* QBrush_new10(QGradient* gradient) {
	return new (std::nothrow) QBrush(*gradient);
}

QBrush* QBrush_new11(QColor* color, int bs) {
	return new (std::nothrow) QBrush(*color, static_cast<Qt::BrushStyle>(bs));
}

QBrush* QBrush_new12(int color, int bs) {
	return new (std::nothrow) QBrush(static_cast<Qt::GlobalColor>(color), static_cast<Qt::BrushStyle>(bs));
}

void QBrush_operatorAssign(QBrush* self, QBrush* brush) {
	self->operator=(*brush);
}

void QBrush_swap(QBrush* self, QBrush* other) {
	self->swap(*other);
}

void QBrush_operatorAssignWithStyle(QBrush* self, int style) {
	self->operator=(static_cast<Qt::BrushStyle>(style));
}

void QBrush_operatorAssignWithColor(QBrush* self, QColor* color) {
	self->operator=(*color);
}

void QBrush_operatorAssign2(QBrush* self, int color) {
	self->operator=(static_cast<Qt::GlobalColor>(color));
}

QVariant* QBrush_ToQVariant(const QBrush* self) {
	return new QVariant(self->operator QVariant());
}

int QBrush_style(const QBrush* self) {
	Qt::BrushStyle _ret = self->style();
	return static_cast<int>(_ret);
}

void QBrush_setStyle(QBrush* self, int style) {
	self->setStyle(static_cast<Qt::BrushStyle>(style));
}

QTransform* QBrush_transform(const QBrush* self) {
	return new QTransform(self->transform());
}

void QBrush_setTransform(QBrush* self, QTransform* transform) {
	self->setTransform(*transform);
}

QPixmap* QBrush_texture(const QBrush* self) {
	return new QPixmap(self->texture());
}

void QBrush_setTexture(QBrush* self, QPixmap* pixmap) {
	self->setTexture(*pixmap);
}

QImage* QBrush_textureImage(const QBrush* self) {
	return new QImage(self->textureImage());
}

void QBrush_setTextureImage(QBrush* self, QImage* image) {
	self->setTextureImage(*image);
}

QColor* QBrush_color(const QBrush* self) {
	const QColor& _ret = self->color();
	// Cast returned reference into pointer
	return const_cast<QColor*>(&_ret);
}

void QBrush_setColor(QBrush* self, QColor* color) {
	self->setColor(*color);
}

void QBrush_setColorWithColor(QBrush* self, int color) {
	self->setColor(static_cast<Qt::GlobalColor>(color));
}

QGradient* QBrush_gradient(const QBrush* self) {
	return (QGradient*) self->gradient();
}

bool QBrush_isOpaque(const QBrush* self) {
	return self->isOpaque();
}

bool QBrush_operatorEqual(const QBrush* self, QBrush* b) {
	return (*self == *b);
}

bool QBrush_operatorNotEqual(const QBrush* self, QBrush* b) {
	return (*self != *b);
}

bool QBrush_isDetached(const QBrush* self) {
	return self->isDetached();
}

DataPtr* QBrush_dataPtr(QBrush* self) {
	return &self->data_ptr();
}

void QBrush_delete(QBrush* self) {
	delete self;
}

QGradient* QGradient_new() {
	return new (std::nothrow) QGradient();
}

QGradient* QGradient_new2(Preset param1) {
	return new (std::nothrow) QGradient(param1);
}

QGradient* QGradient_new3(QGradient* param1) {
	return new (std::nothrow) QGradient(*param1);
}

Type QGradient_type(const QGradient* self) {
	return self->type();
}

void QGradient_setSpread(QGradient* self, Spread spread) {
	self->setSpread(spread);
}

Spread QGradient_spread(const QGradient* self) {
	return self->spread();
}

void QGradient_setColorAt(QGradient* self, double pos, QColor* color) {
	self->setColorAt(static_cast<qreal>(pos), *color);
}

CoordinateMode QGradient_coordinateMode(const QGradient* self) {
	return self->coordinateMode();
}

void QGradient_setCoordinateMode(QGradient* self, CoordinateMode mode) {
	self->setCoordinateMode(mode);
}

InterpolationMode QGradient_interpolationMode(const QGradient* self) {
	return self->interpolationMode();
}

void QGradient_setInterpolationMode(QGradient* self, InterpolationMode mode) {
	self->setInterpolationMode(mode);
}

bool QGradient_operatorEqual(const QGradient* self, QGradient* gradient) {
	return (*self == *gradient);
}

bool QGradient_operatorNotEqual(const QGradient* self, QGradient* other) {
	return (*self != *other);
}

void QGradient_delete(QGradient* self) {
	delete self;
}

QLinearGradient* QLinearGradient_new() {
	return new (std::nothrow) QLinearGradient();
}

QLinearGradient* QLinearGradient_new2(QPointF* start, QPointF* finalStop) {
	return new (std::nothrow) QLinearGradient(*start, *finalStop);
}

QLinearGradient* QLinearGradient_new3(double xStart, double yStart, double xFinalStop, double yFinalStop) {
	return new (std::nothrow) QLinearGradient(static_cast<qreal>(xStart), static_cast<qreal>(yStart), static_cast<qreal>(xFinalStop), static_cast<qreal>(yFinalStop));
}

QLinearGradient* QLinearGradient_new4(QLinearGradient* param1) {
	return new (std::nothrow) QLinearGradient(*param1);
}

void QLinearGradient_virtbase(QLinearGradient* src, QGradient** outptr_QGradient) {
	*outptr_QGradient = static_cast<QGradient*>(src);
}

QPointF* QLinearGradient_start(const QLinearGradient* self) {
	return new QPointF(self->start());
}

void QLinearGradient_setStart(QLinearGradient* self, QPointF* start) {
	self->setStart(*start);
}

void QLinearGradient_setStart2(QLinearGradient* self, double x, double y) {
	self->setStart(static_cast<qreal>(x), static_cast<qreal>(y));
}

QPointF* QLinearGradient_finalStop(const QLinearGradient* self) {
	return new QPointF(self->finalStop());
}

void QLinearGradient_setFinalStop(QLinearGradient* self, QPointF* stop) {
	self->setFinalStop(*stop);
}

void QLinearGradient_setFinalStop2(QLinearGradient* self, double x, double y) {
	self->setFinalStop(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QLinearGradient_delete(QLinearGradient* self) {
	delete self;
}

QRadialGradient* QRadialGradient_new() {
	return new (std::nothrow) QRadialGradient();
}

QRadialGradient* QRadialGradient_new2(QPointF* center, double radius, QPointF* focalPoint) {
	return new (std::nothrow) QRadialGradient(*center, static_cast<qreal>(radius), *focalPoint);
}

QRadialGradient* QRadialGradient_new3(double cx, double cy, double radius, double fx, double fy) {
	return new (std::nothrow) QRadialGradient(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(radius), static_cast<qreal>(fx), static_cast<qreal>(fy));
}

QRadialGradient* QRadialGradient_new4(QPointF* center, double radius) {
	return new (std::nothrow) QRadialGradient(*center, static_cast<qreal>(radius));
}

QRadialGradient* QRadialGradient_new5(double cx, double cy, double radius) {
	return new (std::nothrow) QRadialGradient(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(radius));
}

QRadialGradient* QRadialGradient_new6(QPointF* center, double centerRadius, QPointF* focalPoint, double focalRadius) {
	return new (std::nothrow) QRadialGradient(*center, static_cast<qreal>(centerRadius), *focalPoint, static_cast<qreal>(focalRadius));
}

QRadialGradient* QRadialGradient_new7(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius) {
	return new (std::nothrow) QRadialGradient(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(centerRadius), static_cast<qreal>(fx), static_cast<qreal>(fy), static_cast<qreal>(focalRadius));
}

QRadialGradient* QRadialGradient_new8(QRadialGradient* param1) {
	return new (std::nothrow) QRadialGradient(*param1);
}

void QRadialGradient_virtbase(QRadialGradient* src, QGradient** outptr_QGradient) {
	*outptr_QGradient = static_cast<QGradient*>(src);
}

QPointF* QRadialGradient_center(const QRadialGradient* self) {
	return new QPointF(self->center());
}

void QRadialGradient_setCenter(QRadialGradient* self, QPointF* center) {
	self->setCenter(*center);
}

void QRadialGradient_setCenter2(QRadialGradient* self, double x, double y) {
	self->setCenter(static_cast<qreal>(x), static_cast<qreal>(y));
}

QPointF* QRadialGradient_focalPoint(const QRadialGradient* self) {
	return new QPointF(self->focalPoint());
}

void QRadialGradient_setFocalPoint(QRadialGradient* self, QPointF* focalPoint) {
	self->setFocalPoint(*focalPoint);
}

void QRadialGradient_setFocalPoint2(QRadialGradient* self, double x, double y) {
	self->setFocalPoint(static_cast<qreal>(x), static_cast<qreal>(y));
}

double QRadialGradient_radius(const QRadialGradient* self) {
	qreal _ret = self->radius();
	return static_cast<double>(_ret);
}

void QRadialGradient_setRadius(QRadialGradient* self, double radius) {
	self->setRadius(static_cast<qreal>(radius));
}

double QRadialGradient_centerRadius(const QRadialGradient* self) {
	qreal _ret = self->centerRadius();
	return static_cast<double>(_ret);
}

void QRadialGradient_setCenterRadius(QRadialGradient* self, double radius) {
	self->setCenterRadius(static_cast<qreal>(radius));
}

double QRadialGradient_focalRadius(const QRadialGradient* self) {
	qreal _ret = self->focalRadius();
	return static_cast<double>(_ret);
}

void QRadialGradient_setFocalRadius(QRadialGradient* self, double radius) {
	self->setFocalRadius(static_cast<qreal>(radius));
}

void QRadialGradient_delete(QRadialGradient* self) {
	delete self;
}

QConicalGradient* QConicalGradient_new() {
	return new (std::nothrow) QConicalGradient();
}

QConicalGradient* QConicalGradient_new2(QPointF* center, double startAngle) {
	return new (std::nothrow) QConicalGradient(*center, static_cast<qreal>(startAngle));
}

QConicalGradient* QConicalGradient_new3(double cx, double cy, double startAngle) {
	return new (std::nothrow) QConicalGradient(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(startAngle));
}

QConicalGradient* QConicalGradient_new4(QConicalGradient* param1) {
	return new (std::nothrow) QConicalGradient(*param1);
}

void QConicalGradient_virtbase(QConicalGradient* src, QGradient** outptr_QGradient) {
	*outptr_QGradient = static_cast<QGradient*>(src);
}

QPointF* QConicalGradient_center(const QConicalGradient* self) {
	return new QPointF(self->center());
}

void QConicalGradient_setCenter(QConicalGradient* self, QPointF* center) {
	self->setCenter(*center);
}

void QConicalGradient_setCenter2(QConicalGradient* self, double x, double y) {
	self->setCenter(static_cast<qreal>(x), static_cast<qreal>(y));
}

double QConicalGradient_angle(const QConicalGradient* self) {
	qreal _ret = self->angle();
	return static_cast<double>(_ret);
}

void QConicalGradient_setAngle(QConicalGradient* self, double angle) {
	self->setAngle(static_cast<qreal>(angle));
}

void QConicalGradient_delete(QConicalGradient* self) {
	delete self;
}

QGradient__QGradientData* QGradient__QGradientData_new(const QGradientData* param1) {
	return new (std::nothrow) QGradient::QGradientData(*param1);
}

void QGradient__QGradientData_delete(QGradient__QGradientData* self) {
	delete self;
}

