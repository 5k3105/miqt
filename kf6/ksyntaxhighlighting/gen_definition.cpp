#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__Definition
#include <QChar>
#include <QList>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <definition.h>
#include "gen_definition.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

KSyntaxHighlighting__Definition* KSyntaxHighlighting__Definition_new() {
	return new (std::nothrow) KSyntaxHighlighting::Definition();
}

KSyntaxHighlighting__Definition* KSyntaxHighlighting__Definition_new2(const Definition* other) {
	return new (std::nothrow) KSyntaxHighlighting::Definition(*other);
}

void KSyntaxHighlighting__Definition_operatorAssign(KSyntaxHighlighting__Definition* self, const Definition* rhs) {
	self->operator=(*rhs);
}

bool KSyntaxHighlighting__Definition_operatorEqual(const KSyntaxHighlighting__Definition* self, const Definition* other) {
	return (*self == *other);
}

bool KSyntaxHighlighting__Definition_operatorNotEqual(const KSyntaxHighlighting__Definition* self, const Definition* other) {
	return (*self != *other);
}

bool KSyntaxHighlighting__Definition_isValid(const KSyntaxHighlighting__Definition* self) {
	return self->isValid();
}

struct miqt_string KSyntaxHighlighting__Definition_filePath(const KSyntaxHighlighting__Definition* self) {
	QString _ret = self->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string KSyntaxHighlighting__Definition_name(const KSyntaxHighlighting__Definition* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  KSyntaxHighlighting__Definition_alternativeNames(const KSyntaxHighlighting__Definition* self) {
	QStringList _ret = self->alternativeNames();
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

struct miqt_string KSyntaxHighlighting__Definition_translatedName(const KSyntaxHighlighting__Definition* self) {
	QString _ret = self->translatedName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string KSyntaxHighlighting__Definition_section(const KSyntaxHighlighting__Definition* self) {
	QString _ret = self->section();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string KSyntaxHighlighting__Definition_translatedSection(const KSyntaxHighlighting__Definition* self) {
	QString _ret = self->translatedSection();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  KSyntaxHighlighting__Definition_mimeTypes(const KSyntaxHighlighting__Definition* self) {
	QList<QString> _ret = self->mimeTypes();
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

struct miqt_array /* of struct miqt_string */  KSyntaxHighlighting__Definition_extensions(const KSyntaxHighlighting__Definition* self) {
	QList<QString> _ret = self->extensions();
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

int KSyntaxHighlighting__Definition_version(const KSyntaxHighlighting__Definition* self) {
	return self->version();
}

int KSyntaxHighlighting__Definition_priority(const KSyntaxHighlighting__Definition* self) {
	return self->priority();
}

bool KSyntaxHighlighting__Definition_isHidden(const KSyntaxHighlighting__Definition* self) {
	return self->isHidden();
}

struct miqt_string KSyntaxHighlighting__Definition_style(const KSyntaxHighlighting__Definition* self) {
	QString _ret = self->style();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string KSyntaxHighlighting__Definition_indenter(const KSyntaxHighlighting__Definition* self) {
	QString _ret = self->indenter();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string KSyntaxHighlighting__Definition_author(const KSyntaxHighlighting__Definition* self) {
	QString _ret = self->author();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string KSyntaxHighlighting__Definition_license(const KSyntaxHighlighting__Definition* self) {
	QString _ret = self->license();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool KSyntaxHighlighting__Definition_isWordDelimiter(const KSyntaxHighlighting__Definition* self, QChar* c) {
	return self->isWordDelimiter(*c);
}

bool KSyntaxHighlighting__Definition_isWordWrapDelimiter(const KSyntaxHighlighting__Definition* self, QChar* c) {
	return self->isWordWrapDelimiter(*c);
}

bool KSyntaxHighlighting__Definition_foldingEnabled(const KSyntaxHighlighting__Definition* self) {
	return self->foldingEnabled();
}

bool KSyntaxHighlighting__Definition_indentationBasedFoldingEnabled(const KSyntaxHighlighting__Definition* self) {
	return self->indentationBasedFoldingEnabled();
}

struct miqt_array /* of struct miqt_string */  KSyntaxHighlighting__Definition_foldingIgnoreList(const KSyntaxHighlighting__Definition* self) {
	QStringList _ret = self->foldingIgnoreList();
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

struct miqt_array /* of struct miqt_string */  KSyntaxHighlighting__Definition_keywordLists(const KSyntaxHighlighting__Definition* self) {
	QStringList _ret = self->keywordLists();
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

struct miqt_array /* of struct miqt_string */  KSyntaxHighlighting__Definition_keywordList(const KSyntaxHighlighting__Definition* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QStringList _ret = self->keywordList(name_QString);
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

bool KSyntaxHighlighting__Definition_setKeywordList(KSyntaxHighlighting__Definition* self, struct miqt_string name, struct miqt_array /* of struct miqt_string */  content) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QStringList content_QList;
	content_QList.reserve(content.len);
	struct miqt_string* content_arr = static_cast<struct miqt_string*>(content.data);
	for(size_t i = 0; i < content.len; ++i) {
		QString content_arr_i_QString = QString::fromUtf8(content_arr[i].data, content_arr[i].len);
		content_QList.push_back(content_arr_i_QString);
	}
	return self->setKeywordList(name_QString, content_QList);
}

struct miqt_array /* of Format */  KSyntaxHighlighting__Definition_formats(const KSyntaxHighlighting__Definition* self) {
	QList<Format> _ret = self->formats();
	// Convert QList<> from C++ memory to manually-managed C memory
	Format* _arr = static_cast<Format*>(malloc(sizeof(Format) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of Definition */  KSyntaxHighlighting__Definition_includedDefinitions(const KSyntaxHighlighting__Definition* self) {
	QList<Definition> _ret = self->includedDefinitions();
	// Convert QList<> from C++ memory to manually-managed C memory
	Definition* _arr = static_cast<Definition*>(malloc(sizeof(Definition) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string KSyntaxHighlighting__Definition_singleLineCommentMarker(const KSyntaxHighlighting__Definition* self) {
	QString _ret = self->singleLineCommentMarker();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

CommentPosition KSyntaxHighlighting__Definition_singleLineCommentPosition(const KSyntaxHighlighting__Definition* self) {
	return self->singleLineCommentPosition();
}

struct miqt_map /* tuple of struct miqt_string and struct miqt_string */  KSyntaxHighlighting__Definition_multiLineCommentMarker(const KSyntaxHighlighting__Definition* self) {
	QPair<QString, QString> _ret = self->multiLineCommentMarker();
	// Convert QPair<> from C++ memory to manually-managed C memory
	struct miqt_string* _first_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string)));
	struct miqt_string* _second_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string)));
	QString _first_ret = _ret.first;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _first_b = _first_ret.toUtf8();
	struct miqt_string _first_ms;
	_first_ms.len = _first_b.length();
	_first_ms.data = static_cast<char*>(malloc(_first_ms.len));
	memcpy(_first_ms.data, _first_b.data(), _first_ms.len);
	_first_arr[0] = _first_ms;
	QString _second_ret = _ret.second;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _second_b = _second_ret.toUtf8();
	struct miqt_string _second_ms;
	_second_ms.len = _second_b.length();
	_second_ms.data = static_cast<char*>(malloc(_second_ms.len));
	memcpy(_second_ms.data, _second_b.data(), _second_ms.len);
	_second_arr[0] = _second_ms;
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

struct miqt_array /* of struct miqt_map  tuple of QChar* and struct miqt_string   */  KSyntaxHighlighting__Definition_characterEncodings(const KSyntaxHighlighting__Definition* self) {
	QList<QPair<QChar, QString>> _ret = self->characterEncodings();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of QChar* and struct miqt_string */ * _arr = static_cast<struct miqt_map /* tuple of QChar* and struct miqt_string */ *>(malloc(sizeof(struct miqt_map /* tuple of QChar* and struct miqt_string */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<QChar, QString> _lv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		QChar** _lv_first_arr = static_cast<QChar**>(malloc(sizeof(QChar*)));
		struct miqt_string* _lv_second_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string)));
		_lv_first_arr[0] = new QChar(_lv_ret.first);
		QString _lv_second_ret = _lv_ret.second;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_second_b = _lv_second_ret.toUtf8();
		struct miqt_string _lv_second_ms;
		_lv_second_ms.len = _lv_second_b.length();
		_lv_second_ms.data = static_cast<char*>(malloc(_lv_second_ms.len));
		memcpy(_lv_second_ms.data, _lv_second_b.data(), _lv_second_ms.len);
		_lv_second_arr[0] = _lv_second_ms;
		struct miqt_map _lv_out;
		_lv_out.len = 1;
		_lv_out.keys = static_cast<void*>(_lv_first_arr);
		_lv_out.values = static_cast<void*>(_lv_second_arr);
		_arr[i] = _lv_out;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void KSyntaxHighlighting__Definition_delete(KSyntaxHighlighting__Definition* self) {
	delete self;
}

