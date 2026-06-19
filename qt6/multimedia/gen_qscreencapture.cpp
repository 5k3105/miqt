#include <QChildEvent>
#include <QEvent>
#include <QMediaCaptureSession>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QScreen>
#include <QScreenCapture>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qscreencapture.h>
#include "gen_qscreencapture.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QScreenCapture_activeChanged(intptr_t, bool);
void miqt_exec_callback_QScreenCapture_errorChanged(intptr_t);
void miqt_exec_callback_QScreenCapture_screenChanged(intptr_t, QScreen*);
void miqt_exec_callback_QScreenCapture_errorOccurred(intptr_t, int, struct miqt_string);
bool miqt_exec_callback_QScreenCapture_event(QScreenCapture*, intptr_t, QEvent*);
bool miqt_exec_callback_QScreenCapture_eventFilter(QScreenCapture*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScreenCapture_timerEvent(QScreenCapture*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScreenCapture_childEvent(QScreenCapture*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScreenCapture_customEvent(QScreenCapture*, intptr_t, QEvent*);
void miqt_exec_callback_QScreenCapture_connectNotify(QScreenCapture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScreenCapture_disconnectNotify(QScreenCapture*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQScreenCapture final : public QScreenCapture {
public:

	MiqtVirtualQScreenCapture(): QScreenCapture() {}
	MiqtVirtualQScreenCapture(QObject* parent): QScreenCapture(parent) {}

	virtual ~MiqtVirtualQScreenCapture() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QScreenCapture::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QScreenCapture_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QScreenCapture_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QScreenCapture::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QScreenCapture_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QScreenCapture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QScreenCapture::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QScreenCapture_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QScreenCapture_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QScreenCapture::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QScreenCapture_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QScreenCapture_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QScreenCapture::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QScreenCapture_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QScreenCapture_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QScreenCapture::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScreenCapture_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QScreenCapture_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QScreenCapture::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScreenCapture_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QScreenCapture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QScreenCapture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QScreenCapture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QScreenCapture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QScreenCapture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QScreenCapture* QScreenCapture_new() {
	return new (std::nothrow) MiqtVirtualQScreenCapture();
}

QScreenCapture* QScreenCapture_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQScreenCapture(parent);
}

void QScreenCapture_virtbase(QScreenCapture* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QScreenCapture_metaObject(const QScreenCapture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScreenCapture_metacast(QScreenCapture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScreenCapture_tr(const char* s) {
	QString _ret = QScreenCapture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMediaCaptureSession* QScreenCapture_captureSession(const QScreenCapture* self) {
	return self->captureSession();
}

void QScreenCapture_setScreen(QScreenCapture* self, QScreen* screen) {
	self->setScreen(screen);
}

QScreen* QScreenCapture_screen(const QScreenCapture* self) {
	return self->screen();
}

bool QScreenCapture_isActive(const QScreenCapture* self) {
	return self->isActive();
}

Error QScreenCapture_error(const QScreenCapture* self) {
	return self->error();
}

struct miqt_string QScreenCapture_errorString(const QScreenCapture* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScreenCapture_setActive(QScreenCapture* self, bool active) {
	self->setActive(active);
}

void QScreenCapture_start(QScreenCapture* self) {
	self->start();
}

void QScreenCapture_stop(QScreenCapture* self) {
	self->stop();
}

void QScreenCapture_activeChanged(QScreenCapture* self, bool param1) {
	self->activeChanged(param1);
}

void QScreenCapture_connect_activeChanged(QScreenCapture* self, intptr_t slot) {
	QScreenCapture::connect(self, static_cast<void (QScreenCapture::*)(bool)>(&QScreenCapture::activeChanged), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QScreenCapture_activeChanged(slot, sigval1);
	});
}

void QScreenCapture_errorChanged(QScreenCapture* self) {
	self->errorChanged();
}

void QScreenCapture_connect_errorChanged(QScreenCapture* self, intptr_t slot) {
	QScreenCapture::connect(self, static_cast<void (QScreenCapture::*)()>(&QScreenCapture::errorChanged), self, [=]() {
		miqt_exec_callback_QScreenCapture_errorChanged(slot);
	});
}

void QScreenCapture_screenChanged(QScreenCapture* self, QScreen* param1) {
	self->screenChanged(param1);
}

void QScreenCapture_connect_screenChanged(QScreenCapture* self, intptr_t slot) {
	QScreenCapture::connect(self, static_cast<void (QScreenCapture::*)(QScreen*)>(&QScreenCapture::screenChanged), self, [=](QScreen* param1) {
		QScreen* sigval1 = param1;
		miqt_exec_callback_QScreenCapture_screenChanged(slot, sigval1);
	});
}

void QScreenCapture_errorOccurred(QScreenCapture* self, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->errorOccurred(static_cast<QScreenCapture::Error>(error), errorString_QString);
}

void QScreenCapture_connect_errorOccurred(QScreenCapture* self, intptr_t slot) {
	QScreenCapture::connect(self, static_cast<void (QScreenCapture::*)(QScreenCapture::Error, const QString&)>(&QScreenCapture::errorOccurred), self, [=](QScreenCapture::Error error, const QString& errorString) {
		QScreenCapture::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		const QString errorString_ret = errorString;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray errorString_b = errorString_ret.toUtf8();
		struct miqt_string errorString_ms;
		errorString_ms.len = errorString_b.length();
		errorString_ms.data = static_cast<char*>(malloc(errorString_ms.len));
		memcpy(errorString_ms.data, errorString_b.data(), errorString_ms.len);
		struct miqt_string sigval2 = errorString_ms;
		miqt_exec_callback_QScreenCapture_errorOccurred(slot, sigval1, sigval2);
	});
}

struct miqt_string QScreenCapture_tr2(const char* s, const char* c) {
	QString _ret = QScreenCapture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreenCapture_tr3(const char* s, const char* c, int n) {
	QString _ret = QScreenCapture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScreenCapture_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQScreenCapture* self_cast = dynamic_cast<MiqtVirtualQScreenCapture*>( (QScreenCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QScreenCapture_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQScreenCapture*>(self)->QScreenCapture::event(event);
}

bool QScreenCapture_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQScreenCapture* self_cast = dynamic_cast<MiqtVirtualQScreenCapture*>( (QScreenCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QScreenCapture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQScreenCapture*>(self)->QScreenCapture::eventFilter(watched, event);
}

bool QScreenCapture_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQScreenCapture* self_cast = dynamic_cast<MiqtVirtualQScreenCapture*>( (QScreenCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QScreenCapture_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQScreenCapture*>(self)->QScreenCapture::timerEvent(event);
}

bool QScreenCapture_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQScreenCapture* self_cast = dynamic_cast<MiqtVirtualQScreenCapture*>( (QScreenCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QScreenCapture_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQScreenCapture*>(self)->QScreenCapture::childEvent(event);
}

bool QScreenCapture_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQScreenCapture* self_cast = dynamic_cast<MiqtVirtualQScreenCapture*>( (QScreenCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QScreenCapture_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQScreenCapture*>(self)->QScreenCapture::customEvent(event);
}

bool QScreenCapture_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScreenCapture* self_cast = dynamic_cast<MiqtVirtualQScreenCapture*>( (QScreenCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QScreenCapture_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScreenCapture*>(self)->QScreenCapture::connectNotify(*signal);
}

bool QScreenCapture_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScreenCapture* self_cast = dynamic_cast<MiqtVirtualQScreenCapture*>( (QScreenCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QScreenCapture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScreenCapture*>(self)->QScreenCapture::disconnectNotify(*signal);
}

QObject* QScreenCapture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScreenCapture* self_cast = dynamic_cast<MiqtVirtualQScreenCapture*>( (QScreenCapture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QScreenCapture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScreenCapture* self_cast = dynamic_cast<MiqtVirtualQScreenCapture*>( (QScreenCapture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QScreenCapture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQScreenCapture* self_cast = dynamic_cast<MiqtVirtualQScreenCapture*>( (QScreenCapture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QScreenCapture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQScreenCapture* self_cast = dynamic_cast<MiqtVirtualQScreenCapture*>( (QScreenCapture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QScreenCapture_delete(QScreenCapture* self) {
	delete self;
}

