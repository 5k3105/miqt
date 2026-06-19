#include <QChildEvent>
#include <QChronoTimer>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qchronotimer.h>
#include "gen_qchronotimer.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QChronoTimer_timerEvent(QChronoTimer*, intptr_t, QTimerEvent*);
bool miqt_exec_callback_QChronoTimer_event(QChronoTimer*, intptr_t, QEvent*);
bool miqt_exec_callback_QChronoTimer_eventFilter(QChronoTimer*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QChronoTimer_childEvent(QChronoTimer*, intptr_t, QChildEvent*);
void miqt_exec_callback_QChronoTimer_customEvent(QChronoTimer*, intptr_t, QEvent*);
void miqt_exec_callback_QChronoTimer_connectNotify(QChronoTimer*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QChronoTimer_disconnectNotify(QChronoTimer*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQChronoTimer final : public QChronoTimer {
public:

	MiqtVirtualQChronoTimer(): QChronoTimer() {}
	MiqtVirtualQChronoTimer(QObject* parent): QChronoTimer(parent) {}

	virtual ~MiqtVirtualQChronoTimer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__timerEvent == 0) {
			QChronoTimer::timerEvent(param1);
			return;
		}

		QTimerEvent* sigval1 = param1;
		miqt_exec_callback_QChronoTimer_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QChronoTimer_virtualbase_timerEvent(void* self, QTimerEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QChronoTimer::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QChronoTimer_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QChronoTimer_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QChronoTimer::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QChronoTimer_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QChronoTimer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QChronoTimer::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QChronoTimer_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QChronoTimer_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QChronoTimer::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QChronoTimer_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QChronoTimer_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QChronoTimer::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QChronoTimer_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QChronoTimer_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QChronoTimer::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QChronoTimer_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QChronoTimer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QChronoTimer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QChronoTimer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QChronoTimer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QChronoTimer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QChronoTimer* QChronoTimer_new() {
	return new (std::nothrow) MiqtVirtualQChronoTimer();
}

QChronoTimer* QChronoTimer_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQChronoTimer(parent);
}

void QChronoTimer_virtbase(QChronoTimer* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QChronoTimer_metaObject(const QChronoTimer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QChronoTimer_metacast(QChronoTimer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QChronoTimer_tr(const char* s) {
	QString _ret = QChronoTimer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QChronoTimer_isActive(const QChronoTimer* self) {
	return self->isActive();
}

int QChronoTimer_id(const QChronoTimer* self) {
	Qt::TimerId _ret = self->id();
	return static_cast<int>(_ret);
}

void QChronoTimer_setTimerType(QChronoTimer* self, int atype) {
	self->setTimerType(static_cast<Qt::TimerType>(atype));
}

int QChronoTimer_timerType(const QChronoTimer* self) {
	Qt::TimerType _ret = self->timerType();
	return static_cast<int>(_ret);
}

void QChronoTimer_setSingleShot(QChronoTimer* self, bool singleShot) {
	self->setSingleShot(singleShot);
}

bool QChronoTimer_isSingleShot(const QChronoTimer* self) {
	return self->isSingleShot();
}

void QChronoTimer_start(QChronoTimer* self) {
	self->start();
}

void QChronoTimer_stop(QChronoTimer* self) {
	self->stop();
}

struct miqt_string QChronoTimer_tr2(const char* s, const char* c) {
	QString _ret = QChronoTimer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QChronoTimer_tr3(const char* s, const char* c, int n) {
	QString _ret = QChronoTimer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QChronoTimer_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQChronoTimer* self_cast = dynamic_cast<MiqtVirtualQChronoTimer*>( (QChronoTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QChronoTimer_virtualbase_timerEvent(void* self, QTimerEvent* param1) {
	static_cast<MiqtVirtualQChronoTimer*>(self)->QChronoTimer::timerEvent(param1);
}

bool QChronoTimer_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQChronoTimer* self_cast = dynamic_cast<MiqtVirtualQChronoTimer*>( (QChronoTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QChronoTimer_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQChronoTimer*>(self)->QChronoTimer::event(event);
}

bool QChronoTimer_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQChronoTimer* self_cast = dynamic_cast<MiqtVirtualQChronoTimer*>( (QChronoTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QChronoTimer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQChronoTimer*>(self)->QChronoTimer::eventFilter(watched, event);
}

bool QChronoTimer_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQChronoTimer* self_cast = dynamic_cast<MiqtVirtualQChronoTimer*>( (QChronoTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QChronoTimer_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQChronoTimer*>(self)->QChronoTimer::childEvent(event);
}

bool QChronoTimer_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQChronoTimer* self_cast = dynamic_cast<MiqtVirtualQChronoTimer*>( (QChronoTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QChronoTimer_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQChronoTimer*>(self)->QChronoTimer::customEvent(event);
}

bool QChronoTimer_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQChronoTimer* self_cast = dynamic_cast<MiqtVirtualQChronoTimer*>( (QChronoTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QChronoTimer_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQChronoTimer*>(self)->QChronoTimer::connectNotify(*signal);
}

bool QChronoTimer_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQChronoTimer* self_cast = dynamic_cast<MiqtVirtualQChronoTimer*>( (QChronoTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QChronoTimer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQChronoTimer*>(self)->QChronoTimer::disconnectNotify(*signal);
}

QObject* QChronoTimer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQChronoTimer* self_cast = dynamic_cast<MiqtVirtualQChronoTimer*>( (QChronoTimer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QChronoTimer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQChronoTimer* self_cast = dynamic_cast<MiqtVirtualQChronoTimer*>( (QChronoTimer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QChronoTimer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQChronoTimer* self_cast = dynamic_cast<MiqtVirtualQChronoTimer*>( (QChronoTimer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QChronoTimer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQChronoTimer* self_cast = dynamic_cast<MiqtVirtualQChronoTimer*>( (QChronoTimer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QChronoTimer_delete(QChronoTimer* self) {
	delete self;
}

