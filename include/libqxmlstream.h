#pragma once
#ifndef LIBQXMLSTREAM_H
#define LIBQXMLSTREAM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
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
QXmlStreamAttribute* q_xmlstreamattribute_new4(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#namespaceUri)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamAttribute*
///
const char* q_xmlstreamattribute_namespace_uri(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamAttribute*
///
const char* q_xmlstreamattribute_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#qualifiedName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamAttribute*
///
const char* q_xmlstreamattribute_qualified_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamAttribute*
///
const char* q_xmlstreamattribute_prefix(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamAttribute*
///
const char* q_xmlstreamattribute_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#isDefault)
///
/// @param self const QXmlStreamAttribute*
///
bool q_xmlstreamattribute_is_default(const void* self);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamAttributes*
/// @param namespaceUri const char*
/// @param name const char*
///
const char* q_xmlstreamattributes_value(const void* self, const char* namespaceUri, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamAttributes*
/// @param qualifiedName const char*
///
const char* q_xmlstreamattributes_value2(const void* self, const char* qualifiedName);

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
/// @param self const QXmlStreamAttributes*
/// @param qualifiedName const char*
///
bool q_xmlstreamattributes_has_attribute(const void* self, const char* qualifiedName);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#hasAttribute)
///
/// @param self const QXmlStreamAttributes*
/// @param namespaceUri const char*
/// @param name const char*
///
bool q_xmlstreamattributes_has_attribute2(const void* self, const char* namespaceUri, const char* name);

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
QXmlStreamNamespaceDeclaration* q_xmlstreamnamespacedeclaration_new3(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamNamespaceDeclaration*
///
const char* q_xmlstreamnamespacedeclaration_prefix(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html#namespaceUri)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamNamespaceDeclaration*
///
const char* q_xmlstreamnamespacedeclaration_namespace_uri(const void* self);

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
QXmlStreamNotationDeclaration* q_xmlstreamnotationdeclaration_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamNotationDeclaration*
///
const char* q_xmlstreamnotationdeclaration_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html#systemId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamNotationDeclaration*
///
const char* q_xmlstreamnotationdeclaration_system_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html#publicId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamNotationDeclaration*
///
const char* q_xmlstreamnotationdeclaration_public_id(const void* self);

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
QXmlStreamEntityDeclaration* q_xmlstreamentitydeclaration_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamEntityDeclaration*
///
const char* q_xmlstreamentitydeclaration_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#notationName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamEntityDeclaration*
///
const char* q_xmlstreamentitydeclaration_notation_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#systemId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamEntityDeclaration*
///
const char* q_xmlstreamentitydeclaration_system_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#publicId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamEntityDeclaration*
///
const char* q_xmlstreamentitydeclaration_public_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamEntityDeclaration*
///
const char* q_xmlstreamentitydeclaration_value(const void* self);

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
const char* q_xmlstreamentityresolver_super_resolve_undeclared_entity(void* self, const char* name);

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
/// @param data const char*
///
QXmlStreamReader* q_xmlstreamreader_new3(const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setDevice)
///
/// @param self QXmlStreamReader*
/// @param device QIODevice*
///
void q_xmlstreamreader_set_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#device)
///
/// @param self const QXmlStreamReader*
///
QIODevice* q_xmlstreamreader_device(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#addData)
///
/// @param self QXmlStreamReader*
/// @param data const char*
///
void q_xmlstreamreader_add_data(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#clear)
///
/// @param self QXmlStreamReader*
///
void q_xmlstreamreader_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#atEnd)
///
/// @param self const QXmlStreamReader*
///
bool q_xmlstreamreader_at_end(const void* self);

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
/// @param self const QXmlStreamReader*
///
/// @return enum QXmlStreamReader__TokenType
///
int32_t q_xmlstreamreader_token_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#tokenString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamReader*
///
const char* q_xmlstreamreader_token_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setNamespaceProcessing)
///
/// @param self QXmlStreamReader*
/// @param namespaceProcessing bool
///
void q_xmlstreamreader_set_namespace_processing(void* self, bool namespaceProcessing);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceProcessing)
///
/// @param self const QXmlStreamReader*
///
bool q_xmlstreamreader_namespace_processing(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStartDocument)
///
/// @param self const QXmlStreamReader*
///
bool q_xmlstreamreader_is_start_document(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEndDocument)
///
/// @param self const QXmlStreamReader*
///
bool q_xmlstreamreader_is_end_document(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStartElement)
///
/// @param self const QXmlStreamReader*
///
bool q_xmlstreamreader_is_start_element(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEndElement)
///
/// @param self const QXmlStreamReader*
///
bool q_xmlstreamreader_is_end_element(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isCharacters)
///
/// @param self const QXmlStreamReader*
///
bool q_xmlstreamreader_is_characters(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isWhitespace)
///
/// @param self const QXmlStreamReader*
///
bool q_xmlstreamreader_is_whitespace(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isCDATA)
///
/// @param self const QXmlStreamReader*
///
bool q_xmlstreamreader_is_c_d_a_t_a(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isComment)
///
/// @param self const QXmlStreamReader*
///
bool q_xmlstreamreader_is_comment(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isDTD)
///
/// @param self const QXmlStreamReader*
///
bool q_xmlstreamreader_is_d_t_d(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEntityReference)
///
/// @param self const QXmlStreamReader*
///
bool q_xmlstreamreader_is_entity_reference(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isProcessingInstruction)
///
/// @param self const QXmlStreamReader*
///
bool q_xmlstreamreader_is_processing_instruction(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStandaloneDocument)
///
/// @param self const QXmlStreamReader*
///
bool q_xmlstreamreader_is_standalone_document(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#hasStandaloneDeclaration)
///
/// @param self const QXmlStreamReader*
///
bool q_xmlstreamreader_has_standalone_declaration(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#documentVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamReader*
///
const char* q_xmlstreamreader_document_version(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#documentEncoding)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamReader*
///
const char* q_xmlstreamreader_document_encoding(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#lineNumber)
///
/// @param self const QXmlStreamReader*
///
int64_t q_xmlstreamreader_line_number(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#columnNumber)
///
/// @param self const QXmlStreamReader*
///
int64_t q_xmlstreamreader_column_number(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#characterOffset)
///
/// @param self const QXmlStreamReader*
///
int64_t q_xmlstreamreader_character_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#attributes)
///
/// @param self const QXmlStreamReader*
///
QXmlStreamAttributes* q_xmlstreamreader_attributes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#readElementText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QXmlStreamReader*
///
const char* q_xmlstreamreader_read_element_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamReader*
///
const char* q_xmlstreamreader_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceUri)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamReader*
///
const char* q_xmlstreamreader_namespace_uri(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#qualifiedName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamReader*
///
const char* q_xmlstreamreader_qualified_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamReader*
///
const char* q_xmlstreamreader_prefix(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#processingInstructionTarget)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamReader*
///
const char* q_xmlstreamreader_processing_instruction_target(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#processingInstructionData)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamReader*
///
const char* q_xmlstreamreader_processing_instruction_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamReader*
///
const char* q_xmlstreamreader_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceDeclarations)
///
/// @param self const QXmlStreamReader*
///
/// @return libqt_list of QXmlStreamNamespaceDeclaration*
///
libqt_list q_xmlstreamreader_namespace_declarations(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#addExtraNamespaceDeclaration)
///
/// @param self QXmlStreamReader*
/// @param extraNamespaceDeclaraction QXmlStreamNamespaceDeclaration*
///
void q_xmlstreamreader_add_extra_namespace_declaration(void* self, const void* extraNamespaceDeclaraction);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#addExtraNamespaceDeclarations)
///
/// @param self QXmlStreamReader*
/// @param extraNamespaceDeclaractions libqt_list of QXmlStreamNamespaceDeclaration*
///
void q_xmlstreamreader_add_extra_namespace_declarations(void* self, libqt_list extraNamespaceDeclaractions);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#notationDeclarations)
///
/// @param self const QXmlStreamReader*
///
/// @return libqt_list of QXmlStreamNotationDeclaration*
///
libqt_list q_xmlstreamreader_notation_declarations(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityDeclarations)
///
/// @param self const QXmlStreamReader*
///
/// @return libqt_list of QXmlStreamEntityDeclaration*
///
libqt_list q_xmlstreamreader_entity_declarations(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#dtdName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamReader*
///
const char* q_xmlstreamreader_dtd_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#dtdPublicId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamReader*
///
const char* q_xmlstreamreader_dtd_public_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#dtdSystemId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QXmlStreamReader*
///
const char* q_xmlstreamreader_dtd_system_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityExpansionLimit)
///
/// @param self const QXmlStreamReader*
///
int32_t q_xmlstreamreader_entity_expansion_limit(const void* self);

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
/// @param self const QXmlStreamReader*
///
const char* q_xmlstreamreader_error_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#error)
///
/// @param self const QXmlStreamReader*
///
/// @return enum QXmlStreamReader__Error
///
int32_t q_xmlstreamreader_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#hasError)
///
/// @param self const QXmlStreamReader*
///
bool q_xmlstreamreader_has_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setEntityResolver)
///
/// @param self QXmlStreamReader*
/// @param resolver QXmlStreamEntityResolver*
///
void q_xmlstreamreader_set_entity_resolver(void* self, void* resolver);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityResolver)
///
/// @param self const QXmlStreamReader*
///
QXmlStreamEntityResolver* q_xmlstreamreader_entity_resolver(const void* self);

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
/// @param self const QXmlStreamWriter*
///
QIODevice* q_xmlstreamwriter_device(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setAutoFormatting)
///
/// @param self QXmlStreamWriter*
/// @param autoFormatting bool
///
void q_xmlstreamwriter_set_auto_formatting(void* self, bool autoFormatting);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#autoFormatting)
///
/// @param self const QXmlStreamWriter*
///
bool q_xmlstreamwriter_auto_formatting(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setAutoFormattingIndent)
///
/// @param self QXmlStreamWriter*
/// @param spacesOrTabs int
///
void q_xmlstreamwriter_set_auto_formatting_indent(void* self, int spacesOrTabs);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#autoFormattingIndent)
///
/// @param self const QXmlStreamWriter*
///
int32_t q_xmlstreamwriter_auto_formatting_indent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
///
/// @param self QXmlStreamWriter*
/// @param qualifiedName const char*
/// @param value const char*
///
void q_xmlstreamwriter_write_attribute(void* self, const char* qualifiedName, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
///
/// @param self QXmlStreamWriter*
/// @param namespaceUri const char*
/// @param name const char*
/// @param value const char*
///
void q_xmlstreamwriter_write_attribute2(void* self, const char* namespaceUri, const char* name, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
///
/// @param self QXmlStreamWriter*
/// @param attribute QXmlStreamAttribute*
///
void q_xmlstreamwriter_write_attribute3(void* self, const void* attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttributes)
///
/// @param self QXmlStreamWriter*
/// @param attributes QXmlStreamAttributes*
///
void q_xmlstreamwriter_write_attributes(void* self, const void* attributes);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCDATA)
///
/// @param self QXmlStreamWriter*
/// @param text const char*
///
void q_xmlstreamwriter_write_c_d_a_t_a(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCharacters)
///
/// @param self QXmlStreamWriter*
/// @param text const char*
///
void q_xmlstreamwriter_write_characters(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeComment)
///
/// @param self QXmlStreamWriter*
/// @param text const char*
///
void q_xmlstreamwriter_write_comment(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeDTD)
///
/// @param self QXmlStreamWriter*
/// @param dtd const char*
///
void q_xmlstreamwriter_write_d_t_d(void* self, const char* dtd);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEmptyElement)
///
/// @param self QXmlStreamWriter*
/// @param qualifiedName const char*
///
void q_xmlstreamwriter_write_empty_element(void* self, const char* qualifiedName);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEmptyElement)
///
/// @param self QXmlStreamWriter*
/// @param namespaceUri const char*
/// @param name const char*
///
void q_xmlstreamwriter_write_empty_element2(void* self, const char* namespaceUri, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeTextElement)
///
/// @param self QXmlStreamWriter*
/// @param qualifiedName const char*
/// @param text const char*
///
void q_xmlstreamwriter_write_text_element(void* self, const char* qualifiedName, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeTextElement)
///
/// @param self QXmlStreamWriter*
/// @param namespaceUri const char*
/// @param name const char*
/// @param text const char*
///
void q_xmlstreamwriter_write_text_element2(void* self, const char* namespaceUri, const char* name, const char* text);

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
/// @param name const char*
///
void q_xmlstreamwriter_write_entity_reference(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeNamespace)
///
/// @param self QXmlStreamWriter*
/// @param namespaceUri const char*
///
void q_xmlstreamwriter_write_namespace(void* self, const char* namespaceUri);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeDefaultNamespace)
///
/// @param self QXmlStreamWriter*
/// @param namespaceUri const char*
///
void q_xmlstreamwriter_write_default_namespace(void* self, const char* namespaceUri);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeProcessingInstruction)
///
/// @param self QXmlStreamWriter*
/// @param target const char*
///
void q_xmlstreamwriter_write_processing_instruction(void* self, const char* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
///
/// @param self QXmlStreamWriter*
///
void q_xmlstreamwriter_write_start_document(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
///
/// @param self QXmlStreamWriter*
/// @param version const char*
///
void q_xmlstreamwriter_write_start_document2(void* self, const char* version);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
///
/// @param self QXmlStreamWriter*
/// @param version const char*
/// @param standalone bool
///
void q_xmlstreamwriter_write_start_document3(void* self, const char* version, bool standalone);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartElement)
///
/// @param self QXmlStreamWriter*
/// @param qualifiedName const char*
///
void q_xmlstreamwriter_write_start_element(void* self, const char* qualifiedName);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartElement)
///
/// @param self QXmlStreamWriter*
/// @param namespaceUri const char*
/// @param name const char*
///
void q_xmlstreamwriter_write_start_element2(void* self, const char* namespaceUri, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCurrentToken)
///
/// @param self QXmlStreamWriter*
/// @param reader QXmlStreamReader*
///
void q_xmlstreamwriter_write_current_token(void* self, const void* reader);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#hasError)
///
/// @param self const QXmlStreamWriter*
///
bool q_xmlstreamwriter_has_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeNamespace)
///
/// @param self QXmlStreamWriter*
/// @param namespaceUri const char*
/// @param prefix const char*
///
void q_xmlstreamwriter_write_namespace2(void* self, const char* namespaceUri, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeProcessingInstruction)
///
/// @param self QXmlStreamWriter*
/// @param target const char*
/// @param data const char*
///
void q_xmlstreamwriter_write_processing_instruction2(void* self, const char* target, const char* data);

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
