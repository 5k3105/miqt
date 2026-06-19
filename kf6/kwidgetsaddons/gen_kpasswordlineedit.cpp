#include <QAction>
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
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLineEdit>
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
#include <kpasswordlineedit.h>
#include "gen_kpasswordlineedit.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_KPasswordLineEdit_echoModeChanged(intptr_t, int);
void miqt_exec_callback_KPasswordLineEdit_passwordChanged(intptr_t, struct miqt_string);
int miqt_exec_callback_KPasswordLineEdit_devType(const KPasswordLineEdit*, intptr_t);
void miqt_exec_callback_KPasswordLineEdit_setVisible(KPasswordLineEdit*, intptr_t, bool);
QSize* miqt_exec_callback_KPasswordLineEdit_sizeHint(const KPasswordLineEdit*, intptr_t);
QSize* miqt_exec_callback_KPasswordLineEdit_minimumSizeHint(const KPasswordLineEdit*, intptr_t);
int miqt_exec_callback_KPasswordLineEdit_heightForWidth(const KPasswordLineEdit*, intptr_t, int);
bool miqt_exec_callback_KPasswordLineEdit_hasHeightForWidth(const KPasswordLineEdit*, intptr_t);
QPaintEngine* miqt_exec_callback_KPasswordLineEdit_paintEngine(const KPasswordLineEdit*, intptr_t);
bool miqt_exec_callback_KPasswordLineEdit_event(KPasswordLineEdit*, intptr_t, QEvent*);
void miqt_exec_callback_KPasswordLineEdit_mousePressEvent(KPasswordLineEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_KPasswordLineEdit_mouseReleaseEvent(KPasswordLineEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_KPasswordLineEdit_mouseDoubleClickEvent(KPasswordLineEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_KPasswordLineEdit_mouseMoveEvent(KPasswordLineEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_KPasswordLineEdit_wheelEvent(KPasswordLineEdit*, intptr_t, QWheelEvent*);
void miqt_exec_callback_KPasswordLineEdit_keyPressEvent(KPasswordLineEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_KPasswordLineEdit_keyReleaseEvent(KPasswordLineEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_KPasswordLineEdit_focusInEvent(KPasswordLineEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_KPasswordLineEdit_focusOutEvent(KPasswordLineEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_KPasswordLineEdit_enterEvent(KPasswordLineEdit*, intptr_t, QEnterEvent*);
void miqt_exec_callback_KPasswordLineEdit_leaveEvent(KPasswordLineEdit*, intptr_t, QEvent*);
void miqt_exec_callback_KPasswordLineEdit_paintEvent(KPasswordLineEdit*, intptr_t, QPaintEvent*);
void miqt_exec_callback_KPasswordLineEdit_moveEvent(KPasswordLineEdit*, intptr_t, QMoveEvent*);
void miqt_exec_callback_KPasswordLineEdit_resizeEvent(KPasswordLineEdit*, intptr_t, QResizeEvent*);
void miqt_exec_callback_KPasswordLineEdit_closeEvent(KPasswordLineEdit*, intptr_t, QCloseEvent*);
void miqt_exec_callback_KPasswordLineEdit_contextMenuEvent(KPasswordLineEdit*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_KPasswordLineEdit_tabletEvent(KPasswordLineEdit*, intptr_t, QTabletEvent*);
void miqt_exec_callback_KPasswordLineEdit_actionEvent(KPasswordLineEdit*, intptr_t, QActionEvent*);
void miqt_exec_callback_KPasswordLineEdit_dragEnterEvent(KPasswordLineEdit*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_KPasswordLineEdit_dragMoveEvent(KPasswordLineEdit*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_KPasswordLineEdit_dragLeaveEvent(KPasswordLineEdit*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_KPasswordLineEdit_dropEvent(KPasswordLineEdit*, intptr_t, QDropEvent*);
void miqt_exec_callback_KPasswordLineEdit_showEvent(KPasswordLineEdit*, intptr_t, QShowEvent*);
void miqt_exec_callback_KPasswordLineEdit_hideEvent(KPasswordLineEdit*, intptr_t, QHideEvent*);
bool miqt_exec_callback_KPasswordLineEdit_nativeEvent(KPasswordLineEdit*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_KPasswordLineEdit_changeEvent(KPasswordLineEdit*, intptr_t, QEvent*);
int miqt_exec_callback_KPasswordLineEdit_metric(const KPasswordLineEdit*, intptr_t, PaintDeviceMetric);
void miqt_exec_callback_KPasswordLineEdit_initPainter(const KPasswordLineEdit*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_KPasswordLineEdit_redirected(const KPasswordLineEdit*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_KPasswordLineEdit_sharedPainter(const KPasswordLineEdit*, intptr_t);
void miqt_exec_callback_KPasswordLineEdit_inputMethodEvent(KPasswordLineEdit*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_KPasswordLineEdit_inputMethodQuery(const KPasswordLineEdit*, intptr_t, int);
bool miqt_exec_callback_KPasswordLineEdit_focusNextPrevChild(KPasswordLineEdit*, intptr_t, bool);
bool miqt_exec_callback_KPasswordLineEdit_eventFilter(KPasswordLineEdit*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_KPasswordLineEdit_timerEvent(KPasswordLineEdit*, intptr_t, QTimerEvent*);
void miqt_exec_callback_KPasswordLineEdit_childEvent(KPasswordLineEdit*, intptr_t, QChildEvent*);
void miqt_exec_callback_KPasswordLineEdit_customEvent(KPasswordLineEdit*, intptr_t, QEvent*);
void miqt_exec_callback_KPasswordLineEdit_connectNotify(KPasswordLineEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_KPasswordLineEdit_disconnectNotify(KPasswordLineEdit*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualKPasswordLineEdit final : public KPasswordLineEdit {
public:

	MiqtVirtualKPasswordLineEdit(QWidget* parent): KPasswordLineEdit(parent) {}
	MiqtVirtualKPasswordLineEdit(): KPasswordLineEdit() {}

	virtual ~MiqtVirtualKPasswordLineEdit() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return KPasswordLineEdit::devType();
		}

		int callback_return_value = miqt_exec_callback_KPasswordLineEdit_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int KPasswordLineEdit_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			KPasswordLineEdit::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_KPasswordLineEdit_setVisible(this, handle__setVisible, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return KPasswordLineEdit::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_KPasswordLineEdit_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* KPasswordLineEdit_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return KPasswordLineEdit::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_KPasswordLineEdit_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* KPasswordLineEdit_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return KPasswordLineEdit::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_KPasswordLineEdit_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int KPasswordLineEdit_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return KPasswordLineEdit::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_KPasswordLineEdit_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool KPasswordLineEdit_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return KPasswordLineEdit::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_KPasswordLineEdit_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* KPasswordLineEdit_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return KPasswordLineEdit::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_KPasswordLineEdit_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool KPasswordLineEdit_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			KPasswordLineEdit::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			KPasswordLineEdit::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			KPasswordLineEdit::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			KPasswordLineEdit::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			KPasswordLineEdit::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			KPasswordLineEdit::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			KPasswordLineEdit::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			KPasswordLineEdit::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			KPasswordLineEdit::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			KPasswordLineEdit::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			KPasswordLineEdit::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			KPasswordLineEdit::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			KPasswordLineEdit::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			KPasswordLineEdit::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			KPasswordLineEdit::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			KPasswordLineEdit::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			KPasswordLineEdit::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			KPasswordLineEdit::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			KPasswordLineEdit::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			KPasswordLineEdit::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			KPasswordLineEdit::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			KPasswordLineEdit::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			KPasswordLineEdit::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_showEvent(this, handle__showEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			KPasswordLineEdit::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return KPasswordLineEdit::nativeEvent(eventType, message, result);
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
		bool callback_return_value = miqt_exec_callback_KPasswordLineEdit_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool KPasswordLineEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			KPasswordLineEdit::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_KPasswordLineEdit_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return KPasswordLineEdit::metric(param1);
		}

		PaintDeviceMetric sigval1 = param1;
		int callback_return_value = miqt_exec_callback_KPasswordLineEdit_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int KPasswordLineEdit_virtualbase_metric(const void* self, PaintDeviceMetric param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			KPasswordLineEdit::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_KPasswordLineEdit_initPainter(this, handle__initPainter, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return KPasswordLineEdit::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_KPasswordLineEdit_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* KPasswordLineEdit_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return KPasswordLineEdit::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_KPasswordLineEdit_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* KPasswordLineEdit_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			KPasswordLineEdit::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_KPasswordLineEdit_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return KPasswordLineEdit::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_KPasswordLineEdit_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* KPasswordLineEdit_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return KPasswordLineEdit::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_KPasswordLineEdit_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool KPasswordLineEdit_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return KPasswordLineEdit::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_KPasswordLineEdit_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool KPasswordLineEdit_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			KPasswordLineEdit::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			KPasswordLineEdit::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_childEvent(this, handle__childEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			KPasswordLineEdit::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_KPasswordLineEdit_customEvent(this, handle__customEvent, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			KPasswordLineEdit::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_KPasswordLineEdit_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			KPasswordLineEdit::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_KPasswordLineEdit_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void KPasswordLineEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void KPasswordLineEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void KPasswordLineEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void KPasswordLineEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool KPasswordLineEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool KPasswordLineEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* KPasswordLineEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int KPasswordLineEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int KPasswordLineEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool KPasswordLineEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend double KPasswordLineEdit_protectedbase_getDecodedMetricF(bool* _dynamic_cast_ok, const void* self, PaintDeviceMetric metricA, PaintDeviceMetric metricB);
};

KPasswordLineEdit* KPasswordLineEdit_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualKPasswordLineEdit(parent);
}

KPasswordLineEdit* KPasswordLineEdit_new2() {
	return new (std::nothrow) MiqtVirtualKPasswordLineEdit();
}

void KPasswordLineEdit_virtbase(KPasswordLineEdit* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* KPasswordLineEdit_metaObject(const KPasswordLineEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* KPasswordLineEdit_metacast(KPasswordLineEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string KPasswordLineEdit_tr(const char* s) {
	QString _ret = KPasswordLineEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void KPasswordLineEdit_setPassword(KPasswordLineEdit* self, struct miqt_string password) {
	QString password_QString = QString::fromUtf8(password.data, password.len);
	self->setPassword(password_QString);
}

struct miqt_string KPasswordLineEdit_password(const KPasswordLineEdit* self) {
	QString _ret = self->password();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void KPasswordLineEdit_clear(KPasswordLineEdit* self) {
	self->clear();
}

void KPasswordLineEdit_setClearButtonEnabled(KPasswordLineEdit* self, bool clear) {
	self->setClearButtonEnabled(clear);
}

bool KPasswordLineEdit_isClearButtonEnabled(const KPasswordLineEdit* self) {
	return self->isClearButtonEnabled();
}

void KPasswordLineEdit_setEchoMode(KPasswordLineEdit* self, int mode) {
	self->setEchoMode(static_cast<QLineEdit::EchoMode>(mode));
}

int KPasswordLineEdit_echoMode(const KPasswordLineEdit* self) {
	QLineEdit::EchoMode _ret = self->echoMode();
	return static_cast<int>(_ret);
}

void KPasswordLineEdit_setReadOnly(KPasswordLineEdit* self, bool readOnly) {
	self->setReadOnly(readOnly);
}

bool KPasswordLineEdit_isReadOnly(const KPasswordLineEdit* self) {
	return self->isReadOnly();
}

KPassword::RevealMode KPasswordLineEdit_revealPasswordMode(const KPasswordLineEdit* self) {
	return self->revealPasswordMode();
}

void KPasswordLineEdit_setRevealPasswordMode(KPasswordLineEdit* self, KPassword::RevealMode revealPasswordMode) {
	self->setRevealPasswordMode(revealPasswordMode);
}

void KPasswordLineEdit_setRevealPasswordAvailable(KPasswordLineEdit* self, bool reveal) {
	self->setRevealPasswordAvailable(reveal);
}

bool KPasswordLineEdit_isRevealPasswordAvailable(const KPasswordLineEdit* self) {
	return self->isRevealPasswordAvailable();
}

QAction* KPasswordLineEdit_toggleEchoModeAction(const KPasswordLineEdit* self) {
	return self->toggleEchoModeAction();
}

QLineEdit* KPasswordLineEdit_lineEdit(const KPasswordLineEdit* self) {
	return self->lineEdit();
}

void KPasswordLineEdit_echoModeChanged(KPasswordLineEdit* self, int echoMode) {
	self->echoModeChanged(static_cast<QLineEdit::EchoMode>(echoMode));
}

void KPasswordLineEdit_connect_echoModeChanged(KPasswordLineEdit* self, intptr_t slot) {
	KPasswordLineEdit::connect(self, static_cast<void (KPasswordLineEdit::*)(QLineEdit::EchoMode)>(&KPasswordLineEdit::echoModeChanged), self, [=](QLineEdit::EchoMode echoMode) {
		QLineEdit::EchoMode echoMode_ret = echoMode;
		int sigval1 = static_cast<int>(echoMode_ret);
		miqt_exec_callback_KPasswordLineEdit_echoModeChanged(slot, sigval1);
	});
}

void KPasswordLineEdit_passwordChanged(KPasswordLineEdit* self, struct miqt_string password) {
	QString password_QString = QString::fromUtf8(password.data, password.len);
	self->passwordChanged(password_QString);
}

void KPasswordLineEdit_connect_passwordChanged(KPasswordLineEdit* self, intptr_t slot) {
	KPasswordLineEdit::connect(self, static_cast<void (KPasswordLineEdit::*)(const QString&)>(&KPasswordLineEdit::passwordChanged), self, [=](const QString& password) {
		const QString password_ret = password;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray password_b = password_ret.toUtf8();
		struct miqt_string password_ms;
		password_ms.len = password_b.length();
		password_ms.data = static_cast<char*>(malloc(password_ms.len));
		memcpy(password_ms.data, password_b.data(), password_ms.len);
		struct miqt_string sigval1 = password_ms;
		miqt_exec_callback_KPasswordLineEdit_passwordChanged(slot, sigval1);
	});
}

struct miqt_string KPasswordLineEdit_tr2(const char* s, const char* c) {
	QString _ret = KPasswordLineEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string KPasswordLineEdit_tr3(const char* s, const char* c, int n) {
	QString _ret = KPasswordLineEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool KPasswordLineEdit_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int KPasswordLineEdit_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::devType();
}

bool KPasswordLineEdit_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::setVisible(visible);
}

bool KPasswordLineEdit_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* KPasswordLineEdit_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::sizeHint());
}

bool KPasswordLineEdit_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* KPasswordLineEdit_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::minimumSizeHint());
}

bool KPasswordLineEdit_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int KPasswordLineEdit_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::heightForWidth(static_cast<int>(param1));
}

bool KPasswordLineEdit_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool KPasswordLineEdit_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::hasHeightForWidth();
}

bool KPasswordLineEdit_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* KPasswordLineEdit_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::paintEngine();
}

bool KPasswordLineEdit_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool KPasswordLineEdit_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::event(event);
}

bool KPasswordLineEdit_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::mousePressEvent(event);
}

bool KPasswordLineEdit_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::mouseReleaseEvent(event);
}

bool KPasswordLineEdit_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::mouseDoubleClickEvent(event);
}

bool KPasswordLineEdit_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::mouseMoveEvent(event);
}

bool KPasswordLineEdit_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::wheelEvent(event);
}

bool KPasswordLineEdit_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::keyPressEvent(event);
}

bool KPasswordLineEdit_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::keyReleaseEvent(event);
}

bool KPasswordLineEdit_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::focusInEvent(event);
}

bool KPasswordLineEdit_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::focusOutEvent(event);
}

bool KPasswordLineEdit_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::enterEvent(event);
}

bool KPasswordLineEdit_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::leaveEvent(event);
}

bool KPasswordLineEdit_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::paintEvent(event);
}

bool KPasswordLineEdit_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::moveEvent(event);
}

bool KPasswordLineEdit_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::resizeEvent(event);
}

bool KPasswordLineEdit_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::closeEvent(event);
}

bool KPasswordLineEdit_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::contextMenuEvent(event);
}

bool KPasswordLineEdit_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::tabletEvent(event);
}

bool KPasswordLineEdit_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::actionEvent(event);
}

bool KPasswordLineEdit_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::dragEnterEvent(event);
}

