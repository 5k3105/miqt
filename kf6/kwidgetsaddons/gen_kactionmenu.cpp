#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <QWidgetAction>
#include <kactionmenu.h>
#include "gen_kactionmenu.h"

#ifdef __cplusplus
extern "C" {
#endif

QWidget* miqt_exec_callback_KActionMenu_createWidget(KActionMenu*, intptr_t, QWidget*);
bool miqt_exec_callback_KActionMenu_event(KActionMenu*, intptr_t, QEvent*);
bool miqt_exec_callback_KActionMenu_eventFilter(KActionMenu*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_KActionMenu_deleteWidget(KActionMenu*, intptr_t, QWidget*);
void miqt_exec_callback_KActionMenu_timerEvent(KActionMenu*, intptr_t, QTimerEvent*);
void miqt_exec_callback_KActionMenu_childEvent(KActionMenu*, intptr_t, QChildEvent*);
void miqt_exec_callback_KActionMenu_customEvent(KActionMenu*, intptr_t, QEvent*);
void miqt_exec_callback_KActionMenu_connectNotify(KActionMenu*, intptr_t, QMetaMethod*);
void miqt_exec_callback_KActionMenu_disconnectNotify(KActionMenu*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualKActionMenu final : public KActionMenu {
public:

	MiqtVirtualKActionMenu(QObject* parent): KActionMenu(parent) {}
	MiqtVirtualKActionMenu(const QString& text, QObject* parent): KActionMenu(text, parent) {}
	MiqtVirtualKActionMenu(const QIcon& icon, const QString& text, QObject* parent): KActionMenu(icon, text, parent) {}

	virtual ~MiqtVirtualKActionMenu() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createWidget(QWidget* parent) override {
		if (handle__createWidget == 0) {
			return KActionMenu::createWidget(parent);
		}

		QWidget* sigval1 = parent;
		QWidget* callback_return_value = miqt_exec_callback_KActionMenu_createWidget(this, handle__createWidget, sigval1);
		return callback_return_value;
	}

	friend QWidget* KActionMenu_virtualbase_createWidget(void* self, QWidget* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return KActionMenu::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_KActionMenu_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool KActionMenu_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return KActionMenu::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_KActionMenu_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool KActionMenu_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__deleteWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual void deleteWidget(QWidget* widget) override {
		if (handle__deleteWidget == 0) {
			KActionMenu::deleteWidget(widget);
			return;
		}

		QWidget* sigval1 = widget;
		miqt_exec_callback_KActionMenu_deleteWidget(this, handle__deleteWidget, sigval1);

	}

	friend void KActionMenu_virtualbase_deleteWidget(void* self, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			KActionMenu::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_KActionMenu_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void KActionMenu_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			KActionMenu::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_KActionMenu_childEvent(this, handle__childEvent, sigval1);

	}

	friend void KActionMenu_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			KActionMenu::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_KActionMenu_customEvent(this, handle__customEvent, sigval1);

	}

	friend void KActionMenu_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			KActionMenu::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_KActionMenu_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void KActionMenu_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			KActionMenu::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_KActionMenu_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void KActionMenu_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend struct miqt_array /* of QWidget* */  KActionMenu_protectedbase_createdWidgets(bool* _dynamic_cast_ok, const void* self);
	friend QObject* KActionMenu_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int KActionMenu_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int KActionMenu_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool KActionMenu_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

KActionMenu* KActionMenu_new(QObject* parent) {
	return new (std::nothrow) MiqtVirtualKActionMenu(parent);
}

KActionMenu* KActionMenu_new2(struct miqt_string text, QObject* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualKActionMenu(text_QString, parent);
}

KActionMenu* KActionMenu_new3(QIcon* icon, struct miqt_string text, QObject* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualKActionMenu(*icon, text_QString, parent);
}

void KActionMenu_virtbase(KActionMenu* src, QWidgetAction** outptr_QWidgetAction) {
	*outptr_QWidgetAction = static_cast<QWidgetAction*>(src);
}

QMetaObject* KActionMenu_metaObject(const KActionMenu* self) {
	return (QMetaObject*) self->metaObject();
}

void* KActionMenu_metacast(KActionMenu* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string KActionMenu_tr(const char* s) {
	QString _ret = KActionMenu::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void KActionMenu_addAction(KActionMenu* self, QAction* action) {
	self->addAction(action);
}

QAction* KActionMenu_addSeparator(KActionMenu* self) {
	return self->addSeparator();
}

void KActionMenu_insertAction(KActionMenu* self, QAction* before, QAction* action) {
	self->insertAction(before, action);
}

QAction* KActionMenu_insertSeparator(KActionMenu* self, QAction* before) {
	return self->insertSeparator(before);
}

void KActionMenu_removeAction(KActionMenu* self, QAction* action) {
	self->removeAction(action);
}

int KActionMenu_popupMode(const KActionMenu* self) {
	QToolButton::ToolButtonPopupMode _ret = self->popupMode();
	return static_cast<int>(_ret);
}

void KActionMenu_setPopupMode(KActionMenu* self, int popupMode) {
	self->setPopupMode(static_cast<QToolButton::ToolButtonPopupMode>(popupMode));
}

QWidget* KActionMenu_createWidget(KActionMenu* self, QWidget* parent) {
	return self->createWidget(parent);
}

struct miqt_string KActionMenu_tr2(const char* s, const char* c) {
	QString _ret = KActionMenu::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string KActionMenu_tr3(const char* s, const char* c, int n) {
	QString _ret = KActionMenu::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool KActionMenu_override_virtual_createWidget(void* self, intptr_t slot) {
	MiqtVirtualKActionMenu* self_cast = dynamic_cast<MiqtVirtualKActionMenu*>( (KActionMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createWidget = slot;
	return true;
}

QWidget* KActionMenu_virtualbase_createWidget(void* self, QWidget* parent) {
	return static_cast<MiqtVirtualKActionMenu*>(self)->KActionMenu::createWidget(parent);
}

bool KActionMenu_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualKActionMenu* self_cast = dynamic_cast<MiqtVirtualKActionMenu*>( (KActionMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool KActionMenu_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualKActionMenu*>(self)->KActionMenu::event(param1);
}

bool KActionMenu_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualKActionMenu* self_cast = dynamic_cast<MiqtVirtualKActionMenu*>( (KActionMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool KActionMenu_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualKActionMenu*>(self)->KActionMenu::eventFilter(param1, param2);
}

bool KActionMenu_override_virtual_deleteWidget(void* self, intptr_t slot) {
	MiqtVirtualKActionMenu* self_cast = dynamic_cast<MiqtVirtualKActionMenu*>( (KActionMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__deleteWidget = slot;
	return true;
}

void KActionMenu_virtualbase_deleteWidget(void* self, QWidget* widget) {
	static_cast<MiqtVirtualKActionMenu*>(self)->KActionMenu::deleteWidget(widget);
}

bool KActionMenu_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualKActionMenu* self_cast = dynamic_cast<MiqtVirtualKActionMenu*>( (KActionMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void KActionMenu_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualKActionMenu*>(self)->KActionMenu::timerEvent(event);
}

bool KActionMenu_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualKActionMenu* self_cast = dynamic_cast<MiqtVirtualKActionMenu*>( (KActionMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void KActionMenu_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualKActionMenu*>(self)->KActionMenu::childEvent(event);
}

bool KActionMenu_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualKActionMenu* self_cast = dynamic_cast<MiqtVirtualKActionMenu*>( (KActionMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void KActionMenu_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualKActionMenu*>(self)->KActionMenu::customEvent(event);
}

bool KActionMenu_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualKActionMenu* self_cast = dynamic_cast<MiqtVirtualKActionMenu*>( (KActionMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void KActionMenu_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualKActionMenu*>(self)->KActionMenu::connectNotify(*signal);
}

bool KActionMenu_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualKActionMenu* self_cast = dynamic_cast<MiqtVirtualKActionMenu*>( (KActionMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void KActionMenu_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualKActionMenu*>(self)->KActionMenu::disconnectNotify(*signal);
}

struct miqt_array /* of QWidget* */  KActionMenu_protectedbase_createdWidgets(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKActionMenu* self_cast = dynamic_cast<MiqtVirtualKActionMenu*>( (KActionMenu*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}

	*_dynamic_cast_ok = true;
	QList<QWidget *> _ret = self_cast->createdWidgets();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QObject* KActionMenu_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKActionMenu* self_cast = dynamic_cast<MiqtVirtualKActionMenu*>( (KActionMenu*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int KActionMenu_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKActionMenu* self_cast = dynamic_cast<MiqtVirtualKActionMenu*>( (KActionMenu*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int KActionMenu_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualKActionMenu* self_cast = dynamic_cast<MiqtVirtualKActionMenu*>( (KActionMenu*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool KActionMenu_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualKActionMenu* self_cast = dynamic_cast<MiqtVirtualKActionMenu*>( (KActionMenu*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void KActionMenu_delete(KActionMenu* self) {
	delete self;
}

