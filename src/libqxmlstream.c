#include "libqiodevice.hpp"
#include <string.h>
#include "libqxmlstream.hpp"
#include "libqxmlstream.h"

QXmlStreamAttribute* q_xmlstreamattribute_new() {
    return QXmlStreamAttribute_new();
}

QXmlStreamAttribute* q_xmlstreamattribute_new2(const char* qualifiedName, const char* value) {
    return QXmlStreamAttribute_new2(qstring(qualifiedName), qstring(value));
}

QXmlStreamAttribute* q_xmlstreamattribute_new3(const char* namespaceUri, const char* name, const char* value) {
    return QXmlStreamAttribute_new3(qstring(namespaceUri), qstring(name), qstring(value));
}

QXmlStreamAttribute* q_xmlstreamattribute_new4(void* param1) {
    return QXmlStreamAttribute_new4((QXmlStreamAttribute*)param1);
}

bool q_xmlstreamattribute_is_default(void* self) {
    return QXmlStreamAttribute_IsDefault((QXmlStreamAttribute*)self);
}

bool q_xmlstreamattribute_operator_equal(void* self, void* other) {
    return QXmlStreamAttribute_OperatorEqual((QXmlStreamAttribute*)self, (QXmlStreamAttribute*)other);
}

bool q_xmlstreamattribute_operator_not_equal(void* self, void* other) {
    return QXmlStreamAttribute_OperatorNotEqual((QXmlStreamAttribute*)self, (QXmlStreamAttribute*)other);
}

void q_xmlstreamattribute_operator_assign(void* self, void* param1) {
    QXmlStreamAttribute_OperatorAssign((QXmlStreamAttribute*)self, (QXmlStreamAttribute*)param1);
}

void q_xmlstreamattribute_delete(void* self) {
    QXmlStreamAttribute_Delete((QXmlStreamAttribute*)(self));
}

QXmlStreamNamespaceDeclaration* q_xmlstreamnamespacedeclaration_new() {
    return QXmlStreamNamespaceDeclaration_new();
}

QXmlStreamNamespaceDeclaration* q_xmlstreamnamespacedeclaration_new2(const char* prefix, const char* namespaceUri) {
    return QXmlStreamNamespaceDeclaration_new2(qstring(prefix), qstring(namespaceUri));
}

bool q_xmlstreamnamespacedeclaration_operator_equal(void* self, void* other) {
    return QXmlStreamNamespaceDeclaration_OperatorEqual((QXmlStreamNamespaceDeclaration*)self, (QXmlStreamNamespaceDeclaration*)other);
}

bool q_xmlstreamnamespacedeclaration_operator_not_equal(void* self, void* other) {
    return QXmlStreamNamespaceDeclaration_OperatorNotEqual((QXmlStreamNamespaceDeclaration*)self, (QXmlStreamNamespaceDeclaration*)other);
}

void q_xmlstreamnamespacedeclaration_delete(void* self) {
    QXmlStreamNamespaceDeclaration_Delete((QXmlStreamNamespaceDeclaration*)(self));
}

QXmlStreamNotationDeclaration* q_xmlstreamnotationdeclaration_new() {
    return QXmlStreamNotationDeclaration_new();
}

bool q_xmlstreamnotationdeclaration_operator_equal(void* self, void* other) {
    return QXmlStreamNotationDeclaration_OperatorEqual((QXmlStreamNotationDeclaration*)self, (QXmlStreamNotationDeclaration*)other);
}

bool q_xmlstreamnotationdeclaration_operator_not_equal(void* self, void* other) {
    return QXmlStreamNotationDeclaration_OperatorNotEqual((QXmlStreamNotationDeclaration*)self, (QXmlStreamNotationDeclaration*)other);
}

void q_xmlstreamnotationdeclaration_delete(void* self) {
    QXmlStreamNotationDeclaration_Delete((QXmlStreamNotationDeclaration*)(self));
}

QXmlStreamEntityDeclaration* q_xmlstreamentitydeclaration_new() {
    return QXmlStreamEntityDeclaration_new();
}

bool q_xmlstreamentitydeclaration_operator_equal(void* self, void* other) {
    return QXmlStreamEntityDeclaration_OperatorEqual((QXmlStreamEntityDeclaration*)self, (QXmlStreamEntityDeclaration*)other);
}

