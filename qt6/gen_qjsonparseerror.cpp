#include <QJsonParseError>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qjsonparseerror.h>
#include "gen_qjsonparseerror.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_string QJsonParseError_errorString(const QJsonParseError* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

ParseError QJsonParseError_error(const QJsonParseError* self) {
	return self->error;
}

void QJsonParseError_setError(QJsonParseError* self, ParseError error) {
	self->error = error;
}

void QJsonParseError_delete(QJsonParseError* self) {
	delete self;
}

