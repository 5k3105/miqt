#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kcolorbutton.h>
#include "gen_kcolorbutton.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_KColorButton_changed(intptr_t, QColor*);
QSize* miqt_exec_callback_KColorButton_sizeHint(const KColorButton*, intptr_t);
QSize* miqt_exec_callback_KColorButton_minimumSizeHint(const KColorButton*, intptr_t);
void miqt_exec_callback_KColorButton_paintEvent(KColorButton*, intptr_t, QPaintEvent*);
void miqt_exec_callback_KColorButton_dragEnterEvent(KColorButton*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_KColorButton_dropEvent(KColorButton*, intptr_t, QDropEvent*);
void miqt_exec_callback_KColorButton_mousePressEvent(KColorButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_KColorButton_mouseMoveEvent(KColorButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_KColorButton_keyPressEvent(KColorButton*, intptr_t, QKeyEvent*);
bool miqt_exec_callback_KColorButton_event(KColorButton*, intptr_t, QEvent*);
void miqt_exec_callback_KColorButton_focusInEvent(KColorButton*, intptr_t, QFocusEvent*);
void miqt_exec_callback_KColorButton_focusOutEvent(KColorButton*, intptr_t, QFocusEvent*);
void miqt_exec_callback_KColorButton_initStyleOption(const KColorButton*, intptr_t, QStyleOptionButton*);
bool miqt_exec_callback_KColorButton_hitButton(const KColorButton*, intptr_t, QPoint*);
void miqt_exec_callback_KColorButton_checkStateSet(KColorButton*, intptr_t);
void miqt_exec_callback_KColorButton_nextCheckState(KColorButton*, intptr_t);
void miqt_exec_callback_KColorButton_keyReleaseEvent(KColorButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_KColorButton_mouseReleaseEvent(KColorButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_KColorButton_changeEvent(KColorButton*, intptr_t, QEvent*);
void miqt_exec_callback_KColorButton_timerEvent(KColorButton*, intptr_t, QTimerEvent*);
int miqt_exec_callback_KColorButton_devType(const KColorButton*, intptr_t);
void miqt_exec_callback_KColorButton_setVisible(KColorButton*, intptr_t, bool);
int miqt_exec_callback_KColorButton_heightForWidth(const KColorButton*, intptr_t, int);
bool miqt_exec_callback_KColorButton_hasHeightForWidth(const KColorButton*, intptr_t);
QPaintEngine* miqt_exec_callback_KColorButton_paintEngine(const KColorButton*, intptr_t);
void miqt_exec_callback_KColorButton_mouseDoubleClickEvent(KColorButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_KColorButton_wheelEvent(KColorButton*, intptr_t, QWheelEvent*);
void miqt_exec_callback_KColorButton_enterEvent(KColorButton*, intptr_t, QEnterEvent*);
void miqt_exec_callback_KColorButton_leaveEvent(KColorButton*, intptr_t, QEvent*);
void miqt_exec_callback_KColorButton_moveEvent(KColorButton*, intptr_t, QMoveEvent*);
void miqt_exec_callback_KColorButton_resizeEvent(KColorButton*, intptr_t, QResizeEvent*);
void miqt_exec_callback_KColorButton_closeEvent(KColorButton*, intptr_t, QCloseEvent*);
void miqt_exec_callback_KColorButton_contextMenuEvent(KColorButton*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_KColorButton_tabletEvent(KColorButton*, intptr_t, QTabletEvent*);
void miqt_exec_callback_KColorButton_actionEvent(KColorButton*, intptr_t, QActionEvent*);
void miqt_exec_callback_KColorButton_dragMoveEvent(KColorButton*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_KColorButton_dragLeaveEvent(KColorButton*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_KColorButton_showEvent(KColorButton*, intptr_t, QShowEvent*);
void miqt_exec_callback_KColorButton_hideEvent(KColorButton*, intptr_t, QHideEvent*);
bool miqt_exec_callback_KColorButton_nativeEvent(KColorButton*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_KColorButton_metric(const KColorButton*, intptr_t, PaintDeviceMetric);
void miqt_exec_callback_KColorButton_initPainter(const KColorButton*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_KColorButton_redirected(const KColorButton*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_KColorButton_sharedPainter(const KColorButton*, intptr_t);
void miqt_exec_callback_KColorButton_inputMethodEvent(KColorButton*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_KColorButton_inputMethodQuery(const KColorButton*, intptr_t, int);
bool miqt_exec_callback_KColorButton_focusNextPrevChild(KColorButton*, intptr_t, bool);
bool miqt_exec_callback_KColorButton_eventFilter(KColorButton*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_KColorButton_childEvent(KColorButton*, intptr_t, QChildEvent*);
void miqt_exec_callback_KColorButton_customEvent(KColorButton*, intptr_t, QEvent*);
void miqt_exec_callback_KColorButton_connectNotify(KColorButton*, intptr_t, QMetaMethod*);
void miqt_exec_callback_KColorButton_disconnectNotify(KColorButton*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualKColorButton final : public KColorButton {
public:

	MiqtVirtualKColorButton(QWidget* parent): KColorButton(parent) {}
	MiqtVirtualKColorButton(): KColorButton() {}
	MiqtVirtualKColorButton(const QColor& c): KColorButton(c) {}
	MiqtVirtualKColorButton(const QColor& c, const QColor& defaultColor): KColorButton(c, defaultColor) {}
	MiqtVirtualKColorButton(const QColor& c, QWidget* parent): KColorButton(c, parent) {}
	MiqtVirtualKColorButton(const QColor& c, const QColor& defaultColor, QWidget* parent): KColorButton(c, defaultColor, parent) {}

	virtual ~MiqtVirtualKColorButton() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return KColorButton::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_KColorButton_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* KColorButton_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return KColorButton::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_KColorButton_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* KColorButton_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* pe) override {
		if (handle__paintEvent == 0) {
			KColorButton::paintEvent(pe);
			return;
		}

		QPaintEvent* sigval1 = pe;
		miqt_exec_callback_KColorButton_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void KColorButton_virtualbase_paintEvent(void* self, QPaintEvent* pe);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* param1) override {
		if (handle__dragEnterEvent == 0) {
			KColorButton::dragEnterEvent(param1);
			return;
		}

		QDragEnterEvent* sigval1 = param1;
		miqt_exec_callback_KColorButton_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void KColorButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* param1) override {
		if (handle__dropEvent == 0) {
			KColorButton::dropEvent(param1);
			return;
		}

		QDropEvent* sigval1 = param1;
		miqt_exec_callback_KColorButton_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void KColorButton_virtualbase_dropEvent(void* self, QDropEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__mousePressEvent == 0) {
			KColorButton::mousePressEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_KColorButton_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void KColorButton_virtualbase_mousePressEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__mouseMoveEvent == 0) {
			KColorButton::mouseMoveEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_KColorButton_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void KColorButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__keyPressEvent == 0) {
			KColorButton::keyPressEvent(e);
			return;
		}

		QKeyEvent* sigval1 = e;
		miqt_exec_callback_KColorButton_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void KColorButton_virtualbase_keyPressEvent(void* self, QKeyEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return KColorButton::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_KColorButton_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool KColorButton_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__focusInEvent == 0) {
			KColorButton::focusInEvent(param1);
			return;
		}

		QFocusEvent* sigval1 = param1;
		miqt_exec_callback_KColorButton_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void KColorButton_virtualbase_focusInEvent(void* self, QFocusEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__focusOutEvent == 0) {
			KColorButton::focusOutEvent(param1);
			return;
		}

		QFocusEvent* sigval1 = param1;
		miqt_exec_callback_KColorButton_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void KColorButton_virtualbase_focusOutEvent(void* self, QFocusEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionButton* option) const override {
		if (handle__initStyleOption == 0) {
			KColorButton::initStyleOption(option);
			return;
		}

		QStyleOptionButton* sigval1 = option;
		miqt_exec_callback_KColorButton_initStyleOption(this, handle__initStyleOption, sigval1);

	}

	friend void KColorButton_virtualbase_initStyleOption(const void* self, QStyleOptionButton* option);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (handle__hitButton == 0) {
			return KColorButton::hitButton(pos);
		}

		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);
		bool callback_return_value = miqt_exec_callback_KColorButton_hitButton(this, handle__hitButton, sigval1);
		return callback_return_value;
	}

	friend bool KColorButton_virtualbase_hitButton(const void* self, QPoint* pos);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__checkStateSet = 0;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (handle__checkStateSet == 0) {
			KColorButton::checkStateSet();
			return;
		}

		miqt_exec_callback_KColorButton_checkStateSet(this, handle__checkStateSet);

	}

	friend void KColorButton_virtualbase_checkStateSet(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nextCheckState = 0;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (handle__nextCheckState == 0) {
			KColorButton::nextCheckState();
			return;
		}

		miqt_exec_callback_KColorButton_nextCheckState(this, handle__nextCheckState);

	}

	friend void KColorButton_virtualbase_nextCheckState(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__keyReleaseEvent == 0) {
			KColorButton::keyReleaseEvent(e);
			return;
		}

		QKeyEvent* sigval1 = e;
		miqt_exec_callback_KColorButton_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void KColorButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__mouseReleaseEvent == 0) {
			KColorButton::mouseReleaseEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_KColorButton_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void KColorButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			KColorButton::changeEvent(e);
			return;
		}

		QEvent* sigval1 = e;
		miqt_exec_callback_KColorButton_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void KColorButton_virtualbase_changeEvent(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__timerEvent == 0) {
			KColorButton::timerEvent(e);
			return;
		}

		QTimerEvent* sigval1 = e;
		miqt_exec_callback_KColorButton_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void KColorButton_virtualbase_timerEvent(void* self, QTimerEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return KColorButton::devType();
		}

		int callback_return_value = miqt_exec_callback_KColorButton_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int KColorButton_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			KColorButton::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_KColorButton_setVisible(this, handle__setVisible, sigval1);

	}

	friend void KColorButton_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return KColorButton::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_KColorButton_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int KColorButton_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return KColorButton::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_KColorButton_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool KColorButton_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return KColorButton::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_KColorButton_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* KColorButton_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			KColorButton::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_KColorButton_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void KColorButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			KColorButton::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_KColorButton_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void KColorButton_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			KColorButton::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_KColorButton_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void KColorButton_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			KColorButton::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_KColorButton_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void KColorButton_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			KColorButton::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_KColorButton_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void KColorButton_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			KColorButton::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_KColorButton_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void KColorButton_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			KColorButton::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_KColorButton_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void KColorButton_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			KColorButton::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_KColorButton_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void KColorButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			KColorButton::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_KColorButton_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void KColorButton_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			KColorButton::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_KColorButton_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void KColorButton_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			KColorButton::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_KColorButton_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void KColorButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			KColorButton::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_KColorButton_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void KColorButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			KColorButton::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_KColorButton_showEvent(this, handle__showEvent, sigval1);

	}

	friend void KColorButton_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			KColorButton::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_KColorButton_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void KColorButton_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return KColorButton::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		qintptr* result_ret = result;
		intptr_t* sigval3 = (intptr_t*)(result_ret);
		bool callback_return_value = miqt_exec_callback_KColorButton_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool KColorButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return KColorButton::metric(param1);
		}

		PaintDeviceMetric sigval1 = param1;
		int callback_return_value = miqt_exec_callback_KColorButton_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int KColorButton_virtualbase_metric(const void* self, PaintDeviceMetric param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			KColorButton::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_KColorButton_initPainter(this, handle__initPainter, sigval1);

	}

	friend void KColorButton_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return KColorButton::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_KColorButton_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* KColorButton_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return KColorButton::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_KColorButton_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* KColorButton_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			KColorButton::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_KColorButton_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void KColorButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return KColorButton::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_KColorButton_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* KColorButton_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return KColorButton::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_KColorButton_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool KColorButton_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return KColorButton::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_KColorButton_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool KColorButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			KColorButton::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_KColorButton_childEvent(this, handle__childEvent, sigval1);

	}

	friend void KColorButton_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			KColorButton::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_KColorButton_customEvent(this, handle__customEvent, sigval1);

	}

	friend void KColorButton_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			KColorButton::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_KColorButton_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void KColorButton_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			KColorButton::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_KColorButton_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void KColorButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void KColorButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void KColorButton_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void KColorButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool KColorButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool KColorButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* KColorButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int KColorButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int KColorButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool KColorButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend double KColorButton_protectedbase_getDecodedMetricF(bool* _dynamic_cast_ok, const void* self, PaintDeviceMetric metricA, PaintDeviceMetric metricB);
};

KColorButton* KColorButton_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualKColorButton(parent);
}

KColorButton* KColorButton_new2() {
	return new (std::nothrow) MiqtVirtualKColorButton();
}

KColorButton* KColorButton_new3(QColor* c) {
	return new (std::nothrow) MiqtVirtualKColorButton(*c);
}

KColorButton* KColorButton_new4(QColor* c, QColor* defaultColor) {
	return new (std::nothrow) MiqtVirtualKColorButton(*c, *defaultColor);
}

KColorButton* KColorButton_new5(QColor* c, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualKColorButton(*c, parent);
}

KColorButton* KColorButton_new6(QColor* c, QColor* defaultColor, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualKColorButton(*c, *defaultColor, parent);
}

void KColorButton_virtbase(KColorButton* src, QPushButton** outptr_QPushButton) {
	*outptr_QPushButton = static_cast<QPushButton*>(src);
}

QMetaObject* KColorButton_metaObject(const KColorButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* KColorButton_metacast(KColorButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string KColorButton_tr(const char* s) {
	QString _ret = KColorButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QColor* KColorButton_color(const KColorButton* self) {
	return new QColor(self->color());
}

void KColorButton_setColor(KColorButton* self, QColor* c) {
	self->setColor(*c);
}

void KColorButton_setAlphaChannelEnabled(KColorButton* self, bool alpha) {
	self->setAlphaChannelEnabled(alpha);
}

bool KColorButton_isAlphaChannelEnabled(const KColorButton* self) {
	return self->isAlphaChannelEnabled();
}

QColor* KColorButton_defaultColor(const KColorButton* self) {
	return new QColor(self->defaultColor());
}

void KColorButton_setDefaultColor(KColorButton* self, QColor* c) {
	self->setDefaultColor(*c);
}

QSize* KColorButton_sizeHint(const KColorButton* self) {
	return new QSize(self->sizeHint());
}

QSize* KColorButton_minimumSizeHint(const KColorButton* self) {
	return new QSize(self->minimumSizeHint());
}

void KColorButton_changed(KColorButton* self, QColor* newColor) {
	self->changed(*newColor);
}

void KColorButton_connect_changed(KColorButton* self, intptr_t slot) {
	KColorButton::connect(self, static_cast<void (KColorButton::*)(const QColor&)>(&KColorButton::changed), self, [=](const QColor& newColor) {
		const QColor& newColor_ret = newColor;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&newColor_ret);
		miqt_exec_callback_KColorButton_changed(slot, sigval1);
	});
}

struct miqt_string KColorButton_tr2(const char* s, const char* c) {
	QString _ret = KColorButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string KColorButton_tr3(const char* s, const char* c, int n) {
	QString _ret = KColorButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool KColorButton_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* KColorButton_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualKColorButton*>(self)->KColorButton::sizeHint());
}

bool KColorButton_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* KColorButton_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualKColorButton*>(self)->KColorButton::minimumSizeHint());
}

bool KColorButton_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void KColorButton_virtualbase_paintEvent(void* self, QPaintEvent* pe) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::paintEvent(pe);
}

bool KColorButton_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void KColorButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::dragEnterEvent(param1);
}

bool KColorButton_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void KColorButton_virtualbase_dropEvent(void* self, QDropEvent* param1) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::dropEvent(param1);
}

bool KColorButton_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void KColorButton_virtualbase_mousePressEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::mousePressEvent(e);
}

bool KColorButton_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void KColorButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::mouseMoveEvent(e);
}

