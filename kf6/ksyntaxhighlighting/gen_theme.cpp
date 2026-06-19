#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__Theme
#include <QString>
#include <QByteArray>
#include <cstring>
#include <theme.h>
#include "gen_theme.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

KSyntaxHighlighting__Theme* KSyntaxHighlighting__Theme_new() {
	return new (std::nothrow) KSyntaxHighlighting::Theme();
}

KSyntaxHighlighting__Theme* KSyntaxHighlighting__Theme_new2(const Theme* copy) {
	return new (std::nothrow) KSyntaxHighlighting::Theme(*copy);
}

void KSyntaxHighlighting__Theme_operatorAssign(KSyntaxHighlighting__Theme* self, const Theme* other) {
	self->operator=(*other);
}

bool KSyntaxHighlighting__Theme_isValid(const KSyntaxHighlighting__Theme* self) {
	return self->isValid();
}

struct miqt_string KSyntaxHighlighting__Theme_name(const KSyntaxHighlighting__Theme* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string KSyntaxHighlighting__Theme_translatedName(const KSyntaxHighlighting__Theme* self) {
	QString _ret = self->translatedName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool KSyntaxHighlighting__Theme_isReadOnly(const KSyntaxHighlighting__Theme* self) {
	return self->isReadOnly();
}

struct miqt_string KSyntaxHighlighting__Theme_filePath(const KSyntaxHighlighting__Theme* self) {
	QString _ret = self->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int KSyntaxHighlighting__Theme_textColor(const KSyntaxHighlighting__Theme* self, TextStyle style) {
	QRgb _ret = self->textColor(style);
	return static_cast<unsigned int>(_ret);
}

unsigned int KSyntaxHighlighting__Theme_selectedTextColor(const KSyntaxHighlighting__Theme* self, TextStyle style) {
	QRgb _ret = self->selectedTextColor(style);
	return static_cast<unsigned int>(_ret);
}

unsigned int KSyntaxHighlighting__Theme_backgroundColor(const KSyntaxHighlighting__Theme* self, TextStyle style) {
	QRgb _ret = self->backgroundColor(style);
	return static_cast<unsigned int>(_ret);
}

unsigned int KSyntaxHighlighting__Theme_selectedBackgroundColor(const KSyntaxHighlighting__Theme* self, TextStyle style) {
	QRgb _ret = self->selectedBackgroundColor(style);
	return static_cast<unsigned int>(_ret);
}

bool KSyntaxHighlighting__Theme_isBold(const KSyntaxHighlighting__Theme* self, TextStyle style) {
	return self->isBold(style);
}

bool KSyntaxHighlighting__Theme_isItalic(const KSyntaxHighlighting__Theme* self, TextStyle style) {
	return self->isItalic(style);
}

bool KSyntaxHighlighting__Theme_isUnderline(const KSyntaxHighlighting__Theme* self, TextStyle style) {
	return self->isUnderline(style);
}

bool KSyntaxHighlighting__Theme_isStrikeThrough(const KSyntaxHighlighting__Theme* self, TextStyle style) {
	return self->isStrikeThrough(style);
}

unsigned int KSyntaxHighlighting__Theme_editorColor(const KSyntaxHighlighting__Theme* self, EditorColorRole role) {
	QRgb _ret = self->editorColor(role);
	return static_cast<unsigned int>(_ret);
}

void KSyntaxHighlighting__Theme_delete(KSyntaxHighlighting__Theme* self) {
	delete self;
}

