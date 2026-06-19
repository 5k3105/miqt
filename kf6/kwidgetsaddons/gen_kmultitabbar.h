#pragma once
#ifndef MIQT_KF6_KWIDGETSADDONS_GEN_KMULTITABBAR_H
#define MIQT_KF6_KWIDGETSADDONS_GEN_KMULTITABBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class KMultiTabBar;
class KMultiTabBarButton;
class KMultiTabBarTab;
class QAbstractButton;
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
class QFont;
class QHideEvent;
class QIcon;
class QInputMethodEvent;
class QKeyEvent;
class QMenu;
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
class QPushButton;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct KMultiTabBar KMultiTabBar;
typedef struct KMultiTabBarButton KMultiTabBarButton;
typedef struct KMultiTabBarTab KMultiTabBarTab;
typedef struct QAbstractButton QAbstractButton;
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
typedef struct QFont QFont;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMenu QMenu;
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
typedef struct QPushButton QPushButton;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

KMultiTabBar* KMultiTabBar_new(QWidget* parent);
KMultiTabBar* KMultiTabBar_new2();
KMultiTabBar* KMultiTabBar_new3(KMultiTabBarPosition pos);
KMultiTabBar* KMultiTabBar_new4(KMultiTabBarPosition pos, QWidget* parent);
void KMultiTabBar_virtbase(KMultiTabBar* src, QWidget** outptr_QWidget);
QMetaObject* KMultiTabBar_metaObject(const KMultiTabBar* self);
void* KMultiTabBar_metacast(KMultiTabBar* self, const char* param1);
struct miqt_string KMultiTabBar_tr(const char* s);
int KMultiTabBar_appendButton(KMultiTabBar* self, QIcon* icon);
void KMultiTabBar_removeButton(KMultiTabBar* self, int id);
int KMultiTabBar_appendTab(KMultiTabBar* self, QIcon* icon);
void KMultiTabBar_removeTab(KMultiTabBar* self, int id);
void KMultiTabBar_setTab(KMultiTabBar* self, int id, bool state);
bool KMultiTabBar_isTabRaised(const KMultiTabBar* self, int id);
KMultiTabBarButton* KMultiTabBar_button(const KMultiTabBar* self, int id);
KMultiTabBarTab* KMultiTabBar_tab(const KMultiTabBar* self, int id);
void KMultiTabBar_setPosition(KMultiTabBar* self, KMultiTabBarPosition pos);
KMultiTabBarPosition KMultiTabBar_position(const KMultiTabBar* self);
void KMultiTabBar_setStyle(KMultiTabBar* self, KMultiTabBarStyle style);
KMultiTabBarStyle KMultiTabBar_tabStyle(const KMultiTabBar* self);
void KMultiTabBar_fontChange(KMultiTabBar* self, QFont* param1);
void KMultiTabBar_paintEvent(KMultiTabBar* self, QPaintEvent* param1);
struct miqt_string KMultiTabBar_tr2(const char* s, const char* c);
struct miqt_string KMultiTabBar_tr3(const char* s, const char* c, int n);
int KMultiTabBar_appendButton2(KMultiTabBar* self, QIcon* icon, int id);
int KMultiTabBar_appendButton3(KMultiTabBar* self, QIcon* icon, int id, QMenu* popup);
int KMultiTabBar_appendButton4(KMultiTabBar* self, QIcon* icon, int id, QMenu* popup, struct miqt_string not_used_yet);
int KMultiTabBar_appendTab2(KMultiTabBar* self, QIcon* icon, int id);
int KMultiTabBar_appendTab3(KMultiTabBar* self, QIcon* icon, int id, struct miqt_string text);

