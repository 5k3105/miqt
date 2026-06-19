#include <QChildEvent>
#include <QEvent>
#include <QMediaCaptureSession>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVideoFrame>
#include <QVideoFrameFormat>
#include <QVideoFrameInput>
#include <qvideoframeinput.h>
#include "gen_qvideoframeinput.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QVideoFrameInput_readyToSendVideoFrame(intptr_t);
bool miqt_exec_callback_QVideoFrameInput_event(QVideoFrameInput*, intptr_t, QEvent*);
bool miqt_exec_callback_QVideoFrameInput_eventFilter(QVideoFrameInput*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QVideoFrameInput_timerEvent(QVideoFrameInput*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QVideoFrameInput_childEvent(QVideoFrameInput*, intptr_t, QChildEvent*);
void miqt_exec_callback_QVideoFrameInput_customEvent(QVideoFrameInput*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoFrameInput_connectNotify(QVideoFrameInput*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QVideoFrameInput_disconnectNotify(QVideoFrameInput*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQVideoFrameInput final : public QVideoFrameInput {
public:

	MiqtVirtualQVideoFrameInput(): QVideoFrameInput() {}
	MiqtVirtualQVideoFrameInput(const QVideoFrameFormat& format): QVideoFrameInput(format) {}
	MiqtVirtualQVideoFrameInput(QObject* parent): QVideoFrameInput(parent) {}
	MiqtVirtualQVideoFrameInput(const QVideoFrameFormat& format, QObject* parent): QVideoFrameInput(format, parent) {}

	virtual ~MiqtVirtualQVideoFrameInput() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QVideoFrameInput::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QVideoFrameInput_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QVideoFrameInput_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QVideoFrameInput::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QVideoFrameInput_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QVideoFrameInput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QVideoFrameInput::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QVideoFrameInput_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QVideoFrameInput_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QVideoFrameInput::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QVideoFrameInput_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QVideoFrameInput_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QVideoFrameInput::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QVideoFrameInput_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QVideoFrameInput_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QVideoFrameInput::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QVideoFrameInput_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QVideoFrameInput_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QVideoFrameInput::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QVideoFrameInput_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QVideoFrameInput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QVideoFrameInput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QVideoFrameInput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QVideoFrameInput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QVideoFrameInput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QVideoFrameInput* QVideoFrameInput_new() {
	return new (std::nothrow) MiqtVirtualQVideoFrameInput();
}

QVideoFrameInput* QVideoFrameInput_new2(QVideoFrameFormat* format) {
	return new (std::nothrow) MiqtVirtualQVideoFrameInput(*format);
}

QVideoFrameInput* QVideoFrameInput_new3(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQVideoFrameInput(parent);
}

QVideoFrameInput* QVideoFrameInput_new4(QVideoFrameFormat* format, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQVideoFrameInput(*format, parent);
}

void QVideoFrameInput_virtbase(QVideoFrameInput* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QVideoFrameInput_metaObject(const QVideoFrameInput* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVideoFrameInput_metacast(QVideoFrameInput* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVideoFrameInput_tr(const char* s) {
	QString _ret = QVideoFrameInput::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QVideoFrameInput_sendVideoFrame(QVideoFrameInput* self, QVideoFrame* frame) {
	return self->sendVideoFrame(*frame);
}

QVideoFrameFormat* QVideoFrameInput_format(const QVideoFrameInput* self) {
	return new QVideoFrameFormat(self->format());
}

QMediaCaptureSession* QVideoFrameInput_captureSession(const QVideoFrameInput* self) {
	return self->captureSession();
}

void QVideoFrameInput_readyToSendVideoFrame(QVideoFrameInput* self) {
	self->readyToSendVideoFrame();
}

void QVideoFrameInput_connect_readyToSendVideoFrame(QVideoFrameInput* self, intptr_t slot) {
	QVideoFrameInput::connect(self, static_cast<void (QVideoFrameInput::*)()>(&QVideoFrameInput::readyToSendVideoFrame), self, [=]() {
		miqt_exec_callback_QVideoFrameInput_readyToSendVideoFrame(slot);
	});
}

struct miqt_string QVideoFrameInput_tr2(const char* s, const char* c) {
	QString _ret = QVideoFrameInput::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoFrameInput_tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoFrameInput::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QVideoFrameInput_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQVideoFrameInput* self_cast = dynamic_cast<MiqtVirtualQVideoFrameInput*>( (QVideoFrameInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QVideoFrameInput_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQVideoFrameInput*>(self)->QVideoFrameInput::event(event);
}

bool QVideoFrameInput_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQVideoFrameInput* self_cast = dynamic_cast<MiqtVirtualQVideoFrameInput*>( (QVideoFrameInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QVideoFrameInput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQVideoFrameInput*>(self)->QVideoFrameInput::eventFilter(watched, event);
}

bool QVideoFrameInput_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoFrameInput* self_cast = dynamic_cast<MiqtVirtualQVideoFrameInput*>( (QVideoFrameInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QVideoFrameInput_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQVideoFrameInput*>(self)->QVideoFrameInput::timerEvent(event);
}

bool QVideoFrameInput_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoFrameInput* self_cast = dynamic_cast<MiqtVirtualQVideoFrameInput*>( (QVideoFrameInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QVideoFrameInput_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQVideoFrameInput*>(self)->QVideoFrameInput::childEvent(event);
}

bool QVideoFrameInput_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoFrameInput* self_cast = dynamic_cast<MiqtVirtualQVideoFrameInput*>( (QVideoFrameInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QVideoFrameInput_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQVideoFrameInput*>(self)->QVideoFrameInput::customEvent(event);
}

bool QVideoFrameInput_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVideoFrameInput* self_cast = dynamic_cast<MiqtVirtualQVideoFrameInput*>( (QVideoFrameInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QVideoFrameInput_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQVideoFrameInput*>(self)->QVideoFrameInput::connectNotify(*signal);
}

bool QVideoFrameInput_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVideoFrameInput* self_cast = dynamic_cast<MiqtVirtualQVideoFrameInput*>( (QVideoFrameInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QVideoFrameInput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQVideoFrameInput*>(self)->QVideoFrameInput::disconnectNotify(*signal);
}

QObject* QVideoFrameInput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVideoFrameInput* self_cast = dynamic_cast<MiqtVirtualQVideoFrameInput*>( (QVideoFrameInput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QVideoFrameInput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVideoFrameInput* self_cast = dynamic_cast<MiqtVirtualQVideoFrameInput*>( (QVideoFrameInput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QVideoFrameInput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQVideoFrameInput* self_cast = dynamic_cast<MiqtVirtualQVideoFrameInput*>( (QVideoFrameInput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QVideoFrameInput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQVideoFrameInput* self_cast = dynamic_cast<MiqtVirtualQVideoFrameInput*>( (QVideoFrameInput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QVideoFrameInput_delete(QVideoFrameInput* self) {
	delete self;
}

