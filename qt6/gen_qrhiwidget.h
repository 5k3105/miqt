#pragma once
#ifndef MIQT_QT6_GEN_QRHIWIDGET_H
#define MIQT_QT6_GEN_QRHIWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
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
class QImage;
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
class QRhiWidget;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
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
typedef struct QImage QImage;
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
typedef struct QRhiWidget QRhiWidget;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QRhiWidget* QRhiWidget_new(QWidget* parent);
QRhiWidget* QRhiWidget_new2();
QRhiWidget* QRhiWidget_new3(QWidget* parent, int f);
void QRhiWidget_virtbase(QRhiWidget* src, QWidget** outptr_QWidget);
QMetaObject* QRhiWidget_metaObject(const QRhiWidget* self);
void* QRhiWidget_metacast(QRhiWidget* self, const char* param1);
struct miqt_string QRhiWidget_tr(const char* s);
Api QRhiWidget_api(const QRhiWidget* self);
void QRhiWidget_setApi(QRhiWidget* self, Api api);
bool QRhiWidget_isDebugLayerEnabled(const QRhiWidget* self);
void QRhiWidget_setDebugLayerEnabled(QRhiWidget* self, bool enable);
int QRhiWidget_sampleCount(const QRhiWidget* self);
void QRhiWidget_setSampleCount(QRhiWidget* self, int samples);
TextureFormat QRhiWidget_colorBufferFormat(const QRhiWidget* self);
void QRhiWidget_setColorBufferFormat(QRhiWidget* self, TextureFormat format);
QSize* QRhiWidget_fixedColorBufferSize(const QRhiWidget* self);
void QRhiWidget_setFixedColorBufferSize(QRhiWidget* self, QSize* pixelSize);
void QRhiWidget_setFixedColorBufferSize2(QRhiWidget* self, int w, int h);
bool QRhiWidget_isMirrorVerticallyEnabled(const QRhiWidget* self);
void QRhiWidget_setMirrorVertically(QRhiWidget* self, bool enabled);
QImage* QRhiWidget_grabFramebuffer(const QRhiWidget* self);
void QRhiWidget_initialize(QRhiWidget* self, QRhiCommandBuffer* cb);
void QRhiWidget_render(QRhiWidget* self, QRhiCommandBuffer* cb);
void QRhiWidget_releaseResources(QRhiWidget* self);
void QRhiWidget_resizeEvent(QRhiWidget* self, QResizeEvent* e);
void QRhiWidget_paintEvent(QRhiWidget* self, QPaintEvent* e);
bool QRhiWidget_event(QRhiWidget* self, QEvent* e);
void QRhiWidget_frameSubmitted(QRhiWidget* self);
void QRhiWidget_connect_frameSubmitted(QRhiWidget* self, intptr_t slot);
void QRhiWidget_renderFailed(QRhiWidget* self);
void QRhiWidget_connect_renderFailed(QRhiWidget* self, intptr_t slot);
void QRhiWidget_sampleCountChanged(QRhiWidget* self, int samples);
void QRhiWidget_connect_sampleCountChanged(QRhiWidget* self, intptr_t slot);
void QRhiWidget_colorBufferFormatChanged(QRhiWidget* self, TextureFormat format);
void QRhiWidget_connect_colorBufferFormatChanged(QRhiWidget* self, intptr_t slot);
void QRhiWidget_fixedColorBufferSizeChanged(QRhiWidget* self, QSize* pixelSize);
void QRhiWidget_connect_fixedColorBufferSizeChanged(QRhiWidget* self, intptr_t slot);
void QRhiWidget_mirrorVerticallyChanged(QRhiWidget* self, bool enabled);
void QRhiWidget_connect_mirrorVerticallyChanged(QRhiWidget* self, intptr_t slot);
struct miqt_string QRhiWidget_tr2(const char* s, const char* c);
struct miqt_string QRhiWidget_tr3(const char* s, const char* c, int n);

