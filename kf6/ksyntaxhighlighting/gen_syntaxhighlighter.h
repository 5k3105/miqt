#pragma once
#ifndef MIQT_KF6_KSYNTAXHIGHLIGHTING_GEN_SYNTAXHIGHLIGHTER_H
#define MIQT_KF6_KSYNTAXHIGHLIGHTING_GEN_SYNTAXHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__SyntaxHighlighter)
typedef KSyntaxHighlighting::SyntaxHighlighter KSyntaxHighlighting__SyntaxHighlighter;
#else
class KSyntaxHighlighting__SyntaxHighlighter;
#endif
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSyntaxHighlighter;
class QTextBlock;
class QTextBlockUserData;
class QTextCharFormat;
class QTextDocument;
class QTimerEvent;
#else
typedef struct KSyntaxHighlighting__SyntaxHighlighter KSyntaxHighlighting__SyntaxHighlighter;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSyntaxHighlighter QSyntaxHighlighter;
typedef struct QTextBlock QTextBlock;
typedef struct QTextBlockUserData QTextBlockUserData;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextDocument QTextDocument;
typedef struct QTimerEvent QTimerEvent;
#endif

KSyntaxHighlighting__SyntaxHighlighter* KSyntaxHighlighting__SyntaxHighlighter_new();
KSyntaxHighlighting__SyntaxHighlighter* KSyntaxHighlighting__SyntaxHighlighter_new2(QTextDocument* document);
KSyntaxHighlighting__SyntaxHighlighter* KSyntaxHighlighting__SyntaxHighlighter_new3(QObject* parent);
void KSyntaxHighlighting__SyntaxHighlighter_virtbase(KSyntaxHighlighting__SyntaxHighlighter* src, QSyntaxHighlighter** outptr_QSyntaxHighlighter);
QMetaObject* KSyntaxHighlighting__SyntaxHighlighter_metaObject(const KSyntaxHighlighting__SyntaxHighlighter* self);
void* KSyntaxHighlighting__SyntaxHighlighter_metacast(KSyntaxHighlighting__SyntaxHighlighter* self, const char* param1);
struct miqt_string KSyntaxHighlighting__SyntaxHighlighter_tr(const char* s);
void KSyntaxHighlighting__SyntaxHighlighter_setDefinition(KSyntaxHighlighting__SyntaxHighlighter* self, const Definition* def);
void KSyntaxHighlighting__SyntaxHighlighter_setTheme(KSyntaxHighlighting__SyntaxHighlighter* self, const Theme* theme);
bool KSyntaxHighlighting__SyntaxHighlighter_startsFoldingRegion(const KSyntaxHighlighting__SyntaxHighlighter* self, QTextBlock* startBlock);
QTextBlock* KSyntaxHighlighting__SyntaxHighlighter_findFoldingRegionEnd(const KSyntaxHighlighting__SyntaxHighlighter* self, QTextBlock* startBlock);
void KSyntaxHighlighting__SyntaxHighlighter_highlightBlock(KSyntaxHighlighting__SyntaxHighlighter* self, struct miqt_string text);
void KSyntaxHighlighting__SyntaxHighlighter_applyFormat(KSyntaxHighlighting__SyntaxHighlighter* self, int offset, int length, const Format* format);
void KSyntaxHighlighting__SyntaxHighlighter_applyFolding(KSyntaxHighlighting__SyntaxHighlighter* self, int offset, int length, FoldingRegion region);
struct miqt_string KSyntaxHighlighting__SyntaxHighlighter_tr2(const char* s, const char* c);
struct miqt_string KSyntaxHighlighting__SyntaxHighlighter_tr3(const char* s, const char* c, int n);

bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_setDefinition(void* self, intptr_t slot);
void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_setDefinition(void* self, const Definition* def);
bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_setTheme(void* self, intptr_t slot);
void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_setTheme(void* self, const Theme* theme);
bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_highlightBlock(void* self, intptr_t slot);
void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_highlightBlock(void* self, struct miqt_string text);
bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_applyFormat(void* self, intptr_t slot);
void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_applyFormat(void* self, int offset, int length, const Format* format);
bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_applyFolding(void* self, intptr_t slot);
void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_applyFolding(void* self, int offset, int length, FoldingRegion region);
bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_event(void* self, intptr_t slot);
bool KSyntaxHighlighting__SyntaxHighlighter_virtualbase_event(void* self, QEvent* event);
bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_eventFilter(void* self, intptr_t slot);
bool KSyntaxHighlighting__SyntaxHighlighter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_timerEvent(void* self, intptr_t slot);
void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_childEvent(void* self, intptr_t slot);
void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_childEvent(void* self, QChildEvent* event);
bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_customEvent(void* self, intptr_t slot);
void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_customEvent(void* self, QEvent* event);
bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_connectNotify(void* self, intptr_t slot);
void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool KSyntaxHighlighting__SyntaxHighlighter_override_virtual_disconnectNotify(void* self, intptr_t slot);
void KSyntaxHighlighting__SyntaxHighlighter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void KSyntaxHighlighting__SyntaxHighlighter_protectedbase_setFormat(bool* _dynamic_cast_ok, void* self, int start, int count, QTextCharFormat* format);
QTextCharFormat* KSyntaxHighlighting__SyntaxHighlighter_protectedbase_format(bool* _dynamic_cast_ok, const void* self, int pos);
int KSyntaxHighlighting__SyntaxHighlighter_protectedbase_previousBlockState(bool* _dynamic_cast_ok, const void* self);
int KSyntaxHighlighting__SyntaxHighlighter_protectedbase_currentBlockState(bool* _dynamic_cast_ok, const void* self);
void KSyntaxHighlighting__SyntaxHighlighter_protectedbase_setCurrentBlockState(bool* _dynamic_cast_ok, void* self, int newState);
void KSyntaxHighlighting__SyntaxHighlighter_protectedbase_setCurrentBlockUserData(bool* _dynamic_cast_ok, void* self, QTextBlockUserData* data);
QTextBlockUserData* KSyntaxHighlighting__SyntaxHighlighter_protectedbase_currentBlockUserData(bool* _dynamic_cast_ok, const void* self);
QTextBlock* KSyntaxHighlighting__SyntaxHighlighter_protectedbase_currentBlock(bool* _dynamic_cast_ok, const void* self);
QObject* KSyntaxHighlighting__SyntaxHighlighter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int KSyntaxHighlighting__SyntaxHighlighter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int KSyntaxHighlighting__SyntaxHighlighter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool KSyntaxHighlighting__SyntaxHighlighter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void KSyntaxHighlighting__SyntaxHighlighter_delete(KSyntaxHighlighting__SyntaxHighlighter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
