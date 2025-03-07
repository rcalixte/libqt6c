#pragma once
#ifndef SRCQT6C_LIBQXMLSTREAM_H
#define SRCQT6C_LIBQXMLSTREAM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqiodevice.h"
#include <string.h>

QXmlStreamAttribute* q_xmlstreamattribute_new();
QXmlStreamAttribute* q_xmlstreamattribute_new2(const char* qualifiedName, const char* value);
QXmlStreamAttribute* q_xmlstreamattribute_new3(const char* namespaceUri, const char* name, const char* value);
QXmlStreamAttribute* q_xmlstreamattribute_new4(void* param1);
bool q_xmlstreamattribute_is_default(void* self);
bool q_xmlstreamattribute_operator_equal(void* self, void* other);
bool q_xmlstreamattribute_operator_not_equal(void* self, void* other);
void q_xmlstreamattribute_operator_assign(void* self, void* param1);
void q_xmlstreamattribute_delete(void* self);

QXmlStreamNamespaceDeclaration* q_xmlstreamnamespacedeclaration_new();
QXmlStreamNamespaceDeclaration* q_xmlstreamnamespacedeclaration_new2(const char* prefix, const char* namespaceUri);
bool q_xmlstreamnamespacedeclaration_operator_equal(void* self, void* other);
bool q_xmlstreamnamespacedeclaration_operator_not_equal(void* self, void* other);
void q_xmlstreamnamespacedeclaration_delete(void* self);

QXmlStreamNotationDeclaration* q_xmlstreamnotationdeclaration_new();
bool q_xmlstreamnotationdeclaration_operator_equal(void* self, void* other);
bool q_xmlstreamnotationdeclaration_operator_not_equal(void* self, void* other);
void q_xmlstreamnotationdeclaration_delete(void* self);

QXmlStreamEntityDeclaration* q_xmlstreamentitydeclaration_new();
bool q_xmlstreamentitydeclaration_operator_equal(void* self, void* other);
bool q_xmlstreamentitydeclaration_operator_not_equal(void* self, void* other);
void q_xmlstreamentitydeclaration_delete(void* self);

const char* q_xmlstreamentityresolver_resolve_entity(void* self, const char* publicId, const char* systemId);
const char* q_xmlstreamentityresolver_resolve_undeclared_entity(void* self, const char* name);
void q_xmlstreamentityresolver_delete(void* self);

QXmlStreamReader* q_xmlstreamreader_new();
QXmlStreamReader* q_xmlstreamreader_new2(void* device);
QXmlStreamReader* q_xmlstreamreader_new3(const char* data);
QXmlStreamReader* q_xmlstreamreader_new4(const char* data);
QXmlStreamReader* q_xmlstreamreader_new5(const char* data);
void q_xmlstreamreader_set_device(void* self, void* device);
QIODevice* q_xmlstreamreader_device(void* self);
void q_xmlstreamreader_add_data(void* self, const char* data);
void q_xmlstreamreader_add_data_with_data(void* self, const char* data);
void q_xmlstreamreader_add_data2(void* self, const char* data);
void q_xmlstreamreader_clear(void* self);
bool q_xmlstreamreader_at_end(void* self);
int64_t q_xmlstreamreader_read_next(void* self);
bool q_xmlstreamreader_read_next_start_element(void* self);
void q_xmlstreamreader_skip_current_element(void* self);
int64_t q_xmlstreamreader_token_type(void* self);
const char* q_xmlstreamreader_token_string(void* self);
void q_xmlstreamreader_set_namespace_processing(void* self, bool namespaceProcessing);
bool q_xmlstreamreader_namespace_processing(void* self);
bool q_xmlstreamreader_is_start_document(void* self);
bool q_xmlstreamreader_is_end_document(void* self);
bool q_xmlstreamreader_is_start_element(void* self);
bool q_xmlstreamreader_is_end_element(void* self);
bool q_xmlstreamreader_is_characters(void* self);
bool q_xmlstreamreader_is_whitespace(void* self);
bool q_xmlstreamreader_is_c_d_a_t_a(void* self);
bool q_xmlstreamreader_is_comment(void* self);
bool q_xmlstreamreader_is_d_t_d(void* self);
bool q_xmlstreamreader_is_entity_reference(void* self);
bool q_xmlstreamreader_is_processing_instruction(void* self);
bool q_xmlstreamreader_is_standalone_document(void* self);
long long q_xmlstreamreader_line_number(void* self);
long long q_xmlstreamreader_column_number(void* self);
long long q_xmlstreamreader_character_offset(void* self);
const char* q_xmlstreamreader_read_element_text(void* self);
libqt_list /* of QXmlStreamNamespaceDeclaration* */ q_xmlstreamreader_namespace_declarations(void* self);
void q_xmlstreamreader_add_extra_namespace_declaration(void* self, void* extraNamespaceDeclaraction);
void q_xmlstreamreader_add_extra_namespace_declarations(void* self, void* extraNamespaceDeclaractions[]);
libqt_list /* of QXmlStreamNotationDeclaration* */ q_xmlstreamreader_notation_declarations(void* self);
libqt_list /* of QXmlStreamEntityDeclaration* */ q_xmlstreamreader_entity_declarations(void* self);
int32_t q_xmlstreamreader_entity_expansion_limit(void* self);
void q_xmlstreamreader_set_entity_expansion_limit(void* self, int limit);
void q_xmlstreamreader_raise_error(void* self);
const char* q_xmlstreamreader_error_string(void* self);
int64_t q_xmlstreamreader_error(void* self);
bool q_xmlstreamreader_has_error(void* self);
void q_xmlstreamreader_set_entity_resolver(void* self, void* resolver);
QXmlStreamEntityResolver* q_xmlstreamreader_entity_resolver(void* self);
const char* q_xmlstreamreader_read_element_text1(void* self, int64_t behaviour);
void q_xmlstreamreader_raise_error1(void* self, const char* message);
void q_xmlstreamreader_delete(void* self);