bool KColorButton_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void KColorButton_virtualbase_keyPressEvent(void* self, QKeyEvent* e) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::keyPressEvent(e);
}

bool KColorButton_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool KColorButton_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::event(e);
}

bool KColorButton_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void KColorButton_virtualbase_focusInEvent(void* self, QFocusEvent* param1) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::focusInEvent(param1);
}

bool KColorButton_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void KColorButton_virtualbase_focusOutEvent(void* self, QFocusEvent* param1) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::focusOutEvent(param1);
}

bool KColorButton_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initStyleOption = slot;
	return true;
}

void KColorButton_virtualbase_initStyleOption(const void* self, QStyleOptionButton* option) {
	static_cast<const MiqtVirtualKColorButton*>(self)->KColorButton::initStyleOption(option);
}

bool KColorButton_override_virtual_hitButton(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hitButton = slot;
	return true;
}

bool KColorButton_virtualbase_hitButton(const void* self, QPoint* pos) {
	return static_cast<const MiqtVirtualKColorButton*>(self)->KColorButton::hitButton(*pos);
}

bool KColorButton_override_virtual_checkStateSet(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__checkStateSet = slot;
	return true;
}

void KColorButton_virtualbase_checkStateSet(void* self) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::checkStateSet();
}

bool KColorButton_override_virtual_nextCheckState(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nextCheckState = slot;
	return true;
}

