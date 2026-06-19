#include <QCapturableWindow>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMediaCaptureSession>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWindowCapture>
#include <qwindowcapture.h>
#include "gen_qwindowcapture.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWindowCapture_activeChanged(intptr_t, bool);
void miqt_exec_callback_QWindowCapture_windowChanged(intptr_t, QCapturableWindow*);
void miqt_exec_callback_QWindowCapture_errorChanged(intptr_t);
void miqt_exec_callback_QWindowCapture_errorOccurred(intptr_t, int, struct miqt_string);
bool miqt_exec_callback_QWindowCapture_event(QWindowCapture*, intptr_t, QEvent*);
bool miqt_exec_callback_QWindowCapture_eventFilter(QWindowCapture*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWindowCapture_timerEvent(QWindowCapture*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWindowCapture_childEvent(QWindowCapture*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWindowCapture_customEvent(QWindowCapture*, intptr_t, QEvent*);
void miqt_exec_callback_QWindowCapture_connectNotify(QWindowCapture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWindowCapture_disconnectNotify(QWindowCapture*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWindowCapture final : public QWindowCapture {
public:

	MiqtVirtualQWindowCapture(): QWindowCapture() {}
	MiqtVirtualQWindowCapture(QObject* parent): QWindowCapture(parent) {}

	virtual ~MiqtVirtualQWindowCapture() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QWindowCapture::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QWindowCapture_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QWindowCapture_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWindowCapture::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QWindowCapture_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QWindowCapture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWindowCapture::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QWindowCapture_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QWindowCapture_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWindowCapture::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QWindowCapture_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QWindowCapture_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWindowCapture::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QWindowCapture_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QWindowCapture_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWindowCapture::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QWindowCapture_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QWindowCapture_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWindowCapture::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QWindowCapture_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QWindowCapture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QWindowCapture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWindowCapture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWindowCapture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWindowCapture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWindowCapture* QWindowCapture_new() {
	return new (std::nothrow) MiqtVirtualQWindowCapture();
}

QWindowCapture* QWindowCapture_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQWindowCapture(parent);
}

void QWindowCapture_virtbase(QWindowCapture* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWindowCapture_metaObject(const QWindowCapture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWindowCapture_metacast(QWindowCapture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWindowCapture_tr(const char* s) {
	QString _ret = QWindowCapture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QCapturableWindow* */  QWindowCapture_capturableWindows() {
	QList<QCapturableWindow> _ret = QWindowCapture::capturableWindows();
	// Convert QList<> from C++ memory to manually-managed C memory
	QCapturableWindow** _arr = static_cast<QCapturableWindow**>(malloc(sizeof(QCapturableWindow*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QCapturableWindow(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QMediaCaptureSession* QWindowCapture_captureSession(const QWindowCapture* self) {
	return self->captureSession();
}

void QWindowCapture_setWindow(QWindowCapture* self, QCapturableWindow* window) {
	self->setWindow(*window);
}

QCapturableWindow* QWindowCapture_window(const QWindowCapture* self) {
	return new QCapturableWindow(self->window());
}

bool QWindowCapture_isActive(const QWindowCapture* self) {
	return self->isActive();
}

Error QWindowCapture_error(const QWindowCapture* self) {
	return self->error();
}

struct miqt_string QWindowCapture_errorString(const QWindowCapture* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWindowCapture_setActive(QWindowCapture* self, bool active) {
	self->setActive(active);
}

void QWindowCapture_start(QWindowCapture* self) {
	self->start();
}

void QWindowCapture_stop(QWindowCapture* self) {
	self->stop();
}

void QWindowCapture_activeChanged(QWindowCapture* self, bool param1) {
	self->activeChanged(param1);
}

void QWindowCapture_connect_activeChanged(QWindowCapture* self, intptr_t slot) {
	QWindowCapture::connect(self, static_cast<void (QWindowCapture::*)(bool)>(&QWindowCapture::activeChanged), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QWindowCapture_activeChanged(slot, sigval1);
	});
}

void QWindowCapture_windowChanged(QWindowCapture* self, QCapturableWindow* window) {
	self->windowChanged(*window);
}

void QWindowCapture_connect_windowChanged(QWindowCapture* self, intptr_t slot) {
	QWindowCapture::connect(self, static_cast<void (QWindowCapture::*)(QCapturableWindow)>(&QWindowCapture::windowChanged), self, [=](QCapturableWindow window) {
		QCapturableWindow* sigval1 = new QCapturableWindow(window);
		miqt_exec_callback_QWindowCapture_windowChanged(slot, sigval1);
	});
}

void QWindowCapture_errorChanged(QWindowCapture* self) {
	self->errorChanged();
}

void QWindowCapture_connect_errorChanged(QWindowCapture* self, intptr_t slot) {
	QWindowCapture::connect(self, static_cast<void (QWindowCapture::*)()>(&QWindowCapture::errorChanged), self, [=]() {
		miqt_exec_callback_QWindowCapture_errorChanged(slot);
	});
}

void QWindowCapture_errorOccurred(QWindowCapture* self, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->errorOccurred(static_cast<QWindowCapture::Error>(error), errorString_QString);
}

void QWindowCapture_connect_errorOccurred(QWindowCapture* self, intptr_t slot) {
	QWindowCapture::connect(self, static_cast<void (QWindowCapture::*)(QWindowCapture::Error, const QString&)>(&QWindowCapture::errorOccurred), self, [=](QWindowCapture::Error error, const QString& errorString) {
		QWindowCapture::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		const QString errorString_ret = errorString;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray errorString_b = errorString_ret.toUtf8();
		struct miqt_string errorString_ms;
		errorString_ms.len = errorString_b.length();
		errorString_ms.data = static_cast<char*>(malloc(errorString_ms.len));
		memcpy(errorString_ms.data, errorString_b.data(), errorString_ms.len);
		struct miqt_string sigval2 = errorString_ms;
		miqt_exec_callback_QWindowCapture_errorOccurred(slot, sigval1, sigval2);
	});
}

struct miqt_string QWindowCapture_tr2(const char* s, const char* c) {
	QString _ret = QWindowCapture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWindowCapture_tr3(const char* s, const char* c, int n) {
	QString _ret = QWindowCapture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWindowCapture_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWindowCapture* self_cast = dynamic_cast<MiqtVirtualQWindowCapture*>( (QWindowCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QWindowCapture_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQWindowCapture*>(self)->QWindowCapture::event(event);
}

bool QWindowCapture_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWindowCapture* self_cast = dynamic_cast<MiqtVirtualQWindowCapture*>( (QWindowCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWindowCapture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQWindowCapture*>(self)->QWindowCapture::eventFilter(watched, event);
}

bool QWindowCapture_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindowCapture* self_cast = dynamic_cast<MiqtVirtualQWindowCapture*>( (QWindowCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QWindowCapture_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQWindowCapture*>(self)->QWindowCapture::timerEvent(event);
}

bool QWindowCapture_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindowCapture* self_cast = dynamic_cast<MiqtVirtualQWindowCapture*>( (QWindowCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QWindowCapture_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQWindowCapture*>(self)->QWindowCapture::childEvent(event);
}

bool QWindowCapture_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindowCapture* self_cast = dynamic_cast<MiqtVirtualQWindowCapture*>( (QWindowCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QWindowCapture_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQWindowCapture*>(self)->QWindowCapture::customEvent(event);
}

bool QWindowCapture_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWindowCapture* self_cast = dynamic_cast<MiqtVirtualQWindowCapture*>( (QWindowCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QWindowCapture_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQWindowCapture*>(self)->QWindowCapture::connectNotify(*signal);
}

bool QWindowCapture_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWindowCapture* self_cast = dynamic_cast<MiqtVirtualQWindowCapture*>( (QWindowCapture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWindowCapture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQWindowCapture*>(self)->QWindowCapture::disconnectNotify(*signal);
}

QObject* QWindowCapture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWindowCapture* self_cast = dynamic_cast<MiqtVirtualQWindowCapture*>( (QWindowCapture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QWindowCapture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWindowCapture* self_cast = dynamic_cast<MiqtVirtualQWindowCapture*>( (QWindowCapture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QWindowCapture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWindowCapture* self_cast = dynamic_cast<MiqtVirtualQWindowCapture*>( (QWindowCapture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QWindowCapture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWindowCapture* self_cast = dynamic_cast<MiqtVirtualQWindowCapture*>( (QWindowCapture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QWindowCapture_delete(QWindowCapture* self) {
	delete self;
}

