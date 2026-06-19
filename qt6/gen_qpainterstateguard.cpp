#include <QPainter>
#include <QPainterStateGuard>
#include <qpainterstateguard.h>
#include "gen_qpainterstateguard.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPainterStateGuard* QPainterStateGuard_new(QPainter* painter) {
	return new (std::nothrow) QPainterStateGuard(painter);
}

QPainterStateGuard* QPainterStateGuard_new2(QPainter* painter, InitialState state) {
	return new (std::nothrow) QPainterStateGuard(painter, state);
}

void QPainterStateGuard_swap(QPainterStateGuard* self, QPainterStateGuard* other) {
	self->swap(*other);
}

void QPainterStateGuard_save(QPainterStateGuard* self) {
	self->save();
}

void QPainterStateGuard_restore(QPainterStateGuard* self) {
	self->restore();
}

void QPainterStateGuard_delete(QPainterStateGuard* self) {
	delete self;
}

