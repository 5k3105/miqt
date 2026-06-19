#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QCAPTURABLEWINDOW_H
#define MIQT_QT6_MULTIMEDIA_GEN_QCAPTURABLEWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCapturableWindow;
class QWindow;
#else
typedef struct QCapturableWindow QCapturableWindow;
typedef struct QWindow QWindow;
#endif

QCapturableWindow* QCapturableWindow_new();
QCapturableWindow* QCapturableWindow_new2(QWindow* window);
QCapturableWindow* QCapturableWindow_new3(QCapturableWindow* other);
void QCapturableWindow_operatorAssign(QCapturableWindow* self, QCapturableWindow* other);
void QCapturableWindow_swap(QCapturableWindow* self, QCapturableWindow* other);
bool QCapturableWindow_isValid(const QCapturableWindow* self);
struct miqt_string QCapturableWindow_description(const QCapturableWindow* self);

void QCapturableWindow_delete(QCapturableWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
