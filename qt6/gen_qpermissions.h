#pragma once
#ifndef MIQT_QT6_GEN_QPERMISSIONS_H
#define MIQT_QT6_GEN_QPERMISSIONS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBluetoothPermission;
class QCalendarPermission;
class QCameraPermission;
class QContactsPermission;
class QLocationPermission;
class QMetaType;
class QMicrophonePermission;
class QPermission;
#else
typedef struct QBluetoothPermission QBluetoothPermission;
typedef struct QCalendarPermission QCalendarPermission;
typedef struct QCameraPermission QCameraPermission;
typedef struct QContactsPermission QContactsPermission;
typedef struct QLocationPermission QLocationPermission;
typedef struct QMetaType QMetaType;
typedef struct QMicrophonePermission QMicrophonePermission;
typedef struct QPermission QPermission;
#endif

QPermission* QPermission_new();
QPermission* QPermission_new2(QPermission* param1);
int QPermission_status(const QPermission* self);
QMetaType* QPermission_type(const QPermission* self);
void QPermission_operatorAssign(QPermission* self, QPermission* param1);

void QPermission_delete(QPermission* self);

QLocationPermission* QLocationPermission_new();
QLocationPermission* QLocationPermission_new2(QLocationPermission* other);
void QLocationPermission_setAccuracy(QLocationPermission* self, Accuracy accuracy);
Accuracy QLocationPermission_accuracy(const QLocationPermission* self);
void QLocationPermission_setAvailability(QLocationPermission* self, Availability availability);
Availability QLocationPermission_availability(const QLocationPermission* self);
void QLocationPermission_operatorAssign(QLocationPermission* self, QLocationPermission* other);
void QLocationPermission_connect_operatorAssign(QLocationPermission* self, intptr_t slot);
void QLocationPermission_swap(QLocationPermission* self, QLocationPermission* other);
void QLocationPermission_connect_swap(QLocationPermission* self, intptr_t slot);

void QLocationPermission_delete(QLocationPermission* self);

QCalendarPermission* QCalendarPermission_new();
QCalendarPermission* QCalendarPermission_new2(QCalendarPermission* other);
void QCalendarPermission_setAccessMode(QCalendarPermission* self, AccessMode mode);
AccessMode QCalendarPermission_accessMode(const QCalendarPermission* self);
void QCalendarPermission_operatorAssign(QCalendarPermission* self, QCalendarPermission* other);
void QCalendarPermission_connect_operatorAssign(QCalendarPermission* self, intptr_t slot);
void QCalendarPermission_swap(QCalendarPermission* self, QCalendarPermission* other);
void QCalendarPermission_connect_swap(QCalendarPermission* self, intptr_t slot);

void QCalendarPermission_delete(QCalendarPermission* self);

QContactsPermission* QContactsPermission_new();
QContactsPermission* QContactsPermission_new2(QContactsPermission* other);
void QContactsPermission_setAccessMode(QContactsPermission* self, AccessMode mode);
AccessMode QContactsPermission_accessMode(const QContactsPermission* self);
void QContactsPermission_operatorAssign(QContactsPermission* self, QContactsPermission* other);
void QContactsPermission_connect_operatorAssign(QContactsPermission* self, intptr_t slot);
void QContactsPermission_swap(QContactsPermission* self, QContactsPermission* other);
void QContactsPermission_connect_swap(QContactsPermission* self, intptr_t slot);

void QContactsPermission_delete(QContactsPermission* self);

QBluetoothPermission* QBluetoothPermission_new();
QBluetoothPermission* QBluetoothPermission_new2(QBluetoothPermission* other);
void QBluetoothPermission_setCommunicationModes(QBluetoothPermission* self, CommunicationModes modes);
CommunicationModes QBluetoothPermission_communicationModes(const QBluetoothPermission* self);
void QBluetoothPermission_operatorAssign(QBluetoothPermission* self, QBluetoothPermission* other);
void QBluetoothPermission_connect_operatorAssign(QBluetoothPermission* self, intptr_t slot);
void QBluetoothPermission_swap(QBluetoothPermission* self, QBluetoothPermission* other);
void QBluetoothPermission_connect_swap(QBluetoothPermission* self, intptr_t slot);

void QBluetoothPermission_delete(QBluetoothPermission* self);

QCameraPermission* QCameraPermission_new();
QCameraPermission* QCameraPermission_new2(QCameraPermission* other);
void QCameraPermission_operatorAssign(QCameraPermission* self, QCameraPermission* other);
void QCameraPermission_connect_operatorAssign(QCameraPermission* self, intptr_t slot);
void QCameraPermission_swap(QCameraPermission* self, QCameraPermission* other);
void QCameraPermission_connect_swap(QCameraPermission* self, intptr_t slot);

void QCameraPermission_delete(QCameraPermission* self);

QMicrophonePermission* QMicrophonePermission_new();
QMicrophonePermission* QMicrophonePermission_new2(QMicrophonePermission* other);
void QMicrophonePermission_operatorAssign(QMicrophonePermission* self, QMicrophonePermission* other);
void QMicrophonePermission_connect_operatorAssign(QMicrophonePermission* self, intptr_t slot);
void QMicrophonePermission_swap(QMicrophonePermission* self, QMicrophonePermission* other);
void QMicrophonePermission_connect_swap(QMicrophonePermission* self, intptr_t slot);

void QMicrophonePermission_delete(QMicrophonePermission* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