bool KMultiTabBar_override_virtual_fontChange(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_fontChange(void* self, QFont* param1);
bool KMultiTabBar_override_virtual_paintEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool KMultiTabBar_override_virtual_devType(void* self, intptr_t slot);
int KMultiTabBar_virtualbase_devType(const void* self);
bool KMultiTabBar_override_virtual_setVisible(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_setVisible(void* self, bool visible);
bool KMultiTabBar_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* KMultiTabBar_virtualbase_sizeHint(const void* self);
bool KMultiTabBar_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* KMultiTabBar_virtualbase_minimumSizeHint(const void* self);
bool KMultiTabBar_override_virtual_heightForWidth(void* self, intptr_t slot);
int KMultiTabBar_virtualbase_heightForWidth(const void* self, int param1);
bool KMultiTabBar_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool KMultiTabBar_virtualbase_hasHeightForWidth(const void* self);
bool KMultiTabBar_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* KMultiTabBar_virtualbase_paintEngine(const void* self);
bool KMultiTabBar_override_virtual_event(void* self, intptr_t slot);
bool KMultiTabBar_virtualbase_event(void* self, QEvent* event);
bool KMultiTabBar_override_virtual_mousePressEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool KMultiTabBar_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool KMultiTabBar_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool KMultiTabBar_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool KMultiTabBar_override_virtual_wheelEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool KMultiTabBar_override_virtual_keyPressEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool KMultiTabBar_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool KMultiTabBar_override_virtual_focusInEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool KMultiTabBar_override_virtual_focusOutEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool KMultiTabBar_override_virtual_enterEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool KMultiTabBar_override_virtual_leaveEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_leaveEvent(void* self, QEvent* event);
bool KMultiTabBar_override_virtual_moveEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool KMultiTabBar_override_virtual_resizeEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool KMultiTabBar_override_virtual_closeEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool KMultiTabBar_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool KMultiTabBar_override_virtual_tabletEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool KMultiTabBar_override_virtual_actionEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_actionEvent(void* self, QActionEvent* event);
bool KMultiTabBar_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool KMultiTabBar_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool KMultiTabBar_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool KMultiTabBar_override_virtual_dropEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_dropEvent(void* self, QDropEvent* event);
bool KMultiTabBar_override_virtual_showEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_showEvent(void* self, QShowEvent* event);
bool KMultiTabBar_override_virtual_hideEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_hideEvent(void* self, QHideEvent* event);
bool KMultiTabBar_override_virtual_nativeEvent(void* self, intptr_t slot);
bool KMultiTabBar_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool KMultiTabBar_override_virtual_changeEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_changeEvent(void* self, QEvent* param1);
bool KMultiTabBar_override_virtual_metric(void* self, intptr_t slot);
int KMultiTabBar_virtualbase_metric(const void* self, PaintDeviceMetric param1);
bool KMultiTabBar_override_virtual_initPainter(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_initPainter(const void* self, QPainter* painter);
bool KMultiTabBar_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* KMultiTabBar_virtualbase_redirected(const void* self, QPoint* offset);
bool KMultiTabBar_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* KMultiTabBar_virtualbase_sharedPainter(const void* self);
bool KMultiTabBar_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool KMultiTabBar_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* KMultiTabBar_virtualbase_inputMethodQuery(const void* self, int param1);
bool KMultiTabBar_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool KMultiTabBar_virtualbase_focusNextPrevChild(void* self, bool next);
bool KMultiTabBar_override_virtual_eventFilter(void* self, intptr_t slot);
bool KMultiTabBar_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool KMultiTabBar_override_virtual_timerEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool KMultiTabBar_override_virtual_childEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_childEvent(void* self, QChildEvent* event);
bool KMultiTabBar_override_virtual_customEvent(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_customEvent(void* self, QEvent* event);
bool KMultiTabBar_override_virtual_connectNotify(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool KMultiTabBar_override_virtual_disconnectNotify(void* self, intptr_t slot);
void KMultiTabBar_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void KMultiTabBar_protectedbase_updateSeparator(bool* _dynamic_cast_ok, void* self);
void KMultiTabBar_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void KMultiTabBar_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void KMultiTabBar_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool KMultiTabBar_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool KMultiTabBar_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* KMultiTabBar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int KMultiTabBar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int KMultiTabBar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool KMultiTabBar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
double KMultiTabBar_protectedbase_getDecodedMetricF(bool* _dynamic_cast_ok, const void* self, PaintDeviceMetric metricA, PaintDeviceMetric metricB);

void KMultiTabBar_delete(KMultiTabBar* self);

void KMultiTabBarButton_virtbase(KMultiTabBarButton* src, QPushButton** outptr_QPushButton);
QMetaObject* KMultiTabBarButton_metaObject(const KMultiTabBarButton* self);
void* KMultiTabBarButton_metacast(KMultiTabBarButton* self, const char* param1);
struct miqt_string KMultiTabBarButton_tr(const char* s);
int KMultiTabBarButton_id(const KMultiTabBarButton* self);
void KMultiTabBarButton_setText(KMultiTabBarButton* self, struct miqt_string text);
void KMultiTabBarButton_clicked(KMultiTabBarButton* self, int id);
void KMultiTabBarButton_connect_clicked(KMultiTabBarButton* self, intptr_t slot);
void KMultiTabBarButton_slotClicked(KMultiTabBarButton* self);
void KMultiTabBarButton_hideEvent(KMultiTabBarButton* self, QHideEvent* param1);
void KMultiTabBarButton_showEvent(KMultiTabBarButton* self, QShowEvent* param1);
void KMultiTabBarButton_paintEvent(KMultiTabBarButton* self, QPaintEvent* param1);
struct miqt_string KMultiTabBarButton_tr2(const char* s, const char* c);
struct miqt_string KMultiTabBarButton_tr3(const char* s, const char* c, int n);

void KMultiTabBarButton_delete(KMultiTabBarButton* self);

void KMultiTabBarTab_virtbase(KMultiTabBarTab* src, KMultiTabBarButton** outptr_KMultiTabBarButton);
QMetaObject* KMultiTabBarTab_metaObject(const KMultiTabBarTab* self);
void* KMultiTabBarTab_metacast(KMultiTabBarTab* self, const char* param1);
struct miqt_string KMultiTabBarTab_tr(const char* s);
QSize* KMultiTabBarTab_sizeHint(const KMultiTabBarTab* self);
QSize* KMultiTabBarTab_minimumSizeHint(const KMultiTabBarTab* self);
void KMultiTabBarTab_setPosition(KMultiTabBarTab* self, int position);
void KMultiTabBarTab_setStyle(KMultiTabBarTab* self, int style);
void KMultiTabBarTab_setState(KMultiTabBarTab* self, bool state);
void KMultiTabBarTab_paintEvent(KMultiTabBarTab* self, QPaintEvent* param1);
struct miqt_string KMultiTabBarTab_tr2(const char* s, const char* c);
struct miqt_string KMultiTabBarTab_tr3(const char* s, const char* c, int n);

void KMultiTabBarTab_delete(KMultiTabBarTab* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
