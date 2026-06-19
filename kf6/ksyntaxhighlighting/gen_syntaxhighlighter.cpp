#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__SyntaxHighlighter
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSyntaxHighlighter>
#include <QTextBlock>
#include <QTextBlockUserData>
#include <QTextCharFormat>
#include <QTextDocument>
#include <QTimerEvent>
#include <syntaxhighlighter.h>
#include "gen_syntaxhighlighter.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_setDefinition(KSyntaxHighlighting__SyntaxHighlighter*, intptr_t, const Definition*);
void miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_setTheme(KSyntaxHighlighting__SyntaxHighlighter*, intptr_t, const Theme*);
void miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_highlightBlock(KSyntaxHighlighting__SyntaxHighlighter*, intptr_t, struct miqt_string);
void miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_applyFormat(KSyntaxHighlighting__SyntaxHighlighter*, intptr_t, int, int, const Format*);
void miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_applyFolding(KSyntaxHighlighting__SyntaxHighlighter*, intptr_t, int, int, FoldingRegion);
bool miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_event(KSyntaxHighlighting__SyntaxHighlighter*, intptr_t, QEvent*);
bool miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_eventFilter(KSyntaxHighlighting__SyntaxHighlighter*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_timerEvent(KSyntaxHighlighting__SyntaxHighlighter*, intptr_t, QTimerEvent*);
void miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_childEvent(KSyntaxHighlighting__SyntaxHighlighter*, intptr_t, QChildEvent*);
void miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_customEvent(KSyntaxHighlighting__SyntaxHighlighter*, intptr_t, QEvent*);
void miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_connectNotify(KSyntaxHighlighting__SyntaxHighlighter*, intptr_t, QMetaMethod*);
void miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_disconnectNotify(KSyntaxHighlighting__SyntaxHighlighter*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualKSyntaxHighlightingSyntaxHighlighter final : public KSyntaxHighlighting::SyntaxHighlighter {
public:

	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter(): KSyntaxHighlighting::SyntaxHighlighter() {}
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter(QTextDocument* document): KSyntaxHighlighting::SyntaxHighlighter(document) {}
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter(QObject* parent): KSyntaxHighlighting::SyntaxHighlighter(parent) {}

	virtual ~MiqtVirtualKSyntaxHighlightingSyntaxHighlighter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setDefinition = 0;

	// Subclass to allow providing a Go implementation
	virtual void setDefinition(const Definition& def) override {
		if (handle__setDefinition == 0) {
			KSyntaxHighlighting::SyntaxHighlighter::setDefinition(def);
			return;
		}

		const Definition* sigval1 = (const Definition*) def;
		miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_setDefinition(this, handle__setDefinition, sigval1);

	}

	friend void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_setDefinition(void* self, const Definition* def);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setTheme = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTheme(const Theme& theme) override {
		if (handle__setTheme == 0) {
			KSyntaxHighlighting::SyntaxHighlighter::setTheme(theme);
			return;
		}

		const Theme* sigval1 = (const Theme*) theme;
		miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_setTheme(this, handle__setTheme, sigval1);

	}

	friend void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_setTheme(void* self, const Theme* theme);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__highlightBlock = 0;

	// Subclass to allow providing a Go implementation
	virtual void highlightBlock(const QString& text) override {
		if (handle__highlightBlock == 0) {
			KSyntaxHighlighting::SyntaxHighlighter::highlightBlock(text);
			return;
		}

		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_highlightBlock(this, handle__highlightBlock, sigval1);

	}

	friend void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_highlightBlock(void* self, struct miqt_string text);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__applyFormat = 0;

	// Subclass to allow providing a Go implementation
	virtual void applyFormat(int offset, int length, const Format& format) override {
		if (handle__applyFormat == 0) {
			KSyntaxHighlighting::SyntaxHighlighter::applyFormat(offset, length, format);
			return;
		}

		int sigval1 = offset;
		int sigval2 = length;
		const Format* sigval3 = (const Format*) format;
		miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_applyFormat(this, handle__applyFormat, sigval1, sigval2, sigval3);

	}

	friend void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_applyFormat(void* self, int offset, int length, const Format* format);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__applyFolding = 0;

	// Subclass to allow providing a Go implementation
	virtual void applyFolding(int offset, int length, FoldingRegion region) override {
		if (handle__applyFolding == 0) {
			KSyntaxHighlighting::SyntaxHighlighter::applyFolding(offset, length, region);
			return;
		}

		int sigval1 = offset;
		int sigval2 = length;
		FoldingRegion sigval3 = region;
		miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_applyFolding(this, handle__applyFolding, sigval1, sigval2, sigval3);

	}

	friend void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_applyFolding(void* self, int offset, int length, FoldingRegion region);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return KSyntaxHighlighting::SyntaxHighlighter::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool KSyntaxHighlighting__SyntaxHighlighter_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return KSyntaxHighlighting::SyntaxHighlighter::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool KSyntaxHighlighting__SyntaxHighlighter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			KSyntaxHighlighting::SyntaxHighlighter::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			KSyntaxHighlighting::SyntaxHighlighter::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_childEvent(this, handle__childEvent, sigval1);

	}

	friend void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			KSyntaxHighlighting::SyntaxHighlighter::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_customEvent(this, handle__customEvent, sigval1);

	}

	friend void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			KSyntaxHighlighting::SyntaxHighlighter::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			KSyntaxHighlighting::SyntaxHighlighter::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_KSyntaxHighlighting__SyntaxHighlighter_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void KSyntaxHighlighting__SyntaxHighlighter_protectedbase_setFormat(bool* _dynamic_cast_ok, void* self, int start, int count, QTextCharFormat* format);
	friend QTextCharFormat* KSyntaxHighlighting__SyntaxHighlighter_protectedbase_format(bool* _dynamic_cast_ok, const void* self, int pos);
	friend int KSyntaxHighlighting__SyntaxHighlighter_protectedbase_previousBlockState(bool* _dynamic_cast_ok, const void* self);
	friend int KSyntaxHighlighting__SyntaxHighlighter_protectedbase_currentBlockState(bool* _dynamic_cast_ok, const void* self);
	friend void KSyntaxHighlighting__SyntaxHighlighter_protectedbase_setCurrentBlockState(bool* _dynamic_cast_ok, void* self, int newState);
	friend void KSyntaxHighlighting__SyntaxHighlighter_protectedbase_setCurrentBlockUserData(bool* _dynamic_cast_ok, void* self, QTextBlockUserData* data);
	friend QTextBlockUserData* KSyntaxHighlighting__SyntaxHighlighter_protectedbase_currentBlockUserData(bool* _dynamic_cast_ok, const void* self);
	friend QTextBlock* KSyntaxHighlighting__SyntaxHighlighter_protectedbase_currentBlock(bool* _dynamic_cast_ok, const void* self);
	friend QObject* KSyntaxHighlighting__SyntaxHighlighter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int KSyntaxHighlighting__SyntaxHighlighter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int KSyntaxHighlighting__SyntaxHighlighter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool KSyntaxHighlighting__SyntaxHighlighter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

KSyntaxHighlighting__SyntaxHighlighter* KSyntaxHighlighting__SyntaxHighlighter_new() {
	return new (std::nothrow) MiqtVirtualKSyntaxHighlightingSyntaxHighlighter();
}

KSyntaxHighlighting__SyntaxHighlighter* KSyntaxHighlighting__SyntaxHighlighter_new2(QTextDocument* document) {
	return new (std::nothrow) MiqtVirtualKSyntaxHighlightingSyntaxHighlighter(document);
}

KSyntaxHighlighting__SyntaxHighlighter* KSyntaxHighlighting__SyntaxHighlighter_new3(QObject* parent) {
	return new (std::nothrow) MiqtVirtualKSyntaxHighlightingSyntaxHighlighter(parent);
}

void KSyntaxHighlighting__SyntaxHighlighter_virtbase(KSyntaxHighlighting__SyntaxHighlighter* src, QSyntaxHighlighter** outptr_QSyntaxHighlighter) {
	*outptr_QSyntaxHighlighter = static_cast<QSyntaxHighlighter*>(src);
}

QMetaObject* KSyntaxHighlighting__SyntaxHighlighter_metaObject(const KSyntaxHighlighting__SyntaxHighlighter* self) {
	return (QMetaObject*) self->metaObject();
}

void* KSyntaxHighlighting__SyntaxHighlighter_metacast(KSyntaxHighlighting__SyntaxHighlighter* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string KSyntaxHighlighting__SyntaxHighlighter_tr(const char* s) {
	QString _ret = KSyntaxHighlighting::SyntaxHighlighter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void KSyntaxHighlighting__SyntaxHighlighter_setDefinition(KSyntaxHighlighting__SyntaxHighlighter* self, const Definition* def) {
	self->setDefinition(*def);
}

void KSyntaxHighlighting__SyntaxHighlighter_setTheme(KSyntaxHighlighting__SyntaxHighlighter* self, const Theme* theme) {
	self->setTheme(*theme);
}

bool KSyntaxHighlighting__SyntaxHighlighter_startsFoldingRegion(const KSyntaxHighlighting__SyntaxHighlighter* self, QTextBlock* startBlock) {
	return self->startsFoldingRegion(*startBlock);
}

QTextBlock* KSyntaxHighlighting__SyntaxHighlighter_findFoldingRegionEnd(const KSyntaxHighlighting__SyntaxHighlighter* self, QTextBlock* startBlock) {
	return new QTextBlock(self->findFoldingRegionEnd(*startBlock));
}

struct miqt_string KSyntaxHighlighting__SyntaxHighlighter_tr2(const char* s, const char* c) {
	QString _ret = KSyntaxHighlighting::SyntaxHighlighter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string KSyntaxHighlighting__SyntaxHighlighter_tr3(const char* s, const char* c, int n) {
	QString _ret = KSyntaxHighlighting::SyntaxHighlighter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_setDefinition(void* self, intptr_t slot) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setDefinition = slot;
	return true;
}

void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_setDefinition(void* self, const Definition* def) {
	static_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>(self)->KSyntaxHighlighting::SyntaxHighlighter::setDefinition(*def);
}

bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_setTheme(void* self, intptr_t slot) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setTheme = slot;
	return true;
}

void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_setTheme(void* self, const Theme* theme) {
	static_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>(self)->KSyntaxHighlighting::SyntaxHighlighter::setTheme(*theme);
}

bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_highlightBlock(void* self, intptr_t slot) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__highlightBlock = slot;
	return true;
}

void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_highlightBlock(void* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	static_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>(self)->KSyntaxHighlighting::SyntaxHighlighter::highlightBlock(text_QString);
}

bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_applyFormat(void* self, intptr_t slot) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__applyFormat = slot;
	return true;
}

void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_applyFormat(void* self, int offset, int length, const Format* format) {
	static_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>(self)->KSyntaxHighlighting::SyntaxHighlighter::applyFormat(static_cast<int>(offset), static_cast<int>(length), *format);
}

bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_applyFolding(void* self, intptr_t slot) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__applyFolding = slot;
	return true;
}

