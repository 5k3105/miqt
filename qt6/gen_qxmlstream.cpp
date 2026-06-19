#include <QAnyStringView>
#include <QIODevice>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QXmlStreamAttribute>
#include <QXmlStreamEntityDeclaration>
#include <QXmlStreamEntityResolver>
#include <QXmlStreamNamespaceDeclaration>
#include <QXmlStreamNotationDeclaration>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include <qxmlstream.h>
#include "gen_qxmlstream.h"

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_string miqt_exec_callback_QXmlStreamEntityResolver_resolveEntity(QXmlStreamEntityResolver*, intptr_t, struct miqt_string, struct miqt_string);
struct miqt_string miqt_exec_callback_QXmlStreamEntityResolver_resolveUndeclaredEntity(QXmlStreamEntityResolver*, intptr_t, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

QXmlStreamAttribute* QXmlStreamAttribute_new() {
	return new (std::nothrow) QXmlStreamAttribute();
}

QXmlStreamAttribute* QXmlStreamAttribute_new2(struct miqt_string qualifiedName, struct miqt_string value) {
	QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	return new (std::nothrow) QXmlStreamAttribute(qualifiedName_QString, value_QString);
}

QXmlStreamAttribute* QXmlStreamAttribute_new3(struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string value) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	return new (std::nothrow) QXmlStreamAttribute(namespaceUri_QString, name_QString, value_QString);
}

QXmlStreamAttribute* QXmlStreamAttribute_new4(QXmlStreamAttribute* param1) {
	return new (std::nothrow) QXmlStreamAttribute(*param1);
}

bool QXmlStreamAttribute_isDefault(const QXmlStreamAttribute* self) {
	return self->isDefault();
}

void QXmlStreamAttribute_operatorAssign(QXmlStreamAttribute* self, QXmlStreamAttribute* param1) {
	self->operator=(*param1);
}

void QXmlStreamAttribute_delete(QXmlStreamAttribute* self) {
	delete self;
}

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new() {
	return new (std::nothrow) QXmlStreamNamespaceDeclaration();
}

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new2(struct miqt_string prefix, struct miqt_string namespaceUri) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	return new (std::nothrow) QXmlStreamNamespaceDeclaration(prefix_QString, namespaceUri_QString);
}

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new3(QXmlStreamNamespaceDeclaration* param1) {
	return new (std::nothrow) QXmlStreamNamespaceDeclaration(*param1);
}

void QXmlStreamNamespaceDeclaration_delete(QXmlStreamNamespaceDeclaration* self) {
	delete self;
}

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new() {
	return new (std::nothrow) QXmlStreamNotationDeclaration();
}

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new2(QXmlStreamNotationDeclaration* param1) {
	return new (std::nothrow) QXmlStreamNotationDeclaration(*param1);
}

void QXmlStreamNotationDeclaration_delete(QXmlStreamNotationDeclaration* self) {
	delete self;
}

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new() {
	return new (std::nothrow) QXmlStreamEntityDeclaration();
}

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new2(QXmlStreamEntityDeclaration* param1) {
	return new (std::nothrow) QXmlStreamEntityDeclaration(*param1);
}

void QXmlStreamEntityDeclaration_delete(QXmlStreamEntityDeclaration* self) {
	delete self;
}

class MiqtVirtualQXmlStreamEntityResolver final : public QXmlStreamEntityResolver {
public:

	MiqtVirtualQXmlStreamEntityResolver(): QXmlStreamEntityResolver() {}

	virtual ~MiqtVirtualQXmlStreamEntityResolver() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resolveEntity = 0;