QXmlStreamWriter* q_xmlstreamwriter_new();
QXmlStreamWriter* q_xmlstreamwriter_new2(void* device);
void q_xmlstreamwriter_set_device(void* self, void* device);
QIODevice* q_xmlstreamwriter_device(void* self);
void q_xmlstreamwriter_set_auto_formatting(void* self, bool autoFormatting);
bool q_xmlstreamwriter_auto_formatting(void* self);
void q_xmlstreamwriter_set_auto_formatting_indent(void* self, int spacesOrTabs);
int32_t q_xmlstreamwriter_auto_formatting_indent(void* self);
void q_xmlstreamwriter_write_attribute(void* self, const char* qualifiedName, const char* value);
void q_xmlstreamwriter_write_attribute2(void* self, const char* namespaceUri, const char* name, const char* value);
void q_xmlstreamwriter_write_attribute_with_attribute(void* self, void* attribute);
void q_xmlstreamwriter_write_c_d_a_t_a(void* self, const char* text);
void q_xmlstreamwriter_write_characters(void* self, const char* text);
void q_xmlstreamwriter_write_comment(void* self, const char* text);
void q_xmlstreamwriter_write_d_t_d(void* self, const char* dtd);
void q_xmlstreamwriter_write_empty_element(void* self, const char* qualifiedName);
void q_xmlstreamwriter_write_empty_element2(void* self, const char* namespaceUri, const char* name);
void q_xmlstreamwriter_write_text_element(void* self, const char* qualifiedName, const char* text);
void q_xmlstreamwriter_write_text_element2(void* self, const char* namespaceUri, const char* name, const char* text);
void q_xmlstreamwriter_write_end_document(void* self);
void q_xmlstreamwriter_write_end_element(void* self);
void q_xmlstreamwriter_write_entity_reference(void* self, const char* name);
void q_xmlstreamwriter_write_namespace(void* self, const char* namespaceUri);
void q_xmlstreamwriter_write_default_namespace(void* self, const char* namespaceUri);
void q_xmlstreamwriter_write_processing_instruction(void* self, const char* target);
void q_xmlstreamwriter_write_start_document(void* self);
void q_xmlstreamwriter_write_start_document_with_version(void* self, const char* version);
void q_xmlstreamwriter_write_start_document2(void* self, const char* version, bool standalone);
void q_xmlstreamwriter_write_start_element(void* self, const char* qualifiedName);
void q_xmlstreamwriter_write_start_element2(void* self, const char* namespaceUri, const char* name);
void q_xmlstreamwriter_write_current_token(void* self, void* reader);
bool q_xmlstreamwriter_has_error(void* self);
void q_xmlstreamwriter_write_namespace2(void* self, const char* namespaceUri, const char* prefix);
void q_xmlstreamwriter_write_processing_instruction2(void* self, const char* target, const char* data);
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