void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_applyFolding(void* self, int offset, int length, FoldingRegion region) {
	static_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>(self)->KSyntaxHighlighting::SyntaxHighlighter::applyFolding(static_cast<int>(offset), static_cast<int>(length), region);
}

bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool KSyntaxHighlighting__SyntaxHighlighter_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>(self)->KSyntaxHighlighting::SyntaxHighlighter::event(event);
}

bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool KSyntaxHighlighting__SyntaxHighlighter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>(self)->KSyntaxHighlighting::SyntaxHighlighter::eventFilter(watched, event);
}

bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>(self)->KSyntaxHighlighting::SyntaxHighlighter::timerEvent(event);
}

bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>(self)->KSyntaxHighlighting::SyntaxHighlighter::childEvent(event);
}

bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>(self)->KSyntaxHighlighting::SyntaxHighlighter::customEvent(event);
}

bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>(self)->KSyntaxHighlighting::SyntaxHighlighter::connectNotify(*signal);
}

bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>(self)->KSyntaxHighlighting::SyntaxHighlighter::disconnectNotify(*signal);
}

void KSyntaxHighlighting__SyntaxHighlighter_protectedbase_setFormat(bool* _dynamic_cast_ok, void* self, int start, int count, QTextCharFormat* format) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
}

QTextCharFormat* KSyntaxHighlighting__SyntaxHighlighter_protectedbase_format(bool* _dynamic_cast_ok, const void* self, int pos) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QTextCharFormat(self_cast->format(static_cast<int>(pos)));
}

