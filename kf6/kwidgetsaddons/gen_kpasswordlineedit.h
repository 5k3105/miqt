#pragma once
#ifndef MIQT_KF6_KWIDGETSADDONS_GEN_KPASSWORDLINEEDIT_H
#define MIQT_KF6_KWIDGETSADDONS_GEN_KPASSWORDLINEEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class KPasswordLineEdit;
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
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QLineEdit;
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
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct KPasswordLineEdit KPasswordLineEdit;
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
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QLineEdit QLineEdit;
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
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

KPasswordLineEdit* KPasswordLineEdit_new(QWidget* parent);
KPasswordLineEdit* KPasswordLineEdit_new2();
void KPasswordLineEdit_virtbase(KPasswordLineEdit* src, QWidget** outptr_QWidget);
QMetaObject* KPasswordLineEdit_metaObject(const KPasswordLineEdit* self);
void* KPasswordLineEdit_metacast(KPasswordLineEdit* self, const char* param1);
struct miqt_string KPasswordLineEdit_tr(const char* s);
void KPasswordLineEdit_setPassword(KPasswordLineEdit* self, struct miqt_string password);
struct miqt_string KPasswordLineEdit_password(const KPasswordLineEdit* self);
void KPasswordLineEdit_clear(KPasswordLineEdit* self);
void KPasswordLineEdit_setClearButtonEnabled(KPasswordLineEdit* self, bool clear);
bool KPasswordLineEdit_isClearButtonEnabled(const KPasswordLineEdit* self);
void KPasswordLineEdit_setEchoMode(KPasswordLineEdit* self, int mode);
int KPasswordLineEdit_echoMode(const KPasswordLineEdit* self);
void KPasswordLineEdit_setReadOnly(KPasswordLineEdit* self, bool readOnly);
bool KPasswordLineEdit_isReadOnly(const KPasswordLineEdit* self);
KPassword::RevealMode KPasswordLineEdit_revealPasswordMode(const KPasswordLineEdit* self);
void KPasswordLineEdit_setRevealPasswordMode(KPasswordLineEdit* self, KPassword::RevealMode revealPasswordMode);
void KPasswordLineEdit_setRevealPasswordAvailable(KPasswordLineEdit* self, bool reveal);
bool KPasswordLineEdit_isRevealPasswordAvailable(const KPasswordLineEdit* self);
QAction* KPasswordLineEdit_toggleEchoModeAction(const KPasswordLineEdit* self);
QLineEdit* KPasswordLineEdit_lineEdit(const KPasswordLineEdit* self);
void KPasswordLineEdit_echoModeChanged(KPasswordLineEdit* self, int echoMode);
void KPasswordLineEdit_connect_echoModeChanged(KPasswordLineEdit* self, intptr_t slot);
void KPasswordLineEdit_passwordChanged(KPasswordLineEdit* self, struct miqt_string password);
void KPasswordLineEdit_connect_passwordChanged(KPasswordLineEdit* self, intptr_t slot);
struct miqt_string KPasswordLineEdit_tr2(const char* s, const char* c);
struct miqt_string KPasswordLineEdit_tr3(const char* s, const char* c, int n);

