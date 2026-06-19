#pragma once
#ifndef MIQT_QT6_GEN_QACCESSIBLEWIDGET_H
#define MIQT_QT6_GEN_QACCESSIBLEWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State)
typedef QAccessible::State QAccessible__State;
#else
class QAccessible__State;
#endif
class QAccessibleActionInterface;
class QAccessibleAttributesInterface;
class QAccessibleInterface;
class QAccessibleObject;
class QAccessibleWidget;
class QAccessibleWidgetV2;
class QColor;
class QObject;
class QRect;
class QVariant;
class QWidget;
class QWindow;
#else
typedef struct QAccessible__State QAccessible__State;
typedef struct QAccessibleActionInterface QAccessibleActionInterface;
typedef struct QAccessibleAttributesInterface QAccessibleAttributesInterface;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QAccessibleObject QAccessibleObject;
typedef struct QAccessibleWidget QAccessibleWidget;
typedef struct QAccessibleWidgetV2 QAccessibleWidgetV2;
typedef struct QColor QColor;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

QAccessibleWidget* QAccessibleWidget_new(QWidget* o);
QAccessibleWidget* QAccessibleWidget_new2(QWidget* o, int r, struct miqt_string name);
QAccessibleWidget* QAccessibleWidget_new3(QWidget* o, int r);
void QAccessibleWidget_virtbase(QAccessibleWidget* src, QAccessibleObject** outptr_QAccessibleObject, QAccessibleActionInterface** outptr_QAccessibleActionInterface);
bool QAccessibleWidget_isValid(const QAccessibleWidget* self);
QWindow* QAccessibleWidget_window(const QAccessibleWidget* self);
int QAccessibleWidget_childCount(const QAccessibleWidget* self);
int QAccessibleWidget_indexOfChild(const QAccessibleWidget* self, QAccessibleInterface* child);
QAccessibleInterface* QAccessibleWidget_focusChild(const QAccessibleWidget* self);
QRect* QAccessibleWidget_rect(const QAccessibleWidget* self);
QAccessibleInterface* QAccessibleWidget_parent(const QAccessibleWidget* self);
QAccessibleInterface* QAccessibleWidget_child(const QAccessibleWidget* self, int index);
struct miqt_string QAccessibleWidget_text(const QAccessibleWidget* self, int t);
int QAccessibleWidget_role(const QAccessibleWidget* self);
QAccessible__State* QAccessibleWidget_state(const QAccessibleWidget* self);
QColor* QAccessibleWidget_foregroundColor(const QAccessibleWidget* self);
QColor* QAccessibleWidget_backgroundColor(const QAccessibleWidget* self);
void* QAccessibleWidget_interfaceCast(QAccessibleWidget* self, int t);
struct miqt_array /* of struct miqt_string */  QAccessibleWidget_actionNames(const QAccessibleWidget* self);
void QAccessibleWidget_doAction(QAccessibleWidget* self, struct miqt_string actionName);
struct miqt_array /* of struct miqt_string */  QAccessibleWidget_keyBindingsForAction(const QAccessibleWidget* self, struct miqt_string actionName);


QAccessibleWidgetV2* QAccessibleWidgetV2_new(QWidget* object);
QAccessibleWidgetV2* QAccessibleWidgetV2_new2(QWidget* object, int role, struct miqt_string name);
QAccessibleWidgetV2* QAccessibleWidgetV2_new3(QWidget* object, int role);
void QAccessibleWidgetV2_virtbase(QAccessibleWidgetV2* src, QAccessibleWidget** outptr_QAccessibleWidget, QAccessibleAttributesInterface** outptr_QAccessibleAttributesInterface);
void* QAccessibleWidgetV2_interfaceCast(QAccessibleWidgetV2* self, int t);
struct miqt_array /* of int */  QAccessibleWidgetV2_attributeKeys(const QAccessibleWidgetV2* self);
QVariant* QAccessibleWidgetV2_attributeValue(const QAccessibleWidgetV2* self, int key);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
