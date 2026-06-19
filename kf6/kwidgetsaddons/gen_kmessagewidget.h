#pragma once
#ifndef MIQT_KF6_KWIDGETSADDONS_GEN_KMESSAGEWIDGET_H
#define MIQT_KF6_KWIDGETSADDONS_GEN_KMESSAGEWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class KMessageWidget;
class QAction;
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEnterEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QHideEvent;
class QIcon;
class QInputMethodEvent;
class QKeyEvent;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QResizeEvent;
class QShowEvent;
class QSize;
class QStyleOptionFrame;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct KMessageWidget KMessageWidget;
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

KMessageWidget* KMessageWidget_new(QWidget* parent);
KMessageWidget* KMessageWidget_new2();
KMessageWidget* KMessageWidget_new3(struct miqt_string text);
KMessageWidget* KMessageWidget_new4(struct miqt_string text, QWidget* parent);
void KMessageWidget_virtbase(KMessageWidget* src, QFrame** outptr_QFrame);
QMetaObject* KMessageWidget_metaObject(const KMessageWidget* self);
void* KMessageWidget_metacast(KMessageWidget* self, const char* param1);
struct miqt_string KMessageWidget_tr(const char* s);
Position KMessageWidget_position(const KMessageWidget* self);
struct miqt_string KMessageWidget_text(const KMessageWidget* self);
int KMessageWidget_textFormat(const KMessageWidget* self);
void KMessageWidget_setTextFormat(KMessageWidget* self, int textFormat);
bool KMessageWidget_wordWrap(const KMessageWidget* self);
bool KMessageWidget_isCloseButtonVisible(const KMessageWidget* self);
MessageType KMessageWidget_messageType(const KMessageWidget* self);
void KMessageWidget_addAction(KMessageWidget* self, QAction* action);
void KMessageWidget_removeAction(KMessageWidget* self, QAction* action);
void KMessageWidget_clearActions(KMessageWidget* self);
QSize* KMessageWidget_sizeHint(const KMessageWidget* self);
QSize* KMessageWidget_minimumSizeHint(const KMessageWidget* self);
int KMessageWidget_heightForWidth(const KMessageWidget* self, int width);
QIcon* KMessageWidget_icon(const KMessageWidget* self);
bool KMessageWidget_isHideAnimationRunning(const KMessageWidget* self);
bool KMessageWidget_isShowAnimationRunning(const KMessageWidget* self);
void KMessageWidget_setText(KMessageWidget* self, struct miqt_string text);
void KMessageWidget_setPosition(KMessageWidget* self, Position position);
void KMessageWidget_setWordWrap(KMessageWidget* self, bool wordWrap);
void KMessageWidget_setCloseButtonVisible(KMessageWidget* self, bool visible);
void KMessageWidget_setMessageType(KMessageWidget* self, int type);
void KMessageWidget_animatedShow(KMessageWidget* self);
void KMessageWidget_animatedHide(KMessageWidget* self);
void KMessageWidget_setIcon(KMessageWidget* self, QIcon* icon);
void KMessageWidget_linkActivated(KMessageWidget* self, struct miqt_string contents);
void KMessageWidget_connect_linkActivated(KMessageWidget* self, intptr_t slot);
void KMessageWidget_linkHovered(KMessageWidget* self, struct miqt_string contents);
void KMessageWidget_connect_linkHovered(KMessageWidget* self, intptr_t slot);
void KMessageWidget_hideAnimationFinished(KMessageWidget* self);
void KMessageWidget_connect_hideAnimationFinished(KMessageWidget* self, intptr_t slot);
void KMessageWidget_showAnimationFinished(KMessageWidget* self);
void KMessageWidget_connect_showAnimationFinished(KMessageWidget* self, intptr_t slot);
void KMessageWidget_paintEvent(KMessageWidget* self, QPaintEvent* event);
bool KMessageWidget_event(KMessageWidget* self, QEvent* event);
void KMessageWidget_resizeEvent(KMessageWidget* self, QResizeEvent* event);
struct miqt_string KMessageWidget_tr2(const char* s, const char* c);
struct miqt_string KMessageWidget_tr3(const char* s, const char* c, int n);

