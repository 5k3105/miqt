#pragma once
#ifndef MIQT_KF6_KWIDGETSADDONS_GEN_KACTIONMENU_H
#define MIQT_KF6_KWIDGETSADDONS_GEN_KACTIONMENU_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class KActionMenu;
class QAction;
class QChildEvent;
class QEvent;
class QIcon;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QWidget;
class QWidgetAction;
#else
typedef struct KActionMenu KActionMenu;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
typedef struct QWidgetAction QWidgetAction;
#endif

KActionMenu* KActionMenu_new(QObject* parent);
KActionMenu* KActionMenu_new2(struct miqt_string text, QObject* parent);
KActionMenu* KActionMenu_new3(QIcon* icon, struct miqt_string text, QObject* parent);
void KActionMenu_virtbase(KActionMenu* src, QWidgetAction** outptr_QWidgetAction);
QMetaObject* KActionMenu_metaObject(const KActionMenu* self);
void* KActionMenu_metacast(KActionMenu* self, const char* param1);
struct miqt_string KActionMenu_tr(const char* s);
void KActionMenu_addAction(KActionMenu* self, QAction* action);
QAction* KActionMenu_addSeparator(KActionMenu* self);
void KActionMenu_insertAction(KActionMenu* self, QAction* before, QAction* action);
QAction* KActionMenu_insertSeparator(KActionMenu* self, QAction* before);
void KActionMenu_removeAction(KActionMenu* self, QAction* action);
int KActionMenu_popupMode(const KActionMenu* self);
void KActionMenu_setPopupMode(KActionMenu* self, int popupMode);
QWidget* KActionMenu_createWidget(KActionMenu* self, QWidget* parent);
struct miqt_string KActionMenu_tr2(const char* s, const char* c);
struct miqt_string KActionMenu_tr3(const char* s, const char* c, int n);

bool KActionMenu_override_virtual_createWidget(void* self, intptr_t slot);
QWidget* KActionMenu_virtualbase_createWidget(void* self, QWidget* parent);
bool KActionMenu_override_virtual_event(void* self, intptr_t slot);
bool KActionMenu_virtualbase_event(void* self, QEvent* param1);
bool KActionMenu_override_virtual_eventFilter(void* self, intptr_t slot);
bool KActionMenu_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool KActionMenu_override_virtual_deleteWidget(void* self, intptr_t slot);
void KActionMenu_virtualbase_deleteWidget(void* self, QWidget* widget);
bool KActionMenu_override_virtual_timerEvent(void* self, intptr_t slot);
void KActionMenu_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool KActionMenu_override_virtual_childEvent(void* self, intptr_t slot);
void KActionMenu_virtualbase_childEvent(void* self, QChildEvent* event);
bool KActionMenu_override_virtual_customEvent(void* self, intptr_t slot);
void KActionMenu_virtualbase_customEvent(void* self, QEvent* event);
bool KActionMenu_override_virtual_connectNotify(void* self, intptr_t slot);
void KActionMenu_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool KActionMenu_override_virtual_disconnectNotify(void* self, intptr_t slot);
void KActionMenu_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

struct miqt_array /* of QWidget* */  KActionMenu_protectedbase_createdWidgets(bool* _dynamic_cast_ok, const void* self);
QObject* KActionMenu_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int KActionMenu_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int KActionMenu_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool KActionMenu_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void KActionMenu_delete(KActionMenu* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
