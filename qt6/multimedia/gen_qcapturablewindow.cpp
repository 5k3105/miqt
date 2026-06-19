#include <QCapturableWindow>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWindow>
#include <qcapturablewindow.h>
#include "gen_qcapturablewindow.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QCapturableWindow* QCapturableWindow_new() {
	return new (std::nothrow) QCapturableWindow();
}

QCapturableWindow* QCapturableWindow_new2(QWindow* window) {
	return new (std::nothrow) QCapturableWindow(window);
}

QCapturableWindow* QCapturableWindow_new3(QCapturableWindow* other) {
	return new (std::nothrow) QCapturableWindow(*other);
}

void QCapturableWindow_operatorAssign(QCapturableWindow* self, QCapturableWindow* other) {
	self->operator=(*other);
}

void QCapturableWindow_swap(QCapturableWindow* self, QCapturableWindow* other) {
	self->swap(*other);
}

bool QCapturableWindow_isValid(const QCapturableWindow* self) {
	return self->isValid();
}

struct miqt_string QCapturableWindow_description(const QCapturableWindow* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCapturableWindow_delete(QCapturableWindow* self) {
	delete self;
}

