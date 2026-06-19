#pragma once
#ifndef MIQT_KF6_KSYNTAXHIGHLIGHTING_GEN_DEFINITION_H
#define MIQT_KF6_KSYNTAXHIGHLIGHTING_GEN_DEFINITION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__Definition)
typedef KSyntaxHighlighting::Definition KSyntaxHighlighting__Definition;
#else
class KSyntaxHighlighting__Definition;
#endif
class QChar;
#else
typedef struct KSyntaxHighlighting__Definition KSyntaxHighlighting__Definition;
typedef struct QChar QChar;
#endif

KSyntaxHighlighting__Definition* KSyntaxHighlighting__Definition_new();
KSyntaxHighlighting__Definition* KSyntaxHighlighting__Definition_new2(const Definition* other);
void KSyntaxHighlighting__Definition_operatorAssign(KSyntaxHighlighting__Definition* self, const Definition* rhs);
bool KSyntaxHighlighting__Definition_operatorEqual(const KSyntaxHighlighting__Definition* self, const Definition* other);
bool KSyntaxHighlighting__Definition_operatorNotEqual(const KSyntaxHighlighting__Definition* self, const Definition* other);
bool KSyntaxHighlighting__Definition_isValid(const KSyntaxHighlighting__Definition* self);
struct miqt_string KSyntaxHighlighting__Definition_filePath(const KSyntaxHighlighting__Definition* self);
struct miqt_string KSyntaxHighlighting__Definition_name(const KSyntaxHighlighting__Definition* self);
struct miqt_array /* of struct miqt_string */  KSyntaxHighlighting__Definition_alternativeNames(const KSyntaxHighlighting__Definition* self);
struct miqt_string KSyntaxHighlighting__Definition_translatedName(const KSyntaxHighlighting__Definition* self);
struct miqt_string KSyntaxHighlighting__Definition_section(const KSyntaxHighlighting__Definition* self);
struct miqt_string KSyntaxHighlighting__Definition_translatedSection(const KSyntaxHighlighting__Definition* self);
struct miqt_array /* of struct miqt_string */  KSyntaxHighlighting__Definition_mimeTypes(const KSyntaxHighlighting__Definition* self);
struct miqt_array /* of struct miqt_string */  KSyntaxHighlighting__Definition_extensions(const KSyntaxHighlighting__Definition* self);
int KSyntaxHighlighting__Definition_version(const KSyntaxHighlighting__Definition* self);
int KSyntaxHighlighting__Definition_priority(const KSyntaxHighlighting__Definition* self);
bool KSyntaxHighlighting__Definition_isHidden(const KSyntaxHighlighting__Definition* self);
struct miqt_string KSyntaxHighlighting__Definition_style(const KSyntaxHighlighting__Definition* self);
struct miqt_string KSyntaxHighlighting__Definition_indenter(const KSyntaxHighlighting__Definition* self);
struct miqt_string KSyntaxHighlighting__Definition_author(const KSyntaxHighlighting__Definition* self);
struct miqt_string KSyntaxHighlighting__Definition_license(const KSyntaxHighlighting__Definition* self);
bool KSyntaxHighlighting__Definition_isWordDelimiter(const KSyntaxHighlighting__Definition* self, QChar* c);
bool KSyntaxHighlighting__Definition_isWordWrapDelimiter(const KSyntaxHighlighting__Definition* self, QChar* c);
bool KSyntaxHighlighting__Definition_foldingEnabled(const KSyntaxHighlighting__Definition* self);
bool KSyntaxHighlighting__Definition_indentationBasedFoldingEnabled(const KSyntaxHighlighting__Definition* self);
struct miqt_array /* of struct miqt_string */  KSyntaxHighlighting__Definition_foldingIgnoreList(const KSyntaxHighlighting__Definition* self);
struct miqt_array /* of struct miqt_string */  KSyntaxHighlighting__Definition_keywordLists(const KSyntaxHighlighting__Definition* self);
struct miqt_array /* of struct miqt_string */  KSyntaxHighlighting__Definition_keywordList(const KSyntaxHighlighting__Definition* self, struct miqt_string name);
bool KSyntaxHighlighting__Definition_setKeywordList(KSyntaxHighlighting__Definition* self, struct miqt_string name, struct miqt_array /* of struct miqt_string */  content);
struct miqt_array /* of Format */  KSyntaxHighlighting__Definition_formats(const KSyntaxHighlighting__Definition* self);
struct miqt_array /* of Definition */  KSyntaxHighlighting__Definition_includedDefinitions(const KSyntaxHighlighting__Definition* self);
struct miqt_string KSyntaxHighlighting__Definition_singleLineCommentMarker(const KSyntaxHighlighting__Definition* self);
CommentPosition KSyntaxHighlighting__Definition_singleLineCommentPosition(const KSyntaxHighlighting__Definition* self);
struct miqt_map /* tuple of struct miqt_string and struct miqt_string */  KSyntaxHighlighting__Definition_multiLineCommentMarker(const KSyntaxHighlighting__Definition* self);
struct miqt_array /* of struct miqt_map  tuple of QChar* and struct miqt_string   */  KSyntaxHighlighting__Definition_characterEncodings(const KSyntaxHighlighting__Definition* self);

void KSyntaxHighlighting__Definition_delete(KSyntaxHighlighting__Definition* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
