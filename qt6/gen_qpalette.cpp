#include <QBrush>
#include <QColor>
#include <QPalette>
#include <QVariant>
#include <qpalette.h>
#include "gen_qpalette.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPalette* QPalette_new() {
	return new (std::nothrow) QPalette();
}

QPalette* QPalette_new2(QColor* button) {
	return new (std::nothrow) QPalette(*button);
}

QPalette* QPalette_new3(int button) {
	return new (std::nothrow) QPalette(static_cast<Qt::GlobalColor>(button));
}

QPalette* QPalette_new4(QColor* button, QColor* window) {
	return new (std::nothrow) QPalette(*button, *window);
}

QPalette* QPalette_new5(QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window) {
	return new (std::nothrow) QPalette(*windowText, *button, *light, *dark, *mid, *text, *bright_text, *base, *window);
}

QPalette* QPalette_new6(QColor* windowText, QColor* window, QColor* light, QColor* dark, QColor* mid, QColor* text, QColor* base) {
	return new (std::nothrow) QPalette(*windowText, *window, *light, *dark, *mid, *text, *base);
}

QPalette* QPalette_new7(QPalette* palette) {
	return new (std::nothrow) QPalette(*palette);
}

void QPalette_operatorAssign(QPalette* self, QPalette* palette) {
	self->operator=(*palette);
}

void QPalette_swap(QPalette* self, QPalette* other) {
	self->swap(*other);
}

QVariant* QPalette_ToQVariant(const QPalette* self) {
	return new QVariant(self->operator QVariant());
}

ColorGroup QPalette_currentColorGroup(const QPalette* self) {
	return self->currentColorGroup();
}

void QPalette_setCurrentColorGroup(QPalette* self, ColorGroup cg) {
	self->setCurrentColorGroup(cg);
}

QColor* QPalette_color(const QPalette* self, ColorGroup cg, ColorRole cr) {
	const QColor& _ret = self->color(cg, cr);
	// Cast returned reference into pointer
	return const_cast<QColor*>(&_ret);
}

QBrush* QPalette_brush(const QPalette* self, ColorGroup cg, ColorRole cr) {
	const QBrush& _ret = self->brush(cg, cr);
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

void QPalette_setColor(QPalette* self, ColorGroup cg, ColorRole cr, QColor* color) {
	self->setColor(cg, cr, *color);
}

void QPalette_setColor2(QPalette* self, ColorRole cr, QColor* color) {
	self->setColor(cr, *color);
}

void QPalette_setBrush(QPalette* self, ColorRole cr, QBrush* brush) {
	self->setBrush(cr, *brush);
}

bool QPalette_isBrushSet(const QPalette* self, ColorGroup cg, ColorRole cr) {
	return self->isBrushSet(cg, cr);
}

void QPalette_setBrush2(QPalette* self, ColorGroup cg, ColorRole cr, QBrush* brush) {
	self->setBrush(cg, cr, *brush);
}

void QPalette_setColorGroup(QPalette* self, ColorGroup cr, QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window) {
	self->setColorGroup(cr, *windowText, *button, *light, *dark, *mid, *text, *bright_text, *base, *window);
}

bool QPalette_isEqual(const QPalette* self, ColorGroup cr1, ColorGroup cr2) {
	return self->isEqual(cr1, cr2);
}

QColor* QPalette_colorWithCr(const QPalette* self, ColorRole cr) {
	const QColor& _ret = self->color(cr);
	// Cast returned reference into pointer
	return const_cast<QColor*>(&_ret);
}

QBrush* QPalette_brushWithCr(const QPalette* self, ColorRole cr) {
	const QBrush& _ret = self->brush(cr);
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_windowText(const QPalette* self) {
	const QBrush& _ret = self->windowText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_button(const QPalette* self) {
	const QBrush& _ret = self->button();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_light(const QPalette* self) {
	const QBrush& _ret = self->light();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_dark(const QPalette* self) {
	const QBrush& _ret = self->dark();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_mid(const QPalette* self) {
	const QBrush& _ret = self->mid();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_text(const QPalette* self) {
	const QBrush& _ret = self->text();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_base(const QPalette* self) {
	const QBrush& _ret = self->base();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_alternateBase(const QPalette* self) {
	const QBrush& _ret = self->alternateBase();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_toolTipBase(const QPalette* self) {
	const QBrush& _ret = self->toolTipBase();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_toolTipText(const QPalette* self) {
	const QBrush& _ret = self->toolTipText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_window(const QPalette* self) {
	const QBrush& _ret = self->window();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_midlight(const QPalette* self) {
	const QBrush& _ret = self->midlight();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_brightText(const QPalette* self) {
	const QBrush& _ret = self->brightText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_buttonText(const QPalette* self) {
	const QBrush& _ret = self->buttonText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_shadow(const QPalette* self) {
	const QBrush& _ret = self->shadow();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_highlight(const QPalette* self) {
	const QBrush& _ret = self->highlight();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_highlightedText(const QPalette* self) {
	const QBrush& _ret = self->highlightedText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_link(const QPalette* self) {
	const QBrush& _ret = self->link();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_linkVisited(const QPalette* self) {
	const QBrush& _ret = self->linkVisited();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_placeholderText(const QPalette* self) {
	const QBrush& _ret = self->placeholderText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_accent(const QPalette* self) {
	const QBrush& _ret = self->accent();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

bool QPalette_operatorEqual(const QPalette* self, QPalette* p) {
	return (*self == *p);
}

bool QPalette_operatorNotEqual(const QPalette* self, QPalette* p) {
	return (*self != *p);
}

bool QPalette_isCopyOf(const QPalette* self, QPalette* p) {
	return self->isCopyOf(*p);
}

long long QPalette_cacheKey(const QPalette* self) {
	qint64 _ret = self->cacheKey();
	return static_cast<long long>(_ret);
}

QPalette* QPalette_resolve(const QPalette* self, QPalette* other) {
	return new QPalette(self->resolve(*other));
}

ResolveMask QPalette_resolveMask(const QPalette* self) {
	return self->resolveMask();
}

void QPalette_setResolveMask(QPalette* self, ResolveMask mask) {
	self->setResolveMask(mask);
}

void QPalette_delete(QPalette* self) {
	delete self;
}

