#pragma once
#ifndef SRC_QT6C_LIBQXMLSTREAM_H
#define SRC_QT6C_LIBQXMLSTREAM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html)

/// q_xmlstreamattribute_new constructs a new QXmlStreamAttribute object.
///
QXmlStreamAttribute* q_xmlstreamattribute_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html)

/// q_xmlstreamattribute_new2 constructs a new QXmlStreamAttribute object.
///
/// @param qualifiedName const char*
/// @param value const char*
///
QXmlStreamAttribute* q_xmlstreamattribute_new2(const char* qualifiedName, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html)

/// q_xmlstreamattribute_new3 constructs a new QXmlStreamAttribute object.
///
/// @param namespaceUri const char*
/// @param name const char*
/// @param value const char*
///
QXmlStreamAttribute* q_xmlstreamattribute_new3(const char* namespaceUri, const char* name, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html)

/// q_xmlstreamattribute_new4 constructs a new QXmlStreamAttribute object.
///
/// @param param1 QXmlStreamAttribute*
///
QXmlStreamAttribute* q_xmlstreamattribute_new4(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#isDefault)
///
/// @param self QXmlStreamAttribute*
///
bool q_xmlstreamattribute_is_default(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#dtor.QXmlStreamAttribute)
///
/// Delete this object from C++ memory.
///
/// @param self QXmlStreamAttribute*
///
void q_xmlstreamattribute_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html)

/// q_xmlstreamattributes_new constructs a new QXmlStreamAttributes object.
///
QXmlStreamAttributes* q_xmlstreamattributes_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#append)
///
/// @param self QXmlStreamAttributes*
/// @param namespaceUri const char*
/// @param name const char*
/// @param value const char*
///
void q_xmlstreamattributes_append(void* self, const char* namespaceUri, const char* name, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#append)
///
/// @param self QXmlStreamAttributes*
/// @param qualifiedName const char*
/// @param value const char*
///
void q_xmlstreamattributes_append2(void* self, const char* qualifiedName, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#hasAttribute)
///
/// @param self QXmlStreamAttributes*
/// @param qualifiedName char*
///
bool q_xmlstreamattributes_has_attribute(void* self, char* qualifiedName);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#hasAttribute)
///
/// @param self QXmlStreamAttributes*
/// @param namespaceUri char*
/// @param name char*
///
bool q_xmlstreamattributes_has_attribute2(void* self, char* namespaceUri, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#dtor.QXmlStreamAttributes)
///
/// Delete this object from C++ memory.
///
/// @param self QXmlStreamAttributes*
///
void q_xmlstreamattributes_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html)

/// q_xmlstreamnamespacedeclaration_new constructs a new QXmlStreamNamespaceDeclaration object.
///
QXmlStreamNamespaceDeclaration* q_xmlstreamnamespacedeclaration_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html)

/// q_xmlstreamnamespacedeclaration_new2 constructs a new QXmlStreamNamespaceDeclaration object.
///
/// @param prefix const char*
/// @param namespaceUri const char*
///
QXmlStreamNamespaceDeclaration* q_xmlstreamnamespacedeclaration_new2(const char* prefix, const char* namespaceUri);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html)

/// q_xmlstreamnamespacedeclaration_new3 constructs a new QXmlStreamNamespaceDeclaration object.
///
/// @param param1 QXmlStreamNamespaceDeclaration*
///
QXmlStreamNamespaceDeclaration* q_xmlstreamnamespacedeclaration_new3(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html#dtor.QXmlStreamNamespaceDeclaration)
///
/// Delete this object from C++ memory.
///
/// @param self QXmlStreamNamespaceDeclaration*
///
void q_xmlstreamnamespacedeclaration_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html)

/// q_xmlstreamnotationdeclaration_new constructs a new QXmlStreamNotationDeclaration object.
///
QXmlStreamNotationDeclaration* q_xmlstreamnotationdeclaration_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html)

