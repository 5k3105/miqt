#pragma once
#ifndef MIQT_QT6_GEN_QFONTDATABASE_H
#define MIQT_QT6_GEN_QFONTDATABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFont;
class QFontDatabase;
class QFontInfo;
#else
typedef struct QFont QFont;
typedef struct QFontDatabase QFontDatabase;
typedef struct QFontInfo QFontInfo;
#endif

QFontDatabase* QFontDatabase_new();
struct miqt_array /* of int */  QFontDatabase_standardSizes();
struct miqt_array /* of WritingSystem */  QFontDatabase_writingSystems();
struct miqt_array /* of WritingSystem */  QFontDatabase_writingSystemsWithFamily(struct miqt_string family);
struct miqt_array /* of struct miqt_string */  QFontDatabase_families();
struct miqt_array /* of struct miqt_string */  QFontDatabase_styles(struct miqt_string family);
struct miqt_array /* of int */  QFontDatabase_pointSizes(struct miqt_string family);
struct miqt_array /* of int */  QFontDatabase_smoothSizes(struct miqt_string family, struct miqt_string style);
struct miqt_string QFontDatabase_styleString(QFont* font);
struct miqt_string QFontDatabase_styleStringWithFontInfo(QFontInfo* fontInfo);
QFont* QFontDatabase_font(struct miqt_string family, struct miqt_string style, int pointSize);
bool QFontDatabase_isBitmapScalable(struct miqt_string family);
bool QFontDatabase_isSmoothlyScalable(struct miqt_string family);
bool QFontDatabase_isScalable(struct miqt_string family);
bool QFontDatabase_isFixedPitch(struct miqt_string family);
bool QFontDatabase_italic(struct miqt_string family, struct miqt_string style);
bool QFontDatabase_bold(struct miqt_string family, struct miqt_string style);
int QFontDatabase_weight(struct miqt_string family, struct miqt_string style);
bool QFontDatabase_hasFamily(struct miqt_string family);
bool QFontDatabase_isPrivateFamily(struct miqt_string family);
struct miqt_string QFontDatabase_writingSystemName(WritingSystem writingSystem);
struct miqt_string QFontDatabase_writingSystemSample(WritingSystem writingSystem);
int QFontDatabase_addApplicationFont(struct miqt_string fileName);
int QFontDatabase_addApplicationFontFromData(struct miqt_string fontData);
struct miqt_array /* of struct miqt_string */  QFontDatabase_applicationFontFamilies(int id);
bool QFontDatabase_removeApplicationFont(int id);
bool QFontDatabase_removeAllApplicationFonts();
void QFontDatabase_addApplicationFallbackFontFamily(int script, struct miqt_string familyName);
bool QFontDatabase_removeApplicationFallbackFontFamily(int script, struct miqt_string familyName);
void QFontDatabase_setApplicationFallbackFontFamilies(int param1, struct miqt_array /* of struct miqt_string */  familyNames);
struct miqt_array /* of struct miqt_string */  QFontDatabase_applicationFallbackFontFamilies(int script);
void QFontDatabase_addApplicationEmojiFontFamily(struct miqt_string familyName);
bool QFontDatabase_removeApplicationEmojiFontFamily(struct miqt_string familyName);
void QFontDatabase_setApplicationEmojiFontFamilies(struct miqt_array /* of struct miqt_string */  familyNames);
struct miqt_array /* of struct miqt_string */  QFontDatabase_applicationEmojiFontFamilies();
QFont* QFontDatabase_systemFont(SystemFont type);
struct miqt_array /* of struct miqt_string */  QFontDatabase_familiesWithWritingSystem(WritingSystem writingSystem);
struct miqt_array /* of int */  QFontDatabase_pointSizes2(struct miqt_string family, struct miqt_string style);
bool QFontDatabase_isBitmapScalable2(struct miqt_string family, struct miqt_string style);
bool QFontDatabase_isSmoothlyScalable2(struct miqt_string family, struct miqt_string style);
bool QFontDatabase_isScalable2(struct miqt_string family, struct miqt_string style);
bool QFontDatabase_isFixedPitch2(struct miqt_string family, struct miqt_string style);

void QFontDatabase_delete(QFontDatabase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
