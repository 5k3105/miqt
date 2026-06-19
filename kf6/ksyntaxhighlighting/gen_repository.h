#pragma once
#ifndef MIQT_KF6_KSYNTAXHIGHLIGHTING_GEN_REPOSITORY_H
#define MIQT_KF6_KSYNTAXHIGHLIGHTING_GEN_REPOSITORY_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__Repository)
typedef KSyntaxHighlighting::Repository KSyntaxHighlighting__Repository;
#else
class KSyntaxHighlighting__Repository;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__Theme)
typedef KSyntaxHighlighting::Theme KSyntaxHighlighting__Theme;
#else
class KSyntaxHighlighting__Theme;
#endif
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPalette;
class QTimerEvent;
#else
typedef struct KSyntaxHighlighting__Definition KSyntaxHighlighting__Definition;
typedef struct KSyntaxHighlighting__Repository KSyntaxHighlighting__Repository;
typedef struct KSyntaxHighlighting__Theme KSyntaxHighlighting__Theme;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPalette QPalette;
typedef struct QTimerEvent QTimerEvent;
#endif

KSyntaxHighlighting__Repository* KSyntaxHighlighting__Repository_new();
void KSyntaxHighlighting__Repository_virtbase(KSyntaxHighlighting__Repository* src, QObject** outptr_QObject);
QMetaObject* KSyntaxHighlighting__Repository_metaObject(const KSyntaxHighlighting__Repository* self);
void* KSyntaxHighlighting__Repository_metacast(KSyntaxHighlighting__Repository* self, const char* param1);
struct miqt_string KSyntaxHighlighting__Repository_tr(const char* s);
KSyntaxHighlighting__Definition* KSyntaxHighlighting__Repository_definitionForName(const KSyntaxHighlighting__Repository* self, struct miqt_string defName);
KSyntaxHighlighting__Definition* KSyntaxHighlighting__Repository_definitionForFileName(const KSyntaxHighlighting__Repository* self, struct miqt_string fileName);
struct miqt_array /* of KSyntaxHighlighting__Definition* */  KSyntaxHighlighting__Repository_definitionsForFileName(const KSyntaxHighlighting__Repository* self, struct miqt_string fileName);
KSyntaxHighlighting__Definition* KSyntaxHighlighting__Repository_definitionForMimeType(const KSyntaxHighlighting__Repository* self, struct miqt_string mimeType);
struct miqt_array /* of KSyntaxHighlighting__Definition* */  KSyntaxHighlighting__Repository_definitionsForMimeType(const KSyntaxHighlighting__Repository* self, struct miqt_string mimeType);
struct miqt_array /* of KSyntaxHighlighting__Definition* */  KSyntaxHighlighting__Repository_definitions(const KSyntaxHighlighting__Repository* self);
struct miqt_array /* of KSyntaxHighlighting__Theme* */  KSyntaxHighlighting__Repository_themes(const KSyntaxHighlighting__Repository* self);
KSyntaxHighlighting__Theme* KSyntaxHighlighting__Repository_theme(const KSyntaxHighlighting__Repository* self, struct miqt_string themeName);
KSyntaxHighlighting__Theme* KSyntaxHighlighting__Repository_defaultTheme(const KSyntaxHighlighting__Repository* self);
Theme KSyntaxHighlighting__Repository_themeForPalette(const KSyntaxHighlighting__Repository* self, QPalette* palette);
void KSyntaxHighlighting__Repository_reload(KSyntaxHighlighting__Repository* self);
void KSyntaxHighlighting__Repository_addCustomSearchPath(KSyntaxHighlighting__Repository* self, struct miqt_string path);
struct miqt_array /* of struct miqt_string */  KSyntaxHighlighting__Repository_customSearchPaths(const KSyntaxHighlighting__Repository* self);
void KSyntaxHighlighting__Repository_aboutToReload(KSyntaxHighlighting__Repository* self);
void KSyntaxHighlighting__Repository_connect_aboutToReload(KSyntaxHighlighting__Repository* self, intptr_t slot);
void KSyntaxHighlighting__Repository_reloaded(KSyntaxHighlighting__Repository* self);
void KSyntaxHighlighting__Repository_connect_reloaded(KSyntaxHighlighting__Repository* self, intptr_t slot);
struct miqt_string KSyntaxHighlighting__Repository_tr2(const char* s, const char* c);
struct miqt_string KSyntaxHighlighting__Repository_tr3(const char* s, const char* c, int n);
KSyntaxHighlighting__Theme* KSyntaxHighlighting__Repository_defaultThemeWithKSyntaxHighlightingRepositoryDefaultTheme(const KSyntaxHighlighting__Repository* self, int t);

bool KSyntaxHighlighting__Repository_override_virtual_event(void* self, intptr_t slot);
bool KSyntaxHighlighting__Repository_virtualbase_event(void* self, QEvent* event);
bool KSyntaxHighlighting__Repository_override_virtual_eventFilter(void* self, intptr_t slot);
bool KSyntaxHighlighting__Repository_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool KSyntaxHighlighting__Repository_override_virtual_timerEvent(void* self, intptr_t slot);
void KSyntaxHighlighting__Repository_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool KSyntaxHighlighting__Repository_override_virtual_childEvent(void* self, intptr_t slot);
void KSyntaxHighlighting__Repository_virtualbase_childEvent(void* self, QChildEvent* event);
bool KSyntaxHighlighting__Repository_override_virtual_customEvent(void* self, intptr_t slot);
void KSyntaxHighlighting__Repository_virtualbase_customEvent(void* self, QEvent* event);
bool KSyntaxHighlighting__Repository_override_virtual_connectNotify(void* self, intptr_t slot);
void KSyntaxHighlighting__Repository_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool KSyntaxHighlighting__Repository_override_virtual_disconnectNotify(void* self, intptr_t slot);
void KSyntaxHighlighting__Repository_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* KSyntaxHighlighting__Repository_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int KSyntaxHighlighting__Repository_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int KSyntaxHighlighting__Repository_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool KSyntaxHighlighting__Repository_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void KSyntaxHighlighting__Repository_delete(KSyntaxHighlighting__Repository* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