int KSyntaxHighlighting__SyntaxHighlighter_protectedbase_previousBlockState(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->previousBlockState();
}

int KSyntaxHighlighting__SyntaxHighlighter_protectedbase_currentBlockState(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->currentBlockState();
}

void KSyntaxHighlighting__SyntaxHighlighter_protectedbase_setCurrentBlockState(bool* _dynamic_cast_ok, void* self, int newState) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setCurrentBlockState(static_cast<int>(newState));
}

void KSyntaxHighlighting__SyntaxHighlighter_protectedbase_setCurrentBlockUserData(bool* _dynamic_cast_ok, void* self, QTextBlockUserData* data) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setCurrentBlockUserData(data);
}

QTextBlockUserData* KSyntaxHighlighting__SyntaxHighlighter_protectedbase_currentBlockUserData(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->currentBlockUserData();
}

QTextBlock* KSyntaxHighlighting__SyntaxHighlighter_protectedbase_currentBlock(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QTextBlock(self_cast->currentBlock());
}

QObject* KSyntaxHighlighting__SyntaxHighlighter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int KSyntaxHighlighting__SyntaxHighlighter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int KSyntaxHighlighting__SyntaxHighlighter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool KSyntaxHighlighting__SyntaxHighlighter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualKSyntaxHighlightingSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualKSyntaxHighlightingSyntaxHighlighter*>( (KSyntaxHighlighting::SyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void KSyntaxHighlighting__SyntaxHighlighter_delete(KSyntaxHighlighting__SyntaxHighlighter* self) {
	delete self;
}

