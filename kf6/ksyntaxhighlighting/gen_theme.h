#pragma once
#ifndef MIQT_KF6_KSYNTAXHIGHLIGHTING_GEN_THEME_H
#define MIQT_KF6_KSYNTAXHIGHLIGHTING_GEN_THEME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__Theme)
typedef KSyntaxHighlighting::Theme KSyntaxHighlighting__Theme;
#else
class KSyntaxHighlighting__Theme;
#endif
#else
typedef struct KSyntaxHighlighting__Theme KSyntaxHighlighting__Theme;
#endif

KSyntaxHighlighting__Theme* KSyntaxHighlighting__Theme_new();
KSyntaxHighlighting__Theme* KSyntaxHighlighting__Theme_new2(const Theme* copy);
void KSyntaxHighlighting__Theme_operatorAssign(KSyntaxHighlighting__Theme* self, const Theme* other);
bool KSyntaxHighlighting__Theme_isValid(const KSyntaxHighlighting__Theme* self);
struct miqt_string KSyntaxHighlighting__Theme_name(const KSyntaxHighlighting__Theme* self);
struct miqt_string KSyntaxHighlighting__Theme_translatedName(const KSyntaxHighlighting__Theme* self);
bool KSyntaxHighlighting__Theme_isReadOnly(const KSyntaxHighlighting__Theme* self);
struct miqt_string KSyntaxHighlighting__Theme_filePath(const KSyntaxHighlighting__Theme* self);
unsigned int KSyntaxHighlighting__Theme_textColor(const KSyntaxHighlighting__Theme* self, TextStyle style);
unsigned int KSyntaxHighlighting__Theme_selectedTextColor(const KSyntaxHighlighting__Theme* self, TextStyle style);
unsigned int KSyntaxHighlighting__Theme_backgroundColor(const KSyntaxHighlighting__Theme* self, TextStyle style);
unsigned int KSyntaxHighlighting__Theme_selectedBackgroundColor(const KSyntaxHighlighting__Theme* self, TextStyle style);
bool KSyntaxHighlighting__Theme_isBold(const KSyntaxHighlighting__Theme* self, TextStyle style);
bool KSyntaxHighlighting__Theme_isItalic(const KSyntaxHighlighting__Theme* self, TextStyle style);
bool KSyntaxHighlighting__Theme_isUnderline(const KSyntaxHighlighting__Theme* self, TextStyle style);
bool KSyntaxHighlighting__Theme_isStrikeThrough(const KSyntaxHighlighting__Theme* self, TextStyle style);
unsigned int KSyntaxHighlighting__Theme_editorColor(const KSyntaxHighlighting__Theme* self, EditorColorRole role);

void KSyntaxHighlighting__Theme_delete(KSyntaxHighlighting__Theme* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
