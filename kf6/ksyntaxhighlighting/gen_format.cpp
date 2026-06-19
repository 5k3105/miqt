#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__Format
#include <QColor>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <format.h>
#include "gen_format.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

KSyntaxHighlighting__Format* KSyntaxHighlighting__Format_new() {
	return new (std::nothrow) KSyntaxHighlighting::Format();
}

KSyntaxHighlighting__Format* KSyntaxHighlighting__Format_new2(const Format* other) {
	return new (std::nothrow) KSyntaxHighlighting::Format(*other);
}

void KSyntaxHighlighting__Format_operatorAssign(KSyntaxHighlighting__Format* self, const Format* other) {
	self->operator=(*other);
}

bool KSyntaxHighlighting__Format_isValid(const KSyntaxHighlighting__Format* self) {
	return self->isValid();
}

struct miqt_string KSyntaxHighlighting__Format_name(const KSyntaxHighlighting__Format* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int KSyntaxHighlighting__Format_id(const KSyntaxHighlighting__Format* self) {
	return self->id();
}

Theme::TextStyle KSyntaxHighlighting__Format_textStyle(const KSyntaxHighlighting__Format* self) {
	return self->textStyle();
}

bool KSyntaxHighlighting__Format_isDefaultTextStyle(const KSyntaxHighlighting__Format* self, const Theme* theme) {
	return self->isDefaultTextStyle(*theme);
}

bool KSyntaxHighlighting__Format_hasTextColor(const KSyntaxHighlighting__Format* self, const Theme* theme) {
	return self->hasTextColor(*theme);
}

QColor* KSyntaxHighlighting__Format_textColor(const KSyntaxHighlighting__Format* self, const Theme* theme) {
	return new QColor(self->textColor(*theme));
}

QColor* KSyntaxHighlighting__Format_selectedTextColor(const KSyntaxHighlighting__Format* self, const Theme* theme) {
	return new QColor(self->selectedTextColor(*theme));
}

bool KSyntaxHighlighting__Format_hasBackgroundColor(const KSyntaxHighlighting__Format* self, const Theme* theme) {
	return self->hasBackgroundColor(*theme);
}

QColor* KSyntaxHighlighting__Format_backgroundColor(const KSyntaxHighlighting__Format* self, const Theme* theme) {
	return new QColor(self->backgroundColor(*theme));
}

QColor* KSyntaxHighlighting__Format_selectedBackgroundColor(const KSyntaxHighlighting__Format* self, const Theme* theme) {
	return new QColor(self->selectedBackgroundColor(*theme));
}

bool KSyntaxHighlighting__Format_isBold(const KSyntaxHighlighting__Format* self, const Theme* theme) {
	return self->isBold(*theme);
}

bool KSyntaxHighlighting__Format_isItalic(const KSyntaxHighlighting__Format* self, const Theme* theme) {
	return self->isItalic(*theme);
}

bool KSyntaxHighlighting__Format_isUnderline(const KSyntaxHighlighting__Format* self, const Theme* theme) {
	return self->isUnderline(*theme);
}

bool KSyntaxHighlighting__Format_isStrikeThrough(const KSyntaxHighlighting__Format* self, const Theme* theme) {
	return self->isStrikeThrough(*theme);
}

bool KSyntaxHighlighting__Format_spellCheck(const KSyntaxHighlighting__Format* self) {
	return self->spellCheck();
}

bool KSyntaxHighlighting__Format_hasBoldOverride(const KSyntaxHighlighting__Format* self) {
	return self->hasBoldOverride();
}

bool KSyntaxHighlighting__Format_hasItalicOverride(const KSyntaxHighlighting__Format* self) {
	return self->hasItalicOverride();
}

bool KSyntaxHighlighting__Format_hasUnderlineOverride(const KSyntaxHighlighting__Format* self) {
	return self->hasUnderlineOverride();
}

bool KSyntaxHighlighting__Format_hasStrikeThroughOverride(const KSyntaxHighlighting__Format* self) {
	return self->hasStrikeThroughOverride();
}

bool KSyntaxHighlighting__Format_hasTextColorOverride(const KSyntaxHighlighting__Format* self) {
	return self->hasTextColorOverride();
}

bool KSyntaxHighlighting__Format_hasBackgroundColorOverride(const KSyntaxHighlighting__Format* self) {
	return self->hasBackgroundColorOverride();
}

bool KSyntaxHighlighting__Format_hasSelectedTextColorOverride(const KSyntaxHighlighting__Format* self) {
	return self->hasSelectedTextColorOverride();
}

bool KSyntaxHighlighting__Format_hasSelectedBackgroundColorOverride(const KSyntaxHighlighting__Format* self) {
	return self->hasSelectedBackgroundColorOverride();
}

void KSyntaxHighlighting__Format_delete(KSyntaxHighlighting__Format* self) {
	delete self;
}

