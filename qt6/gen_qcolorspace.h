#pragma once
#ifndef MIQT_QT6_GEN_QCOLORSPACE_H
#define MIQT_QT6_GEN_QCOLORSPACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColorSpace;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QColorSpace__PrimaryPoints)
typedef QColorSpace::PrimaryPoints QColorSpace__PrimaryPoints;
#else
class QColorSpace__PrimaryPoints;
#endif
class QColorTransform;
class QPointF;
class QVariant;
#else
typedef struct QColorSpace QColorSpace;
typedef struct QColorSpace__PrimaryPoints QColorSpace__PrimaryPoints;
typedef struct QColorTransform QColorTransform;
typedef struct QPointF QPointF;
typedef struct QVariant QVariant;
#endif

QColorSpace* QColorSpace_new();
QColorSpace* QColorSpace_new2(NamedColorSpace namedColorSpace);
QColorSpace* QColorSpace_new3(QPointF* whitePoint, TransferFunction transferFunction);
QColorSpace* QColorSpace_new4(QPointF* whitePoint, struct miqt_array /* of uint16_t */  transferFunctionTable);
QColorSpace* QColorSpace_new5(Primaries primaries, TransferFunction transferFunction);
QColorSpace* QColorSpace_new6(Primaries primaries, float gamma);
QColorSpace* QColorSpace_new7(Primaries primaries, struct miqt_array /* of uint16_t */  transferFunctionTable);
QColorSpace* QColorSpace_new8(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, TransferFunction transferFunction);
QColorSpace* QColorSpace_new9(const PrimaryPoints* primaryPoints, TransferFunction transferFunction);
QColorSpace* QColorSpace_new10(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, struct miqt_array /* of uint16_t */  transferFunctionTable);
QColorSpace* QColorSpace_new11(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, struct miqt_array /* of uint16_t */  redTransferFunctionTable, struct miqt_array /* of uint16_t */  greenTransferFunctionTable, struct miqt_array /* of uint16_t */  blueTransferFunctionTable);
QColorSpace* QColorSpace_new12(QColorSpace* colorSpace);
QColorSpace* QColorSpace_new13(QPointF* whitePoint, TransferFunction transferFunction, float gamma);
QColorSpace* QColorSpace_new14(Primaries primaries, TransferFunction transferFunction, float gamma);
QColorSpace* QColorSpace_new15(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, TransferFunction transferFunction, float gamma);
QColorSpace* QColorSpace_new16(const PrimaryPoints* primaryPoints, TransferFunction transferFunction, float gamma);
void QColorSpace_operatorAssign(QColorSpace* self, QColorSpace* colorSpace);
void QColorSpace_swap(QColorSpace* self, QColorSpace* colorSpace);
Primaries QColorSpace_primaries(const QColorSpace* self);
TransferFunction QColorSpace_transferFunction(const QColorSpace* self);
float QColorSpace_gamma(const QColorSpace* self);
struct miqt_string QColorSpace_description(const QColorSpace* self);
void QColorSpace_setDescription(QColorSpace* self, struct miqt_string description);
void QColorSpace_setTransferFunction(QColorSpace* self, TransferFunction transferFunction);
void QColorSpace_setTransferFunctionWithTransferFunctionTable(QColorSpace* self, struct miqt_array /* of uint16_t */  transferFunctionTable);
void QColorSpace_setTransferFunctions(QColorSpace* self, struct miqt_array /* of uint16_t */  redTransferFunctionTable, struct miqt_array /* of uint16_t */  greenTransferFunctionTable, struct miqt_array /* of uint16_t */  blueTransferFunctionTable);
QColorSpace* QColorSpace_withTransferFunction(const QColorSpace* self, TransferFunction transferFunction);
QColorSpace* QColorSpace_withTransferFunctionWithTransferFunctionTable(const QColorSpace* self, struct miqt_array /* of uint16_t */  transferFunctionTable);
QColorSpace* QColorSpace_withTransferFunctions(const QColorSpace* self, struct miqt_array /* of uint16_t */  redTransferFunctionTable, struct miqt_array /* of uint16_t */  greenTransferFunctionTable, struct miqt_array /* of uint16_t */  blueTransferFunctionTable);
void QColorSpace_setPrimaries(QColorSpace* self, Primaries primariesId);
void QColorSpace_setPrimaries2(QColorSpace* self, QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint);
void QColorSpace_setWhitePoint(QColorSpace* self, QPointF* whitePoint);
QPointF* QColorSpace_whitePoint(const QColorSpace* self);
void QColorSpace_setPrimaryPoints(QColorSpace* self, const PrimaryPoints* primaryPoints);
PrimaryPoints QColorSpace_primaryPoints(const QColorSpace* self);
TransformModel QColorSpace_transformModel(const QColorSpace* self);
ColorModel QColorSpace_colorModel(const QColorSpace* self);
void QColorSpace_detach(QColorSpace* self);
bool QColorSpace_isValid(const QColorSpace* self);
bool QColorSpace_isValidTarget(const QColorSpace* self);
QColorSpace* QColorSpace_fromIccProfile(struct miqt_string iccProfile);
struct miqt_string QColorSpace_iccProfile(const QColorSpace* self);
QColorTransform* QColorSpace_transformationToColorSpace(const QColorSpace* self, QColorSpace* colorspace);
QVariant* QColorSpace_ToQVariant(const QColorSpace* self);
void QColorSpace_setTransferFunction2(QColorSpace* self, TransferFunction transferFunction, float gamma);
QColorSpace* QColorSpace_withTransferFunction2(const QColorSpace* self, TransferFunction transferFunction, float gamma);

void QColorSpace_delete(QColorSpace* self);

PrimaryPoints QColorSpace__PrimaryPoints_fromPrimaries(Primaries primaries);
bool QColorSpace__PrimaryPoints_isValid(const QColorSpace__PrimaryPoints* self);
QPointF* QColorSpace__PrimaryPoints_whitePoint(const QColorSpace__PrimaryPoints* self);
void QColorSpace__PrimaryPoints_setWhitePoint(QColorSpace__PrimaryPoints* self, QPointF* whitePoint);
QPointF* QColorSpace__PrimaryPoints_redPoint(const QColorSpace__PrimaryPoints* self);
void QColorSpace__PrimaryPoints_setRedPoint(QColorSpace__PrimaryPoints* self, QPointF* redPoint);
QPointF* QColorSpace__PrimaryPoints_greenPoint(const QColorSpace__PrimaryPoints* self);
void QColorSpace__PrimaryPoints_setGreenPoint(QColorSpace__PrimaryPoints* self, QPointF* greenPoint);
QPointF* QColorSpace__PrimaryPoints_bluePoint(const QColorSpace__PrimaryPoints* self);
void QColorSpace__PrimaryPoints_setBluePoint(QColorSpace__PrimaryPoints* self, QPointF* bluePoint);

void QColorSpace__PrimaryPoints_delete(QColorSpace__PrimaryPoints* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
