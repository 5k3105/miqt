#include <QPlaybackOptions>
#include <qplaybackoptions.h>
#include "gen_qplaybackoptions.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPlaybackOptions* QPlaybackOptions_new() {
	return new (std::nothrow) QPlaybackOptions();
}

QPlaybackOptions* QPlaybackOptions_new2(QPlaybackOptions* param1) {
	return new (std::nothrow) QPlaybackOptions(*param1);
}

void QPlaybackOptions_operatorAssign(QPlaybackOptions* self, QPlaybackOptions* param1) {
	self->operator=(*param1);
}

void QPlaybackOptions_swap(QPlaybackOptions* self, QPlaybackOptions* other) {
	self->swap(*other);
}

void QPlaybackOptions_resetNetworkTimeout(QPlaybackOptions* self) {
	self->resetNetworkTimeout();
}

PlaybackIntent QPlaybackOptions_playbackIntent(const QPlaybackOptions* self) {
	return self->playbackIntent();
}

void QPlaybackOptions_setPlaybackIntent(QPlaybackOptions* self, PlaybackIntent intent) {
	self->setPlaybackIntent(intent);
}

void QPlaybackOptions_resetPlaybackIntent(QPlaybackOptions* self) {
	self->resetPlaybackIntent();
}

ptrdiff_t QPlaybackOptions_probeSize(const QPlaybackOptions* self) {
	qsizetype _ret = self->probeSize();
	return static_cast<ptrdiff_t>(_ret);
}

void QPlaybackOptions_setProbeSize(QPlaybackOptions* self, ptrdiff_t probeSizeBytes) {
	self->setProbeSize((qsizetype)(probeSizeBytes));
}

void QPlaybackOptions_resetProbeSize(QPlaybackOptions* self) {
	self->resetProbeSize();
}

void QPlaybackOptions_delete(QPlaybackOptions* self) {
	delete self;
}

