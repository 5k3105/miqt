#include <QBluetoothPermission>
#include <QCalendarPermission>
#include <QCameraPermission>
#include <QContactsPermission>
#include <QLocationPermission>
#include <QMetaType>
#include <QMicrophonePermission>
#include <QPermission>
#include <qpermissions.h>
#include "gen_qpermissions.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QLocationPermission_operatorAssign(intptr_t, QLocationPermission*);
void miqt_exec_callback_QLocationPermission_swap(intptr_t, QLocationPermission*);
void miqt_exec_callback_QCalendarPermission_operatorAssign(intptr_t, QCalendarPermission*);
void miqt_exec_callback_QCalendarPermission_swap(intptr_t, QCalendarPermission*);
void miqt_exec_callback_QContactsPermission_operatorAssign(intptr_t, QContactsPermission*);
void miqt_exec_callback_QContactsPermission_swap(intptr_t, QContactsPermission*);
void miqt_exec_callback_QBluetoothPermission_operatorAssign(intptr_t, QBluetoothPermission*);
void miqt_exec_callback_QBluetoothPermission_swap(intptr_t, QBluetoothPermission*);
void miqt_exec_callback_QCameraPermission_operatorAssign(intptr_t, QCameraPermission*);
void miqt_exec_callback_QCameraPermission_swap(intptr_t, QCameraPermission*);
void miqt_exec_callback_QMicrophonePermission_operatorAssign(intptr_t, QMicrophonePermission*);
void miqt_exec_callback_QMicrophonePermission_swap(intptr_t, QMicrophonePermission*);
#ifdef __cplusplus
} /* extern C */
#endif

QPermission* QPermission_new() {
	return new (std::nothrow) QPermission();
}

QPermission* QPermission_new2(QPermission* param1) {
	return new (std::nothrow) QPermission(*param1);
}

int QPermission_status(const QPermission* self) {
	Qt::PermissionStatus _ret = self->status();
	return static_cast<int>(_ret);
}

QMetaType* QPermission_type(const QPermission* self) {
	return new QMetaType(self->type());
}

void QPermission_operatorAssign(QPermission* self, QPermission* param1) {
	self->operator=(*param1);
}

void QPermission_delete(QPermission* self) {
	delete self;
}

QLocationPermission* QLocationPermission_new() {
	return new (std::nothrow) QLocationPermission();
}

QLocationPermission* QLocationPermission_new2(QLocationPermission* other) {
	return new (std::nothrow) QLocationPermission(*other);
}

void QLocationPermission_setAccuracy(QLocationPermission* self, Accuracy accuracy) {
	self->setAccuracy(accuracy);
}

Accuracy QLocationPermission_accuracy(const QLocationPermission* self) {
	return self->accuracy();
}

void QLocationPermission_setAvailability(QLocationPermission* self, Availability availability) {
	self->setAvailability(availability);
}

Availability QLocationPermission_availability(const QLocationPermission* self) {
	return self->availability();
}

void QLocationPermission_operatorAssign(QLocationPermission* self, QLocationPermission* other) {
	self->operator=(*other);
}

void QLocationPermission_connect_operatorAssign(QLocationPermission* self, intptr_t slot) {
	QLocationPermission::connect(self, static_cast<void (QLocationPermission::*)(const QLocationPermission&)>(&QLocationPermission::operator=), self, [=](const QLocationPermission& other) {
		const QLocationPermission& other_ret = other;
		// Cast returned reference into pointer
		QLocationPermission* sigval1 = const_cast<QLocationPermission*>(&other_ret);
		miqt_exec_callback_QLocationPermission_operatorAssign(slot, sigval1);
	});
}

void QLocationPermission_swap(QLocationPermission* self, QLocationPermission* other) {
	self->swap(*other);
}

void QLocationPermission_connect_swap(QLocationPermission* self, intptr_t slot) {
	QLocationPermission::connect(self, static_cast<void (QLocationPermission::*)(QLocationPermission&)>(&QLocationPermission::swap), self, [=](QLocationPermission& other) {
		QLocationPermission& other_ret = other;
		// Cast returned reference into pointer
		QLocationPermission* sigval1 = &other_ret;
		miqt_exec_callback_QLocationPermission_swap(slot, sigval1);
	});
}

void QLocationPermission_delete(QLocationPermission* self) {
	delete self;
}

QCalendarPermission* QCalendarPermission_new() {
	return new (std::nothrow) QCalendarPermission();
}

QCalendarPermission* QCalendarPermission_new2(QCalendarPermission* other) {
	return new (std::nothrow) QCalendarPermission(*other);
}

