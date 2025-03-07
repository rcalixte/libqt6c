#include "libqiodevice.hpp"
#include <string.h>
#include "libqxmlstream.hpp"
#include "libqxmlstream.h"

/// https://doc.qt.io/qt-6/qxmlstreamattribute.html

/// q_xmlstreamattribute_new constructs a new QXmlStreamAttribute object.
///
///
QXmlStreamAttribute* q_xmlstreamattribute_new() {
    return QXmlStreamAttribute_new();
}

/// q_xmlstreamattribute_new2 constructs a new QXmlStreamAttribute object.
///
/// ``` const char* qualifiedName, const char* value ```
QXmlStreamAttribute* q_xmlstreamattribute_new2(const char* qualifiedName, const char* value) {
    return QXmlStreamAttribute_new2(qstring(qualifiedName), qstring(value));
}

/// q_xmlstreamattribute_new3 constructs a new QXmlStreamAttribute object.
///
/// ``` const char* namespaceUri, const char* name, const char* value ```
QXmlStreamAttribute* q_xmlstreamattribute_new3(const char* namespaceUri, const char* name, const char* value) {
    return QXmlStreamAttribute_new3(qstring(namespaceUri), qstring(name), qstring(value));
}

/// q_xmlstreamattribute_new4 constructs a new QXmlStreamAttribute object.
///
/// ``` QXmlStreamAttribute* param1 ```
QXmlStreamAttribute* q_xmlstreamattribute_new4(void* param1) {
    return QXmlStreamAttribute_new4((QXmlStreamAttribute*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattribute.html#isDefault)
///
/// ``` QXmlStreamAttribute* self ```
bool q_xmlstreamattribute_is_default(void* self) {
    return QXmlStreamAttribute_IsDefault((QXmlStreamAttribute*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattribute.html#operator==)
///
/// ``` QXmlStreamAttribute* self, QXmlStreamAttribute* other ```
bool q_xmlstreamattribute_operator_equal(void* self, void* other) {
    return QXmlStreamAttribute_OperatorEqual((QXmlStreamAttribute*)self, (QXmlStreamAttribute*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattribute.html#operator!=)
///
/// ``` QXmlStreamAttribute* self, QXmlStreamAttribute* other ```
bool q_xmlstreamattribute_operator_not_equal(void* self, void* other) {
    return QXmlStreamAttribute_OperatorNotEqual((QXmlStreamAttribute*)self, (QXmlStreamAttribute*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattribute.html#operator=)
///
/// ``` QXmlStreamAttribute* self, QXmlStreamAttribute* param1 ```
void q_xmlstreamattribute_operator_assign(void* self, void* param1) {
    QXmlStreamAttribute_OperatorAssign((QXmlStreamAttribute*)self, (QXmlStreamAttribute*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QXmlStreamAttribute* self ```
void q_xmlstreamattribute_delete(void* self) {
    QXmlStreamAttribute_Delete((QXmlStreamAttribute*)(self));
}

/// https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html

/// q_xmlstreamnamespacedeclaration_new constructs a new QXmlStreamNamespaceDeclaration object.
///
///
QXmlStreamNamespaceDeclaration* q_xmlstreamnamespacedeclaration_new() {
    return QXmlStreamNamespaceDeclaration_new();
}

/// q_xmlstreamnamespacedeclaration_new2 constructs a new QXmlStreamNamespaceDeclaration object.
///
/// ``` const char* prefix, const char* namespaceUri ```
QXmlStreamNamespaceDeclaration* q_xmlstreamnamespacedeclaration_new2(const char* prefix, const char* namespaceUri) {
    return QXmlStreamNamespaceDeclaration_new2(qstring(prefix), qstring(namespaceUri));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html#operator==)
///
/// ``` QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* other ```
bool q_xmlstreamnamespacedeclaration_operator_equal(void* self, void* other) {
    return QXmlStreamNamespaceDeclaration_OperatorEqual((QXmlStreamNamespaceDeclaration*)self, (QXmlStreamNamespaceDeclaration*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html#operator!=)
///
/// ``` QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* other ```
bool q_xmlstreamnamespacedeclaration_operator_not_equal(void* self, void* other) {
    return QXmlStreamNamespaceDeclaration_OperatorNotEqual((QXmlStreamNamespaceDeclaration*)self, (QXmlStreamNamespaceDeclaration*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QXmlStreamNamespaceDeclaration* self ```
void q_xmlstreamnamespacedeclaration_delete(void* self) {
    QXmlStreamNamespaceDeclaration_Delete((QXmlStreamNamespaceDeclaration*)(self));
}

/// https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html

/// q_xmlstreamnotationdeclaration_new constructs a new QXmlStreamNotationDeclaration object.
///
///
QXmlStreamNotationDeclaration* q_xmlstreamnotationdeclaration_new() {
    return QXmlStreamNotationDeclaration_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html#operator==)
///
/// ``` QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* other ```
bool q_xmlstreamnotationdeclaration_operator_equal(void* self, void* other) {
    return QXmlStreamNotationDeclaration_OperatorEqual((QXmlStreamNotationDeclaration*)self, (QXmlStreamNotationDeclaration*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html#operator!=)
///
/// ``` QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* other ```
bool q_xmlstreamnotationdeclaration_operator_not_equal(void* self, void* other) {
    return QXmlStreamNotationDeclaration_OperatorNotEqual((QXmlStreamNotationDeclaration*)self, (QXmlStreamNotationDeclaration*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QXmlStreamNotationDeclaration* self ```
void q_xmlstreamnotationdeclaration_delete(void* self) {
    QXmlStreamNotationDeclaration_Delete((QXmlStreamNotationDeclaration*)(self));
}

/// https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html

/// q_xmlstreamentitydeclaration_new constructs a new QXmlStreamEntityDeclaration object.
///
///
QXmlStreamEntityDeclaration* q_xmlstreamentitydeclaration_new() {
    return QXmlStreamEntityDeclaration_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#operator==)
///
/// ``` QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* other ```
bool q_xmlstreamentitydeclaration_operator_equal(void* self, void* other) {
    return QXmlStreamEntityDeclaration_OperatorEqual((QXmlStreamEntityDeclaration*)self, (QXmlStreamEntityDeclaration*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#operator!=)
///
/// ``` QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* other ```
bool q_xmlstreamentitydeclaration_operator_not_equal(void* self, void* other) {
    return QXmlStreamEntityDeclaration_OperatorNotEqual((QXmlStreamEntityDeclaration*)self, (QXmlStreamEntityDeclaration*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QXmlStreamEntityDeclaration* self ```
void q_xmlstreamentitydeclaration_delete(void* self) {
    QXmlStreamEntityDeclaration_Delete((QXmlStreamEntityDeclaration*)(self));
}

/// https://doc.qt.io/qt-6/qxmlstreamentityresolver.html

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
///
/// ``` QXmlStreamEntityResolver* self, const char* publicId, const char* systemId ```
const char* q_xmlstreamentityresolver_resolve_entity(void* self, const char* publicId, const char* systemId) {
    libqt_string _str = QXmlStreamEntityResolver_ResolveEntity((QXmlStreamEntityResolver*)self, qstring(publicId), qstring(systemId));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
///
/// ``` QXmlStreamEntityResolver* self, const char* name ```
const char* q_xmlstreamentityresolver_resolve_undeclared_entity(void* self, const char* name) {
    libqt_string _str = QXmlStreamEntityResolver_ResolveUndeclaredEntity((QXmlStreamEntityResolver*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QXmlStreamEntityResolver* self ```
void q_xmlstreamentityresolver_delete(void* self) {
    QXmlStreamEntityResolver_Delete((QXmlStreamEntityResolver*)(self));
}

/// https://doc.qt.io/qt-6/qxmlstreamreader.html

/// q_xmlstreamreader_new constructs a new QXmlStreamReader object.
///
///
QXmlStreamReader* q_xmlstreamreader_new() {
    return QXmlStreamReader_new();
}

/// q_xmlstreamreader_new2 constructs a new QXmlStreamReader object.
///
/// ``` QIODevice* device ```
QXmlStreamReader* q_xmlstreamreader_new2(void* device) {
    return QXmlStreamReader_new2((QIODevice*)device);
}

/// q_xmlstreamreader_new3 constructs a new QXmlStreamReader object.
///
/// ``` const char* data ```
QXmlStreamReader* q_xmlstreamreader_new3(const char* data) {
    return QXmlStreamReader_new3(qstring(data));
}

/// q_xmlstreamreader_new4 constructs a new QXmlStreamReader object.
///
/// ``` const char* data ```
QXmlStreamReader* q_xmlstreamreader_new4(const char* data) {
    return QXmlStreamReader_new4(qstring(data));
}

/// q_xmlstreamreader_new5 constructs a new QXmlStreamReader object.
///
/// ``` const char* data ```
QXmlStreamReader* q_xmlstreamreader_new5(const char* data) {
    return QXmlStreamReader_new5(data);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#setDevice)
///
/// ``` QXmlStreamReader* self, QIODevice* device ```
void q_xmlstreamreader_set_device(void* self, void* device) {
    QXmlStreamReader_SetDevice((QXmlStreamReader*)self, (QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#device)
///
/// ``` QXmlStreamReader* self ```
QIODevice* q_xmlstreamreader_device(void* self) {
    return QXmlStreamReader_Device((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#addData)
///
/// ``` QXmlStreamReader* self, const char* data ```
void q_xmlstreamreader_add_data(void* self, const char* data) {
    QXmlStreamReader_AddData((QXmlStreamReader*)self, qstring(data));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#addData)
///
/// ``` QXmlStreamReader* self, const char* data ```
void q_xmlstreamreader_add_data_with_data(void* self, const char* data) {
    QXmlStreamReader_AddDataWithData((QXmlStreamReader*)self, qstring(data));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#addData)
///
/// ``` QXmlStreamReader* self, const char* data ```
void q_xmlstreamreader_add_data2(void* self, const char* data) {
    QXmlStreamReader_AddData2((QXmlStreamReader*)self, data);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#clear)
///
/// ``` QXmlStreamReader* self ```
void q_xmlstreamreader_clear(void* self) {
    QXmlStreamReader_Clear((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#atEnd)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_at_end(void* self) {
    return QXmlStreamReader_AtEnd((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#readNext)
///
/// ``` QXmlStreamReader* self ```
int64_t q_xmlstreamreader_read_next(void* self) {
    return QXmlStreamReader_ReadNext((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#readNextStartElement)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_read_next_start_element(void* self) {
    return QXmlStreamReader_ReadNextStartElement((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#skipCurrentElement)
///
/// ``` QXmlStreamReader* self ```
void q_xmlstreamreader_skip_current_element(void* self) {
    QXmlStreamReader_SkipCurrentElement((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#tokenType)
///
/// ``` QXmlStreamReader* self ```
int64_t q_xmlstreamreader_token_type(void* self) {
    return QXmlStreamReader_TokenType((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#tokenString)
///
/// ``` QXmlStreamReader* self ```
const char* q_xmlstreamreader_token_string(void* self) {
    libqt_string _str = QXmlStreamReader_TokenString((QXmlStreamReader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#setNamespaceProcessing)
///
/// ``` QXmlStreamReader* self, bool namespaceProcessing ```
void q_xmlstreamreader_set_namespace_processing(void* self, bool namespaceProcessing) {
    QXmlStreamReader_SetNamespaceProcessing((QXmlStreamReader*)self, namespaceProcessing);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceProcessing)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_namespace_processing(void* self) {
    return QXmlStreamReader_NamespaceProcessing((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStartDocument)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_start_document(void* self) {
    return QXmlStreamReader_IsStartDocument((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEndDocument)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_end_document(void* self) {
    return QXmlStreamReader_IsEndDocument((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStartElement)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_start_element(void* self) {
    return QXmlStreamReader_IsStartElement((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEndElement)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_end_element(void* self) {
    return QXmlStreamReader_IsEndElement((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isCharacters)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_characters(void* self) {
    return QXmlStreamReader_IsCharacters((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isWhitespace)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_whitespace(void* self) {
    return QXmlStreamReader_IsWhitespace((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isCDATA)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_c_d_a_t_a(void* self) {
    return QXmlStreamReader_IsCDATA((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isComment)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_comment(void* self) {
    return QXmlStreamReader_IsComment((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isDTD)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_d_t_d(void* self) {
    return QXmlStreamReader_IsDTD((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEntityReference)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_entity_reference(void* self) {
    return QXmlStreamReader_IsEntityReference((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isProcessingInstruction)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_processing_instruction(void* self) {
    return QXmlStreamReader_IsProcessingInstruction((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStandaloneDocument)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_is_standalone_document(void* self) {
    return QXmlStreamReader_IsStandaloneDocument((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#lineNumber)
///
/// ``` QXmlStreamReader* self ```
long long q_xmlstreamreader_line_number(void* self) {
    return QXmlStreamReader_LineNumber((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#columnNumber)
///
/// ``` QXmlStreamReader* self ```
long long q_xmlstreamreader_column_number(void* self) {
    return QXmlStreamReader_ColumnNumber((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#characterOffset)
///
/// ``` QXmlStreamReader* self ```
long long q_xmlstreamreader_character_offset(void* self) {
    return QXmlStreamReader_CharacterOffset((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#readElementText)
///
/// ``` QXmlStreamReader* self ```
const char* q_xmlstreamreader_read_element_text(void* self) {
    libqt_string _str = QXmlStreamReader_ReadElementText((QXmlStreamReader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceDeclarations)
///
/// ``` QXmlStreamReader* self ```
libqt_list /* of QXmlStreamNamespaceDeclaration* */ q_xmlstreamreader_namespace_declarations(void* self) {
    libqt_list _arr = QXmlStreamReader_NamespaceDeclarations((QXmlStreamReader*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#addExtraNamespaceDeclaration)
///
/// ``` QXmlStreamReader* self, QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction ```
void q_xmlstreamreader_add_extra_namespace_declaration(void* self, void* extraNamespaceDeclaraction) {
    QXmlStreamReader_AddExtraNamespaceDeclaration((QXmlStreamReader*)self, (QXmlStreamNamespaceDeclaration*)extraNamespaceDeclaraction);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#addExtraNamespaceDeclarations)
///
/// ``` QXmlStreamReader* self, QXmlStreamNamespaceDeclaration* extraNamespaceDeclaractions[] ```
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

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#notationDeclarations)
///
/// ``` QXmlStreamReader* self ```
libqt_list /* of QXmlStreamNotationDeclaration* */ q_xmlstreamreader_notation_declarations(void* self) {
    libqt_list _arr = QXmlStreamReader_NotationDeclarations((QXmlStreamReader*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityDeclarations)
///
/// ``` QXmlStreamReader* self ```
libqt_list /* of QXmlStreamEntityDeclaration* */ q_xmlstreamreader_entity_declarations(void* self) {
    libqt_list _arr = QXmlStreamReader_EntityDeclarations((QXmlStreamReader*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityExpansionLimit)
///
/// ``` QXmlStreamReader* self ```
int32_t q_xmlstreamreader_entity_expansion_limit(void* self) {
    return QXmlStreamReader_EntityExpansionLimit((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#setEntityExpansionLimit)
///
/// ``` QXmlStreamReader* self, int limit ```
void q_xmlstreamreader_set_entity_expansion_limit(void* self, int limit) {
    QXmlStreamReader_SetEntityExpansionLimit((QXmlStreamReader*)self, limit);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#raiseError)
///
/// ``` QXmlStreamReader* self ```
void q_xmlstreamreader_raise_error(void* self) {
    QXmlStreamReader_RaiseError((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#errorString)
///
/// ``` QXmlStreamReader* self ```
const char* q_xmlstreamreader_error_string(void* self) {
    libqt_string _str = QXmlStreamReader_ErrorString((QXmlStreamReader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#error)
///
/// ``` QXmlStreamReader* self ```
int64_t q_xmlstreamreader_error(void* self) {
    return QXmlStreamReader_Error((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#hasError)
///
/// ``` QXmlStreamReader* self ```
bool q_xmlstreamreader_has_error(void* self) {
    return QXmlStreamReader_HasError((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#setEntityResolver)
///
/// ``` QXmlStreamReader* self, QXmlStreamEntityResolver* resolver ```
void q_xmlstreamreader_set_entity_resolver(void* self, void* resolver) {
    QXmlStreamReader_SetEntityResolver((QXmlStreamReader*)self, (QXmlStreamEntityResolver*)resolver);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityResolver)
///
/// ``` QXmlStreamReader* self ```
QXmlStreamEntityResolver* q_xmlstreamreader_entity_resolver(void* self) {
    return QXmlStreamReader_EntityResolver((QXmlStreamReader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#readElementText)
///
/// ``` QXmlStreamReader* self, enum QXmlStreamReader__ReadElementTextBehaviour behaviour ```
const char* q_xmlstreamreader_read_element_text1(void* self, int64_t behaviour) {
    libqt_string _str = QXmlStreamReader_ReadElementText1((QXmlStreamReader*)self, behaviour);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#raiseError)
///
/// ``` QXmlStreamReader* self, const char* message ```
void q_xmlstreamreader_raise_error1(void* self, const char* message) {
    QXmlStreamReader_RaiseError1((QXmlStreamReader*)self, qstring(message));
}

/// Delete this object from C++ memory.
///
/// ``` QXmlStreamReader* self ```
void q_xmlstreamreader_delete(void* self) {
    QXmlStreamReader_Delete((QXmlStreamReader*)(self));
}

/// https://doc.qt.io/qt-6/qxmlstreamwriter.html

/// q_xmlstreamwriter_new constructs a new QXmlStreamWriter object.
///
///
QXmlStreamWriter* q_xmlstreamwriter_new() {
    return QXmlStreamWriter_new();
}

/// q_xmlstreamwriter_new2 constructs a new QXmlStreamWriter object.
///
/// ``` QIODevice* device ```
QXmlStreamWriter* q_xmlstreamwriter_new2(void* device) {
    return QXmlStreamWriter_new2((QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setDevice)
///
/// ``` QXmlStreamWriter* self, QIODevice* device ```
void q_xmlstreamwriter_set_device(void* self, void* device) {
    QXmlStreamWriter_SetDevice((QXmlStreamWriter*)self, (QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#device)
///
/// ``` QXmlStreamWriter* self ```
QIODevice* q_xmlstreamwriter_device(void* self) {
    return QXmlStreamWriter_Device((QXmlStreamWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setAutoFormatting)
///
/// ``` QXmlStreamWriter* self, bool autoFormatting ```
void q_xmlstreamwriter_set_auto_formatting(void* self, bool autoFormatting) {
    QXmlStreamWriter_SetAutoFormatting((QXmlStreamWriter*)self, autoFormatting);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#autoFormatting)
///
/// ``` QXmlStreamWriter* self ```
bool q_xmlstreamwriter_auto_formatting(void* self) {
    return QXmlStreamWriter_AutoFormatting((QXmlStreamWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setAutoFormattingIndent)
///
/// ``` QXmlStreamWriter* self, int spacesOrTabs ```
void q_xmlstreamwriter_set_auto_formatting_indent(void* self, int spacesOrTabs) {
    QXmlStreamWriter_SetAutoFormattingIndent((QXmlStreamWriter*)self, spacesOrTabs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#autoFormattingIndent)
///
/// ``` QXmlStreamWriter* self ```
int32_t q_xmlstreamwriter_auto_formatting_indent(void* self) {
    return QXmlStreamWriter_AutoFormattingIndent((QXmlStreamWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
///
/// ``` QXmlStreamWriter* self, const char* qualifiedName, const char* value ```
void q_xmlstreamwriter_write_attribute(void* self, const char* qualifiedName, const char* value) {
    QXmlStreamWriter_WriteAttribute((QXmlStreamWriter*)self, qstring(qualifiedName), qstring(value));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
///
/// ``` QXmlStreamWriter* self, const char* namespaceUri, const char* name, const char* value ```
void q_xmlstreamwriter_write_attribute2(void* self, const char* namespaceUri, const char* name, const char* value) {
    QXmlStreamWriter_WriteAttribute2((QXmlStreamWriter*)self, qstring(namespaceUri), qstring(name), qstring(value));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
///
/// ``` QXmlStreamWriter* self, QXmlStreamAttribute* attribute ```
void q_xmlstreamwriter_write_attribute_with_attribute(void* self, void* attribute) {
    QXmlStreamWriter_WriteAttributeWithAttribute((QXmlStreamWriter*)self, (QXmlStreamAttribute*)attribute);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCDATA)
///
/// ``` QXmlStreamWriter* self, const char* text ```
void q_xmlstreamwriter_write_c_d_a_t_a(void* self, const char* text) {
    QXmlStreamWriter_WriteCDATA((QXmlStreamWriter*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCharacters)
///
/// ``` QXmlStreamWriter* self, const char* text ```
void q_xmlstreamwriter_write_characters(void* self, const char* text) {
    QXmlStreamWriter_WriteCharacters((QXmlStreamWriter*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeComment)
///
/// ``` QXmlStreamWriter* self, const char* text ```
void q_xmlstreamwriter_write_comment(void* self, const char* text) {
    QXmlStreamWriter_WriteComment((QXmlStreamWriter*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeDTD)
///
/// ``` QXmlStreamWriter* self, const char* dtd ```
void q_xmlstreamwriter_write_d_t_d(void* self, const char* dtd) {
    QXmlStreamWriter_WriteDTD((QXmlStreamWriter*)self, qstring(dtd));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEmptyElement)
///
/// ``` QXmlStreamWriter* self, const char* qualifiedName ```
void q_xmlstreamwriter_write_empty_element(void* self, const char* qualifiedName) {
    QXmlStreamWriter_WriteEmptyElement((QXmlStreamWriter*)self, qstring(qualifiedName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEmptyElement)
///
/// ``` QXmlStreamWriter* self, const char* namespaceUri, const char* name ```
void q_xmlstreamwriter_write_empty_element2(void* self, const char* namespaceUri, const char* name) {
    QXmlStreamWriter_WriteEmptyElement2((QXmlStreamWriter*)self, qstring(namespaceUri), qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeTextElement)
///
/// ``` QXmlStreamWriter* self, const char* qualifiedName, const char* text ```
void q_xmlstreamwriter_write_text_element(void* self, const char* qualifiedName, const char* text) {
    QXmlStreamWriter_WriteTextElement((QXmlStreamWriter*)self, qstring(qualifiedName), qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeTextElement)
///
/// ``` QXmlStreamWriter* self, const char* namespaceUri, const char* name, const char* text ```
void q_xmlstreamwriter_write_text_element2(void* self, const char* namespaceUri, const char* name, const char* text) {
    QXmlStreamWriter_WriteTextElement2((QXmlStreamWriter*)self, qstring(namespaceUri), qstring(name), qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEndDocument)
///
/// ``` QXmlStreamWriter* self ```
void q_xmlstreamwriter_write_end_document(void* self) {
    QXmlStreamWriter_WriteEndDocument((QXmlStreamWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEndElement)
///
/// ``` QXmlStreamWriter* self ```
void q_xmlstreamwriter_write_end_element(void* self) {
    QXmlStreamWriter_WriteEndElement((QXmlStreamWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEntityReference)
///
/// ``` QXmlStreamWriter* self, const char* name ```
void q_xmlstreamwriter_write_entity_reference(void* self, const char* name) {
    QXmlStreamWriter_WriteEntityReference((QXmlStreamWriter*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeNamespace)
///
/// ``` QXmlStreamWriter* self, const char* namespaceUri ```
void q_xmlstreamwriter_write_namespace(void* self, const char* namespaceUri) {
    QXmlStreamWriter_WriteNamespace((QXmlStreamWriter*)self, qstring(namespaceUri));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeDefaultNamespace)
///
/// ``` QXmlStreamWriter* self, const char* namespaceUri ```
void q_xmlstreamwriter_write_default_namespace(void* self, const char* namespaceUri) {
    QXmlStreamWriter_WriteDefaultNamespace((QXmlStreamWriter*)self, qstring(namespaceUri));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeProcessingInstruction)
///
/// ``` QXmlStreamWriter* self, const char* target ```
void q_xmlstreamwriter_write_processing_instruction(void* self, const char* target) {
    QXmlStreamWriter_WriteProcessingInstruction((QXmlStreamWriter*)self, qstring(target));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
///
/// ``` QXmlStreamWriter* self ```
void q_xmlstreamwriter_write_start_document(void* self) {
    QXmlStreamWriter_WriteStartDocument((QXmlStreamWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
///
/// ``` QXmlStreamWriter* self, const char* version ```
void q_xmlstreamwriter_write_start_document_with_version(void* self, const char* version) {
    QXmlStreamWriter_WriteStartDocumentWithVersion((QXmlStreamWriter*)self, qstring(version));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
///
/// ``` QXmlStreamWriter* self, const char* version, bool standalone ```
void q_xmlstreamwriter_write_start_document2(void* self, const char* version, bool standalone) {
    QXmlStreamWriter_WriteStartDocument2((QXmlStreamWriter*)self, qstring(version), standalone);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartElement)
///
/// ``` QXmlStreamWriter* self, const char* qualifiedName ```
void q_xmlstreamwriter_write_start_element(void* self, const char* qualifiedName) {
    QXmlStreamWriter_WriteStartElement((QXmlStreamWriter*)self, qstring(qualifiedName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartElement)
///
/// ``` QXmlStreamWriter* self, const char* namespaceUri, const char* name ```
void q_xmlstreamwriter_write_start_element2(void* self, const char* namespaceUri, const char* name) {
    QXmlStreamWriter_WriteStartElement2((QXmlStreamWriter*)self, qstring(namespaceUri), qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCurrentToken)
///
/// ``` QXmlStreamWriter* self, QXmlStreamReader* reader ```
void q_xmlstreamwriter_write_current_token(void* self, void* reader) {
    QXmlStreamWriter_WriteCurrentToken((QXmlStreamWriter*)self, (QXmlStreamReader*)reader);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#hasError)
///
/// ``` QXmlStreamWriter* self ```
bool q_xmlstreamwriter_has_error(void* self) {
    return QXmlStreamWriter_HasError((QXmlStreamWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeNamespace)
///
/// ``` QXmlStreamWriter* self, const char* namespaceUri, const char* prefix ```
void q_xmlstreamwriter_write_namespace2(void* self, const char* namespaceUri, const char* prefix) {
    QXmlStreamWriter_WriteNamespace2((QXmlStreamWriter*)self, qstring(namespaceUri), qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeProcessingInstruction)
///
/// ``` QXmlStreamWriter* self, const char* target, const char* data ```
void q_xmlstreamwriter_write_processing_instruction2(void* self, const char* target, const char* data) {
    QXmlStreamWriter_WriteProcessingInstruction2((QXmlStreamWriter*)self, qstring(target), qstring(data));
}

/// Delete this object from C++ memory.
///
/// ``` QXmlStreamWriter* self ```
void q_xmlstreamwriter_delete(void* self) {
    QXmlStreamWriter_Delete((QXmlStreamWriter*)(self));
}