bool KMessageWidget_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* KMessageWidget_virtualbase_sizeHint(const void* self);
bool KMessageWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* KMessageWidget_virtualbase_minimumSizeHint(const void* self);
bool KMessageWidget_override_virtual_heightForWidth(void* self, intptr_t slot);
int KMessageWidget_virtualbase_heightForWidth(const void* self, int width);
bool KMessageWidget_override_virtual_paintEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool KMessageWidget_override_virtual_event(void* self, intptr_t slot);
bool KMessageWidget_virtualbase_event(void* self, QEvent* event);
bool KMessageWidget_override_virtual_resizeEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool KMessageWidget_override_virtual_changeEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_changeEvent(void* self, QEvent* param1);
bool KMessageWidget_override_virtual_initStyleOption(void* self, intptr_t slot);
void KMessageWidget_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);
bool KMessageWidget_override_virtual_devType(void* self, intptr_t slot);
int KMessageWidget_virtualbase_devType(const void* self);
bool KMessageWidget_override_virtual_setVisible(void* self, intptr_t slot);
void KMessageWidget_virtualbase_setVisible(void* self, bool visible);
bool KMessageWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool KMessageWidget_virtualbase_hasHeightForWidth(const void* self);
bool KMessageWidget_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* KMessageWidget_virtualbase_paintEngine(const void* self);
bool KMessageWidget_override_virtual_mousePressEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool KMessageWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool KMessageWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool KMessageWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool KMessageWidget_override_virtual_wheelEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool KMessageWidget_override_virtual_keyPressEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool KMessageWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool KMessageWidget_override_virtual_focusInEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool KMessageWidget_override_virtual_focusOutEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool KMessageWidget_override_virtual_enterEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool KMessageWidget_override_virtual_leaveEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_leaveEvent(void* self, QEvent* event);
bool KMessageWidget_override_virtual_moveEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool KMessageWidget_override_virtual_closeEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool KMessageWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool KMessageWidget_override_virtual_tabletEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool KMessageWidget_override_virtual_actionEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_actionEvent(void* self, QActionEvent* event);
bool KMessageWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool KMessageWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool KMessageWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool KMessageWidget_override_virtual_dropEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_dropEvent(void* self, QDropEvent* event);
bool KMessageWidget_override_virtual_showEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_showEvent(void* self, QShowEvent* event);
bool KMessageWidget_override_virtual_hideEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_hideEvent(void* self, QHideEvent* event);
bool KMessageWidget_override_virtual_nativeEvent(void* self, intptr_t slot);
bool KMessageWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool KMessageWidget_override_virtual_metric(void* self, intptr_t slot);
int KMessageWidget_virtualbase_metric(const void* self, PaintDeviceMetric param1);
bool KMessageWidget_override_virtual_initPainter(void* self, intptr_t slot);
void KMessageWidget_virtualbase_initPainter(const void* self, QPainter* painter);
bool KMessageWidget_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* KMessageWidget_virtualbase_redirected(const void* self, QPoint* offset);
bool KMessageWidget_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* KMessageWidget_virtualbase_sharedPainter(const void* self);
bool KMessageWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool KMessageWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* KMessageWidget_virtualbase_inputMethodQuery(const void* self, int param1);
bool KMessageWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool KMessageWidget_virtualbase_focusNextPrevChild(void* self, bool next);
bool KMessageWidget_override_virtual_eventFilter(void* self, intptr_t slot);
bool KMessageWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool KMessageWidget_override_virtual_timerEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool KMessageWidget_override_virtual_childEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_childEvent(void* self, QChildEvent* event);
bool KMessageWidget_override_virtual_customEvent(void* self, intptr_t slot);
void KMessageWidget_virtualbase_customEvent(void* self, QEvent* event);
bool KMessageWidget_override_virtual_connectNotify(void* self, intptr_t slot);
void KMessageWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool KMessageWidget_override_virtual_disconnectNotify(void* self, intptr_t slot);
void KMessageWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void KMessageWidget_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void KMessageWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void KMessageWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void KMessageWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool KMessageWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool KMessageWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* KMessageWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int KMessageWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int KMessageWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool KMessageWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
double KMessageWidget_protectedbase_getDecodedMetricF(bool* _dynamic_cast_ok, const void* self, PaintDeviceMetric metricA, PaintDeviceMetric metricB);

void KMessageWidget_delete(KMessageWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