	// Subclass to allow providing a Go implementation
	virtual QString resolveEntity(const QString& publicId, const QString& systemId) override {
		if (handle__resolveEntity == 0) {
			return QXmlStreamEntityResolver::resolveEntity(publicId, systemId);
		}

		const QString publicId_ret = publicId;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray publicId_b = publicId_ret.toUtf8();
		struct miqt_string publicId_ms;
		publicId_ms.len = publicId_b.length();
		publicId_ms.data = static_cast<char*>(malloc(publicId_ms.len));
		memcpy(publicId_ms.data, publicId_b.data(), publicId_ms.len);
		struct miqt_string sigval1 = publicId_ms;
		const QString systemId_ret = systemId;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray systemId_b = systemId_ret.toUtf8();
		struct miqt_string systemId_ms;
		systemId_ms.len = systemId_b.length();
		systemId_ms.data = static_cast<char*>(malloc(systemId_ms.len));
		memcpy(systemId_ms.data, systemId_b.data(), systemId_ms.len);
		struct miqt_string sigval2 = systemId_ms;
		struct miqt_string callback_return_value = miqt_exec_callback_QXmlStreamEntityResolver_resolveEntity(this, handle__resolveEntity, sigval1, sigval2);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	friend struct miqt_string QXmlStreamEntityResolver_virtualbase_resolveEntity(void* self, struct miqt_string publicId, struct miqt_string systemId);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resolveUndeclaredEntity = 0;

	// Subclass to allow providing a Go implementation
	virtual QString resolveUndeclaredEntity(const QString& name) override {
		if (handle__resolveUndeclaredEntity == 0) {
			return QXmlStreamEntityResolver::resolveUndeclaredEntity(name);
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		struct miqt_string callback_return_value = miqt_exec_callback_QXmlStreamEntityResolver_resolveUndeclaredEntity(this, handle__resolveUndeclaredEntity, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	friend struct miqt_string QXmlStreamEntityResolver_virtualbase_resolveUndeclaredEntity(void* self, struct miqt_string name);

};

QXmlStreamEntityResolver* QXmlStreamEntityResolver_new() {
	return new (std::nothrow) MiqtVirtualQXmlStreamEntityResolver();
}

struct miqt_string QXmlStreamEntityResolver_resolveEntity(QXmlStreamEntityResolver* self, struct miqt_string publicId, struct miqt_string systemId) {
	QString publicId_QString = QString::fromUtf8(publicId.data, publicId.len);
	QString systemId_QString = QString::fromUtf8(systemId.data, systemId.len);
	QString _ret = self->resolveEntity(publicId_QString, systemId_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QXmlStreamEntityResolver_resolveUndeclaredEntity(QXmlStreamEntityResolver* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = self->resolveUndeclaredEntity(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QXmlStreamEntityResolver_override_virtual_resolveEntity(void* self, intptr_t slot) {
	MiqtVirtualQXmlStreamEntityResolver* self_cast = dynamic_cast<MiqtVirtualQXmlStreamEntityResolver*>( (QXmlStreamEntityResolver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resolveEntity = slot;
	return true;
}

struct miqt_string QXmlStreamEntityResolver_virtualbase_resolveEntity(void* self, struct miqt_string publicId, struct miqt_string systemId) {
	QString publicId_QString = QString::fromUtf8(publicId.data, publicId.len);
	QString systemId_QString = QString::fromUtf8(systemId.data, systemId.len);
	QString _ret = static_cast<MiqtVirtualQXmlStreamEntityResolver*>(self)->QXmlStreamEntityResolver::resolveEntity(publicId_QString, systemId_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QXmlStreamEntityResolver_override_virtual_resolveUndeclaredEntity(void* self, intptr_t slot) {
	MiqtVirtualQXmlStreamEntityResolver* self_cast = dynamic_cast<MiqtVirtualQXmlStreamEntityResolver*>( (QXmlStreamEntityResolver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resolveUndeclaredEntity = slot;
	return true;
}

struct miqt_string QXmlStreamEntityResolver_virtualbase_resolveUndeclaredEntity(void* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = static_cast<MiqtVirtualQXmlStreamEntityResolver*>(self)->QXmlStreamEntityResolver::resolveUndeclaredEntity(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QXmlStreamEntityResolver_delete(QXmlStreamEntityResolver* self) {
	delete self;
}

QXmlStreamReader* QXmlStreamReader_new() {
	return new (std::nothrow) QXmlStreamReader();
}

QXmlStreamReader* QXmlStreamReader_new2(QIODevice* device) {
	return new (std::nothrow) QXmlStreamReader(device);
}

QXmlStreamReader* QXmlStreamReader_new3(QAnyStringView* data) {
	return new (std::nothrow) QXmlStreamReader(*data);
}

void QXmlStreamReader_setDevice(QXmlStreamReader* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QXmlStreamReader_device(const QXmlStreamReader* self) {
	return self->device();
}

void QXmlStreamReader_addData(QXmlStreamReader* self, QAnyStringView* data) {
	self->addData(*data);
}

void QXmlStreamReader_clear(QXmlStreamReader* self) {
	self->clear();
}

bool QXmlStreamReader_atEnd(const QXmlStreamReader* self) {
	return self->atEnd();
}

TokenType QXmlStreamReader_readNext(QXmlStreamReader* self) {
	return self->readNext();
}

bool QXmlStreamReader_readNextStartElement(QXmlStreamReader* self) {
	return self->readNextStartElement();
}

void QXmlStreamReader_skipCurrentElement(QXmlStreamReader* self) {
	self->skipCurrentElement();
}

struct miqt_string QXmlStreamReader_readRawInnerData(QXmlStreamReader* self) {
	QString _ret = self->readRawInnerData();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

TokenType QXmlStreamReader_tokenType(const QXmlStreamReader* self) {
	return self->tokenType();
}

struct miqt_string QXmlStreamReader_tokenString(const QXmlStreamReader* self) {
	QString _ret = self->tokenString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QXmlStreamReader_setNamespaceProcessing(QXmlStreamReader* self, bool namespaceProcessing) {
	self->setNamespaceProcessing(namespaceProcessing);
}

bool QXmlStreamReader_namespaceProcessing(const QXmlStreamReader* self) {
	return self->namespaceProcessing();
}

bool QXmlStreamReader_isStartDocument(const QXmlStreamReader* self) {
	return self->isStartDocument();
}

bool QXmlStreamReader_isEndDocument(const QXmlStreamReader* self) {
	return self->isEndDocument();
}

bool QXmlStreamReader_isStartElement(const QXmlStreamReader* self) {
	return self->isStartElement();
}

bool QXmlStreamReader_isEndElement(const QXmlStreamReader* self) {
	return self->isEndElement();
}

bool QXmlStreamReader_isCharacters(const QXmlStreamReader* self) {
	return self->isCharacters();
}

bool QXmlStreamReader_isWhitespace(const QXmlStreamReader* self) {
	return self->isWhitespace();
}

bool QXmlStreamReader_isCDATA(const QXmlStreamReader* self) {
	return self->isCDATA();
}

bool QXmlStreamReader_isComment(const QXmlStreamReader* self) {
	return self->isComment();
}

bool QXmlStreamReader_isDTD(const QXmlStreamReader* self) {
	return self->isDTD();
}

bool QXmlStreamReader_isEntityReference(const QXmlStreamReader* self) {
	return self->isEntityReference();
}

bool QXmlStreamReader_isProcessingInstruction(const QXmlStreamReader* self) {
	return self->isProcessingInstruction();
}

bool QXmlStreamReader_isStandaloneDocument(const QXmlStreamReader* self) {
	return self->isStandaloneDocument();
}

bool QXmlStreamReader_hasStandaloneDeclaration(const QXmlStreamReader* self) {
	return self->hasStandaloneDeclaration();
}

long long QXmlStreamReader_lineNumber(const QXmlStreamReader* self) {
	qint64 _ret = self->lineNumber();
	return static_cast<long long>(_ret);
}

long long QXmlStreamReader_columnNumber(const QXmlStreamReader* self) {
	qint64 _ret = self->columnNumber();
	return static_cast<long long>(_ret);
}

long long QXmlStreamReader_characterOffset(const QXmlStreamReader* self) {
	qint64 _ret = self->characterOffset();
	return static_cast<long long>(_ret);
}

struct miqt_string QXmlStreamReader_readElementText(QXmlStreamReader* self) {
	QString _ret = self->readElementText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QXmlStreamNamespaceDeclaration* */  QXmlStreamReader_namespaceDeclarations(const QXmlStreamReader* self) {
	QXmlStreamNamespaceDeclarations _ret = self->namespaceDeclarations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QXmlStreamNamespaceDeclaration** _arr = static_cast<QXmlStreamNamespaceDeclaration**>(malloc(sizeof(QXmlStreamNamespaceDeclaration*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QXmlStreamNamespaceDeclaration(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QXmlStreamReader_addExtraNamespaceDeclaration(QXmlStreamReader* self, QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction) {
	self->addExtraNamespaceDeclaration(*extraNamespaceDeclaraction);
}

void QXmlStreamReader_addExtraNamespaceDeclarations(QXmlStreamReader* self, struct miqt_array /* of QXmlStreamNamespaceDeclaration* */  extraNamespaceDeclaractions) {
	QXmlStreamNamespaceDeclarations extraNamespaceDeclaractions_QList;
	extraNamespaceDeclaractions_QList.reserve(extraNamespaceDeclaractions.len);
	QXmlStreamNamespaceDeclaration** extraNamespaceDeclaractions_arr = static_cast<QXmlStreamNamespaceDeclaration**>(extraNamespaceDeclaractions.data);
	for(size_t i = 0; i < extraNamespaceDeclaractions.len; ++i) {
		extraNamespaceDeclaractions_QList.push_back(*(extraNamespaceDeclaractions_arr[i]));
	}
	self->addExtraNamespaceDeclarations(extraNamespaceDeclaractions_QList);
}

struct miqt_array /* of QXmlStreamNotationDeclaration* */  QXmlStreamReader_notationDeclarations(const QXmlStreamReader* self) {
	QXmlStreamNotationDeclarations _ret = self->notationDeclarations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QXmlStreamNotationDeclaration** _arr = static_cast<QXmlStreamNotationDeclaration**>(malloc(sizeof(QXmlStreamNotationDeclaration*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QXmlStreamNotationDeclaration(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QXmlStreamEntityDeclaration* */  QXmlStreamReader_entityDeclarations(const QXmlStreamReader* self) {
	QXmlStreamEntityDeclarations _ret = self->entityDeclarations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QXmlStreamEntityDeclaration** _arr = static_cast<QXmlStreamEntityDeclaration**>(malloc(sizeof(QXmlStreamEntityDeclaration*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QXmlStreamEntityDeclaration(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QXmlStreamReader_entityExpansionLimit(const QXmlStreamReader* self) {
	return self->entityExpansionLimit();
}

void QXmlStreamReader_setEntityExpansionLimit(QXmlStreamReader* self, int limit) {
	self->setEntityExpansionLimit(static_cast<int>(limit));
}

void QXmlStreamReader_raiseError(QXmlStreamReader* self) {
	self->raiseError();
}

struct miqt_string QXmlStreamReader_errorString(const QXmlStreamReader* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

Error QXmlStreamReader_error(const QXmlStreamReader* self) {
	return self->error();
}

bool QXmlStreamReader_hasError(const QXmlStreamReader* self) {
	return self->hasError();
}

void QXmlStreamReader_setEntityResolver(QXmlStreamReader* self, QXmlStreamEntityResolver* resolver) {
	self->setEntityResolver(resolver);
}

QXmlStreamEntityResolver* QXmlStreamReader_entityResolver(const QXmlStreamReader* self) {
	return self->entityResolver();
}

struct miqt_string QXmlStreamReader_readElementTextWithBehaviour(QXmlStreamReader* self, ReadElementTextBehaviour behaviour) {
	QString _ret = self->readElementText(behaviour);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QXmlStreamReader_raiseErrorWithMessage(QXmlStreamReader* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->raiseError(message_QString);
}

void QXmlStreamReader_delete(QXmlStreamReader* self) {
	delete self;
}

QXmlStreamWriter* QXmlStreamWriter_new() {
	return new (std::nothrow) QXmlStreamWriter();
}

QXmlStreamWriter* QXmlStreamWriter_new2(QIODevice* device) {
	return new (std::nothrow) QXmlStreamWriter(device);
}

void QXmlStreamWriter_setDevice(QXmlStreamWriter* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QXmlStreamWriter_device(const QXmlStreamWriter* self) {
	return self->device();
}

void QXmlStreamWriter_setAutoFormatting(QXmlStreamWriter* self, bool autoFormatting) {
	self->setAutoFormatting(autoFormatting);
}

bool QXmlStreamWriter_autoFormatting(const QXmlStreamWriter* self) {
	return self->autoFormatting();
}

void QXmlStreamWriter_setAutoFormattingIndent(QXmlStreamWriter* self, int spacesOrTabs) {
	self->setAutoFormattingIndent(static_cast<int>(spacesOrTabs));
}

int QXmlStreamWriter_autoFormattingIndent(const QXmlStreamWriter* self) {
	return self->autoFormattingIndent();
}

void QXmlStreamWriter_setStopWritingOnError(QXmlStreamWriter* self, bool stop) {
	self->setStopWritingOnError(stop);
}

bool QXmlStreamWriter_stopWritingOnError(const QXmlStreamWriter* self) {
	return self->stopWritingOnError();
}

void QXmlStreamWriter_writeAttribute(QXmlStreamWriter* self, QAnyStringView* qualifiedName, QAnyStringView* value) {
	self->writeAttribute(*qualifiedName, *value);
}

void QXmlStreamWriter_writeAttribute2(QXmlStreamWriter* self, QAnyStringView* namespaceUri, QAnyStringView* name, QAnyStringView* value) {
	self->writeAttribute(*namespaceUri, *name, *value);
}

void QXmlStreamWriter_writeAttributeWithAttribute(QXmlStreamWriter* self, QXmlStreamAttribute* attribute) {
	self->writeAttribute(*attribute);
}

void QXmlStreamWriter_writeCDATA(QXmlStreamWriter* self, QAnyStringView* text) {
	self->writeCDATA(*text);
}

void QXmlStreamWriter_writeCharacters(QXmlStreamWriter* self, QAnyStringView* text) {
	self->writeCharacters(*text);
}

void QXmlStreamWriter_writeComment(QXmlStreamWriter* self, QAnyStringView* text) {
	self->writeComment(*text);
}

void QXmlStreamWriter_writeDTD(QXmlStreamWriter* self, QAnyStringView* dtd) {
	self->writeDTD(*dtd);
}

void QXmlStreamWriter_writeEmptyElement(QXmlStreamWriter* self, QAnyStringView* qualifiedName) {
	self->writeEmptyElement(*qualifiedName);
}

void QXmlStreamWriter_writeEmptyElement2(QXmlStreamWriter* self, QAnyStringView* namespaceUri, QAnyStringView* name) {
	self->writeEmptyElement(*namespaceUri, *name);
}

void QXmlStreamWriter_writeTextElement(QXmlStreamWriter* self, QAnyStringView* qualifiedName, QAnyStringView* text) {
	self->writeTextElement(*qualifiedName, *text);
}

void QXmlStreamWriter_writeTextElement2(QXmlStreamWriter* self, QAnyStringView* namespaceUri, QAnyStringView* name, QAnyStringView* text) {
	self->writeTextElement(*namespaceUri, *name, *text);
}

void QXmlStreamWriter_writeEndDocument(QXmlStreamWriter* self) {
	self->writeEndDocument();
}

void QXmlStreamWriter_writeEndElement(QXmlStreamWriter* self) {
	self->writeEndElement();
}

void QXmlStreamWriter_writeEntityReference(QXmlStreamWriter* self, QAnyStringView* name) {
	self->writeEntityReference(*name);
}

void QXmlStreamWriter_writeNamespace(QXmlStreamWriter* self, QAnyStringView* namespaceUri) {
	self->writeNamespace(*namespaceUri);
}

void QXmlStreamWriter_writeDefaultNamespace(QXmlStreamWriter* self, QAnyStringView* namespaceUri) {
	self->writeDefaultNamespace(*namespaceUri);
}

void QXmlStreamWriter_writeProcessingInstruction(QXmlStreamWriter* self, QAnyStringView* target) {
	self->writeProcessingInstruction(*target);
}

void QXmlStreamWriter_writeStartDocument(QXmlStreamWriter* self) {
	self->writeStartDocument();
}

void QXmlStreamWriter_writeStartDocumentWithVersion(QXmlStreamWriter* self, QAnyStringView* version) {
	self->writeStartDocument(*version);
}

void QXmlStreamWriter_writeStartDocument2(QXmlStreamWriter* self, QAnyStringView* version, bool standalone) {
	self->writeStartDocument(*version, standalone);
}

void QXmlStreamWriter_writeStartElement(QXmlStreamWriter* self, QAnyStringView* qualifiedName) {
	self->writeStartElement(*qualifiedName);
}

void QXmlStreamWriter_writeStartElement2(QXmlStreamWriter* self, QAnyStringView* namespaceUri, QAnyStringView* name) {
	self->writeStartElement(*namespaceUri, *name);
}

void QXmlStreamWriter_writeCurrentToken(QXmlStreamWriter* self, QXmlStreamReader* reader) {
	self->writeCurrentToken(*reader);
}

void QXmlStreamWriter_raiseError(QXmlStreamWriter* self, QAnyStringView* message) {
	self->raiseError(*message);
}

struct miqt_string QXmlStreamWriter_errorString(const QXmlStreamWriter* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

Error QXmlStreamWriter_error(const QXmlStreamWriter* self) {
	return self->error();
}

bool QXmlStreamWriter_hasError(const QXmlStreamWriter* self) {
	return self->hasError();
}

void QXmlStreamWriter_writeNamespace2(QXmlStreamWriter* self, QAnyStringView* namespaceUri, QAnyStringView* prefix) {
	self->writeNamespace(*namespaceUri, *prefix);
}

void QXmlStreamWriter_writeProcessingInstruction2(QXmlStreamWriter* self, QAnyStringView* target, QAnyStringView* data) {
	self->writeProcessingInstruction(*target, *data);
}

void QXmlStreamWriter_delete(QXmlStreamWriter* self) {
	delete self;
}

