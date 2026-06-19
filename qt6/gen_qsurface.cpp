#include <QSize>
#include <QSurface>
#include <QSurfaceFormat>
#include <qsurface.h>
#include "gen_qsurface.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

SurfaceClass QSurface_surfaceClass(const QSurface* self) {
	return self->surfaceClass();
}

QSurfaceFormat* QSurface_format(const QSurface* self) {
	return new QSurfaceFormat(self->format());
}

SurfaceType QSurface_surfaceType(const QSurface* self) {
	return self->surfaceType();
}

bool QSurface_supportsOpenGL(const QSurface* self) {
	return self->supportsOpenGL();
}

QSize* QSurface_size(const QSurface* self) {
	return new QSize(self->size());
}

void QSurface_operatorAssign(QSurface* self, QSurface* param1) {
	self->operator=(*param1);
}

void QSurface_delete(QSurface* self) {
	delete self;
}

