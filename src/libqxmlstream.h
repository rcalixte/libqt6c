#pragma once
#ifndef SRCQT6C_LIBQXMLSTREAM_H
#define SRCQT6C_LIBQXMLSTREAM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qxmlstreamattribute.html

/// q_xmlstreamattribute_new constructs a new QXmlStreamAttribute object.
///
///
QXmlStreamAttribute* q_xmlstreamattribute_new();

/// q_xmlstreamattribute_new2 constructs a new QXmlStreamAttribute object.
///
/// ``` const char* qualifiedName, const char* value ```
QXmlStreamAttribute* q_xmlstreamattribute_new2(const char* qualifiedName, const char* value);

/// q_xmlstreamattribute_new3 constructs a new QXmlStreamAttribute object.
///
/// ``` const char* namespaceUri, const char* name, const char* value ```
QXmlStreamAttribute* q_xmlstreamattribute_new3(const char* namespaceUri, const char* name, const char* value);

/// q_xmlstreamattribute_new4 constructs a new QXmlStreamAttribute object.
///
/// ``` QXmlStreamAttribute* param1 ```
QXmlStreamAttribute* q_xmlstreamattribute_new4(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattribute.html#isDefault)
///
/// ``` QXmlStreamAttribute* self ```
bool q_xmlstreamattribute_is_default(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattribute.html#dtor.QXmlStreamAttribute)
///
/// Delete this object from C++ memory.
///
/// ``` QXmlStreamAttribute* self ```
void q_xmlstreamattribute_delete(void* self);

/// https://doc.qt.io/qt-6/qxmlstreamattributes.html

/// q_xmlstreamattributes_new constructs a new QXmlStreamAttributes object.
///
///
QXmlStreamAttributes* q_xmlstreamattributes_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattributes.html#append)
///
/// ``` QXmlStreamAttributes* self, const char* namespaceUri, const char* name, const char* value ```
void q_xmlstreamattributes_append(void* self, const char* namespaceUri, const char* name, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattributes.html#append)
///
/// ``` QXmlStreamAttributes* self, const char* qualifiedName, const char* value ```
void q_xmlstreamattributes_append2(void* self, const char* qualifiedName, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattributes.html#hasAttribute)
///
/// ``` QXmlStreamAttributes* self, char* qualifiedName ```
bool q_xmlstreamattributes_has_attribute(void* self, char* qualifiedName);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattributes.html#hasAttribute)
///
/// ``` QXmlStreamAttributes* self, char* namespaceUri, char* name ```
bool q_xmlstreamattributes_has_attribute2(void* self, char* namespaceUri, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattributes.html#dtor.QXmlStreamAttributes)
///
/// Delete this object from C++ memory.
///
/// ``` QXmlStreamAttributes* self ```
void q_xmlstreamattributes_delete(void* self);

/// https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html

/// q_xmlstreamnamespacedeclaration_new constructs a new QXmlStreamNamespaceDeclaration object.
///
///
QXmlStreamNamespaceDeclaration* q_xmlstreamnamespacedeclaration_new();

/// q_xmlstreamnamespacedeclaration_new2 constructs a new QXmlStreamNamespaceDeclaration object.
///
/// ``` const char* prefix, const char* namespaceUri ```
QXmlStreamNamespaceDeclaration* q_xmlstreamnamespacedeclaration_new2(const char* prefix, const char* namespaceUri);

/// q_xmlstreamnamespacedeclaration_new3 constructs a new QXmlStreamNamespaceDeclaration object.
///
/// ``` QXmlStreamNamespaceDeclaration* param1 ```
QXmlStreamNamespaceDeclaration* q_xmlstreamnamespacedeclaration_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html#dtor.QXmlStreamNamespaceDeclaration)
///
/// Delete this object from C++ memory.
///
/// ``` QXmlStreamNamespaceDeclaration* self ```
void q_xmlstreamnamespacedeclaration_delete(void* self);

/// https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html

/// q_xmlstreamnotationdeclaration_new constructs a new QXmlStreamNotationDeclaration object.
///
///
QXmlStreamNotationDeclaration* q_xmlstreamnotationdeclaration_new();

/// q_xmlstreamnotationdeclaration_new2 constructs a new QXmlStreamNotationDeclaration object.
///
/// ``` QXmlStreamNotationDeclaration* param1 ```
QXmlStreamNotationDeclaration* q_xmlstreamnotationdeclaration_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html#dtor.QXmlStreamNotationDeclaration)
///
/// Delete this object from C++ memory.
///
/// ``` QXmlStreamNotationDeclaration* self ```
void q_xmlstreamnotationdeclaration_delete(void* self);

/// https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html

/// q_xmlstreamentitydeclaration_new constructs a new QXmlStreamEntityDeclaration object.
///
///
QXmlStreamEntityDeclaration* q_xmlstreamentitydeclaration_new();

/// q_xmlstreamentitydeclaration_new2 constructs a new QXmlStreamEntityDeclaration object.
///
/// ``` QXmlStreamEntityDeclaration* param1 ```
QXmlStreamEntityDeclaration* q_xmlstreamentitydeclaration_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#dtor.QXmlStreamEntityDeclaration)
///
/// Delete this object from C++ memory.
///
/// ``` QXmlStreamEntityDeclaration* self ```
void q_xmlstreamentitydeclaration_delete(void* self);

/// https://doc.qt.io/qt-6/qxmlstreamentityresolver.html

/// q_xmlstreamentityresolver_new constructs a new QXmlStreamEntityResolver object.
///
///
QXmlStreamEntityResolver* q_xmlstreamentityresolver_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
///
/// ``` QXmlStreamEntityResolver* self, const char* publicId, const char* systemId ```
const char* q_xmlstreamentityresolver_resolve_entity(void* self, const char* publicId, const char* systemId);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
///
/// Allows for overriding the related default method
///
/// ``` QXmlStreamEntityResolver* self, const char* (*slot)(QXmlStreamEntityResolver*, const char*, const char*) ```
void q_xmlstreamentityresolver_on_resolve_entity(void* self, const char* (*slot)(void*, const char*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
///
/// Base class method implementation
///
/// ``` QXmlStreamEntityResolver* self, const char* publicId, const char* systemId ```
const char* q_xmlstreamentityresolver_qbase_resolve_entity(void* self, const char* publicId, const char* systemId);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
///
/// ``` QXmlStreamEntityResolver* self, const char* name ```
const char* q_xmlstreamentityresolver_resolve_undeclared_entity(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
///
/// Allows for overriding the related default method
///
/// ``` QXmlStreamEntityResolver* self, const char* (*slot)(QXmlStreamEntityResolver*, const char*) ```
void q_xmlstreamentityresolver_on_resolve_undeclared_entity(void* self, const char* (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
///
/// Base class method implementation
///
/// ``` QXmlStreamEntityResolver* self, const char* name ```
const char* q_xmlstreamentityresolver_qbase_resolve_undeclared_entity(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#dtor.QXmlStreamEntityResolver)
///
/// Delete this object from C++ memory.
///
/// ``` QXmlStreamEntityResolver* self ```
void q_xmlstreamentityresolver_delete(void* self);

/// https://doc.qt.io/qt-6/qxmlstreamreader.html

/// q_xmlstreamreader_new constructs a new QXmlStreamReader object.
///
///
QXmlStreamReader* q_xmlstreamreader_new();

/// q_xmlstreamreader_new2 constructs a new QXmlStreamReader object.
///
/// ``` QIODevice* device ```
QXmlStreamReader* q_xmlstreamreader_new2(void* device);

/// q_xmlstreamreader_new3 constructs a new QXmlStreamReader object.
///
/// ``` char* data ```
QXmlStreamReader* q_xmlstreamreader_new3(char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#setDevice)
///
/// ``` QXmlStreamReader* self, QIODevice* device ```
void q_xmlstreamreader_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#device)
///
/// ``` QXmlStreamReader* self ```
QIODevice* q_xmlstreamreader_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#addData)
///
/// ``` QXmlStreamReader* self, char* data ```
void q_xmlstreamreader_add_data(void* self, char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#clear)
///
/// ``` QXmlStreamReader* self ```
void q_xmlstreamreader_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#atEnd)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#readNext)
///
/// ``` QXmlStreamReader* self ```
int64_t q_xmlstreamreader_read_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#readNextStartElement)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_read_next_start_element(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#skipCurrentElement)
///
/// ``` QXmlStreamReader* self ```
void q_xmlstreamreader_skip_current_element(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#tokenType)
///
/// ``` QXmlStreamReader* self ```
int64_t q_xmlstreamreader_token_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#tokenString)
///
/// ``` QXmlStreamReader* self ```
const char* q_xmlstreamreader_token_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#setNamespaceProcessing)
///
/// ``` QXmlStreamReader* self, bool namespaceProcessing ```
void q_xmlstreamreader_set_namespace_processing(void* self, bool namespaceProcessing);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceProcessing)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_namespace_processing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStartDocument)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_start_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEndDocument)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_end_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStartElement)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_start_element(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEndElement)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_end_element(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isCharacters)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_characters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isWhitespace)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_whitespace(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isCDATA)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_c_d_a_t_a(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isComment)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_comment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isDTD)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_d_t_d(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEntityReference)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_entity_reference(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isProcessingInstruction)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_processing_instruction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStandaloneDocument)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_standalone_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#hasStandaloneDeclaration)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_has_standalone_declaration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#lineNumber)
///
/// ``` QXmlStreamReader* self ```
long long q_xmlstreamreader_line_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#columnNumber)
///
/// ``` QXmlStreamReader* self ```
long long q_xmlstreamreader_column_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#characterOffset)
///
/// ``` QXmlStreamReader* self ```
long long q_xmlstreamreader_character_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#attributes)
///
/// ``` QXmlStreamReader* self ```
QXmlStreamAttributes* q_xmlstreamreader_attributes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#readElementText)
///
/// ``` QXmlStreamReader* self ```
const char* q_xmlstreamreader_read_element_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceDeclarations)
///
/// ``` QXmlStreamReader* self ```
libqt_list /* of QXmlStreamNamespaceDeclaration* */ q_xmlstreamreader_namespace_declarations(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#addExtraNamespaceDeclaration)
///
/// ``` QXmlStreamReader* self, QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction ```
void q_xmlstreamreader_add_extra_namespace_declaration(void* self, void* extraNamespaceDeclaraction);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#addExtraNamespaceDeclarations)
///
/// ``` QXmlStreamReader* self, libqt_list /* of QXmlStreamNamespaceDeclaration* */ extraNamespaceDeclaractions ```
void q_xmlstreamreader_add_extra_namespace_declarations(void* self, libqt_list extraNamespaceDeclaractions);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#notationDeclarations)
///
/// ``` QXmlStreamReader* self ```
libqt_list /* of QXmlStreamNotationDeclaration* */ q_xmlstreamreader_notation_declarations(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityDeclarations)
///
/// ``` QXmlStreamReader* self ```
libqt_list /* of QXmlStreamEntityDeclaration* */ q_xmlstreamreader_entity_declarations(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityExpansionLimit)
///
/// ``` QXmlStreamReader* self ```
int32_t q_xmlstreamreader_entity_expansion_limit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#setEntityExpansionLimit)
///
/// ``` QXmlStreamReader* self, int limit ```
void q_xmlstreamreader_set_entity_expansion_limit(void* self, int limit);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#raiseError)
///
/// ``` QXmlStreamReader* self ```
void q_xmlstreamreader_raise_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#errorString)
///
/// ``` QXmlStreamReader* self ```
const char* q_xmlstreamreader_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#error)
///
/// ``` QXmlStreamReader* self ```
int64_t q_xmlstreamreader_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#hasError)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_has_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#setEntityResolver)
///
/// ``` QXmlStreamReader* self, QXmlStreamEntityResolver* resolver ```
void q_xmlstreamreader_set_entity_resolver(void* self, void* resolver);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityResolver)
///
/// ``` QXmlStreamReader* self ```
QXmlStreamEntityResolver* q_xmlstreamreader_entity_resolver(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#readElementText)
///
/// ``` QXmlStreamReader* self, enum QXmlStreamReader__ReadElementTextBehaviour behaviour ```
const char* q_xmlstreamreader_read_element_text1(void* self, int64_t behaviour);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#raiseError)
///
/// ``` QXmlStreamReader* self, const char* message ```
void q_xmlstreamreader_raise_error1(void* self, const char* message);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#dtor.QXmlStreamReader)
///
/// Delete this object from C++ memory.
///
/// ``` QXmlStreamReader* self ```
void q_xmlstreamreader_delete(void* self);

/// https://doc.qt.io/qt-6/qxmlstreamwriter.html

/// q_xmlstreamwriter_new constructs a new QXmlStreamWriter object.
///
///
QXmlStreamWriter* q_xmlstreamwriter_new();

/// q_xmlstreamwriter_new2 constructs a new QXmlStreamWriter object.
///
/// ``` QIODevice* device ```
QXmlStreamWriter* q_xmlstreamwriter_new2(void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setDevice)
///
/// ``` QXmlStreamWriter* self, QIODevice* device ```
void q_xmlstreamwriter_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#device)
///
/// ``` QXmlStreamWriter* self ```
QIODevice* q_xmlstreamwriter_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setAutoFormatting)
///
/// ``` QXmlStreamWriter* self, bool autoFormatting ```
void q_xmlstreamwriter_set_auto_formatting(void* self, bool autoFormatting);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#autoFormatting)
///
/// ``` QXmlStreamWriter* self ```
bool q_xmlstreamwriter_auto_formatting(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setAutoFormattingIndent)
///
/// ``` QXmlStreamWriter* self, int spacesOrTabs ```
void q_xmlstreamwriter_set_auto_formatting_indent(void* self, int spacesOrTabs);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#autoFormattingIndent)
///
/// ``` QXmlStreamWriter* self ```
int32_t q_xmlstreamwriter_auto_formatting_indent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
///
/// ``` QXmlStreamWriter* self, char* qualifiedName, char* value ```
void q_xmlstreamwriter_write_attribute(void* self, char* qualifiedName, char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
///
/// ``` QXmlStreamWriter* self, char* namespaceUri, char* name, char* value ```
void q_xmlstreamwriter_write_attribute2(void* self, char* namespaceUri, char* name, char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
///
/// ``` QXmlStreamWriter* self, QXmlStreamAttribute* attribute ```
void q_xmlstreamwriter_write_attribute3(void* self, void* attribute);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttributes)
///
/// ``` QXmlStreamWriter* self, QXmlStreamAttributes* attributes ```
void q_xmlstreamwriter_write_attributes(void* self, void* attributes);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCDATA)
///
/// ``` QXmlStreamWriter* self, char* text ```
void q_xmlstreamwriter_write_c_d_a_t_a(void* self, char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCharacters)
///
/// ``` QXmlStreamWriter* self, char* text ```
void q_xmlstreamwriter_write_characters(void* self, char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeComment)
///
/// ``` QXmlStreamWriter* self, char* text ```
void q_xmlstreamwriter_write_comment(void* self, char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeDTD)
///
/// ``` QXmlStreamWriter* self, char* dtd ```
void q_xmlstreamwriter_write_d_t_d(void* self, char* dtd);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEmptyElement)
///
/// ``` QXmlStreamWriter* self, char* qualifiedName ```
void q_xmlstreamwriter_write_empty_element(void* self, char* qualifiedName);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEmptyElement)
///
/// ``` QXmlStreamWriter* self, char* namespaceUri, char* name ```
void q_xmlstreamwriter_write_empty_element2(void* self, char* namespaceUri, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeTextElement)
///
/// ``` QXmlStreamWriter* self, char* qualifiedName, char* text ```
void q_xmlstreamwriter_write_text_element(void* self, char* qualifiedName, char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeTextElement)
///
/// ``` QXmlStreamWriter* self, char* namespaceUri, char* name, char* text ```
void q_xmlstreamwriter_write_text_element2(void* self, char* namespaceUri, char* name, char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEndDocument)
///
/// ``` QXmlStreamWriter* self ```
void q_xmlstreamwriter_write_end_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEndElement)
///
/// ``` QXmlStreamWriter* self ```
void q_xmlstreamwriter_write_end_element(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEntityReference)
///
/// ``` QXmlStreamWriter* self, char* name ```
void q_xmlstreamwriter_write_entity_reference(void* self, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeNamespace)
///
/// ``` QXmlStreamWriter* self, char* namespaceUri ```
void q_xmlstreamwriter_write_namespace(void* self, char* namespaceUri);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeDefaultNamespace)
///
/// ``` QXmlStreamWriter* self, char* namespaceUri ```
void q_xmlstreamwriter_write_default_namespace(void* self, char* namespaceUri);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeProcessingInstruction)
///
/// ``` QXmlStreamWriter* self, char* target ```
void q_xmlstreamwriter_write_processing_instruction(void* self, char* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
///
/// ``` QXmlStreamWriter* self ```
void q_xmlstreamwriter_write_start_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
///
/// ``` QXmlStreamWriter* self, char* version ```
void q_xmlstreamwriter_write_start_document2(void* self, char* version);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
///
/// ``` QXmlStreamWriter* self, char* version, bool standalone ```
void q_xmlstreamwriter_write_start_document3(void* self, char* version, bool standalone);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartElement)
///
/// ``` QXmlStreamWriter* self, char* qualifiedName ```
void q_xmlstreamwriter_write_start_element(void* self, char* qualifiedName);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartElement)
///
/// ``` QXmlStreamWriter* self, char* namespaceUri, char* name ```
void q_xmlstreamwriter_write_start_element2(void* self, char* namespaceUri, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCurrentToken)
///
/// ``` QXmlStreamWriter* self, QXmlStreamReader* reader ```
void q_xmlstreamwriter_write_current_token(void* self, void* reader);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#hasError)
///
/// ``` QXmlStreamWriter* self ```
bool q_xmlstreamwriter_has_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeNamespace)
///
/// ``` QXmlStreamWriter* self, char* namespaceUri, char* prefix ```
void q_xmlstreamwriter_write_namespace2(void* self, char* namespaceUri, char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeProcessingInstruction)
///
/// ``` QXmlStreamWriter* self, char* target, char* data ```
void q_xmlstreamwriter_write_processing_instruction2(void* self, char* target, char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#dtor.QXmlStreamWriter)
///
/// Delete this object from C++ memory.
///
/// ``` QXmlStreamWriter* self ```
void q_xmlstreamwriter_delete(void* self);

/// https://doc.qt.io/qt-6/qxmlstream.html#types

typedef enum {
    QXMLSTREAMREADER_TOKENTYPE_NOTOKEN = 0,
    QXMLSTREAMREADER_TOKENTYPE_INVALID = 1,
    QXMLSTREAMREADER_TOKENTYPE_STARTDOCUMENT = 2,
    QXMLSTREAMREADER_TOKENTYPE_ENDDOCUMENT = 3,
    QXMLSTREAMREADER_TOKENTYPE_STARTELEMENT = 4,
    QXMLSTREAMREADER_TOKENTYPE_ENDELEMENT = 5,
    QXMLSTREAMREADER_TOKENTYPE_CHARACTERS = 6,
    QXMLSTREAMREADER_TOKENTYPE_COMMENT = 7,
    QXMLSTREAMREADER_TOKENTYPE_DTD = 8,
    QXMLSTREAMREADER_TOKENTYPE_ENTITYREFERENCE = 9,
    QXMLSTREAMREADER_TOKENTYPE_PROCESSINGINSTRUCTION = 10
} QXmlStreamReader__TokenType;

typedef enum {
    QXMLSTREAMREADER_READELEMENTTEXTBEHAVIOUR_ERRORONUNEXPECTEDELEMENT = 0,
    QXMLSTREAMREADER_READELEMENTTEXTBEHAVIOUR_INCLUDECHILDELEMENTS = 1,
    QXMLSTREAMREADER_READELEMENTTEXTBEHAVIOUR_SKIPCHILDELEMENTS = 2
} QXmlStreamReader__ReadElementTextBehaviour;

typedef enum {
    QXMLSTREAMREADER_ERROR_NOERROR = 0,
    QXMLSTREAMREADER_ERROR_UNEXPECTEDELEMENTERROR = 1,
    QXMLSTREAMREADER_ERROR_CUSTOMERROR = 2,
    QXMLSTREAMREADER_ERROR_NOTWELLFORMEDERROR = 3,
    QXMLSTREAMREADER_ERROR_PREMATUREENDOFDOCUMENTERROR = 4
} QXmlStreamReader__Error;

#endif