bool QRhiWidget_override_virtual_initialize(void* self, intptr_t slot);
void QRhiWidget_virtualbase_initialize(void* self, QRhiCommandBuffer* cb);
bool QRhiWidget_override_virtual_render(void* self, intptr_t slot);
void QRhiWidget_virtualbase_render(void* self, QRhiCommandBuffer* cb);
bool QRhiWidget_override_virtual_releaseResources(void* self, intptr_t slot);
void QRhiWidget_virtualbase_releaseResources(void* self);
bool QRhiWidget_override_virtual_resizeEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_resizeEvent(void* self, QResizeEvent* e);
bool QRhiWidget_override_virtual_paintEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_paintEvent(void* self, QPaintEvent* e);
bool QRhiWidget_override_virtual_event(void* self, intptr_t slot);
bool QRhiWidget_virtualbase_event(void* self, QEvent* e);
bool QRhiWidget_override_virtual_devType(void* self, intptr_t slot);
int QRhiWidget_virtualbase_devType(const void* self);
bool QRhiWidget_override_virtual_setVisible(void* self, intptr_t slot);
void QRhiWidget_virtualbase_setVisible(void* self, bool visible);
bool QRhiWidget_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QRhiWidget_virtualbase_sizeHint(const void* self);
bool QRhiWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QRhiWidget_virtualbase_minimumSizeHint(const void* self);
bool QRhiWidget_override_virtual_heightForWidth(void* self, intptr_t slot);
int QRhiWidget_virtualbase_heightForWidth(const void* self, int param1);
bool QRhiWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QRhiWidget_virtualbase_hasHeightForWidth(const void* self);
bool QRhiWidget_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QRhiWidget_virtualbase_paintEngine(const void* self);
bool QRhiWidget_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QRhiWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QRhiWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QRhiWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QRhiWidget_override_virtual_wheelEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QRhiWidget_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QRhiWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QRhiWidget_override_virtual_focusInEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QRhiWidget_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QRhiWidget_override_virtual_enterEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QRhiWidget_override_virtual_leaveEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_leaveEvent(void* self, QEvent* event);
bool QRhiWidget_override_virtual_moveEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QRhiWidget_override_virtual_closeEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QRhiWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QRhiWidget_override_virtual_tabletEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QRhiWidget_override_virtual_actionEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QRhiWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QRhiWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QRhiWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QRhiWidget_override_virtual_dropEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QRhiWidget_override_virtual_showEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_showEvent(void* self, QShowEvent* event);
bool QRhiWidget_override_virtual_hideEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QRhiWidget_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QRhiWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QRhiWidget_override_virtual_changeEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_changeEvent(void* self, QEvent* param1);
bool QRhiWidget_override_virtual_metric(void* self, intptr_t slot);
int QRhiWidget_virtualbase_metric(const void* self, PaintDeviceMetric param1);
bool QRhiWidget_override_virtual_initPainter(void* self, intptr_t slot);
void QRhiWidget_virtualbase_initPainter(const void* self, QPainter* painter);
bool QRhiWidget_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QRhiWidget_virtualbase_redirected(const void* self, QPoint* offset);
bool QRhiWidget_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QRhiWidget_virtualbase_sharedPainter(const void* self);
bool QRhiWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QRhiWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QRhiWidget_virtualbase_inputMethodQuery(const void* self, int param1);
bool QRhiWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QRhiWidget_virtualbase_focusNextPrevChild(void* self, bool next);
bool QRhiWidget_override_virtual_eventFilter(void* self, intptr_t slot);
bool QRhiWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QRhiWidget_override_virtual_timerEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QRhiWidget_override_virtual_childEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_childEvent(void* self, QChildEvent* event);
bool QRhiWidget_override_virtual_customEvent(void* self, intptr_t slot);
void QRhiWidget_virtualbase_customEvent(void* self, QEvent* event);
bool QRhiWidget_override_virtual_connectNotify(void* self, intptr_t slot);
void QRhiWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QRhiWidget_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QRhiWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

bool QRhiWidget_protectedbase_isAutoRenderTargetEnabled(bool* _dynamic_cast_ok, const void* self);
void QRhiWidget_protectedbase_setAutoRenderTarget(bool* _dynamic_cast_ok, void* self, bool enabled);
QRhiTexture* QRhiWidget_protectedbase_colorTexture(bool* _dynamic_cast_ok, const void* self);
QRhiRenderBuffer* QRhiWidget_protectedbase_msaaColorBuffer(bool* _dynamic_cast_ok, const void* self);
QRhiTexture* QRhiWidget_protectedbase_resolveTexture(bool* _dynamic_cast_ok, const void* self);
QRhiRenderBuffer* QRhiWidget_protectedbase_depthStencilBuffer(bool* _dynamic_cast_ok, const void* self);
QRhiRenderTarget* QRhiWidget_protectedbase_renderTarget(bool* _dynamic_cast_ok, const void* self);
void QRhiWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QRhiWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QRhiWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QRhiWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QRhiWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QRhiWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QRhiWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QRhiWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QRhiWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
double QRhiWidget_protectedbase_getDecodedMetricF(bool* _dynamic_cast_ok, const void* self, PaintDeviceMetric metricA, PaintDeviceMetric metricB);

void QRhiWidget_delete(QRhiWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
