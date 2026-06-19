#pragma once
#ifndef MIQT_KF6_KSYNTAXHIGHLIGHTING_GEN_STATE_H
#define MIQT_KF6_KSYNTAXHIGHLIGHTING_GEN_STATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__State)
typedef KSyntaxHighlighting::State KSyntaxHighlighting__State;
#else
class KSyntaxHighlighting__State;
#endif
#else
typedef struct KSyntaxHighlighting__State KSyntaxHighlighting__State;
#endif

KSyntaxHighlighting__State* KSyntaxHighlighting__State_new();
KSyntaxHighlighting__State* KSyntaxHighlighting__State_new2(const State* other);
void KSyntaxHighlighting__State_operatorAssign(KSyntaxHighlighting__State* self, const State* rhs);
bool KSyntaxHighlighting__State_operatorEqual(const KSyntaxHighlighting__State* self, const State* other);
bool KSyntaxHighlighting__State_operatorNotEqual(const KSyntaxHighlighting__State* self, const State* other);
bool KSyntaxHighlighting__State_indentationBasedFoldingEnabled(const KSyntaxHighlighting__State* self);

void KSyntaxHighlighting__State_delete(KSyntaxHighlighting__State* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
