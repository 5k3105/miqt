#include <QCborError>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcborcommon.h>
#include "gen_qcborcommon.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

Code QCborError_c(const QCborError* self) {
	return self->c;
}

void QCborError_setC(QCborError* self, Code c) {
	self->c = c;
}

Code QCborError_ToQCborError__Code(const QCborError* self) {
	return self->operator QCborError::Code();
}

struct miqt_string QCborError_toString(const QCborError* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCborError_delete(QCborError* self) {
	delete self;
}