void QCalendarPermission_setAccessMode(QCalendarPermission* self, AccessMode mode) {
	self->setAccessMode(mode);
}

AccessMode QCalendarPermission_accessMode(const QCalendarPermission* self) {
	return self->accessMode();
}

void QCalendarPermission_operatorAssign(QCalendarPermission* self, QCalendarPermission* other) {
	self->operator=(*other);
}

void QCalendarPermission_connect_operatorAssign(QCalendarPermission* self, intptr_t slot) {
	QCalendarPermission::connect(self, static_cast<void (QCalendarPermission::*)(const QCalendarPermission&)>(&QCalendarPermission::operator=), self, [=](const QCalendarPermission& other) {
		const QCalendarPermission& other_ret = other;
		// Cast returned reference into pointer
		QCalendarPermission* sigval1 = const_cast<QCalendarPermission*>(&other_ret);
		miqt_exec_callback_QCalendarPermission_operatorAssign(slot, sigval1);
	});
}

void QCalendarPermission_swap(QCalendarPermission* self, QCalendarPermission* other) {
	self->swap(*other);
}

void QCalendarPermission_connect_swap(QCalendarPermission* self, intptr_t slot) {
	QCalendarPermission::connect(self, static_cast<void (QCalendarPermission::*)(QCalendarPermission&)>(&QCalendarPermission::swap), self, [=](QCalendarPermission& other) {
		QCalendarPermission& other_ret = other;
		// Cast returned reference into pointer
		QCalendarPermission* sigval1 = &other_ret;
		miqt_exec_callback_QCalendarPermission_swap(slot, sigval1);
	});
}

void QCalendarPermission_delete(QCalendarPermission* self) {
	delete self;
}

QContactsPermission* QContactsPermission_new() {
	return new (std::nothrow) QContactsPermission();
}

QContactsPermission* QContactsPermission_new2(QContactsPermission* other) {
	return new (std::nothrow) QContactsPermission(*other);
}

void QContactsPermission_setAccessMode(QContactsPermission* self, AccessMode mode) {
	self->setAccessMode(mode);
}

AccessMode QContactsPermission_accessMode(const QContactsPermission* self) {
	return self->accessMode();
}

void QContactsPermission_operatorAssign(QContactsPermission* self, QContactsPermission* other) {
	self->operator=(*other);
}

void QContactsPermission_connect_operatorAssign(QContactsPermission* self, intptr_t slot) {
	QContactsPermission::connect(self, static_cast<void (QContactsPermission::*)(const QContactsPermission&)>(&QContactsPermission::operator=), self, [=](const QContactsPermission& other) {
		const QContactsPermission& other_ret = other;
		// Cast returned reference into pointer
		QContactsPermission* sigval1 = const_cast<QContactsPermission*>(&other_ret);
		miqt_exec_callback_QContactsPermission_operatorAssign(slot, sigval1);
	});
}

void QContactsPermission_swap(QContactsPermission* self, QContactsPermission* other) {
	self->swap(*other);
}

void QContactsPermission_connect_swap(QContactsPermission* self, intptr_t slot) {
	QContactsPermission::connect(self, static_cast<void (QContactsPermission::*)(QContactsPermission&)>(&QContactsPermission::swap), self, [=](QContactsPermission& other) {
		QContactsPermission& other_ret = other;
		// Cast returned reference into pointer
		QContactsPermission* sigval1 = &other_ret;
		miqt_exec_callback_QContactsPermission_swap(slot, sigval1);
	});
}

void QContactsPermission_delete(QContactsPermission* self) {
	delete self;
}

QBluetoothPermission* QBluetoothPermission_new() {
	return new (std::nothrow) QBluetoothPermission();
}

QBluetoothPermission* QBluetoothPermission_new2(QBluetoothPermission* other) {
	return new (std::nothrow) QBluetoothPermission(*other);
}

void QBluetoothPermission_setCommunicationModes(QBluetoothPermission* self, CommunicationModes modes) {
	self->setCommunicationModes(modes);
}

CommunicationModes QBluetoothPermission_communicationModes(const QBluetoothPermission* self) {
	return self->communicationModes();
}

void QBluetoothPermission_operatorAssign(QBluetoothPermission* self, QBluetoothPermission* other) {
	self->operator=(*other);
}

