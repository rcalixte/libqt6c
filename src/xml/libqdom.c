#include "../libqanystringview.hpp"
#include "../libqiodevice.hpp"
#include "../libqtextstream.hpp"
#include "../libqxmlstream.hpp"
#include "libqdom.hpp"
#include "libqdom.h"

QDomImplementation* q_domimplementation_new() {
    return QDomImplementation_new();
}

QDomImplementation* q_domimplementation_new2(void* implementation) {
    return QDomImplementation_new2((QDomImplementation*)implementation);
}

void q_domimplementation_operator_assign(void* self, void* other) {
    QDomImplementation_OperatorAssign((QDomImplementation*)self, (QDomImplementation*)other);
}

bool q_domimplementation_operator_equal(void* self, void* other) {
    return QDomImplementation_OperatorEqual((QDomImplementation*)self, (QDomImplementation*)other);
}

bool q_domimplementation_operator_not_equal(void* self, void* other) {
    return QDomImplementation_OperatorNotEqual((QDomImplementation*)self, (QDomImplementation*)other);
}

bool q_domimplementation_has_feature(void* self, const char* feature, const char* version) {
    return QDomImplementation_HasFeature((QDomImplementation*)self, qstring(feature), qstring(version));
}

QDomDocumentType* q_domimplementation_create_document_type(void* self, const char* qName, const char* publicId, const char* systemId) {
    return QDomImplementation_CreateDocumentType((QDomImplementation*)self, qstring(qName), qstring(publicId), qstring(systemId));
}

QDomDocument* q_domimplementation_create_document(void* self, const char* nsURI, const char* qName, void* doctype) {
    return QDomImplementation_CreateDocument((QDomImplementation*)self, qstring(nsURI), qstring(qName), (QDomDocumentType*)doctype);
}

int32_t q_domimplementation_invalid_data_policy() {
    return QDomImplementation_InvalidDataPolicy();
}

void q_domimplementation_set_invalid_data_policy(int32_t policy) {
    QDomImplementation_SetInvalidDataPolicy(policy);
}

bool q_domimplementation_is_null(void* self) {
    return QDomImplementation_IsNull((QDomImplementation*)self);
}

void q_domimplementation_delete(void* self) {
    QDomImplementation_Delete((QDomImplementation*)(self));
}

QDomNode* q_domnode_new() {
    return QDomNode_new();
}

QDomNode* q_domnode_new2(void* node) {
    return QDomNode_new2((QDomNode*)node);
}

void q_domnode_operator_assign(void* self, void* other) {
    QDomNode_OperatorAssign((QDomNode*)self, (QDomNode*)other);
}

bool q_domnode_operator_equal(void* self, void* other) {
    return QDomNode_OperatorEqual((QDomNode*)self, (QDomNode*)other);
}

bool q_domnode_operator_not_equal(void* self, void* other) {
    return QDomNode_OperatorNotEqual((QDomNode*)self, (QDomNode*)other);
}

