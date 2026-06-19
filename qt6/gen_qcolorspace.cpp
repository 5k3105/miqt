#include <QByteArray>
#include <QColorSpace>
#define WORKAROUND_INNER_CLASS_DEFINITION_QColorSpace__PrimaryPoints
#include <QColorTransform>
#include <QList>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qcolorspace.h>
#include "gen_qcolorspace.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QColorSpace* QColorSpace_new() {
	return new (std::nothrow) QColorSpace();
}

QColorSpace* QColorSpace_new2(NamedColorSpace namedColorSpace) {
	return new (std::nothrow) QColorSpace(namedColorSpace);
}

QColorSpace* QColorSpace_new3(QPointF* whitePoint, TransferFunction transferFunction) {
	return new (std::nothrow) QColorSpace(*whitePoint, transferFunction);
}

QColorSpace* QColorSpace_new4(QPointF* whitePoint, struct miqt_array /* of uint16_t */  transferFunctionTable) {
	QList<uint16_t> transferFunctionTable_QList;
	transferFunctionTable_QList.reserve(transferFunctionTable.len);
	uint16_t* transferFunctionTable_arr = static_cast<uint16_t*>(transferFunctionTable.data);
	for(size_t i = 0; i < transferFunctionTable.len; ++i) {
		transferFunctionTable_QList.push_back(static_cast<uint16_t>(transferFunctionTable_arr[i]));
	}
	return new (std::nothrow) QColorSpace(*whitePoint, transferFunctionTable_QList);
}

QColorSpace* QColorSpace_new5(Primaries primaries, TransferFunction transferFunction) {
	return new (std::nothrow) QColorSpace(primaries, transferFunction);
}

QColorSpace* QColorSpace_new6(Primaries primaries, float gamma) {
	return new (std::nothrow) QColorSpace(primaries, static_cast<float>(gamma));
}

QColorSpace* QColorSpace_new7(Primaries primaries, struct miqt_array /* of uint16_t */  transferFunctionTable) {
	QList<uint16_t> transferFunctionTable_QList;
	transferFunctionTable_QList.reserve(transferFunctionTable.len);
	uint16_t* transferFunctionTable_arr = static_cast<uint16_t*>(transferFunctionTable.data);
	for(size_t i = 0; i < transferFunctionTable.len; ++i) {
		transferFunctionTable_QList.push_back(static_cast<uint16_t>(transferFunctionTable_arr[i]));
	}
	return new (std::nothrow) QColorSpace(primaries, transferFunctionTable_QList);
}

QColorSpace* QColorSpace_new8(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, TransferFunction transferFunction) {
	return new (std::nothrow) QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, transferFunction);
}

QColorSpace* QColorSpace_new9(const PrimaryPoints* primaryPoints, TransferFunction transferFunction) {
	return new (std::nothrow) QColorSpace(*primaryPoints, transferFunction);
}

QColorSpace* QColorSpace_new10(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, struct miqt_array /* of uint16_t */  transferFunctionTable) {
	QList<uint16_t> transferFunctionTable_QList;
	transferFunctionTable_QList.reserve(transferFunctionTable.len);
	uint16_t* transferFunctionTable_arr = static_cast<uint16_t*>(transferFunctionTable.data);
	for(size_t i = 0; i < transferFunctionTable.len; ++i) {
		transferFunctionTable_QList.push_back(static_cast<uint16_t>(transferFunctionTable_arr[i]));
	}
	return new (std::nothrow) QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, transferFunctionTable_QList);
}

