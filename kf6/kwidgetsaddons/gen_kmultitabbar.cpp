#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMenu>
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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kmultitabbar.h>
#include "gen_kmultitabbar.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_KMultiTabBar_fontChange(KMultiTabBar*, intptr_t, QFont*);
void miqt_exec_callback_KMultiTabBar_paintEvent(KMultiTabBar*, intptr_t, QPaintEvent*);
int miqt_exec_callback_KMultiTabBar_devType(const KMultiTabBar*, intptr_t);
void miqt_exec_callback_KMultiTabBar_setVisible(KMultiTabBar*, intptr_t, bool);
QSize* miqt_exec_callback_KMultiTabBar_sizeHint(const KMultiTabBar*, intptr_t);
QSize* miqt_exec_callback_KMultiTabBar_minimumSizeHint(const KMultiTabBar*, intptr_t);
int miqt_exec_callback_KMultiTabBar_heightForWidth(const KMultiTabBar*, intptr_t, int);
bool miqt_exec_callback_KMultiTabBar_hasHeightForWidth(const KMultiTabBar*, intptr_t);
QPaintEngine* miqt_exec_callback_KMultiTabBar_paintEngine(const KMultiTabBar*, intptr_t);
bool miqt_exec_callback_KMultiTabBar_event(KMultiTabBar*, intptr_t, QEvent*);
void miqt_exec_callback_KMultiTabBar_mousePressEvent(KMultiTabBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_KMultiTabBar_mouseReleaseEvent(KMultiTabBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_KMultiTabBar_mouseDoubleClickEvent(KMultiTabBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_KMultiTabBar_mouseMoveEvent(KMultiTabBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_KMultiTabBar_wheelEvent(KMultiTabBar*, intptr_t, QWheelEvent*);
void miqt_exec_callback_KMultiTabBar_keyPressEvent(KMultiTabBar*, intptr_t, QKeyEvent*);
void miqt_exec_callback_KMultiTabBar_keyReleaseEvent(KMultiTabBar*, intptr_t, QKeyEvent*);
void miqt_exec_callback_KMultiTabBar_focusInEvent(KMultiTabBar*, intptr_t, QFocusEvent*);
void miqt_exec_callback_KMultiTabBar_focusOutEvent(KMultiTabBar*, intptr_t, QFocusEvent*);
void miqt_exec_callback_KMultiTabBar_enterEvent(KMultiTabBar*, intptr_t, QEnterEvent*);
void miqt_exec_callback_KMultiTabBar_leaveEvent(KMultiTabBar*, intptr_t, QEvent*);
void miqt_exec_callback_KMultiTabBar_moveEvent(KMultiTabBar*, intptr_t, QMoveEvent*);
void miqt_exec_callback_KMultiTabBar_resizeEvent(KMultiTabBar*, intptr_t, QResizeEvent*);
void miqt_exec_callback_KMultiTabBar_closeEvent(KMultiTabBar*, intptr_t, QCloseEvent*);
void miqt_exec_callback_KMultiTabBar_contextMenuEvent(KMultiTabBar*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_KMultiTabBar_tabletEvent(KMultiTabBar*, intptr_t, QTabletEvent*);
void miqt_exec_callback_KMultiTabBar_actionEvent(KMultiTabBar*, intptr_t, QActionEvent*);
void miqt_exec_callback_KMultiTabBar_dragEnterEvent(KMultiTabBar*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_KMultiTabBar_dragMoveEvent(KMultiTabBar*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_KMultiTabBar_dragLeaveEvent(KMultiTabBar*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_KMultiTabBar_dropEvent(KMultiTabBar*, intptr_t, QDropEvent*);
void miqt_exec_callback_KMultiTabBar_showEvent(KMultiTabBar*, intptr_t, QShowEvent*);
void miqt_exec_callback_KMultiTabBar_hideEvent(KMultiTabBar*, intptr_t, QHideEvent*);
bool miqt_exec_callback_KMultiTabBar_nativeEvent(KMultiTabBar*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_KMultiTabBar_changeEvent(KMultiTabBar*, intptr_t, QEvent*);
int miqt_exec_callback_KMultiTabBar_metric(const KMultiTabBar*, intptr_t, PaintDeviceMetric);
void miqt_exec_callback_KMultiTabBar_initPainter(const KMultiTabBar*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_KMultiTabBar_redirected(const KMultiTabBar*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_KMultiTabBar_sharedPainter(const KMultiTabBar*, intptr_t);
void miqt_exec_callback_KMultiTabBar_inputMethodEvent(KMultiTabBar*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_KMultiTabBar_inputMethodQuery(const KMultiTabBar*, intptr_t, int);
bool miqt_exec_callback_KMultiTabBar_focusNextPrevChild(KMultiTabBar*, intptr_t, bool);
bool miqt_exec_callback_KMultiTabBar_eventFilter(KMultiTabBar*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_KMultiTabBar_timerEvent(KMultiTabBar*, intptr_t, QTimerEvent*);
void miqt_exec_callback_KMultiTabBar_childEvent(KMultiTabBar*, intptr_t, QChildEvent*);
void miqt_exec_callback_KMultiTabBar_customEvent(KMultiTabBar*, intptr_t, QEvent*);
void miqt_exec_callback_KMultiTabBar_connectNotify(KMultiTabBar*, intptr_t, QMetaMethod*);
void miqt_exec_callback_KMultiTabBar_disconnectNotify(KMultiTabBar*, intptr_t, QMetaMethod*);
void miqt_exec_callback_KMultiTabBarButton_clicked(intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualKMultiTabBar final : public KMultiTabBar {
public:

	MiqtVirtualKMultiTabBar(QWidget* parent): KMultiTabBar(parent) {}
	MiqtVirtualKMultiTabBar(): KMultiTabBar() {}
	MiqtVirtualKMultiTabBar(KMultiTabBarPosition pos): KMultiTabBar(pos) {}
	MiqtVirtualKMultiTabBar(KMultiTabBarPosition pos, QWidget* parent): KMultiTabBar(pos, parent) {}

	virtual ~MiqtVirtualKMultiTabBar() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fontChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void fontChange(const QFont& param1) override {
		if (handle__fontChange == 0) {
			KMultiTabBar::fontChange(param1);
			return;
		}

		const QFont& param1_ret = param1;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&param1_ret);
		miqt_exec_callback_KMultiTabBar_fontChange(this, handle__fontChange, sigval1);

	}

	friend void KMultiTabBar_virtualbase_fontChange(void* self, QFont* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			KMultiTabBar::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_KMultiTabBar_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return KMultiTabBar::devType();
		}

		int callback_return_value = miqt_exec_callback_KMultiTabBar_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int KMultiTabBar_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			KMultiTabBar::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_KMultiTabBar_setVisible(this, handle__setVisible, sigval1);

	}

	friend void KMultiTabBar_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return KMultiTabBar::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_KMultiTabBar_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* KMultiTabBar_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return KMultiTabBar::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_KMultiTabBar_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* KMultiTabBar_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return KMultiTabBar::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_KMultiTabBar_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int KMultiTabBar_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return KMultiTabBar::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_KMultiTabBar_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool KMultiTabBar_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return KMultiTabBar::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_KMultiTabBar_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* KMultiTabBar_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return KMultiTabBar::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_KMultiTabBar_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool KMultiTabBar_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			KMultiTabBar::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			KMultiTabBar::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			KMultiTabBar::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			KMultiTabBar::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			KMultiTabBar::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			KMultiTabBar::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			KMultiTabBar::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			KMultiTabBar::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			KMultiTabBar::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			KMultiTabBar::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			KMultiTabBar::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			KMultiTabBar::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			KMultiTabBar::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			KMultiTabBar::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			KMultiTabBar::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			KMultiTabBar::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			KMultiTabBar::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			KMultiTabBar::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			KMultiTabBar::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			KMultiTabBar::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			KMultiTabBar::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			KMultiTabBar::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_showEvent(this, handle__showEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			KMultiTabBar::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return KMultiTabBar::nativeEvent(eventType, message, result);
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
		bool callback_return_value = miqt_exec_callback_KMultiTabBar_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool KMultiTabBar_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			KMultiTabBar::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_KMultiTabBar_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return KMultiTabBar::metric(param1);
		}

		PaintDeviceMetric sigval1 = param1;
		int callback_return_value = miqt_exec_callback_KMultiTabBar_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int KMultiTabBar_virtualbase_metric(const void* self, PaintDeviceMetric param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			KMultiTabBar::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_KMultiTabBar_initPainter(this, handle__initPainter, sigval1);

	}

	friend void KMultiTabBar_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return KMultiTabBar::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_KMultiTabBar_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* KMultiTabBar_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return KMultiTabBar::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_KMultiTabBar_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* KMultiTabBar_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			KMultiTabBar::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_KMultiTabBar_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return KMultiTabBar::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_KMultiTabBar_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* KMultiTabBar_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return KMultiTabBar::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_KMultiTabBar_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool KMultiTabBar_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return KMultiTabBar::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_KMultiTabBar_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool KMultiTabBar_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			KMultiTabBar::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			KMultiTabBar::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_childEvent(this, handle__childEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			KMultiTabBar::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_KMultiTabBar_customEvent(this, handle__customEvent, sigval1);

	}

	friend void KMultiTabBar_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			KMultiTabBar::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_KMultiTabBar_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void KMultiTabBar_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			KMultiTabBar::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_KMultiTabBar_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void KMultiTabBar_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void KMultiTabBar_protectedbase_updateSeparator(bool* _dynamic_cast_ok, void* self);
	friend void KMultiTabBar_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void KMultiTabBar_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void KMultiTabBar_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool KMultiTabBar_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool KMultiTabBar_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* KMultiTabBar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int KMultiTabBar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int KMultiTabBar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool KMultiTabBar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend double KMultiTabBar_protectedbase_getDecodedMetricF(bool* _dynamic_cast_ok, const void* self, PaintDeviceMetric metricA, PaintDeviceMetric metricB);
};

KMultiTabBar* KMultiTabBar_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualKMultiTabBar(parent);
}

KMultiTabBar* KMultiTabBar_new2() {
	return new (std::nothrow) MiqtVirtualKMultiTabBar();
}

KMultiTabBar* KMultiTabBar_new3(KMultiTabBarPosition pos) {
	return new (std::nothrow) MiqtVirtualKMultiTabBar(pos);
}

KMultiTabBar* KMultiTabBar_new4(KMultiTabBarPosition pos, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualKMultiTabBar(pos, parent);
}

void KMultiTabBar_virtbase(KMultiTabBar* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* KMultiTabBar_metaObject(const KMultiTabBar* self) {
	return (QMetaObject*) self->metaObject();
}

void* KMultiTabBar_metacast(KMultiTabBar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string KMultiTabBar_tr(const char* s) {
	QString _ret = KMultiTabBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int KMultiTabBar_appendButton(KMultiTabBar* self, QIcon* icon) {
	return self->appendButton(*icon);
}

void KMultiTabBar_removeButton(KMultiTabBar* self, int id) {
	self->removeButton(static_cast<int>(id));
}

int KMultiTabBar_appendTab(KMultiTabBar* self, QIcon* icon) {
	return self->appendTab(*icon);
}

void KMultiTabBar_removeTab(KMultiTabBar* self, int id) {
	self->removeTab(static_cast<int>(id));
}

void KMultiTabBar_setTab(KMultiTabBar* self, int id, bool state) {
	self->setTab(static_cast<int>(id), state);
}

bool KMultiTabBar_isTabRaised(const KMultiTabBar* self, int id) {
	return self->isTabRaised(static_cast<int>(id));
}

KMultiTabBarButton* KMultiTabBar_button(const KMultiTabBar* self, int id) {
	return self->button(static_cast<int>(id));
}

KMultiTabBarTab* KMultiTabBar_tab(const KMultiTabBar* self, int id) {
	return self->tab(static_cast<int>(id));
}

void KMultiTabBar_setPosition(KMultiTabBar* self, KMultiTabBarPosition pos) {
	self->setPosition(pos);
}

KMultiTabBarPosition KMultiTabBar_position(const KMultiTabBar* self) {
	return self->position();
}

void KMultiTabBar_setStyle(KMultiTabBar* self, KMultiTabBarStyle style) {
	self->setStyle(style);
}

KMultiTabBarStyle KMultiTabBar_tabStyle(const KMultiTabBar* self) {
	return self->tabStyle();
}

struct miqt_string KMultiTabBar_tr2(const char* s, const char* c) {
	QString _ret = KMultiTabBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string KMultiTabBar_tr3(const char* s, const char* c, int n) {
	QString _ret = KMultiTabBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int KMultiTabBar_appendButton2(KMultiTabBar* self, QIcon* icon, int id) {
	return self->appendButton(*icon, static_cast<int>(id));
}

int KMultiTabBar_appendButton3(KMultiTabBar* self, QIcon* icon, int id, QMenu* popup) {
	return self->appendButton(*icon, static_cast<int>(id), popup);
}

int KMultiTabBar_appendButton4(KMultiTabBar* self, QIcon* icon, int id, QMenu* popup, struct miqt_string not_used_yet) {
	QString not_used_yet_QString = QString::fromUtf8(not_used_yet.data, not_used_yet.len);
	return self->appendButton(*icon, static_cast<int>(id), popup, not_used_yet_QString);
}

int KMultiTabBar_appendTab2(KMultiTabBar* self, QIcon* icon, int id) {
	return self->appendTab(*icon, static_cast<int>(id));
}

int KMultiTabBar_appendTab3(KMultiTabBar* self, QIcon* icon, int id, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->appendTab(*icon, static_cast<int>(id), text_QString);
}

bool KMultiTabBar_override_virtual_fontChange(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fontChange = slot;
	return true;
}

void KMultiTabBar_virtualbase_fontChange(void* self, QFont* param1) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::fontChange(*param1);
}

bool KMultiTabBar_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::paintEvent(param1);
}

bool KMultiTabBar_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int KMultiTabBar_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::devType();
}

bool KMultiTabBar_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void KMultiTabBar_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::setVisible(visible);
}

bool KMultiTabBar_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* KMultiTabBar_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::sizeHint());
}

bool KMultiTabBar_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* KMultiTabBar_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::minimumSizeHint());
}

bool KMultiTabBar_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int KMultiTabBar_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::heightForWidth(static_cast<int>(param1));
}

bool KMultiTabBar_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool KMultiTabBar_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::hasHeightForWidth();
}

bool KMultiTabBar_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* KMultiTabBar_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::paintEngine();
}

bool KMultiTabBar_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool KMultiTabBar_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::event(event);
}

bool KMultiTabBar_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::mousePressEvent(event);
}

bool KMultiTabBar_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::mouseReleaseEvent(event);
}

bool KMultiTabBar_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::mouseDoubleClickEvent(event);
}

bool KMultiTabBar_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::mouseMoveEvent(event);
}

