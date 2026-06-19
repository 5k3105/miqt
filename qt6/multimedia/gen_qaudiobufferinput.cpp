#include <QAudioBuffer>
#include <QAudioBufferInput>
#include <QAudioFormat>
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
#include <qaudiobufferinput.h>
#include "gen_qaudiobufferinput.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAudioBufferInput_readyToSendAudioBuffer(intptr_t);
bool miqt_exec_callback_QAudioBufferInput_event(QAudioBufferInput*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioBufferInput_eventFilter(QAudioBufferInput*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioBufferInput_timerEvent(QAudioBufferInput*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioBufferInput_childEvent(QAudioBufferInput*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioBufferInput_customEvent(QAudioBufferInput*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioBufferInput_connectNotify(QAudioBufferInput*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioBufferInput_disconnectNotify(QAudioBufferInput*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioBufferInput final : public QAudioBufferInput {
public:

	MiqtVirtualQAudioBufferInput(): QAudioBufferInput() {}
	MiqtVirtualQAudioBufferInput(const QAudioFormat& format): QAudioBufferInput(format) {}
	MiqtVirtualQAudioBufferInput(QObject* parent): QAudioBufferInput(parent) {}
	MiqtVirtualQAudioBufferInput(const QAudioFormat& format, QObject* parent): QAudioBufferInput(format, parent) {}

	virtual ~MiqtVirtualQAudioBufferInput() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAudioBufferInput::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAudioBufferInput_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QAudioBufferInput_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAudioBufferInput::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAudioBufferInput_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAudioBufferInput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAudioBufferInput::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QAudioBufferInput_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QAudioBufferInput_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAudioBufferInput::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QAudioBufferInput_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QAudioBufferInput_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAudioBufferInput::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAudioBufferInput_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QAudioBufferInput_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAudioBufferInput::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAudioBufferInput_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QAudioBufferInput_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAudioBufferInput::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAudioBufferInput_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QAudioBufferInput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QAudioBufferInput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioBufferInput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioBufferInput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAudioBufferInput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAudioBufferInput* QAudioBufferInput_new() {
	return new (std::nothrow) MiqtVirtualQAudioBufferInput();
}

QAudioBufferInput* QAudioBufferInput_new2(QAudioFormat* format) {
	return new (std::nothrow) MiqtVirtualQAudioBufferInput(*format);
}

QAudioBufferInput* QAudioBufferInput_new3(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAudioBufferInput(parent);
}

QAudioBufferInput* QAudioBufferInput_new4(QAudioFormat* format, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAudioBufferInput(*format, parent);
}

void QAudioBufferInput_virtbase(QAudioBufferInput* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAudioBufferInput_metaObject(const QAudioBufferInput* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioBufferInput_metacast(QAudioBufferInput* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioBufferInput_tr(const char* s) {
	QString _ret = QAudioBufferInput::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioBufferInput_sendAudioBuffer(QAudioBufferInput* self, QAudioBuffer* audioBuffer) {
	return self->sendAudioBuffer(*audioBuffer);
}

QAudioFormat* QAudioBufferInput_format(const QAudioBufferInput* self) {
	return new QAudioFormat(self->format());
}

QMediaCaptureSession* QAudioBufferInput_captureSession(const QAudioBufferInput* self) {
	return self->captureSession();
}

void QAudioBufferInput_readyToSendAudioBuffer(QAudioBufferInput* self) {
	self->readyToSendAudioBuffer();
}

void QAudioBufferInput_connect_readyToSendAudioBuffer(QAudioBufferInput* self, intptr_t slot) {
	QAudioBufferInput::connect(self, static_cast<void (QAudioBufferInput::*)()>(&QAudioBufferInput::readyToSendAudioBuffer), self, [=]() {
		miqt_exec_callback_QAudioBufferInput_readyToSendAudioBuffer(slot);
	});
}

struct miqt_string QAudioBufferInput_tr2(const char* s, const char* c) {
	QString _ret = QAudioBufferInput::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioBufferInput_tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioBufferInput::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioBufferInput_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAudioBufferInput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferInput*>( (QAudioBufferInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QAudioBufferInput_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAudioBufferInput*>(self)->QAudioBufferInput::event(event);
}

bool QAudioBufferInput_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioBufferInput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferInput*>( (QAudioBufferInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAudioBufferInput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAudioBufferInput*>(self)->QAudioBufferInput::eventFilter(watched, event);
}

bool QAudioBufferInput_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioBufferInput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferInput*>( (QAudioBufferInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QAudioBufferInput_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQAudioBufferInput*>(self)->QAudioBufferInput::timerEvent(event);
}

bool QAudioBufferInput_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioBufferInput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferInput*>( (QAudioBufferInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QAudioBufferInput_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQAudioBufferInput*>(self)->QAudioBufferInput::childEvent(event);
}

bool QAudioBufferInput_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioBufferInput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferInput*>( (QAudioBufferInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QAudioBufferInput_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAudioBufferInput*>(self)->QAudioBufferInput::customEvent(event);
}

bool QAudioBufferInput_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioBufferInput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferInput*>( (QAudioBufferInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QAudioBufferInput_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAudioBufferInput*>(self)->QAudioBufferInput::connectNotify(*signal);
}

bool QAudioBufferInput_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioBufferInput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferInput*>( (QAudioBufferInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAudioBufferInput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAudioBufferInput*>(self)->QAudioBufferInput::disconnectNotify(*signal);
}

QObject* QAudioBufferInput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioBufferInput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferInput*>( (QAudioBufferInput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAudioBufferInput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioBufferInput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferInput*>( (QAudioBufferInput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAudioBufferInput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAudioBufferInput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferInput*>( (QAudioBufferInput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAudioBufferInput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAudioBufferInput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferInput*>( (QAudioBufferInput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QAudioBufferInput_delete(QAudioBufferInput* self) {
	delete self;
}

