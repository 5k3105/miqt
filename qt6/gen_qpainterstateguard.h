#pragma once
#ifndef MIQT_QT6_GEN_QPAINTERSTATEGUARD_H
#define MIQT_QT6_GEN_QPAINTERSTATEGUARD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPainter;
class QPainterStateGuard;
#else
typedef struct QPainter QPainter;
typedef struct QPainterStateGuard QPainterStateGuard;
#endif

QPainterStateGuard* QPainterStateGuard_new(QPainter* painter);
QPainterStateGuard* QPainterStateGuard_new2(QPainter* painter, InitialState state);
void QPainterStateGuard_swap(QPainterStateGuard* self, QPainterStateGuard* other);
void QPainterStateGuard_save(QPainterStateGuard* self);
void QPainterStateGuard_restore(QPainterStateGuard* self);

void QPainterStateGuard_delete(QPainterStateGuard* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