bool KMultiTabBar_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::wheelEvent(event);
}

bool KMultiTabBar_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::keyPressEvent(event);
}

bool KMultiTabBar_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::keyReleaseEvent(event);
}

bool KMultiTabBar_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::focusInEvent(event);
}

bool KMultiTabBar_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::focusOutEvent(event);
}

bool KMultiTabBar_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::enterEvent(event);
}

bool KMultiTabBar_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::leaveEvent(event);
}

bool KMultiTabBar_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::moveEvent(event);
}

bool KMultiTabBar_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::resizeEvent(event);
}

bool KMultiTabBar_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::closeEvent(event);
}

bool KMultiTabBar_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::contextMenuEvent(event);
}

bool KMultiTabBar_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::tabletEvent(event);
}

bool KMultiTabBar_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::actionEvent(event);
}

bool KMultiTabBar_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::dragEnterEvent(event);
}

bool KMultiTabBar_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::dragMoveEvent(event);
}

bool KMultiTabBar_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::dragLeaveEvent(event);
}

bool KMultiTabBar_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::dropEvent(event);
}

bool KMultiTabBar_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::showEvent(event);
}

bool KMultiTabBar_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::hideEvent(event);
}

bool KMultiTabBar_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool KMultiTabBar_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool KMultiTabBar_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::changeEvent(param1);
}