void KColorButton_virtualbase_nextCheckState(void* self) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::nextCheckState();
}

bool KColorButton_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void KColorButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::keyReleaseEvent(e);
}

bool KColorButton_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void KColorButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::mouseReleaseEvent(e);
}

bool KColorButton_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void KColorButton_virtualbase_changeEvent(void* self, QEvent* e) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::changeEvent(e);
}

bool KColorButton_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void KColorButton_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::timerEvent(e);
}

bool KColorButton_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int KColorButton_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualKColorButton*>(self)->KColorButton::devType();
}

bool KColorButton_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void KColorButton_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::setVisible(visible);
}

bool KColorButton_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int KColorButton_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualKColorButton*>(self)->KColorButton::heightForWidth(static_cast<int>(param1));
}

bool KColorButton_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool KColorButton_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualKColorButton*>(self)->KColorButton::hasHeightForWidth();
}

bool KColorButton_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* KColorButton_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualKColorButton*>(self)->KColorButton::paintEngine();
}

bool KColorButton_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void KColorButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::mouseDoubleClickEvent(event);
}

bool KColorButton_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void KColorButton_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::wheelEvent(event);
}

bool KColorButton_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void KColorButton_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::enterEvent(event);
}

bool KColorButton_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void KColorButton_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::leaveEvent(event);
}

