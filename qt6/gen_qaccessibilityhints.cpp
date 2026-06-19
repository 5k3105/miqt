#include <QAccessibilityHints>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qaccessibilityhints.h>
#include "gen_qaccessibilityhints.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAccessibilityHints_contrastPreferenceChanged(intptr_t, int);
bool miqt_exec_callback_QAccessibilityHints_event(QAccessibilityHints*, intptr_t, QEvent*);
bool miqt_exec_callback_QAccessibilityHints_eventFilter(QAccessibilityHints*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAccessibilityHints_timerEvent(QAccessibilityHints*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAccessibilityHints_childEvent(QAccessibilityHints*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAccessibilityHints_customEvent(QAccessibilityHints*, intptr_t, QEvent*);
void miqt_exec_callback_QAccessibilityHints_connectNotify(QAccessibilityHints*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAccessibilityHints_disconnectNotify(QAccessibilityHints*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAccessibilityHints final : public QAccessibilityHints {
public:

	MiqtVirtualQAccessibilityHints(): QAccessibilityHints() {}
	MiqtVirtualQAccessibilityHints(QObject* parent): QAccessibilityHints(parent) {}

	virtual ~MiqtVirtualQAccessibilityHints() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAccessibilityHints::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAccessibilityHints_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QAccessibilityHints_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAccessibilityHints::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAccessibilityHints_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAccessibilityHints_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAccessibilityHints::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QAccessibilityHints_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QAccessibilityHints_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAccessibilityHints::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QAccessibilityHints_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QAccessibilityHints_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAccessibilityHints::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAccessibilityHints_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QAccessibilityHints_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAccessibilityHints::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAccessibilityHints_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QAccessibilityHints_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAccessibilityHints::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAccessibilityHints_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QAccessibilityHints_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QAccessibilityHints_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAccessibilityHints_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAccessibilityHints_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAccessibilityHints_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAccessibilityHints* QAccessibilityHints_new() {
	return new (std::nothrow) MiqtVirtualQAccessibilityHints();
}

QAccessibilityHints* QAccessibilityHints_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAccessibilityHints(parent);
}

void QAccessibilityHints_virtbase(QAccessibilityHints* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAccessibilityHints_metaObject(const QAccessibilityHints* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAccessibilityHints_metacast(QAccessibilityHints* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAccessibilityHints_tr(const char* s) {
	QString _ret = QAccessibilityHints::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAccessibilityHints_contrastPreference(const QAccessibilityHints* self) {
	Qt::ContrastPreference _ret = self->contrastPreference();
	return static_cast<int>(_ret);
}

void QAccessibilityHints_contrastPreferenceChanged(QAccessibilityHints* self, int contrastPreference) {
	self->contrastPreferenceChanged(static_cast<Qt::ContrastPreference>(contrastPreference));
}

void QAccessibilityHints_connect_contrastPreferenceChanged(QAccessibilityHints* self, intptr_t slot) {
	QAccessibilityHints::connect(self, static_cast<void (QAccessibilityHints::*)(Qt::ContrastPreference)>(&QAccessibilityHints::contrastPreferenceChanged), self, [=](Qt::ContrastPreference contrastPreference) {
		Qt::ContrastPreference contrastPreference_ret = contrastPreference;
		int sigval1 = static_cast<int>(contrastPreference_ret);
		miqt_exec_callback_QAccessibilityHints_contrastPreferenceChanged(slot, sigval1);
	});
}

struct miqt_string QAccessibilityHints_tr2(const char* s, const char* c) {
	QString _ret = QAccessibilityHints::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibilityHints_tr3(const char* s, const char* c, int n) {
	QString _ret = QAccessibilityHints::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAccessibilityHints_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAccessibilityHints* self_cast = dynamic_cast<MiqtVirtualQAccessibilityHints*>( (QAccessibilityHints*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QAccessibilityHints_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAccessibilityHints*>(self)->QAccessibilityHints::event(event);
}

bool QAccessibilityHints_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAccessibilityHints* self_cast = dynamic_cast<MiqtVirtualQAccessibilityHints*>( (QAccessibilityHints*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAccessibilityHints_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAccessibilityHints*>(self)->QAccessibilityHints::eventFilter(watched, event);
}

bool QAccessibilityHints_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAccessibilityHints* self_cast = dynamic_cast<MiqtVirtualQAccessibilityHints*>( (QAccessibilityHints*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QAccessibilityHints_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQAccessibilityHints*>(self)->QAccessibilityHints::timerEvent(event);
}

bool QAccessibilityHints_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAccessibilityHints* self_cast = dynamic_cast<MiqtVirtualQAccessibilityHints*>( (QAccessibilityHints*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QAccessibilityHints_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQAccessibilityHints*>(self)->QAccessibilityHints::childEvent(event);
}

bool QAccessibilityHints_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAccessibilityHints* self_cast = dynamic_cast<MiqtVirtualQAccessibilityHints*>( (QAccessibilityHints*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QAccessibilityHints_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAccessibilityHints*>(self)->QAccessibilityHints::customEvent(event);
}

bool QAccessibilityHints_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAccessibilityHints* self_cast = dynamic_cast<MiqtVirtualQAccessibilityHints*>( (QAccessibilityHints*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QAccessibilityHints_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAccessibilityHints*>(self)->QAccessibilityHints::connectNotify(*signal);
}

bool QAccessibilityHints_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAccessibilityHints* self_cast = dynamic_cast<MiqtVirtualQAccessibilityHints*>( (QAccessibilityHints*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAccessibilityHints_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAccessibilityHints*>(self)->QAccessibilityHints::disconnectNotify(*signal);
}

QObject* QAccessibilityHints_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAccessibilityHints* self_cast = dynamic_cast<MiqtVirtualQAccessibilityHints*>( (QAccessibilityHints*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAccessibilityHints_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAccessibilityHints* self_cast = dynamic_cast<MiqtVirtualQAccessibilityHints*>( (QAccessibilityHints*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAccessibilityHints_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAccessibilityHints* self_cast = dynamic_cast<MiqtVirtualQAccessibilityHints*>( (QAccessibilityHints*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAccessibilityHints_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAccessibilityHints* self_cast = dynamic_cast<MiqtVirtualQAccessibilityHints*>( (QAccessibilityHints*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QAccessibilityHints_delete(QAccessibilityHints* self) {
	delete self;
}