bool KPasswordLineEdit_override_virtual_devType(void* self, intptr_t slot);
int KPasswordLineEdit_virtualbase_devType(const void* self);
bool KPasswordLineEdit_override_virtual_setVisible(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_setVisible(void* self, bool visible);
bool KPasswordLineEdit_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* KPasswordLineEdit_virtualbase_sizeHint(const void* self);
bool KPasswordLineEdit_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* KPasswordLineEdit_virtualbase_minimumSizeHint(const void* self);
bool KPasswordLineEdit_override_virtual_heightForWidth(void* self, intptr_t slot);
int KPasswordLineEdit_virtualbase_heightForWidth(const void* self, int param1);
bool KPasswordLineEdit_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool KPasswordLineEdit_virtualbase_hasHeightForWidth(const void* self);
bool KPasswordLineEdit_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* KPasswordLineEdit_virtualbase_paintEngine(const void* self);
bool KPasswordLineEdit_override_virtual_event(void* self, intptr_t slot);
bool KPasswordLineEdit_virtualbase_event(void* self, QEvent* event);
bool KPasswordLineEdit_override_virtual_mousePressEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool KPasswordLineEdit_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool KPasswordLineEdit_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool KPasswordLineEdit_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool KPasswordLineEdit_override_virtual_wheelEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool KPasswordLineEdit_override_virtual_keyPressEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool KPasswordLineEdit_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool KPasswordLineEdit_override_virtual_focusInEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool KPasswordLineEdit_override_virtual_focusOutEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool KPasswordLineEdit_override_virtual_enterEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool KPasswordLineEdit_override_virtual_leaveEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_leaveEvent(void* self, QEvent* event);
bool KPasswordLineEdit_override_virtual_paintEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool KPasswordLineEdit_override_virtual_moveEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool KPasswordLineEdit_override_virtual_resizeEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool KPasswordLineEdit_override_virtual_closeEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool KPasswordLineEdit_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool KPasswordLineEdit_override_virtual_tabletEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool KPasswordLineEdit_override_virtual_actionEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_actionEvent(void* self, QActionEvent* event);
bool KPasswordLineEdit_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool KPasswordLineEdit_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool KPasswordLineEdit_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool KPasswordLineEdit_override_virtual_dropEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_dropEvent(void* self, QDropEvent* event);
bool KPasswordLineEdit_override_virtual_showEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_showEvent(void* self, QShowEvent* event);
bool KPasswordLineEdit_override_virtual_hideEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_hideEvent(void* self, QHideEvent* event);
bool KPasswordLineEdit_override_virtual_nativeEvent(void* self, intptr_t slot);
bool KPasswordLineEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool KPasswordLineEdit_override_virtual_changeEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_changeEvent(void* self, QEvent* param1);
bool KPasswordLineEdit_override_virtual_metric(void* self, intptr_t slot);
int KPasswordLineEdit_virtualbase_metric(const void* self, PaintDeviceMetric param1);
bool KPasswordLineEdit_override_virtual_initPainter(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_initPainter(const void* self, QPainter* painter);
bool KPasswordLineEdit_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* KPasswordLineEdit_virtualbase_redirected(const void* self, QPoint* offset);
bool KPasswordLineEdit_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* KPasswordLineEdit_virtualbase_sharedPainter(const void* self);
bool KPasswordLineEdit_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool KPasswordLineEdit_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* KPasswordLineEdit_virtualbase_inputMethodQuery(const void* self, int param1);
bool KPasswordLineEdit_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool KPasswordLineEdit_virtualbase_focusNextPrevChild(void* self, bool next);
bool KPasswordLineEdit_override_virtual_eventFilter(void* self, intptr_t slot);
bool KPasswordLineEdit_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool KPasswordLineEdit_override_virtual_timerEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool KPasswordLineEdit_override_virtual_childEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_childEvent(void* self, QChildEvent* event);
bool KPasswordLineEdit_override_virtual_customEvent(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_customEvent(void* self, QEvent* event);
bool KPasswordLineEdit_override_virtual_connectNotify(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool KPasswordLineEdit_override_virtual_disconnectNotify(void* self, intptr_t slot);
void KPasswordLineEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void KPasswordLineEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void KPasswordLineEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void KPasswordLineEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool KPasswordLineEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool KPasswordLineEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* KPasswordLineEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int KPasswordLineEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int KPasswordLineEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool KPasswordLineEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
double KPasswordLineEdit_protectedbase_getDecodedMetricF(bool* _dynamic_cast_ok, const void* self, PaintDeviceMetric metricA, PaintDeviceMetric metricB);

void KPasswordLineEdit_delete(KPasswordLineEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
