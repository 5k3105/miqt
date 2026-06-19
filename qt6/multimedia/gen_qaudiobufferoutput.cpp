#include <QAudioBuffer>
#include <QAudioBufferOutput>
#include <QAudioFormat>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qaudiobufferoutput.h>
#include "gen_qaudiobufferoutput.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAudioBufferOutput_audioBufferReceived(intptr_t, QAudioBuffer*);
bool miqt_exec_callback_QAudioBufferOutput_event(QAudioBufferOutput*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioBufferOutput_eventFilter(QAudioBufferOutput*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioBufferOutput_timerEvent(QAudioBufferOutput*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioBufferOutput_childEvent(QAudioBufferOutput*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioBufferOutput_customEvent(QAudioBufferOutput*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioBufferOutput_connectNotify(QAudioBufferOutput*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioBufferOutput_disconnectNotify(QAudioBufferOutput*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioBufferOutput final : public QAudioBufferOutput {
public:

	MiqtVirtualQAudioBufferOutput(): QAudioBufferOutput() {}
	MiqtVirtualQAudioBufferOutput(const QAudioFormat& format): QAudioBufferOutput(format) {}
	MiqtVirtualQAudioBufferOutput(QObject* parent): QAudioBufferOutput(parent) {}
	MiqtVirtualQAudioBufferOutput(const QAudioFormat& format, QObject* parent): QAudioBufferOutput(format, parent) {}

	virtual ~MiqtVirtualQAudioBufferOutput() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAudioBufferOutput::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAudioBufferOutput_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QAudioBufferOutput_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAudioBufferOutput::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAudioBufferOutput_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAudioBufferOutput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAudioBufferOutput::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QAudioBufferOutput_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QAudioBufferOutput_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAudioBufferOutput::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QAudioBufferOutput_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QAudioBufferOutput_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAudioBufferOutput::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAudioBufferOutput_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QAudioBufferOutput_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAudioBufferOutput::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAudioBufferOutput_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QAudioBufferOutput_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAudioBufferOutput::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAudioBufferOutput_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QAudioBufferOutput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QAudioBufferOutput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioBufferOutput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioBufferOutput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAudioBufferOutput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAudioBufferOutput* QAudioBufferOutput_new() {
	return new (std::nothrow) MiqtVirtualQAudioBufferOutput();
}

QAudioBufferOutput* QAudioBufferOutput_new2(QAudioFormat* format) {
	return new (std::nothrow) MiqtVirtualQAudioBufferOutput(*format);
}

QAudioBufferOutput* QAudioBufferOutput_new3(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAudioBufferOutput(parent);
}

QAudioBufferOutput* QAudioBufferOutput_new4(QAudioFormat* format, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAudioBufferOutput(*format, parent);
}

void QAudioBufferOutput_virtbase(QAudioBufferOutput* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAudioBufferOutput_metaObject(const QAudioBufferOutput* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioBufferOutput_metacast(QAudioBufferOutput* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioBufferOutput_tr(const char* s) {
	QString _ret = QAudioBufferOutput::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioFormat* QAudioBufferOutput_format(const QAudioBufferOutput* self) {
	return new QAudioFormat(self->format());
}

void QAudioBufferOutput_audioBufferReceived(QAudioBufferOutput* self, QAudioBuffer* buffer) {
	self->audioBufferReceived(*buffer);
}

void QAudioBufferOutput_connect_audioBufferReceived(QAudioBufferOutput* self, intptr_t slot) {
	QAudioBufferOutput::connect(self, static_cast<void (QAudioBufferOutput::*)(const QAudioBuffer&)>(&QAudioBufferOutput::audioBufferReceived), self, [=](const QAudioBuffer& buffer) {
		const QAudioBuffer& buffer_ret = buffer;
		// Cast returned reference into pointer
		QAudioBuffer* sigval1 = const_cast<QAudioBuffer*>(&buffer_ret);
		miqt_exec_callback_QAudioBufferOutput_audioBufferReceived(slot, sigval1);
	});
}

struct miqt_string QAudioBufferOutput_tr2(const char* s, const char* c) {
	QString _ret = QAudioBufferOutput::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioBufferOutput_tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioBufferOutput::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioBufferOutput_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAudioBufferOutput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferOutput*>( (QAudioBufferOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QAudioBufferOutput_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAudioBufferOutput*>(self)->QAudioBufferOutput::event(event);
}

bool QAudioBufferOutput_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioBufferOutput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferOutput*>( (QAudioBufferOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAudioBufferOutput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAudioBufferOutput*>(self)->QAudioBufferOutput::eventFilter(watched, event);
}

bool QAudioBufferOutput_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioBufferOutput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferOutput*>( (QAudioBufferOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QAudioBufferOutput_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQAudioBufferOutput*>(self)->QAudioBufferOutput::timerEvent(event);
}

bool QAudioBufferOutput_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioBufferOutput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferOutput*>( (QAudioBufferOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QAudioBufferOutput_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQAudioBufferOutput*>(self)->QAudioBufferOutput::childEvent(event);
}

bool QAudioBufferOutput_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioBufferOutput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferOutput*>( (QAudioBufferOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QAudioBufferOutput_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAudioBufferOutput*>(self)->QAudioBufferOutput::customEvent(event);
}

bool QAudioBufferOutput_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioBufferOutput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferOutput*>( (QAudioBufferOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QAudioBufferOutput_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAudioBufferOutput*>(self)->QAudioBufferOutput::connectNotify(*signal);
}

bool QAudioBufferOutput_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioBufferOutput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferOutput*>( (QAudioBufferOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAudioBufferOutput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAudioBufferOutput*>(self)->QAudioBufferOutput::disconnectNotify(*signal);
}

QObject* QAudioBufferOutput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioBufferOutput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferOutput*>( (QAudioBufferOutput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAudioBufferOutput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioBufferOutput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferOutput*>( (QAudioBufferOutput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAudioBufferOutput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAudioBufferOutput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferOutput*>( (QAudioBufferOutput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAudioBufferOutput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAudioBufferOutput* self_cast = dynamic_cast<MiqtVirtualQAudioBufferOutput*>( (QAudioBufferOutput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QAudioBufferOutput_delete(QAudioBufferOutput* self) {
	delete self;
}