QDomNode* q_domnode_insert_before(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertBefore((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domnode_insert_after(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertAfter((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domnode_replace_child(void* self, void* newChild, void* oldChild) {
    return QDomNode_ReplaceChild((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)oldChild);
}

QDomNode* q_domnode_remove_child(void* self, void* oldChild) {
    return QDomNode_RemoveChild((QDomNode*)self, (QDomNode*)oldChild);
}

QDomNode* q_domnode_append_child(void* self, void* newChild) {
    return QDomNode_AppendChild((QDomNode*)self, (QDomNode*)newChild);
}

bool q_domnode_has_child_nodes(void* self) {
    return QDomNode_HasChildNodes((QDomNode*)self);
}

QDomNode* q_domnode_clone_node(void* self) {
    return QDomNode_CloneNode((QDomNode*)self);
}

void q_domnode_normalize(void* self) {
    QDomNode_Normalize((QDomNode*)self);
}

bool q_domnode_is_supported(void* self, const char* feature, const char* version) {
    return QDomNode_IsSupported((QDomNode*)self, qstring(feature), qstring(version));
}

const char* q_domnode_node_name(void* self) {
    libqt_string _str = QDomNode_NodeName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_domnode_node_type(void* self) {
    return QDomNode_NodeType((QDomNode*)self);
}

QDomNode* q_domnode_parent_node(void* self) {
    return QDomNode_ParentNode((QDomNode*)self);
}

QDomNodeList* q_domnode_child_nodes(void* self) {
    return QDomNode_ChildNodes((QDomNode*)self);
}

QDomNode* q_domnode_first_child(void* self) {
    return QDomNode_FirstChild((QDomNode*)self);
}

QDomNode* q_domnode_last_child(void* self) {
    return QDomNode_LastChild((QDomNode*)self);
}

QDomNode* q_domnode_previous_sibling(void* self) {
    return QDomNode_PreviousSibling((QDomNode*)self);
}

QDomNode* q_domnode_next_sibling(void* self) {
    return QDomNode_NextSibling((QDomNode*)self);
}

QDomNamedNodeMap* q_domnode_attributes(void* self) {
    return QDomNode_Attributes((QDomNode*)self);
}

QDomDocument* q_domnode_owner_document(void* self) {
    return QDomNode_OwnerDocument((QDomNode*)self);
}

const char* q_domnode_namespace_u_r_i(void* self) {
    libqt_string _str = QDomNode_NamespaceURI((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domnode_local_name(void* self) {
    libqt_string _str = QDomNode_LocalName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domnode_has_attributes(void* self) {
    return QDomNode_HasAttributes((QDomNode*)self);
}

const char* q_domnode_node_value(void* self) {
    libqt_string _str = QDomNode_NodeValue((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domnode_set_node_value(void* self, const char* value) {
    QDomNode_SetNodeValue((QDomNode*)self, qstring(value));
}

const char* q_domnode_prefix(void* self) {
    libqt_string _str = QDomNode_Prefix((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domnode_set_prefix(void* self, const char* pre) {
    QDomNode_SetPrefix((QDomNode*)self, qstring(pre));
}

bool q_domnode_is_attr(void* self) {
    return QDomNode_IsAttr((QDomNode*)self);
}

bool q_domnode_is_c_d_a_t_a_section(void* self) {
    return QDomNode_IsCDATASection((QDomNode*)self);
}

bool q_domnode_is_document_fragment(void* self) {
    return QDomNode_IsDocumentFragment((QDomNode*)self);
}

bool q_domnode_is_document(void* self) {
    return QDomNode_IsDocument((QDomNode*)self);
}

bool q_domnode_is_document_type(void* self) {
    return QDomNode_IsDocumentType((QDomNode*)self);
}

bool q_domnode_is_element(void* self) {
    return QDomNode_IsElement((QDomNode*)self);
}

bool q_domnode_is_entity_reference(void* self) {
    return QDomNode_IsEntityReference((QDomNode*)self);
}

bool q_domnode_is_text(void* self) {
    return QDomNode_IsText((QDomNode*)self);
}

bool q_domnode_is_entity(void* self) {
    return QDomNode_IsEntity((QDomNode*)self);
}

bool q_domnode_is_notation(void* self) {
    return QDomNode_IsNotation((QDomNode*)self);
}

bool q_domnode_is_processing_instruction(void* self) {
    return QDomNode_IsProcessingInstruction((QDomNode*)self);
}

bool q_domnode_is_character_data(void* self) {
    return QDomNode_IsCharacterData((QDomNode*)self);
}

bool q_domnode_is_comment(void* self) {
    return QDomNode_IsComment((QDomNode*)self);
}

QDomNode* q_domnode_named_item(void* self, const char* name) {
    return QDomNode_NamedItem((QDomNode*)self, qstring(name));
}

bool q_domnode_is_null(void* self) {
    return QDomNode_IsNull((QDomNode*)self);
}

void q_domnode_clear(void* self) {
    QDomNode_Clear((QDomNode*)self);
}

QDomAttr* q_domnode_to_attr(void* self) {
    return QDomNode_ToAttr((QDomNode*)self);
}

QDomCDATASection* q_domnode_to_c_d_a_t_a_section(void* self) {
    return QDomNode_ToCDATASection((QDomNode*)self);
}

QDomDocumentFragment* q_domnode_to_document_fragment(void* self) {
    return QDomNode_ToDocumentFragment((QDomNode*)self);
}

QDomDocument* q_domnode_to_document(void* self) {
    return QDomNode_ToDocument((QDomNode*)self);
}

QDomDocumentType* q_domnode_to_document_type(void* self) {
    return QDomNode_ToDocumentType((QDomNode*)self);
}

QDomElement* q_domnode_to_element(void* self) {
    return QDomNode_ToElement((QDomNode*)self);
}

QDomEntityReference* q_domnode_to_entity_reference(void* self) {
    return QDomNode_ToEntityReference((QDomNode*)self);
}

QDomText* q_domnode_to_text(void* self) {
    return QDomNode_ToText((QDomNode*)self);
}

QDomEntity* q_domnode_to_entity(void* self) {
    return QDomNode_ToEntity((QDomNode*)self);
}

QDomNotation* q_domnode_to_notation(void* self) {
    return QDomNode_ToNotation((QDomNode*)self);
}

QDomProcessingInstruction* q_domnode_to_processing_instruction(void* self) {
    return QDomNode_ToProcessingInstruction((QDomNode*)self);
}

QDomCharacterData* q_domnode_to_character_data(void* self) {
    return QDomNode_ToCharacterData((QDomNode*)self);
}

QDomComment* q_domnode_to_comment(void* self) {
    return QDomNode_ToComment((QDomNode*)self);
}

void q_domnode_save(void* self, void* param1, int param2) {
    QDomNode_Save((QDomNode*)self, (QTextStream*)param1, param2);
}

QDomElement* q_domnode_first_child_element(void* self) {
    return QDomNode_FirstChildElement((QDomNode*)self);
}

QDomElement* q_domnode_last_child_element(void* self) {
    return QDomNode_LastChildElement((QDomNode*)self);
}

QDomElement* q_domnode_previous_sibling_element(void* self) {
    return QDomNode_PreviousSiblingElement((QDomNode*)self);
}

QDomElement* q_domnode_next_sibling_element(void* self) {
    return QDomNode_NextSiblingElement((QDomNode*)self);
}

int32_t q_domnode_line_number(void* self) {
    return QDomNode_LineNumber((QDomNode*)self);
}

int32_t q_domnode_column_number(void* self) {
    return QDomNode_ColumnNumber((QDomNode*)self);
}

QDomNode* q_domnode_clone_node1(void* self, bool deep) {
    return QDomNode_CloneNode1((QDomNode*)self, deep);
}

void q_domnode_save3(void* self, void* param1, int param2, int32_t param3) {
    QDomNode_Save3((QDomNode*)self, (QTextStream*)param1, param2, param3);
}

QDomElement* q_domnode_first_child_element1(void* self, const char* tagName) {
    return QDomNode_FirstChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domnode_first_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_FirstChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domnode_last_child_element1(void* self, const char* tagName) {
    return QDomNode_LastChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domnode_last_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_LastChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domnode_previous_sibling_element1(void* self, const char* tagName) {
    return QDomNode_PreviousSiblingElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domnode_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_PreviousSiblingElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domnode_next_sibling_element1(void* self, const char* taName) {
    return QDomNode_NextSiblingElement1((QDomNode*)self, qstring(taName));
}

QDomElement* q_domnode_next_sibling_element2(void* self, const char* taName, const char* namespaceURI) {
    return QDomNode_NextSiblingElement2((QDomNode*)self, qstring(taName), qstring(namespaceURI));
}

void q_domnode_delete(void* self) {
    QDomNode_Delete((QDomNode*)(self));
}

QDomNodeList* q_domnodelist_new() {
    return QDomNodeList_new();
}

QDomNodeList* q_domnodelist_new2(void* nodeList) {
    return QDomNodeList_new2((QDomNodeList*)nodeList);
}

void q_domnodelist_operator_assign(void* self, void* other) {
    QDomNodeList_OperatorAssign((QDomNodeList*)self, (QDomNodeList*)other);
}

bool q_domnodelist_operator_equal(void* self, void* other) {
    return QDomNodeList_OperatorEqual((QDomNodeList*)self, (QDomNodeList*)other);
}

bool q_domnodelist_operator_not_equal(void* self, void* other) {
    return QDomNodeList_OperatorNotEqual((QDomNodeList*)self, (QDomNodeList*)other);
}

QDomNode* q_domnodelist_item(void* self, int index) {
    return QDomNodeList_Item((QDomNodeList*)self, index);
}

QDomNode* q_domnodelist_at(void* self, int index) {
    return QDomNodeList_At((QDomNodeList*)self, index);
}

int32_t q_domnodelist_length(void* self) {
    return QDomNodeList_Length((QDomNodeList*)self);
}

int32_t q_domnodelist_count(void* self) {
    return QDomNodeList_Count((QDomNodeList*)self);
}

int32_t q_domnodelist_size(void* self) {
    return QDomNodeList_Size((QDomNodeList*)self);
}

bool q_domnodelist_is_empty(void* self) {
    return QDomNodeList_IsEmpty((QDomNodeList*)self);
}

void q_domnodelist_delete(void* self) {
    QDomNodeList_Delete((QDomNodeList*)(self));
}

QDomDocumentType* q_domdocumenttype_new() {
    return QDomDocumentType_new();
}

QDomDocumentType* q_domdocumenttype_new2(void* documentType) {
    return QDomDocumentType_new2((QDomDocumentType*)documentType);
}

void q_domdocumenttype_operator_assign(void* self, void* other) {
    QDomDocumentType_OperatorAssign((QDomDocumentType*)self, (QDomDocumentType*)other);
}

const char* q_domdocumenttype_name(void* self) {
    libqt_string _str = QDomDocumentType_Name((QDomDocumentType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomNamedNodeMap* q_domdocumenttype_entities(void* self) {
    return QDomDocumentType_Entities((QDomDocumentType*)self);
}

QDomNamedNodeMap* q_domdocumenttype_notations(void* self) {
    return QDomDocumentType_Notations((QDomDocumentType*)self);
}

const char* q_domdocumenttype_public_id(void* self) {
    libqt_string _str = QDomDocumentType_PublicId((QDomDocumentType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domdocumenttype_system_id(void* self) {
    libqt_string _str = QDomDocumentType_SystemId((QDomDocumentType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domdocumenttype_internal_subset(void* self) {
    libqt_string _str = QDomDocumentType_InternalSubset((QDomDocumentType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_domdocumenttype_node_type(void* self) {
    return QDomDocumentType_NodeType((QDomDocumentType*)self);
}

bool q_domdocumenttype_operator_equal(void* self, void* other) {
    return QDomNode_OperatorEqual((QDomNode*)self, (QDomNode*)other);
}

bool q_domdocumenttype_operator_not_equal(void* self, void* other) {
    return QDomNode_OperatorNotEqual((QDomNode*)self, (QDomNode*)other);
}

QDomNode* q_domdocumenttype_insert_before(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertBefore((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domdocumenttype_insert_after(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertAfter((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domdocumenttype_replace_child(void* self, void* newChild, void* oldChild) {
    return QDomNode_ReplaceChild((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)oldChild);
}

QDomNode* q_domdocumenttype_remove_child(void* self, void* oldChild) {
    return QDomNode_RemoveChild((QDomNode*)self, (QDomNode*)oldChild);
}

QDomNode* q_domdocumenttype_append_child(void* self, void* newChild) {
    return QDomNode_AppendChild((QDomNode*)self, (QDomNode*)newChild);
}

bool q_domdocumenttype_has_child_nodes(void* self) {
    return QDomNode_HasChildNodes((QDomNode*)self);
}

QDomNode* q_domdocumenttype_clone_node(void* self) {
    return QDomNode_CloneNode((QDomNode*)self);
}

void q_domdocumenttype_normalize(void* self) {
    QDomNode_Normalize((QDomNode*)self);
}

bool q_domdocumenttype_is_supported(void* self, const char* feature, const char* version) {
    return QDomNode_IsSupported((QDomNode*)self, qstring(feature), qstring(version));
}

const char* q_domdocumenttype_node_name(void* self) {
    libqt_string _str = QDomNode_NodeName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomNode* q_domdocumenttype_parent_node(void* self) {
    return QDomNode_ParentNode((QDomNode*)self);
}

QDomNodeList* q_domdocumenttype_child_nodes(void* self) {
    return QDomNode_ChildNodes((QDomNode*)self);
}

QDomNode* q_domdocumenttype_first_child(void* self) {
    return QDomNode_FirstChild((QDomNode*)self);
}

QDomNode* q_domdocumenttype_last_child(void* self) {
    return QDomNode_LastChild((QDomNode*)self);
}

QDomNode* q_domdocumenttype_previous_sibling(void* self) {
    return QDomNode_PreviousSibling((QDomNode*)self);
}

QDomNode* q_domdocumenttype_next_sibling(void* self) {
    return QDomNode_NextSibling((QDomNode*)self);
}

QDomNamedNodeMap* q_domdocumenttype_attributes(void* self) {
    return QDomNode_Attributes((QDomNode*)self);
}

QDomDocument* q_domdocumenttype_owner_document(void* self) {
    return QDomNode_OwnerDocument((QDomNode*)self);
}

const char* q_domdocumenttype_namespace_u_r_i(void* self) {
    libqt_string _str = QDomNode_NamespaceURI((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domdocumenttype_local_name(void* self) {
    libqt_string _str = QDomNode_LocalName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domdocumenttype_has_attributes(void* self) {
    return QDomNode_HasAttributes((QDomNode*)self);
}

const char* q_domdocumenttype_node_value(void* self) {
    libqt_string _str = QDomNode_NodeValue((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domdocumenttype_set_node_value(void* self, const char* value) {
    QDomNode_SetNodeValue((QDomNode*)self, qstring(value));
}

const char* q_domdocumenttype_prefix(void* self) {
    libqt_string _str = QDomNode_Prefix((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domdocumenttype_set_prefix(void* self, const char* pre) {
    QDomNode_SetPrefix((QDomNode*)self, qstring(pre));
}

bool q_domdocumenttype_is_attr(void* self) {
    return QDomNode_IsAttr((QDomNode*)self);
}

bool q_domdocumenttype_is_c_d_a_t_a_section(void* self) {
    return QDomNode_IsCDATASection((QDomNode*)self);
}

bool q_domdocumenttype_is_document_fragment(void* self) {
    return QDomNode_IsDocumentFragment((QDomNode*)self);
}

bool q_domdocumenttype_is_document(void* self) {
    return QDomNode_IsDocument((QDomNode*)self);
}

bool q_domdocumenttype_is_document_type(void* self) {
    return QDomNode_IsDocumentType((QDomNode*)self);
}

bool q_domdocumenttype_is_element(void* self) {
    return QDomNode_IsElement((QDomNode*)self);
}

bool q_domdocumenttype_is_entity_reference(void* self) {
    return QDomNode_IsEntityReference((QDomNode*)self);
}

bool q_domdocumenttype_is_text(void* self) {
    return QDomNode_IsText((QDomNode*)self);
}

bool q_domdocumenttype_is_entity(void* self) {
    return QDomNode_IsEntity((QDomNode*)self);
}

bool q_domdocumenttype_is_notation(void* self) {
    return QDomNode_IsNotation((QDomNode*)self);
}

bool q_domdocumenttype_is_processing_instruction(void* self) {
    return QDomNode_IsProcessingInstruction((QDomNode*)self);
}

bool q_domdocumenttype_is_character_data(void* self) {
    return QDomNode_IsCharacterData((QDomNode*)self);
}

bool q_domdocumenttype_is_comment(void* self) {
    return QDomNode_IsComment((QDomNode*)self);
}

QDomNode* q_domdocumenttype_named_item(void* self, const char* name) {
    return QDomNode_NamedItem((QDomNode*)self, qstring(name));
}

bool q_domdocumenttype_is_null(void* self) {
    return QDomNode_IsNull((QDomNode*)self);
}

void q_domdocumenttype_clear(void* self) {
    QDomNode_Clear((QDomNode*)self);
}

QDomAttr* q_domdocumenttype_to_attr(void* self) {
    return QDomNode_ToAttr((QDomNode*)self);
}

QDomCDATASection* q_domdocumenttype_to_c_d_a_t_a_section(void* self) {
    return QDomNode_ToCDATASection((QDomNode*)self);
}

QDomDocumentFragment* q_domdocumenttype_to_document_fragment(void* self) {
    return QDomNode_ToDocumentFragment((QDomNode*)self);
}

QDomDocument* q_domdocumenttype_to_document(void* self) {
    return QDomNode_ToDocument((QDomNode*)self);
}

QDomDocumentType* q_domdocumenttype_to_document_type(void* self) {
    return QDomNode_ToDocumentType((QDomNode*)self);
}

QDomElement* q_domdocumenttype_to_element(void* self) {
    return QDomNode_ToElement((QDomNode*)self);
}

QDomEntityReference* q_domdocumenttype_to_entity_reference(void* self) {
    return QDomNode_ToEntityReference((QDomNode*)self);
}

QDomText* q_domdocumenttype_to_text(void* self) {
    return QDomNode_ToText((QDomNode*)self);
}

QDomEntity* q_domdocumenttype_to_entity(void* self) {
    return QDomNode_ToEntity((QDomNode*)self);
}

QDomNotation* q_domdocumenttype_to_notation(void* self) {
    return QDomNode_ToNotation((QDomNode*)self);
}

QDomProcessingInstruction* q_domdocumenttype_to_processing_instruction(void* self) {
    return QDomNode_ToProcessingInstruction((QDomNode*)self);
}

QDomCharacterData* q_domdocumenttype_to_character_data(void* self) {
    return QDomNode_ToCharacterData((QDomNode*)self);
}

QDomComment* q_domdocumenttype_to_comment(void* self) {
    return QDomNode_ToComment((QDomNode*)self);
}

void q_domdocumenttype_save(void* self, void* param1, int param2) {
    QDomNode_Save((QDomNode*)self, (QTextStream*)param1, param2);
}

QDomElement* q_domdocumenttype_first_child_element(void* self) {
    return QDomNode_FirstChildElement((QDomNode*)self);
}

QDomElement* q_domdocumenttype_last_child_element(void* self) {
    return QDomNode_LastChildElement((QDomNode*)self);
}

QDomElement* q_domdocumenttype_previous_sibling_element(void* self) {
    return QDomNode_PreviousSiblingElement((QDomNode*)self);
}

QDomElement* q_domdocumenttype_next_sibling_element(void* self) {
    return QDomNode_NextSiblingElement((QDomNode*)self);
}

int32_t q_domdocumenttype_line_number(void* self) {
    return QDomNode_LineNumber((QDomNode*)self);
}

int32_t q_domdocumenttype_column_number(void* self) {
    return QDomNode_ColumnNumber((QDomNode*)self);
}

QDomNode* q_domdocumenttype_clone_node1(void* self, bool deep) {
    return QDomNode_CloneNode1((QDomNode*)self, deep);
}

void q_domdocumenttype_save3(void* self, void* param1, int param2, int32_t param3) {
    QDomNode_Save3((QDomNode*)self, (QTextStream*)param1, param2, param3);
}

QDomElement* q_domdocumenttype_first_child_element1(void* self, const char* tagName) {
    return QDomNode_FirstChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domdocumenttype_first_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_FirstChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domdocumenttype_last_child_element1(void* self, const char* tagName) {
    return QDomNode_LastChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domdocumenttype_last_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_LastChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domdocumenttype_previous_sibling_element1(void* self, const char* tagName) {
    return QDomNode_PreviousSiblingElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domdocumenttype_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_PreviousSiblingElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domdocumenttype_next_sibling_element1(void* self, const char* taName) {
    return QDomNode_NextSiblingElement1((QDomNode*)self, qstring(taName));
}

QDomElement* q_domdocumenttype_next_sibling_element2(void* self, const char* taName, const char* namespaceURI) {
    return QDomNode_NextSiblingElement2((QDomNode*)self, qstring(taName), qstring(namespaceURI));
}

void q_domdocumenttype_delete(void* self) {
    QDomDocumentType_Delete((QDomDocumentType*)(self));
}

QDomDocument* q_domdocument_new() {
    return QDomDocument_new();
}

QDomDocument* q_domdocument_new2(const char* name) {
    return QDomDocument_new2(qstring(name));
}

QDomDocument* q_domdocument_new3(void* doctype) {
    return QDomDocument_new3((QDomDocumentType*)doctype);
}

QDomDocument* q_domdocument_new4(void* document) {
    return QDomDocument_new4((QDomDocument*)document);
}

void q_domdocument_operator_assign(void* self, void* other) {
    QDomDocument_OperatorAssign((QDomDocument*)self, (QDomDocument*)other);
}

QDomElement* q_domdocument_create_element(void* self, const char* tagName) {
    return QDomDocument_CreateElement((QDomDocument*)self, qstring(tagName));
}

QDomDocumentFragment* q_domdocument_create_document_fragment(void* self) {
    return QDomDocument_CreateDocumentFragment((QDomDocument*)self);
}

QDomText* q_domdocument_create_text_node(void* self, const char* data) {
    return QDomDocument_CreateTextNode((QDomDocument*)self, qstring(data));
}

QDomComment* q_domdocument_create_comment(void* self, const char* data) {
    return QDomDocument_CreateComment((QDomDocument*)self, qstring(data));
}

QDomCDATASection* q_domdocument_create_c_d_a_t_a_section(void* self, const char* data) {
    return QDomDocument_CreateCDATASection((QDomDocument*)self, qstring(data));
}

QDomProcessingInstruction* q_domdocument_create_processing_instruction(void* self, const char* target, const char* data) {
    return QDomDocument_CreateProcessingInstruction((QDomDocument*)self, qstring(target), qstring(data));
}

QDomAttr* q_domdocument_create_attribute(void* self, const char* name) {
    return QDomDocument_CreateAttribute((QDomDocument*)self, qstring(name));
}

QDomEntityReference* q_domdocument_create_entity_reference(void* self, const char* name) {
    return QDomDocument_CreateEntityReference((QDomDocument*)self, qstring(name));
}

QDomNodeList* q_domdocument_elements_by_tag_name(void* self, const char* tagname) {
    return QDomDocument_ElementsByTagName((QDomDocument*)self, qstring(tagname));
}

QDomNode* q_domdocument_import_node(void* self, void* importedNode, bool deep) {
    return QDomDocument_ImportNode((QDomDocument*)self, (QDomNode*)importedNode, deep);
}

QDomElement* q_domdocument_create_element_n_s(void* self, const char* nsURI, const char* qName) {
    return QDomDocument_CreateElementNS((QDomDocument*)self, qstring(nsURI), qstring(qName));
}

QDomAttr* q_domdocument_create_attribute_n_s(void* self, const char* nsURI, const char* qName) {
    return QDomDocument_CreateAttributeNS((QDomDocument*)self, qstring(nsURI), qstring(qName));
}

QDomNodeList* q_domdocument_elements_by_tag_name_n_s(void* self, const char* nsURI, const char* localName) {
    return QDomDocument_ElementsByTagNameNS((QDomDocument*)self, qstring(nsURI), qstring(localName));
}

QDomElement* q_domdocument_element_by_id(void* self, const char* elementId) {
    return QDomDocument_ElementById((QDomDocument*)self, qstring(elementId));
}

QDomDocumentType* q_domdocument_doctype(void* self) {
    return QDomDocument_Doctype((QDomDocument*)self);
}

QDomImplementation* q_domdocument_implementation(void* self) {
    return QDomDocument_Implementation((QDomDocument*)self);
}

QDomElement* q_domdocument_document_element(void* self) {
    return QDomDocument_DocumentElement((QDomDocument*)self);
}

int32_t q_domdocument_node_type(void* self) {
    return QDomDocument_NodeType((QDomDocument*)self);
}

bool q_domdocument_set_content(void* self, const char* text, bool namespaceProcessing) {
    return QDomDocument_SetContent((QDomDocument*)self, qstring(text), namespaceProcessing);
}

bool q_domdocument_set_content2(void* self, const char* text, bool namespaceProcessing) {
    return QDomDocument_SetContent2((QDomDocument*)self, qstring(text), namespaceProcessing);
}

bool q_domdocument_set_content3(void* self, void* dev, bool namespaceProcessing) {
    return QDomDocument_SetContent3((QDomDocument*)self, (QIODevice*)dev, namespaceProcessing);
}

bool q_domdocument_set_content7(void* self, void* reader, bool namespaceProcessing) {
    return QDomDocument_SetContent7((QDomDocument*)self, (QXmlStreamReader*)reader, namespaceProcessing);
}

QDomDocument__ParseResult* q_domdocument_set_content8(void* self, char* data) {
    return QDomDocument_SetContent8((QDomDocument*)self, data);
}

QDomDocument__ParseResult* q_domdocument_set_content9(void* self, void* device) {
    return QDomDocument_SetContent9((QDomDocument*)self, (QIODevice*)device);
}

QDomDocument__ParseResult* q_domdocument_set_content10(void* self, void* reader) {
    return QDomDocument_SetContent10((QDomDocument*)self, (QXmlStreamReader*)reader);
}

const char* q_domdocument_to_string(void* self) {
    libqt_string _str = QDomDocument_ToString((QDomDocument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_domdocument_to_byte_array(void* self) {
    libqt_string _str = QDomDocument_ToByteArray((QDomDocument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomDocument__ParseResult* q_domdocument_set_content22(void* self, char* data, int32_t options) {
    return QDomDocument_SetContent22((QDomDocument*)self, data, options);
}

QDomDocument__ParseResult* q_domdocument_set_content23(void* self, void* device, int32_t options) {
    return QDomDocument_SetContent23((QDomDocument*)self, (QIODevice*)device, options);
}

QDomDocument__ParseResult* q_domdocument_set_content24(void* self, void* reader, int32_t options) {
    return QDomDocument_SetContent24((QDomDocument*)self, (QXmlStreamReader*)reader, options);
}

const char* q_domdocument_to_string1(void* self, int indent) {
    libqt_string _str = QDomDocument_ToString1((QDomDocument*)self, indent);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_domdocument_to_byte_array1(void* self, int indent) {
    libqt_string _str = QDomDocument_ToByteArray1((QDomDocument*)self, indent);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domdocument_operator_equal(void* self, void* other) {
    return QDomNode_OperatorEqual((QDomNode*)self, (QDomNode*)other);
}

bool q_domdocument_operator_not_equal(void* self, void* other) {
    return QDomNode_OperatorNotEqual((QDomNode*)self, (QDomNode*)other);
}

QDomNode* q_domdocument_insert_before(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertBefore((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domdocument_insert_after(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertAfter((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domdocument_replace_child(void* self, void* newChild, void* oldChild) {
    return QDomNode_ReplaceChild((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)oldChild);
}

QDomNode* q_domdocument_remove_child(void* self, void* oldChild) {
    return QDomNode_RemoveChild((QDomNode*)self, (QDomNode*)oldChild);
}

QDomNode* q_domdocument_append_child(void* self, void* newChild) {
    return QDomNode_AppendChild((QDomNode*)self, (QDomNode*)newChild);
}

bool q_domdocument_has_child_nodes(void* self) {
    return QDomNode_HasChildNodes((QDomNode*)self);
}

QDomNode* q_domdocument_clone_node(void* self) {
    return QDomNode_CloneNode((QDomNode*)self);
}

void q_domdocument_normalize(void* self) {
    QDomNode_Normalize((QDomNode*)self);
}

bool q_domdocument_is_supported(void* self, const char* feature, const char* version) {
    return QDomNode_IsSupported((QDomNode*)self, qstring(feature), qstring(version));
}

const char* q_domdocument_node_name(void* self) {
    libqt_string _str = QDomNode_NodeName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomNode* q_domdocument_parent_node(void* self) {
    return QDomNode_ParentNode((QDomNode*)self);
}

QDomNodeList* q_domdocument_child_nodes(void* self) {
    return QDomNode_ChildNodes((QDomNode*)self);
}

QDomNode* q_domdocument_first_child(void* self) {
    return QDomNode_FirstChild((QDomNode*)self);
}

QDomNode* q_domdocument_last_child(void* self) {
    return QDomNode_LastChild((QDomNode*)self);
}

QDomNode* q_domdocument_previous_sibling(void* self) {
    return QDomNode_PreviousSibling((QDomNode*)self);
}

QDomNode* q_domdocument_next_sibling(void* self) {
    return QDomNode_NextSibling((QDomNode*)self);
}

QDomNamedNodeMap* q_domdocument_attributes(void* self) {
    return QDomNode_Attributes((QDomNode*)self);
}

QDomDocument* q_domdocument_owner_document(void* self) {
    return QDomNode_OwnerDocument((QDomNode*)self);
}

const char* q_domdocument_namespace_u_r_i(void* self) {
    libqt_string _str = QDomNode_NamespaceURI((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domdocument_local_name(void* self) {
    libqt_string _str = QDomNode_LocalName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domdocument_has_attributes(void* self) {
    return QDomNode_HasAttributes((QDomNode*)self);
}

const char* q_domdocument_node_value(void* self) {
    libqt_string _str = QDomNode_NodeValue((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domdocument_set_node_value(void* self, const char* value) {
    QDomNode_SetNodeValue((QDomNode*)self, qstring(value));
}

const char* q_domdocument_prefix(void* self) {
    libqt_string _str = QDomNode_Prefix((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domdocument_set_prefix(void* self, const char* pre) {
    QDomNode_SetPrefix((QDomNode*)self, qstring(pre));
}

bool q_domdocument_is_attr(void* self) {
    return QDomNode_IsAttr((QDomNode*)self);
}

bool q_domdocument_is_c_d_a_t_a_section(void* self) {
    return QDomNode_IsCDATASection((QDomNode*)self);
}

bool q_domdocument_is_document_fragment(void* self) {
    return QDomNode_IsDocumentFragment((QDomNode*)self);
}

bool q_domdocument_is_document(void* self) {
    return QDomNode_IsDocument((QDomNode*)self);
}

bool q_domdocument_is_document_type(void* self) {
    return QDomNode_IsDocumentType((QDomNode*)self);
}

bool q_domdocument_is_element(void* self) {
    return QDomNode_IsElement((QDomNode*)self);
}

bool q_domdocument_is_entity_reference(void* self) {
    return QDomNode_IsEntityReference((QDomNode*)self);
}

bool q_domdocument_is_text(void* self) {
    return QDomNode_IsText((QDomNode*)self);
}

bool q_domdocument_is_entity(void* self) {
    return QDomNode_IsEntity((QDomNode*)self);
}

bool q_domdocument_is_notation(void* self) {
    return QDomNode_IsNotation((QDomNode*)self);
}

bool q_domdocument_is_processing_instruction(void* self) {
    return QDomNode_IsProcessingInstruction((QDomNode*)self);
}

bool q_domdocument_is_character_data(void* self) {
    return QDomNode_IsCharacterData((QDomNode*)self);
}

bool q_domdocument_is_comment(void* self) {
    return QDomNode_IsComment((QDomNode*)self);
}

QDomNode* q_domdocument_named_item(void* self, const char* name) {
    return QDomNode_NamedItem((QDomNode*)self, qstring(name));
}

bool q_domdocument_is_null(void* self) {
    return QDomNode_IsNull((QDomNode*)self);
}

void q_domdocument_clear(void* self) {
    QDomNode_Clear((QDomNode*)self);
}

QDomAttr* q_domdocument_to_attr(void* self) {
    return QDomNode_ToAttr((QDomNode*)self);
}

QDomCDATASection* q_domdocument_to_c_d_a_t_a_section(void* self) {
    return QDomNode_ToCDATASection((QDomNode*)self);
}

QDomDocumentFragment* q_domdocument_to_document_fragment(void* self) {
    return QDomNode_ToDocumentFragment((QDomNode*)self);
}

QDomDocument* q_domdocument_to_document(void* self) {
    return QDomNode_ToDocument((QDomNode*)self);
}

QDomDocumentType* q_domdocument_to_document_type(void* self) {
    return QDomNode_ToDocumentType((QDomNode*)self);
}

QDomElement* q_domdocument_to_element(void* self) {
    return QDomNode_ToElement((QDomNode*)self);
}

QDomEntityReference* q_domdocument_to_entity_reference(void* self) {
    return QDomNode_ToEntityReference((QDomNode*)self);
}

QDomText* q_domdocument_to_text(void* self) {
    return QDomNode_ToText((QDomNode*)self);
}

QDomEntity* q_domdocument_to_entity(void* self) {
    return QDomNode_ToEntity((QDomNode*)self);
}

QDomNotation* q_domdocument_to_notation(void* self) {
    return QDomNode_ToNotation((QDomNode*)self);
}

QDomProcessingInstruction* q_domdocument_to_processing_instruction(void* self) {
    return QDomNode_ToProcessingInstruction((QDomNode*)self);
}

QDomCharacterData* q_domdocument_to_character_data(void* self) {
    return QDomNode_ToCharacterData((QDomNode*)self);
}

QDomComment* q_domdocument_to_comment(void* self) {
    return QDomNode_ToComment((QDomNode*)self);
}

void q_domdocument_save(void* self, void* param1, int param2) {
    QDomNode_Save((QDomNode*)self, (QTextStream*)param1, param2);
}

QDomElement* q_domdocument_first_child_element(void* self) {
    return QDomNode_FirstChildElement((QDomNode*)self);
}

QDomElement* q_domdocument_last_child_element(void* self) {
    return QDomNode_LastChildElement((QDomNode*)self);
}

QDomElement* q_domdocument_previous_sibling_element(void* self) {
    return QDomNode_PreviousSiblingElement((QDomNode*)self);
}

QDomElement* q_domdocument_next_sibling_element(void* self) {
    return QDomNode_NextSiblingElement((QDomNode*)self);
}

int32_t q_domdocument_line_number(void* self) {
    return QDomNode_LineNumber((QDomNode*)self);
}

int32_t q_domdocument_column_number(void* self) {
    return QDomNode_ColumnNumber((QDomNode*)self);
}

QDomNode* q_domdocument_clone_node1(void* self, bool deep) {
    return QDomNode_CloneNode1((QDomNode*)self, deep);
}

void q_domdocument_save3(void* self, void* param1, int param2, int32_t param3) {
    QDomNode_Save3((QDomNode*)self, (QTextStream*)param1, param2, param3);
}

QDomElement* q_domdocument_first_child_element1(void* self, const char* tagName) {
    return QDomNode_FirstChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domdocument_first_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_FirstChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domdocument_last_child_element1(void* self, const char* tagName) {
    return QDomNode_LastChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domdocument_last_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_LastChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domdocument_previous_sibling_element1(void* self, const char* tagName) {
    return QDomNode_PreviousSiblingElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domdocument_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_PreviousSiblingElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domdocument_next_sibling_element1(void* self, const char* taName) {
    return QDomNode_NextSiblingElement1((QDomNode*)self, qstring(taName));
}

QDomElement* q_domdocument_next_sibling_element2(void* self, const char* taName, const char* namespaceURI) {
    return QDomNode_NextSiblingElement2((QDomNode*)self, qstring(taName), qstring(namespaceURI));
}

void q_domdocument_delete(void* self) {
    QDomDocument_Delete((QDomDocument*)(self));
}

QDomNamedNodeMap* q_domnamednodemap_new() {
    return QDomNamedNodeMap_new();
}

QDomNamedNodeMap* q_domnamednodemap_new2(void* namedNodeMap) {
    return QDomNamedNodeMap_new2((QDomNamedNodeMap*)namedNodeMap);
}

void q_domnamednodemap_operator_assign(void* self, void* other) {
    QDomNamedNodeMap_OperatorAssign((QDomNamedNodeMap*)self, (QDomNamedNodeMap*)other);
}

bool q_domnamednodemap_operator_equal(void* self, void* other) {
    return QDomNamedNodeMap_OperatorEqual((QDomNamedNodeMap*)self, (QDomNamedNodeMap*)other);
}

bool q_domnamednodemap_operator_not_equal(void* self, void* other) {
    return QDomNamedNodeMap_OperatorNotEqual((QDomNamedNodeMap*)self, (QDomNamedNodeMap*)other);
}

QDomNode* q_domnamednodemap_named_item(void* self, const char* name) {
    return QDomNamedNodeMap_NamedItem((QDomNamedNodeMap*)self, qstring(name));
}

QDomNode* q_domnamednodemap_set_named_item(void* self, void* newNode) {
    return QDomNamedNodeMap_SetNamedItem((QDomNamedNodeMap*)self, (QDomNode*)newNode);
}

QDomNode* q_domnamednodemap_remove_named_item(void* self, const char* name) {
    return QDomNamedNodeMap_RemoveNamedItem((QDomNamedNodeMap*)self, qstring(name));
}

QDomNode* q_domnamednodemap_item(void* self, int index) {
    return QDomNamedNodeMap_Item((QDomNamedNodeMap*)self, index);
}

QDomNode* q_domnamednodemap_named_item_n_s(void* self, const char* nsURI, const char* localName) {
    return QDomNamedNodeMap_NamedItemNS((QDomNamedNodeMap*)self, qstring(nsURI), qstring(localName));
}

QDomNode* q_domnamednodemap_set_named_item_n_s(void* self, void* newNode) {
    return QDomNamedNodeMap_SetNamedItemNS((QDomNamedNodeMap*)self, (QDomNode*)newNode);
}

QDomNode* q_domnamednodemap_remove_named_item_n_s(void* self, const char* nsURI, const char* localName) {
    return QDomNamedNodeMap_RemoveNamedItemNS((QDomNamedNodeMap*)self, qstring(nsURI), qstring(localName));
}

int32_t q_domnamednodemap_length(void* self) {
    return QDomNamedNodeMap_Length((QDomNamedNodeMap*)self);
}

int32_t q_domnamednodemap_count(void* self) {
    return QDomNamedNodeMap_Count((QDomNamedNodeMap*)self);
}

int32_t q_domnamednodemap_size(void* self) {
    return QDomNamedNodeMap_Size((QDomNamedNodeMap*)self);
}

bool q_domnamednodemap_is_empty(void* self) {
    return QDomNamedNodeMap_IsEmpty((QDomNamedNodeMap*)self);
}

bool q_domnamednodemap_contains(void* self, const char* name) {
    return QDomNamedNodeMap_Contains((QDomNamedNodeMap*)self, qstring(name));
}

void q_domnamednodemap_delete(void* self) {
    QDomNamedNodeMap_Delete((QDomNamedNodeMap*)(self));
}

QDomDocumentFragment* q_domdocumentfragment_new() {
    return QDomDocumentFragment_new();
}

QDomDocumentFragment* q_domdocumentfragment_new2(void* documentFragment) {
    return QDomDocumentFragment_new2((QDomDocumentFragment*)documentFragment);
}

void q_domdocumentfragment_operator_assign(void* self, void* other) {
    QDomDocumentFragment_OperatorAssign((QDomDocumentFragment*)self, (QDomDocumentFragment*)other);
}

int32_t q_domdocumentfragment_node_type(void* self) {
    return QDomDocumentFragment_NodeType((QDomDocumentFragment*)self);
}

bool q_domdocumentfragment_operator_equal(void* self, void* other) {
    return QDomNode_OperatorEqual((QDomNode*)self, (QDomNode*)other);
}

bool q_domdocumentfragment_operator_not_equal(void* self, void* other) {
    return QDomNode_OperatorNotEqual((QDomNode*)self, (QDomNode*)other);
}

QDomNode* q_domdocumentfragment_insert_before(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertBefore((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domdocumentfragment_insert_after(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertAfter((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domdocumentfragment_replace_child(void* self, void* newChild, void* oldChild) {
    return QDomNode_ReplaceChild((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)oldChild);
}

QDomNode* q_domdocumentfragment_remove_child(void* self, void* oldChild) {
    return QDomNode_RemoveChild((QDomNode*)self, (QDomNode*)oldChild);
}

QDomNode* q_domdocumentfragment_append_child(void* self, void* newChild) {
    return QDomNode_AppendChild((QDomNode*)self, (QDomNode*)newChild);
}

bool q_domdocumentfragment_has_child_nodes(void* self) {
    return QDomNode_HasChildNodes((QDomNode*)self);
}

QDomNode* q_domdocumentfragment_clone_node(void* self) {
    return QDomNode_CloneNode((QDomNode*)self);
}

void q_domdocumentfragment_normalize(void* self) {
    QDomNode_Normalize((QDomNode*)self);
}

bool q_domdocumentfragment_is_supported(void* self, const char* feature, const char* version) {
    return QDomNode_IsSupported((QDomNode*)self, qstring(feature), qstring(version));
}

const char* q_domdocumentfragment_node_name(void* self) {
    libqt_string _str = QDomNode_NodeName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomNode* q_domdocumentfragment_parent_node(void* self) {
    return QDomNode_ParentNode((QDomNode*)self);
}

QDomNodeList* q_domdocumentfragment_child_nodes(void* self) {
    return QDomNode_ChildNodes((QDomNode*)self);
}

QDomNode* q_domdocumentfragment_first_child(void* self) {
    return QDomNode_FirstChild((QDomNode*)self);
}

QDomNode* q_domdocumentfragment_last_child(void* self) {
    return QDomNode_LastChild((QDomNode*)self);
}

QDomNode* q_domdocumentfragment_previous_sibling(void* self) {
    return QDomNode_PreviousSibling((QDomNode*)self);
}

QDomNode* q_domdocumentfragment_next_sibling(void* self) {
    return QDomNode_NextSibling((QDomNode*)self);
}

QDomNamedNodeMap* q_domdocumentfragment_attributes(void* self) {
    return QDomNode_Attributes((QDomNode*)self);
}

QDomDocument* q_domdocumentfragment_owner_document(void* self) {
    return QDomNode_OwnerDocument((QDomNode*)self);
}

const char* q_domdocumentfragment_namespace_u_r_i(void* self) {
    libqt_string _str = QDomNode_NamespaceURI((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domdocumentfragment_local_name(void* self) {
    libqt_string _str = QDomNode_LocalName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domdocumentfragment_has_attributes(void* self) {
    return QDomNode_HasAttributes((QDomNode*)self);
}

const char* q_domdocumentfragment_node_value(void* self) {
    libqt_string _str = QDomNode_NodeValue((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domdocumentfragment_set_node_value(void* self, const char* value) {
    QDomNode_SetNodeValue((QDomNode*)self, qstring(value));
}

const char* q_domdocumentfragment_prefix(void* self) {
    libqt_string _str = QDomNode_Prefix((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domdocumentfragment_set_prefix(void* self, const char* pre) {
    QDomNode_SetPrefix((QDomNode*)self, qstring(pre));
}

bool q_domdocumentfragment_is_attr(void* self) {
    return QDomNode_IsAttr((QDomNode*)self);
}

bool q_domdocumentfragment_is_c_d_a_t_a_section(void* self) {
    return QDomNode_IsCDATASection((QDomNode*)self);
}

bool q_domdocumentfragment_is_document_fragment(void* self) {
    return QDomNode_IsDocumentFragment((QDomNode*)self);
}

bool q_domdocumentfragment_is_document(void* self) {
    return QDomNode_IsDocument((QDomNode*)self);
}

bool q_domdocumentfragment_is_document_type(void* self) {
    return QDomNode_IsDocumentType((QDomNode*)self);
}

bool q_domdocumentfragment_is_element(void* self) {
    return QDomNode_IsElement((QDomNode*)self);
}

bool q_domdocumentfragment_is_entity_reference(void* self) {
    return QDomNode_IsEntityReference((QDomNode*)self);
}

bool q_domdocumentfragment_is_text(void* self) {
    return QDomNode_IsText((QDomNode*)self);
}

bool q_domdocumentfragment_is_entity(void* self) {
    return QDomNode_IsEntity((QDomNode*)self);
}

bool q_domdocumentfragment_is_notation(void* self) {
    return QDomNode_IsNotation((QDomNode*)self);
}

bool q_domdocumentfragment_is_processing_instruction(void* self) {
    return QDomNode_IsProcessingInstruction((QDomNode*)self);
}

bool q_domdocumentfragment_is_character_data(void* self) {
    return QDomNode_IsCharacterData((QDomNode*)self);
}

bool q_domdocumentfragment_is_comment(void* self) {
    return QDomNode_IsComment((QDomNode*)self);
}

QDomNode* q_domdocumentfragment_named_item(void* self, const char* name) {
    return QDomNode_NamedItem((QDomNode*)self, qstring(name));
}

bool q_domdocumentfragment_is_null(void* self) {
    return QDomNode_IsNull((QDomNode*)self);
}

void q_domdocumentfragment_clear(void* self) {
    QDomNode_Clear((QDomNode*)self);
}

QDomAttr* q_domdocumentfragment_to_attr(void* self) {
    return QDomNode_ToAttr((QDomNode*)self);
}

QDomCDATASection* q_domdocumentfragment_to_c_d_a_t_a_section(void* self) {
    return QDomNode_ToCDATASection((QDomNode*)self);
}

QDomDocumentFragment* q_domdocumentfragment_to_document_fragment(void* self) {
    return QDomNode_ToDocumentFragment((QDomNode*)self);
}

QDomDocument* q_domdocumentfragment_to_document(void* self) {
    return QDomNode_ToDocument((QDomNode*)self);
}

QDomDocumentType* q_domdocumentfragment_to_document_type(void* self) {
    return QDomNode_ToDocumentType((QDomNode*)self);
}

QDomElement* q_domdocumentfragment_to_element(void* self) {
    return QDomNode_ToElement((QDomNode*)self);
}

QDomEntityReference* q_domdocumentfragment_to_entity_reference(void* self) {
    return QDomNode_ToEntityReference((QDomNode*)self);
}

QDomText* q_domdocumentfragment_to_text(void* self) {
    return QDomNode_ToText((QDomNode*)self);
}

QDomEntity* q_domdocumentfragment_to_entity(void* self) {
    return QDomNode_ToEntity((QDomNode*)self);
}

QDomNotation* q_domdocumentfragment_to_notation(void* self) {
    return QDomNode_ToNotation((QDomNode*)self);
}

QDomProcessingInstruction* q_domdocumentfragment_to_processing_instruction(void* self) {
    return QDomNode_ToProcessingInstruction((QDomNode*)self);
}

QDomCharacterData* q_domdocumentfragment_to_character_data(void* self) {
    return QDomNode_ToCharacterData((QDomNode*)self);
}

QDomComment* q_domdocumentfragment_to_comment(void* self) {
    return QDomNode_ToComment((QDomNode*)self);
}

void q_domdocumentfragment_save(void* self, void* param1, int param2) {
    QDomNode_Save((QDomNode*)self, (QTextStream*)param1, param2);
}

QDomElement* q_domdocumentfragment_first_child_element(void* self) {
    return QDomNode_FirstChildElement((QDomNode*)self);
}

QDomElement* q_domdocumentfragment_last_child_element(void* self) {
    return QDomNode_LastChildElement((QDomNode*)self);
}

QDomElement* q_domdocumentfragment_previous_sibling_element(void* self) {
    return QDomNode_PreviousSiblingElement((QDomNode*)self);
}

QDomElement* q_domdocumentfragment_next_sibling_element(void* self) {
    return QDomNode_NextSiblingElement((QDomNode*)self);
}

int32_t q_domdocumentfragment_line_number(void* self) {
    return QDomNode_LineNumber((QDomNode*)self);
}

int32_t q_domdocumentfragment_column_number(void* self) {
    return QDomNode_ColumnNumber((QDomNode*)self);
}

QDomNode* q_domdocumentfragment_clone_node1(void* self, bool deep) {
    return QDomNode_CloneNode1((QDomNode*)self, deep);
}

void q_domdocumentfragment_save3(void* self, void* param1, int param2, int32_t param3) {
    QDomNode_Save3((QDomNode*)self, (QTextStream*)param1, param2, param3);
}

QDomElement* q_domdocumentfragment_first_child_element1(void* self, const char* tagName) {
    return QDomNode_FirstChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domdocumentfragment_first_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_FirstChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domdocumentfragment_last_child_element1(void* self, const char* tagName) {
    return QDomNode_LastChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domdocumentfragment_last_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_LastChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domdocumentfragment_previous_sibling_element1(void* self, const char* tagName) {
    return QDomNode_PreviousSiblingElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domdocumentfragment_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_PreviousSiblingElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domdocumentfragment_next_sibling_element1(void* self, const char* taName) {
    return QDomNode_NextSiblingElement1((QDomNode*)self, qstring(taName));
}

QDomElement* q_domdocumentfragment_next_sibling_element2(void* self, const char* taName, const char* namespaceURI) {
    return QDomNode_NextSiblingElement2((QDomNode*)self, qstring(taName), qstring(namespaceURI));
}

void q_domdocumentfragment_delete(void* self) {
    QDomDocumentFragment_Delete((QDomDocumentFragment*)(self));
}

QDomCharacterData* q_domcharacterdata_new() {
    return QDomCharacterData_new();
}

QDomCharacterData* q_domcharacterdata_new2(void* characterData) {
    return QDomCharacterData_new2((QDomCharacterData*)characterData);
}

void q_domcharacterdata_operator_assign(void* self, void* other) {
    QDomCharacterData_OperatorAssign((QDomCharacterData*)self, (QDomCharacterData*)other);
}

const char* q_domcharacterdata_substring_data(void* self, uint64_t offset, uint64_t count) {
    libqt_string _str = QDomCharacterData_SubstringData((QDomCharacterData*)self, offset, count);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domcharacterdata_append_data(void* self, const char* arg) {
    QDomCharacterData_AppendData((QDomCharacterData*)self, qstring(arg));
}

void q_domcharacterdata_insert_data(void* self, uint64_t offset, const char* arg) {
    QDomCharacterData_InsertData((QDomCharacterData*)self, offset, qstring(arg));
}

void q_domcharacterdata_delete_data(void* self, uint64_t offset, uint64_t count) {
    QDomCharacterData_DeleteData((QDomCharacterData*)self, offset, count);
}

void q_domcharacterdata_replace_data(void* self, uint64_t offset, uint64_t count, const char* arg) {
    QDomCharacterData_ReplaceData((QDomCharacterData*)self, offset, count, qstring(arg));
}

int32_t q_domcharacterdata_length(void* self) {
    return QDomCharacterData_Length((QDomCharacterData*)self);
}

const char* q_domcharacterdata_data(void* self) {
    libqt_string _str = QDomCharacterData_Data((QDomCharacterData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domcharacterdata_set_data(void* self, const char* data) {
    QDomCharacterData_SetData((QDomCharacterData*)self, qstring(data));
}

int32_t q_domcharacterdata_node_type(void* self) {
    return QDomCharacterData_NodeType((QDomCharacterData*)self);
}

bool q_domcharacterdata_operator_equal(void* self, void* other) {
    return QDomNode_OperatorEqual((QDomNode*)self, (QDomNode*)other);
}

bool q_domcharacterdata_operator_not_equal(void* self, void* other) {
    return QDomNode_OperatorNotEqual((QDomNode*)self, (QDomNode*)other);
}

QDomNode* q_domcharacterdata_insert_before(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertBefore((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domcharacterdata_insert_after(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertAfter((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domcharacterdata_replace_child(void* self, void* newChild, void* oldChild) {
    return QDomNode_ReplaceChild((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)oldChild);
}

QDomNode* q_domcharacterdata_remove_child(void* self, void* oldChild) {
    return QDomNode_RemoveChild((QDomNode*)self, (QDomNode*)oldChild);
}

QDomNode* q_domcharacterdata_append_child(void* self, void* newChild) {
    return QDomNode_AppendChild((QDomNode*)self, (QDomNode*)newChild);
}

bool q_domcharacterdata_has_child_nodes(void* self) {
    return QDomNode_HasChildNodes((QDomNode*)self);
}

QDomNode* q_domcharacterdata_clone_node(void* self) {
    return QDomNode_CloneNode((QDomNode*)self);
}

void q_domcharacterdata_normalize(void* self) {
    QDomNode_Normalize((QDomNode*)self);
}

bool q_domcharacterdata_is_supported(void* self, const char* feature, const char* version) {
    return QDomNode_IsSupported((QDomNode*)self, qstring(feature), qstring(version));
}

const char* q_domcharacterdata_node_name(void* self) {
    libqt_string _str = QDomNode_NodeName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomNode* q_domcharacterdata_parent_node(void* self) {
    return QDomNode_ParentNode((QDomNode*)self);
}

QDomNodeList* q_domcharacterdata_child_nodes(void* self) {
    return QDomNode_ChildNodes((QDomNode*)self);
}

QDomNode* q_domcharacterdata_first_child(void* self) {
    return QDomNode_FirstChild((QDomNode*)self);
}

QDomNode* q_domcharacterdata_last_child(void* self) {
    return QDomNode_LastChild((QDomNode*)self);
}

QDomNode* q_domcharacterdata_previous_sibling(void* self) {
    return QDomNode_PreviousSibling((QDomNode*)self);
}

QDomNode* q_domcharacterdata_next_sibling(void* self) {
    return QDomNode_NextSibling((QDomNode*)self);
}

QDomNamedNodeMap* q_domcharacterdata_attributes(void* self) {
    return QDomNode_Attributes((QDomNode*)self);
}

QDomDocument* q_domcharacterdata_owner_document(void* self) {
    return QDomNode_OwnerDocument((QDomNode*)self);
}

const char* q_domcharacterdata_namespace_u_r_i(void* self) {
    libqt_string _str = QDomNode_NamespaceURI((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domcharacterdata_local_name(void* self) {
    libqt_string _str = QDomNode_LocalName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domcharacterdata_has_attributes(void* self) {
    return QDomNode_HasAttributes((QDomNode*)self);
}

const char* q_domcharacterdata_node_value(void* self) {
    libqt_string _str = QDomNode_NodeValue((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domcharacterdata_set_node_value(void* self, const char* value) {
    QDomNode_SetNodeValue((QDomNode*)self, qstring(value));
}

const char* q_domcharacterdata_prefix(void* self) {
    libqt_string _str = QDomNode_Prefix((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domcharacterdata_set_prefix(void* self, const char* pre) {
    QDomNode_SetPrefix((QDomNode*)self, qstring(pre));
}

bool q_domcharacterdata_is_attr(void* self) {
    return QDomNode_IsAttr((QDomNode*)self);
}

bool q_domcharacterdata_is_c_d_a_t_a_section(void* self) {
    return QDomNode_IsCDATASection((QDomNode*)self);
}

bool q_domcharacterdata_is_document_fragment(void* self) {
    return QDomNode_IsDocumentFragment((QDomNode*)self);
}

bool q_domcharacterdata_is_document(void* self) {
    return QDomNode_IsDocument((QDomNode*)self);
}

bool q_domcharacterdata_is_document_type(void* self) {
    return QDomNode_IsDocumentType((QDomNode*)self);
}

bool q_domcharacterdata_is_element(void* self) {
    return QDomNode_IsElement((QDomNode*)self);
}

bool q_domcharacterdata_is_entity_reference(void* self) {
    return QDomNode_IsEntityReference((QDomNode*)self);
}

bool q_domcharacterdata_is_text(void* self) {
    return QDomNode_IsText((QDomNode*)self);
}

bool q_domcharacterdata_is_entity(void* self) {
    return QDomNode_IsEntity((QDomNode*)self);
}

bool q_domcharacterdata_is_notation(void* self) {
    return QDomNode_IsNotation((QDomNode*)self);
}

bool q_domcharacterdata_is_processing_instruction(void* self) {
    return QDomNode_IsProcessingInstruction((QDomNode*)self);
}

bool q_domcharacterdata_is_character_data(void* self) {
    return QDomNode_IsCharacterData((QDomNode*)self);
}

bool q_domcharacterdata_is_comment(void* self) {
    return QDomNode_IsComment((QDomNode*)self);
}

QDomNode* q_domcharacterdata_named_item(void* self, const char* name) {
    return QDomNode_NamedItem((QDomNode*)self, qstring(name));
}

bool q_domcharacterdata_is_null(void* self) {
    return QDomNode_IsNull((QDomNode*)self);
}

void q_domcharacterdata_clear(void* self) {
    QDomNode_Clear((QDomNode*)self);
}

QDomAttr* q_domcharacterdata_to_attr(void* self) {
    return QDomNode_ToAttr((QDomNode*)self);
}

QDomCDATASection* q_domcharacterdata_to_c_d_a_t_a_section(void* self) {
    return QDomNode_ToCDATASection((QDomNode*)self);
}

QDomDocumentFragment* q_domcharacterdata_to_document_fragment(void* self) {
    return QDomNode_ToDocumentFragment((QDomNode*)self);
}

QDomDocument* q_domcharacterdata_to_document(void* self) {
    return QDomNode_ToDocument((QDomNode*)self);
}

QDomDocumentType* q_domcharacterdata_to_document_type(void* self) {
    return QDomNode_ToDocumentType((QDomNode*)self);
}

QDomElement* q_domcharacterdata_to_element(void* self) {
    return QDomNode_ToElement((QDomNode*)self);
}

QDomEntityReference* q_domcharacterdata_to_entity_reference(void* self) {
    return QDomNode_ToEntityReference((QDomNode*)self);
}

QDomText* q_domcharacterdata_to_text(void* self) {
    return QDomNode_ToText((QDomNode*)self);
}

QDomEntity* q_domcharacterdata_to_entity(void* self) {
    return QDomNode_ToEntity((QDomNode*)self);
}

QDomNotation* q_domcharacterdata_to_notation(void* self) {
    return QDomNode_ToNotation((QDomNode*)self);
}

QDomProcessingInstruction* q_domcharacterdata_to_processing_instruction(void* self) {
    return QDomNode_ToProcessingInstruction((QDomNode*)self);
}

QDomCharacterData* q_domcharacterdata_to_character_data(void* self) {
    return QDomNode_ToCharacterData((QDomNode*)self);
}

QDomComment* q_domcharacterdata_to_comment(void* self) {
    return QDomNode_ToComment((QDomNode*)self);
}

void q_domcharacterdata_save(void* self, void* param1, int param2) {
    QDomNode_Save((QDomNode*)self, (QTextStream*)param1, param2);
}

QDomElement* q_domcharacterdata_first_child_element(void* self) {
    return QDomNode_FirstChildElement((QDomNode*)self);
}

QDomElement* q_domcharacterdata_last_child_element(void* self) {
    return QDomNode_LastChildElement((QDomNode*)self);
}

QDomElement* q_domcharacterdata_previous_sibling_element(void* self) {
    return QDomNode_PreviousSiblingElement((QDomNode*)self);
}

QDomElement* q_domcharacterdata_next_sibling_element(void* self) {
    return QDomNode_NextSiblingElement((QDomNode*)self);
}

int32_t q_domcharacterdata_line_number(void* self) {
    return QDomNode_LineNumber((QDomNode*)self);
}

int32_t q_domcharacterdata_column_number(void* self) {
    return QDomNode_ColumnNumber((QDomNode*)self);
}

QDomNode* q_domcharacterdata_clone_node1(void* self, bool deep) {
    return QDomNode_CloneNode1((QDomNode*)self, deep);
}

void q_domcharacterdata_save3(void* self, void* param1, int param2, int32_t param3) {
    QDomNode_Save3((QDomNode*)self, (QTextStream*)param1, param2, param3);
}

QDomElement* q_domcharacterdata_first_child_element1(void* self, const char* tagName) {
    return QDomNode_FirstChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domcharacterdata_first_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_FirstChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domcharacterdata_last_child_element1(void* self, const char* tagName) {
    return QDomNode_LastChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domcharacterdata_last_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_LastChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domcharacterdata_previous_sibling_element1(void* self, const char* tagName) {
    return QDomNode_PreviousSiblingElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domcharacterdata_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_PreviousSiblingElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domcharacterdata_next_sibling_element1(void* self, const char* taName) {
    return QDomNode_NextSiblingElement1((QDomNode*)self, qstring(taName));
}

QDomElement* q_domcharacterdata_next_sibling_element2(void* self, const char* taName, const char* namespaceURI) {
    return QDomNode_NextSiblingElement2((QDomNode*)self, qstring(taName), qstring(namespaceURI));
}

void q_domcharacterdata_delete(void* self) {
    QDomCharacterData_Delete((QDomCharacterData*)(self));
}

QDomAttr* q_domattr_new() {
    return QDomAttr_new();
}

QDomAttr* q_domattr_new2(void* attr) {
    return QDomAttr_new2((QDomAttr*)attr);
}

void q_domattr_operator_assign(void* self, void* other) {
    QDomAttr_OperatorAssign((QDomAttr*)self, (QDomAttr*)other);
}

const char* q_domattr_name(void* self) {
    libqt_string _str = QDomAttr_Name((QDomAttr*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domattr_specified(void* self) {
    return QDomAttr_Specified((QDomAttr*)self);
}

QDomElement* q_domattr_owner_element(void* self) {
    return QDomAttr_OwnerElement((QDomAttr*)self);
}

const char* q_domattr_value(void* self) {
    libqt_string _str = QDomAttr_Value((QDomAttr*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domattr_set_value(void* self, const char* value) {
    QDomAttr_SetValue((QDomAttr*)self, qstring(value));
}

int32_t q_domattr_node_type(void* self) {
    return QDomAttr_NodeType((QDomAttr*)self);
}

bool q_domattr_operator_equal(void* self, void* other) {
    return QDomNode_OperatorEqual((QDomNode*)self, (QDomNode*)other);
}

bool q_domattr_operator_not_equal(void* self, void* other) {
    return QDomNode_OperatorNotEqual((QDomNode*)self, (QDomNode*)other);
}

QDomNode* q_domattr_insert_before(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertBefore((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domattr_insert_after(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertAfter((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domattr_replace_child(void* self, void* newChild, void* oldChild) {
    return QDomNode_ReplaceChild((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)oldChild);
}

QDomNode* q_domattr_remove_child(void* self, void* oldChild) {
    return QDomNode_RemoveChild((QDomNode*)self, (QDomNode*)oldChild);
}

QDomNode* q_domattr_append_child(void* self, void* newChild) {
    return QDomNode_AppendChild((QDomNode*)self, (QDomNode*)newChild);
}

bool q_domattr_has_child_nodes(void* self) {
    return QDomNode_HasChildNodes((QDomNode*)self);
}

QDomNode* q_domattr_clone_node(void* self) {
    return QDomNode_CloneNode((QDomNode*)self);
}

void q_domattr_normalize(void* self) {
    QDomNode_Normalize((QDomNode*)self);
}

bool q_domattr_is_supported(void* self, const char* feature, const char* version) {
    return QDomNode_IsSupported((QDomNode*)self, qstring(feature), qstring(version));
}

const char* q_domattr_node_name(void* self) {
    libqt_string _str = QDomNode_NodeName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomNode* q_domattr_parent_node(void* self) {
    return QDomNode_ParentNode((QDomNode*)self);
}

QDomNodeList* q_domattr_child_nodes(void* self) {
    return QDomNode_ChildNodes((QDomNode*)self);
}

QDomNode* q_domattr_first_child(void* self) {
    return QDomNode_FirstChild((QDomNode*)self);
}

QDomNode* q_domattr_last_child(void* self) {
    return QDomNode_LastChild((QDomNode*)self);
}

QDomNode* q_domattr_previous_sibling(void* self) {
    return QDomNode_PreviousSibling((QDomNode*)self);
}

QDomNode* q_domattr_next_sibling(void* self) {
    return QDomNode_NextSibling((QDomNode*)self);
}

QDomNamedNodeMap* q_domattr_attributes(void* self) {
    return QDomNode_Attributes((QDomNode*)self);
}

QDomDocument* q_domattr_owner_document(void* self) {
    return QDomNode_OwnerDocument((QDomNode*)self);
}

const char* q_domattr_namespace_u_r_i(void* self) {
    libqt_string _str = QDomNode_NamespaceURI((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domattr_local_name(void* self) {
    libqt_string _str = QDomNode_LocalName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domattr_has_attributes(void* self) {
    return QDomNode_HasAttributes((QDomNode*)self);
}

const char* q_domattr_node_value(void* self) {
    libqt_string _str = QDomNode_NodeValue((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domattr_set_node_value(void* self, const char* value) {
    QDomNode_SetNodeValue((QDomNode*)self, qstring(value));
}

const char* q_domattr_prefix(void* self) {
    libqt_string _str = QDomNode_Prefix((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domattr_set_prefix(void* self, const char* pre) {
    QDomNode_SetPrefix((QDomNode*)self, qstring(pre));
}

bool q_domattr_is_attr(void* self) {
    return QDomNode_IsAttr((QDomNode*)self);
}

bool q_domattr_is_c_d_a_t_a_section(void* self) {
    return QDomNode_IsCDATASection((QDomNode*)self);
}

bool q_domattr_is_document_fragment(void* self) {
    return QDomNode_IsDocumentFragment((QDomNode*)self);
}

bool q_domattr_is_document(void* self) {
    return QDomNode_IsDocument((QDomNode*)self);
}

bool q_domattr_is_document_type(void* self) {
    return QDomNode_IsDocumentType((QDomNode*)self);
}

bool q_domattr_is_element(void* self) {
    return QDomNode_IsElement((QDomNode*)self);
}

bool q_domattr_is_entity_reference(void* self) {
    return QDomNode_IsEntityReference((QDomNode*)self);
}

bool q_domattr_is_text(void* self) {
    return QDomNode_IsText((QDomNode*)self);
}

bool q_domattr_is_entity(void* self) {
    return QDomNode_IsEntity((QDomNode*)self);
}

bool q_domattr_is_notation(void* self) {
    return QDomNode_IsNotation((QDomNode*)self);
}

bool q_domattr_is_processing_instruction(void* self) {
    return QDomNode_IsProcessingInstruction((QDomNode*)self);
}

bool q_domattr_is_character_data(void* self) {
    return QDomNode_IsCharacterData((QDomNode*)self);
}

bool q_domattr_is_comment(void* self) {
    return QDomNode_IsComment((QDomNode*)self);
}

QDomNode* q_domattr_named_item(void* self, const char* name) {
    return QDomNode_NamedItem((QDomNode*)self, qstring(name));
}

bool q_domattr_is_null(void* self) {
    return QDomNode_IsNull((QDomNode*)self);
}

void q_domattr_clear(void* self) {
    QDomNode_Clear((QDomNode*)self);
}

QDomAttr* q_domattr_to_attr(void* self) {
    return QDomNode_ToAttr((QDomNode*)self);
}

QDomCDATASection* q_domattr_to_c_d_a_t_a_section(void* self) {
    return QDomNode_ToCDATASection((QDomNode*)self);
}

QDomDocumentFragment* q_domattr_to_document_fragment(void* self) {
    return QDomNode_ToDocumentFragment((QDomNode*)self);
}

QDomDocument* q_domattr_to_document(void* self) {
    return QDomNode_ToDocument((QDomNode*)self);
}

QDomDocumentType* q_domattr_to_document_type(void* self) {
    return QDomNode_ToDocumentType((QDomNode*)self);
}

QDomElement* q_domattr_to_element(void* self) {
    return QDomNode_ToElement((QDomNode*)self);
}

QDomEntityReference* q_domattr_to_entity_reference(void* self) {
    return QDomNode_ToEntityReference((QDomNode*)self);
}

QDomText* q_domattr_to_text(void* self) {
    return QDomNode_ToText((QDomNode*)self);
}

QDomEntity* q_domattr_to_entity(void* self) {
    return QDomNode_ToEntity((QDomNode*)self);
}

QDomNotation* q_domattr_to_notation(void* self) {
    return QDomNode_ToNotation((QDomNode*)self);
}

QDomProcessingInstruction* q_domattr_to_processing_instruction(void* self) {
    return QDomNode_ToProcessingInstruction((QDomNode*)self);
}

QDomCharacterData* q_domattr_to_character_data(void* self) {
    return QDomNode_ToCharacterData((QDomNode*)self);
}

QDomComment* q_domattr_to_comment(void* self) {
    return QDomNode_ToComment((QDomNode*)self);
}

void q_domattr_save(void* self, void* param1, int param2) {
    QDomNode_Save((QDomNode*)self, (QTextStream*)param1, param2);
}

QDomElement* q_domattr_first_child_element(void* self) {
    return QDomNode_FirstChildElement((QDomNode*)self);
}

QDomElement* q_domattr_last_child_element(void* self) {
    return QDomNode_LastChildElement((QDomNode*)self);
}

QDomElement* q_domattr_previous_sibling_element(void* self) {
    return QDomNode_PreviousSiblingElement((QDomNode*)self);
}

QDomElement* q_domattr_next_sibling_element(void* self) {
    return QDomNode_NextSiblingElement((QDomNode*)self);
}

int32_t q_domattr_line_number(void* self) {
    return QDomNode_LineNumber((QDomNode*)self);
}

int32_t q_domattr_column_number(void* self) {
    return QDomNode_ColumnNumber((QDomNode*)self);
}

QDomNode* q_domattr_clone_node1(void* self, bool deep) {
    return QDomNode_CloneNode1((QDomNode*)self, deep);
}

void q_domattr_save3(void* self, void* param1, int param2, int32_t param3) {
    QDomNode_Save3((QDomNode*)self, (QTextStream*)param1, param2, param3);
}

QDomElement* q_domattr_first_child_element1(void* self, const char* tagName) {
    return QDomNode_FirstChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domattr_first_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_FirstChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domattr_last_child_element1(void* self, const char* tagName) {
    return QDomNode_LastChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domattr_last_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_LastChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domattr_previous_sibling_element1(void* self, const char* tagName) {
    return QDomNode_PreviousSiblingElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domattr_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_PreviousSiblingElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domattr_next_sibling_element1(void* self, const char* taName) {
    return QDomNode_NextSiblingElement1((QDomNode*)self, qstring(taName));
}

QDomElement* q_domattr_next_sibling_element2(void* self, const char* taName, const char* namespaceURI) {
    return QDomNode_NextSiblingElement2((QDomNode*)self, qstring(taName), qstring(namespaceURI));
}

void q_domattr_delete(void* self) {
    QDomAttr_Delete((QDomAttr*)(self));
}

QDomElement* q_domelement_new() {
    return QDomElement_new();
}

QDomElement* q_domelement_new2(void* element) {
    return QDomElement_new2((QDomElement*)element);
}

void q_domelement_operator_assign(void* self, void* other) {
    QDomElement_OperatorAssign((QDomElement*)self, (QDomElement*)other);
}

const char* q_domelement_attribute(void* self, const char* name) {
    libqt_string _str = QDomElement_Attribute((QDomElement*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domelement_set_attribute(void* self, const char* name, const char* value) {
    QDomElement_SetAttribute((QDomElement*)self, qstring(name), qstring(value));
}

void q_domelement_set_attribute2(void* self, const char* name, long long value) {
    QDomElement_SetAttribute2((QDomElement*)self, qstring(name), value);
}

void q_domelement_set_attribute3(void* self, const char* name, uint64_t value) {
    QDomElement_SetAttribute3((QDomElement*)self, qstring(name), value);
}

void q_domelement_set_attribute4(void* self, const char* name, int value) {
    QDomElement_SetAttribute4((QDomElement*)self, qstring(name), value);
}

void q_domelement_set_attribute5(void* self, const char* name, uint32_t value) {
    QDomElement_SetAttribute5((QDomElement*)self, qstring(name), value);
}

void q_domelement_set_attribute6(void* self, const char* name, float value) {
    QDomElement_SetAttribute6((QDomElement*)self, qstring(name), value);
}

void q_domelement_set_attribute7(void* self, const char* name, double value) {
    QDomElement_SetAttribute7((QDomElement*)self, qstring(name), value);
}

void q_domelement_remove_attribute(void* self, const char* name) {
    QDomElement_RemoveAttribute((QDomElement*)self, qstring(name));
}

QDomAttr* q_domelement_attribute_node(void* self, const char* name) {
    return QDomElement_AttributeNode((QDomElement*)self, qstring(name));
}

QDomAttr* q_domelement_set_attribute_node(void* self, void* newAttr) {
    return QDomElement_SetAttributeNode((QDomElement*)self, (QDomAttr*)newAttr);
}

QDomAttr* q_domelement_remove_attribute_node(void* self, void* oldAttr) {
    return QDomElement_RemoveAttributeNode((QDomElement*)self, (QDomAttr*)oldAttr);
}

QDomNodeList* q_domelement_elements_by_tag_name(void* self, const char* tagname) {
    return QDomElement_ElementsByTagName((QDomElement*)self, qstring(tagname));
}

bool q_domelement_has_attribute(void* self, const char* name) {
    return QDomElement_HasAttribute((QDomElement*)self, qstring(name));
}

const char* q_domelement_attribute_n_s(void* self, const char* nsURI, const char* localName) {
    libqt_string _str = QDomElement_AttributeNS((QDomElement*)self, qstring(nsURI), qstring(localName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domelement_set_attribute_n_s(void* self, const char* nsURI, const char* qName, const char* value) {
    QDomElement_SetAttributeNS((QDomElement*)self, qstring(nsURI), qstring(qName), qstring(value));
}

void q_domelement_set_attribute_n_s2(void* self, const char* nsURI, const char* qName, int value) {
    QDomElement_SetAttributeNS2((QDomElement*)self, qstring(nsURI), qstring(qName), value);
}

void q_domelement_set_attribute_n_s3(void* self, const char* nsURI, const char* qName, uint32_t value) {
    QDomElement_SetAttributeNS3((QDomElement*)self, qstring(nsURI), qstring(qName), value);
}

void q_domelement_set_attribute_n_s4(void* self, const char* nsURI, const char* qName, long long value) {
    QDomElement_SetAttributeNS4((QDomElement*)self, qstring(nsURI), qstring(qName), value);
}

void q_domelement_set_attribute_n_s5(void* self, const char* nsURI, const char* qName, uint64_t value) {
    QDomElement_SetAttributeNS5((QDomElement*)self, qstring(nsURI), qstring(qName), value);
}

void q_domelement_set_attribute_n_s6(void* self, const char* nsURI, const char* qName, double value) {
    QDomElement_SetAttributeNS6((QDomElement*)self, qstring(nsURI), qstring(qName), value);
}

void q_domelement_remove_attribute_n_s(void* self, const char* nsURI, const char* localName) {
    QDomElement_RemoveAttributeNS((QDomElement*)self, qstring(nsURI), qstring(localName));
}

QDomAttr* q_domelement_attribute_node_n_s(void* self, const char* nsURI, const char* localName) {
    return QDomElement_AttributeNodeNS((QDomElement*)self, qstring(nsURI), qstring(localName));
}

QDomAttr* q_domelement_set_attribute_node_n_s(void* self, void* newAttr) {
    return QDomElement_SetAttributeNodeNS((QDomElement*)self, (QDomAttr*)newAttr);
}

QDomNodeList* q_domelement_elements_by_tag_name_n_s(void* self, const char* nsURI, const char* localName) {
    return QDomElement_ElementsByTagNameNS((QDomElement*)self, qstring(nsURI), qstring(localName));
}

bool q_domelement_has_attribute_n_s(void* self, const char* nsURI, const char* localName) {
    return QDomElement_HasAttributeNS((QDomElement*)self, qstring(nsURI), qstring(localName));
}

const char* q_domelement_tag_name(void* self) {
    libqt_string _str = QDomElement_TagName((QDomElement*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domelement_set_tag_name(void* self, const char* name) {
    QDomElement_SetTagName((QDomElement*)self, qstring(name));
}

QDomNamedNodeMap* q_domelement_attributes(void* self) {
    return QDomElement_Attributes((QDomElement*)self);
}

int32_t q_domelement_node_type(void* self) {
    return QDomElement_NodeType((QDomElement*)self);
}

const char* q_domelement_text(void* self) {
    libqt_string _str = QDomElement_Text((QDomElement*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domelement_attribute2(void* self, const char* name, const char* defValue) {
    libqt_string _str = QDomElement_Attribute2((QDomElement*)self, qstring(name), qstring(defValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domelement_attribute_n_s3(void* self, const char* nsURI, const char* localName, const char* defValue) {
    libqt_string _str = QDomElement_AttributeNS3((QDomElement*)self, qstring(nsURI), qstring(localName), qstring(defValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domelement_operator_equal(void* self, void* other) {
    return QDomNode_OperatorEqual((QDomNode*)self, (QDomNode*)other);
}

bool q_domelement_operator_not_equal(void* self, void* other) {
    return QDomNode_OperatorNotEqual((QDomNode*)self, (QDomNode*)other);
}

QDomNode* q_domelement_insert_before(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertBefore((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domelement_insert_after(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertAfter((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domelement_replace_child(void* self, void* newChild, void* oldChild) {
    return QDomNode_ReplaceChild((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)oldChild);
}

QDomNode* q_domelement_remove_child(void* self, void* oldChild) {
    return QDomNode_RemoveChild((QDomNode*)self, (QDomNode*)oldChild);
}

QDomNode* q_domelement_append_child(void* self, void* newChild) {
    return QDomNode_AppendChild((QDomNode*)self, (QDomNode*)newChild);
}

bool q_domelement_has_child_nodes(void* self) {
    return QDomNode_HasChildNodes((QDomNode*)self);
}

QDomNode* q_domelement_clone_node(void* self) {
    return QDomNode_CloneNode((QDomNode*)self);
}

void q_domelement_normalize(void* self) {
    QDomNode_Normalize((QDomNode*)self);
}

bool q_domelement_is_supported(void* self, const char* feature, const char* version) {
    return QDomNode_IsSupported((QDomNode*)self, qstring(feature), qstring(version));
}

const char* q_domelement_node_name(void* self) {
    libqt_string _str = QDomNode_NodeName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomNode* q_domelement_parent_node(void* self) {
    return QDomNode_ParentNode((QDomNode*)self);
}

QDomNodeList* q_domelement_child_nodes(void* self) {
    return QDomNode_ChildNodes((QDomNode*)self);
}

QDomNode* q_domelement_first_child(void* self) {
    return QDomNode_FirstChild((QDomNode*)self);
}

QDomNode* q_domelement_last_child(void* self) {
    return QDomNode_LastChild((QDomNode*)self);
}

QDomNode* q_domelement_previous_sibling(void* self) {
    return QDomNode_PreviousSibling((QDomNode*)self);
}

QDomNode* q_domelement_next_sibling(void* self) {
    return QDomNode_NextSibling((QDomNode*)self);
}

QDomDocument* q_domelement_owner_document(void* self) {
    return QDomNode_OwnerDocument((QDomNode*)self);
}

const char* q_domelement_namespace_u_r_i(void* self) {
    libqt_string _str = QDomNode_NamespaceURI((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domelement_local_name(void* self) {
    libqt_string _str = QDomNode_LocalName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domelement_has_attributes(void* self) {
    return QDomNode_HasAttributes((QDomNode*)self);
}

const char* q_domelement_node_value(void* self) {
    libqt_string _str = QDomNode_NodeValue((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domelement_set_node_value(void* self, const char* value) {
    QDomNode_SetNodeValue((QDomNode*)self, qstring(value));
}

const char* q_domelement_prefix(void* self) {
    libqt_string _str = QDomNode_Prefix((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domelement_set_prefix(void* self, const char* pre) {
    QDomNode_SetPrefix((QDomNode*)self, qstring(pre));
}

bool q_domelement_is_attr(void* self) {
    return QDomNode_IsAttr((QDomNode*)self);
}

bool q_domelement_is_c_d_a_t_a_section(void* self) {
    return QDomNode_IsCDATASection((QDomNode*)self);
}

bool q_domelement_is_document_fragment(void* self) {
    return QDomNode_IsDocumentFragment((QDomNode*)self);
}

bool q_domelement_is_document(void* self) {
    return QDomNode_IsDocument((QDomNode*)self);
}

bool q_domelement_is_document_type(void* self) {
    return QDomNode_IsDocumentType((QDomNode*)self);
}

bool q_domelement_is_element(void* self) {
    return QDomNode_IsElement((QDomNode*)self);
}

bool q_domelement_is_entity_reference(void* self) {
    return QDomNode_IsEntityReference((QDomNode*)self);
}

bool q_domelement_is_text(void* self) {
    return QDomNode_IsText((QDomNode*)self);
}

bool q_domelement_is_entity(void* self) {
    return QDomNode_IsEntity((QDomNode*)self);
}

bool q_domelement_is_notation(void* self) {
    return QDomNode_IsNotation((QDomNode*)self);
}

bool q_domelement_is_processing_instruction(void* self) {
    return QDomNode_IsProcessingInstruction((QDomNode*)self);
}

bool q_domelement_is_character_data(void* self) {
    return QDomNode_IsCharacterData((QDomNode*)self);
}

bool q_domelement_is_comment(void* self) {
    return QDomNode_IsComment((QDomNode*)self);
}

QDomNode* q_domelement_named_item(void* self, const char* name) {
    return QDomNode_NamedItem((QDomNode*)self, qstring(name));
}

bool q_domelement_is_null(void* self) {
    return QDomNode_IsNull((QDomNode*)self);
}

void q_domelement_clear(void* self) {
    QDomNode_Clear((QDomNode*)self);
}

QDomAttr* q_domelement_to_attr(void* self) {
    return QDomNode_ToAttr((QDomNode*)self);
}

QDomCDATASection* q_domelement_to_c_d_a_t_a_section(void* self) {
    return QDomNode_ToCDATASection((QDomNode*)self);
}

QDomDocumentFragment* q_domelement_to_document_fragment(void* self) {
    return QDomNode_ToDocumentFragment((QDomNode*)self);
}

QDomDocument* q_domelement_to_document(void* self) {
    return QDomNode_ToDocument((QDomNode*)self);
}

QDomDocumentType* q_domelement_to_document_type(void* self) {
    return QDomNode_ToDocumentType((QDomNode*)self);
}

QDomElement* q_domelement_to_element(void* self) {
    return QDomNode_ToElement((QDomNode*)self);
}

QDomEntityReference* q_domelement_to_entity_reference(void* self) {
    return QDomNode_ToEntityReference((QDomNode*)self);
}

QDomText* q_domelement_to_text(void* self) {
    return QDomNode_ToText((QDomNode*)self);
}

QDomEntity* q_domelement_to_entity(void* self) {
    return QDomNode_ToEntity((QDomNode*)self);
}

QDomNotation* q_domelement_to_notation(void* self) {
    return QDomNode_ToNotation((QDomNode*)self);
}

QDomProcessingInstruction* q_domelement_to_processing_instruction(void* self) {
    return QDomNode_ToProcessingInstruction((QDomNode*)self);
}

QDomCharacterData* q_domelement_to_character_data(void* self) {
    return QDomNode_ToCharacterData((QDomNode*)self);
}

QDomComment* q_domelement_to_comment(void* self) {
    return QDomNode_ToComment((QDomNode*)self);
}

void q_domelement_save(void* self, void* param1, int param2) {
    QDomNode_Save((QDomNode*)self, (QTextStream*)param1, param2);
}

QDomElement* q_domelement_first_child_element(void* self) {
    return QDomNode_FirstChildElement((QDomNode*)self);
}

QDomElement* q_domelement_last_child_element(void* self) {
    return QDomNode_LastChildElement((QDomNode*)self);
}

QDomElement* q_domelement_previous_sibling_element(void* self) {
    return QDomNode_PreviousSiblingElement((QDomNode*)self);
}

QDomElement* q_domelement_next_sibling_element(void* self) {
    return QDomNode_NextSiblingElement((QDomNode*)self);
}

int32_t q_domelement_line_number(void* self) {
    return QDomNode_LineNumber((QDomNode*)self);
}

int32_t q_domelement_column_number(void* self) {
    return QDomNode_ColumnNumber((QDomNode*)self);
}

QDomNode* q_domelement_clone_node1(void* self, bool deep) {
    return QDomNode_CloneNode1((QDomNode*)self, deep);
}

void q_domelement_save3(void* self, void* param1, int param2, int32_t param3) {
    QDomNode_Save3((QDomNode*)self, (QTextStream*)param1, param2, param3);
}

QDomElement* q_domelement_first_child_element1(void* self, const char* tagName) {
    return QDomNode_FirstChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domelement_first_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_FirstChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domelement_last_child_element1(void* self, const char* tagName) {
    return QDomNode_LastChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domelement_last_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_LastChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domelement_previous_sibling_element1(void* self, const char* tagName) {
    return QDomNode_PreviousSiblingElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domelement_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_PreviousSiblingElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domelement_next_sibling_element1(void* self, const char* taName) {
    return QDomNode_NextSiblingElement1((QDomNode*)self, qstring(taName));
}

QDomElement* q_domelement_next_sibling_element2(void* self, const char* taName, const char* namespaceURI) {
    return QDomNode_NextSiblingElement2((QDomNode*)self, qstring(taName), qstring(namespaceURI));
}

void q_domelement_delete(void* self) {
    QDomElement_Delete((QDomElement*)(self));
}

QDomText* q_domtext_new() {
    return QDomText_new();
}

QDomText* q_domtext_new2(void* text) {
    return QDomText_new2((QDomText*)text);
}

void q_domtext_operator_assign(void* self, void* other) {
    QDomText_OperatorAssign((QDomText*)self, (QDomText*)other);
}

QDomText* q_domtext_split_text(void* self, int offset) {
    return QDomText_SplitText((QDomText*)self, offset);
}

int32_t q_domtext_node_type(void* self) {
    return QDomText_NodeType((QDomText*)self);
}

const char* q_domtext_substring_data(void* self, uint64_t offset, uint64_t count) {
    libqt_string _str = QDomCharacterData_SubstringData((QDomCharacterData*)self, offset, count);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domtext_append_data(void* self, const char* arg) {
    QDomCharacterData_AppendData((QDomCharacterData*)self, qstring(arg));
}

void q_domtext_insert_data(void* self, uint64_t offset, const char* arg) {
    QDomCharacterData_InsertData((QDomCharacterData*)self, offset, qstring(arg));
}

void q_domtext_delete_data(void* self, uint64_t offset, uint64_t count) {
    QDomCharacterData_DeleteData((QDomCharacterData*)self, offset, count);
}

void q_domtext_replace_data(void* self, uint64_t offset, uint64_t count, const char* arg) {
    QDomCharacterData_ReplaceData((QDomCharacterData*)self, offset, count, qstring(arg));
}

int32_t q_domtext_length(void* self) {
    return QDomCharacterData_Length((QDomCharacterData*)self);
}

const char* q_domtext_data(void* self) {
    libqt_string _str = QDomCharacterData_Data((QDomCharacterData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domtext_set_data(void* self, const char* data) {
    QDomCharacterData_SetData((QDomCharacterData*)self, qstring(data));
}

bool q_domtext_operator_equal(void* self, void* other) {
    return QDomNode_OperatorEqual((QDomNode*)self, (QDomNode*)other);
}

bool q_domtext_operator_not_equal(void* self, void* other) {
    return QDomNode_OperatorNotEqual((QDomNode*)self, (QDomNode*)other);
}

QDomNode* q_domtext_insert_before(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertBefore((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domtext_insert_after(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertAfter((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domtext_replace_child(void* self, void* newChild, void* oldChild) {
    return QDomNode_ReplaceChild((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)oldChild);
}

QDomNode* q_domtext_remove_child(void* self, void* oldChild) {
    return QDomNode_RemoveChild((QDomNode*)self, (QDomNode*)oldChild);
}

QDomNode* q_domtext_append_child(void* self, void* newChild) {
    return QDomNode_AppendChild((QDomNode*)self, (QDomNode*)newChild);
}

bool q_domtext_has_child_nodes(void* self) {
    return QDomNode_HasChildNodes((QDomNode*)self);
}

QDomNode* q_domtext_clone_node(void* self) {
    return QDomNode_CloneNode((QDomNode*)self);
}

void q_domtext_normalize(void* self) {
    QDomNode_Normalize((QDomNode*)self);
}

bool q_domtext_is_supported(void* self, const char* feature, const char* version) {
    return QDomNode_IsSupported((QDomNode*)self, qstring(feature), qstring(version));
}

const char* q_domtext_node_name(void* self) {
    libqt_string _str = QDomNode_NodeName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomNode* q_domtext_parent_node(void* self) {
    return QDomNode_ParentNode((QDomNode*)self);
}

QDomNodeList* q_domtext_child_nodes(void* self) {
    return QDomNode_ChildNodes((QDomNode*)self);
}

QDomNode* q_domtext_first_child(void* self) {
    return QDomNode_FirstChild((QDomNode*)self);
}

QDomNode* q_domtext_last_child(void* self) {
    return QDomNode_LastChild((QDomNode*)self);
}

QDomNode* q_domtext_previous_sibling(void* self) {
    return QDomNode_PreviousSibling((QDomNode*)self);
}

QDomNode* q_domtext_next_sibling(void* self) {
    return QDomNode_NextSibling((QDomNode*)self);
}

QDomNamedNodeMap* q_domtext_attributes(void* self) {
    return QDomNode_Attributes((QDomNode*)self);
}

QDomDocument* q_domtext_owner_document(void* self) {
    return QDomNode_OwnerDocument((QDomNode*)self);
}

const char* q_domtext_namespace_u_r_i(void* self) {
    libqt_string _str = QDomNode_NamespaceURI((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domtext_local_name(void* self) {
    libqt_string _str = QDomNode_LocalName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domtext_has_attributes(void* self) {
    return QDomNode_HasAttributes((QDomNode*)self);
}

const char* q_domtext_node_value(void* self) {
    libqt_string _str = QDomNode_NodeValue((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domtext_set_node_value(void* self, const char* value) {
    QDomNode_SetNodeValue((QDomNode*)self, qstring(value));
}

const char* q_domtext_prefix(void* self) {
    libqt_string _str = QDomNode_Prefix((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domtext_set_prefix(void* self, const char* pre) {
    QDomNode_SetPrefix((QDomNode*)self, qstring(pre));
}

bool q_domtext_is_attr(void* self) {
    return QDomNode_IsAttr((QDomNode*)self);
}

bool q_domtext_is_c_d_a_t_a_section(void* self) {
    return QDomNode_IsCDATASection((QDomNode*)self);
}

bool q_domtext_is_document_fragment(void* self) {
    return QDomNode_IsDocumentFragment((QDomNode*)self);
}

bool q_domtext_is_document(void* self) {
    return QDomNode_IsDocument((QDomNode*)self);
}

bool q_domtext_is_document_type(void* self) {
    return QDomNode_IsDocumentType((QDomNode*)self);
}

bool q_domtext_is_element(void* self) {
    return QDomNode_IsElement((QDomNode*)self);
}

bool q_domtext_is_entity_reference(void* self) {
    return QDomNode_IsEntityReference((QDomNode*)self);
}

bool q_domtext_is_text(void* self) {
    return QDomNode_IsText((QDomNode*)self);
}

bool q_domtext_is_entity(void* self) {
    return QDomNode_IsEntity((QDomNode*)self);
}

bool q_domtext_is_notation(void* self) {
    return QDomNode_IsNotation((QDomNode*)self);
}

bool q_domtext_is_processing_instruction(void* self) {
    return QDomNode_IsProcessingInstruction((QDomNode*)self);
}

bool q_domtext_is_character_data(void* self) {
    return QDomNode_IsCharacterData((QDomNode*)self);
}

bool q_domtext_is_comment(void* self) {
    return QDomNode_IsComment((QDomNode*)self);
}

QDomNode* q_domtext_named_item(void* self, const char* name) {
    return QDomNode_NamedItem((QDomNode*)self, qstring(name));
}

bool q_domtext_is_null(void* self) {
    return QDomNode_IsNull((QDomNode*)self);
}

void q_domtext_clear(void* self) {
    QDomNode_Clear((QDomNode*)self);
}

QDomAttr* q_domtext_to_attr(void* self) {
    return QDomNode_ToAttr((QDomNode*)self);
}

QDomCDATASection* q_domtext_to_c_d_a_t_a_section(void* self) {
    return QDomNode_ToCDATASection((QDomNode*)self);
}

QDomDocumentFragment* q_domtext_to_document_fragment(void* self) {
    return QDomNode_ToDocumentFragment((QDomNode*)self);
}

QDomDocument* q_domtext_to_document(void* self) {
    return QDomNode_ToDocument((QDomNode*)self);
}

QDomDocumentType* q_domtext_to_document_type(void* self) {
    return QDomNode_ToDocumentType((QDomNode*)self);
}

QDomElement* q_domtext_to_element(void* self) {
    return QDomNode_ToElement((QDomNode*)self);
}

QDomEntityReference* q_domtext_to_entity_reference(void* self) {
    return QDomNode_ToEntityReference((QDomNode*)self);
}

QDomText* q_domtext_to_text(void* self) {
    return QDomNode_ToText((QDomNode*)self);
}

QDomEntity* q_domtext_to_entity(void* self) {
    return QDomNode_ToEntity((QDomNode*)self);
}

QDomNotation* q_domtext_to_notation(void* self) {
    return QDomNode_ToNotation((QDomNode*)self);
}

QDomProcessingInstruction* q_domtext_to_processing_instruction(void* self) {
    return QDomNode_ToProcessingInstruction((QDomNode*)self);
}

QDomCharacterData* q_domtext_to_character_data(void* self) {
    return QDomNode_ToCharacterData((QDomNode*)self);
}

QDomComment* q_domtext_to_comment(void* self) {
    return QDomNode_ToComment((QDomNode*)self);
}

void q_domtext_save(void* self, void* param1, int param2) {
    QDomNode_Save((QDomNode*)self, (QTextStream*)param1, param2);
}

QDomElement* q_domtext_first_child_element(void* self) {
    return QDomNode_FirstChildElement((QDomNode*)self);
}

QDomElement* q_domtext_last_child_element(void* self) {
    return QDomNode_LastChildElement((QDomNode*)self);
}

QDomElement* q_domtext_previous_sibling_element(void* self) {
    return QDomNode_PreviousSiblingElement((QDomNode*)self);
}

QDomElement* q_domtext_next_sibling_element(void* self) {
    return QDomNode_NextSiblingElement((QDomNode*)self);
}

int32_t q_domtext_line_number(void* self) {
    return QDomNode_LineNumber((QDomNode*)self);
}

int32_t q_domtext_column_number(void* self) {
    return QDomNode_ColumnNumber((QDomNode*)self);
}

QDomNode* q_domtext_clone_node1(void* self, bool deep) {
    return QDomNode_CloneNode1((QDomNode*)self, deep);
}

void q_domtext_save3(void* self, void* param1, int param2, int32_t param3) {
    QDomNode_Save3((QDomNode*)self, (QTextStream*)param1, param2, param3);
}

QDomElement* q_domtext_first_child_element1(void* self, const char* tagName) {
    return QDomNode_FirstChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domtext_first_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_FirstChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domtext_last_child_element1(void* self, const char* tagName) {
    return QDomNode_LastChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domtext_last_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_LastChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domtext_previous_sibling_element1(void* self, const char* tagName) {
    return QDomNode_PreviousSiblingElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domtext_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_PreviousSiblingElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domtext_next_sibling_element1(void* self, const char* taName) {
    return QDomNode_NextSiblingElement1((QDomNode*)self, qstring(taName));
}

QDomElement* q_domtext_next_sibling_element2(void* self, const char* taName, const char* namespaceURI) {
    return QDomNode_NextSiblingElement2((QDomNode*)self, qstring(taName), qstring(namespaceURI));
}

void q_domtext_delete(void* self) {
    QDomText_Delete((QDomText*)(self));
}

QDomComment* q_domcomment_new() {
    return QDomComment_new();
}

QDomComment* q_domcomment_new2(void* comment) {
    return QDomComment_new2((QDomComment*)comment);
}

void q_domcomment_operator_assign(void* self, void* other) {
    QDomComment_OperatorAssign((QDomComment*)self, (QDomComment*)other);
}

int32_t q_domcomment_node_type(void* self) {
    return QDomComment_NodeType((QDomComment*)self);
}

const char* q_domcomment_substring_data(void* self, uint64_t offset, uint64_t count) {
    libqt_string _str = QDomCharacterData_SubstringData((QDomCharacterData*)self, offset, count);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domcomment_append_data(void* self, const char* arg) {
    QDomCharacterData_AppendData((QDomCharacterData*)self, qstring(arg));
}

void q_domcomment_insert_data(void* self, uint64_t offset, const char* arg) {
    QDomCharacterData_InsertData((QDomCharacterData*)self, offset, qstring(arg));
}

void q_domcomment_delete_data(void* self, uint64_t offset, uint64_t count) {
    QDomCharacterData_DeleteData((QDomCharacterData*)self, offset, count);
}

void q_domcomment_replace_data(void* self, uint64_t offset, uint64_t count, const char* arg) {
    QDomCharacterData_ReplaceData((QDomCharacterData*)self, offset, count, qstring(arg));
}

int32_t q_domcomment_length(void* self) {
    return QDomCharacterData_Length((QDomCharacterData*)self);
}

const char* q_domcomment_data(void* self) {
    libqt_string _str = QDomCharacterData_Data((QDomCharacterData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domcomment_set_data(void* self, const char* data) {
    QDomCharacterData_SetData((QDomCharacterData*)self, qstring(data));
}

bool q_domcomment_operator_equal(void* self, void* other) {
    return QDomNode_OperatorEqual((QDomNode*)self, (QDomNode*)other);
}

bool q_domcomment_operator_not_equal(void* self, void* other) {
    return QDomNode_OperatorNotEqual((QDomNode*)self, (QDomNode*)other);
}

QDomNode* q_domcomment_insert_before(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertBefore((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domcomment_insert_after(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertAfter((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domcomment_replace_child(void* self, void* newChild, void* oldChild) {
    return QDomNode_ReplaceChild((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)oldChild);
}

QDomNode* q_domcomment_remove_child(void* self, void* oldChild) {
    return QDomNode_RemoveChild((QDomNode*)self, (QDomNode*)oldChild);
}

QDomNode* q_domcomment_append_child(void* self, void* newChild) {
    return QDomNode_AppendChild((QDomNode*)self, (QDomNode*)newChild);
}

bool q_domcomment_has_child_nodes(void* self) {
    return QDomNode_HasChildNodes((QDomNode*)self);
}

QDomNode* q_domcomment_clone_node(void* self) {
    return QDomNode_CloneNode((QDomNode*)self);
}

void q_domcomment_normalize(void* self) {
    QDomNode_Normalize((QDomNode*)self);
}

bool q_domcomment_is_supported(void* self, const char* feature, const char* version) {
    return QDomNode_IsSupported((QDomNode*)self, qstring(feature), qstring(version));
}

const char* q_domcomment_node_name(void* self) {
    libqt_string _str = QDomNode_NodeName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomNode* q_domcomment_parent_node(void* self) {
    return QDomNode_ParentNode((QDomNode*)self);
}

QDomNodeList* q_domcomment_child_nodes(void* self) {
    return QDomNode_ChildNodes((QDomNode*)self);
}

QDomNode* q_domcomment_first_child(void* self) {
    return QDomNode_FirstChild((QDomNode*)self);
}

QDomNode* q_domcomment_last_child(void* self) {
    return QDomNode_LastChild((QDomNode*)self);
}

QDomNode* q_domcomment_previous_sibling(void* self) {
    return QDomNode_PreviousSibling((QDomNode*)self);
}

QDomNode* q_domcomment_next_sibling(void* self) {
    return QDomNode_NextSibling((QDomNode*)self);
}

QDomNamedNodeMap* q_domcomment_attributes(void* self) {
    return QDomNode_Attributes((QDomNode*)self);
}

QDomDocument* q_domcomment_owner_document(void* self) {
    return QDomNode_OwnerDocument((QDomNode*)self);
}

const char* q_domcomment_namespace_u_r_i(void* self) {
    libqt_string _str = QDomNode_NamespaceURI((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domcomment_local_name(void* self) {
    libqt_string _str = QDomNode_LocalName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domcomment_has_attributes(void* self) {
    return QDomNode_HasAttributes((QDomNode*)self);
}

const char* q_domcomment_node_value(void* self) {
    libqt_string _str = QDomNode_NodeValue((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domcomment_set_node_value(void* self, const char* value) {
    QDomNode_SetNodeValue((QDomNode*)self, qstring(value));
}

const char* q_domcomment_prefix(void* self) {
    libqt_string _str = QDomNode_Prefix((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domcomment_set_prefix(void* self, const char* pre) {
    QDomNode_SetPrefix((QDomNode*)self, qstring(pre));
}

bool q_domcomment_is_attr(void* self) {
    return QDomNode_IsAttr((QDomNode*)self);
}

bool q_domcomment_is_c_d_a_t_a_section(void* self) {
    return QDomNode_IsCDATASection((QDomNode*)self);
}

bool q_domcomment_is_document_fragment(void* self) {
    return QDomNode_IsDocumentFragment((QDomNode*)self);
}

bool q_domcomment_is_document(void* self) {
    return QDomNode_IsDocument((QDomNode*)self);
}

bool q_domcomment_is_document_type(void* self) {
    return QDomNode_IsDocumentType((QDomNode*)self);
}

bool q_domcomment_is_element(void* self) {
    return QDomNode_IsElement((QDomNode*)self);
}

bool q_domcomment_is_entity_reference(void* self) {
    return QDomNode_IsEntityReference((QDomNode*)self);
}

bool q_domcomment_is_text(void* self) {
    return QDomNode_IsText((QDomNode*)self);
}

bool q_domcomment_is_entity(void* self) {
    return QDomNode_IsEntity((QDomNode*)self);
}

bool q_domcomment_is_notation(void* self) {
    return QDomNode_IsNotation((QDomNode*)self);
}

bool q_domcomment_is_processing_instruction(void* self) {
    return QDomNode_IsProcessingInstruction((QDomNode*)self);
}

bool q_domcomment_is_character_data(void* self) {
    return QDomNode_IsCharacterData((QDomNode*)self);
}

bool q_domcomment_is_comment(void* self) {
    return QDomNode_IsComment((QDomNode*)self);
}

QDomNode* q_domcomment_named_item(void* self, const char* name) {
    return QDomNode_NamedItem((QDomNode*)self, qstring(name));
}

bool q_domcomment_is_null(void* self) {
    return QDomNode_IsNull((QDomNode*)self);
}

void q_domcomment_clear(void* self) {
    QDomNode_Clear((QDomNode*)self);
}

QDomAttr* q_domcomment_to_attr(void* self) {
    return QDomNode_ToAttr((QDomNode*)self);
}

QDomCDATASection* q_domcomment_to_c_d_a_t_a_section(void* self) {
    return QDomNode_ToCDATASection((QDomNode*)self);
}

QDomDocumentFragment* q_domcomment_to_document_fragment(void* self) {
    return QDomNode_ToDocumentFragment((QDomNode*)self);
}

QDomDocument* q_domcomment_to_document(void* self) {
    return QDomNode_ToDocument((QDomNode*)self);
}

QDomDocumentType* q_domcomment_to_document_type(void* self) {
    return QDomNode_ToDocumentType((QDomNode*)self);
}

QDomElement* q_domcomment_to_element(void* self) {
    return QDomNode_ToElement((QDomNode*)self);
}

QDomEntityReference* q_domcomment_to_entity_reference(void* self) {
    return QDomNode_ToEntityReference((QDomNode*)self);
}

QDomText* q_domcomment_to_text(void* self) {
    return QDomNode_ToText((QDomNode*)self);
}

QDomEntity* q_domcomment_to_entity(void* self) {
    return QDomNode_ToEntity((QDomNode*)self);
}

QDomNotation* q_domcomment_to_notation(void* self) {
    return QDomNode_ToNotation((QDomNode*)self);
}

QDomProcessingInstruction* q_domcomment_to_processing_instruction(void* self) {
    return QDomNode_ToProcessingInstruction((QDomNode*)self);
}

QDomCharacterData* q_domcomment_to_character_data(void* self) {
    return QDomNode_ToCharacterData((QDomNode*)self);
}

QDomComment* q_domcomment_to_comment(void* self) {
    return QDomNode_ToComment((QDomNode*)self);
}

void q_domcomment_save(void* self, void* param1, int param2) {
    QDomNode_Save((QDomNode*)self, (QTextStream*)param1, param2);
}

QDomElement* q_domcomment_first_child_element(void* self) {
    return QDomNode_FirstChildElement((QDomNode*)self);
}

QDomElement* q_domcomment_last_child_element(void* self) {
    return QDomNode_LastChildElement((QDomNode*)self);
}

QDomElement* q_domcomment_previous_sibling_element(void* self) {
    return QDomNode_PreviousSiblingElement((QDomNode*)self);
}

QDomElement* q_domcomment_next_sibling_element(void* self) {
    return QDomNode_NextSiblingElement((QDomNode*)self);
}

int32_t q_domcomment_line_number(void* self) {
    return QDomNode_LineNumber((QDomNode*)self);
}

int32_t q_domcomment_column_number(void* self) {
    return QDomNode_ColumnNumber((QDomNode*)self);
}

QDomNode* q_domcomment_clone_node1(void* self, bool deep) {
    return QDomNode_CloneNode1((QDomNode*)self, deep);
}

void q_domcomment_save3(void* self, void* param1, int param2, int32_t param3) {
    QDomNode_Save3((QDomNode*)self, (QTextStream*)param1, param2, param3);
}

QDomElement* q_domcomment_first_child_element1(void* self, const char* tagName) {
    return QDomNode_FirstChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domcomment_first_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_FirstChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domcomment_last_child_element1(void* self, const char* tagName) {
    return QDomNode_LastChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domcomment_last_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_LastChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domcomment_previous_sibling_element1(void* self, const char* tagName) {
    return QDomNode_PreviousSiblingElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domcomment_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_PreviousSiblingElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domcomment_next_sibling_element1(void* self, const char* taName) {
    return QDomNode_NextSiblingElement1((QDomNode*)self, qstring(taName));
}

QDomElement* q_domcomment_next_sibling_element2(void* self, const char* taName, const char* namespaceURI) {
    return QDomNode_NextSiblingElement2((QDomNode*)self, qstring(taName), qstring(namespaceURI));
}

void q_domcomment_delete(void* self) {
    QDomComment_Delete((QDomComment*)(self));
}

QDomCDATASection* q_domcdatasection_new() {
    return QDomCDATASection_new();
}

QDomCDATASection* q_domcdatasection_new2(void* cdataSection) {
    return QDomCDATASection_new2((QDomCDATASection*)cdataSection);
}

void q_domcdatasection_operator_assign(void* self, void* other) {
    QDomCDATASection_OperatorAssign((QDomCDATASection*)self, (QDomCDATASection*)other);
}

int32_t q_domcdatasection_node_type(void* self) {
    return QDomCDATASection_NodeType((QDomCDATASection*)self);
}

QDomText* q_domcdatasection_split_text(void* self, int offset) {
    return QDomText_SplitText((QDomText*)self, offset);
}

const char* q_domcdatasection_substring_data(void* self, uint64_t offset, uint64_t count) {
    libqt_string _str = QDomCharacterData_SubstringData((QDomCharacterData*)self, offset, count);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domcdatasection_append_data(void* self, const char* arg) {
    QDomCharacterData_AppendData((QDomCharacterData*)self, qstring(arg));
}

void q_domcdatasection_insert_data(void* self, uint64_t offset, const char* arg) {
    QDomCharacterData_InsertData((QDomCharacterData*)self, offset, qstring(arg));
}

void q_domcdatasection_delete_data(void* self, uint64_t offset, uint64_t count) {
    QDomCharacterData_DeleteData((QDomCharacterData*)self, offset, count);
}

void q_domcdatasection_replace_data(void* self, uint64_t offset, uint64_t count, const char* arg) {
    QDomCharacterData_ReplaceData((QDomCharacterData*)self, offset, count, qstring(arg));
}

int32_t q_domcdatasection_length(void* self) {
    return QDomCharacterData_Length((QDomCharacterData*)self);
}

const char* q_domcdatasection_data(void* self) {
    libqt_string _str = QDomCharacterData_Data((QDomCharacterData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domcdatasection_set_data(void* self, const char* data) {
    QDomCharacterData_SetData((QDomCharacterData*)self, qstring(data));
}

bool q_domcdatasection_operator_equal(void* self, void* other) {
    return QDomNode_OperatorEqual((QDomNode*)self, (QDomNode*)other);
}

bool q_domcdatasection_operator_not_equal(void* self, void* other) {
    return QDomNode_OperatorNotEqual((QDomNode*)self, (QDomNode*)other);
}

QDomNode* q_domcdatasection_insert_before(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertBefore((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domcdatasection_insert_after(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertAfter((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domcdatasection_replace_child(void* self, void* newChild, void* oldChild) {
    return QDomNode_ReplaceChild((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)oldChild);
}

QDomNode* q_domcdatasection_remove_child(void* self, void* oldChild) {
    return QDomNode_RemoveChild((QDomNode*)self, (QDomNode*)oldChild);
}

QDomNode* q_domcdatasection_append_child(void* self, void* newChild) {
    return QDomNode_AppendChild((QDomNode*)self, (QDomNode*)newChild);
}

bool q_domcdatasection_has_child_nodes(void* self) {
    return QDomNode_HasChildNodes((QDomNode*)self);
}

QDomNode* q_domcdatasection_clone_node(void* self) {
    return QDomNode_CloneNode((QDomNode*)self);
}

void q_domcdatasection_normalize(void* self) {
    QDomNode_Normalize((QDomNode*)self);
}

bool q_domcdatasection_is_supported(void* self, const char* feature, const char* version) {
    return QDomNode_IsSupported((QDomNode*)self, qstring(feature), qstring(version));
}

const char* q_domcdatasection_node_name(void* self) {
    libqt_string _str = QDomNode_NodeName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomNode* q_domcdatasection_parent_node(void* self) {
    return QDomNode_ParentNode((QDomNode*)self);
}

QDomNodeList* q_domcdatasection_child_nodes(void* self) {
    return QDomNode_ChildNodes((QDomNode*)self);
}

QDomNode* q_domcdatasection_first_child(void* self) {
    return QDomNode_FirstChild((QDomNode*)self);
}

QDomNode* q_domcdatasection_last_child(void* self) {
    return QDomNode_LastChild((QDomNode*)self);
}

QDomNode* q_domcdatasection_previous_sibling(void* self) {
    return QDomNode_PreviousSibling((QDomNode*)self);
}

QDomNode* q_domcdatasection_next_sibling(void* self) {
    return QDomNode_NextSibling((QDomNode*)self);
}

QDomNamedNodeMap* q_domcdatasection_attributes(void* self) {
    return QDomNode_Attributes((QDomNode*)self);
}

QDomDocument* q_domcdatasection_owner_document(void* self) {
    return QDomNode_OwnerDocument((QDomNode*)self);
}

const char* q_domcdatasection_namespace_u_r_i(void* self) {
    libqt_string _str = QDomNode_NamespaceURI((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domcdatasection_local_name(void* self) {
    libqt_string _str = QDomNode_LocalName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domcdatasection_has_attributes(void* self) {
    return QDomNode_HasAttributes((QDomNode*)self);
}

const char* q_domcdatasection_node_value(void* self) {
    libqt_string _str = QDomNode_NodeValue((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domcdatasection_set_node_value(void* self, const char* value) {
    QDomNode_SetNodeValue((QDomNode*)self, qstring(value));
}

const char* q_domcdatasection_prefix(void* self) {
    libqt_string _str = QDomNode_Prefix((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domcdatasection_set_prefix(void* self, const char* pre) {
    QDomNode_SetPrefix((QDomNode*)self, qstring(pre));
}

bool q_domcdatasection_is_attr(void* self) {
    return QDomNode_IsAttr((QDomNode*)self);
}

bool q_domcdatasection_is_c_d_a_t_a_section(void* self) {
    return QDomNode_IsCDATASection((QDomNode*)self);
}

bool q_domcdatasection_is_document_fragment(void* self) {
    return QDomNode_IsDocumentFragment((QDomNode*)self);
}

bool q_domcdatasection_is_document(void* self) {
    return QDomNode_IsDocument((QDomNode*)self);
}

bool q_domcdatasection_is_document_type(void* self) {
    return QDomNode_IsDocumentType((QDomNode*)self);
}

bool q_domcdatasection_is_element(void* self) {
    return QDomNode_IsElement((QDomNode*)self);
}

bool q_domcdatasection_is_entity_reference(void* self) {
    return QDomNode_IsEntityReference((QDomNode*)self);
}

bool q_domcdatasection_is_text(void* self) {
    return QDomNode_IsText((QDomNode*)self);
}

bool q_domcdatasection_is_entity(void* self) {
    return QDomNode_IsEntity((QDomNode*)self);
}

bool q_domcdatasection_is_notation(void* self) {
    return QDomNode_IsNotation((QDomNode*)self);
}

bool q_domcdatasection_is_processing_instruction(void* self) {
    return QDomNode_IsProcessingInstruction((QDomNode*)self);
}

bool q_domcdatasection_is_character_data(void* self) {
    return QDomNode_IsCharacterData((QDomNode*)self);
}

bool q_domcdatasection_is_comment(void* self) {
    return QDomNode_IsComment((QDomNode*)self);
}

QDomNode* q_domcdatasection_named_item(void* self, const char* name) {
    return QDomNode_NamedItem((QDomNode*)self, qstring(name));
}

bool q_domcdatasection_is_null(void* self) {
    return QDomNode_IsNull((QDomNode*)self);
}

void q_domcdatasection_clear(void* self) {
    QDomNode_Clear((QDomNode*)self);
}

QDomAttr* q_domcdatasection_to_attr(void* self) {
    return QDomNode_ToAttr((QDomNode*)self);
}

QDomCDATASection* q_domcdatasection_to_c_d_a_t_a_section(void* self) {
    return QDomNode_ToCDATASection((QDomNode*)self);
}

QDomDocumentFragment* q_domcdatasection_to_document_fragment(void* self) {
    return QDomNode_ToDocumentFragment((QDomNode*)self);
}

QDomDocument* q_domcdatasection_to_document(void* self) {
    return QDomNode_ToDocument((QDomNode*)self);
}

QDomDocumentType* q_domcdatasection_to_document_type(void* self) {
    return QDomNode_ToDocumentType((QDomNode*)self);
}

QDomElement* q_domcdatasection_to_element(void* self) {
    return QDomNode_ToElement((QDomNode*)self);
}

QDomEntityReference* q_domcdatasection_to_entity_reference(void* self) {
    return QDomNode_ToEntityReference((QDomNode*)self);
}

QDomText* q_domcdatasection_to_text(void* self) {
    return QDomNode_ToText((QDomNode*)self);
}

QDomEntity* q_domcdatasection_to_entity(void* self) {
    return QDomNode_ToEntity((QDomNode*)self);
}

QDomNotation* q_domcdatasection_to_notation(void* self) {
    return QDomNode_ToNotation((QDomNode*)self);
}

QDomProcessingInstruction* q_domcdatasection_to_processing_instruction(void* self) {
    return QDomNode_ToProcessingInstruction((QDomNode*)self);
}

QDomCharacterData* q_domcdatasection_to_character_data(void* self) {
    return QDomNode_ToCharacterData((QDomNode*)self);
}

QDomComment* q_domcdatasection_to_comment(void* self) {
    return QDomNode_ToComment((QDomNode*)self);
}

void q_domcdatasection_save(void* self, void* param1, int param2) {
    QDomNode_Save((QDomNode*)self, (QTextStream*)param1, param2);
}

QDomElement* q_domcdatasection_first_child_element(void* self) {
    return QDomNode_FirstChildElement((QDomNode*)self);
}

QDomElement* q_domcdatasection_last_child_element(void* self) {
    return QDomNode_LastChildElement((QDomNode*)self);
}

QDomElement* q_domcdatasection_previous_sibling_element(void* self) {
    return QDomNode_PreviousSiblingElement((QDomNode*)self);
}

QDomElement* q_domcdatasection_next_sibling_element(void* self) {
    return QDomNode_NextSiblingElement((QDomNode*)self);
}

int32_t q_domcdatasection_line_number(void* self) {
    return QDomNode_LineNumber((QDomNode*)self);
}

int32_t q_domcdatasection_column_number(void* self) {
    return QDomNode_ColumnNumber((QDomNode*)self);
}

QDomNode* q_domcdatasection_clone_node1(void* self, bool deep) {
    return QDomNode_CloneNode1((QDomNode*)self, deep);
}

void q_domcdatasection_save3(void* self, void* param1, int param2, int32_t param3) {
    QDomNode_Save3((QDomNode*)self, (QTextStream*)param1, param2, param3);
}

QDomElement* q_domcdatasection_first_child_element1(void* self, const char* tagName) {
    return QDomNode_FirstChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domcdatasection_first_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_FirstChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domcdatasection_last_child_element1(void* self, const char* tagName) {
    return QDomNode_LastChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domcdatasection_last_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_LastChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domcdatasection_previous_sibling_element1(void* self, const char* tagName) {
    return QDomNode_PreviousSiblingElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domcdatasection_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_PreviousSiblingElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domcdatasection_next_sibling_element1(void* self, const char* taName) {
    return QDomNode_NextSiblingElement1((QDomNode*)self, qstring(taName));
}

QDomElement* q_domcdatasection_next_sibling_element2(void* self, const char* taName, const char* namespaceURI) {
    return QDomNode_NextSiblingElement2((QDomNode*)self, qstring(taName), qstring(namespaceURI));
}

void q_domcdatasection_delete(void* self) {
    QDomCDATASection_Delete((QDomCDATASection*)(self));
}

QDomNotation* q_domnotation_new() {
    return QDomNotation_new();
}

QDomNotation* q_domnotation_new2(void* notation) {
    return QDomNotation_new2((QDomNotation*)notation);
}

void q_domnotation_operator_assign(void* self, void* other) {
    QDomNotation_OperatorAssign((QDomNotation*)self, (QDomNotation*)other);
}

const char* q_domnotation_public_id(void* self) {
    libqt_string _str = QDomNotation_PublicId((QDomNotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domnotation_system_id(void* self) {
    libqt_string _str = QDomNotation_SystemId((QDomNotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_domnotation_node_type(void* self) {
    return QDomNotation_NodeType((QDomNotation*)self);
}

bool q_domnotation_operator_equal(void* self, void* other) {
    return QDomNode_OperatorEqual((QDomNode*)self, (QDomNode*)other);
}

bool q_domnotation_operator_not_equal(void* self, void* other) {
    return QDomNode_OperatorNotEqual((QDomNode*)self, (QDomNode*)other);
}

QDomNode* q_domnotation_insert_before(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertBefore((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domnotation_insert_after(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertAfter((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domnotation_replace_child(void* self, void* newChild, void* oldChild) {
    return QDomNode_ReplaceChild((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)oldChild);
}

QDomNode* q_domnotation_remove_child(void* self, void* oldChild) {
    return QDomNode_RemoveChild((QDomNode*)self, (QDomNode*)oldChild);
}

QDomNode* q_domnotation_append_child(void* self, void* newChild) {
    return QDomNode_AppendChild((QDomNode*)self, (QDomNode*)newChild);
}

bool q_domnotation_has_child_nodes(void* self) {
    return QDomNode_HasChildNodes((QDomNode*)self);
}

QDomNode* q_domnotation_clone_node(void* self) {
    return QDomNode_CloneNode((QDomNode*)self);
}

void q_domnotation_normalize(void* self) {
    QDomNode_Normalize((QDomNode*)self);
}

bool q_domnotation_is_supported(void* self, const char* feature, const char* version) {
    return QDomNode_IsSupported((QDomNode*)self, qstring(feature), qstring(version));
}

const char* q_domnotation_node_name(void* self) {
    libqt_string _str = QDomNode_NodeName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomNode* q_domnotation_parent_node(void* self) {
    return QDomNode_ParentNode((QDomNode*)self);
}

QDomNodeList* q_domnotation_child_nodes(void* self) {
    return QDomNode_ChildNodes((QDomNode*)self);
}

QDomNode* q_domnotation_first_child(void* self) {
    return QDomNode_FirstChild((QDomNode*)self);
}

QDomNode* q_domnotation_last_child(void* self) {
    return QDomNode_LastChild((QDomNode*)self);
}

QDomNode* q_domnotation_previous_sibling(void* self) {
    return QDomNode_PreviousSibling((QDomNode*)self);
}

QDomNode* q_domnotation_next_sibling(void* self) {
    return QDomNode_NextSibling((QDomNode*)self);
}

QDomNamedNodeMap* q_domnotation_attributes(void* self) {
    return QDomNode_Attributes((QDomNode*)self);
}

QDomDocument* q_domnotation_owner_document(void* self) {
    return QDomNode_OwnerDocument((QDomNode*)self);
}

const char* q_domnotation_namespace_u_r_i(void* self) {
    libqt_string _str = QDomNode_NamespaceURI((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domnotation_local_name(void* self) {
    libqt_string _str = QDomNode_LocalName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domnotation_has_attributes(void* self) {
    return QDomNode_HasAttributes((QDomNode*)self);
}

const char* q_domnotation_node_value(void* self) {
    libqt_string _str = QDomNode_NodeValue((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domnotation_set_node_value(void* self, const char* value) {
    QDomNode_SetNodeValue((QDomNode*)self, qstring(value));
}

const char* q_domnotation_prefix(void* self) {
    libqt_string _str = QDomNode_Prefix((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domnotation_set_prefix(void* self, const char* pre) {
    QDomNode_SetPrefix((QDomNode*)self, qstring(pre));
}

bool q_domnotation_is_attr(void* self) {
    return QDomNode_IsAttr((QDomNode*)self);
}

bool q_domnotation_is_c_d_a_t_a_section(void* self) {
    return QDomNode_IsCDATASection((QDomNode*)self);
}

bool q_domnotation_is_document_fragment(void* self) {
    return QDomNode_IsDocumentFragment((QDomNode*)self);
}

bool q_domnotation_is_document(void* self) {
    return QDomNode_IsDocument((QDomNode*)self);
}

bool q_domnotation_is_document_type(void* self) {
    return QDomNode_IsDocumentType((QDomNode*)self);
}

bool q_domnotation_is_element(void* self) {
    return QDomNode_IsElement((QDomNode*)self);
}

bool q_domnotation_is_entity_reference(void* self) {
    return QDomNode_IsEntityReference((QDomNode*)self);
}

bool q_domnotation_is_text(void* self) {
    return QDomNode_IsText((QDomNode*)self);
}

bool q_domnotation_is_entity(void* self) {
    return QDomNode_IsEntity((QDomNode*)self);
}

bool q_domnotation_is_notation(void* self) {
    return QDomNode_IsNotation((QDomNode*)self);
}

bool q_domnotation_is_processing_instruction(void* self) {
    return QDomNode_IsProcessingInstruction((QDomNode*)self);
}

bool q_domnotation_is_character_data(void* self) {
    return QDomNode_IsCharacterData((QDomNode*)self);
}

bool q_domnotation_is_comment(void* self) {
    return QDomNode_IsComment((QDomNode*)self);
}

QDomNode* q_domnotation_named_item(void* self, const char* name) {
    return QDomNode_NamedItem((QDomNode*)self, qstring(name));
}

bool q_domnotation_is_null(void* self) {
    return QDomNode_IsNull((QDomNode*)self);
}

void q_domnotation_clear(void* self) {
    QDomNode_Clear((QDomNode*)self);
}

QDomAttr* q_domnotation_to_attr(void* self) {
    return QDomNode_ToAttr((QDomNode*)self);
}

QDomCDATASection* q_domnotation_to_c_d_a_t_a_section(void* self) {
    return QDomNode_ToCDATASection((QDomNode*)self);
}

QDomDocumentFragment* q_domnotation_to_document_fragment(void* self) {
    return QDomNode_ToDocumentFragment((QDomNode*)self);
}

QDomDocument* q_domnotation_to_document(void* self) {
    return QDomNode_ToDocument((QDomNode*)self);
}

QDomDocumentType* q_domnotation_to_document_type(void* self) {
    return QDomNode_ToDocumentType((QDomNode*)self);
}

QDomElement* q_domnotation_to_element(void* self) {
    return QDomNode_ToElement((QDomNode*)self);
}

QDomEntityReference* q_domnotation_to_entity_reference(void* self) {
    return QDomNode_ToEntityReference((QDomNode*)self);
}

QDomText* q_domnotation_to_text(void* self) {
    return QDomNode_ToText((QDomNode*)self);
}

QDomEntity* q_domnotation_to_entity(void* self) {
    return QDomNode_ToEntity((QDomNode*)self);
}

QDomNotation* q_domnotation_to_notation(void* self) {
    return QDomNode_ToNotation((QDomNode*)self);
}

QDomProcessingInstruction* q_domnotation_to_processing_instruction(void* self) {
    return QDomNode_ToProcessingInstruction((QDomNode*)self);
}

QDomCharacterData* q_domnotation_to_character_data(void* self) {
    return QDomNode_ToCharacterData((QDomNode*)self);
}

QDomComment* q_domnotation_to_comment(void* self) {
    return QDomNode_ToComment((QDomNode*)self);
}

void q_domnotation_save(void* self, void* param1, int param2) {
    QDomNode_Save((QDomNode*)self, (QTextStream*)param1, param2);
}

QDomElement* q_domnotation_first_child_element(void* self) {
    return QDomNode_FirstChildElement((QDomNode*)self);
}

QDomElement* q_domnotation_last_child_element(void* self) {
    return QDomNode_LastChildElement((QDomNode*)self);
}

QDomElement* q_domnotation_previous_sibling_element(void* self) {
    return QDomNode_PreviousSiblingElement((QDomNode*)self);
}

QDomElement* q_domnotation_next_sibling_element(void* self) {
    return QDomNode_NextSiblingElement((QDomNode*)self);
}

int32_t q_domnotation_line_number(void* self) {
    return QDomNode_LineNumber((QDomNode*)self);
}

int32_t q_domnotation_column_number(void* self) {
    return QDomNode_ColumnNumber((QDomNode*)self);
}

QDomNode* q_domnotation_clone_node1(void* self, bool deep) {
    return QDomNode_CloneNode1((QDomNode*)self, deep);
}

void q_domnotation_save3(void* self, void* param1, int param2, int32_t param3) {
    QDomNode_Save3((QDomNode*)self, (QTextStream*)param1, param2, param3);
}

QDomElement* q_domnotation_first_child_element1(void* self, const char* tagName) {
    return QDomNode_FirstChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domnotation_first_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_FirstChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domnotation_last_child_element1(void* self, const char* tagName) {
    return QDomNode_LastChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domnotation_last_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_LastChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domnotation_previous_sibling_element1(void* self, const char* tagName) {
    return QDomNode_PreviousSiblingElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domnotation_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_PreviousSiblingElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domnotation_next_sibling_element1(void* self, const char* taName) {
    return QDomNode_NextSiblingElement1((QDomNode*)self, qstring(taName));
}

QDomElement* q_domnotation_next_sibling_element2(void* self, const char* taName, const char* namespaceURI) {
    return QDomNode_NextSiblingElement2((QDomNode*)self, qstring(taName), qstring(namespaceURI));
}

void q_domnotation_delete(void* self) {
    QDomNotation_Delete((QDomNotation*)(self));
}

QDomEntity* q_domentity_new() {
    return QDomEntity_new();
}

QDomEntity* q_domentity_new2(void* entity) {
    return QDomEntity_new2((QDomEntity*)entity);
}

void q_domentity_operator_assign(void* self, void* other) {
    QDomEntity_OperatorAssign((QDomEntity*)self, (QDomEntity*)other);
}

const char* q_domentity_public_id(void* self) {
    libqt_string _str = QDomEntity_PublicId((QDomEntity*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domentity_system_id(void* self) {
    libqt_string _str = QDomEntity_SystemId((QDomEntity*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domentity_notation_name(void* self) {
    libqt_string _str = QDomEntity_NotationName((QDomEntity*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_domentity_node_type(void* self) {
    return QDomEntity_NodeType((QDomEntity*)self);
}

bool q_domentity_operator_equal(void* self, void* other) {
    return QDomNode_OperatorEqual((QDomNode*)self, (QDomNode*)other);
}

bool q_domentity_operator_not_equal(void* self, void* other) {
    return QDomNode_OperatorNotEqual((QDomNode*)self, (QDomNode*)other);
}

QDomNode* q_domentity_insert_before(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertBefore((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domentity_insert_after(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertAfter((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domentity_replace_child(void* self, void* newChild, void* oldChild) {
    return QDomNode_ReplaceChild((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)oldChild);
}

QDomNode* q_domentity_remove_child(void* self, void* oldChild) {
    return QDomNode_RemoveChild((QDomNode*)self, (QDomNode*)oldChild);
}

QDomNode* q_domentity_append_child(void* self, void* newChild) {
    return QDomNode_AppendChild((QDomNode*)self, (QDomNode*)newChild);
}

bool q_domentity_has_child_nodes(void* self) {
    return QDomNode_HasChildNodes((QDomNode*)self);
}

QDomNode* q_domentity_clone_node(void* self) {
    return QDomNode_CloneNode((QDomNode*)self);
}

void q_domentity_normalize(void* self) {
    QDomNode_Normalize((QDomNode*)self);
}

bool q_domentity_is_supported(void* self, const char* feature, const char* version) {
    return QDomNode_IsSupported((QDomNode*)self, qstring(feature), qstring(version));
}

const char* q_domentity_node_name(void* self) {
    libqt_string _str = QDomNode_NodeName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomNode* q_domentity_parent_node(void* self) {
    return QDomNode_ParentNode((QDomNode*)self);
}

QDomNodeList* q_domentity_child_nodes(void* self) {
    return QDomNode_ChildNodes((QDomNode*)self);
}

QDomNode* q_domentity_first_child(void* self) {
    return QDomNode_FirstChild((QDomNode*)self);
}

QDomNode* q_domentity_last_child(void* self) {
    return QDomNode_LastChild((QDomNode*)self);
}

QDomNode* q_domentity_previous_sibling(void* self) {
    return QDomNode_PreviousSibling((QDomNode*)self);
}

QDomNode* q_domentity_next_sibling(void* self) {
    return QDomNode_NextSibling((QDomNode*)self);
}

QDomNamedNodeMap* q_domentity_attributes(void* self) {
    return QDomNode_Attributes((QDomNode*)self);
}

QDomDocument* q_domentity_owner_document(void* self) {
    return QDomNode_OwnerDocument((QDomNode*)self);
}

const char* q_domentity_namespace_u_r_i(void* self) {
    libqt_string _str = QDomNode_NamespaceURI((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domentity_local_name(void* self) {
    libqt_string _str = QDomNode_LocalName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domentity_has_attributes(void* self) {
    return QDomNode_HasAttributes((QDomNode*)self);
}

const char* q_domentity_node_value(void* self) {
    libqt_string _str = QDomNode_NodeValue((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domentity_set_node_value(void* self, const char* value) {
    QDomNode_SetNodeValue((QDomNode*)self, qstring(value));
}

const char* q_domentity_prefix(void* self) {
    libqt_string _str = QDomNode_Prefix((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domentity_set_prefix(void* self, const char* pre) {
    QDomNode_SetPrefix((QDomNode*)self, qstring(pre));
}

bool q_domentity_is_attr(void* self) {
    return QDomNode_IsAttr((QDomNode*)self);
}

bool q_domentity_is_c_d_a_t_a_section(void* self) {
    return QDomNode_IsCDATASection((QDomNode*)self);
}

bool q_domentity_is_document_fragment(void* self) {
    return QDomNode_IsDocumentFragment((QDomNode*)self);
}

bool q_domentity_is_document(void* self) {
    return QDomNode_IsDocument((QDomNode*)self);
}

bool q_domentity_is_document_type(void* self) {
    return QDomNode_IsDocumentType((QDomNode*)self);
}

bool q_domentity_is_element(void* self) {
    return QDomNode_IsElement((QDomNode*)self);
}

bool q_domentity_is_entity_reference(void* self) {
    return QDomNode_IsEntityReference((QDomNode*)self);
}

bool q_domentity_is_text(void* self) {
    return QDomNode_IsText((QDomNode*)self);
}

bool q_domentity_is_entity(void* self) {
    return QDomNode_IsEntity((QDomNode*)self);
}

bool q_domentity_is_notation(void* self) {
    return QDomNode_IsNotation((QDomNode*)self);
}

bool q_domentity_is_processing_instruction(void* self) {
    return QDomNode_IsProcessingInstruction((QDomNode*)self);
}

bool q_domentity_is_character_data(void* self) {
    return QDomNode_IsCharacterData((QDomNode*)self);
}

bool q_domentity_is_comment(void* self) {
    return QDomNode_IsComment((QDomNode*)self);
}

QDomNode* q_domentity_named_item(void* self, const char* name) {
    return QDomNode_NamedItem((QDomNode*)self, qstring(name));
}

bool q_domentity_is_null(void* self) {
    return QDomNode_IsNull((QDomNode*)self);
}

void q_domentity_clear(void* self) {
    QDomNode_Clear((QDomNode*)self);
}

QDomAttr* q_domentity_to_attr(void* self) {
    return QDomNode_ToAttr((QDomNode*)self);
}

QDomCDATASection* q_domentity_to_c_d_a_t_a_section(void* self) {
    return QDomNode_ToCDATASection((QDomNode*)self);
}

QDomDocumentFragment* q_domentity_to_document_fragment(void* self) {
    return QDomNode_ToDocumentFragment((QDomNode*)self);
}

QDomDocument* q_domentity_to_document(void* self) {
    return QDomNode_ToDocument((QDomNode*)self);
}

QDomDocumentType* q_domentity_to_document_type(void* self) {
    return QDomNode_ToDocumentType((QDomNode*)self);
}

QDomElement* q_domentity_to_element(void* self) {
    return QDomNode_ToElement((QDomNode*)self);
}

QDomEntityReference* q_domentity_to_entity_reference(void* self) {
    return QDomNode_ToEntityReference((QDomNode*)self);
}

QDomText* q_domentity_to_text(void* self) {
    return QDomNode_ToText((QDomNode*)self);
}

QDomEntity* q_domentity_to_entity(void* self) {
    return QDomNode_ToEntity((QDomNode*)self);
}

QDomNotation* q_domentity_to_notation(void* self) {
    return QDomNode_ToNotation((QDomNode*)self);
}

QDomProcessingInstruction* q_domentity_to_processing_instruction(void* self) {
    return QDomNode_ToProcessingInstruction((QDomNode*)self);
}

QDomCharacterData* q_domentity_to_character_data(void* self) {
    return QDomNode_ToCharacterData((QDomNode*)self);
}

QDomComment* q_domentity_to_comment(void* self) {
    return QDomNode_ToComment((QDomNode*)self);
}

void q_domentity_save(void* self, void* param1, int param2) {
    QDomNode_Save((QDomNode*)self, (QTextStream*)param1, param2);
}

QDomElement* q_domentity_first_child_element(void* self) {
    return QDomNode_FirstChildElement((QDomNode*)self);
}

QDomElement* q_domentity_last_child_element(void* self) {
    return QDomNode_LastChildElement((QDomNode*)self);
}

QDomElement* q_domentity_previous_sibling_element(void* self) {
    return QDomNode_PreviousSiblingElement((QDomNode*)self);
}

QDomElement* q_domentity_next_sibling_element(void* self) {
    return QDomNode_NextSiblingElement((QDomNode*)self);
}

int32_t q_domentity_line_number(void* self) {
    return QDomNode_LineNumber((QDomNode*)self);
}

int32_t q_domentity_column_number(void* self) {
    return QDomNode_ColumnNumber((QDomNode*)self);
}

QDomNode* q_domentity_clone_node1(void* self, bool deep) {
    return QDomNode_CloneNode1((QDomNode*)self, deep);
}

void q_domentity_save3(void* self, void* param1, int param2, int32_t param3) {
    QDomNode_Save3((QDomNode*)self, (QTextStream*)param1, param2, param3);
}

QDomElement* q_domentity_first_child_element1(void* self, const char* tagName) {
    return QDomNode_FirstChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domentity_first_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_FirstChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domentity_last_child_element1(void* self, const char* tagName) {
    return QDomNode_LastChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domentity_last_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_LastChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domentity_previous_sibling_element1(void* self, const char* tagName) {
    return QDomNode_PreviousSiblingElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domentity_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_PreviousSiblingElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domentity_next_sibling_element1(void* self, const char* taName) {
    return QDomNode_NextSiblingElement1((QDomNode*)self, qstring(taName));
}

QDomElement* q_domentity_next_sibling_element2(void* self, const char* taName, const char* namespaceURI) {
    return QDomNode_NextSiblingElement2((QDomNode*)self, qstring(taName), qstring(namespaceURI));
}

void q_domentity_delete(void* self) {
    QDomEntity_Delete((QDomEntity*)(self));
}

QDomEntityReference* q_domentityreference_new() {
    return QDomEntityReference_new();
}

QDomEntityReference* q_domentityreference_new2(void* entityReference) {
    return QDomEntityReference_new2((QDomEntityReference*)entityReference);
}

void q_domentityreference_operator_assign(void* self, void* other) {
    QDomEntityReference_OperatorAssign((QDomEntityReference*)self, (QDomEntityReference*)other);
}

int32_t q_domentityreference_node_type(void* self) {
    return QDomEntityReference_NodeType((QDomEntityReference*)self);
}

bool q_domentityreference_operator_equal(void* self, void* other) {
    return QDomNode_OperatorEqual((QDomNode*)self, (QDomNode*)other);
}

bool q_domentityreference_operator_not_equal(void* self, void* other) {
    return QDomNode_OperatorNotEqual((QDomNode*)self, (QDomNode*)other);
}

QDomNode* q_domentityreference_insert_before(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertBefore((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domentityreference_insert_after(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertAfter((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domentityreference_replace_child(void* self, void* newChild, void* oldChild) {
    return QDomNode_ReplaceChild((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)oldChild);
}

QDomNode* q_domentityreference_remove_child(void* self, void* oldChild) {
    return QDomNode_RemoveChild((QDomNode*)self, (QDomNode*)oldChild);
}

QDomNode* q_domentityreference_append_child(void* self, void* newChild) {
    return QDomNode_AppendChild((QDomNode*)self, (QDomNode*)newChild);
}

bool q_domentityreference_has_child_nodes(void* self) {
    return QDomNode_HasChildNodes((QDomNode*)self);
}

QDomNode* q_domentityreference_clone_node(void* self) {
    return QDomNode_CloneNode((QDomNode*)self);
}

void q_domentityreference_normalize(void* self) {
    QDomNode_Normalize((QDomNode*)self);
}

bool q_domentityreference_is_supported(void* self, const char* feature, const char* version) {
    return QDomNode_IsSupported((QDomNode*)self, qstring(feature), qstring(version));
}

const char* q_domentityreference_node_name(void* self) {
    libqt_string _str = QDomNode_NodeName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomNode* q_domentityreference_parent_node(void* self) {
    return QDomNode_ParentNode((QDomNode*)self);
}

QDomNodeList* q_domentityreference_child_nodes(void* self) {
    return QDomNode_ChildNodes((QDomNode*)self);
}

QDomNode* q_domentityreference_first_child(void* self) {
    return QDomNode_FirstChild((QDomNode*)self);
}

QDomNode* q_domentityreference_last_child(void* self) {
    return QDomNode_LastChild((QDomNode*)self);
}

QDomNode* q_domentityreference_previous_sibling(void* self) {
    return QDomNode_PreviousSibling((QDomNode*)self);
}

QDomNode* q_domentityreference_next_sibling(void* self) {
    return QDomNode_NextSibling((QDomNode*)self);
}

QDomNamedNodeMap* q_domentityreference_attributes(void* self) {
    return QDomNode_Attributes((QDomNode*)self);
}

QDomDocument* q_domentityreference_owner_document(void* self) {
    return QDomNode_OwnerDocument((QDomNode*)self);
}

const char* q_domentityreference_namespace_u_r_i(void* self) {
    libqt_string _str = QDomNode_NamespaceURI((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domentityreference_local_name(void* self) {
    libqt_string _str = QDomNode_LocalName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domentityreference_has_attributes(void* self) {
    return QDomNode_HasAttributes((QDomNode*)self);
}

const char* q_domentityreference_node_value(void* self) {
    libqt_string _str = QDomNode_NodeValue((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domentityreference_set_node_value(void* self, const char* value) {
    QDomNode_SetNodeValue((QDomNode*)self, qstring(value));
}

const char* q_domentityreference_prefix(void* self) {
    libqt_string _str = QDomNode_Prefix((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domentityreference_set_prefix(void* self, const char* pre) {
    QDomNode_SetPrefix((QDomNode*)self, qstring(pre));
}

bool q_domentityreference_is_attr(void* self) {
    return QDomNode_IsAttr((QDomNode*)self);
}

bool q_domentityreference_is_c_d_a_t_a_section(void* self) {
    return QDomNode_IsCDATASection((QDomNode*)self);
}

bool q_domentityreference_is_document_fragment(void* self) {
    return QDomNode_IsDocumentFragment((QDomNode*)self);
}

bool q_domentityreference_is_document(void* self) {
    return QDomNode_IsDocument((QDomNode*)self);
}

bool q_domentityreference_is_document_type(void* self) {
    return QDomNode_IsDocumentType((QDomNode*)self);
}

bool q_domentityreference_is_element(void* self) {
    return QDomNode_IsElement((QDomNode*)self);
}

bool q_domentityreference_is_entity_reference(void* self) {
    return QDomNode_IsEntityReference((QDomNode*)self);
}

bool q_domentityreference_is_text(void* self) {
    return QDomNode_IsText((QDomNode*)self);
}

bool q_domentityreference_is_entity(void* self) {
    return QDomNode_IsEntity((QDomNode*)self);
}

bool q_domentityreference_is_notation(void* self) {
    return QDomNode_IsNotation((QDomNode*)self);
}

bool q_domentityreference_is_processing_instruction(void* self) {
    return QDomNode_IsProcessingInstruction((QDomNode*)self);
}

bool q_domentityreference_is_character_data(void* self) {
    return QDomNode_IsCharacterData((QDomNode*)self);
}

bool q_domentityreference_is_comment(void* self) {
    return QDomNode_IsComment((QDomNode*)self);
}

QDomNode* q_domentityreference_named_item(void* self, const char* name) {
    return QDomNode_NamedItem((QDomNode*)self, qstring(name));
}

bool q_domentityreference_is_null(void* self) {
    return QDomNode_IsNull((QDomNode*)self);
}

void q_domentityreference_clear(void* self) {
    QDomNode_Clear((QDomNode*)self);
}

QDomAttr* q_domentityreference_to_attr(void* self) {
    return QDomNode_ToAttr((QDomNode*)self);
}

QDomCDATASection* q_domentityreference_to_c_d_a_t_a_section(void* self) {
    return QDomNode_ToCDATASection((QDomNode*)self);
}

QDomDocumentFragment* q_domentityreference_to_document_fragment(void* self) {
    return QDomNode_ToDocumentFragment((QDomNode*)self);
}

QDomDocument* q_domentityreference_to_document(void* self) {
    return QDomNode_ToDocument((QDomNode*)self);
}

QDomDocumentType* q_domentityreference_to_document_type(void* self) {
    return QDomNode_ToDocumentType((QDomNode*)self);
}

QDomElement* q_domentityreference_to_element(void* self) {
    return QDomNode_ToElement((QDomNode*)self);
}

QDomEntityReference* q_domentityreference_to_entity_reference(void* self) {
    return QDomNode_ToEntityReference((QDomNode*)self);
}

QDomText* q_domentityreference_to_text(void* self) {
    return QDomNode_ToText((QDomNode*)self);
}

QDomEntity* q_domentityreference_to_entity(void* self) {
    return QDomNode_ToEntity((QDomNode*)self);
}

QDomNotation* q_domentityreference_to_notation(void* self) {
    return QDomNode_ToNotation((QDomNode*)self);
}

QDomProcessingInstruction* q_domentityreference_to_processing_instruction(void* self) {
    return QDomNode_ToProcessingInstruction((QDomNode*)self);
}

QDomCharacterData* q_domentityreference_to_character_data(void* self) {
    return QDomNode_ToCharacterData((QDomNode*)self);
}

QDomComment* q_domentityreference_to_comment(void* self) {
    return QDomNode_ToComment((QDomNode*)self);
}

void q_domentityreference_save(void* self, void* param1, int param2) {
    QDomNode_Save((QDomNode*)self, (QTextStream*)param1, param2);
}

QDomElement* q_domentityreference_first_child_element(void* self) {
    return QDomNode_FirstChildElement((QDomNode*)self);
}

QDomElement* q_domentityreference_last_child_element(void* self) {
    return QDomNode_LastChildElement((QDomNode*)self);
}

QDomElement* q_domentityreference_previous_sibling_element(void* self) {
    return QDomNode_PreviousSiblingElement((QDomNode*)self);
}

QDomElement* q_domentityreference_next_sibling_element(void* self) {
    return QDomNode_NextSiblingElement((QDomNode*)self);
}

int32_t q_domentityreference_line_number(void* self) {
    return QDomNode_LineNumber((QDomNode*)self);
}

int32_t q_domentityreference_column_number(void* self) {
    return QDomNode_ColumnNumber((QDomNode*)self);
}

QDomNode* q_domentityreference_clone_node1(void* self, bool deep) {
    return QDomNode_CloneNode1((QDomNode*)self, deep);
}

void q_domentityreference_save3(void* self, void* param1, int param2, int32_t param3) {
    QDomNode_Save3((QDomNode*)self, (QTextStream*)param1, param2, param3);
}

QDomElement* q_domentityreference_first_child_element1(void* self, const char* tagName) {
    return QDomNode_FirstChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domentityreference_first_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_FirstChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domentityreference_last_child_element1(void* self, const char* tagName) {
    return QDomNode_LastChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domentityreference_last_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_LastChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domentityreference_previous_sibling_element1(void* self, const char* tagName) {
    return QDomNode_PreviousSiblingElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domentityreference_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_PreviousSiblingElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domentityreference_next_sibling_element1(void* self, const char* taName) {
    return QDomNode_NextSiblingElement1((QDomNode*)self, qstring(taName));
}

QDomElement* q_domentityreference_next_sibling_element2(void* self, const char* taName, const char* namespaceURI) {
    return QDomNode_NextSiblingElement2((QDomNode*)self, qstring(taName), qstring(namespaceURI));
}

void q_domentityreference_delete(void* self) {
    QDomEntityReference_Delete((QDomEntityReference*)(self));
}

QDomProcessingInstruction* q_domprocessinginstruction_new() {
    return QDomProcessingInstruction_new();
}

QDomProcessingInstruction* q_domprocessinginstruction_new2(void* processingInstruction) {
    return QDomProcessingInstruction_new2((QDomProcessingInstruction*)processingInstruction);
}

void q_domprocessinginstruction_operator_assign(void* self, void* other) {
    QDomProcessingInstruction_OperatorAssign((QDomProcessingInstruction*)self, (QDomProcessingInstruction*)other);
}

const char* q_domprocessinginstruction_target(void* self) {
    libqt_string _str = QDomProcessingInstruction_Target((QDomProcessingInstruction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domprocessinginstruction_data(void* self) {
    libqt_string _str = QDomProcessingInstruction_Data((QDomProcessingInstruction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domprocessinginstruction_set_data(void* self, const char* data) {
    QDomProcessingInstruction_SetData((QDomProcessingInstruction*)self, qstring(data));
}

int32_t q_domprocessinginstruction_node_type(void* self) {
    return QDomProcessingInstruction_NodeType((QDomProcessingInstruction*)self);
}

bool q_domprocessinginstruction_operator_equal(void* self, void* other) {
    return QDomNode_OperatorEqual((QDomNode*)self, (QDomNode*)other);
}

bool q_domprocessinginstruction_operator_not_equal(void* self, void* other) {
    return QDomNode_OperatorNotEqual((QDomNode*)self, (QDomNode*)other);
}

QDomNode* q_domprocessinginstruction_insert_before(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertBefore((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domprocessinginstruction_insert_after(void* self, void* newChild, void* refChild) {
    return QDomNode_InsertAfter((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)refChild);
}

QDomNode* q_domprocessinginstruction_replace_child(void* self, void* newChild, void* oldChild) {
    return QDomNode_ReplaceChild((QDomNode*)self, (QDomNode*)newChild, (QDomNode*)oldChild);
}

QDomNode* q_domprocessinginstruction_remove_child(void* self, void* oldChild) {
    return QDomNode_RemoveChild((QDomNode*)self, (QDomNode*)oldChild);
}

QDomNode* q_domprocessinginstruction_append_child(void* self, void* newChild) {
    return QDomNode_AppendChild((QDomNode*)self, (QDomNode*)newChild);
}

bool q_domprocessinginstruction_has_child_nodes(void* self) {
    return QDomNode_HasChildNodes((QDomNode*)self);
}

QDomNode* q_domprocessinginstruction_clone_node(void* self) {
    return QDomNode_CloneNode((QDomNode*)self);
}

void q_domprocessinginstruction_normalize(void* self) {
    QDomNode_Normalize((QDomNode*)self);
}

bool q_domprocessinginstruction_is_supported(void* self, const char* feature, const char* version) {
    return QDomNode_IsSupported((QDomNode*)self, qstring(feature), qstring(version));
}

const char* q_domprocessinginstruction_node_name(void* self) {
    libqt_string _str = QDomNode_NodeName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomNode* q_domprocessinginstruction_parent_node(void* self) {
    return QDomNode_ParentNode((QDomNode*)self);
}

QDomNodeList* q_domprocessinginstruction_child_nodes(void* self) {
    return QDomNode_ChildNodes((QDomNode*)self);
}

QDomNode* q_domprocessinginstruction_first_child(void* self) {
    return QDomNode_FirstChild((QDomNode*)self);
}

QDomNode* q_domprocessinginstruction_last_child(void* self) {
    return QDomNode_LastChild((QDomNode*)self);
}

QDomNode* q_domprocessinginstruction_previous_sibling(void* self) {
    return QDomNode_PreviousSibling((QDomNode*)self);
}

QDomNode* q_domprocessinginstruction_next_sibling(void* self) {
    return QDomNode_NextSibling((QDomNode*)self);
}

QDomNamedNodeMap* q_domprocessinginstruction_attributes(void* self) {
    return QDomNode_Attributes((QDomNode*)self);
}

QDomDocument* q_domprocessinginstruction_owner_document(void* self) {
    return QDomNode_OwnerDocument((QDomNode*)self);
}

const char* q_domprocessinginstruction_namespace_u_r_i(void* self) {
    libqt_string _str = QDomNode_NamespaceURI((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_domprocessinginstruction_local_name(void* self) {
    libqt_string _str = QDomNode_LocalName((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_domprocessinginstruction_has_attributes(void* self) {
    return QDomNode_HasAttributes((QDomNode*)self);
}

const char* q_domprocessinginstruction_node_value(void* self) {
    libqt_string _str = QDomNode_NodeValue((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domprocessinginstruction_set_node_value(void* self, const char* value) {
    QDomNode_SetNodeValue((QDomNode*)self, qstring(value));
}

const char* q_domprocessinginstruction_prefix(void* self) {
    libqt_string _str = QDomNode_Prefix((QDomNode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_domprocessinginstruction_set_prefix(void* self, const char* pre) {
    QDomNode_SetPrefix((QDomNode*)self, qstring(pre));
}

bool q_domprocessinginstruction_is_attr(void* self) {
    return QDomNode_IsAttr((QDomNode*)self);
}

bool q_domprocessinginstruction_is_c_d_a_t_a_section(void* self) {
    return QDomNode_IsCDATASection((QDomNode*)self);
}

bool q_domprocessinginstruction_is_document_fragment(void* self) {
    return QDomNode_IsDocumentFragment((QDomNode*)self);
}

bool q_domprocessinginstruction_is_document(void* self) {
    return QDomNode_IsDocument((QDomNode*)self);
}

bool q_domprocessinginstruction_is_document_type(void* self) {
    return QDomNode_IsDocumentType((QDomNode*)self);
}

bool q_domprocessinginstruction_is_element(void* self) {
    return QDomNode_IsElement((QDomNode*)self);
}

bool q_domprocessinginstruction_is_entity_reference(void* self) {
    return QDomNode_IsEntityReference((QDomNode*)self);
}

bool q_domprocessinginstruction_is_text(void* self) {
    return QDomNode_IsText((QDomNode*)self);
}

bool q_domprocessinginstruction_is_entity(void* self) {
    return QDomNode_IsEntity((QDomNode*)self);
}

bool q_domprocessinginstruction_is_notation(void* self) {
    return QDomNode_IsNotation((QDomNode*)self);
}

bool q_domprocessinginstruction_is_processing_instruction(void* self) {
    return QDomNode_IsProcessingInstruction((QDomNode*)self);
}

bool q_domprocessinginstruction_is_character_data(void* self) {
    return QDomNode_IsCharacterData((QDomNode*)self);
}

bool q_domprocessinginstruction_is_comment(void* self) {
    return QDomNode_IsComment((QDomNode*)self);
}

QDomNode* q_domprocessinginstruction_named_item(void* self, const char* name) {
    return QDomNode_NamedItem((QDomNode*)self, qstring(name));
}

bool q_domprocessinginstruction_is_null(void* self) {
    return QDomNode_IsNull((QDomNode*)self);
}

void q_domprocessinginstruction_clear(void* self) {
    QDomNode_Clear((QDomNode*)self);
}

QDomAttr* q_domprocessinginstruction_to_attr(void* self) {
    return QDomNode_ToAttr((QDomNode*)self);
}

QDomCDATASection* q_domprocessinginstruction_to_c_d_a_t_a_section(void* self) {
    return QDomNode_ToCDATASection((QDomNode*)self);
}

QDomDocumentFragment* q_domprocessinginstruction_to_document_fragment(void* self) {
    return QDomNode_ToDocumentFragment((QDomNode*)self);
}

QDomDocument* q_domprocessinginstruction_to_document(void* self) {
    return QDomNode_ToDocument((QDomNode*)self);
}

QDomDocumentType* q_domprocessinginstruction_to_document_type(void* self) {
    return QDomNode_ToDocumentType((QDomNode*)self);
}

QDomElement* q_domprocessinginstruction_to_element(void* self) {
    return QDomNode_ToElement((QDomNode*)self);
}

QDomEntityReference* q_domprocessinginstruction_to_entity_reference(void* self) {
    return QDomNode_ToEntityReference((QDomNode*)self);
}

QDomText* q_domprocessinginstruction_to_text(void* self) {
    return QDomNode_ToText((QDomNode*)self);
}

QDomEntity* q_domprocessinginstruction_to_entity(void* self) {
    return QDomNode_ToEntity((QDomNode*)self);
}

QDomNotation* q_domprocessinginstruction_to_notation(void* self) {
    return QDomNode_ToNotation((QDomNode*)self);
}

QDomProcessingInstruction* q_domprocessinginstruction_to_processing_instruction(void* self) {
    return QDomNode_ToProcessingInstruction((QDomNode*)self);
}

QDomCharacterData* q_domprocessinginstruction_to_character_data(void* self) {
    return QDomNode_ToCharacterData((QDomNode*)self);
}

QDomComment* q_domprocessinginstruction_to_comment(void* self) {
    return QDomNode_ToComment((QDomNode*)self);
}

void q_domprocessinginstruction_save(void* self, void* param1, int param2) {
    QDomNode_Save((QDomNode*)self, (QTextStream*)param1, param2);
}

QDomElement* q_domprocessinginstruction_first_child_element(void* self) {
    return QDomNode_FirstChildElement((QDomNode*)self);
}

QDomElement* q_domprocessinginstruction_last_child_element(void* self) {
    return QDomNode_LastChildElement((QDomNode*)self);
}

QDomElement* q_domprocessinginstruction_previous_sibling_element(void* self) {
    return QDomNode_PreviousSiblingElement((QDomNode*)self);
}

QDomElement* q_domprocessinginstruction_next_sibling_element(void* self) {
    return QDomNode_NextSiblingElement((QDomNode*)self);
}

int32_t q_domprocessinginstruction_line_number(void* self) {
    return QDomNode_LineNumber((QDomNode*)self);
}

int32_t q_domprocessinginstruction_column_number(void* self) {
    return QDomNode_ColumnNumber((QDomNode*)self);
}

QDomNode* q_domprocessinginstruction_clone_node1(void* self, bool deep) {
    return QDomNode_CloneNode1((QDomNode*)self, deep);
}

void q_domprocessinginstruction_save3(void* self, void* param1, int param2, int32_t param3) {
    QDomNode_Save3((QDomNode*)self, (QTextStream*)param1, param2, param3);
}

QDomElement* q_domprocessinginstruction_first_child_element1(void* self, const char* tagName) {
    return QDomNode_FirstChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domprocessinginstruction_first_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_FirstChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domprocessinginstruction_last_child_element1(void* self, const char* tagName) {
    return QDomNode_LastChildElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domprocessinginstruction_last_child_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_LastChildElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domprocessinginstruction_previous_sibling_element1(void* self, const char* tagName) {
    return QDomNode_PreviousSiblingElement1((QDomNode*)self, qstring(tagName));
}

QDomElement* q_domprocessinginstruction_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI) {
    return QDomNode_PreviousSiblingElement2((QDomNode*)self, qstring(tagName), qstring(namespaceURI));
}

QDomElement* q_domprocessinginstruction_next_sibling_element1(void* self, const char* taName) {
    return QDomNode_NextSiblingElement1((QDomNode*)self, qstring(taName));
}

QDomElement* q_domprocessinginstruction_next_sibling_element2(void* self, const char* taName, const char* namespaceURI) {
    return QDomNode_NextSiblingElement2((QDomNode*)self, qstring(taName), qstring(namespaceURI));
}

void q_domprocessinginstruction_delete(void* self) {
    QDomProcessingInstruction_Delete((QDomProcessingInstruction*)(self));
}

QDomDocument__ParseResult* q_domdocument__parseresult_new(void* param1) {
    return QDomDocument__ParseResult_new((QDomDocument__ParseResult*)param1);
}

const char* q_domdocument__parseresult_error_message(void* self) {
    libqt_string errorMessage_str = QDomDocument__ParseResult_ErrorMessage((QDomDocument__ParseResult*)self);
    char* errorMessage_ret = qstring_to_char(errorMessage_str);
    libqt_string_free(&errorMessage_str);
    return errorMessage_ret;
}

void q_domdocument__parseresult_set_error_message(void* self, const char* errorMessage) {
    QDomDocument__ParseResult_SetErrorMessage((QDomDocument__ParseResult*)self, qstring(errorMessage));
}

int64_t q_domdocument__parseresult_error_line(void* self) {
    return QDomDocument__ParseResult_ErrorLine((QDomDocument__ParseResult*)self);
}

void q_domdocument__parseresult_set_error_line(void* self, int64_t errorLine) {
    QDomDocument__ParseResult_SetErrorLine((QDomDocument__ParseResult*)self, errorLine);
}

int64_t q_domdocument__parseresult_error_column(void* self) {
    return QDomDocument__ParseResult_ErrorColumn((QDomDocument__ParseResult*)self);
}

void q_domdocument__parseresult_set_error_column(void* self, int64_t errorColumn) {
    QDomDocument__ParseResult_SetErrorColumn((QDomDocument__ParseResult*)self, errorColumn);
}

bool q_domdocument__parseresult_to_bool(void* self) {
    return QDomDocument__ParseResult_ToBool((QDomDocument__ParseResult*)self);
}

void q_domdocument__parseresult_operator_assign(void* self, void* param1) {
    QDomDocument__ParseResult_OperatorAssign((QDomDocument__ParseResult*)self, (QDomDocument__ParseResult*)param1);
}

void q_domdocument__parseresult_delete(void* self) {
    QDomDocument__ParseResult_Delete((QDomDocument__ParseResult*)(self));
}
