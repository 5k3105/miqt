#pragma once
#ifndef MIQT_QT6_GEN_QCOMPARE_H
#define MIQT_QT6_GEN_QCOMPARE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPartialOrdering;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_partial_ordering)
typedef Qt::partial_ordering partial_ordering;
#else
class partial_ordering;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_strong_ordering)
typedef Qt::strong_ordering strong_ordering;
#else
class strong_ordering;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_weak_ordering)
typedef Qt::weak_ordering weak_ordering;
#else
class weak_ordering;
#endif
#else
typedef struct QPartialOrdering QPartialOrdering;
typedef struct partial_ordering partial_ordering;
typedef struct strong_ordering strong_ordering;
typedef struct weak_ordering weak_ordering;
#endif

partial_ordering* partial_ordering_new(const partial_ordering* param1);
void partial_ordering_delete(partial_ordering* self);

weak_ordering* weak_ordering_new(const weak_ordering* param1);
partial_ordering weak_ordering_ToPartialOrdering(const weak_ordering* self);

void weak_ordering_delete(weak_ordering* self);

strong_ordering* strong_ordering_new(const strong_ordering* param1);
partial_ordering strong_ordering_ToPartialOrdering(const strong_ordering* self);
weak_ordering strong_ordering_ToWeakOrdering(const strong_ordering* self);

void strong_ordering_delete(strong_ordering* self);

QPartialOrdering* QPartialOrdering_new(partial_ordering* order);
QPartialOrdering* QPartialOrdering_new2(weak_ordering* stdorder);
QPartialOrdering* QPartialOrdering_new3(strong_ordering* stdorder);
QPartialOrdering* QPartialOrdering_new4(QPartialOrdering* param1);
partial_ordering* QPartialOrdering_ToPartialOrdering(const QPartialOrdering* self);

void QPartialOrdering_delete(QPartialOrdering* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
