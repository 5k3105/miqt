#pragma once
#ifndef MIQT_QT6_GEN_QXMLSTREAM_H
#define MIQT_QT6_GEN_QXMLSTREAM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAnyStringView;
class QIODevice;
class QXmlStreamAttribute;
class QXmlStreamEntityDeclaration;
class QXmlStreamEntityResolver;
class QXmlStreamNamespaceDeclaration;
class QXmlStreamNotationDeclaration;
class QXmlStreamReader;
class QXmlStreamWriter;
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QIODevice QIODevice;
typedef struct QXmlStreamAttribute QXmlStreamAttribute;
typedef struct QXmlStreamEntityDeclaration QXmlStreamEntityDeclaration;
typedef struct QXmlStreamEntityResolver QXmlStreamEntityResolver;
typedef struct QXmlStreamNamespaceDeclaration QXmlStreamNamespaceDeclaration;
typedef struct QXmlStreamNotationDeclaration QXmlStreamNotationDeclaration;
typedef struct QXmlStreamReader QXmlStreamReader;
typedef struct QXmlStreamWriter QXmlStreamWriter;
#endif

QXmlStreamAttribute* QXmlStreamAttribute_new();
QXmlStreamAttribute* QXmlStreamAttribute_new2(struct miqt_string qualifiedName, struct miqt_string value);
QXmlStreamAttribute* QXmlStreamAttribute_new3(struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string value);
QXmlStreamAttribute* QXmlStreamAttribute_new4(QXmlStreamAttribute* param1);
bool QXmlStreamAttribute_isDefault(const QXmlStreamAttribute* self);
void QXmlStreamAttribute_operatorAssign(QXmlStreamAttribute* self, QXmlStreamAttribute* param1);

void QXmlStreamAttribute_delete(QXmlStreamAttribute* self);

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new();
QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new2(struct miqt_string prefix, struct miqt_string namespaceUri);
QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new3(QXmlStreamNamespaceDeclaration* param1);
void QXmlStreamNamespaceDeclaration_delete(QXmlStreamNamespaceDeclaration* self);

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new();
QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new2(QXmlStreamNotationDeclaration* param1);
void QXmlStreamNotationDeclaration_delete(QXmlStreamNotationDeclaration* self);

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new();
QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new2(QXmlStreamEntityDeclaration* param1);
void QXmlStreamEntityDeclaration_delete(QXmlStreamEntityDeclaration* self);

QXmlStreamEntityResolver* QXmlStreamEntityResolver_new();
struct miqt_string QXmlStreamEntityResolver_resolveEntity(QXmlStreamEntityResolver* self, struct miqt_string publicId, struct miqt_string systemId);
struct miqt_string QXmlStreamEntityResolver_resolveUndeclaredEntity(QXmlStreamEntityResolver* self, struct miqt_string name);

bool QXmlStreamEntityResolver_override_virtual_resolveEntity(void* self, intptr_t slot);
struct miqt_string QXmlStreamEntityResolver_virtualbase_resolveEntity(void* self, struct miqt_string publicId, struct miqt_string systemId);
bool QXmlStreamEntityResolver_override_virtual_resolveUndeclaredEntity(void* self, intptr_t slot);
struct miqt_string QXmlStreamEntityResolver_virtualbase_resolveUndeclaredEntity(void* self, struct miqt_string name);

void QXmlStreamEntityResolver_delete(QXmlStreamEntityResolver* self);

