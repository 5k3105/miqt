#pragma once
#ifndef MIQT_QT6_GEN_QSTANDARDPATHS_H
#define MIQT_QT6_GEN_QSTANDARDPATHS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QStandardPaths;
#else
typedef struct QStandardPaths QStandardPaths;
#endif

struct miqt_string QStandardPaths_writableLocation(StandardLocation type);
struct miqt_array /* of struct miqt_string */  QStandardPaths_standardLocations(StandardLocation type);
struct miqt_string QStandardPaths_locate(StandardLocation type, struct miqt_string fileName);
struct miqt_array /* of struct miqt_string */  QStandardPaths_locateAll(StandardLocation type, struct miqt_string fileName);
struct miqt_string QStandardPaths_displayName(StandardLocation type);
struct miqt_string QStandardPaths_findExecutable(struct miqt_string executableName);
void QStandardPaths_setTestModeEnabled(bool testMode);
bool QStandardPaths_isTestModeEnabled();
struct miqt_string QStandardPaths_locate2(StandardLocation type, struct miqt_string fileName, LocateOptions options);
struct miqt_array /* of struct miqt_string */  QStandardPaths_locateAll2(StandardLocation type, struct miqt_string fileName, LocateOptions options);
struct miqt_string QStandardPaths_findExecutable2(struct miqt_string executableName, struct miqt_array /* of struct miqt_string */  paths);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