void QBluetoothPermission_connect_operatorAssign(QBluetoothPermission* self, intptr_t slot) {
	QBluetoothPermission::connect(self, static_cast<void (QBluetoothPermission::*)(const QBluetoothPermission&)>(&QBluetoothPermission::operator=), self, [=](const QBluetoothPermission& other) {
		const QBluetoothPermission& other_ret = other;
		// Cast returned reference into pointer
		QBluetoothPermission* sigval1 = const_cast<QBluetoothPermission*>(&other_ret);
		miqt_exec_callback_QBluetoothPermission_operatorAssign(slot, sigval1);
	});
}

void QBluetoothPermission_swap(QBluetoothPermission* self, QBluetoothPermission* other) {
	self->swap(*other);
}

void QBluetoothPermission_connect_swap(QBluetoothPermission* self, intptr_t slot) {
	QBluetoothPermission::connect(self, static_cast<void (QBluetoothPermission::*)(QBluetoothPermission&)>(&QBluetoothPermission::swap), self, [=](QBluetoothPermission& other) {
		QBluetoothPermission& other_ret = other;
		// Cast returned reference into pointer
		QBluetoothPermission* sigval1 = &other_ret;
		miqt_exec_callback_QBluetoothPermission_swap(slot, sigval1);
	});
}

void QBluetoothPermission_delete(QBluetoothPermission* self) {
	delete self;
}

QCameraPermission* QCameraPermission_new() {
	return new (std::nothrow) QCameraPermission();
}

QCameraPermission* QCameraPermission_new2(QCameraPermission* other) {
	return new (std::nothrow) QCameraPermission(*other);
}

void QCameraPermission_operatorAssign(QCameraPermission* self, QCameraPermission* other) {
	self->operator=(*other);
}

void QCameraPermission_connect_operatorAssign(QCameraPermission* self, intptr_t slot) {
	QCameraPermission::connect(self, static_cast<void (QCameraPermission::*)(const QCameraPermission&)>(&QCameraPermission::operator=), self, [=](const QCameraPermission& other) {
		const QCameraPermission& other_ret = other;
		// Cast returned reference into pointer
		QCameraPermission* sigval1 = const_cast<QCameraPermission*>(&other_ret);
		miqt_exec_callback_QCameraPermission_operatorAssign(slot, sigval1);
	});
}

void QCameraPermission_swap(QCameraPermission* self, QCameraPermission* other) {
	self->swap(*other);
}

void QCameraPermission_connect_swap(QCameraPermission* self, intptr_t slot) {
	QCameraPermission::connect(self, static_cast<void (QCameraPermission::*)(QCameraPermission&)>(&QCameraPermission::swap), self, [=](QCameraPermission& other) {
		QCameraPermission& other_ret = other;
		// Cast returned reference into pointer
		QCameraPermission* sigval1 = &other_ret;
		miqt_exec_callback_QCameraPermission_swap(slot, sigval1);
	});
}

void QCameraPermission_delete(QCameraPermission* self) {
	delete self;
}

QMicrophonePermission* QMicrophonePermission_new() {
	return new (std::nothrow) QMicrophonePermission();
}

QMicrophonePermission* QMicrophonePermission_new2(QMicrophonePermission* other) {
	return new (std::nothrow) QMicrophonePermission(*other);
}

void QMicrophonePermission_operatorAssign(QMicrophonePermission* self, QMicrophonePermission* other) {
	self->operator=(*other);
}

void QMicrophonePermission_connect_operatorAssign(QMicrophonePermission* self, intptr_t slot) {
	QMicrophonePermission::connect(self, static_cast<void (QMicrophonePermission::*)(const QMicrophonePermission&)>(&QMicrophonePermission::operator=), self, [=](const QMicrophonePermission& other) {
		const QMicrophonePermission& other_ret = other;
		// Cast returned reference into pointer
		QMicrophonePermission* sigval1 = const_cast<QMicrophonePermission*>(&other_ret);
		miqt_exec_callback_QMicrophonePermission_operatorAssign(slot, sigval1);
	});
}

void QMicrophonePermission_swap(QMicrophonePermission* self, QMicrophonePermission* other) {
	self->swap(*other);
}

void QMicrophonePermission_connect_swap(QMicrophonePermission* self, intptr_t slot) {
	QMicrophonePermission::connect(self, static_cast<void (QMicrophonePermission::*)(QMicrophonePermission&)>(&QMicrophonePermission::swap), self, [=](QMicrophonePermission& other) {
		QMicrophonePermission& other_ret = other;
		// Cast returned reference into pointer
		QMicrophonePermission* sigval1 = &other_ret;
		miqt_exec_callback_QMicrophonePermission_swap(slot, sigval1);
	});
}

void QMicrophonePermission_delete(QMicrophonePermission* self) {
	delete self;
}

