#include <QApplication>
#include <QChildEvent>
#include <QCommonStyle>
#include <QEvent>
#include <QFontMetrics>
#include <QIcon>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QProxyStyle>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleHintReturn>
#include <QStyleOption>
#include <QStyleOptionComplex>
#include <QTimerEvent>
#include <QWidget>
#include <qproxystyle.h>
#include "gen_qproxystyle.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QProxyStyle_drawPrimitive(const QProxyStyle*, intptr_t, PrimitiveElement, QStyleOption*, QPainter*, QWidget*);
void miqt_exec_callback_QProxyStyle_drawControl(const QProxyStyle*, intptr_t, ControlElement, QStyleOption*, QPainter*, QWidget*);
void miqt_exec_callback_QProxyStyle_drawComplexControl(const QProxyStyle*, intptr_t, ComplexControl, QStyleOptionComplex*, QPainter*, QWidget*);
void miqt_exec_callback_QProxyStyle_drawItemText(const QProxyStyle*, intptr_t, QPainter*, QRect*, int, QPalette*, bool, struct miqt_string, int);
void miqt_exec_callback_QProxyStyle_drawItemPixmap(const QProxyStyle*, intptr_t, QPainter*, QRect*, int, QPixmap*);
QSize* miqt_exec_callback_QProxyStyle_sizeFromContents(const QProxyStyle*, intptr_t, ContentsType, QStyleOption*, QSize*, QWidget*);
QRect* miqt_exec_callback_QProxyStyle_subElementRect(const QProxyStyle*, intptr_t, SubElement, QStyleOption*, QWidget*);
QRect* miqt_exec_callback_QProxyStyle_subControlRect(const QProxyStyle*, intptr_t, ComplexControl, QStyleOptionComplex*, SubControl, QWidget*);
QRect* miqt_exec_callback_QProxyStyle_itemTextRect(const QProxyStyle*, intptr_t, QFontMetrics*, QRect*, int, bool, struct miqt_string);
QRect* miqt_exec_callback_QProxyStyle_itemPixmapRect(const QProxyStyle*, intptr_t, QRect*, int, QPixmap*);
SubControl miqt_exec_callback_QProxyStyle_hitTestComplexControl(const QProxyStyle*, intptr_t, ComplexControl, QStyleOptionComplex*, QPoint*, QWidget*);
int miqt_exec_callback_QProxyStyle_styleHint(const QProxyStyle*, intptr_t, StyleHint, QStyleOption*, QWidget*, QStyleHintReturn*);
int miqt_exec_callback_QProxyStyle_pixelMetric(const QProxyStyle*, intptr_t, PixelMetric, QStyleOption*, QWidget*);
int miqt_exec_callback_QProxyStyle_layoutSpacing(const QProxyStyle*, intptr_t, int, int, int, QStyleOption*, QWidget*);
QIcon* miqt_exec_callback_QProxyStyle_standardIcon(const QProxyStyle*, intptr_t, StandardPixmap, QStyleOption*, QWidget*);
QPixmap* miqt_exec_callback_QProxyStyle_standardPixmap(const QProxyStyle*, intptr_t, StandardPixmap, QStyleOption*, QWidget*);
QPixmap* miqt_exec_callback_QProxyStyle_generatedIconPixmap(const QProxyStyle*, intptr_t, int, QPixmap*, QStyleOption*);
QPalette* miqt_exec_callback_QProxyStyle_standardPalette(const QProxyStyle*, intptr_t);
void miqt_exec_callback_QProxyStyle_polish(QProxyStyle*, intptr_t, QWidget*);
void miqt_exec_callback_QProxyStyle_polishWithPal(QProxyStyle*, intptr_t, QPalette*);
void miqt_exec_callback_QProxyStyle_polishWithApp(QProxyStyle*, intptr_t, QApplication*);
void miqt_exec_callback_QProxyStyle_unpolish(QProxyStyle*, intptr_t, QWidget*);
void miqt_exec_callback_QProxyStyle_unpolishWithApp(QProxyStyle*, intptr_t, QApplication*);
bool miqt_exec_callback_QProxyStyle_event(QProxyStyle*, intptr_t, QEvent*);
bool miqt_exec_callback_QProxyStyle_eventFilter(QProxyStyle*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QProxyStyle_timerEvent(QProxyStyle*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QProxyStyle_childEvent(QProxyStyle*, intptr_t, QChildEvent*);
void miqt_exec_callback_QProxyStyle_customEvent(QProxyStyle*, intptr_t, QEvent*);
void miqt_exec_callback_QProxyStyle_connectNotify(QProxyStyle*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QProxyStyle_disconnectNotify(QProxyStyle*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQProxyStyle final : public QProxyStyle {
public:

	MiqtVirtualQProxyStyle(): QProxyStyle() {}
	MiqtVirtualQProxyStyle(const QString& key): QProxyStyle(key) {}
	MiqtVirtualQProxyStyle(QStyle* style): QProxyStyle(style) {}

	virtual ~MiqtVirtualQProxyStyle() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPrimitive = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPrimitive(PrimitiveElement element, const QStyleOption* option, QPainter* painter, const QWidget* widget) const override {
		if (handle__drawPrimitive == 0) {
			QProxyStyle::drawPrimitive(element, option, painter, widget);
			return;
		}

		PrimitiveElement sigval1 = element;
		QStyleOption* sigval2 = (QStyleOption*) option;
		QPainter* sigval3 = painter;
		QWidget* sigval4 = (QWidget*) widget;
		miqt_exec_callback_QProxyStyle_drawPrimitive(this, handle__drawPrimitive, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QProxyStyle_virtualbase_drawPrimitive(const void* self, PrimitiveElement element, QStyleOption* option, QPainter* painter, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawControl = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawControl(ControlElement element, const QStyleOption* option, QPainter* painter, const QWidget* widget) const override {
		if (handle__drawControl == 0) {
			QProxyStyle::drawControl(element, option, painter, widget);
			return;
		}

		ControlElement sigval1 = element;
		QStyleOption* sigval2 = (QStyleOption*) option;
		QPainter* sigval3 = painter;
		QWidget* sigval4 = (QWidget*) widget;
		miqt_exec_callback_QProxyStyle_drawControl(this, handle__drawControl, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QProxyStyle_virtualbase_drawControl(const void* self, ControlElement element, QStyleOption* option, QPainter* painter, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawComplexControl = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawComplexControl(ComplexControl control, const QStyleOptionComplex* option, QPainter* painter, const QWidget* widget) const override {
		if (handle__drawComplexControl == 0) {
			QProxyStyle::drawComplexControl(control, option, painter, widget);
			return;
		}

		ComplexControl sigval1 = control;
		QStyleOptionComplex* sigval2 = (QStyleOptionComplex*) option;
		QPainter* sigval3 = painter;
		QWidget* sigval4 = (QWidget*) widget;
		miqt_exec_callback_QProxyStyle_drawComplexControl(this, handle__drawComplexControl, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QProxyStyle_virtualbase_drawComplexControl(const void* self, ComplexControl control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawItemText = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawItemText(QPainter* painter, const QRect& rect, int flags, const QPalette& pal, bool enabled, const QString& text, QPalette::ColorRole textRole) const override {
		if (handle__drawItemText == 0) {
			QProxyStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
			return;
		}

		QPainter* sigval1 = painter;
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&rect_ret);
		int sigval3 = flags;
		const QPalette& pal_ret = pal;
		// Cast returned reference into pointer
		QPalette* sigval4 = const_cast<QPalette*>(&pal_ret);
		bool sigval5 = enabled;
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval6 = text_ms;
		QPalette::ColorRole textRole_ret = textRole;
		int sigval7 = static_cast<int>(textRole_ret);
		miqt_exec_callback_QProxyStyle_drawItemText(this, handle__drawItemText, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7);

	}

	friend void QProxyStyle_virtualbase_drawItemText(const void* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawItemPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawItemPixmap(QPainter* painter, const QRect& rect, int alignment, const QPixmap& pixmap) const override {
		if (handle__drawItemPixmap == 0) {
			QProxyStyle::drawItemPixmap(painter, rect, alignment, pixmap);
			return;
		}

		QPainter* sigval1 = painter;
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&rect_ret);
		int sigval3 = alignment;
		const QPixmap& pixmap_ret = pixmap;
		// Cast returned reference into pointer
		QPixmap* sigval4 = const_cast<QPixmap*>(&pixmap_ret);
		miqt_exec_callback_QProxyStyle_drawItemPixmap(this, handle__drawItemPixmap, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QProxyStyle_virtualbase_drawItemPixmap(const void* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeFromContents = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeFromContents(ContentsType type, const QStyleOption* option, const QSize& size, const QWidget* widget) const override {
		if (handle__sizeFromContents == 0) {
			return QProxyStyle::sizeFromContents(type, option, size, widget);
		}

		ContentsType sigval1 = type;
		QStyleOption* sigval2 = (QStyleOption*) option;
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval3 = const_cast<QSize*>(&size_ret);
		QWidget* sigval4 = (QWidget*) widget;
		QSize* callback_return_value = miqt_exec_callback_QProxyStyle_sizeFromContents(this, handle__sizeFromContents, sigval1, sigval2, sigval3, sigval4);
		return *callback_return_value;
	}

	friend QSize* QProxyStyle_virtualbase_sizeFromContents(const void* self, ContentsType type, QStyleOption* option, QSize* size, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__subElementRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect subElementRect(SubElement element, const QStyleOption* option, const QWidget* widget) const override {
		if (handle__subElementRect == 0) {
			return QProxyStyle::subElementRect(element, option, widget);
		}

		SubElement sigval1 = element;
		QStyleOption* sigval2 = (QStyleOption*) option;
		QWidget* sigval3 = (QWidget*) widget;
		QRect* callback_return_value = miqt_exec_callback_QProxyStyle_subElementRect(this, handle__subElementRect, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QRect* QProxyStyle_virtualbase_subElementRect(const void* self, SubElement element, QStyleOption* option, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__subControlRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect subControlRect(ComplexControl cc, const QStyleOptionComplex* opt, SubControl sc, const QWidget* widget) const override {
		if (handle__subControlRect == 0) {
			return QProxyStyle::subControlRect(cc, opt, sc, widget);
		}

		ComplexControl sigval1 = cc;
		QStyleOptionComplex* sigval2 = (QStyleOptionComplex*) opt;
		SubControl sigval3 = sc;
		QWidget* sigval4 = (QWidget*) widget;
		QRect* callback_return_value = miqt_exec_callback_QProxyStyle_subControlRect(this, handle__subControlRect, sigval1, sigval2, sigval3, sigval4);
		return *callback_return_value;
	}

	friend QRect* QProxyStyle_virtualbase_subControlRect(const void* self, ComplexControl cc, QStyleOptionComplex* opt, SubControl sc, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemTextRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect itemTextRect(const QFontMetrics& fm, const QRect& r, int flags, bool enabled, const QString& text) const override {
		if (handle__itemTextRect == 0) {
			return QProxyStyle::itemTextRect(fm, r, flags, enabled, text);
		}

		const QFontMetrics& fm_ret = fm;
		// Cast returned reference into pointer
		QFontMetrics* sigval1 = const_cast<QFontMetrics*>(&fm_ret);
		const QRect& r_ret = r;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&r_ret);
		int sigval3 = flags;
		bool sigval4 = enabled;
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval5 = text_ms;
		QRect* callback_return_value = miqt_exec_callback_QProxyStyle_itemTextRect(this, handle__itemTextRect, sigval1, sigval2, sigval3, sigval4, sigval5);
		return *callback_return_value;
	}

	friend QRect* QProxyStyle_virtualbase_itemTextRect(const void* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemPixmapRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect itemPixmapRect(const QRect& r, int flags, const QPixmap& pixmap) const override {
		if (handle__itemPixmapRect == 0) {
			return QProxyStyle::itemPixmapRect(r, flags, pixmap);
		}

		const QRect& r_ret = r;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&r_ret);
		int sigval2 = flags;
		const QPixmap& pixmap_ret = pixmap;
		// Cast returned reference into pointer
		QPixmap* sigval3 = const_cast<QPixmap*>(&pixmap_ret);
		QRect* callback_return_value = miqt_exec_callback_QProxyStyle_itemPixmapRect(this, handle__itemPixmapRect, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QRect* QProxyStyle_virtualbase_itemPixmapRect(const void* self, QRect* r, int flags, QPixmap* pixmap);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hitTestComplexControl = 0;

	// Subclass to allow providing a Go implementation
	virtual SubControl hitTestComplexControl(ComplexControl control, const QStyleOptionComplex* option, const QPoint& pos, const QWidget* widget) const override {
		if (handle__hitTestComplexControl == 0) {
			return QProxyStyle::hitTestComplexControl(control, option, pos, widget);
		}

		ComplexControl sigval1 = control;
		QStyleOptionComplex* sigval2 = (QStyleOptionComplex*) option;
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval3 = const_cast<QPoint*>(&pos_ret);
		QWidget* sigval4 = (QWidget*) widget;
		SubControl callback_return_value = miqt_exec_callback_QProxyStyle_hitTestComplexControl(this, handle__hitTestComplexControl, sigval1, sigval2, sigval3, sigval4);
		return callback_return_value;
	}

	friend SubControl QProxyStyle_virtualbase_hitTestComplexControl(const void* self, ComplexControl control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__styleHint = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleHint(StyleHint hint, const QStyleOption* option, const QWidget* widget, QStyleHintReturn* returnData) const override {
		if (handle__styleHint == 0) {
			return QProxyStyle::styleHint(hint, option, widget, returnData);
		}

		StyleHint sigval1 = hint;
		QStyleOption* sigval2 = (QStyleOption*) option;
		QWidget* sigval3 = (QWidget*) widget;
		QStyleHintReturn* sigval4 = returnData;
		int callback_return_value = miqt_exec_callback_QProxyStyle_styleHint(this, handle__styleHint, sigval1, sigval2, sigval3, sigval4);
		return static_cast<int>(callback_return_value);
	}

	friend int QProxyStyle_virtualbase_styleHint(const void* self, StyleHint hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pixelMetric = 0;

	// Subclass to allow providing a Go implementation
	virtual int pixelMetric(PixelMetric metric, const QStyleOption* option, const QWidget* widget) const override {
		if (handle__pixelMetric == 0) {
			return QProxyStyle::pixelMetric(metric, option, widget);
		}

		PixelMetric sigval1 = metric;
		QStyleOption* sigval2 = (QStyleOption*) option;
		QWidget* sigval3 = (QWidget*) widget;
		int callback_return_value = miqt_exec_callback_QProxyStyle_pixelMetric(this, handle__pixelMetric, sigval1, sigval2, sigval3);
		return static_cast<int>(callback_return_value);
	}

	friend int QProxyStyle_virtualbase_pixelMetric(const void* self, PixelMetric metric, QStyleOption* option, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__layoutSpacing = 0;

	// Subclass to allow providing a Go implementation
	virtual int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption* option, const QWidget* widget) const override {
		if (handle__layoutSpacing == 0) {
			return QProxyStyle::layoutSpacing(control1, control2, orientation, option, widget);
		}

		QSizePolicy::ControlType control1_ret = control1;
		int sigval1 = static_cast<int>(control1_ret);
		QSizePolicy::ControlType control2_ret = control2;
		int sigval2 = static_cast<int>(control2_ret);
		Qt::Orientation orientation_ret = orientation;
		int sigval3 = static_cast<int>(orientation_ret);
		QStyleOption* sigval4 = (QStyleOption*) option;
		QWidget* sigval5 = (QWidget*) widget;
		int callback_return_value = miqt_exec_callback_QProxyStyle_layoutSpacing(this, handle__layoutSpacing, sigval1, sigval2, sigval3, sigval4, sigval5);
		return static_cast<int>(callback_return_value);
	}

	friend int QProxyStyle_virtualbase_layoutSpacing(const void* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__standardIcon = 0;

	// Subclass to allow providing a Go implementation
	virtual QIcon standardIcon(StandardPixmap standardIcon, const QStyleOption* option, const QWidget* widget) const override {
		if (handle__standardIcon == 0) {
			return QProxyStyle::standardIcon(standardIcon, option, widget);
		}

		StandardPixmap sigval1 = standardIcon;
		QStyleOption* sigval2 = (QStyleOption*) option;
		QWidget* sigval3 = (QWidget*) widget;
		QIcon* callback_return_value = miqt_exec_callback_QProxyStyle_standardIcon(this, handle__standardIcon, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QIcon* QProxyStyle_virtualbase_standardIcon(const void* self, StandardPixmap standardIcon, QStyleOption* option, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__standardPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual QPixmap standardPixmap(StandardPixmap standardPixmap, const QStyleOption* opt, const QWidget* widget) const override {
		if (handle__standardPixmap == 0) {
			return QProxyStyle::standardPixmap(standardPixmap, opt, widget);
		}

		StandardPixmap sigval1 = standardPixmap;
		QStyleOption* sigval2 = (QStyleOption*) opt;
		QWidget* sigval3 = (QWidget*) widget;
		QPixmap* callback_return_value = miqt_exec_callback_QProxyStyle_standardPixmap(this, handle__standardPixmap, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QPixmap* QProxyStyle_virtualbase_standardPixmap(const void* self, StandardPixmap standardPixmap, QStyleOption* opt, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__generatedIconPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap& pixmap, const QStyleOption* opt) const override {
		if (handle__generatedIconPixmap == 0) {
			return QProxyStyle::generatedIconPixmap(iconMode, pixmap, opt);
		}

		QIcon::Mode iconMode_ret = iconMode;
		int sigval1 = static_cast<int>(iconMode_ret);
		const QPixmap& pixmap_ret = pixmap;
		// Cast returned reference into pointer
		QPixmap* sigval2 = const_cast<QPixmap*>(&pixmap_ret);
		QStyleOption* sigval3 = (QStyleOption*) opt;
		QPixmap* callback_return_value = miqt_exec_callback_QProxyStyle_generatedIconPixmap(this, handle__generatedIconPixmap, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QPixmap* QProxyStyle_virtualbase_generatedIconPixmap(const void* self, int iconMode, QPixmap* pixmap, QStyleOption* opt);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__standardPalette = 0;

	// Subclass to allow providing a Go implementation
	virtual QPalette standardPalette() const override {
		if (handle__standardPalette == 0) {
			return QProxyStyle::standardPalette();
		}

		QPalette* callback_return_value = miqt_exec_callback_QProxyStyle_standardPalette(this, handle__standardPalette);
		return *callback_return_value;
	}

	friend QPalette* QProxyStyle_virtualbase_standardPalette(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__polish = 0;

	// Subclass to allow providing a Go implementation
	virtual void polish(QWidget* widget) override {
		if (handle__polish == 0) {
			QProxyStyle::polish(widget);
			return;
		}

		QWidget* sigval1 = widget;
		miqt_exec_callback_QProxyStyle_polish(this, handle__polish, sigval1);

	}

	friend void QProxyStyle_virtualbase_polish(void* self, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__polishWithPal = 0;

	// Subclass to allow providing a Go implementation
	virtual void polish(QPalette& pal) override {
		if (handle__polishWithPal == 0) {
			QProxyStyle::polish(pal);
			return;
		}

		QPalette& pal_ret = pal;
		// Cast returned reference into pointer
		QPalette* sigval1 = &pal_ret;
		miqt_exec_callback_QProxyStyle_polishWithPal(this, handle__polishWithPal, sigval1);

	}

	friend void QProxyStyle_virtualbase_polishWithPal(void* self, QPalette* pal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__polishWithApp = 0;

	// Subclass to allow providing a Go implementation
	virtual void polish(QApplication* app) override {
		if (handle__polishWithApp == 0) {
			QProxyStyle::polish(app);
			return;
		}

		QApplication* sigval1 = app;
		miqt_exec_callback_QProxyStyle_polishWithApp(this, handle__polishWithApp, sigval1);

	}

	friend void QProxyStyle_virtualbase_polishWithApp(void* self, QApplication* app);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__unpolish = 0;

	// Subclass to allow providing a Go implementation
	virtual void unpolish(QWidget* widget) override {
		if (handle__unpolish == 0) {
			QProxyStyle::unpolish(widget);
			return;
		}

		QWidget* sigval1 = widget;
		miqt_exec_callback_QProxyStyle_unpolish(this, handle__unpolish, sigval1);

	}

	friend void QProxyStyle_virtualbase_unpolish(void* self, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__unpolishWithApp = 0;

	// Subclass to allow providing a Go implementation
	virtual void unpolish(QApplication* app) override {
		if (handle__unpolishWithApp == 0) {
			QProxyStyle::unpolish(app);
			return;
		}

		QApplication* sigval1 = app;
		miqt_exec_callback_QProxyStyle_unpolishWithApp(this, handle__unpolishWithApp, sigval1);

	}

	friend void QProxyStyle_virtualbase_unpolishWithApp(void* self, QApplication* app);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QProxyStyle::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QProxyStyle_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QProxyStyle_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QProxyStyle::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QProxyStyle_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QProxyStyle_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QProxyStyle::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QProxyStyle_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QProxyStyle_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QProxyStyle::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QProxyStyle_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QProxyStyle_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QProxyStyle::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QProxyStyle_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QProxyStyle_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QProxyStyle::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QProxyStyle_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QProxyStyle_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QProxyStyle::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QProxyStyle_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QProxyStyle_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QProxyStyle_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QProxyStyle_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QProxyStyle_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QProxyStyle_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QProxyStyle* QProxyStyle_new() {
	return new (std::nothrow) MiqtVirtualQProxyStyle();
}

QProxyStyle* QProxyStyle_new2(struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new (std::nothrow) MiqtVirtualQProxyStyle(key_QString);
}

QProxyStyle* QProxyStyle_new3(QStyle* style) {
	return new (std::nothrow) MiqtVirtualQProxyStyle(style);
}

void QProxyStyle_virtbase(QProxyStyle* src, QCommonStyle** outptr_QCommonStyle) {
	*outptr_QCommonStyle = static_cast<QCommonStyle*>(src);
}

QMetaObject* QProxyStyle_metaObject(const QProxyStyle* self) {
	return (QMetaObject*) self->metaObject();
}

void* QProxyStyle_metacast(QProxyStyle* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QProxyStyle_tr(const char* s) {
	QString _ret = QProxyStyle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QStyle* QProxyStyle_baseStyle(const QProxyStyle* self) {
	return self->baseStyle();
}

void QProxyStyle_setBaseStyle(QProxyStyle* self, QStyle* style) {
	self->setBaseStyle(style);
}

void QProxyStyle_drawPrimitive(const QProxyStyle* self, PrimitiveElement element, QStyleOption* option, QPainter* painter, QWidget* widget) {
	self->drawPrimitive(element, option, painter, widget);
}

void QProxyStyle_drawControl(const QProxyStyle* self, ControlElement element, QStyleOption* option, QPainter* painter, QWidget* widget) {
	self->drawControl(element, option, painter, widget);
}

void QProxyStyle_drawComplexControl(const QProxyStyle* self, ComplexControl control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget) {
	self->drawComplexControl(control, option, painter, widget);
}

void QProxyStyle_drawItemText(const QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

void QProxyStyle_drawItemPixmap(const QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
	self->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

QSize* QProxyStyle_sizeFromContents(const QProxyStyle* self, ContentsType type, QStyleOption* option, QSize* size, QWidget* widget) {
	return new QSize(self->sizeFromContents(type, option, *size, widget));
}

QRect* QProxyStyle_subElementRect(const QProxyStyle* self, SubElement element, QStyleOption* option, QWidget* widget) {
	return new QRect(self->subElementRect(element, option, widget));
}

QRect* QProxyStyle_subControlRect(const QProxyStyle* self, ComplexControl cc, QStyleOptionComplex* opt, SubControl sc, QWidget* widget) {
	return new QRect(self->subControlRect(cc, opt, sc, widget));
}

QRect* QProxyStyle_itemTextRect(const QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
}

QRect* QProxyStyle_itemPixmapRect(const QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap) {
	return new QRect(self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
}

SubControl QProxyStyle_hitTestComplexControl(const QProxyStyle* self, ComplexControl control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget) {
	return self->hitTestComplexControl(control, option, *pos, widget);
}

int QProxyStyle_styleHint(const QProxyStyle* self, StyleHint hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData) {
	return self->styleHint(hint, option, widget, returnData);
}

int QProxyStyle_pixelMetric(const QProxyStyle* self, PixelMetric metric, QStyleOption* option, QWidget* widget) {
	return self->pixelMetric(metric, option, widget);
}

int QProxyStyle_layoutSpacing(const QProxyStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

QIcon* QProxyStyle_standardIcon(const QProxyStyle* self, StandardPixmap standardIcon, QStyleOption* option, QWidget* widget) {
	return new QIcon(self->standardIcon(standardIcon, option, widget));
}

QPixmap* QProxyStyle_standardPixmap(const QProxyStyle* self, StandardPixmap standardPixmap, QStyleOption* opt, QWidget* widget) {
	return new QPixmap(self->standardPixmap(standardPixmap, opt, widget));
}

QPixmap* QProxyStyle_generatedIconPixmap(const QProxyStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt) {
	return new QPixmap(self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
}

QPalette* QProxyStyle_standardPalette(const QProxyStyle* self) {
	return new QPalette(self->standardPalette());
}

void QProxyStyle_polish(QProxyStyle* self, QWidget* widget) {
	self->polish(widget);
}

void QProxyStyle_polishWithPal(QProxyStyle* self, QPalette* pal) {
	self->polish(*pal);
}

void QProxyStyle_polishWithApp(QProxyStyle* self, QApplication* app) {
	self->polish(app);
}

void QProxyStyle_unpolish(QProxyStyle* self, QWidget* widget) {
	self->unpolish(widget);
}

void QProxyStyle_unpolishWithApp(QProxyStyle* self, QApplication* app) {
	self->unpolish(app);
}

struct miqt_string QProxyStyle_tr2(const char* s, const char* c) {
	QString _ret = QProxyStyle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProxyStyle_tr3(const char* s, const char* c, int n) {
	QString _ret = QProxyStyle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QProxyStyle_override_virtual_drawPrimitive(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawPrimitive = slot;
	return true;
}

void QProxyStyle_virtualbase_drawPrimitive(const void* self, PrimitiveElement element, QStyleOption* option, QPainter* painter, QWidget* widget) {
	static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::drawPrimitive(element, option, painter, widget);
}

bool QProxyStyle_override_virtual_drawControl(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawControl = slot;
	return true;
}

void QProxyStyle_virtualbase_drawControl(const void* self, ControlElement element, QStyleOption* option, QPainter* painter, QWidget* widget) {
	static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::drawControl(element, option, painter, widget);
}

bool QProxyStyle_override_virtual_drawComplexControl(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawComplexControl = slot;
	return true;
}

void QProxyStyle_virtualbase_drawComplexControl(const void* self, ComplexControl control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget) {
	static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::drawComplexControl(control, option, painter, widget);
}

bool QProxyStyle_override_virtual_drawItemText(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawItemText = slot;
	return true;
}

void QProxyStyle_virtualbase_drawItemText(const void* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

bool QProxyStyle_override_virtual_drawItemPixmap(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawItemPixmap = slot;
	return true;
}

void QProxyStyle_virtualbase_drawItemPixmap(const void* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
	static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
}

bool QProxyStyle_override_virtual_sizeFromContents(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeFromContents = slot;
	return true;
}

QSize* QProxyStyle_virtualbase_sizeFromContents(const void* self, ContentsType type, QStyleOption* option, QSize* size, QWidget* widget) {
	return new QSize(static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::sizeFromContents(type, option, *size, widget));
}

bool QProxyStyle_override_virtual_subElementRect(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__subElementRect = slot;
	return true;
}

QRect* QProxyStyle_virtualbase_subElementRect(const void* self, SubElement element, QStyleOption* option, QWidget* widget) {
	return new QRect(static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::subElementRect(element, option, widget));
}

bool QProxyStyle_override_virtual_subControlRect(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__subControlRect = slot;
	return true;
}

QRect* QProxyStyle_virtualbase_subControlRect(const void* self, ComplexControl cc, QStyleOptionComplex* opt, SubControl sc, QWidget* widget) {
	return new QRect(static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::subControlRect(cc, opt, sc, widget));
}

bool QProxyStyle_override_virtual_itemTextRect(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemTextRect = slot;
	return true;
}

QRect* QProxyStyle_virtualbase_itemTextRect(const void* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
}

bool QProxyStyle_override_virtual_itemPixmapRect(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemPixmapRect = slot;
	return true;
}

QRect* QProxyStyle_virtualbase_itemPixmapRect(const void* self, QRect* r, int flags, QPixmap* pixmap) {
	return new QRect(static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
}

bool QProxyStyle_override_virtual_hitTestComplexControl(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hitTestComplexControl = slot;
	return true;
}

SubControl QProxyStyle_virtualbase_hitTestComplexControl(const void* self, ComplexControl control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget) {
	return static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::hitTestComplexControl(control, option, *pos, widget);
}

bool QProxyStyle_override_virtual_styleHint(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__styleHint = slot;
	return true;
}

int QProxyStyle_virtualbase_styleHint(const void* self, StyleHint hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData) {
	return static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::styleHint(hint, option, widget, returnData);
}

bool QProxyStyle_override_virtual_pixelMetric(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pixelMetric = slot;
	return true;
}

int QProxyStyle_virtualbase_pixelMetric(const void* self, PixelMetric metric, QStyleOption* option, QWidget* widget) {
	return static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::pixelMetric(metric, option, widget);
}

bool QProxyStyle_override_virtual_layoutSpacing(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__layoutSpacing = slot;
	return true;
}

int QProxyStyle_virtualbase_layoutSpacing(const void* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget) {
	return static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

bool QProxyStyle_override_virtual_standardIcon(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__standardIcon = slot;
	return true;
}

QIcon* QProxyStyle_virtualbase_standardIcon(const void* self, StandardPixmap standardIcon, QStyleOption* option, QWidget* widget) {
	return new QIcon(static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::standardIcon(standardIcon, option, widget));
}

bool QProxyStyle_override_virtual_standardPixmap(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__standardPixmap = slot;
	return true;
}

QPixmap* QProxyStyle_virtualbase_standardPixmap(const void* self, StandardPixmap standardPixmap, QStyleOption* opt, QWidget* widget) {
	return new QPixmap(static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::standardPixmap(standardPixmap, opt, widget));
}

bool QProxyStyle_override_virtual_generatedIconPixmap(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__generatedIconPixmap = slot;
	return true;
}

QPixmap* QProxyStyle_virtualbase_generatedIconPixmap(const void* self, int iconMode, QPixmap* pixmap, QStyleOption* opt) {
	return new QPixmap(static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
}

bool QProxyStyle_override_virtual_standardPalette(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__standardPalette = slot;
	return true;
}

QPalette* QProxyStyle_virtualbase_standardPalette(const void* self) {
	return new QPalette(static_cast<const MiqtVirtualQProxyStyle*>(self)->QProxyStyle::standardPalette());
}

bool QProxyStyle_override_virtual_polish(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__polish = slot;
	return true;
}

void QProxyStyle_virtualbase_polish(void* self, QWidget* widget) {
	static_cast<MiqtVirtualQProxyStyle*>(self)->QProxyStyle::polish(widget);
}

bool QProxyStyle_override_virtual_polishWithPal(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__polishWithPal = slot;
	return true;
}

void QProxyStyle_virtualbase_polishWithPal(void* self, QPalette* pal) {
	static_cast<MiqtVirtualQProxyStyle*>(self)->QProxyStyle::polish(*pal);
}

bool QProxyStyle_override_virtual_polishWithApp(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__polishWithApp = slot;
	return true;
}

void QProxyStyle_virtualbase_polishWithApp(void* self, QApplication* app) {
	static_cast<MiqtVirtualQProxyStyle*>(self)->QProxyStyle::polish(app);
}

bool QProxyStyle_override_virtual_unpolish(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__unpolish = slot;
	return true;
}

void QProxyStyle_virtualbase_unpolish(void* self, QWidget* widget) {
	static_cast<MiqtVirtualQProxyStyle*>(self)->QProxyStyle::unpolish(widget);
}

bool QProxyStyle_override_virtual_unpolishWithApp(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__unpolishWithApp = slot;
	return true;
}

void QProxyStyle_virtualbase_unpolishWithApp(void* self, QApplication* app) {
	static_cast<MiqtVirtualQProxyStyle*>(self)->QProxyStyle::unpolish(app);
}

bool QProxyStyle_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QProxyStyle_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQProxyStyle*>(self)->QProxyStyle::event(e);
}

bool QProxyStyle_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QProxyStyle_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQProxyStyle*>(self)->QProxyStyle::eventFilter(watched, event);
}

bool QProxyStyle_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QProxyStyle_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQProxyStyle*>(self)->QProxyStyle::timerEvent(event);
}

bool QProxyStyle_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QProxyStyle_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQProxyStyle*>(self)->QProxyStyle::childEvent(event);
}

bool QProxyStyle_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QProxyStyle_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQProxyStyle*>(self)->QProxyStyle::customEvent(event);
}

bool QProxyStyle_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QProxyStyle_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQProxyStyle*>(self)->QProxyStyle::connectNotify(*signal);
}

bool QProxyStyle_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QProxyStyle_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQProxyStyle*>(self)->QProxyStyle::disconnectNotify(*signal);
}

QObject* QProxyStyle_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QProxyStyle_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QProxyStyle_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QProxyStyle_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQProxyStyle* self_cast = dynamic_cast<MiqtVirtualQProxyStyle*>( (QProxyStyle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QProxyStyle_delete(QProxyStyle* self) {
	delete self;
}