bool KColorButton_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void KColorButton_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::moveEvent(event);
}

bool KColorButton_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void KColorButton_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::resizeEvent(event);
}

bool KColorButton_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void KColorButton_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::closeEvent(event);
}

bool KColorButton_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void KColorButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::contextMenuEvent(event);
}

bool KColorButton_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void KColorButton_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::tabletEvent(event);
}

bool KColorButton_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void KColorButton_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::actionEvent(event);
}

bool KColorButton_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void KColorButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::dragMoveEvent(event);
}

bool KColorButton_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void KColorButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::dragLeaveEvent(event);
}

bool KColorButton_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void KColorButton_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::showEvent(event);
}

bool KColorButton_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void KColorButton_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::hideEvent(event);
}

bool KColorButton_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool KColorButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool KColorButton_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int KColorButton_virtualbase_metric(const void* self, PaintDeviceMetric param1) {
	return static_cast<const MiqtVirtualKColorButton*>(self)->KColorButton::metric(param1);
}

bool KColorButton_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void KColorButton_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualKColorButton*>(self)->KColorButton::initPainter(painter);
}

bool KColorButton_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* KColorButton_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualKColorButton*>(self)->KColorButton::redirected(offset);
}

bool KColorButton_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* KColorButton_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualKColorButton*>(self)->KColorButton::sharedPainter();
}