QXmlStreamReader* QXmlStreamReader_new();
QXmlStreamReader* QXmlStreamReader_new2(QIODevice* device);
QXmlStreamReader* QXmlStreamReader_new3(QAnyStringView* data);
void QXmlStreamReader_setDevice(QXmlStreamReader* self, QIODevice* device);
QIODevice* QXmlStreamReader_device(const QXmlStreamReader* self);
void QXmlStreamReader_addData(QXmlStreamReader* self, QAnyStringView* data);
void QXmlStreamReader_clear(QXmlStreamReader* self);
bool QXmlStreamReader_atEnd(const QXmlStreamReader* self);
TokenType QXmlStreamReader_readNext(QXmlStreamReader* self);
bool QXmlStreamReader_readNextStartElement(QXmlStreamReader* self);
void QXmlStreamReader_skipCurrentElement(QXmlStreamReader* self);
struct miqt_string QXmlStreamReader_readRawInnerData(QXmlStreamReader* self);
TokenType QXmlStreamReader_tokenType(const QXmlStreamReader* self);
struct miqt_string QXmlStreamReader_tokenString(const QXmlStreamReader* self);
void QXmlStreamReader_setNamespaceProcessing(QXmlStreamReader* self, bool namespaceProcessing);
bool QXmlStreamReader_namespaceProcessing(const QXmlStreamReader* self);
bool QXmlStreamReader_isStartDocument(const QXmlStreamReader* self);
bool QXmlStreamReader_isEndDocument(const QXmlStreamReader* self);
bool QXmlStreamReader_isStartElement(const QXmlStreamReader* self);
bool QXmlStreamReader_isEndElement(const QXmlStreamReader* self);
bool QXmlStreamReader_isCharacters(const QXmlStreamReader* self);
bool QXmlStreamReader_isWhitespace(const QXmlStreamReader* self);
bool QXmlStreamReader_isCDATA(const QXmlStreamReader* self);
bool QXmlStreamReader_isComment(const QXmlStreamReader* self);
bool QXmlStreamReader_isDTD(const QXmlStreamReader* self);
bool QXmlStreamReader_isEntityReference(const QXmlStreamReader* self);
bool QXmlStreamReader_isProcessingInstruction(const QXmlStreamReader* self);
bool QXmlStreamReader_isStandaloneDocument(const QXmlStreamReader* self);
bool QXmlStreamReader_hasStandaloneDeclaration(const QXmlStreamReader* self);
long long QXmlStreamReader_lineNumber(const QXmlStreamReader* self);
long long QXmlStreamReader_columnNumber(const QXmlStreamReader* self);
long long QXmlStreamReader_characterOffset(const QXmlStreamReader* self);
struct miqt_string QXmlStreamReader_readElementText(QXmlStreamReader* self);
struct miqt_array /* of QXmlStreamNamespaceDeclaration* */  QXmlStreamReader_namespaceDeclarations(const QXmlStreamReader* self);
void QXmlStreamReader_addExtraNamespaceDeclaration(QXmlStreamReader* self, QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction);
void QXmlStreamReader_addExtraNamespaceDeclarations(QXmlStreamReader* self, struct miqt_array /* of QXmlStreamNamespaceDeclaration* */  extraNamespaceDeclaractions);
struct miqt_array /* of QXmlStreamNotationDeclaration* */  QXmlStreamReader_notationDeclarations(const QXmlStreamReader* self);
struct miqt_array /* of QXmlStreamEntityDeclaration* */  QXmlStreamReader_entityDeclarations(const QXmlStreamReader* self);
int QXmlStreamReader_entityExpansionLimit(const QXmlStreamReader* self);
void QXmlStreamReader_setEntityExpansionLimit(QXmlStreamReader* self, int limit);
void QXmlStreamReader_raiseError(QXmlStreamReader* self);
struct miqt_string QXmlStreamReader_errorString(const QXmlStreamReader* self);
Error QXmlStreamReader_error(const QXmlStreamReader* self);
bool QXmlStreamReader_hasError(const QXmlStreamReader* self);
void QXmlStreamReader_setEntityResolver(QXmlStreamReader* self, QXmlStreamEntityResolver* resolver);
QXmlStreamEntityResolver* QXmlStreamReader_entityResolver(const QXmlStreamReader* self);
struct miqt_string QXmlStreamReader_readElementTextWithBehaviour(QXmlStreamReader* self, ReadElementTextBehaviour behaviour);
void QXmlStreamReader_raiseErrorWithMessage(QXmlStreamReader* self, struct miqt_string message);

void QXmlStreamReader_delete(QXmlStreamReader* self);