QColorSpace* QColorSpace_new11(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, struct miqt_array /* of uint16_t */  redTransferFunctionTable, struct miqt_array /* of uint16_t */  greenTransferFunctionTable, struct miqt_array /* of uint16_t */  blueTransferFunctionTable) {
	QList<uint16_t> redTransferFunctionTable_QList;
	redTransferFunctionTable_QList.reserve(redTransferFunctionTable.len);
	uint16_t* redTransferFunctionTable_arr = static_cast<uint16_t*>(redTransferFunctionTable.data);
	for(size_t i = 0; i < redTransferFunctionTable.len; ++i) {
		redTransferFunctionTable_QList.push_back(static_cast<uint16_t>(redTransferFunctionTable_arr[i]));
	}
	QList<uint16_t> greenTransferFunctionTable_QList;
	greenTransferFunctionTable_QList.reserve(greenTransferFunctionTable.len);
	uint16_t* greenTransferFunctionTable_arr = static_cast<uint16_t*>(greenTransferFunctionTable.data);
	for(size_t i = 0; i < greenTransferFunctionTable.len; ++i) {
		greenTransferFunctionTable_QList.push_back(static_cast<uint16_t>(greenTransferFunctionTable_arr[i]));
	}
	QList<uint16_t> blueTransferFunctionTable_QList;
	blueTransferFunctionTable_QList.reserve(blueTransferFunctionTable.len);
	uint16_t* blueTransferFunctionTable_arr = static_cast<uint16_t*>(blueTransferFunctionTable.data);
	for(size_t i = 0; i < blueTransferFunctionTable.len; ++i) {
		blueTransferFunctionTable_QList.push_back(static_cast<uint16_t>(blueTransferFunctionTable_arr[i]));
	}
	return new (std::nothrow) QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, redTransferFunctionTable_QList, greenTransferFunctionTable_QList, blueTransferFunctionTable_QList);
}

QColorSpace* QColorSpace_new12(QColorSpace* colorSpace) {
	return new (std::nothrow) QColorSpace(*colorSpace);
}

QColorSpace* QColorSpace_new13(QPointF* whitePoint, TransferFunction transferFunction, float gamma) {
	return new (std::nothrow) QColorSpace(*whitePoint, transferFunction, static_cast<float>(gamma));
}

QColorSpace* QColorSpace_new14(Primaries primaries, TransferFunction transferFunction, float gamma) {
	return new (std::nothrow) QColorSpace(primaries, transferFunction, static_cast<float>(gamma));
}

QColorSpace* QColorSpace_new15(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, TransferFunction transferFunction, float gamma) {
	return new (std::nothrow) QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, transferFunction, static_cast<float>(gamma));
}

QColorSpace* QColorSpace_new16(const PrimaryPoints* primaryPoints, TransferFunction transferFunction, float gamma) {
	return new (std::nothrow) QColorSpace(*primaryPoints, transferFunction, static_cast<float>(gamma));
}

void QColorSpace_operatorAssign(QColorSpace* self, QColorSpace* colorSpace) {
	self->operator=(*colorSpace);
}

void QColorSpace_swap(QColorSpace* self, QColorSpace* colorSpace) {
	self->swap(*colorSpace);
}

Primaries QColorSpace_primaries(const QColorSpace* self) {
	return self->primaries();
}

TransferFunction QColorSpace_transferFunction(const QColorSpace* self) {
	return self->transferFunction();
}

float QColorSpace_gamma(const QColorSpace* self) {
	return self->gamma();
}

