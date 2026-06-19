#pragma once
#ifndef MIQT_QT6_GEN_QJSONPARSEERROR_H
#define MIQT_QT6_GEN_QJSONPARSEERROR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QJsonParseError;
#else
typedef struct QJsonParseError QJsonParseError;
#endif

struct miqt_string QJsonParseError_errorString(const QJsonParseError* self);
ParseError QJsonParseError_error(const QJsonParseError* self);
void QJsonParseError_setError(QJsonParseError* self, ParseError error);

void QJsonParseError_delete(QJsonParseError* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