/// q_xmlstreamnotationdeclaration_new2 constructs a new QXmlStreamNotationDeclaration object.
///
/// @param param1 QXmlStreamNotationDeclaration*
///
QXmlStreamNotationDeclaration* q_xmlstreamnotationdeclaration_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html#dtor.QXmlStreamNotationDeclaration)
///
/// Delete this object from C++ memory.
///
/// @param self QXmlStreamNotationDeclaration*
///
void q_xmlstreamnotationdeclaration_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html)

/// q_xmlstreamentitydeclaration_new constructs a new QXmlStreamEntityDeclaration object.
///
QXmlStreamEntityDeclaration* q_xmlstreamentitydeclaration_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html)

/// q_xmlstreamentitydeclaration_new2 constructs a new QXmlStreamEntityDeclaration object.
///
/// @param param1 QXmlStreamEntityDeclaration*
///
QXmlStreamEntityDeclaration* q_xmlstreamentitydeclaration_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#dtor.QXmlStreamEntityDeclaration)
///
/// Delete this object from C++ memory.
///
/// @param self QXmlStreamEntityDeclaration*
///
void q_xmlstreamentitydeclaration_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html)

/// q_xmlstreamentityresolver_new constructs a new QXmlStreamEntityResolver object.
///
QXmlStreamEntityResolver* q_xmlstreamentityresolver_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QXmlStreamEntityResolver*
/// @param publicId const char*
/// @param systemId const char*
///
const char* q_xmlstreamentityresolver_resolve_entity(void* self, const char* publicId, const char* systemId);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
///
/// Allows for overriding the related default method
///
/// @param self QXmlStreamEntityResolver*
/// @param callback const char* func(QXmlStreamEntityResolver* self, const char* publicId, const char* systemId)
///
void q_xmlstreamentityresolver_on_resolve_entity(void* self, const char* (*callback)(void*, const char*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
///
/// Base class method implementation
///
/// @param self QXmlStreamEntityResolver*
/// @param publicId const char*
/// @param systemId const char*
///
const char* q_xmlstreamentityresolver_qbase_resolve_entity(void* self, const char* publicId, const char* systemId);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QXmlStreamEntityResolver*
/// @param name const char*
///
const char* q_xmlstreamentityresolver_resolve_undeclared_entity(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
///
/// Allows for overriding the related default method
///
/// @param self QXmlStreamEntityResolver*
/// @param callback const char* func(QXmlStreamEntityResolver* self, const char* name)
///
void q_xmlstreamentityresolver_on_resolve_undeclared_entity(void* self, const char* (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
///
/// Base class method implementation
///
/// @param self QXmlStreamEntityResolver*
/// @param name const char*
///
const char* q_xmlstreamentityresolver_qbase_resolve_undeclared_entity(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#dtor.QXmlStreamEntityResolver)
///
/// Delete this object from C++ memory.
///
/// @param self QXmlStreamEntityResolver*
///
void q_xmlstreamentityresolver_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html)

/// q_xmlstreamreader_new constructs a new QXmlStreamReader object.
///
QXmlStreamReader* q_xmlstreamreader_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html)

/// q_xmlstreamreader_new2 constructs a new QXmlStreamReader object.
///
/// @param device QIODevice*
///
QXmlStreamReader* q_xmlstreamreader_new2(void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html)

/// q_xmlstreamreader_new3 constructs a new QXmlStreamReader object.
///
/// @param data char*
///
QXmlStreamReader* q_xmlstreamreader_new3(char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setDevice)
///
/// @param self QXmlStreamReader*
/// @param device QIODevice*
///
void q_xmlstreamreader_set_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#device)
///
/// @param self QXmlStreamReader*
///
QIODevice* q_xmlstreamreader_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#addData)
///
/// @param self QXmlStreamReader*
/// @param data char*
///
void q_xmlstreamreader_add_data(void* self, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#clear)
///
/// @param self QXmlStreamReader*
///
void q_xmlstreamreader_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#atEnd)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_at_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#readNext)
///
/// @param self QXmlStreamReader*
///
/// @return enum QXmlStreamReader__TokenType
///
int32_t q_xmlstreamreader_read_next(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#readNextStartElement)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_read_next_start_element(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#skipCurrentElement)
///
/// @param self QXmlStreamReader*
///
void q_xmlstreamreader_skip_current_element(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#tokenType)
///
/// @param self QXmlStreamReader*
///
/// @return enum QXmlStreamReader__TokenType
///
int32_t q_xmlstreamreader_token_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#tokenString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QXmlStreamReader*
///
const char* q_xmlstreamreader_token_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setNamespaceProcessing)
///
/// @param self QXmlStreamReader*
/// @param namespaceProcessing bool
///
void q_xmlstreamreader_set_namespace_processing(void* self, bool namespaceProcessing);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceProcessing)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_namespace_processing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStartDocument)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_is_start_document(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEndDocument)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_is_end_document(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStartElement)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_is_start_element(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEndElement)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_is_end_element(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isCharacters)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_is_characters(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isWhitespace)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_is_whitespace(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isCDATA)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_is_c_d_a_t_a(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isComment)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_is_comment(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isDTD)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_is_d_t_d(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEntityReference)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_is_entity_reference(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isProcessingInstruction)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_is_processing_instruction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStandaloneDocument)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_is_standalone_document(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#hasStandaloneDeclaration)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_has_standalone_declaration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#lineNumber)
///
/// @param self QXmlStreamReader*
///
long long q_xmlstreamreader_line_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#columnNumber)
///
/// @param self QXmlStreamReader*
///
long long q_xmlstreamreader_column_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#characterOffset)
///
/// @param self QXmlStreamReader*
///
long long q_xmlstreamreader_character_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#attributes)
///
/// @param self QXmlStreamReader*
///
QXmlStreamAttributes* q_xmlstreamreader_attributes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#readElementText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QXmlStreamReader*
///
const char* q_xmlstreamreader_read_element_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceDeclarations)
///
/// @param self QXmlStreamReader*
///
libqt_list /* of QXmlStreamNamespaceDeclaration* */ q_xmlstreamreader_namespace_declarations(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#addExtraNamespaceDeclaration)
///
/// @param self QXmlStreamReader*
/// @param extraNamespaceDeclaraction QXmlStreamNamespaceDeclaration*
///
void q_xmlstreamreader_add_extra_namespace_declaration(void* self, void* extraNamespaceDeclaraction);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#addExtraNamespaceDeclarations)
///
/// @param self QXmlStreamReader*
/// @param extraNamespaceDeclaractions libqt_list /* of QXmlStreamNamespaceDeclaration* */
///
void q_xmlstreamreader_add_extra_namespace_declarations(void* self, libqt_list extraNamespaceDeclaractions);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#notationDeclarations)
///
/// @param self QXmlStreamReader*
///
libqt_list /* of QXmlStreamNotationDeclaration* */ q_xmlstreamreader_notation_declarations(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityDeclarations)
///
/// @param self QXmlStreamReader*
///
libqt_list /* of QXmlStreamEntityDeclaration* */ q_xmlstreamreader_entity_declarations(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityExpansionLimit)
///
/// @param self QXmlStreamReader*
///
int32_t q_xmlstreamreader_entity_expansion_limit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setEntityExpansionLimit)
///
/// @param self QXmlStreamReader*
/// @param limit int
///
void q_xmlstreamreader_set_entity_expansion_limit(void* self, int limit);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#raiseError)
///
/// @param self QXmlStreamReader*
///
void q_xmlstreamreader_raise_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QXmlStreamReader*
///
const char* q_xmlstreamreader_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#error)
///
/// @param self QXmlStreamReader*
///
/// @return enum QXmlStreamReader__Error
///
int32_t q_xmlstreamreader_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#hasError)
///
/// @param self QXmlStreamReader*
///
bool q_xmlstreamreader_has_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setEntityResolver)
///
/// @param self QXmlStreamReader*
/// @param resolver QXmlStreamEntityResolver*
///
void q_xmlstreamreader_set_entity_resolver(void* self, void* resolver);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityResolver)
///
/// @param self QXmlStreamReader*
///
QXmlStreamEntityResolver* q_xmlstreamreader_entity_resolver(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#readElementText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QXmlStreamReader*
/// @param behaviour enum QXmlStreamReader__ReadElementTextBehaviour
///
const char* q_xmlstreamreader_read_element_text1(void* self, int32_t behaviour);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#raiseError)
///
/// @param self QXmlStreamReader*
/// @param message const char*
///
void q_xmlstreamreader_raise_error1(void* self, const char* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#dtor.QXmlStreamReader)
///
/// Delete this object from C++ memory.
///
/// @param self QXmlStreamReader*
///
void q_xmlstreamreader_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html)

/// q_xmlstreamwriter_new constructs a new QXmlStreamWriter object.
///
QXmlStreamWriter* q_xmlstreamwriter_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html)

/// q_xmlstreamwriter_new2 constructs a new QXmlStreamWriter object.
///
/// @param device QIODevice*
///
QXmlStreamWriter* q_xmlstreamwriter_new2(void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setDevice)
///
/// @param self QXmlStreamWriter*
/// @param device QIODevice*
///
void q_xmlstreamwriter_set_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#device)
///
/// @param self QXmlStreamWriter*
///
QIODevice* q_xmlstreamwriter_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setAutoFormatting)
///
/// @param self QXmlStreamWriter*
/// @param autoFormatting bool
///
void q_xmlstreamwriter_set_auto_formatting(void* self, bool autoFormatting);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#autoFormatting)
///
/// @param self QXmlStreamWriter*
///
bool q_xmlstreamwriter_auto_formatting(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setAutoFormattingIndent)
///
/// @param self QXmlStreamWriter*
/// @param spacesOrTabs int
///
void q_xmlstreamwriter_set_auto_formatting_indent(void* self, int spacesOrTabs);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#autoFormattingIndent)
///
/// @param self QXmlStreamWriter*
///
int32_t q_xmlstreamwriter_auto_formatting_indent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
///
/// @param self QXmlStreamWriter*
/// @param qualifiedName char*
/// @param value char*
///
void q_xmlstreamwriter_write_attribute(void* self, char* qualifiedName, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
///
/// @param self QXmlStreamWriter*
/// @param namespaceUri char*
/// @param name char*
/// @param value char*
///
void q_xmlstreamwriter_write_attribute2(void* self, char* namespaceUri, char* name, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
///
/// @param self QXmlStreamWriter*
/// @param attribute QXmlStreamAttribute*
///
void q_xmlstreamwriter_write_attribute3(void* self, void* attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttributes)
///
/// @param self QXmlStreamWriter*
/// @param attributes QXmlStreamAttributes*
///
void q_xmlstreamwriter_write_attributes(void* self, void* attributes);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCDATA)
///
/// @param self QXmlStreamWriter*
/// @param text char*
///
void q_xmlstreamwriter_write_c_d_a_t_a(void* self, char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCharacters)
///
/// @param self QXmlStreamWriter*
/// @param text char*
///
void q_xmlstreamwriter_write_characters(void* self, char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeComment)
///
/// @param self QXmlStreamWriter*
/// @param text char*
///
void q_xmlstreamwriter_write_comment(void* self, char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeDTD)
///
/// @param self QXmlStreamWriter*
/// @param dtd char*
///
void q_xmlstreamwriter_write_d_t_d(void* self, char* dtd);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEmptyElement)
///
/// @param self QXmlStreamWriter*
/// @param qualifiedName char*
///
void q_xmlstreamwriter_write_empty_element(void* self, char* qualifiedName);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEmptyElement)
///
/// @param self QXmlStreamWriter*
/// @param namespaceUri char*
/// @param name char*
///
void q_xmlstreamwriter_write_empty_element2(void* self, char* namespaceUri, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeTextElement)
///
/// @param self QXmlStreamWriter*
/// @param qualifiedName char*
/// @param text char*
///
void q_xmlstreamwriter_write_text_element(void* self, char* qualifiedName, char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeTextElement)
///
/// @param self QXmlStreamWriter*
/// @param namespaceUri char*
/// @param name char*
/// @param text char*
///
void q_xmlstreamwriter_write_text_element2(void* self, char* namespaceUri, char* name, char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEndDocument)
///
/// @param self QXmlStreamWriter*
///
void q_xmlstreamwriter_write_end_document(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEndElement)
///
/// @param self QXmlStreamWriter*
///
void q_xmlstreamwriter_write_end_element(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEntityReference)
///
/// @param self QXmlStreamWriter*
/// @param name char*
///
void q_xmlstreamwriter_write_entity_reference(void* self, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeNamespace)
///
/// @param self QXmlStreamWriter*
/// @param namespaceUri char*
///
void q_xmlstreamwriter_write_namespace(void* self, char* namespaceUri);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeDefaultNamespace)
///
/// @param self QXmlStreamWriter*
/// @param namespaceUri char*
///
void q_xmlstreamwriter_write_default_namespace(void* self, char* namespaceUri);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeProcessingInstruction)
///
/// @param self QXmlStreamWriter*
/// @param target char*
///
void q_xmlstreamwriter_write_processing_instruction(void* self, char* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
///
/// @param self QXmlStreamWriter*
///
void q_xmlstreamwriter_write_start_document(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
///
/// @param self QXmlStreamWriter*
/// @param version char*
///
void q_xmlstreamwriter_write_start_document2(void* self, char* version);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
///
/// @param self QXmlStreamWriter*
/// @param version char*
/// @param standalone bool
///
void q_xmlstreamwriter_write_start_document3(void* self, char* version, bool standalone);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartElement)
///
/// @param self QXmlStreamWriter*
/// @param qualifiedName char*
///
void q_xmlstreamwriter_write_start_element(void* self, char* qualifiedName);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartElement)
///
/// @param self QXmlStreamWriter*
/// @param namespaceUri char*
/// @param name char*
///
void q_xmlstreamwriter_write_start_element2(void* self, char* namespaceUri, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCurrentToken)
///
/// @param self QXmlStreamWriter*
/// @param reader QXmlStreamReader*
///
void q_xmlstreamwriter_write_current_token(void* self, void* reader);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#hasError)
///
/// @param self QXmlStreamWriter*
///
bool q_xmlstreamwriter_has_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeNamespace)
///
/// @param self QXmlStreamWriter*
/// @param namespaceUri char*
/// @param prefix char*
///
void q_xmlstreamwriter_write_namespace2(void* self, char* namespaceUri, char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeProcessingInstruction)
///
/// @param self QXmlStreamWriter*
/// @param target char*
/// @param data char*
///
void q_xmlstreamwriter_write_processing_instruction2(void* self, char* target, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#dtor.QXmlStreamWriter)
///
/// Delete this object from C++ memory.
///
/// @param self QXmlStreamWriter*
///
void q_xmlstreamwriter_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstream.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstream.html#public-types)

typedef enum {
    QXMLSTREAMREADER_READELEMENTTEXTBEHAVIOUR_ERRORONUNEXPECTEDELEMENT = 0,
    QXMLSTREAMREADER_READELEMENTTEXTBEHAVIOUR_INCLUDECHILDELEMENTS = 1,
    QXMLSTREAMREADER_READELEMENTTEXTBEHAVIOUR_SKIPCHILDELEMENTS = 2
} QXmlStreamReader__ReadElementTextBehaviour;

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstream.html#public-types)

typedef enum {
    QXMLSTREAMREADER_ERROR_NOERROR = 0,
    QXMLSTREAMREADER_ERROR_UNEXPECTEDELEMENTERROR = 1,
    QXMLSTREAMREADER_ERROR_CUSTOMERROR = 2,
    QXMLSTREAMREADER_ERROR_NOTWELLFORMEDERROR = 3,
    QXMLSTREAMREADER_ERROR_PREMATUREENDOFDOCUMENTERROR = 4
} QXmlStreamReader__Error;

#endif
