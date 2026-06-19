#include <QHttp1Configuration>
#include <qhttp1configuration.h>
#include "gen_qhttp1configuration.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QHttp1Configuration* QHttp1Configuration_new() {
	return new (std::nothrow) QHttp1Configuration();
}

QHttp1Configuration* QHttp1Configuration_new2(QHttp1Configuration* other) {
	return new (std::nothrow) QHttp1Configuration(*other);
}

void QHttp1Configuration_operatorAssign(QHttp1Configuration* self, QHttp1Configuration* other) {
	self->operator=(*other);
}

void QHttp1Configuration_setNumberOfConnectionsPerHost(QHttp1Configuration* self, ptrdiff_t amount) {
	self->setNumberOfConnectionsPerHost((qsizetype)(amount));
}

ptrdiff_t QHttp1Configuration_numberOfConnectionsPerHost(const QHttp1Configuration* self) {
	qsizetype _ret = self->numberOfConnectionsPerHost();
	return static_cast<ptrdiff_t>(_ret);
}

void QHttp1Configuration_swap(QHttp1Configuration* self, QHttp1Configuration* other) {
	self->swap(*other);
}

void QHttp1Configuration_delete(QHttp1Configuration* self) {
	delete self;
}