QXmlStreamWriter* QXmlStreamWriter_new();
QXmlStreamWriter* QXmlStreamWriter_new2(QIODevice* device);
void QXmlStreamWriter_setDevice(QXmlStreamWriter* self, QIODevice* device);
QIODevice* QXmlStreamWriter_device(const QXmlStreamWriter* self);
void QXmlStreamWriter_setAutoFormatting(QXmlStreamWriter* self, bool autoFormatting);
bool QXmlStreamWriter_autoFormatting(const QXmlStreamWriter* self);
void QXmlStreamWriter_setAutoFormattingIndent(QXmlStreamWriter* self, int spacesOrTabs);
int QXmlStreamWriter_autoFormattingIndent(const QXmlStreamWriter* self);
void QXmlStreamWriter_setStopWritingOnError(QXmlStreamWriter* self, bool stop);
bool QXmlStreamWriter_stopWritingOnError(const QXmlStreamWriter* self);
void QXmlStreamWriter_writeAttribute(QXmlStreamWriter* self, QAnyStringView* qualifiedName, QAnyStringView* value);
void QXmlStreamWriter_writeAttribute2(QXmlStreamWriter* self, QAnyStringView* namespaceUri, QAnyStringView* name, QAnyStringView* value);
void QXmlStreamWriter_writeAttributeWithAttribute(QXmlStreamWriter* self, QXmlStreamAttribute* attribute);
void QXmlStreamWriter_writeCDATA(QXmlStreamWriter* self, QAnyStringView* text);
void QXmlStreamWriter_writeCharacters(QXmlStreamWriter* self, QAnyStringView* text);
void QXmlStreamWriter_writeComment(QXmlStreamWriter* self, QAnyStringView* text);
void QXmlStreamWriter_writeDTD(QXmlStreamWriter* self, QAnyStringView* dtd);
void QXmlStreamWriter_writeEmptyElement(QXmlStreamWriter* self, QAnyStringView* qualifiedName);
void QXmlStreamWriter_writeEmptyElement2(QXmlStreamWriter* self, QAnyStringView* namespaceUri, QAnyStringView* name);
void QXmlStreamWriter_writeTextElement(QXmlStreamWriter* self, QAnyStringView* qualifiedName, QAnyStringView* text);
void QXmlStreamWriter_writeTextElement2(QXmlStreamWriter* self, QAnyStringView* namespaceUri, QAnyStringView* name, QAnyStringView* text);
void QXmlStreamWriter_writeEndDocument(QXmlStreamWriter* self);
void QXmlStreamWriter_writeEndElement(QXmlStreamWriter* self);
void QXmlStreamWriter_writeEntityReference(QXmlStreamWriter* self, QAnyStringView* name);
void QXmlStreamWriter_writeNamespace(QXmlStreamWriter* self, QAnyStringView* namespaceUri);
void QXmlStreamWriter_writeDefaultNamespace(QXmlStreamWriter* self, QAnyStringView* namespaceUri);
void QXmlStreamWriter_writeProcessingInstruction(QXmlStreamWriter* self, QAnyStringView* target);
void QXmlStreamWriter_writeStartDocument(QXmlStreamWriter* self);
void QXmlStreamWriter_writeStartDocumentWithVersion(QXmlStreamWriter* self, QAnyStringView* version);
void QXmlStreamWriter_writeStartDocument2(QXmlStreamWriter* self, QAnyStringView* version, bool standalone);
void QXmlStreamWriter_writeStartElement(QXmlStreamWriter* self, QAnyStringView* qualifiedName);
void QXmlStreamWriter_writeStartElement2(QXmlStreamWriter* self, QAnyStringView* namespaceUri, QAnyStringView* name);
void QXmlStreamWriter_writeCurrentToken(QXmlStreamWriter* self, QXmlStreamReader* reader);
void QXmlStreamWriter_raiseError(QXmlStreamWriter* self, QAnyStringView* message);
struct miqt_string QXmlStreamWriter_errorString(const QXmlStreamWriter* self);
Error QXmlStreamWriter_error(const QXmlStreamWriter* self);
bool QXmlStreamWriter_hasError(const QXmlStreamWriter* self);
void QXmlStreamWriter_writeNamespace2(QXmlStreamWriter* self, QAnyStringView* namespaceUri, QAnyStringView* prefix);
void QXmlStreamWriter_writeProcessingInstruction2(QXmlStreamWriter* self, QAnyStringView* target, QAnyStringView* data);

void QXmlStreamWriter_delete(QXmlStreamWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