bool KColorButton_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void KColorButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::inputMethodEvent(param1);
}

bool KColorButton_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* KColorButton_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualKColorButton*>(self)->KColorButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool KColorButton_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool KColorButton_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::focusNextPrevChild(next);
}

bool KColorButton_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool KColorButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::eventFilter(watched, event);
}

bool KColorButton_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void KColorButton_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::childEvent(event);
}

bool KColorButton_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void KColorButton_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::customEvent(event);
}

bool KColorButton_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void KColorButton_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::connectNotify(*signal);
}

bool KColorButton_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void KColorButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualKColorButton*>(self)->KColorButton::disconnectNotify(*signal);
}

void KColorButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void KColorButton_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void KColorButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool KColorButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool KColorButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* KColorButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int KColorButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int KColorButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool KColorButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

double KColorButton_protectedbase_getDecodedMetricF(bool* _dynamic_cast_ok, const void* self, PaintDeviceMetric metricA, PaintDeviceMetric metricB) {
	MiqtVirtualKColorButton* self_cast = dynamic_cast<MiqtVirtualKColorButton*>( (KColorButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->getDecodedMetricF(metricA, metricB);
}

void KColorButton_delete(KColorButton* self) {
	delete self;
}