bool KMultiTabBar_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int KMultiTabBar_virtualbase_metric(const void* self, PaintDeviceMetric param1) {
	return static_cast<const MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::metric(param1);
}

bool KMultiTabBar_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void KMultiTabBar_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::initPainter(painter);
}

bool KMultiTabBar_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* KMultiTabBar_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::redirected(offset);
}

bool KMultiTabBar_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* KMultiTabBar_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::sharedPainter();
}

bool KMultiTabBar_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::inputMethodEvent(param1);
}

bool KMultiTabBar_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* KMultiTabBar_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool KMultiTabBar_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool KMultiTabBar_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::focusNextPrevChild(next);
}

bool KMultiTabBar_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool KMultiTabBar_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::eventFilter(watched, event);
}

bool KMultiTabBar_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::timerEvent(event);
}

bool KMultiTabBar_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::childEvent(event);
}

bool KMultiTabBar_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void KMultiTabBar_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::customEvent(event);
}

bool KMultiTabBar_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void KMultiTabBar_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::connectNotify(*signal);
}

bool KMultiTabBar_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void KMultiTabBar_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualKMultiTabBar*>(self)->KMultiTabBar::disconnectNotify(*signal);
}

void KMultiTabBar_protectedbase_updateSeparator(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateSeparator();
}