bool KPasswordLineEdit_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::dragMoveEvent(event);
}

bool KPasswordLineEdit_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::dragLeaveEvent(event);
}

bool KPasswordLineEdit_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::dropEvent(event);
}

bool KPasswordLineEdit_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::showEvent(event);
}

bool KPasswordLineEdit_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::hideEvent(event);
}

bool KPasswordLineEdit_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool KPasswordLineEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool KPasswordLineEdit_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::changeEvent(param1);
}

bool KPasswordLineEdit_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int KPasswordLineEdit_virtualbase_metric(const void* self, PaintDeviceMetric param1) {
	return static_cast<const MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::metric(param1);
}

bool KPasswordLineEdit_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::initPainter(painter);
}

bool KPasswordLineEdit_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* KPasswordLineEdit_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::redirected(offset);
}

bool KPasswordLineEdit_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* KPasswordLineEdit_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::sharedPainter();
}

bool KPasswordLineEdit_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::inputMethodEvent(param1);
}

bool KPasswordLineEdit_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* KPasswordLineEdit_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool KPasswordLineEdit_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool KPasswordLineEdit_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::focusNextPrevChild(next);
}

bool KPasswordLineEdit_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool KPasswordLineEdit_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::eventFilter(watched, event);
}

bool KPasswordLineEdit_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::timerEvent(event);
}

bool KPasswordLineEdit_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::childEvent(event);
}

bool KPasswordLineEdit_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::customEvent(event);
}

bool KPasswordLineEdit_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::connectNotify(*signal);
}

bool KPasswordLineEdit_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void KPasswordLineEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualKPasswordLineEdit*>(self)->KPasswordLineEdit::disconnectNotify(*signal);
}

void KPasswordLineEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void KPasswordLineEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void KPasswordLineEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool KPasswordLineEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool KPasswordLineEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* KPasswordLineEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int KPasswordLineEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int KPasswordLineEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool KPasswordLineEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

double KPasswordLineEdit_protectedbase_getDecodedMetricF(bool* _dynamic_cast_ok, const void* self, PaintDeviceMetric metricA, PaintDeviceMetric metricB) {
	MiqtVirtualKPasswordLineEdit* self_cast = dynamic_cast<MiqtVirtualKPasswordLineEdit*>( (KPasswordLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->getDecodedMetricF(metricA, metricB);
}

void KPasswordLineEdit_delete(KPasswordLineEdit* self) {
	delete self;
}

