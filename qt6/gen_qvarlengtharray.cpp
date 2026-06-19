#include <qvarlengtharray.h>
#include "gen_qvarlengtharray.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

size_type QVLABaseBase_capacity(const QVLABaseBase* self) {
	return self->capacity();
}

size_type QVLABaseBase_size(const QVLABaseBase* self) {
	return self->size();
}

bool QVLABaseBase_empty(const QVLABaseBase* self) {
	return self->empty();
}

