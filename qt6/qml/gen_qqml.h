#pragma once
#ifndef MIQT_QT6_QML_GEN_QQML_H
#define MIQT_QT6_QML_GEN_QQML_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaMethod;
class QMetaObject;
class QObject;
class QQmlTypeNotAvailable;
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlTypeNotAvailable QQmlTypeNotAvailable;
#endif

void QQmlTypeNotAvailable_virtbase(QQmlTypeNotAvailable* src, QObject** outptr_QObject);
QMetaObject* QQmlTypeNotAvailable_metaObject(const QQmlTypeNotAvailable* self);
void* QQmlTypeNotAvailable_metacast(QQmlTypeNotAvailable* self, const char* param1);
struct miqt_string QQmlTypeNotAvailable_tr(const char* s);
struct miqt_string QQmlTypeNotAvailable_tr2(const char* s, const char* c);
struct miqt_string QQmlTypeNotAvailable_tr3(const char* s, const char* c, int n);

void QQmlTypeNotAvailable_delete(QQmlTypeNotAvailable* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
