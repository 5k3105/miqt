#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QPLAYBACKOPTIONS_H
#define MIQT_QT6_MULTIMEDIA_GEN_QPLAYBACKOPTIONS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPlaybackOptions;
#else
typedef struct QPlaybackOptions QPlaybackOptions;
#endif

QPlaybackOptions* QPlaybackOptions_new();
QPlaybackOptions* QPlaybackOptions_new2(QPlaybackOptions* param1);
void QPlaybackOptions_operatorAssign(QPlaybackOptions* self, QPlaybackOptions* param1);
void QPlaybackOptions_swap(QPlaybackOptions* self, QPlaybackOptions* other);
void QPlaybackOptions_resetNetworkTimeout(QPlaybackOptions* self);
PlaybackIntent QPlaybackOptions_playbackIntent(const QPlaybackOptions* self);
void QPlaybackOptions_setPlaybackIntent(QPlaybackOptions* self, PlaybackIntent intent);
void QPlaybackOptions_resetPlaybackIntent(QPlaybackOptions* self);
ptrdiff_t QPlaybackOptions_probeSize(const QPlaybackOptions* self);
void QPlaybackOptions_setProbeSize(QPlaybackOptions* self, ptrdiff_t probeSizeBytes);
void QPlaybackOptions_resetProbeSize(QPlaybackOptions* self);

void QPlaybackOptions_delete(QPlaybackOptions* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
