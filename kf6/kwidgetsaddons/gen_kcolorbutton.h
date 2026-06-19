#pragma once
#ifndef MIQT_KF6_KWIDGETSADDONS_GEN_KCOLORBUTTON_H
#define MIQT_KF6_KWIDGETSADDONS_GEN_KCOLORBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class KColorButton;
class QAbstractButton;
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QColor;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEnterEvent;
class QEvent;
class QFocusEvent;
class QHideEvent;
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
class QPushButton;
class QResizeEvent;
class QShowEvent;
class QSize;
class QStyleOptionButton;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct KColorButton KColorButton;
typedef struct QAbstractButton QAbstractButton;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QColor QColor;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
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
typedef struct QPushButton QPushButton;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionButton QStyleOptionButton;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

KColorButton* KColorButton_new(QWidget* parent);
KColorButton* KColorButton_new2();
KColorButton* KColorButton_new3(QColor* c);
KColorButton* KColorButton_new4(QColor* c, QColor* defaultColor);
KColorButton* KColorButton_new5(QColor* c, QWidget* parent);
KColorButton* KColorButton_new6(QColor* c, QColor* defaultColor, QWidget* parent);
void KColorButton_virtbase(KColorButton* src, QPushButton** outptr_QPushButton);
QMetaObject* KColorButton_metaObject(const KColorButton* self);
void* KColorButton_metacast(KColorButton* self, const char* param1);
struct miqt_string KColorButton_tr(const char* s);
QColor* KColorButton_color(const KColorButton* self);
void KColorButton_setColor(KColorButton* self, QColor* c);
void KColorButton_setAlphaChannelEnabled(KColorButton* self, bool alpha);
bool KColorButton_isAlphaChannelEnabled(const KColorButton* self);
QColor* KColorButton_defaultColor(const KColorButton* self);
void KColorButton_setDefaultColor(KColorButton* self, QColor* c);
QSize* KColorButton_sizeHint(const KColorButton* self);
QSize* KColorButton_minimumSizeHint(const KColorButton* self);
void KColorButton_changed(KColorButton* self, QColor* newColor);
void KColorButton_connect_changed(KColorButton* self, intptr_t slot);
void KColorButton_paintEvent(KColorButton* self, QPaintEvent* pe);
void KColorButton_dragEnterEvent(KColorButton* self, QDragEnterEvent* param1);
void KColorButton_dropEvent(KColorButton* self, QDropEvent* param1);
void KColorButton_mousePressEvent(KColorButton* self, QMouseEvent* e);
void KColorButton_mouseMoveEvent(KColorButton* self, QMouseEvent* e);
void KColorButton_keyPressEvent(KColorButton* self, QKeyEvent* e);
struct miqt_string KColorButton_tr2(const char* s, const char* c);
struct miqt_string KColorButton_tr3(const char* s, const char* c, int n);

