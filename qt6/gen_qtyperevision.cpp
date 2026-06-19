#include <QTypeRevision>
#include <qtyperevision.h>
#include "gen_qtyperevision.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QTypeRevision* QTypeRevision_new() {
	return new (std::nothrow) QTypeRevision();
}

QTypeRevision* QTypeRevision_new2(QTypeRevision* param1) {
	return new (std::nothrow) QTypeRevision(*param1);
}

QTypeRevision* QTypeRevision_zero() {
	return new QTypeRevision(QTypeRevision::zero());
}

bool QTypeRevision_hasMajorVersion(const QTypeRevision* self) {
	return self->hasMajorVersion();
}

unsigned char QTypeRevision_majorVersion(const QTypeRevision* self) {
	quint8 _ret = self->majorVersion();
	return static_cast<unsigned char>(_ret);
}

bool QTypeRevision_hasMinorVersion(const QTypeRevision* self) {
	return self->hasMinorVersion();
}

unsigned char QTypeRevision_minorVersion(const QTypeRevision* self) {
	quint8 _ret = self->minorVersion();
	return static_cast<unsigned char>(_ret);
}

bool QTypeRevision_isValid(const QTypeRevision* self) {
	return self->isValid();
}

void QTypeRevision_delete(QTypeRevision* self) {
	delete self;
}

