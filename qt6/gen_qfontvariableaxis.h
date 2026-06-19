#pragma once
#ifndef MIQT_QT6_GEN_QFONTVARIABLEAXIS_H
#define MIQT_QT6_GEN_QFONTVARIABLEAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QFont__Tag)
typedef QFont::Tag QFont__Tag;
#else
class QFont__Tag;
#endif
class QFontVariableAxis;
#else
typedef struct QFont__Tag QFont__Tag;
typedef struct QFontVariableAxis QFontVariableAxis;
#endif

QFontVariableAxis* QFontVariableAxis_new();
QFontVariableAxis* QFontVariableAxis_new2(QFontVariableAxis* axis);
void QFontVariableAxis_swap(QFontVariableAxis* self, QFontVariableAxis* other);
void QFontVariableAxis_operatorAssign(QFontVariableAxis* self, QFontVariableAxis* axis);
QFont__Tag* QFontVariableAxis_tag(const QFontVariableAxis* self);
void QFontVariableAxis_setTag(QFontVariableAxis* self, QFont__Tag* tag);
struct miqt_string QFontVariableAxis_name(const QFontVariableAxis* self);
void QFontVariableAxis_setName(QFontVariableAxis* self, struct miqt_string name);
double QFontVariableAxis_minimumValue(const QFontVariableAxis* self);
void QFontVariableAxis_setMinimumValue(QFontVariableAxis* self, double minimumValue);
double QFontVariableAxis_maximumValue(const QFontVariableAxis* self);
void QFontVariableAxis_setMaximumValue(QFontVariableAxis* self, double maximumValue);
double QFontVariableAxis_defaultValue(const QFontVariableAxis* self);
void QFontVariableAxis_setDefaultValue(QFontVariableAxis* self, double defaultValue);

void QFontVariableAxis_delete(QFontVariableAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
