#pragma once
#ifndef MIQT_QT6_GEN_QSCREEN_PLATFORM_H
#define MIQT_QT6_GEN_QSCREEN_PLATFORM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QWaylandScreen)
typedef QNativeInterface::QWaylandScreen QNativeInterface__QWaylandScreen;
#else
class QNativeInterface__QWaylandScreen;
#endif
#else
typedef struct QNativeInterface__QWaylandScreen QNativeInterface__QWaylandScreen;
#endif

QNativeInterface__QWaylandScreen* QNativeInterface__QWaylandScreen_new();
wl_output* QNativeInterface__QWaylandScreen_output(const QNativeInterface__QWaylandScreen* self);

bool QNativeInterface__QWaylandScreen_override_virtual_output(void* self, intptr_t slot);
wl_output* QNativeInterface__QWaylandScreen_virtualbase_output(const void* self);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
