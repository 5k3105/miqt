#pragma once
#ifndef MIQT_KF6_KSYNTAXHIGHLIGHTING_GEN_FORMAT_H
#define MIQT_KF6_KSYNTAXHIGHLIGHTING_GEN_FORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__Format)
typedef KSyntaxHighlighting::Format KSyntaxHighlighting__Format;
#else
class KSyntaxHighlighting__Format;
#endif
class QColor;
#else
typedef struct KSyntaxHighlighting__Format KSyntaxHighlighting__Format;
typedef struct QColor QColor;
#endif

KSyntaxHighlighting__Format* KSyntaxHighlighting__Format_new();
KSyntaxHighlighting__Format* KSyntaxHighlighting__Format_new2(const Format* other);
void KSyntaxHighlighting__Format_operatorAssign(KSyntaxHighlighting__Format* self, const Format* other);
bool KSyntaxHighlighting__Format_isValid(const KSyntaxHighlighting__Format* self);
struct miqt_string KSyntaxHighlighting__Format_name(const KSyntaxHighlighting__Format* self);
int KSyntaxHighlighting__Format_id(const KSyntaxHighlighting__Format* self);
Theme::TextStyle KSyntaxHighlighting__Format_textStyle(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_isDefaultTextStyle(const KSyntaxHighlighting__Format* self, const Theme* theme);
bool KSyntaxHighlighting__Format_hasTextColor(const KSyntaxHighlighting__Format* self, const Theme* theme);
QColor* KSyntaxHighlighting__Format_textColor(const KSyntaxHighlighting__Format* self, const Theme* theme);
QColor* KSyntaxHighlighting__Format_selectedTextColor(const KSyntaxHighlighting__Format* self, const Theme* theme);
bool KSyntaxHighlighting__Format_hasBackgroundColor(const KSyntaxHighlighting__Format* self, const Theme* theme);
QColor* KSyntaxHighlighting__Format_backgroundColor(const KSyntaxHighlighting__Format* self, const Theme* theme);
QColor* KSyntaxHighlighting__Format_selectedBackgroundColor(const KSyntaxHighlighting__Format* self, const Theme* theme);
bool KSyntaxHighlighting__Format_isBold(const KSyntaxHighlighting__Format* self, const Theme* theme);
bool KSyntaxHighlighting__Format_isItalic(const KSyntaxHighlighting__Format* self, const Theme* theme);
bool KSyntaxHighlighting__Format_isUnderline(const KSyntaxHighlighting__Format* self, const Theme* theme);
bool KSyntaxHighlighting__Format_isStrikeThrough(const KSyntaxHighlighting__Format* self, const Theme* theme);
bool KSyntaxHighlighting__Format_spellCheck(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_hasBoldOverride(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_hasItalicOverride(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_hasUnderlineOverride(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_hasStrikeThroughOverride(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_hasTextColorOverride(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_hasBackgroundColorOverride(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_hasSelectedTextColorOverride(const KSyntaxHighlighting__Format* self);
bool KSyntaxHighlighting__Format_hasSelectedBackgroundColorOverride(const KSyntaxHighlighting__Format* self);

void KSyntaxHighlighting__Format_delete(KSyntaxHighlighting__Format* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
