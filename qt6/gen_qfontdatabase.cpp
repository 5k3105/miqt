#include <QByteArray>
#include <QFont>
#include <QFontDatabase>
#include <QFontInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfontdatabase.h>
#include "gen_qfontdatabase.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QFontDatabase* QFontDatabase_new() {
	return new (std::nothrow) QFontDatabase();
}

struct miqt_array /* of int */  QFontDatabase_standardSizes() {
	QList<int> _ret = QFontDatabase::standardSizes();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of WritingSystem */  QFontDatabase_writingSystems() {
	QList<WritingSystem> _ret = QFontDatabase::writingSystems();
	// Convert QList<> from C++ memory to manually-managed C memory
	WritingSystem* _arr = static_cast<WritingSystem*>(malloc(sizeof(WritingSystem) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of WritingSystem */  QFontDatabase_writingSystemsWithFamily(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QList<WritingSystem> _ret = QFontDatabase::writingSystems(family_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	WritingSystem* _arr = static_cast<WritingSystem*>(malloc(sizeof(WritingSystem) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QFontDatabase_families() {
	QStringList _ret = QFontDatabase::families();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QFontDatabase_styles(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QStringList _ret = QFontDatabase::styles(family_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QFontDatabase_pointSizes(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QList<int> _ret = QFontDatabase::pointSizes(family_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QFontDatabase_smoothSizes(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	QList<int> _ret = QFontDatabase::smoothSizes(family_QString, style_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QFontDatabase_styleString(QFont* font) {
	QString _ret = QFontDatabase::styleString(*font);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontDatabase_styleStringWithFontInfo(QFontInfo* fontInfo) {
	QString _ret = QFontDatabase::styleString(*fontInfo);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QFont* QFontDatabase_font(struct miqt_string family, struct miqt_string style, int pointSize) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return new QFont(QFontDatabase::font(family_QString, style_QString, static_cast<int>(pointSize)));
}

bool QFontDatabase_isBitmapScalable(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return QFontDatabase::isBitmapScalable(family_QString);
}

bool QFontDatabase_isSmoothlyScalable(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return QFontDatabase::isSmoothlyScalable(family_QString);
}

bool QFontDatabase_isScalable(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return QFontDatabase::isScalable(family_QString);
}

bool QFontDatabase_isFixedPitch(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return QFontDatabase::isFixedPitch(family_QString);
}

bool QFontDatabase_italic(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return QFontDatabase::italic(family_QString, style_QString);
}

bool QFontDatabase_bold(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return QFontDatabase::bold(family_QString, style_QString);
}

int QFontDatabase_weight(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return QFontDatabase::weight(family_QString, style_QString);
}

bool QFontDatabase_hasFamily(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return QFontDatabase::hasFamily(family_QString);
}

bool QFontDatabase_isPrivateFamily(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return QFontDatabase::isPrivateFamily(family_QString);
}

struct miqt_string QFontDatabase_writingSystemName(WritingSystem writingSystem) {
	QString _ret = QFontDatabase::writingSystemName(writingSystem);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontDatabase_writingSystemSample(WritingSystem writingSystem) {
	QString _ret = QFontDatabase::writingSystemSample(writingSystem);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QFontDatabase_addApplicationFont(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QFontDatabase::addApplicationFont(fileName_QString);
}

int QFontDatabase_addApplicationFontFromData(struct miqt_string fontData) {
	QByteArray fontData_QByteArray(fontData.data, fontData.len);
	return QFontDatabase::addApplicationFontFromData(fontData_QByteArray);
}

struct miqt_array /* of struct miqt_string */  QFontDatabase_applicationFontFamilies(int id) {
	QStringList _ret = QFontDatabase::applicationFontFamilies(static_cast<int>(id));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QFontDatabase_removeApplicationFont(int id) {
	return QFontDatabase::removeApplicationFont(static_cast<int>(id));
}

bool QFontDatabase_removeAllApplicationFonts() {
	return QFontDatabase::removeAllApplicationFonts();
}

void QFontDatabase_addApplicationFallbackFontFamily(int script, struct miqt_string familyName) {
	QString familyName_QString = QString::fromUtf8(familyName.data, familyName.len);
	QFontDatabase::addApplicationFallbackFontFamily(static_cast<QChar::Script>(script), familyName_QString);
}

bool QFontDatabase_removeApplicationFallbackFontFamily(int script, struct miqt_string familyName) {
	QString familyName_QString = QString::fromUtf8(familyName.data, familyName.len);
	return QFontDatabase::removeApplicationFallbackFontFamily(static_cast<QChar::Script>(script), familyName_QString);
}

void QFontDatabase_setApplicationFallbackFontFamilies(int param1, struct miqt_array /* of struct miqt_string */  familyNames) {
	QStringList familyNames_QList;
	familyNames_QList.reserve(familyNames.len);
	struct miqt_string* familyNames_arr = static_cast<struct miqt_string*>(familyNames.data);
	for(size_t i = 0; i < familyNames.len; ++i) {
		QString familyNames_arr_i_QString = QString::fromUtf8(familyNames_arr[i].data, familyNames_arr[i].len);
		familyNames_QList.push_back(familyNames_arr_i_QString);
	}
	QFontDatabase::setApplicationFallbackFontFamilies(static_cast<QChar::Script>(param1), familyNames_QList);
}

struct miqt_array /* of struct miqt_string */  QFontDatabase_applicationFallbackFontFamilies(int script) {
	QStringList _ret = QFontDatabase::applicationFallbackFontFamilies(static_cast<QChar::Script>(script));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QFontDatabase_addApplicationEmojiFontFamily(struct miqt_string familyName) {
	QString familyName_QString = QString::fromUtf8(familyName.data, familyName.len);
	QFontDatabase::addApplicationEmojiFontFamily(familyName_QString);
}

bool QFontDatabase_removeApplicationEmojiFontFamily(struct miqt_string familyName) {
	QString familyName_QString = QString::fromUtf8(familyName.data, familyName.len);
	return QFontDatabase::removeApplicationEmojiFontFamily(familyName_QString);
}

void QFontDatabase_setApplicationEmojiFontFamilies(struct miqt_array /* of struct miqt_string */  familyNames) {
	QStringList familyNames_QList;
	familyNames_QList.reserve(familyNames.len);
	struct miqt_string* familyNames_arr = static_cast<struct miqt_string*>(familyNames.data);
	for(size_t i = 0; i < familyNames.len; ++i) {
		QString familyNames_arr_i_QString = QString::fromUtf8(familyNames_arr[i].data, familyNames_arr[i].len);
		familyNames_QList.push_back(familyNames_arr_i_QString);
	}
	QFontDatabase::setApplicationEmojiFontFamilies(familyNames_QList);
}

struct miqt_array /* of struct miqt_string */  QFontDatabase_applicationEmojiFontFamilies() {
	QStringList _ret = QFontDatabase::applicationEmojiFontFamilies();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QFont* QFontDatabase_systemFont(SystemFont type) {
	return new QFont(QFontDatabase::systemFont(type));
}

struct miqt_array /* of struct miqt_string */  QFontDatabase_familiesWithWritingSystem(WritingSystem writingSystem) {
	QStringList _ret = QFontDatabase::families(writingSystem);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QFontDatabase_pointSizes2(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	QList<int> _ret = QFontDatabase::pointSizes(family_QString, style_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QFontDatabase_isBitmapScalable2(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return QFontDatabase::isBitmapScalable(family_QString, style_QString);
}

bool QFontDatabase_isSmoothlyScalable2(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return QFontDatabase::isSmoothlyScalable(family_QString, style_QString);
}

bool QFontDatabase_isScalable2(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return QFontDatabase::isScalable(family_QString, style_QString);
}

bool QFontDatabase_isFixedPitch2(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return QFontDatabase::isFixedPitch(family_QString, style_QString);
}

void QFontDatabase_delete(QFontDatabase* self) {
	delete self;
}

