#pragma once
#ifndef MIQT_QT6_GEN_QLATIN1STRINGMATCHER_H
#define MIQT_QT6_GEN_QLATIN1STRINGMATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLatin1StringMatcher;
#else
typedef struct QLatin1StringMatcher QLatin1StringMatcher;
#endif

QLatin1StringMatcher* QLatin1StringMatcher_new();
void QLatin1StringMatcher_setCaseSensitivity(QLatin1StringMatcher* self, int cs);
int QLatin1StringMatcher_caseSensitivity(const QLatin1StringMatcher* self);

void QLatin1StringMatcher_delete(QLatin1StringMatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