bool q_xmlstreamentitydeclaration_operator_not_equal(void* self, void* other) {
    return QXmlStreamEntityDeclaration_OperatorNotEqual((QXmlStreamEntityDeclaration*)self, (QXmlStreamEntityDeclaration*)other);
}

void q_xmlstreamentitydeclaration_delete(void* self) {
    QXmlStreamEntityDeclaration_Delete((QXmlStreamEntityDeclaration*)(self));
}

const char* q_xmlstreamentityresolver_resolve_entity(void* self, const char* publicId, const char* systemId) {
    libqt_string _str = QXmlStreamEntityResolver_ResolveEntity((QXmlStreamEntityResolver*)self, qstring(publicId), qstring(systemId));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_xmlstreamentityresolver_resolve_undeclared_entity(void* self, const char* name) {
    libqt_string _str = QXmlStreamEntityResolver_ResolveUndeclaredEntity((QXmlStreamEntityResolver*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_xmlstreamentityresolver_delete(void* self) {
    QXmlStreamEntityResolver_Delete((QXmlStreamEntityResolver*)(self));
}

QXmlStreamReader* q_xmlstreamreader_new() {
    return QXmlStreamReader_new();
}

QXmlStreamReader* q_xmlstreamreader_new2(void* device) {
    return QXmlStreamReader_new2((QIODevice*)device);
}

QXmlStreamReader* q_xmlstreamreader_new3(const char* data) {
    return QXmlStreamReader_new3(qstring(data));
}

QXmlStreamReader* q_xmlstreamreader_new4(const char* data) {
    return QXmlStreamReader_new4(qstring(data));
}

QXmlStreamReader* q_xmlstreamreader_new5(const char* data) {
    return QXmlStreamReader_new5(data);
}

void q_xmlstreamreader_set_device(void* self, void* device) {
    QXmlStreamReader_SetDevice((QXmlStreamReader*)self, (QIODevice*)device);
}

QIODevice* q_xmlstreamreader_device(void* self) {
    return QXmlStreamReader_Device((QXmlStreamReader*)self);
}

void q_xmlstreamreader_add_data(void* self, const char* data) {
    QXmlStreamReader_AddData((QXmlStreamReader*)self, qstring(data));
}

void q_xmlstreamreader_add_data_with_data(void* self, const char* data) {
    QXmlStreamReader_AddDataWithData((QXmlStreamReader*)self, qstring(data));
}

void q_xmlstreamreader_add_data2(void* self, const char* data) {
    QXmlStreamReader_AddData2((QXmlStreamReader*)self, data);
}

void q_xmlstreamreader_clear(void* self) {
    QXmlStreamReader_Clear((QXmlStreamReader*)self);
}

bool q_xmlstreamreader_at_end(void* self) {
    return QXmlStreamReader_AtEnd((QXmlStreamReader*)self);
}

int64_t q_xmlstreamreader_read_next(void* self) {
    return QXmlStreamReader_ReadNext((QXmlStreamReader*)self);
}

bool q_xmlstreamreader_read_next_start_element(void* self) {
    return QXmlStreamReader_ReadNextStartElement((QXmlStreamReader*)self);
}

void q_xmlstreamreader_skip_current_element(void* self) {
    QXmlStreamReader_SkipCurrentElement((QXmlStreamReader*)self);
}

int64_t q_xmlstreamreader_token_type(void* self) {
    return QXmlStreamReader_TokenType((QXmlStreamReader*)self);
}

const char* q_xmlstreamreader_token_string(void* self) {
    libqt_string _str = QXmlStreamReader_TokenString((QXmlStreamReader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_xmlstreamreader_set_namespace_processing(void* self, bool namespaceProcessing) {
    QXmlStreamReader_SetNamespaceProcessing((QXmlStreamReader*)self, namespaceProcessing);
}

bool q_xmlstreamreader_namespace_processing(void* self) {
    return QXmlStreamReader_NamespaceProcessing((QXmlStreamReader*)self);
}

bool q_xmlstreamreader_is_start_document(void* self) {
    return QXmlStreamReader_IsStartDocument((QXmlStreamReader*)self);
}

bool q_xmlstreamreader_is_end_document(void* self) {
    return QXmlStreamReader_IsEndDocument((QXmlStreamReader*)self);
}

bool q_xmlstreamreader_is_start_element(void* self) {
    return QXmlStreamReader_IsStartElement((QXmlStreamReader*)self);
}

bool q_xmlstreamreader_is_end_element(void* self) {
    return QXmlStreamReader_IsEndElement((QXmlStreamReader*)self);
}

bool q_xmlstreamreader_is_characters(void* self) {
    return QXmlStreamReader_IsCharacters((QXmlStreamReader*)self);
}

bool q_xmlstreamreader_is_whitespace(void* self) {
    return QXmlStreamReader_IsWhitespace((QXmlStreamReader*)self);
}

bool q_xmlstreamreader_is_c_d_a_t_a(void* self) {
    return QXmlStreamReader_IsCDATA((QXmlStreamReader*)self);
}

bool q_xmlstreamreader_is_comment(void* self) {
    return QXmlStreamReader_IsComment((QXmlStreamReader*)self);
}

bool q_xmlstreamreader_is_d_t_d(void* self) {
    return QXmlStreamReader_IsDTD((QXmlStreamReader*)self);
}

bool q_xmlstreamreader_is_entity_reference(void* self) {
    return QXmlStreamReader_IsEntityReference((QXmlStreamReader*)self);
}

bool q_xmlstreamreader_is_processing_instruction(void* self) {
    return QXmlStreamReader_IsProcessingInstruction((QXmlStreamReader*)self);
}

bool q_xmlstreamreader_is_standalone_document(void* self) {
    return QXmlStreamReader_IsStandaloneDocument((QXmlStreamReader*)self);
}

long long q_xmlstreamreader_line_number(void* self) {
    return QXmlStreamReader_LineNumber((QXmlStreamReader*)self);
}

long long q_xmlstreamreader_column_number(void* self) {
    return QXmlStreamReader_ColumnNumber((QXmlStreamReader*)self);
}

long long q_xmlstreamreader_character_offset(void* self) {
    return QXmlStreamReader_CharacterOffset((QXmlStreamReader*)self);
}

const char* q_xmlstreamreader_read_element_text(void* self) {
    libqt_string _str = QXmlStreamReader_ReadElementText((QXmlStreamReader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QXmlStreamNamespaceDeclaration* */ q_xmlstreamreader_namespace_declarations(void* self) {
    libqt_list _arr = QXmlStreamReader_NamespaceDeclarations((QXmlStreamReader*)self);
    return _arr;
}

void q_xmlstreamreader_add_extra_namespace_declaration(void* self, void* extraNamespaceDeclaraction) {
    QXmlStreamReader_AddExtraNamespaceDeclaration((QXmlStreamReader*)self, (QXmlStreamNamespaceDeclaration*)extraNamespaceDeclaraction);
}

void q_xmlstreamreader_add_extra_namespace_declarations(void* self, void* extraNamespaceDeclaractions[]) {
    QXmlStreamNamespaceDeclaration** extraNamespaceDeclaractions_arr = (QXmlStreamNamespaceDeclaration**)extraNamespaceDeclaractions;
    size_t extraNamespaceDeclaractions_len = 0;
    while (extraNamespaceDeclaractions_arr[extraNamespaceDeclaractions_len] != NULL) {
        extraNamespaceDeclaractions_len++;
    }
    libqt_list extraNamespaceDeclaractions_list = {
        .len = extraNamespaceDeclaractions_len,
        .data = {(QXmlStreamNamespaceDeclaration*)extraNamespaceDeclaractions},
    };
    QXmlStreamReader_AddExtraNamespaceDeclarations((QXmlStreamReader*)self, extraNamespaceDeclaractions_list);
}

libqt_list /* of QXmlStreamNotationDeclaration* */ q_xmlstreamreader_notation_declarations(void* self) {
    libqt_list _arr = QXmlStreamReader_NotationDeclarations((QXmlStreamReader*)self);
    return _arr;
}

libqt_list /* of QXmlStreamEntityDeclaration* */ q_xmlstreamreader_entity_declarations(void* self) {
    libqt_list _arr = QXmlStreamReader_EntityDeclarations((QXmlStreamReader*)self);
    return _arr;
}

int32_t q_xmlstreamreader_entity_expansion_limit(void* self) {
    return QXmlStreamReader_EntityExpansionLimit((QXmlStreamReader*)self);
}

void q_xmlstreamreader_set_entity_expansion_limit(void* self, int limit) {
    QXmlStreamReader_SetEntityExpansionLimit((QXmlStreamReader*)self, limit);
}

void q_xmlstreamreader_raise_error(void* self) {
    QXmlStreamReader_RaiseError((QXmlStreamReader*)self);
}

const char* q_xmlstreamreader_error_string(void* self) {
    libqt_string _str = QXmlStreamReader_ErrorString((QXmlStreamReader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_xmlstreamreader_error(void* self) {
    return QXmlStreamReader_Error((QXmlStreamReader*)self);
}

bool q_xmlstreamreader_has_error(void* self) {
    return QXmlStreamReader_HasError((QXmlStreamReader*)self);
}

void q_xmlstreamreader_set_entity_resolver(void* self, void* resolver) {
    QXmlStreamReader_SetEntityResolver((QXmlStreamReader*)self, (QXmlStreamEntityResolver*)resolver);
}

QXmlStreamEntityResolver* q_xmlstreamreader_entity_resolver(void* self) {
    return QXmlStreamReader_EntityResolver((QXmlStreamReader*)self);
}

const char* q_xmlstreamreader_read_element_text1(void* self, int64_t behaviour) {
    libqt_string _str = QXmlStreamReader_ReadElementText1((QXmlStreamReader*)self, behaviour);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_xmlstreamreader_raise_error1(void* self, const char* message) {
    QXmlStreamReader_RaiseError1((QXmlStreamReader*)self, qstring(message));
}

void q_xmlstreamreader_delete(void* self) {
    QXmlStreamReader_Delete((QXmlStreamReader*)(self));
}

QXmlStreamWriter* q_xmlstreamwriter_new() {
    return QXmlStreamWriter_new();
}

QXmlStreamWriter* q_xmlstreamwriter_new2(void* device) {
    return QXmlStreamWriter_new2((QIODevice*)device);
}

void q_xmlstreamwriter_set_device(void* self, void* device) {
    QXmlStreamWriter_SetDevice((QXmlStreamWriter*)self, (QIODevice*)device);
}

QIODevice* q_xmlstreamwriter_device(void* self) {
    return QXmlStreamWriter_Device((QXmlStreamWriter*)self);
}

void q_xmlstreamwriter_set_auto_formatting(void* self, bool autoFormatting) {
    QXmlStreamWriter_SetAutoFormatting((QXmlStreamWriter*)self, autoFormatting);
}

bool q_xmlstreamwriter_auto_formatting(void* self) {
    return QXmlStreamWriter_AutoFormatting((QXmlStreamWriter*)self);
}

void q_xmlstreamwriter_set_auto_formatting_indent(void* self, int spacesOrTabs) {
    QXmlStreamWriter_SetAutoFormattingIndent((QXmlStreamWriter*)self, spacesOrTabs);
}

int32_t q_xmlstreamwriter_auto_formatting_indent(void* self) {
    return QXmlStreamWriter_AutoFormattingIndent((QXmlStreamWriter*)self);
}

void q_xmlstreamwriter_write_attribute(void* self, const char* qualifiedName, const char* value) {
    QXmlStreamWriter_WriteAttribute((QXmlStreamWriter*)self, qstring(qualifiedName), qstring(value));
}

void q_xmlstreamwriter_write_attribute2(void* self, const char* namespaceUri, const char* name, const char* value) {
    QXmlStreamWriter_WriteAttribute2((QXmlStreamWriter*)self, qstring(namespaceUri), qstring(name), qstring(value));
}

void q_xmlstreamwriter_write_attribute_with_attribute(void* self, void* attribute) {
    QXmlStreamWriter_WriteAttributeWithAttribute((QXmlStreamWriter*)self, (QXmlStreamAttribute*)attribute);
}

void q_xmlstreamwriter_write_c_d_a_t_a(void* self, const char* text) {
    QXmlStreamWriter_WriteCDATA((QXmlStreamWriter*)self, qstring(text));
}

void q_xmlstreamwriter_write_characters(void* self, const char* text) {
    QXmlStreamWriter_WriteCharacters((QXmlStreamWriter*)self, qstring(text));
}

void q_xmlstreamwriter_write_comment(void* self, const char* text) {
    QXmlStreamWriter_WriteComment((QXmlStreamWriter*)self, qstring(text));
}

void q_xmlstreamwriter_write_d_t_d(void* self, const char* dtd) {
    QXmlStreamWriter_WriteDTD((QXmlStreamWriter*)self, qstring(dtd));
}

void q_xmlstreamwriter_write_empty_element(void* self, const char* qualifiedName) {
    QXmlStreamWriter_WriteEmptyElement((QXmlStreamWriter*)self, qstring(qualifiedName));
}

void q_xmlstreamwriter_write_empty_element2(void* self, const char* namespaceUri, const char* name) {
    QXmlStreamWriter_WriteEmptyElement2((QXmlStreamWriter*)self, qstring(namespaceUri), qstring(name));
}

void q_xmlstreamwriter_write_text_element(void* self, const char* qualifiedName, const char* text) {
    QXmlStreamWriter_WriteTextElement((QXmlStreamWriter*)self, qstring(qualifiedName), qstring(text));
}

void q_xmlstreamwriter_write_text_element2(void* self, const char* namespaceUri, const char* name, const char* text) {
    QXmlStreamWriter_WriteTextElement2((QXmlStreamWriter*)self, qstring(namespaceUri), qstring(name), qstring(text));
}

void q_xmlstreamwriter_write_end_document(void* self) {
    QXmlStreamWriter_WriteEndDocument((QXmlStreamWriter*)self);
}

void q_xmlstreamwriter_write_end_element(void* self) {
    QXmlStreamWriter_WriteEndElement((QXmlStreamWriter*)self);
}

void q_xmlstreamwriter_write_entity_reference(void* self, const char* name) {
    QXmlStreamWriter_WriteEntityReference((QXmlStreamWriter*)self, qstring(name));
}

void q_xmlstreamwriter_write_namespace(void* self, const char* namespaceUri) {
    QXmlStreamWriter_WriteNamespace((QXmlStreamWriter*)self, qstring(namespaceUri));
}

void q_xmlstreamwriter_write_default_namespace(void* self, const char* namespaceUri) {
    QXmlStreamWriter_WriteDefaultNamespace((QXmlStreamWriter*)self, qstring(namespaceUri));
}

void q_xmlstreamwriter_write_processing_instruction(void* self, const char* target) {
    QXmlStreamWriter_WriteProcessingInstruction((QXmlStreamWriter*)self, qstring(target));
}

void q_xmlstreamwriter_write_start_document(void* self) {
    QXmlStreamWriter_WriteStartDocument((QXmlStreamWriter*)self);
}

void q_xmlstreamwriter_write_start_document_with_version(void* self, const char* version) {
    QXmlStreamWriter_WriteStartDocumentWithVersion((QXmlStreamWriter*)self, qstring(version));
}

void q_xmlstreamwriter_write_start_document2(void* self, const char* version, bool standalone) {
    QXmlStreamWriter_WriteStartDocument2((QXmlStreamWriter*)self, qstring(version), standalone);
}

void q_xmlstreamwriter_write_start_element(void* self, const char* qualifiedName) {
    QXmlStreamWriter_WriteStartElement((QXmlStreamWriter*)self, qstring(qualifiedName));
}

void q_xmlstreamwriter_write_start_element2(void* self, const char* namespaceUri, const char* name) {
    QXmlStreamWriter_WriteStartElement2((QXmlStreamWriter*)self, qstring(namespaceUri), qstring(name));
}

void q_xmlstreamwriter_write_current_token(void* self, void* reader) {
    QXmlStreamWriter_WriteCurrentToken((QXmlStreamWriter*)self, (QXmlStreamReader*)reader);
}

bool q_xmlstreamwriter_has_error(void* self) {
    return QXmlStreamWriter_HasError((QXmlStreamWriter*)self);
}

void q_xmlstreamwriter_write_namespace2(void* self, const char* namespaceUri, const char* prefix) {
    QXmlStreamWriter_WriteNamespace2((QXmlStreamWriter*)self, qstring(namespaceUri), qstring(prefix));
}

void q_xmlstreamwriter_write_processing_instruction2(void* self, const char* target, const char* data) {
    QXmlStreamWriter_WriteProcessingInstruction2((QXmlStreamWriter*)self, qstring(target), qstring(data));
}

void q_xmlstreamwriter_delete(void* self) {
    QXmlStreamWriter_Delete((QXmlStreamWriter*)(self));
}