void KMultiTabBar_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void KMultiTabBar_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void KMultiTabBar_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool KMultiTabBar_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool KMultiTabBar_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* KMultiTabBar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int KMultiTabBar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int KMultiTabBar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool KMultiTabBar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

double KMultiTabBar_protectedbase_getDecodedMetricF(bool* _dynamic_cast_ok, const void* self, PaintDeviceMetric metricA, PaintDeviceMetric metricB) {
	MiqtVirtualKMultiTabBar* self_cast = dynamic_cast<MiqtVirtualKMultiTabBar*>( (KMultiTabBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->getDecodedMetricF(metricA, metricB);
}

void KMultiTabBar_delete(KMultiTabBar* self) {
	delete self;
}

void KMultiTabBarButton_virtbase(KMultiTabBarButton* src, QPushButton** outptr_QPushButton) {
	*outptr_QPushButton = static_cast<QPushButton*>(src);
}

QMetaObject* KMultiTabBarButton_metaObject(const KMultiTabBarButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* KMultiTabBarButton_metacast(KMultiTabBarButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string KMultiTabBarButton_tr(const char* s) {
	QString _ret = KMultiTabBarButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int KMultiTabBarButton_id(const KMultiTabBarButton* self) {
	return self->id();
}

void KMultiTabBarButton_setText(KMultiTabBarButton* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

void KMultiTabBarButton_clicked(KMultiTabBarButton* self, int id) {
	self->clicked(static_cast<int>(id));
}

void KMultiTabBarButton_connect_clicked(KMultiTabBarButton* self, intptr_t slot) {
	KMultiTabBarButton::connect(self, static_cast<void (KMultiTabBarButton::*)(int)>(&KMultiTabBarButton::clicked), self, [=](int id) {
		int sigval1 = id;
		miqt_exec_callback_KMultiTabBarButton_clicked(slot, sigval1);
	});
}

struct miqt_string KMultiTabBarButton_tr2(const char* s, const char* c) {
	QString _ret = KMultiTabBarButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string KMultiTabBarButton_tr3(const char* s, const char* c, int n) {
	QString _ret = KMultiTabBarButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void KMultiTabBarButton_delete(KMultiTabBarButton* self) {
	delete self;
}

void KMultiTabBarTab_virtbase(KMultiTabBarTab* src, KMultiTabBarButton** outptr_KMultiTabBarButton) {
	*outptr_KMultiTabBarButton = static_cast<KMultiTabBarButton*>(src);
}

QMetaObject* KMultiTabBarTab_metaObject(const KMultiTabBarTab* self) {
	return (QMetaObject*) self->metaObject();
}

void* KMultiTabBarTab_metacast(KMultiTabBarTab* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string KMultiTabBarTab_tr(const char* s) {
	QString _ret = KMultiTabBarTab::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* KMultiTabBarTab_sizeHint(const KMultiTabBarTab* self) {
	return new QSize(self->sizeHint());
}

QSize* KMultiTabBarTab_minimumSizeHint(const KMultiTabBarTab* self) {
	return new QSize(self->minimumSizeHint());
}

void KMultiTabBarTab_setPosition(KMultiTabBarTab* self, int position) {
	self->setPosition(static_cast<KMultiTabBar::KMultiTabBarPosition>(position));
}

void KMultiTabBarTab_setStyle(KMultiTabBarTab* self, int style) {
	self->setStyle(static_cast<KMultiTabBar::KMultiTabBarStyle>(style));
}

void KMultiTabBarTab_setState(KMultiTabBarTab* self, bool state) {
	self->setState(state);
}

struct miqt_string KMultiTabBarTab_tr2(const char* s, const char* c) {
	QString _ret = KMultiTabBarTab::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string KMultiTabBarTab_tr3(const char* s, const char* c, int n) {
	QString _ret = KMultiTabBarTab::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void KMultiTabBarTab_delete(KMultiTabBarTab* self) {
	delete self;
}