bool KColorButton_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* KColorButton_virtualbase_sizeHint(const void* self);
bool KColorButton_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* KColorButton_virtualbase_minimumSizeHint(const void* self);
bool KColorButton_override_virtual_paintEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_paintEvent(void* self, QPaintEvent* pe);
bool KColorButton_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1);
bool KColorButton_override_virtual_dropEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_dropEvent(void* self, QDropEvent* param1);
bool KColorButton_override_virtual_mousePressEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_mousePressEvent(void* self, QMouseEvent* e);
bool KColorButton_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);
bool KColorButton_override_virtual_keyPressEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_keyPressEvent(void* self, QKeyEvent* e);
bool KColorButton_override_virtual_event(void* self, intptr_t slot);
bool KColorButton_virtualbase_event(void* self, QEvent* e);
bool KColorButton_override_virtual_focusInEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_focusInEvent(void* self, QFocusEvent* param1);
bool KColorButton_override_virtual_focusOutEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_focusOutEvent(void* self, QFocusEvent* param1);
bool KColorButton_override_virtual_initStyleOption(void* self, intptr_t slot);
void KColorButton_virtualbase_initStyleOption(const void* self, QStyleOptionButton* option);
bool KColorButton_override_virtual_hitButton(void* self, intptr_t slot);
bool KColorButton_virtualbase_hitButton(const void* self, QPoint* pos);
bool KColorButton_override_virtual_checkStateSet(void* self, intptr_t slot);
void KColorButton_virtualbase_checkStateSet(void* self);
bool KColorButton_override_virtual_nextCheckState(void* self, intptr_t slot);
void KColorButton_virtualbase_nextCheckState(void* self);
bool KColorButton_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e);
bool KColorButton_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);
bool KColorButton_override_virtual_changeEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_changeEvent(void* self, QEvent* e);
bool KColorButton_override_virtual_timerEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_timerEvent(void* self, QTimerEvent* e);
bool KColorButton_override_virtual_devType(void* self, intptr_t slot);
int KColorButton_virtualbase_devType(const void* self);
bool KColorButton_override_virtual_setVisible(void* self, intptr_t slot);
void KColorButton_virtualbase_setVisible(void* self, bool visible);
bool KColorButton_override_virtual_heightForWidth(void* self, intptr_t slot);
int KColorButton_virtualbase_heightForWidth(const void* self, int param1);
bool KColorButton_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool KColorButton_virtualbase_hasHeightForWidth(const void* self);
bool KColorButton_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* KColorButton_virtualbase_paintEngine(const void* self);
bool KColorButton_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool KColorButton_override_virtual_wheelEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool KColorButton_override_virtual_enterEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool KColorButton_override_virtual_leaveEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_leaveEvent(void* self, QEvent* event);
bool KColorButton_override_virtual_moveEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool KColorButton_override_virtual_resizeEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool KColorButton_override_virtual_closeEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool KColorButton_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool KColorButton_override_virtual_tabletEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool KColorButton_override_virtual_actionEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_actionEvent(void* self, QActionEvent* event);
bool KColorButton_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool KColorButton_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool KColorButton_override_virtual_showEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_showEvent(void* self, QShowEvent* event);
bool KColorButton_override_virtual_hideEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_hideEvent(void* self, QHideEvent* event);
bool KColorButton_override_virtual_nativeEvent(void* self, intptr_t slot);
bool KColorButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool KColorButton_override_virtual_metric(void* self, intptr_t slot);
int KColorButton_virtualbase_metric(const void* self, PaintDeviceMetric param1);
bool KColorButton_override_virtual_initPainter(void* self, intptr_t slot);
void KColorButton_virtualbase_initPainter(const void* self, QPainter* painter);
bool KColorButton_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* KColorButton_virtualbase_redirected(const void* self, QPoint* offset);
bool KColorButton_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* KColorButton_virtualbase_sharedPainter(const void* self);
bool KColorButton_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool KColorButton_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* KColorButton_virtualbase_inputMethodQuery(const void* self, int param1);
bool KColorButton_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool KColorButton_virtualbase_focusNextPrevChild(void* self, bool next);
bool KColorButton_override_virtual_eventFilter(void* self, intptr_t slot);
bool KColorButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool KColorButton_override_virtual_childEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_childEvent(void* self, QChildEvent* event);
bool KColorButton_override_virtual_customEvent(void* self, intptr_t slot);
void KColorButton_virtualbase_customEvent(void* self, QEvent* event);
bool KColorButton_override_virtual_connectNotify(void* self, intptr_t slot);
void KColorButton_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool KColorButton_override_virtual_disconnectNotify(void* self, intptr_t slot);
void KColorButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void KColorButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void KColorButton_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void KColorButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool KColorButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool KColorButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* KColorButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int KColorButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int KColorButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool KColorButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
double KColorButton_protectedbase_getDecodedMetricF(bool* _dynamic_cast_ok, const void* self, PaintDeviceMetric metricA, PaintDeviceMetric metricB);

void KColorButton_delete(KColorButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
