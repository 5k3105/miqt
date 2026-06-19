#pragma once
#ifndef MIQT_QT6_GEN_QFONT_H
#define MIQT_QT6_GEN_QFONT_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QFont__Tag)
typedef QFont::Tag QFont__Tag;
#else
class QFont__Tag;
#endif
class QPaintDevice;
class QVariant;
#else
typedef struct QFont QFont;
typedef struct QFont__Tag QFont__Tag;
typedef struct QPaintDevice QPaintDevice;
typedef struct QVariant QVariant;
#endif

QFont* QFont_new();
QFont* QFont_new2(struct miqt_string family);
QFont* QFont_new3(struct miqt_array /* of struct miqt_string */  families);
QFont* QFont_new4(QFont* font, QPaintDevice* pd);
QFont* QFont_new5(QFont* font);
QFont* QFont_new6(struct miqt_string family, int pointSize);
QFont* QFont_new7(struct miqt_string family, int pointSize, int weight);
QFont* QFont_new8(struct miqt_string family, int pointSize, int weight, bool italic);
QFont* QFont_new9(struct miqt_array /* of struct miqt_string */  families, int pointSize);
QFont* QFont_new10(struct miqt_array /* of struct miqt_string */  families, int pointSize, int weight);
QFont* QFont_new11(struct miqt_array /* of struct miqt_string */  families, int pointSize, int weight, bool italic);
void QFont_swap(QFont* self, QFont* other);
struct miqt_string QFont_family(const QFont* self);
void QFont_setFamily(QFont* self, struct miqt_string family);
struct miqt_array /* of struct miqt_string */  QFont_families(const QFont* self);
void QFont_setFamilies(QFont* self, struct miqt_array /* of struct miqt_string */  families);
struct miqt_string QFont_styleName(const QFont* self);
void QFont_setStyleName(QFont* self, struct miqt_string styleName);
int QFont_pointSize(const QFont* self);
void QFont_setPointSize(QFont* self, int pointSize);
double QFont_pointSizeF(const QFont* self);
void QFont_setPointSizeF(QFont* self, double pointSizeF);
int QFont_pixelSize(const QFont* self);
void QFont_setPixelSize(QFont* self, int pixelSize);
Weight QFont_weight(const QFont* self);
void QFont_setWeight(QFont* self, Weight weight);
bool QFont_bold(const QFont* self);
void QFont_setBold(QFont* self, bool bold);
void QFont_setStyle(QFont* self, Style style);
Style QFont_style(const QFont* self);
bool QFont_italic(const QFont* self);
void QFont_setItalic(QFont* self, bool b);
bool QFont_underline(const QFont* self);
void QFont_setUnderline(QFont* self, bool underline);
bool QFont_overline(const QFont* self);
void QFont_setOverline(QFont* self, bool overline);
bool QFont_strikeOut(const QFont* self);
void QFont_setStrikeOut(QFont* self, bool strikeOut);
bool QFont_fixedPitch(const QFont* self);
void QFont_setFixedPitch(QFont* self, bool fixedPitch);
bool QFont_kerning(const QFont* self);
void QFont_setKerning(QFont* self, bool kerning);
StyleHint QFont_styleHint(const QFont* self);
StyleStrategy QFont_styleStrategy(const QFont* self);
void QFont_setStyleHint(QFont* self, StyleHint param1);
void QFont_setStyleStrategy(QFont* self, StyleStrategy s);
int QFont_stretch(const QFont* self);
void QFont_setStretch(QFont* self, int stretch);
double QFont_letterSpacing(const QFont* self);
SpacingType QFont_letterSpacingType(const QFont* self);
void QFont_setLetterSpacing(QFont* self, SpacingType type, double spacing);
double QFont_wordSpacing(const QFont* self);
void QFont_setWordSpacing(QFont* self, double spacing);
void QFont_setCapitalization(QFont* self, Capitalization capitalization);
Capitalization QFont_capitalization(const QFont* self);
void QFont_setHintingPreference(QFont* self, HintingPreference hintingPreference);
HintingPreference QFont_hintingPreference(const QFont* self);
void QFont_setFeature(QFont* self, Tag tag, unsigned int value);
void QFont_unsetFeature(QFont* self, Tag tag);
unsigned int QFont_featureValue(const QFont* self, Tag tag);
bool QFont_isFeatureSet(const QFont* self, Tag tag);
struct miqt_array /* of Tag */  QFont_featureTags(const QFont* self);
void QFont_clearFeatures(QFont* self);
void QFont_setVariableAxis(QFont* self, Tag tag, float value);
void QFont_unsetVariableAxis(QFont* self, Tag tag);
bool QFont_isVariableAxisSet(const QFont* self, Tag tag);
float QFont_variableAxisValue(const QFont* self, Tag tag);
void QFont_clearVariableAxes(QFont* self);
struct miqt_array /* of Tag */  QFont_variableAxisTags(const QFont* self);
bool QFont_exactMatch(const QFont* self);
void QFont_operatorAssign(QFont* self, QFont* param1);
bool QFont_operatorEqual(const QFont* self, QFont* param1);
bool QFont_operatorNotEqual(const QFont* self, QFont* param1);
bool QFont_operatorLesser(const QFont* self, QFont* param1);
QVariant* QFont_ToQVariant(const QFont* self);
bool QFont_isCopyOf(const QFont* self, QFont* param1);
struct miqt_string QFont_key(const QFont* self);
struct miqt_string QFont_toString(const QFont* self);
bool QFont_fromString(QFont* self, struct miqt_string param1);
struct miqt_string QFont_substitute(struct miqt_string param1);
struct miqt_array /* of struct miqt_string */  QFont_substitutes(struct miqt_string param1);
struct miqt_array /* of struct miqt_string */  QFont_substitutions();
void QFont_insertSubstitution(struct miqt_string param1, struct miqt_string param2);
void QFont_insertSubstitutions(struct miqt_string param1, struct miqt_array /* of struct miqt_string */  param2);
void QFont_removeSubstitutions(struct miqt_string param1);
void QFont_initialize();
void QFont_cleanup();
void QFont_cacheStatistics();
struct miqt_string QFont_defaultFamily(const QFont* self);
QFont* QFont_resolve(const QFont* self, QFont* param1);
unsigned int QFont_resolveMask(const QFont* self);
void QFont_setResolveMask(QFont* self, unsigned int mask);
void QFont_setLegacyWeight(QFont* self, int legacyWeight);
int QFont_legacyWeight(const QFont* self);
void QFont_setStyleHint2(QFont* self, StyleHint param1, StyleStrategy param2);

void QFont_delete(QFont* self);

QFont__Tag* QFont__Tag_new();
QFont__Tag* QFont__Tag_new2(const Tag* param1);
bool QFont__Tag_isValid(const QFont__Tag* self);
unsigned int QFont__Tag_value(const QFont__Tag* self);
struct miqt_string QFont__Tag_toString(const QFont__Tag* self);
void QFont__Tag_operatorAssign(QFont__Tag* self, const Tag* param1);

void QFont__Tag_delete(QFont__Tag* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
