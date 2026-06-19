#include <QByteArray>
#include <QByteArrayView>
#include <QDateTime>
#include <QList>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimeZone>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTimeZone__OffsetData
#include <qtimezone.h>
#include "gen_qtimezone.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QTimeZone* QTimeZone_new() {
	return new (std::nothrow) QTimeZone();
}

QTimeZone* QTimeZone_new2(Initialization spec) {
	return new (std::nothrow) QTimeZone(spec);
}

QTimeZone* QTimeZone_new3(int offsetSeconds) {
	return new (std::nothrow) QTimeZone(static_cast<int>(offsetSeconds));
}

QTimeZone* QTimeZone_new4(struct miqt_string ianaId) {
	QByteArray ianaId_QByteArray(ianaId.data, ianaId.len);
	return new (std::nothrow) QTimeZone(ianaId_QByteArray);
}

QTimeZone* QTimeZone_new5(struct miqt_string zoneId, int offsetSeconds, struct miqt_string name, struct miqt_string abbreviation) {
	QByteArray zoneId_QByteArray(zoneId.data, zoneId.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString abbreviation_QString = QString::fromUtf8(abbreviation.data, abbreviation.len);
	return new (std::nothrow) QTimeZone(zoneId_QByteArray, static_cast<int>(offsetSeconds), name_QString, abbreviation_QString);
}

QTimeZone* QTimeZone_new6(QTimeZone* other) {
	return new (std::nothrow) QTimeZone(*other);
}

QTimeZone* QTimeZone_new7(struct miqt_string zoneId, int offsetSeconds, struct miqt_string name, struct miqt_string abbreviation, Country territory) {
	QByteArray zoneId_QByteArray(zoneId.data, zoneId.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString abbreviation_QString = QString::fromUtf8(abbreviation.data, abbreviation.len);
	return new (std::nothrow) QTimeZone(zoneId_QByteArray, static_cast<int>(offsetSeconds), name_QString, abbreviation_QString, territory);
}

QTimeZone* QTimeZone_new8(struct miqt_string zoneId, int offsetSeconds, struct miqt_string name, struct miqt_string abbreviation, Country territory, struct miqt_string comment) {
	QByteArray zoneId_QByteArray(zoneId.data, zoneId.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString abbreviation_QString = QString::fromUtf8(abbreviation.data, abbreviation.len);
	QString comment_QString = QString::fromUtf8(comment.data, comment.len);
	return new (std::nothrow) QTimeZone(zoneId_QByteArray, static_cast<int>(offsetSeconds), name_QString, abbreviation_QString, territory, comment_QString);
}

void QTimeZone_operatorAssign(QTimeZone* self, QTimeZone* other) {
	self->operator=(*other);
}

void QTimeZone_swap(QTimeZone* self, QTimeZone* other) {
	self->swap(*other);
}

bool QTimeZone_isValid(const QTimeZone* self) {
	return self->isValid();
}

QTimeZone* QTimeZone_fromSecondsAheadOfUtc(int offset) {
	return new QTimeZone(QTimeZone::fromSecondsAheadOfUtc(static_cast<int>(offset)));
}

int QTimeZone_timeSpec(const QTimeZone* self) {
	Qt::TimeSpec _ret = self->timeSpec();
	return static_cast<int>(_ret);
}

int QTimeZone_fixedSecondsAheadOfUtc(const QTimeZone* self) {
	return self->fixedSecondsAheadOfUtc();
}

bool QTimeZone_isUtcOrFixedOffset(int spec) {
	return QTimeZone::isUtcOrFixedOffset(static_cast<Qt::TimeSpec>(spec));
}

bool QTimeZone_isUtcOrFixedOffset2(const QTimeZone* self) {
	return self->isUtcOrFixedOffset();
}

QTimeZone* QTimeZone_asBackendZone(const QTimeZone* self) {
	return new QTimeZone(self->asBackendZone());
}

bool QTimeZone_hasAlternativeName(const QTimeZone* self, QByteArrayView* alias) {
	return self->hasAlternativeName(*alias);
}

struct miqt_string QTimeZone_id(const QTimeZone* self) {
	QByteArray _qb = self->id();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

Country QTimeZone_territory(const QTimeZone* self) {
	QLocale::Territory _ret = self->territory();
	return static_cast<Country>(_ret);
}

unsigned short QTimeZone_country(const QTimeZone* self) {
	QLocale::Country _ret = self->country();
	return static_cast<unsigned short>(_ret);
}

struct miqt_string QTimeZone_comment(const QTimeZone* self) {
	QString _ret = self->comment();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_displayName(const QTimeZone* self, QDateTime* atDateTime) {
	QString _ret = self->displayName(*atDateTime);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_displayNameWithTimeType(const QTimeZone* self, TimeType timeType) {
	QString _ret = self->displayName(timeType);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_abbreviation(const QTimeZone* self, QDateTime* atDateTime) {
	QString _ret = self->abbreviation(*atDateTime);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTimeZone_offsetFromUtc(const QTimeZone* self, QDateTime* atDateTime) {
	return self->offsetFromUtc(*atDateTime);
}

int QTimeZone_standardTimeOffset(const QTimeZone* self, QDateTime* atDateTime) {
	return self->standardTimeOffset(*atDateTime);
}

int QTimeZone_daylightTimeOffset(const QTimeZone* self, QDateTime* atDateTime) {
	return self->daylightTimeOffset(*atDateTime);
}

bool QTimeZone_hasDaylightTime(const QTimeZone* self) {
	return self->hasDaylightTime();
}

bool QTimeZone_isDaylightTime(const QTimeZone* self, QDateTime* atDateTime) {
	return self->isDaylightTime(*atDateTime);
}

OffsetData QTimeZone_offsetData(const QTimeZone* self, QDateTime* forDateTime) {
	return self->offsetData(*forDateTime);
}

bool QTimeZone_hasTransitions(const QTimeZone* self) {
	return self->hasTransitions();
}

OffsetData QTimeZone_nextTransition(const QTimeZone* self, QDateTime* afterDateTime) {
	return self->nextTransition(*afterDateTime);
}

OffsetData QTimeZone_previousTransition(const QTimeZone* self, QDateTime* beforeDateTime) {
	return self->previousTransition(*beforeDateTime);
}

OffsetDataList QTimeZone_transitions(const QTimeZone* self, QDateTime* fromDateTime, QDateTime* toDateTime) {
	return self->transitions(*fromDateTime, *toDateTime);
}

struct miqt_string QTimeZone_systemTimeZoneId() {
	QByteArray _qb = QTimeZone::systemTimeZoneId();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QTimeZone* QTimeZone_systemTimeZone() {
	return new QTimeZone(QTimeZone::systemTimeZone());
}

QTimeZone* QTimeZone_utc() {
	return new QTimeZone(QTimeZone::utc());
}

bool QTimeZone_isTimeZoneIdAvailable(struct miqt_string ianaId) {
	QByteArray ianaId_QByteArray(ianaId.data, ianaId.len);
	return QTimeZone::isTimeZoneIdAvailable(ianaId_QByteArray);
}

struct miqt_array /* of struct miqt_string */  QTimeZone_availableTimeZoneIds() {
	QList<QByteArray> _ret = QTimeZone::availableTimeZoneIds();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QTimeZone_availableTimeZoneIdsWithTerritory(Country territory) {
	QList<QByteArray> _ret = QTimeZone::availableTimeZoneIds(territory);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QTimeZone_availableTimeZoneIdsWithOffsetSeconds(int offsetSeconds) {
	QList<QByteArray> _ret = QTimeZone::availableTimeZoneIds(static_cast<int>(offsetSeconds));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QTimeZone_ianaIdToWindowsId(struct miqt_string ianaId) {
	QByteArray ianaId_QByteArray(ianaId.data, ianaId.len);
	QByteArray _qb = QTimeZone::ianaIdToWindowsId(ianaId_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_windowsIdToDefaultIanaId(struct miqt_string windowsId) {
	QByteArray windowsId_QByteArray(windowsId.data, windowsId.len);
	QByteArray _qb = QTimeZone::windowsIdToDefaultIanaId(windowsId_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_windowsIdToDefaultIanaId2(struct miqt_string windowsId, Country territory) {
	QByteArray windowsId_QByteArray(windowsId.data, windowsId.len);
	QByteArray _qb = QTimeZone::windowsIdToDefaultIanaId(windowsId_QByteArray, territory);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QTimeZone_windowsIdToIanaIds(struct miqt_string windowsId) {
	QByteArray windowsId_QByteArray(windowsId.data, windowsId.len);
	QList<QByteArray> _ret = QTimeZone::windowsIdToIanaIds(windowsId_QByteArray);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QTimeZone_windowsIdToIanaIds2(struct miqt_string windowsId, Country territory) {
	QByteArray windowsId_QByteArray(windowsId.data, windowsId.len);
	QList<QByteArray> _ret = QTimeZone::windowsIdToIanaIds(windowsId_QByteArray, territory);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QTimeZone_displayName2(const QTimeZone* self, QDateTime* atDateTime, NameType nameType) {
	QString _ret = self->displayName(*atDateTime, nameType);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_displayName3(const QTimeZone* self, QDateTime* atDateTime, NameType nameType, QLocale* locale) {
	QString _ret = self->displayName(*atDateTime, nameType, *locale);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_displayName4(const QTimeZone* self, TimeType timeType, NameType nameType) {
	QString _ret = self->displayName(timeType, nameType);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_displayName5(const QTimeZone* self, TimeType timeType, NameType nameType, QLocale* locale) {
	QString _ret = self->displayName(timeType, nameType, *locale);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTimeZone_delete(QTimeZone* self) {
	delete self;
}

QTimeZone__OffsetData* QTimeZone__OffsetData_new(const OffsetData* param1) {
	return new (std::nothrow) QTimeZone::OffsetData(*param1);
}

QTimeZone__OffsetData* QTimeZone__OffsetData_new2() {
	return new (std::nothrow) QTimeZone::OffsetData();
}

struct miqt_string QTimeZone__OffsetData_abbreviation(const QTimeZone__OffsetData* self) {
	QString abbreviation_ret = self->abbreviation;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray abbreviation_b = abbreviation_ret.toUtf8();
	struct miqt_string abbreviation_ms;
	abbreviation_ms.len = abbreviation_b.length();
	abbreviation_ms.data = static_cast<char*>(malloc(abbreviation_ms.len));
	memcpy(abbreviation_ms.data, abbreviation_b.data(), abbreviation_ms.len);
	return abbreviation_ms;
}

void QTimeZone__OffsetData_setAbbreviation(QTimeZone__OffsetData* self, struct miqt_string abbreviation) {
	QString abbreviation_QString = QString::fromUtf8(abbreviation.data, abbreviation.len);
	self->abbreviation = abbreviation_QString;
}

QDateTime* QTimeZone__OffsetData_atUtc(const QTimeZone__OffsetData* self) {
	return new QDateTime(self->atUtc);
}

void QTimeZone__OffsetData_setAtUtc(QTimeZone__OffsetData* self, QDateTime* atUtc) {
	self->atUtc = *atUtc;
}

int QTimeZone__OffsetData_offsetFromUtc(const QTimeZone__OffsetData* self) {
	return self->offsetFromUtc;
}

void QTimeZone__OffsetData_setOffsetFromUtc(QTimeZone__OffsetData* self, int offsetFromUtc) {
	self->offsetFromUtc = static_cast<int>(offsetFromUtc);
}

int QTimeZone__OffsetData_standardTimeOffset(const QTimeZone__OffsetData* self) {
	return self->standardTimeOffset;
}

void QTimeZone__OffsetData_setStandardTimeOffset(QTimeZone__OffsetData* self, int standardTimeOffset) {
	self->standardTimeOffset = static_cast<int>(standardTimeOffset);
}

int QTimeZone__OffsetData_daylightTimeOffset(const QTimeZone__OffsetData* self) {
	return self->daylightTimeOffset;
}

void QTimeZone__OffsetData_setDaylightTimeOffset(QTimeZone__OffsetData* self, int daylightTimeOffset) {
	self->daylightTimeOffset = static_cast<int>(daylightTimeOffset);
}

void QTimeZone__OffsetData_operatorAssign(QTimeZone__OffsetData* self, const OffsetData* param1) {
	self->operator=(*param1);
}

void QTimeZone__OffsetData_delete(QTimeZone__OffsetData* self) {
	delete self;
}

