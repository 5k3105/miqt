#pragma once
#ifndef MIQT_QT6_GEN_QPDFOUTPUTINTENT_H
#define MIQT_QT6_GEN_QPDFOUTPUTINTENT_H

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
class QPdfOutputIntent;
class QUrl;
#else
typedef struct QColorSpace QColorSpace;
typedef struct QPdfOutputIntent QPdfOutputIntent;
typedef struct QUrl QUrl;
#endif

QPdfOutputIntent* QPdfOutputIntent_new();
QPdfOutputIntent* QPdfOutputIntent_new2(QPdfOutputIntent* other);
void QPdfOutputIntent_operatorAssign(QPdfOutputIntent* self, QPdfOutputIntent* other);
void QPdfOutputIntent_swap(QPdfOutputIntent* self, QPdfOutputIntent* other);
struct miqt_string QPdfOutputIntent_outputConditionIdentifier(const QPdfOutputIntent* self);
void QPdfOutputIntent_setOutputConditionIdentifier(QPdfOutputIntent* self, struct miqt_string identifier);
struct miqt_string QPdfOutputIntent_outputCondition(const QPdfOutputIntent* self);
void QPdfOutputIntent_setOutputCondition(QPdfOutputIntent* self, struct miqt_string condition);
QUrl* QPdfOutputIntent_registryName(const QPdfOutputIntent* self);
void QPdfOutputIntent_setRegistryName(QPdfOutputIntent* self, QUrl* name);
QColorSpace* QPdfOutputIntent_outputProfile(const QPdfOutputIntent* self);
void QPdfOutputIntent_setOutputProfile(QPdfOutputIntent* self, QColorSpace* profile);

void QPdfOutputIntent_delete(QPdfOutputIntent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
