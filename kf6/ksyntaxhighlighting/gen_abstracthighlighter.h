#pragma once
#ifndef MIQT_KF6_KSYNTAXHIGHLIGHTING_GEN_ABSTRACTHIGHLIGHTER_H
#define MIQT_KF6_KSYNTAXHIGHLIGHTING_GEN_ABSTRACTHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__AbstractHighlighter)
typedef KSyntaxHighlighting::AbstractHighlighter KSyntaxHighlighting__AbstractHighlighter;
#else
class KSyntaxHighlighting__AbstractHighlighter;
#endif
#else
typedef struct KSyntaxHighlighting__AbstractHighlighter KSyntaxHighlighting__AbstractHighlighter;
#endif

Definition KSyntaxHighlighting__AbstractHighlighter_definition(const KSyntaxHighlighting__AbstractHighlighter* self);
void KSyntaxHighlighting__AbstractHighlighter_setDefinition(KSyntaxHighlighting__AbstractHighlighter* self, const Definition* def);
Theme KSyntaxHighlighting__AbstractHighlighter_theme(const KSyntaxHighlighting__AbstractHighlighter* self);
void KSyntaxHighlighting__AbstractHighlighter_setTheme(KSyntaxHighlighting__AbstractHighlighter* self, const Theme* theme);
void KSyntaxHighlighting__AbstractHighlighter_applyFormat(KSyntaxHighlighting__AbstractHighlighter* self, int offset, int length, const Format* format);
void KSyntaxHighlighting__AbstractHighlighter_applyFolding(KSyntaxHighlighting__AbstractHighlighter* self, int offset, int length, FoldingRegion region);

void KSyntaxHighlighting__AbstractHighlighter_delete(KSyntaxHighlighting__AbstractHighlighter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
