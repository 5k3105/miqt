#pragma once
#ifndef MIQT_KF6_KSYNTAXHIGHLIGHTING_GEN_FOLDINGREGION_H
#define MIQT_KF6_KSYNTAXHIGHLIGHTING_GEN_FOLDINGREGION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__FoldingRegion)
typedef KSyntaxHighlighting::FoldingRegion KSyntaxHighlighting__FoldingRegion;
#else
class KSyntaxHighlighting__FoldingRegion;
#endif
#else
typedef struct KSyntaxHighlighting__FoldingRegion KSyntaxHighlighting__FoldingRegion;
#endif

KSyntaxHighlighting__FoldingRegion* KSyntaxHighlighting__FoldingRegion_new();
KSyntaxHighlighting__FoldingRegion* KSyntaxHighlighting__FoldingRegion_new2(const FoldingRegion* param1);
bool KSyntaxHighlighting__FoldingRegion_operatorEqual(const KSyntaxHighlighting__FoldingRegion* self, const FoldingRegion* other);
bool KSyntaxHighlighting__FoldingRegion_isValid(const KSyntaxHighlighting__FoldingRegion* self);
int KSyntaxHighlighting__FoldingRegion_id(const KSyntaxHighlighting__FoldingRegion* self);
Type KSyntaxHighlighting__FoldingRegion_type(const KSyntaxHighlighting__FoldingRegion* self);
FoldingRegion KSyntaxHighlighting__FoldingRegion_sibling(const KSyntaxHighlighting__FoldingRegion* self);

void KSyntaxHighlighting__FoldingRegion_delete(KSyntaxHighlighting__FoldingRegion* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
