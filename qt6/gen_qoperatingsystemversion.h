#pragma once
#ifndef MIQT_QT6_GEN_QOPERATINGSYSTEMVERSION_H
#define MIQT_QT6_GEN_QOPERATINGSYSTEMVERSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QOperatingSystemVersion;
class QOperatingSystemVersionBase;
class QOperatingSystemVersionUnexported;
class QVersionNumber;
#else
typedef struct QOperatingSystemVersion QOperatingSystemVersion;
typedef struct QOperatingSystemVersionBase QOperatingSystemVersionBase;
typedef struct QOperatingSystemVersionUnexported QOperatingSystemVersionUnexported;
typedef struct QVersionNumber QVersionNumber;
#endif

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new(OSType osType, int vmajor);
QOperatingSystemVersionBase* QOperatingSystemVersionBase_new2(QOperatingSystemVersionBase* param1);
QOperatingSystemVersionBase* QOperatingSystemVersionBase_new3(OSType osType, int vmajor, int vminor);
QOperatingSystemVersionBase* QOperatingSystemVersionBase_new4(OSType osType, int vmajor, int vminor, int vmicro);
QOperatingSystemVersionBase* QOperatingSystemVersionBase_current();
struct miqt_string QOperatingSystemVersionBase_name(QOperatingSystemVersionBase* osversion);
OSType QOperatingSystemVersionBase_currentType();
QVersionNumber* QOperatingSystemVersionBase_version(const QOperatingSystemVersionBase* self);
int QOperatingSystemVersionBase_majorVersion(const QOperatingSystemVersionBase* self);
int QOperatingSystemVersionBase_minorVersion(const QOperatingSystemVersionBase* self);
int QOperatingSystemVersionBase_microVersion(const QOperatingSystemVersionBase* self);
int QOperatingSystemVersionBase_segmentCount(const QOperatingSystemVersionBase* self);
OSType QOperatingSystemVersionBase_type(const QOperatingSystemVersionBase* self);
struct miqt_string QOperatingSystemVersionBase_name2(const QOperatingSystemVersionBase* self);

void QOperatingSystemVersionBase_delete(QOperatingSystemVersionBase* self);

QOperatingSystemVersionUnexported* QOperatingSystemVersionUnexported_new(QOperatingSystemVersionBase* other);
QOperatingSystemVersionUnexported* QOperatingSystemVersionUnexported_new2();
QOperatingSystemVersionUnexported* QOperatingSystemVersionUnexported_new3(QOperatingSystemVersionUnexported* param1);
QOperatingSystemVersionUnexported* QOperatingSystemVersionUnexported_new4(OSType param1, int param2, int param3, int param4);
void QOperatingSystemVersionUnexported_virtbase(QOperatingSystemVersionUnexported* src, QOperatingSystemVersionBase** outptr_QOperatingSystemVersionBase);
void QOperatingSystemVersionUnexported_delete(QOperatingSystemVersionUnexported* self);

QOperatingSystemVersion* QOperatingSystemVersion_new(QOperatingSystemVersionBase* osversion);
QOperatingSystemVersion* QOperatingSystemVersion_new2(OSType osType, int vmajor);
QOperatingSystemVersion* QOperatingSystemVersion_new3(QOperatingSystemVersion* param1);
QOperatingSystemVersion* QOperatingSystemVersion_new4(OSType osType, int vmajor, int vminor);
QOperatingSystemVersion* QOperatingSystemVersion_new5(OSType osType, int vmajor, int vminor, int vmicro);
void QOperatingSystemVersion_virtbase(QOperatingSystemVersion* src, QOperatingSystemVersionUnexported** outptr_QOperatingSystemVersionUnexported);
QOperatingSystemVersion* QOperatingSystemVersion_current();
OSType QOperatingSystemVersion_currentType();
OSType QOperatingSystemVersion_type(const QOperatingSystemVersion* self);

void QOperatingSystemVersion_delete(QOperatingSystemVersion* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