struct miqt_string QColorSpace_description(const QColorSpace* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QColorSpace_setDescription(QColorSpace* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setDescription(description_QString);
}

void QColorSpace_setTransferFunction(QColorSpace* self, TransferFunction transferFunction) {
	self->setTransferFunction(transferFunction);
}

void QColorSpace_setTransferFunctionWithTransferFunctionTable(QColorSpace* self, struct miqt_array /* of uint16_t */  transferFunctionTable) {
	QList<uint16_t> transferFunctionTable_QList;
	transferFunctionTable_QList.reserve(transferFunctionTable.len);
	uint16_t* transferFunctionTable_arr = static_cast<uint16_t*>(transferFunctionTable.data);
	for(size_t i = 0; i < transferFunctionTable.len; ++i) {
		transferFunctionTable_QList.push_back(static_cast<uint16_t>(transferFunctionTable_arr[i]));
	}
	self->setTransferFunction(transferFunctionTable_QList);
}

void QColorSpace_setTransferFunctions(QColorSpace* self, struct miqt_array /* of uint16_t */  redTransferFunctionTable, struct miqt_array /* of uint16_t */  greenTransferFunctionTable, struct miqt_array /* of uint16_t */  blueTransferFunctionTable) {
	QList<uint16_t> redTransferFunctionTable_QList;
	redTransferFunctionTable_QList.reserve(redTransferFunctionTable.len);
	uint16_t* redTransferFunctionTable_arr = static_cast<uint16_t*>(redTransferFunctionTable.data);
	for(size_t i = 0; i < redTransferFunctionTable.len; ++i) {
		redTransferFunctionTable_QList.push_back(static_cast<uint16_t>(redTransferFunctionTable_arr[i]));
	}
	QList<uint16_t> greenTransferFunctionTable_QList;
	greenTransferFunctionTable_QList.reserve(greenTransferFunctionTable.len);
	uint16_t* greenTransferFunctionTable_arr = static_cast<uint16_t*>(greenTransferFunctionTable.data);
	for(size_t i = 0; i < greenTransferFunctionTable.len; ++i) {
		greenTransferFunctionTable_QList.push_back(static_cast<uint16_t>(greenTransferFunctionTable_arr[i]));
	}
	QList<uint16_t> blueTransferFunctionTable_QList;
	blueTransferFunctionTable_QList.reserve(blueTransferFunctionTable.len);
	uint16_t* blueTransferFunctionTable_arr = static_cast<uint16_t*>(blueTransferFunctionTable.data);
	for(size_t i = 0; i < blueTransferFunctionTable.len; ++i) {
		blueTransferFunctionTable_QList.push_back(static_cast<uint16_t>(blueTransferFunctionTable_arr[i]));
	}
	self->setTransferFunctions(redTransferFunctionTable_QList, greenTransferFunctionTable_QList, blueTransferFunctionTable_QList);
}

QColorSpace* QColorSpace_withTransferFunction(const QColorSpace* self, TransferFunction transferFunction) {
	return new QColorSpace(self->withTransferFunction(transferFunction));
}

QColorSpace* QColorSpace_withTransferFunctionWithTransferFunctionTable(const QColorSpace* self, struct miqt_array /* of uint16_t */  transferFunctionTable) {
	QList<uint16_t> transferFunctionTable_QList;
	transferFunctionTable_QList.reserve(transferFunctionTable.len);
	uint16_t* transferFunctionTable_arr = static_cast<uint16_t*>(transferFunctionTable.data);
	for(size_t i = 0; i < transferFunctionTable.len; ++i) {
		transferFunctionTable_QList.push_back(static_cast<uint16_t>(transferFunctionTable_arr[i]));
	}
	return new QColorSpace(self->withTransferFunction(transferFunctionTable_QList));
}

QColorSpace* QColorSpace_withTransferFunctions(const QColorSpace* self, struct miqt_array /* of uint16_t */  redTransferFunctionTable, struct miqt_array /* of uint16_t */  greenTransferFunctionTable, struct miqt_array /* of uint16_t */  blueTransferFunctionTable) {
	QList<uint16_t> redTransferFunctionTable_QList;
	redTransferFunctionTable_QList.reserve(redTransferFunctionTable.len);
	uint16_t* redTransferFunctionTable_arr = static_cast<uint16_t*>(redTransferFunctionTable.data);
	for(size_t i = 0; i < redTransferFunctionTable.len; ++i) {
		redTransferFunctionTable_QList.push_back(static_cast<uint16_t>(redTransferFunctionTable_arr[i]));
	}
	QList<uint16_t> greenTransferFunctionTable_QList;
	greenTransferFunctionTable_QList.reserve(greenTransferFunctionTable.len);
	uint16_t* greenTransferFunctionTable_arr = static_cast<uint16_t*>(greenTransferFunctionTable.data);
	for(size_t i = 0; i < greenTransferFunctionTable.len; ++i) {
		greenTransferFunctionTable_QList.push_back(static_cast<uint16_t>(greenTransferFunctionTable_arr[i]));
	}
	QList<uint16_t> blueTransferFunctionTable_QList;
	blueTransferFunctionTable_QList.reserve(blueTransferFunctionTable.len);
	uint16_t* blueTransferFunctionTable_arr = static_cast<uint16_t*>(blueTransferFunctionTable.data);
	for(size_t i = 0; i < blueTransferFunctionTable.len; ++i) {
		blueTransferFunctionTable_QList.push_back(static_cast<uint16_t>(blueTransferFunctionTable_arr[i]));
	}
	return new QColorSpace(self->withTransferFunctions(redTransferFunctionTable_QList, greenTransferFunctionTable_QList, blueTransferFunctionTable_QList));
}

void QColorSpace_setPrimaries(QColorSpace* self, Primaries primariesId) {
	self->setPrimaries(primariesId);
}

void QColorSpace_setPrimaries2(QColorSpace* self, QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint) {
	self->setPrimaries(*whitePoint, *redPoint, *greenPoint, *bluePoint);
}

void QColorSpace_setWhitePoint(QColorSpace* self, QPointF* whitePoint) {
	self->setWhitePoint(*whitePoint);
}

QPointF* QColorSpace_whitePoint(const QColorSpace* self) {
	return new QPointF(self->whitePoint());
}

void QColorSpace_setPrimaryPoints(QColorSpace* self, const PrimaryPoints* primaryPoints) {
	self->setPrimaryPoints(*primaryPoints);
}

PrimaryPoints QColorSpace_primaryPoints(const QColorSpace* self) {
	return self->primaryPoints();
}

TransformModel QColorSpace_transformModel(const QColorSpace* self) {
	return self->transformModel();
}

ColorModel QColorSpace_colorModel(const QColorSpace* self) {
	return self->colorModel();
}

void QColorSpace_detach(QColorSpace* self) {
	self->detach();
}

bool QColorSpace_isValid(const QColorSpace* self) {
	return self->isValid();
}

bool QColorSpace_isValidTarget(const QColorSpace* self) {
	return self->isValidTarget();
}

QColorSpace* QColorSpace_fromIccProfile(struct miqt_string iccProfile) {
	QByteArray iccProfile_QByteArray(iccProfile.data, iccProfile.len);
	return new QColorSpace(QColorSpace::fromIccProfile(iccProfile_QByteArray));
}

struct miqt_string QColorSpace_iccProfile(const QColorSpace* self) {
	QByteArray _qb = self->iccProfile();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QColorTransform* QColorSpace_transformationToColorSpace(const QColorSpace* self, QColorSpace* colorspace) {
	return new QColorTransform(self->transformationToColorSpace(*colorspace));
}

QVariant* QColorSpace_ToQVariant(const QColorSpace* self) {
	return new QVariant(self->operator QVariant());
}

void QColorSpace_setTransferFunction2(QColorSpace* self, TransferFunction transferFunction, float gamma) {
	self->setTransferFunction(transferFunction, static_cast<float>(gamma));
}

QColorSpace* QColorSpace_withTransferFunction2(const QColorSpace* self, TransferFunction transferFunction, float gamma) {
	return new QColorSpace(self->withTransferFunction(transferFunction, static_cast<float>(gamma)));
}

void QColorSpace_delete(QColorSpace* self) {
	delete self;
}

PrimaryPoints QColorSpace__PrimaryPoints_fromPrimaries(Primaries primaries) {
	return QColorSpace::PrimaryPoints::fromPrimaries(primaries);
}

bool QColorSpace__PrimaryPoints_isValid(const QColorSpace__PrimaryPoints* self) {
	return self->isValid();
}

QPointF* QColorSpace__PrimaryPoints_whitePoint(const QColorSpace__PrimaryPoints* self) {
	return new QPointF(self->whitePoint);
}

void QColorSpace__PrimaryPoints_setWhitePoint(QColorSpace__PrimaryPoints* self, QPointF* whitePoint) {
	self->whitePoint = *whitePoint;
}

QPointF* QColorSpace__PrimaryPoints_redPoint(const QColorSpace__PrimaryPoints* self) {
	return new QPointF(self->redPoint);
}

void QColorSpace__PrimaryPoints_setRedPoint(QColorSpace__PrimaryPoints* self, QPointF* redPoint) {
	self->redPoint = *redPoint;
}

QPointF* QColorSpace__PrimaryPoints_greenPoint(const QColorSpace__PrimaryPoints* self) {
	return new QPointF(self->greenPoint);
}

void QColorSpace__PrimaryPoints_setGreenPoint(QColorSpace__PrimaryPoints* self, QPointF* greenPoint) {
	self->greenPoint = *greenPoint;
}

QPointF* QColorSpace__PrimaryPoints_bluePoint(const QColorSpace__PrimaryPoints* self) {
	return new QPointF(self->bluePoint);
}

void QColorSpace__PrimaryPoints_setBluePoint(QColorSpace__PrimaryPoints* self, QPointF* bluePoint) {
	self->bluePoint = *bluePoint;
}

void QColorSpace__PrimaryPoints_delete(QColorSpace__PrimaryPoints* self) {
	delete self;
}

