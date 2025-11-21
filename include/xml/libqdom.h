#pragma once
#ifndef SRC_XML_QT6C_LIBQDOM_H
#define SRC_XML_QT6C_LIBQDOM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qdomimplementation.html

/// q_domimplementation_new constructs a new QDomImplementation object.
///
QDomImplementation* q_domimplementation_new();

/// q_domimplementation_new2 constructs a new QDomImplementation object.
///
/// @param implementation QDomImplementation*
QDomImplementation* q_domimplementation_new2(void* implementation);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#operator-eq)
///
/// @param self QDomImplementation*
/// @param other QDomImplementation*
void q_domimplementation_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#operator-eq-eq)
///
/// @param self QDomImplementation*
/// @param other QDomImplementation*
bool q_domimplementation_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#operator-not-eq)
///
/// @param self QDomImplementation*
/// @param other QDomImplementation*
bool q_domimplementation_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#hasFeature)
///
/// @param self QDomImplementation*
/// @param feature const char*
/// @param version const char*
bool q_domimplementation_has_feature(void* self, const char* feature, const char* version);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#createDocumentType)
///
/// @param self QDomImplementation*
/// @param qName const char*
/// @param publicId const char*
/// @param systemId const char*
QDomDocumentType* q_domimplementation_create_document_type(void* self, const char* qName, const char* publicId, const char* systemId);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#createDocument)
///
/// @param self QDomImplementation*
/// @param nsURI const char*
/// @param qName const char*
/// @param doctype QDomDocumentType*
QDomDocument* q_domimplementation_create_document(void* self, const char* nsURI, const char* qName, void* doctype);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#invalidDataPolicy)
///
///
/// @return enum QDomImplementation__InvalidDataPolicy
int32_t q_domimplementation_invalid_data_policy();

/// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#setInvalidDataPolicy)
///
/// @param policy enum QDomImplementation__InvalidDataPolicy
void q_domimplementation_set_invalid_data_policy(int32_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#isNull)
///
/// @param self QDomImplementation*
bool q_domimplementation_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#dtor.QDomImplementation)
///
/// Delete this object from C++ memory.
///
/// @param self QDomImplementation*
void q_domimplementation_delete(void* self);

/// https://doc.qt.io/qt-6/qdomnode.html

/// q_domnode_new constructs a new QDomNode object.
///
QDomNode* q_domnode_new();

/// q_domnode_new2 constructs a new QDomNode object.
///
/// @param node QDomNode*
QDomNode* q_domnode_new2(void* node);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq)
///
/// @param self QDomNode*
/// @param other QDomNode*
void q_domnode_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self QDomNode*
/// @param other QDomNode*
bool q_domnode_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self QDomNode*
/// @param other QDomNode*
bool q_domnode_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomNode*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domnode_insert_before(void* self, void* newChild, void* refChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomNode*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domnode_insert_after(void* self, void* newChild, void* refChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomNode*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
QDomNode* q_domnode_replace_child(void* self, void* newChild, void* oldChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomNode*
/// @param oldChild QDomNode*
QDomNode* q_domnode_remove_child(void* self, void* oldChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomNode*
/// @param newChild QDomNode*
QDomNode* q_domnode_append_child(void* self, void* newChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self QDomNode*
bool q_domnode_has_child_nodes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomNode*
QDomNode* q_domnode_clone_node(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomNode*
void q_domnode_normalize(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self QDomNode*
/// @param feature const char*
/// @param version const char*
bool q_domnode_is_supported(void* self, const char* feature, const char* version);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomNode*
const char* q_domnode_node_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeType)
///
/// @param self QDomNode*
///
/// @return enum QDomNode__NodeType
int32_t q_domnode_node_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self QDomNode*
QDomNode* q_domnode_parent_node(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self QDomNode*
QDomNodeList* q_domnode_child_nodes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self QDomNode*
QDomNode* q_domnode_first_child(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self QDomNode*
QDomNode* q_domnode_last_child(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self QDomNode*
QDomNode* q_domnode_previous_sibling(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self QDomNode*
QDomNode* q_domnode_next_sibling(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self QDomNode*
QDomNamedNodeMap* q_domnode_attributes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self QDomNode*
QDomDocument* q_domnode_owner_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomNode*
const char* q_domnode_namespace_u_r_i(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomNode*
const char* q_domnode_local_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self QDomNode*
bool q_domnode_has_attributes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomNode*
const char* q_domnode_node_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomNode*
/// @param value const char*
void q_domnode_set_node_value(void* self, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomNode*
const char* q_domnode_prefix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomNode*
/// @param pre const char*
void q_domnode_set_prefix(void* self, const char* pre);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self QDomNode*
bool q_domnode_is_attr(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self QDomNode*
bool q_domnode_is_c_d_a_t_a_section(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self QDomNode*
bool q_domnode_is_document_fragment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self QDomNode*
bool q_domnode_is_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self QDomNode*
bool q_domnode_is_document_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self QDomNode*
bool q_domnode_is_element(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self QDomNode*
bool q_domnode_is_entity_reference(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self QDomNode*
bool q_domnode_is_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self QDomNode*
bool q_domnode_is_entity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self QDomNode*
bool q_domnode_is_notation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self QDomNode*
bool q_domnode_is_processing_instruction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self QDomNode*
bool q_domnode_is_character_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self QDomNode*
bool q_domnode_is_comment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self QDomNode*
/// @param name const char*
QDomNode* q_domnode_named_item(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self QDomNode*
bool q_domnode_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomNode*
void q_domnode_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self QDomNode*
QDomAttr* q_domnode_to_attr(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self QDomNode*
QDomCDATASection* q_domnode_to_c_d_a_t_a_section(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self QDomNode*
QDomDocumentFragment* q_domnode_to_document_fragment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self QDomNode*
QDomDocument* q_domnode_to_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self QDomNode*
QDomDocumentType* q_domnode_to_document_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self QDomNode*
QDomElement* q_domnode_to_element(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self QDomNode*
QDomEntityReference* q_domnode_to_entity_reference(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self QDomNode*
QDomText* q_domnode_to_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self QDomNode*
QDomEntity* q_domnode_to_entity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self QDomNode*
QDomNotation* q_domnode_to_notation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self QDomNode*
QDomProcessingInstruction* q_domnode_to_processing_instruction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self QDomNode*
QDomCharacterData* q_domnode_to_character_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self QDomNode*
QDomComment* q_domnode_to_comment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomNode*
/// @param param1 QTextStream*
/// @param param2 int
void q_domnode_save(void* self, void* param1, int param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomNode*
QDomElement* q_domnode_first_child_element(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomNode*
QDomElement* q_domnode_last_child_element(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomNode*
QDomElement* q_domnode_previous_sibling_element(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomNode*
QDomElement* q_domnode_next_sibling_element(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self QDomNode*
int32_t q_domnode_line_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self QDomNode*
int32_t q_domnode_column_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomNode*
/// @param deep bool
QDomNode* q_domnode_clone_node1(void* self, bool deep);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomNode*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
void q_domnode_save3(void* self, void* param1, int param2, int32_t param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomNode*
/// @param tagName const char*
QDomElement* q_domnode_first_child_element1(void* self, const char* tagName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomNode*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domnode_first_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomNode*
/// @param tagName const char*
QDomElement* q_domnode_last_child_element1(void* self, const char* tagName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomNode*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domnode_last_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomNode*
/// @param tagName const char*
QDomElement* q_domnode_previous_sibling_element1(void* self, const char* tagName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomNode*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domnode_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomNode*
/// @param taName const char*
QDomElement* q_domnode_next_sibling_element1(void* self, const char* taName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomNode*
/// @param taName const char*
/// @param namespaceURI const char*
QDomElement* q_domnode_next_sibling_element2(void* self, const char* taName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#dtor.QDomNode)
///
/// Delete this object from C++ memory.
///
/// @param self QDomNode*
void q_domnode_delete(void* self);

/// https://doc.qt.io/qt-6/qdomnodelist.html

/// q_domnodelist_new constructs a new QDomNodeList object.
///
QDomNodeList* q_domnodelist_new();

/// q_domnodelist_new2 constructs a new QDomNodeList object.
///
/// @param nodeList QDomNodeList*
QDomNodeList* q_domnodelist_new2(void* nodeList);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#operator-eq)
///
/// @param self QDomNodeList*
/// @param other QDomNodeList*
void q_domnodelist_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#operator-eq-eq)
///
/// @param self QDomNodeList*
/// @param other QDomNodeList*
bool q_domnodelist_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#operator-not-eq)
///
/// @param self QDomNodeList*
/// @param other QDomNodeList*
bool q_domnodelist_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#item)
///
/// @param self QDomNodeList*
/// @param index int
QDomNode* q_domnodelist_item(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#at)
///
/// @param self QDomNodeList*
/// @param index int
QDomNode* q_domnodelist_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#length)
///
/// @param self QDomNodeList*
int32_t q_domnodelist_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#count)
///
/// @param self QDomNodeList*
int32_t q_domnodelist_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#size)
///
/// @param self QDomNodeList*
int32_t q_domnodelist_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#isEmpty)
///
/// @param self QDomNodeList*
bool q_domnodelist_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#dtor.QDomNodeList)
///
/// Delete this object from C++ memory.
///
/// @param self QDomNodeList*
void q_domnodelist_delete(void* self);

/// https://doc.qt.io/qt-6/qdomdocumenttype.html

/// q_domdocumenttype_new constructs a new QDomDocumentType object.
///
QDomDocumentType* q_domdocumenttype_new();

/// q_domdocumenttype_new2 constructs a new QDomDocumentType object.
///
/// @param documentType QDomDocumentType*
QDomDocumentType* q_domdocumenttype_new2(void* documentType);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#operator-eq)
///
/// @param self QDomDocumentType*
/// @param other QDomDocumentType*
void q_domdocumenttype_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocumentType*
const char* q_domdocumenttype_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#entities)
///
/// @param self QDomDocumentType*
QDomNamedNodeMap* q_domdocumenttype_entities(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#notations)
///
/// @param self QDomDocumentType*
QDomNamedNodeMap* q_domdocumenttype_notations(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#publicId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocumentType*
const char* q_domdocumenttype_public_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#systemId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocumentType*
const char* q_domdocumenttype_system_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#internalSubset)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocumentType*
const char* q_domdocumenttype_internal_subset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#nodeType)
///
/// @param self QDomDocumentType*
///
/// @return enum QDomNode__NodeType
int32_t q_domdocumenttype_node_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self QDomDocumentType*
/// @param other QDomNode*
bool q_domdocumenttype_operator_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self QDomDocumentType*
/// @param other QDomNode*
bool q_domdocumenttype_operator_not_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomDocumentType*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domdocumenttype_insert_before(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomDocumentType*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domdocumenttype_insert_after(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomDocumentType*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
QDomNode* q_domdocumenttype_replace_child(void* self, void* newChild, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomDocumentType*
/// @param oldChild QDomNode*
QDomNode* q_domdocumenttype_remove_child(void* self, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomDocumentType*
/// @param newChild QDomNode*
QDomNode* q_domdocumenttype_append_child(void* self, void* newChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self QDomDocumentType*
bool q_domdocumenttype_has_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomDocumentType*
QDomNode* q_domdocumenttype_clone_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomDocumentType*
void q_domdocumenttype_normalize(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self QDomDocumentType*
/// @param feature const char*
/// @param version const char*
bool q_domdocumenttype_is_supported(void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocumentType*
const char* q_domdocumenttype_node_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self QDomDocumentType*
QDomNode* q_domdocumenttype_parent_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self QDomDocumentType*
QDomNodeList* q_domdocumenttype_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self QDomDocumentType*
QDomNode* q_domdocumenttype_first_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self QDomDocumentType*
QDomNode* q_domdocumenttype_last_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self QDomDocumentType*
QDomNode* q_domdocumenttype_previous_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self QDomDocumentType*
QDomNode* q_domdocumenttype_next_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self QDomDocumentType*
QDomNamedNodeMap* q_domdocumenttype_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self QDomDocumentType*
QDomDocument* q_domdocumenttype_owner_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocumentType*
const char* q_domdocumenttype_namespace_u_r_i(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocumentType*
const char* q_domdocumenttype_local_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self QDomDocumentType*
bool q_domdocumenttype_has_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocumentType*
const char* q_domdocumenttype_node_value(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomDocumentType*
/// @param value const char*
void q_domdocumenttype_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocumentType*
const char* q_domdocumenttype_prefix(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomDocumentType*
/// @param pre const char*
void q_domdocumenttype_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self QDomDocumentType*
bool q_domdocumenttype_is_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self QDomDocumentType*
bool q_domdocumenttype_is_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self QDomDocumentType*
bool q_domdocumenttype_is_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self QDomDocumentType*
bool q_domdocumenttype_is_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self QDomDocumentType*
bool q_domdocumenttype_is_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self QDomDocumentType*
bool q_domdocumenttype_is_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self QDomDocumentType*
bool q_domdocumenttype_is_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self QDomDocumentType*
bool q_domdocumenttype_is_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self QDomDocumentType*
bool q_domdocumenttype_is_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self QDomDocumentType*
bool q_domdocumenttype_is_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self QDomDocumentType*
bool q_domdocumenttype_is_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self QDomDocumentType*
bool q_domdocumenttype_is_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self QDomDocumentType*
bool q_domdocumenttype_is_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self QDomDocumentType*
/// @param name const char*
QDomNode* q_domdocumenttype_named_item(void* self, const char* name);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self QDomDocumentType*
bool q_domdocumenttype_is_null(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomDocumentType*
void q_domdocumenttype_clear(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self QDomDocumentType*
QDomAttr* q_domdocumenttype_to_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self QDomDocumentType*
QDomCDATASection* q_domdocumenttype_to_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self QDomDocumentType*
QDomDocumentFragment* q_domdocumenttype_to_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self QDomDocumentType*
QDomDocument* q_domdocumenttype_to_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self QDomDocumentType*
QDomDocumentType* q_domdocumenttype_to_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self QDomDocumentType*
QDomElement* q_domdocumenttype_to_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self QDomDocumentType*
QDomEntityReference* q_domdocumenttype_to_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self QDomDocumentType*
QDomText* q_domdocumenttype_to_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self QDomDocumentType*
QDomEntity* q_domdocumenttype_to_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self QDomDocumentType*
QDomNotation* q_domdocumenttype_to_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self QDomDocumentType*
QDomProcessingInstruction* q_domdocumenttype_to_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self QDomDocumentType*
QDomCharacterData* q_domdocumenttype_to_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self QDomDocumentType*
QDomComment* q_domdocumenttype_to_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomDocumentType*
/// @param param1 QTextStream*
/// @param param2 int
void q_domdocumenttype_save(void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomDocumentType*
QDomElement* q_domdocumenttype_first_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomDocumentType*
QDomElement* q_domdocumenttype_last_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomDocumentType*
QDomElement* q_domdocumenttype_previous_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomDocumentType*
QDomElement* q_domdocumenttype_next_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self QDomDocumentType*
int32_t q_domdocumenttype_line_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self QDomDocumentType*
int32_t q_domdocumenttype_column_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomDocumentType*
/// @param deep bool
QDomNode* q_domdocumenttype_clone_node1(void* self, bool deep);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomDocumentType*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
void q_domdocumenttype_save3(void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomDocumentType*
/// @param tagName const char*
QDomElement* q_domdocumenttype_first_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomDocumentType*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domdocumenttype_first_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomDocumentType*
/// @param tagName const char*
QDomElement* q_domdocumenttype_last_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomDocumentType*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domdocumenttype_last_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomDocumentType*
/// @param tagName const char*
QDomElement* q_domdocumenttype_previous_sibling_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomDocumentType*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domdocumenttype_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomDocumentType*
/// @param taName const char*
QDomElement* q_domdocumenttype_next_sibling_element1(void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomDocumentType*
/// @param taName const char*
/// @param namespaceURI const char*
QDomElement* q_domdocumenttype_next_sibling_element2(void* self, const char* taName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#dtor.QDomDocumentType)
///
/// Delete this object from C++ memory.
///
/// @param self QDomDocumentType*
void q_domdocumenttype_delete(void* self);

/// https://doc.qt.io/qt-6/qdomdocument.html

/// q_domdocument_new constructs a new QDomDocument object.
///
QDomDocument* q_domdocument_new();

/// q_domdocument_new2 constructs a new QDomDocument object.
///
/// @param name const char*
QDomDocument* q_domdocument_new2(const char* name);

/// q_domdocument_new3 constructs a new QDomDocument object.
///
/// @param doctype QDomDocumentType*
QDomDocument* q_domdocument_new3(void* doctype);

/// q_domdocument_new4 constructs a new QDomDocument object.
///
/// @param document QDomDocument*
QDomDocument* q_domdocument_new4(void* document);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#operator-eq)
///
/// @param self QDomDocument*
/// @param other QDomDocument*
void q_domdocument_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createElement)
///
/// @param self QDomDocument*
/// @param tagName const char*
QDomElement* q_domdocument_create_element(void* self, const char* tagName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createDocumentFragment)
///
/// @param self QDomDocument*
QDomDocumentFragment* q_domdocument_create_document_fragment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createTextNode)
///
/// @param self QDomDocument*
/// @param data const char*
QDomText* q_domdocument_create_text_node(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createComment)
///
/// @param self QDomDocument*
/// @param data const char*
QDomComment* q_domdocument_create_comment(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createCDATASection)
///
/// @param self QDomDocument*
/// @param data const char*
QDomCDATASection* q_domdocument_create_c_d_a_t_a_section(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createProcessingInstruction)
///
/// @param self QDomDocument*
/// @param target const char*
/// @param data const char*
QDomProcessingInstruction* q_domdocument_create_processing_instruction(void* self, const char* target, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createAttribute)
///
/// @param self QDomDocument*
/// @param name const char*
QDomAttr* q_domdocument_create_attribute(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createEntityReference)
///
/// @param self QDomDocument*
/// @param name const char*
QDomEntityReference* q_domdocument_create_entity_reference(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#elementsByTagName)
///
/// @param self QDomDocument*
/// @param tagname const char*
QDomNodeList* q_domdocument_elements_by_tag_name(void* self, const char* tagname);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#importNode)
///
/// @param self QDomDocument*
/// @param importedNode QDomNode*
/// @param deep bool
QDomNode* q_domdocument_import_node(void* self, void* importedNode, bool deep);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createElementNS)
///
/// @param self QDomDocument*
/// @param nsURI const char*
/// @param qName const char*
QDomElement* q_domdocument_create_element_n_s(void* self, const char* nsURI, const char* qName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createAttributeNS)
///
/// @param self QDomDocument*
/// @param nsURI const char*
/// @param qName const char*
QDomAttr* q_domdocument_create_attribute_n_s(void* self, const char* nsURI, const char* qName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#elementsByTagNameNS)
///
/// @param self QDomDocument*
/// @param nsURI const char*
/// @param localName const char*
QDomNodeList* q_domdocument_elements_by_tag_name_n_s(void* self, const char* nsURI, const char* localName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#elementById)
///
/// @param self QDomDocument*
/// @param elementId const char*
QDomElement* q_domdocument_element_by_id(void* self, const char* elementId);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#doctype)
///
/// @param self QDomDocument*
QDomDocumentType* q_domdocument_doctype(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#implementation)
///
/// @param self QDomDocument*
QDomImplementation* q_domdocument_implementation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#documentElement)
///
/// @param self QDomDocument*
QDomElement* q_domdocument_document_element(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#nodeType)
///
/// @param self QDomDocument*
///
/// @return enum QDomNode__NodeType
int32_t q_domdocument_node_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param text const char*
/// @param namespaceProcessing bool
bool q_domdocument_set_content(void* self, const char* text, bool namespaceProcessing);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param text const char*
/// @param namespaceProcessing bool
bool q_domdocument_set_content2(void* self, const char* text, bool namespaceProcessing);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param dev QIODevice*
/// @param namespaceProcessing bool
bool q_domdocument_set_content3(void* self, void* dev, bool namespaceProcessing);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param reader QXmlStreamReader*
/// @param namespaceProcessing bool
bool q_domdocument_set_content7(void* self, void* reader, bool namespaceProcessing);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param data char*
QDomDocument__ParseResult* q_domdocument_set_content8(void* self, char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param device QIODevice*
QDomDocument__ParseResult* q_domdocument_set_content9(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param reader QXmlStreamReader*
QDomDocument__ParseResult* q_domdocument_set_content10(void* self, void* reader);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocument*
const char* q_domdocument_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#toByteArray)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocument*
char* q_domdocument_to_byte_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param data char*
/// @param options flag of enum QDomDocument__ParseOption
QDomDocument__ParseResult* q_domdocument_set_content22(void* self, char* data, int32_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param device QIODevice*
/// @param options flag of enum QDomDocument__ParseOption
QDomDocument__ParseResult* q_domdocument_set_content23(void* self, void* device, int32_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param reader QXmlStreamReader*
/// @param options flag of enum QDomDocument__ParseOption
QDomDocument__ParseResult* q_domdocument_set_content24(void* self, void* reader, int32_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocument*
/// @param indent int
const char* q_domdocument_to_string1(void* self, int indent);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#toByteArray)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocument*
/// @param indent int
char* q_domdocument_to_byte_array1(void* self, int indent);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self QDomDocument*
/// @param other QDomNode*
bool q_domdocument_operator_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self QDomDocument*
/// @param other QDomNode*
bool q_domdocument_operator_not_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomDocument*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domdocument_insert_before(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomDocument*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domdocument_insert_after(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomDocument*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
QDomNode* q_domdocument_replace_child(void* self, void* newChild, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomDocument*
/// @param oldChild QDomNode*
QDomNode* q_domdocument_remove_child(void* self, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomDocument*
/// @param newChild QDomNode*
QDomNode* q_domdocument_append_child(void* self, void* newChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self QDomDocument*
bool q_domdocument_has_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomDocument*
QDomNode* q_domdocument_clone_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomDocument*
void q_domdocument_normalize(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self QDomDocument*
/// @param feature const char*
/// @param version const char*
bool q_domdocument_is_supported(void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocument*
const char* q_domdocument_node_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self QDomDocument*
QDomNode* q_domdocument_parent_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self QDomDocument*
QDomNodeList* q_domdocument_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self QDomDocument*
QDomNode* q_domdocument_first_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self QDomDocument*
QDomNode* q_domdocument_last_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self QDomDocument*
QDomNode* q_domdocument_previous_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self QDomDocument*
QDomNode* q_domdocument_next_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self QDomDocument*
QDomNamedNodeMap* q_domdocument_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self QDomDocument*
QDomDocument* q_domdocument_owner_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocument*
const char* q_domdocument_namespace_u_r_i(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocument*
const char* q_domdocument_local_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self QDomDocument*
bool q_domdocument_has_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocument*
const char* q_domdocument_node_value(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomDocument*
/// @param value const char*
void q_domdocument_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocument*
const char* q_domdocument_prefix(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomDocument*
/// @param pre const char*
void q_domdocument_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self QDomDocument*
bool q_domdocument_is_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self QDomDocument*
bool q_domdocument_is_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self QDomDocument*
bool q_domdocument_is_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self QDomDocument*
bool q_domdocument_is_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self QDomDocument*
bool q_domdocument_is_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self QDomDocument*
bool q_domdocument_is_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self QDomDocument*
bool q_domdocument_is_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self QDomDocument*
bool q_domdocument_is_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self QDomDocument*
bool q_domdocument_is_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self QDomDocument*
bool q_domdocument_is_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self QDomDocument*
bool q_domdocument_is_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self QDomDocument*
bool q_domdocument_is_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self QDomDocument*
bool q_domdocument_is_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self QDomDocument*
/// @param name const char*
QDomNode* q_domdocument_named_item(void* self, const char* name);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self QDomDocument*
bool q_domdocument_is_null(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomDocument*
void q_domdocument_clear(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self QDomDocument*
QDomAttr* q_domdocument_to_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self QDomDocument*
QDomCDATASection* q_domdocument_to_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self QDomDocument*
QDomDocumentFragment* q_domdocument_to_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self QDomDocument*
QDomDocument* q_domdocument_to_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self QDomDocument*
QDomDocumentType* q_domdocument_to_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self QDomDocument*
QDomElement* q_domdocument_to_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self QDomDocument*
QDomEntityReference* q_domdocument_to_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self QDomDocument*
QDomText* q_domdocument_to_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self QDomDocument*
QDomEntity* q_domdocument_to_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self QDomDocument*
QDomNotation* q_domdocument_to_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self QDomDocument*
QDomProcessingInstruction* q_domdocument_to_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self QDomDocument*
QDomCharacterData* q_domdocument_to_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self QDomDocument*
QDomComment* q_domdocument_to_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomDocument*
/// @param param1 QTextStream*
/// @param param2 int
void q_domdocument_save(void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomDocument*
QDomElement* q_domdocument_first_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomDocument*
QDomElement* q_domdocument_last_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomDocument*
QDomElement* q_domdocument_previous_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomDocument*
QDomElement* q_domdocument_next_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self QDomDocument*
int32_t q_domdocument_line_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self QDomDocument*
int32_t q_domdocument_column_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomDocument*
/// @param deep bool
QDomNode* q_domdocument_clone_node1(void* self, bool deep);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomDocument*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
void q_domdocument_save3(void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomDocument*
/// @param tagName const char*
QDomElement* q_domdocument_first_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomDocument*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domdocument_first_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomDocument*
/// @param tagName const char*
QDomElement* q_domdocument_last_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomDocument*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domdocument_last_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomDocument*
/// @param tagName const char*
QDomElement* q_domdocument_previous_sibling_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomDocument*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domdocument_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomDocument*
/// @param taName const char*
QDomElement* q_domdocument_next_sibling_element1(void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomDocument*
/// @param taName const char*
/// @param namespaceURI const char*
QDomElement* q_domdocument_next_sibling_element2(void* self, const char* taName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#dtor.QDomDocument)
///
/// Delete this object from C++ memory.
///
/// @param self QDomDocument*
void q_domdocument_delete(void* self);

/// https://doc.qt.io/qt-6/qdomnamednodemap.html

/// q_domnamednodemap_new constructs a new QDomNamedNodeMap object.
///
QDomNamedNodeMap* q_domnamednodemap_new();

/// q_domnamednodemap_new2 constructs a new QDomNamedNodeMap object.
///
/// @param namedNodeMap QDomNamedNodeMap*
QDomNamedNodeMap* q_domnamednodemap_new2(void* namedNodeMap);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-eq)
///
/// @param self QDomNamedNodeMap*
/// @param other QDomNamedNodeMap*
void q_domnamednodemap_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-eq-eq)
///
/// @param self QDomNamedNodeMap*
/// @param other QDomNamedNodeMap*
bool q_domnamednodemap_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-not-eq)
///
/// @param self QDomNamedNodeMap*
/// @param other QDomNamedNodeMap*
bool q_domnamednodemap_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#namedItem)
///
/// @param self QDomNamedNodeMap*
/// @param name const char*
QDomNode* q_domnamednodemap_named_item(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#setNamedItem)
///
/// @param self QDomNamedNodeMap*
/// @param newNode QDomNode*
QDomNode* q_domnamednodemap_set_named_item(void* self, void* newNode);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#removeNamedItem)
///
/// @param self QDomNamedNodeMap*
/// @param name const char*
QDomNode* q_domnamednodemap_remove_named_item(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#item)
///
/// @param self QDomNamedNodeMap*
/// @param index int
QDomNode* q_domnamednodemap_item(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#namedItemNS)
///
/// @param self QDomNamedNodeMap*
/// @param nsURI const char*
/// @param localName const char*
QDomNode* q_domnamednodemap_named_item_n_s(void* self, const char* nsURI, const char* localName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#setNamedItemNS)
///
/// @param self QDomNamedNodeMap*
/// @param newNode QDomNode*
QDomNode* q_domnamednodemap_set_named_item_n_s(void* self, void* newNode);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#removeNamedItemNS)
///
/// @param self QDomNamedNodeMap*
/// @param nsURI const char*
/// @param localName const char*
QDomNode* q_domnamednodemap_remove_named_item_n_s(void* self, const char* nsURI, const char* localName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#length)
///
/// @param self QDomNamedNodeMap*
int32_t q_domnamednodemap_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#count)
///
/// @param self QDomNamedNodeMap*
int32_t q_domnamednodemap_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#size)
///
/// @param self QDomNamedNodeMap*
int32_t q_domnamednodemap_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#isEmpty)
///
/// @param self QDomNamedNodeMap*
bool q_domnamednodemap_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#contains)
///
/// @param self QDomNamedNodeMap*
/// @param name const char*
bool q_domnamednodemap_contains(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#dtor.QDomNamedNodeMap)
///
/// Delete this object from C++ memory.
///
/// @param self QDomNamedNodeMap*
void q_domnamednodemap_delete(void* self);

/// https://doc.qt.io/qt-6/qdomdocumentfragment.html

/// q_domdocumentfragment_new constructs a new QDomDocumentFragment object.
///
QDomDocumentFragment* q_domdocumentfragment_new();

/// q_domdocumentfragment_new2 constructs a new QDomDocumentFragment object.
///
/// @param documentFragment QDomDocumentFragment*
QDomDocumentFragment* q_domdocumentfragment_new2(void* documentFragment);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumentfragment.html#operator-eq)
///
/// @param self QDomDocumentFragment*
/// @param other QDomDocumentFragment*
void q_domdocumentfragment_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumentfragment.html#nodeType)
///
/// @param self QDomDocumentFragment*
///
/// @return enum QDomNode__NodeType
int32_t q_domdocumentfragment_node_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self QDomDocumentFragment*
/// @param other QDomNode*
bool q_domdocumentfragment_operator_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self QDomDocumentFragment*
/// @param other QDomNode*
bool q_domdocumentfragment_operator_not_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomDocumentFragment*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domdocumentfragment_insert_before(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomDocumentFragment*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domdocumentfragment_insert_after(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomDocumentFragment*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
QDomNode* q_domdocumentfragment_replace_child(void* self, void* newChild, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomDocumentFragment*
/// @param oldChild QDomNode*
QDomNode* q_domdocumentfragment_remove_child(void* self, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomDocumentFragment*
/// @param newChild QDomNode*
QDomNode* q_domdocumentfragment_append_child(void* self, void* newChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self QDomDocumentFragment*
bool q_domdocumentfragment_has_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomDocumentFragment*
QDomNode* q_domdocumentfragment_clone_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomDocumentFragment*
void q_domdocumentfragment_normalize(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self QDomDocumentFragment*
/// @param feature const char*
/// @param version const char*
bool q_domdocumentfragment_is_supported(void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocumentFragment*
const char* q_domdocumentfragment_node_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self QDomDocumentFragment*
QDomNode* q_domdocumentfragment_parent_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self QDomDocumentFragment*
QDomNodeList* q_domdocumentfragment_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self QDomDocumentFragment*
QDomNode* q_domdocumentfragment_first_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self QDomDocumentFragment*
QDomNode* q_domdocumentfragment_last_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self QDomDocumentFragment*
QDomNode* q_domdocumentfragment_previous_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self QDomDocumentFragment*
QDomNode* q_domdocumentfragment_next_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self QDomDocumentFragment*
QDomNamedNodeMap* q_domdocumentfragment_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self QDomDocumentFragment*
QDomDocument* q_domdocumentfragment_owner_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocumentFragment*
const char* q_domdocumentfragment_namespace_u_r_i(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocumentFragment*
const char* q_domdocumentfragment_local_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self QDomDocumentFragment*
bool q_domdocumentfragment_has_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocumentFragment*
const char* q_domdocumentfragment_node_value(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomDocumentFragment*
/// @param value const char*
void q_domdocumentfragment_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocumentFragment*
const char* q_domdocumentfragment_prefix(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomDocumentFragment*
/// @param pre const char*
void q_domdocumentfragment_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self QDomDocumentFragment*
bool q_domdocumentfragment_is_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self QDomDocumentFragment*
bool q_domdocumentfragment_is_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self QDomDocumentFragment*
bool q_domdocumentfragment_is_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self QDomDocumentFragment*
bool q_domdocumentfragment_is_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self QDomDocumentFragment*
bool q_domdocumentfragment_is_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self QDomDocumentFragment*
bool q_domdocumentfragment_is_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self QDomDocumentFragment*
bool q_domdocumentfragment_is_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self QDomDocumentFragment*
bool q_domdocumentfragment_is_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self QDomDocumentFragment*
bool q_domdocumentfragment_is_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self QDomDocumentFragment*
bool q_domdocumentfragment_is_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self QDomDocumentFragment*
bool q_domdocumentfragment_is_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self QDomDocumentFragment*
bool q_domdocumentfragment_is_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self QDomDocumentFragment*
bool q_domdocumentfragment_is_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self QDomDocumentFragment*
/// @param name const char*
QDomNode* q_domdocumentfragment_named_item(void* self, const char* name);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self QDomDocumentFragment*
bool q_domdocumentfragment_is_null(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomDocumentFragment*
void q_domdocumentfragment_clear(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self QDomDocumentFragment*
QDomAttr* q_domdocumentfragment_to_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self QDomDocumentFragment*
QDomCDATASection* q_domdocumentfragment_to_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self QDomDocumentFragment*
QDomDocumentFragment* q_domdocumentfragment_to_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self QDomDocumentFragment*
QDomDocument* q_domdocumentfragment_to_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self QDomDocumentFragment*
QDomDocumentType* q_domdocumentfragment_to_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self QDomDocumentFragment*
QDomElement* q_domdocumentfragment_to_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self QDomDocumentFragment*
QDomEntityReference* q_domdocumentfragment_to_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self QDomDocumentFragment*
QDomText* q_domdocumentfragment_to_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self QDomDocumentFragment*
QDomEntity* q_domdocumentfragment_to_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self QDomDocumentFragment*
QDomNotation* q_domdocumentfragment_to_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self QDomDocumentFragment*
QDomProcessingInstruction* q_domdocumentfragment_to_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self QDomDocumentFragment*
QDomCharacterData* q_domdocumentfragment_to_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self QDomDocumentFragment*
QDomComment* q_domdocumentfragment_to_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomDocumentFragment*
/// @param param1 QTextStream*
/// @param param2 int
void q_domdocumentfragment_save(void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomDocumentFragment*
QDomElement* q_domdocumentfragment_first_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomDocumentFragment*
QDomElement* q_domdocumentfragment_last_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomDocumentFragment*
QDomElement* q_domdocumentfragment_previous_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomDocumentFragment*
QDomElement* q_domdocumentfragment_next_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self QDomDocumentFragment*
int32_t q_domdocumentfragment_line_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self QDomDocumentFragment*
int32_t q_domdocumentfragment_column_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomDocumentFragment*
/// @param deep bool
QDomNode* q_domdocumentfragment_clone_node1(void* self, bool deep);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomDocumentFragment*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
void q_domdocumentfragment_save3(void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomDocumentFragment*
/// @param tagName const char*
QDomElement* q_domdocumentfragment_first_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomDocumentFragment*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domdocumentfragment_first_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomDocumentFragment*
/// @param tagName const char*
QDomElement* q_domdocumentfragment_last_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomDocumentFragment*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domdocumentfragment_last_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomDocumentFragment*
/// @param tagName const char*
QDomElement* q_domdocumentfragment_previous_sibling_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomDocumentFragment*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domdocumentfragment_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomDocumentFragment*
/// @param taName const char*
QDomElement* q_domdocumentfragment_next_sibling_element1(void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomDocumentFragment*
/// @param taName const char*
/// @param namespaceURI const char*
QDomElement* q_domdocumentfragment_next_sibling_element2(void* self, const char* taName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumentfragment.html#dtor.QDomDocumentFragment)
///
/// Delete this object from C++ memory.
///
/// @param self QDomDocumentFragment*
void q_domdocumentfragment_delete(void* self);

/// https://doc.qt.io/qt-6/qdomcharacterdata.html

/// q_domcharacterdata_new constructs a new QDomCharacterData object.
///
QDomCharacterData* q_domcharacterdata_new();

/// q_domcharacterdata_new2 constructs a new QDomCharacterData object.
///
/// @param characterData QDomCharacterData*
QDomCharacterData* q_domcharacterdata_new2(void* characterData);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#operator-eq)
///
/// @param self QDomCharacterData*
/// @param other QDomCharacterData*
void q_domcharacterdata_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomCharacterData*
/// @param offset uint64_t
/// @param count uint64_t
const char* q_domcharacterdata_substring_data(void* self, uint64_t offset, uint64_t count);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
///
/// @param self QDomCharacterData*
/// @param arg const char*
void q_domcharacterdata_append_data(void* self, const char* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
///
/// @param self QDomCharacterData*
/// @param offset uint64_t
/// @param arg const char*
void q_domcharacterdata_insert_data(void* self, uint64_t offset, const char* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
///
/// @param self QDomCharacterData*
/// @param offset uint64_t
/// @param count uint64_t
void q_domcharacterdata_delete_data(void* self, uint64_t offset, uint64_t count);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
///
/// @param self QDomCharacterData*
/// @param offset uint64_t
/// @param count uint64_t
/// @param arg const char*
void q_domcharacterdata_replace_data(void* self, uint64_t offset, uint64_t count, const char* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
///
/// @param self QDomCharacterData*
int32_t q_domcharacterdata_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomCharacterData*
const char* q_domcharacterdata_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
///
/// @param self QDomCharacterData*
/// @param data const char*
void q_domcharacterdata_set_data(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#nodeType)
///
/// @param self QDomCharacterData*
///
/// @return enum QDomNode__NodeType
int32_t q_domcharacterdata_node_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self QDomCharacterData*
/// @param other QDomNode*
bool q_domcharacterdata_operator_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self QDomCharacterData*
/// @param other QDomNode*
bool q_domcharacterdata_operator_not_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomCharacterData*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domcharacterdata_insert_before(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomCharacterData*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domcharacterdata_insert_after(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomCharacterData*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
QDomNode* q_domcharacterdata_replace_child(void* self, void* newChild, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomCharacterData*
/// @param oldChild QDomNode*
QDomNode* q_domcharacterdata_remove_child(void* self, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomCharacterData*
/// @param newChild QDomNode*
QDomNode* q_domcharacterdata_append_child(void* self, void* newChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self QDomCharacterData*
bool q_domcharacterdata_has_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomCharacterData*
QDomNode* q_domcharacterdata_clone_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomCharacterData*
void q_domcharacterdata_normalize(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self QDomCharacterData*
/// @param feature const char*
/// @param version const char*
bool q_domcharacterdata_is_supported(void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomCharacterData*
const char* q_domcharacterdata_node_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self QDomCharacterData*
QDomNode* q_domcharacterdata_parent_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self QDomCharacterData*
QDomNodeList* q_domcharacterdata_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self QDomCharacterData*
QDomNode* q_domcharacterdata_first_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self QDomCharacterData*
QDomNode* q_domcharacterdata_last_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self QDomCharacterData*
QDomNode* q_domcharacterdata_previous_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self QDomCharacterData*
QDomNode* q_domcharacterdata_next_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self QDomCharacterData*
QDomNamedNodeMap* q_domcharacterdata_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self QDomCharacterData*
QDomDocument* q_domcharacterdata_owner_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomCharacterData*
const char* q_domcharacterdata_namespace_u_r_i(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomCharacterData*
const char* q_domcharacterdata_local_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self QDomCharacterData*
bool q_domcharacterdata_has_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomCharacterData*
const char* q_domcharacterdata_node_value(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomCharacterData*
/// @param value const char*
void q_domcharacterdata_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomCharacterData*
const char* q_domcharacterdata_prefix(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomCharacterData*
/// @param pre const char*
void q_domcharacterdata_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self QDomCharacterData*
bool q_domcharacterdata_is_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self QDomCharacterData*
bool q_domcharacterdata_is_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self QDomCharacterData*
bool q_domcharacterdata_is_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self QDomCharacterData*
bool q_domcharacterdata_is_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self QDomCharacterData*
bool q_domcharacterdata_is_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self QDomCharacterData*
bool q_domcharacterdata_is_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self QDomCharacterData*
bool q_domcharacterdata_is_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self QDomCharacterData*
bool q_domcharacterdata_is_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self QDomCharacterData*
bool q_domcharacterdata_is_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self QDomCharacterData*
bool q_domcharacterdata_is_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self QDomCharacterData*
bool q_domcharacterdata_is_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self QDomCharacterData*
bool q_domcharacterdata_is_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self QDomCharacterData*
bool q_domcharacterdata_is_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self QDomCharacterData*
/// @param name const char*
QDomNode* q_domcharacterdata_named_item(void* self, const char* name);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self QDomCharacterData*
bool q_domcharacterdata_is_null(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomCharacterData*
void q_domcharacterdata_clear(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self QDomCharacterData*
QDomAttr* q_domcharacterdata_to_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self QDomCharacterData*
QDomCDATASection* q_domcharacterdata_to_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self QDomCharacterData*
QDomDocumentFragment* q_domcharacterdata_to_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self QDomCharacterData*
QDomDocument* q_domcharacterdata_to_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self QDomCharacterData*
QDomDocumentType* q_domcharacterdata_to_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self QDomCharacterData*
QDomElement* q_domcharacterdata_to_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self QDomCharacterData*
QDomEntityReference* q_domcharacterdata_to_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self QDomCharacterData*
QDomText* q_domcharacterdata_to_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self QDomCharacterData*
QDomEntity* q_domcharacterdata_to_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self QDomCharacterData*
QDomNotation* q_domcharacterdata_to_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self QDomCharacterData*
QDomProcessingInstruction* q_domcharacterdata_to_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self QDomCharacterData*
QDomCharacterData* q_domcharacterdata_to_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self QDomCharacterData*
QDomComment* q_domcharacterdata_to_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomCharacterData*
/// @param param1 QTextStream*
/// @param param2 int
void q_domcharacterdata_save(void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomCharacterData*
QDomElement* q_domcharacterdata_first_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomCharacterData*
QDomElement* q_domcharacterdata_last_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomCharacterData*
QDomElement* q_domcharacterdata_previous_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomCharacterData*
QDomElement* q_domcharacterdata_next_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self QDomCharacterData*
int32_t q_domcharacterdata_line_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self QDomCharacterData*
int32_t q_domcharacterdata_column_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomCharacterData*
/// @param deep bool
QDomNode* q_domcharacterdata_clone_node1(void* self, bool deep);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomCharacterData*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
void q_domcharacterdata_save3(void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomCharacterData*
/// @param tagName const char*
QDomElement* q_domcharacterdata_first_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomCharacterData*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domcharacterdata_first_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomCharacterData*
/// @param tagName const char*
QDomElement* q_domcharacterdata_last_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomCharacterData*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domcharacterdata_last_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomCharacterData*
/// @param tagName const char*
QDomElement* q_domcharacterdata_previous_sibling_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomCharacterData*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domcharacterdata_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomCharacterData*
/// @param taName const char*
QDomElement* q_domcharacterdata_next_sibling_element1(void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomCharacterData*
/// @param taName const char*
/// @param namespaceURI const char*
QDomElement* q_domcharacterdata_next_sibling_element2(void* self, const char* taName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#dtor.QDomCharacterData)
///
/// Delete this object from C++ memory.
///
/// @param self QDomCharacterData*
void q_domcharacterdata_delete(void* self);

/// https://doc.qt.io/qt-6/qdomattr.html

/// q_domattr_new constructs a new QDomAttr object.
///
QDomAttr* q_domattr_new();

/// q_domattr_new2 constructs a new QDomAttr object.
///
/// @param attr QDomAttr*
QDomAttr* q_domattr_new2(void* attr);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomattr.html#operator-eq)
///
/// @param self QDomAttr*
/// @param other QDomAttr*
void q_domattr_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomattr.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomAttr*
const char* q_domattr_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomattr.html#specified)
///
/// @param self QDomAttr*
bool q_domattr_specified(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomattr.html#ownerElement)
///
/// @param self QDomAttr*
QDomElement* q_domattr_owner_element(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomattr.html#value)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomAttr*
const char* q_domattr_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomattr.html#setValue)
///
/// @param self QDomAttr*
/// @param value const char*
void q_domattr_set_value(void* self, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomattr.html#nodeType)
///
/// @param self QDomAttr*
///
/// @return enum QDomNode__NodeType
int32_t q_domattr_node_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self QDomAttr*
/// @param other QDomNode*
bool q_domattr_operator_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self QDomAttr*
/// @param other QDomNode*
bool q_domattr_operator_not_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomAttr*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domattr_insert_before(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomAttr*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domattr_insert_after(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomAttr*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
QDomNode* q_domattr_replace_child(void* self, void* newChild, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomAttr*
/// @param oldChild QDomNode*
QDomNode* q_domattr_remove_child(void* self, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomAttr*
/// @param newChild QDomNode*
QDomNode* q_domattr_append_child(void* self, void* newChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self QDomAttr*
bool q_domattr_has_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomAttr*
QDomNode* q_domattr_clone_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomAttr*
void q_domattr_normalize(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self QDomAttr*
/// @param feature const char*
/// @param version const char*
bool q_domattr_is_supported(void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomAttr*
const char* q_domattr_node_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self QDomAttr*
QDomNode* q_domattr_parent_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self QDomAttr*
QDomNodeList* q_domattr_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self QDomAttr*
QDomNode* q_domattr_first_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self QDomAttr*
QDomNode* q_domattr_last_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self QDomAttr*
QDomNode* q_domattr_previous_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self QDomAttr*
QDomNode* q_domattr_next_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self QDomAttr*
QDomNamedNodeMap* q_domattr_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self QDomAttr*
QDomDocument* q_domattr_owner_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomAttr*
const char* q_domattr_namespace_u_r_i(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomAttr*
const char* q_domattr_local_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self QDomAttr*
bool q_domattr_has_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomAttr*
const char* q_domattr_node_value(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomAttr*
/// @param value const char*
void q_domattr_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomAttr*
const char* q_domattr_prefix(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomAttr*
/// @param pre const char*
void q_domattr_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self QDomAttr*
bool q_domattr_is_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self QDomAttr*
bool q_domattr_is_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self QDomAttr*
bool q_domattr_is_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self QDomAttr*
bool q_domattr_is_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self QDomAttr*
bool q_domattr_is_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self QDomAttr*
bool q_domattr_is_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self QDomAttr*
bool q_domattr_is_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self QDomAttr*
bool q_domattr_is_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self QDomAttr*
bool q_domattr_is_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self QDomAttr*
bool q_domattr_is_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self QDomAttr*
bool q_domattr_is_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self QDomAttr*
bool q_domattr_is_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self QDomAttr*
bool q_domattr_is_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self QDomAttr*
/// @param name const char*
QDomNode* q_domattr_named_item(void* self, const char* name);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self QDomAttr*
bool q_domattr_is_null(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomAttr*
void q_domattr_clear(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self QDomAttr*
QDomAttr* q_domattr_to_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self QDomAttr*
QDomCDATASection* q_domattr_to_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self QDomAttr*
QDomDocumentFragment* q_domattr_to_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self QDomAttr*
QDomDocument* q_domattr_to_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self QDomAttr*
QDomDocumentType* q_domattr_to_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self QDomAttr*
QDomElement* q_domattr_to_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self QDomAttr*
QDomEntityReference* q_domattr_to_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self QDomAttr*
QDomText* q_domattr_to_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self QDomAttr*
QDomEntity* q_domattr_to_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self QDomAttr*
QDomNotation* q_domattr_to_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self QDomAttr*
QDomProcessingInstruction* q_domattr_to_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self QDomAttr*
QDomCharacterData* q_domattr_to_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self QDomAttr*
QDomComment* q_domattr_to_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomAttr*
/// @param param1 QTextStream*
/// @param param2 int
void q_domattr_save(void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomAttr*
QDomElement* q_domattr_first_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomAttr*
QDomElement* q_domattr_last_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomAttr*
QDomElement* q_domattr_previous_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomAttr*
QDomElement* q_domattr_next_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self QDomAttr*
int32_t q_domattr_line_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self QDomAttr*
int32_t q_domattr_column_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomAttr*
/// @param deep bool
QDomNode* q_domattr_clone_node1(void* self, bool deep);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomAttr*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
void q_domattr_save3(void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomAttr*
/// @param tagName const char*
QDomElement* q_domattr_first_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomAttr*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domattr_first_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomAttr*
/// @param tagName const char*
QDomElement* q_domattr_last_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomAttr*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domattr_last_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomAttr*
/// @param tagName const char*
QDomElement* q_domattr_previous_sibling_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomAttr*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domattr_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomAttr*
/// @param taName const char*
QDomElement* q_domattr_next_sibling_element1(void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomAttr*
/// @param taName const char*
/// @param namespaceURI const char*
QDomElement* q_domattr_next_sibling_element2(void* self, const char* taName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomattr.html#dtor.QDomAttr)
///
/// Delete this object from C++ memory.
///
/// @param self QDomAttr*
void q_domattr_delete(void* self);

/// https://doc.qt.io/qt-6/qdomelement.html

/// q_domelement_new constructs a new QDomElement object.
///
QDomElement* q_domelement_new();

/// q_domelement_new2 constructs a new QDomElement object.
///
/// @param element QDomElement*
QDomElement* q_domelement_new2(void* element);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#operator-eq)
///
/// @param self QDomElement*
/// @param other QDomElement*
void q_domelement_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#attribute)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomElement*
/// @param name const char*
const char* q_domelement_attribute(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
///
/// @param self QDomElement*
/// @param name const char*
/// @param value const char*
void q_domelement_set_attribute(void* self, const char* name, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
///
/// @param self QDomElement*
/// @param name const char*
/// @param value long long
void q_domelement_set_attribute2(void* self, const char* name, long long value);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
///
/// @param self QDomElement*
/// @param name const char*
/// @param value uint64_t
void q_domelement_set_attribute3(void* self, const char* name, uint64_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
///
/// @param self QDomElement*
/// @param name const char*
/// @param value int
void q_domelement_set_attribute4(void* self, const char* name, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
///
/// @param self QDomElement*
/// @param name const char*
/// @param value uint32_t
void q_domelement_set_attribute5(void* self, const char* name, uint32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
///
/// @param self QDomElement*
/// @param name const char*
/// @param value float
void q_domelement_set_attribute6(void* self, const char* name, float value);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
///
/// @param self QDomElement*
/// @param name const char*
/// @param value double
void q_domelement_set_attribute7(void* self, const char* name, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#removeAttribute)
///
/// @param self QDomElement*
/// @param name const char*
void q_domelement_remove_attribute(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#attributeNode)
///
/// @param self QDomElement*
/// @param name const char*
QDomAttr* q_domelement_attribute_node(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNode)
///
/// @param self QDomElement*
/// @param newAttr QDomAttr*
QDomAttr* q_domelement_set_attribute_node(void* self, void* newAttr);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#removeAttributeNode)
///
/// @param self QDomElement*
/// @param oldAttr QDomAttr*
QDomAttr* q_domelement_remove_attribute_node(void* self, void* oldAttr);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#elementsByTagName)
///
/// @param self QDomElement*
/// @param tagname const char*
QDomNodeList* q_domelement_elements_by_tag_name(void* self, const char* tagname);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#hasAttribute)
///
/// @param self QDomElement*
/// @param name const char*
bool q_domelement_has_attribute(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#attributeNS)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param localName const char*
const char* q_domelement_attribute_n_s(void* self, const char* nsURI, const char* localName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param qName const char*
/// @param value const char*
void q_domelement_set_attribute_n_s(void* self, const char* nsURI, const char* qName, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param qName const char*
/// @param value int
void q_domelement_set_attribute_n_s2(void* self, const char* nsURI, const char* qName, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param qName const char*
/// @param value uint32_t
void q_domelement_set_attribute_n_s3(void* self, const char* nsURI, const char* qName, uint32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param qName const char*
/// @param value long long
void q_domelement_set_attribute_n_s4(void* self, const char* nsURI, const char* qName, long long value);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param qName const char*
/// @param value uint64_t
void q_domelement_set_attribute_n_s5(void* self, const char* nsURI, const char* qName, uint64_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param qName const char*
/// @param value double
void q_domelement_set_attribute_n_s6(void* self, const char* nsURI, const char* qName, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#removeAttributeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param localName const char*
void q_domelement_remove_attribute_n_s(void* self, const char* nsURI, const char* localName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#attributeNodeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param localName const char*
QDomAttr* q_domelement_attribute_node_n_s(void* self, const char* nsURI, const char* localName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNodeNS)
///
/// @param self QDomElement*
/// @param newAttr QDomAttr*
QDomAttr* q_domelement_set_attribute_node_n_s(void* self, void* newAttr);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#elementsByTagNameNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param localName const char*
QDomNodeList* q_domelement_elements_by_tag_name_n_s(void* self, const char* nsURI, const char* localName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#hasAttributeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param localName const char*
bool q_domelement_has_attribute_n_s(void* self, const char* nsURI, const char* localName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#tagName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomElement*
const char* q_domelement_tag_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setTagName)
///
/// @param self QDomElement*
/// @param name const char*
void q_domelement_set_tag_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#attributes)
///
/// @param self QDomElement*
QDomNamedNodeMap* q_domelement_attributes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#nodeType)
///
/// @param self QDomElement*
///
/// @return enum QDomNode__NodeType
int32_t q_domelement_node_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomElement*
const char* q_domelement_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#attribute)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomElement*
/// @param name const char*
/// @param defValue const char*
const char* q_domelement_attribute2(void* self, const char* name, const char* defValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#attributeNS)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param localName const char*
/// @param defValue const char*
const char* q_domelement_attribute_n_s3(void* self, const char* nsURI, const char* localName, const char* defValue);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self QDomElement*
/// @param other QDomNode*
bool q_domelement_operator_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self QDomElement*
/// @param other QDomNode*
bool q_domelement_operator_not_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomElement*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domelement_insert_before(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomElement*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domelement_insert_after(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomElement*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
QDomNode* q_domelement_replace_child(void* self, void* newChild, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomElement*
/// @param oldChild QDomNode*
QDomNode* q_domelement_remove_child(void* self, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomElement*
/// @param newChild QDomNode*
QDomNode* q_domelement_append_child(void* self, void* newChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self QDomElement*
bool q_domelement_has_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomElement*
QDomNode* q_domelement_clone_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomElement*
void q_domelement_normalize(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self QDomElement*
/// @param feature const char*
/// @param version const char*
bool q_domelement_is_supported(void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomElement*
const char* q_domelement_node_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self QDomElement*
QDomNode* q_domelement_parent_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self QDomElement*
QDomNodeList* q_domelement_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self QDomElement*
QDomNode* q_domelement_first_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self QDomElement*
QDomNode* q_domelement_last_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self QDomElement*
QDomNode* q_domelement_previous_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self QDomElement*
QDomNode* q_domelement_next_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self QDomElement*
QDomDocument* q_domelement_owner_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomElement*
const char* q_domelement_namespace_u_r_i(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomElement*
const char* q_domelement_local_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self QDomElement*
bool q_domelement_has_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomElement*
const char* q_domelement_node_value(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomElement*
/// @param value const char*
void q_domelement_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomElement*
const char* q_domelement_prefix(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomElement*
/// @param pre const char*
void q_domelement_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self QDomElement*
bool q_domelement_is_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self QDomElement*
bool q_domelement_is_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self QDomElement*
bool q_domelement_is_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self QDomElement*
bool q_domelement_is_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self QDomElement*
bool q_domelement_is_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self QDomElement*
bool q_domelement_is_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self QDomElement*
bool q_domelement_is_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self QDomElement*
bool q_domelement_is_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self QDomElement*
bool q_domelement_is_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self QDomElement*
bool q_domelement_is_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self QDomElement*
bool q_domelement_is_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self QDomElement*
bool q_domelement_is_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self QDomElement*
bool q_domelement_is_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self QDomElement*
/// @param name const char*
QDomNode* q_domelement_named_item(void* self, const char* name);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self QDomElement*
bool q_domelement_is_null(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomElement*
void q_domelement_clear(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self QDomElement*
QDomAttr* q_domelement_to_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self QDomElement*
QDomCDATASection* q_domelement_to_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self QDomElement*
QDomDocumentFragment* q_domelement_to_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self QDomElement*
QDomDocument* q_domelement_to_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self QDomElement*
QDomDocumentType* q_domelement_to_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self QDomElement*
QDomElement* q_domelement_to_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self QDomElement*
QDomEntityReference* q_domelement_to_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self QDomElement*
QDomText* q_domelement_to_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self QDomElement*
QDomEntity* q_domelement_to_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self QDomElement*
QDomNotation* q_domelement_to_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self QDomElement*
QDomProcessingInstruction* q_domelement_to_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self QDomElement*
QDomCharacterData* q_domelement_to_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self QDomElement*
QDomComment* q_domelement_to_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomElement*
/// @param param1 QTextStream*
/// @param param2 int
void q_domelement_save(void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomElement*
QDomElement* q_domelement_first_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomElement*
QDomElement* q_domelement_last_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomElement*
QDomElement* q_domelement_previous_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomElement*
QDomElement* q_domelement_next_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self QDomElement*
int32_t q_domelement_line_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self QDomElement*
int32_t q_domelement_column_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomElement*
/// @param deep bool
QDomNode* q_domelement_clone_node1(void* self, bool deep);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomElement*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
void q_domelement_save3(void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomElement*
/// @param tagName const char*
QDomElement* q_domelement_first_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomElement*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domelement_first_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomElement*
/// @param tagName const char*
QDomElement* q_domelement_last_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomElement*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domelement_last_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomElement*
/// @param tagName const char*
QDomElement* q_domelement_previous_sibling_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomElement*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domelement_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomElement*
/// @param taName const char*
QDomElement* q_domelement_next_sibling_element1(void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomElement*
/// @param taName const char*
/// @param namespaceURI const char*
QDomElement* q_domelement_next_sibling_element2(void* self, const char* taName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#dtor.QDomElement)
///
/// Delete this object from C++ memory.
///
/// @param self QDomElement*
void q_domelement_delete(void* self);

/// https://doc.qt.io/qt-6/qdomtext.html

/// q_domtext_new constructs a new QDomText object.
///
QDomText* q_domtext_new();

/// q_domtext_new2 constructs a new QDomText object.
///
/// @param text QDomText*
QDomText* q_domtext_new2(void* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomtext.html#operator-eq)
///
/// @param self QDomText*
/// @param other QDomText*
void q_domtext_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomtext.html#splitText)
///
/// @param self QDomText*
/// @param offset int
QDomText* q_domtext_split_text(void* self, int offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomtext.html#nodeType)
///
/// @param self QDomText*
///
/// @return enum QDomNode__NodeType
int32_t q_domtext_node_type(void* self);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomText*
/// @param offset uint64_t
/// @param count uint64_t
const char* q_domtext_substring_data(void* self, uint64_t offset, uint64_t count);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
///
/// @param self QDomText*
/// @param arg const char*
void q_domtext_append_data(void* self, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
///
/// @param self QDomText*
/// @param offset uint64_t
/// @param arg const char*
void q_domtext_insert_data(void* self, uint64_t offset, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
///
/// @param self QDomText*
/// @param offset uint64_t
/// @param count uint64_t
void q_domtext_delete_data(void* self, uint64_t offset, uint64_t count);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
///
/// @param self QDomText*
/// @param offset uint64_t
/// @param count uint64_t
/// @param arg const char*
void q_domtext_replace_data(void* self, uint64_t offset, uint64_t count, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
///
/// @param self QDomText*
int32_t q_domtext_length(void* self);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomText*
const char* q_domtext_data(void* self);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
///
/// @param self QDomText*
/// @param data const char*
void q_domtext_set_data(void* self, const char* data);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self QDomText*
/// @param other QDomNode*
bool q_domtext_operator_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self QDomText*
/// @param other QDomNode*
bool q_domtext_operator_not_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomText*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domtext_insert_before(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomText*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domtext_insert_after(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomText*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
QDomNode* q_domtext_replace_child(void* self, void* newChild, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomText*
/// @param oldChild QDomNode*
QDomNode* q_domtext_remove_child(void* self, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomText*
/// @param newChild QDomNode*
QDomNode* q_domtext_append_child(void* self, void* newChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self QDomText*
bool q_domtext_has_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomText*
QDomNode* q_domtext_clone_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomText*
void q_domtext_normalize(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self QDomText*
/// @param feature const char*
/// @param version const char*
bool q_domtext_is_supported(void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomText*
const char* q_domtext_node_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self QDomText*
QDomNode* q_domtext_parent_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self QDomText*
QDomNodeList* q_domtext_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self QDomText*
QDomNode* q_domtext_first_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self QDomText*
QDomNode* q_domtext_last_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self QDomText*
QDomNode* q_domtext_previous_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self QDomText*
QDomNode* q_domtext_next_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self QDomText*
QDomNamedNodeMap* q_domtext_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self QDomText*
QDomDocument* q_domtext_owner_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomText*
const char* q_domtext_namespace_u_r_i(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomText*
const char* q_domtext_local_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self QDomText*
bool q_domtext_has_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomText*
const char* q_domtext_node_value(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomText*
/// @param value const char*
void q_domtext_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomText*
const char* q_domtext_prefix(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomText*
/// @param pre const char*
void q_domtext_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self QDomText*
bool q_domtext_is_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self QDomText*
bool q_domtext_is_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self QDomText*
bool q_domtext_is_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self QDomText*
bool q_domtext_is_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self QDomText*
bool q_domtext_is_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self QDomText*
bool q_domtext_is_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self QDomText*
bool q_domtext_is_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self QDomText*
bool q_domtext_is_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self QDomText*
bool q_domtext_is_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self QDomText*
bool q_domtext_is_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self QDomText*
bool q_domtext_is_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self QDomText*
bool q_domtext_is_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self QDomText*
bool q_domtext_is_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self QDomText*
/// @param name const char*
QDomNode* q_domtext_named_item(void* self, const char* name);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self QDomText*
bool q_domtext_is_null(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomText*
void q_domtext_clear(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self QDomText*
QDomAttr* q_domtext_to_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self QDomText*
QDomCDATASection* q_domtext_to_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self QDomText*
QDomDocumentFragment* q_domtext_to_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self QDomText*
QDomDocument* q_domtext_to_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self QDomText*
QDomDocumentType* q_domtext_to_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self QDomText*
QDomElement* q_domtext_to_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self QDomText*
QDomEntityReference* q_domtext_to_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self QDomText*
QDomText* q_domtext_to_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self QDomText*
QDomEntity* q_domtext_to_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self QDomText*
QDomNotation* q_domtext_to_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self QDomText*
QDomProcessingInstruction* q_domtext_to_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self QDomText*
QDomCharacterData* q_domtext_to_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self QDomText*
QDomComment* q_domtext_to_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomText*
/// @param param1 QTextStream*
/// @param param2 int
void q_domtext_save(void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomText*
QDomElement* q_domtext_first_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomText*
QDomElement* q_domtext_last_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomText*
QDomElement* q_domtext_previous_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomText*
QDomElement* q_domtext_next_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self QDomText*
int32_t q_domtext_line_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self QDomText*
int32_t q_domtext_column_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomText*
/// @param deep bool
QDomNode* q_domtext_clone_node1(void* self, bool deep);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomText*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
void q_domtext_save3(void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomText*
/// @param tagName const char*
QDomElement* q_domtext_first_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomText*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domtext_first_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomText*
/// @param tagName const char*
QDomElement* q_domtext_last_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomText*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domtext_last_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomText*
/// @param tagName const char*
QDomElement* q_domtext_previous_sibling_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomText*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domtext_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomText*
/// @param taName const char*
QDomElement* q_domtext_next_sibling_element1(void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomText*
/// @param taName const char*
/// @param namespaceURI const char*
QDomElement* q_domtext_next_sibling_element2(void* self, const char* taName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomtext.html#dtor.QDomText)
///
/// Delete this object from C++ memory.
///
/// @param self QDomText*
void q_domtext_delete(void* self);

/// https://doc.qt.io/qt-6/qdomcomment.html

/// q_domcomment_new constructs a new QDomComment object.
///
QDomComment* q_domcomment_new();

/// q_domcomment_new2 constructs a new QDomComment object.
///
/// @param comment QDomComment*
QDomComment* q_domcomment_new2(void* comment);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcomment.html#operator-eq)
///
/// @param self QDomComment*
/// @param other QDomComment*
void q_domcomment_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcomment.html#nodeType)
///
/// @param self QDomComment*
///
/// @return enum QDomNode__NodeType
int32_t q_domcomment_node_type(void* self);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomComment*
/// @param offset uint64_t
/// @param count uint64_t
const char* q_domcomment_substring_data(void* self, uint64_t offset, uint64_t count);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
///
/// @param self QDomComment*
/// @param arg const char*
void q_domcomment_append_data(void* self, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
///
/// @param self QDomComment*
/// @param offset uint64_t
/// @param arg const char*
void q_domcomment_insert_data(void* self, uint64_t offset, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
///
/// @param self QDomComment*
/// @param offset uint64_t
/// @param count uint64_t
void q_domcomment_delete_data(void* self, uint64_t offset, uint64_t count);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
///
/// @param self QDomComment*
/// @param offset uint64_t
/// @param count uint64_t
/// @param arg const char*
void q_domcomment_replace_data(void* self, uint64_t offset, uint64_t count, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
///
/// @param self QDomComment*
int32_t q_domcomment_length(void* self);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomComment*
const char* q_domcomment_data(void* self);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
///
/// @param self QDomComment*
/// @param data const char*
void q_domcomment_set_data(void* self, const char* data);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self QDomComment*
/// @param other QDomNode*
bool q_domcomment_operator_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self QDomComment*
/// @param other QDomNode*
bool q_domcomment_operator_not_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomComment*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domcomment_insert_before(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomComment*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domcomment_insert_after(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomComment*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
QDomNode* q_domcomment_replace_child(void* self, void* newChild, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomComment*
/// @param oldChild QDomNode*
QDomNode* q_domcomment_remove_child(void* self, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomComment*
/// @param newChild QDomNode*
QDomNode* q_domcomment_append_child(void* self, void* newChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self QDomComment*
bool q_domcomment_has_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomComment*
QDomNode* q_domcomment_clone_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomComment*
void q_domcomment_normalize(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self QDomComment*
/// @param feature const char*
/// @param version const char*
bool q_domcomment_is_supported(void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomComment*
const char* q_domcomment_node_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self QDomComment*
QDomNode* q_domcomment_parent_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self QDomComment*
QDomNodeList* q_domcomment_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self QDomComment*
QDomNode* q_domcomment_first_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self QDomComment*
QDomNode* q_domcomment_last_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self QDomComment*
QDomNode* q_domcomment_previous_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self QDomComment*
QDomNode* q_domcomment_next_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self QDomComment*
QDomNamedNodeMap* q_domcomment_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self QDomComment*
QDomDocument* q_domcomment_owner_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomComment*
const char* q_domcomment_namespace_u_r_i(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomComment*
const char* q_domcomment_local_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self QDomComment*
bool q_domcomment_has_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomComment*
const char* q_domcomment_node_value(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomComment*
/// @param value const char*
void q_domcomment_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomComment*
const char* q_domcomment_prefix(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomComment*
/// @param pre const char*
void q_domcomment_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self QDomComment*
bool q_domcomment_is_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self QDomComment*
bool q_domcomment_is_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self QDomComment*
bool q_domcomment_is_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self QDomComment*
bool q_domcomment_is_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self QDomComment*
bool q_domcomment_is_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self QDomComment*
bool q_domcomment_is_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self QDomComment*
bool q_domcomment_is_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self QDomComment*
bool q_domcomment_is_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self QDomComment*
bool q_domcomment_is_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self QDomComment*
bool q_domcomment_is_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self QDomComment*
bool q_domcomment_is_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self QDomComment*
bool q_domcomment_is_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self QDomComment*
bool q_domcomment_is_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self QDomComment*
/// @param name const char*
QDomNode* q_domcomment_named_item(void* self, const char* name);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self QDomComment*
bool q_domcomment_is_null(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomComment*
void q_domcomment_clear(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self QDomComment*
QDomAttr* q_domcomment_to_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self QDomComment*
QDomCDATASection* q_domcomment_to_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self QDomComment*
QDomDocumentFragment* q_domcomment_to_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self QDomComment*
QDomDocument* q_domcomment_to_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self QDomComment*
QDomDocumentType* q_domcomment_to_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self QDomComment*
QDomElement* q_domcomment_to_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self QDomComment*
QDomEntityReference* q_domcomment_to_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self QDomComment*
QDomText* q_domcomment_to_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self QDomComment*
QDomEntity* q_domcomment_to_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self QDomComment*
QDomNotation* q_domcomment_to_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self QDomComment*
QDomProcessingInstruction* q_domcomment_to_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self QDomComment*
QDomCharacterData* q_domcomment_to_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self QDomComment*
QDomComment* q_domcomment_to_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomComment*
/// @param param1 QTextStream*
/// @param param2 int
void q_domcomment_save(void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomComment*
QDomElement* q_domcomment_first_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomComment*
QDomElement* q_domcomment_last_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomComment*
QDomElement* q_domcomment_previous_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomComment*
QDomElement* q_domcomment_next_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self QDomComment*
int32_t q_domcomment_line_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self QDomComment*
int32_t q_domcomment_column_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomComment*
/// @param deep bool
QDomNode* q_domcomment_clone_node1(void* self, bool deep);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomComment*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
void q_domcomment_save3(void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomComment*
/// @param tagName const char*
QDomElement* q_domcomment_first_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomComment*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domcomment_first_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomComment*
/// @param tagName const char*
QDomElement* q_domcomment_last_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomComment*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domcomment_last_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomComment*
/// @param tagName const char*
QDomElement* q_domcomment_previous_sibling_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomComment*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domcomment_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomComment*
/// @param taName const char*
QDomElement* q_domcomment_next_sibling_element1(void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomComment*
/// @param taName const char*
/// @param namespaceURI const char*
QDomElement* q_domcomment_next_sibling_element2(void* self, const char* taName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcomment.html#dtor.QDomComment)
///
/// Delete this object from C++ memory.
///
/// @param self QDomComment*
void q_domcomment_delete(void* self);

/// https://doc.qt.io/qt-6/qdomcdatasection.html

/// q_domcdatasection_new constructs a new QDomCDATASection object.
///
QDomCDATASection* q_domcdatasection_new();

/// q_domcdatasection_new2 constructs a new QDomCDATASection object.
///
/// @param cdataSection QDomCDATASection*
QDomCDATASection* q_domcdatasection_new2(void* cdataSection);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcdatasection.html#operator-eq)
///
/// @param self QDomCDATASection*
/// @param other QDomCDATASection*
void q_domcdatasection_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcdatasection.html#nodeType)
///
/// @param self QDomCDATASection*
///
/// @return enum QDomNode__NodeType
int32_t q_domcdatasection_node_type(void* self);

/// Inherited from QDomText
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomtext.html#splitText)
///
/// @param self QDomCDATASection*
/// @param offset int
QDomText* q_domcdatasection_split_text(void* self, int offset);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomCDATASection*
/// @param offset uint64_t
/// @param count uint64_t
const char* q_domcdatasection_substring_data(void* self, uint64_t offset, uint64_t count);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
///
/// @param self QDomCDATASection*
/// @param arg const char*
void q_domcdatasection_append_data(void* self, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
///
/// @param self QDomCDATASection*
/// @param offset uint64_t
/// @param arg const char*
void q_domcdatasection_insert_data(void* self, uint64_t offset, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
///
/// @param self QDomCDATASection*
/// @param offset uint64_t
/// @param count uint64_t
void q_domcdatasection_delete_data(void* self, uint64_t offset, uint64_t count);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
///
/// @param self QDomCDATASection*
/// @param offset uint64_t
/// @param count uint64_t
/// @param arg const char*
void q_domcdatasection_replace_data(void* self, uint64_t offset, uint64_t count, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
///
/// @param self QDomCDATASection*
int32_t q_domcdatasection_length(void* self);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomCDATASection*
const char* q_domcdatasection_data(void* self);

/// Inherited from QDomCharacterData
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
///
/// @param self QDomCDATASection*
/// @param data const char*
void q_domcdatasection_set_data(void* self, const char* data);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self QDomCDATASection*
/// @param other QDomNode*
bool q_domcdatasection_operator_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self QDomCDATASection*
/// @param other QDomNode*
bool q_domcdatasection_operator_not_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomCDATASection*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domcdatasection_insert_before(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomCDATASection*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domcdatasection_insert_after(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomCDATASection*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
QDomNode* q_domcdatasection_replace_child(void* self, void* newChild, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomCDATASection*
/// @param oldChild QDomNode*
QDomNode* q_domcdatasection_remove_child(void* self, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomCDATASection*
/// @param newChild QDomNode*
QDomNode* q_domcdatasection_append_child(void* self, void* newChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self QDomCDATASection*
bool q_domcdatasection_has_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomCDATASection*
QDomNode* q_domcdatasection_clone_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomCDATASection*
void q_domcdatasection_normalize(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self QDomCDATASection*
/// @param feature const char*
/// @param version const char*
bool q_domcdatasection_is_supported(void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomCDATASection*
const char* q_domcdatasection_node_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self QDomCDATASection*
QDomNode* q_domcdatasection_parent_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self QDomCDATASection*
QDomNodeList* q_domcdatasection_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self QDomCDATASection*
QDomNode* q_domcdatasection_first_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self QDomCDATASection*
QDomNode* q_domcdatasection_last_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self QDomCDATASection*
QDomNode* q_domcdatasection_previous_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self QDomCDATASection*
QDomNode* q_domcdatasection_next_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self QDomCDATASection*
QDomNamedNodeMap* q_domcdatasection_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self QDomCDATASection*
QDomDocument* q_domcdatasection_owner_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomCDATASection*
const char* q_domcdatasection_namespace_u_r_i(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomCDATASection*
const char* q_domcdatasection_local_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self QDomCDATASection*
bool q_domcdatasection_has_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomCDATASection*
const char* q_domcdatasection_node_value(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomCDATASection*
/// @param value const char*
void q_domcdatasection_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomCDATASection*
const char* q_domcdatasection_prefix(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomCDATASection*
/// @param pre const char*
void q_domcdatasection_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self QDomCDATASection*
bool q_domcdatasection_is_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self QDomCDATASection*
bool q_domcdatasection_is_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self QDomCDATASection*
bool q_domcdatasection_is_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self QDomCDATASection*
bool q_domcdatasection_is_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self QDomCDATASection*
bool q_domcdatasection_is_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self QDomCDATASection*
bool q_domcdatasection_is_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self QDomCDATASection*
bool q_domcdatasection_is_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self QDomCDATASection*
bool q_domcdatasection_is_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self QDomCDATASection*
bool q_domcdatasection_is_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self QDomCDATASection*
bool q_domcdatasection_is_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self QDomCDATASection*
bool q_domcdatasection_is_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self QDomCDATASection*
bool q_domcdatasection_is_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self QDomCDATASection*
bool q_domcdatasection_is_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self QDomCDATASection*
/// @param name const char*
QDomNode* q_domcdatasection_named_item(void* self, const char* name);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self QDomCDATASection*
bool q_domcdatasection_is_null(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomCDATASection*
void q_domcdatasection_clear(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self QDomCDATASection*
QDomAttr* q_domcdatasection_to_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self QDomCDATASection*
QDomCDATASection* q_domcdatasection_to_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self QDomCDATASection*
QDomDocumentFragment* q_domcdatasection_to_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self QDomCDATASection*
QDomDocument* q_domcdatasection_to_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self QDomCDATASection*
QDomDocumentType* q_domcdatasection_to_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self QDomCDATASection*
QDomElement* q_domcdatasection_to_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self QDomCDATASection*
QDomEntityReference* q_domcdatasection_to_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self QDomCDATASection*
QDomText* q_domcdatasection_to_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self QDomCDATASection*
QDomEntity* q_domcdatasection_to_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self QDomCDATASection*
QDomNotation* q_domcdatasection_to_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self QDomCDATASection*
QDomProcessingInstruction* q_domcdatasection_to_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self QDomCDATASection*
QDomCharacterData* q_domcdatasection_to_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self QDomCDATASection*
QDomComment* q_domcdatasection_to_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomCDATASection*
/// @param param1 QTextStream*
/// @param param2 int
void q_domcdatasection_save(void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomCDATASection*
QDomElement* q_domcdatasection_first_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomCDATASection*
QDomElement* q_domcdatasection_last_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomCDATASection*
QDomElement* q_domcdatasection_previous_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomCDATASection*
QDomElement* q_domcdatasection_next_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self QDomCDATASection*
int32_t q_domcdatasection_line_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self QDomCDATASection*
int32_t q_domcdatasection_column_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomCDATASection*
/// @param deep bool
QDomNode* q_domcdatasection_clone_node1(void* self, bool deep);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomCDATASection*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
void q_domcdatasection_save3(void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomCDATASection*
/// @param tagName const char*
QDomElement* q_domcdatasection_first_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomCDATASection*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domcdatasection_first_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomCDATASection*
/// @param tagName const char*
QDomElement* q_domcdatasection_last_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomCDATASection*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domcdatasection_last_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomCDATASection*
/// @param tagName const char*
QDomElement* q_domcdatasection_previous_sibling_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomCDATASection*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domcdatasection_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomCDATASection*
/// @param taName const char*
QDomElement* q_domcdatasection_next_sibling_element1(void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomCDATASection*
/// @param taName const char*
/// @param namespaceURI const char*
QDomElement* q_domcdatasection_next_sibling_element2(void* self, const char* taName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomcdatasection.html#dtor.QDomCDATASection)
///
/// Delete this object from C++ memory.
///
/// @param self QDomCDATASection*
void q_domcdatasection_delete(void* self);

/// https://doc.qt.io/qt-6/qdomnotation.html

/// q_domnotation_new constructs a new QDomNotation object.
///
QDomNotation* q_domnotation_new();

/// q_domnotation_new2 constructs a new QDomNotation object.
///
/// @param notation QDomNotation*
QDomNotation* q_domnotation_new2(void* notation);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnotation.html#operator-eq)
///
/// @param self QDomNotation*
/// @param other QDomNotation*
void q_domnotation_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnotation.html#publicId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomNotation*
const char* q_domnotation_public_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnotation.html#systemId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomNotation*
const char* q_domnotation_system_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnotation.html#nodeType)
///
/// @param self QDomNotation*
///
/// @return enum QDomNode__NodeType
int32_t q_domnotation_node_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self QDomNotation*
/// @param other QDomNode*
bool q_domnotation_operator_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self QDomNotation*
/// @param other QDomNode*
bool q_domnotation_operator_not_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomNotation*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domnotation_insert_before(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomNotation*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domnotation_insert_after(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomNotation*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
QDomNode* q_domnotation_replace_child(void* self, void* newChild, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomNotation*
/// @param oldChild QDomNode*
QDomNode* q_domnotation_remove_child(void* self, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomNotation*
/// @param newChild QDomNode*
QDomNode* q_domnotation_append_child(void* self, void* newChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self QDomNotation*
bool q_domnotation_has_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomNotation*
QDomNode* q_domnotation_clone_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomNotation*
void q_domnotation_normalize(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self QDomNotation*
/// @param feature const char*
/// @param version const char*
bool q_domnotation_is_supported(void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomNotation*
const char* q_domnotation_node_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self QDomNotation*
QDomNode* q_domnotation_parent_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self QDomNotation*
QDomNodeList* q_domnotation_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self QDomNotation*
QDomNode* q_domnotation_first_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self QDomNotation*
QDomNode* q_domnotation_last_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self QDomNotation*
QDomNode* q_domnotation_previous_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self QDomNotation*
QDomNode* q_domnotation_next_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self QDomNotation*
QDomNamedNodeMap* q_domnotation_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self QDomNotation*
QDomDocument* q_domnotation_owner_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomNotation*
const char* q_domnotation_namespace_u_r_i(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomNotation*
const char* q_domnotation_local_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self QDomNotation*
bool q_domnotation_has_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomNotation*
const char* q_domnotation_node_value(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomNotation*
/// @param value const char*
void q_domnotation_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomNotation*
const char* q_domnotation_prefix(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomNotation*
/// @param pre const char*
void q_domnotation_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self QDomNotation*
bool q_domnotation_is_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self QDomNotation*
bool q_domnotation_is_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self QDomNotation*
bool q_domnotation_is_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self QDomNotation*
bool q_domnotation_is_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self QDomNotation*
bool q_domnotation_is_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self QDomNotation*
bool q_domnotation_is_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self QDomNotation*
bool q_domnotation_is_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self QDomNotation*
bool q_domnotation_is_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self QDomNotation*
bool q_domnotation_is_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self QDomNotation*
bool q_domnotation_is_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self QDomNotation*
bool q_domnotation_is_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self QDomNotation*
bool q_domnotation_is_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self QDomNotation*
bool q_domnotation_is_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self QDomNotation*
/// @param name const char*
QDomNode* q_domnotation_named_item(void* self, const char* name);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self QDomNotation*
bool q_domnotation_is_null(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomNotation*
void q_domnotation_clear(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self QDomNotation*
QDomAttr* q_domnotation_to_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self QDomNotation*
QDomCDATASection* q_domnotation_to_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self QDomNotation*
QDomDocumentFragment* q_domnotation_to_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self QDomNotation*
QDomDocument* q_domnotation_to_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self QDomNotation*
QDomDocumentType* q_domnotation_to_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self QDomNotation*
QDomElement* q_domnotation_to_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self QDomNotation*
QDomEntityReference* q_domnotation_to_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self QDomNotation*
QDomText* q_domnotation_to_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self QDomNotation*
QDomEntity* q_domnotation_to_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self QDomNotation*
QDomNotation* q_domnotation_to_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self QDomNotation*
QDomProcessingInstruction* q_domnotation_to_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self QDomNotation*
QDomCharacterData* q_domnotation_to_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self QDomNotation*
QDomComment* q_domnotation_to_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomNotation*
/// @param param1 QTextStream*
/// @param param2 int
void q_domnotation_save(void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomNotation*
QDomElement* q_domnotation_first_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomNotation*
QDomElement* q_domnotation_last_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomNotation*
QDomElement* q_domnotation_previous_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomNotation*
QDomElement* q_domnotation_next_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self QDomNotation*
int32_t q_domnotation_line_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self QDomNotation*
int32_t q_domnotation_column_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomNotation*
/// @param deep bool
QDomNode* q_domnotation_clone_node1(void* self, bool deep);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomNotation*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
void q_domnotation_save3(void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomNotation*
/// @param tagName const char*
QDomElement* q_domnotation_first_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomNotation*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domnotation_first_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomNotation*
/// @param tagName const char*
QDomElement* q_domnotation_last_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomNotation*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domnotation_last_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomNotation*
/// @param tagName const char*
QDomElement* q_domnotation_previous_sibling_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomNotation*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domnotation_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomNotation*
/// @param taName const char*
QDomElement* q_domnotation_next_sibling_element1(void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomNotation*
/// @param taName const char*
/// @param namespaceURI const char*
QDomElement* q_domnotation_next_sibling_element2(void* self, const char* taName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomnotation.html#dtor.QDomNotation)
///
/// Delete this object from C++ memory.
///
/// @param self QDomNotation*
void q_domnotation_delete(void* self);

/// https://doc.qt.io/qt-6/qdomentity.html

/// q_domentity_new constructs a new QDomEntity object.
///
QDomEntity* q_domentity_new();

/// q_domentity_new2 constructs a new QDomEntity object.
///
/// @param entity QDomEntity*
QDomEntity* q_domentity_new2(void* entity);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomentity.html#operator-eq)
///
/// @param self QDomEntity*
/// @param other QDomEntity*
void q_domentity_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomentity.html#publicId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomEntity*
const char* q_domentity_public_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomentity.html#systemId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomEntity*
const char* q_domentity_system_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomentity.html#notationName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomEntity*
const char* q_domentity_notation_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomentity.html#nodeType)
///
/// @param self QDomEntity*
///
/// @return enum QDomNode__NodeType
int32_t q_domentity_node_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self QDomEntity*
/// @param other QDomNode*
bool q_domentity_operator_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self QDomEntity*
/// @param other QDomNode*
bool q_domentity_operator_not_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomEntity*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domentity_insert_before(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomEntity*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domentity_insert_after(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomEntity*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
QDomNode* q_domentity_replace_child(void* self, void* newChild, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomEntity*
/// @param oldChild QDomNode*
QDomNode* q_domentity_remove_child(void* self, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomEntity*
/// @param newChild QDomNode*
QDomNode* q_domentity_append_child(void* self, void* newChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self QDomEntity*
bool q_domentity_has_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomEntity*
QDomNode* q_domentity_clone_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomEntity*
void q_domentity_normalize(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self QDomEntity*
/// @param feature const char*
/// @param version const char*
bool q_domentity_is_supported(void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomEntity*
const char* q_domentity_node_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self QDomEntity*
QDomNode* q_domentity_parent_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self QDomEntity*
QDomNodeList* q_domentity_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self QDomEntity*
QDomNode* q_domentity_first_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self QDomEntity*
QDomNode* q_domentity_last_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self QDomEntity*
QDomNode* q_domentity_previous_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self QDomEntity*
QDomNode* q_domentity_next_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self QDomEntity*
QDomNamedNodeMap* q_domentity_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self QDomEntity*
QDomDocument* q_domentity_owner_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomEntity*
const char* q_domentity_namespace_u_r_i(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomEntity*
const char* q_domentity_local_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self QDomEntity*
bool q_domentity_has_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomEntity*
const char* q_domentity_node_value(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomEntity*
/// @param value const char*
void q_domentity_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomEntity*
const char* q_domentity_prefix(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomEntity*
/// @param pre const char*
void q_domentity_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self QDomEntity*
bool q_domentity_is_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self QDomEntity*
bool q_domentity_is_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self QDomEntity*
bool q_domentity_is_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self QDomEntity*
bool q_domentity_is_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self QDomEntity*
bool q_domentity_is_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self QDomEntity*
bool q_domentity_is_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self QDomEntity*
bool q_domentity_is_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self QDomEntity*
bool q_domentity_is_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self QDomEntity*
bool q_domentity_is_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self QDomEntity*
bool q_domentity_is_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self QDomEntity*
bool q_domentity_is_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self QDomEntity*
bool q_domentity_is_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self QDomEntity*
bool q_domentity_is_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self QDomEntity*
/// @param name const char*
QDomNode* q_domentity_named_item(void* self, const char* name);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self QDomEntity*
bool q_domentity_is_null(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomEntity*
void q_domentity_clear(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self QDomEntity*
QDomAttr* q_domentity_to_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self QDomEntity*
QDomCDATASection* q_domentity_to_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self QDomEntity*
QDomDocumentFragment* q_domentity_to_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self QDomEntity*
QDomDocument* q_domentity_to_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self QDomEntity*
QDomDocumentType* q_domentity_to_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self QDomEntity*
QDomElement* q_domentity_to_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self QDomEntity*
QDomEntityReference* q_domentity_to_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self QDomEntity*
QDomText* q_domentity_to_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self QDomEntity*
QDomEntity* q_domentity_to_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self QDomEntity*
QDomNotation* q_domentity_to_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self QDomEntity*
QDomProcessingInstruction* q_domentity_to_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self QDomEntity*
QDomCharacterData* q_domentity_to_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self QDomEntity*
QDomComment* q_domentity_to_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomEntity*
/// @param param1 QTextStream*
/// @param param2 int
void q_domentity_save(void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomEntity*
QDomElement* q_domentity_first_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomEntity*
QDomElement* q_domentity_last_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomEntity*
QDomElement* q_domentity_previous_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomEntity*
QDomElement* q_domentity_next_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self QDomEntity*
int32_t q_domentity_line_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self QDomEntity*
int32_t q_domentity_column_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomEntity*
/// @param deep bool
QDomNode* q_domentity_clone_node1(void* self, bool deep);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomEntity*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
void q_domentity_save3(void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomEntity*
/// @param tagName const char*
QDomElement* q_domentity_first_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomEntity*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domentity_first_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomEntity*
/// @param tagName const char*
QDomElement* q_domentity_last_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomEntity*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domentity_last_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomEntity*
/// @param tagName const char*
QDomElement* q_domentity_previous_sibling_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomEntity*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domentity_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomEntity*
/// @param taName const char*
QDomElement* q_domentity_next_sibling_element1(void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomEntity*
/// @param taName const char*
/// @param namespaceURI const char*
QDomElement* q_domentity_next_sibling_element2(void* self, const char* taName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomentity.html#dtor.QDomEntity)
///
/// Delete this object from C++ memory.
///
/// @param self QDomEntity*
void q_domentity_delete(void* self);

/// https://doc.qt.io/qt-6/qdomentityreference.html

/// q_domentityreference_new constructs a new QDomEntityReference object.
///
QDomEntityReference* q_domentityreference_new();

/// q_domentityreference_new2 constructs a new QDomEntityReference object.
///
/// @param entityReference QDomEntityReference*
QDomEntityReference* q_domentityreference_new2(void* entityReference);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomentityreference.html#operator-eq)
///
/// @param self QDomEntityReference*
/// @param other QDomEntityReference*
void q_domentityreference_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomentityreference.html#nodeType)
///
/// @param self QDomEntityReference*
///
/// @return enum QDomNode__NodeType
int32_t q_domentityreference_node_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self QDomEntityReference*
/// @param other QDomNode*
bool q_domentityreference_operator_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self QDomEntityReference*
/// @param other QDomNode*
bool q_domentityreference_operator_not_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomEntityReference*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domentityreference_insert_before(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomEntityReference*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domentityreference_insert_after(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomEntityReference*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
QDomNode* q_domentityreference_replace_child(void* self, void* newChild, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomEntityReference*
/// @param oldChild QDomNode*
QDomNode* q_domentityreference_remove_child(void* self, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomEntityReference*
/// @param newChild QDomNode*
QDomNode* q_domentityreference_append_child(void* self, void* newChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self QDomEntityReference*
bool q_domentityreference_has_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomEntityReference*
QDomNode* q_domentityreference_clone_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomEntityReference*
void q_domentityreference_normalize(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self QDomEntityReference*
/// @param feature const char*
/// @param version const char*
bool q_domentityreference_is_supported(void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomEntityReference*
const char* q_domentityreference_node_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self QDomEntityReference*
QDomNode* q_domentityreference_parent_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self QDomEntityReference*
QDomNodeList* q_domentityreference_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self QDomEntityReference*
QDomNode* q_domentityreference_first_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self QDomEntityReference*
QDomNode* q_domentityreference_last_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self QDomEntityReference*
QDomNode* q_domentityreference_previous_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self QDomEntityReference*
QDomNode* q_domentityreference_next_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self QDomEntityReference*
QDomNamedNodeMap* q_domentityreference_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self QDomEntityReference*
QDomDocument* q_domentityreference_owner_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomEntityReference*
const char* q_domentityreference_namespace_u_r_i(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomEntityReference*
const char* q_domentityreference_local_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self QDomEntityReference*
bool q_domentityreference_has_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomEntityReference*
const char* q_domentityreference_node_value(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomEntityReference*
/// @param value const char*
void q_domentityreference_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomEntityReference*
const char* q_domentityreference_prefix(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomEntityReference*
/// @param pre const char*
void q_domentityreference_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self QDomEntityReference*
bool q_domentityreference_is_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self QDomEntityReference*
bool q_domentityreference_is_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self QDomEntityReference*
bool q_domentityreference_is_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self QDomEntityReference*
bool q_domentityreference_is_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self QDomEntityReference*
bool q_domentityreference_is_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self QDomEntityReference*
bool q_domentityreference_is_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self QDomEntityReference*
bool q_domentityreference_is_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self QDomEntityReference*
bool q_domentityreference_is_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self QDomEntityReference*
bool q_domentityreference_is_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self QDomEntityReference*
bool q_domentityreference_is_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self QDomEntityReference*
bool q_domentityreference_is_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self QDomEntityReference*
bool q_domentityreference_is_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self QDomEntityReference*
bool q_domentityreference_is_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self QDomEntityReference*
/// @param name const char*
QDomNode* q_domentityreference_named_item(void* self, const char* name);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self QDomEntityReference*
bool q_domentityreference_is_null(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomEntityReference*
void q_domentityreference_clear(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self QDomEntityReference*
QDomAttr* q_domentityreference_to_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self QDomEntityReference*
QDomCDATASection* q_domentityreference_to_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self QDomEntityReference*
QDomDocumentFragment* q_domentityreference_to_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self QDomEntityReference*
QDomDocument* q_domentityreference_to_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self QDomEntityReference*
QDomDocumentType* q_domentityreference_to_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self QDomEntityReference*
QDomElement* q_domentityreference_to_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self QDomEntityReference*
QDomEntityReference* q_domentityreference_to_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self QDomEntityReference*
QDomText* q_domentityreference_to_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self QDomEntityReference*
QDomEntity* q_domentityreference_to_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self QDomEntityReference*
QDomNotation* q_domentityreference_to_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self QDomEntityReference*
QDomProcessingInstruction* q_domentityreference_to_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self QDomEntityReference*
QDomCharacterData* q_domentityreference_to_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self QDomEntityReference*
QDomComment* q_domentityreference_to_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomEntityReference*
/// @param param1 QTextStream*
/// @param param2 int
void q_domentityreference_save(void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomEntityReference*
QDomElement* q_domentityreference_first_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomEntityReference*
QDomElement* q_domentityreference_last_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomEntityReference*
QDomElement* q_domentityreference_previous_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomEntityReference*
QDomElement* q_domentityreference_next_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self QDomEntityReference*
int32_t q_domentityreference_line_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self QDomEntityReference*
int32_t q_domentityreference_column_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomEntityReference*
/// @param deep bool
QDomNode* q_domentityreference_clone_node1(void* self, bool deep);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomEntityReference*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
void q_domentityreference_save3(void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomEntityReference*
/// @param tagName const char*
QDomElement* q_domentityreference_first_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomEntityReference*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domentityreference_first_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomEntityReference*
/// @param tagName const char*
QDomElement* q_domentityreference_last_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomEntityReference*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domentityreference_last_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomEntityReference*
/// @param tagName const char*
QDomElement* q_domentityreference_previous_sibling_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomEntityReference*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domentityreference_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomEntityReference*
/// @param taName const char*
QDomElement* q_domentityreference_next_sibling_element1(void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomEntityReference*
/// @param taName const char*
/// @param namespaceURI const char*
QDomElement* q_domentityreference_next_sibling_element2(void* self, const char* taName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomentityreference.html#dtor.QDomEntityReference)
///
/// Delete this object from C++ memory.
///
/// @param self QDomEntityReference*
void q_domentityreference_delete(void* self);

/// https://doc.qt.io/qt-6/qdomprocessinginstruction.html

/// q_domprocessinginstruction_new constructs a new QDomProcessingInstruction object.
///
QDomProcessingInstruction* q_domprocessinginstruction_new();

/// q_domprocessinginstruction_new2 constructs a new QDomProcessingInstruction object.
///
/// @param processingInstruction QDomProcessingInstruction*
QDomProcessingInstruction* q_domprocessinginstruction_new2(void* processingInstruction);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#operator-eq)
///
/// @param self QDomProcessingInstruction*
/// @param other QDomProcessingInstruction*
void q_domprocessinginstruction_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#target)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomProcessingInstruction*
const char* q_domprocessinginstruction_target(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#data)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomProcessingInstruction*
const char* q_domprocessinginstruction_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#setData)
///
/// @param self QDomProcessingInstruction*
/// @param data const char*
void q_domprocessinginstruction_set_data(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#nodeType)
///
/// @param self QDomProcessingInstruction*
///
/// @return enum QDomNode__NodeType
int32_t q_domprocessinginstruction_node_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self QDomProcessingInstruction*
/// @param other QDomNode*
bool q_domprocessinginstruction_operator_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self QDomProcessingInstruction*
/// @param other QDomNode*
bool q_domprocessinginstruction_operator_not_equal(void* self, void* other);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomProcessingInstruction*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domprocessinginstruction_insert_before(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomProcessingInstruction*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
QDomNode* q_domprocessinginstruction_insert_after(void* self, void* newChild, void* refChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomProcessingInstruction*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
QDomNode* q_domprocessinginstruction_replace_child(void* self, void* newChild, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomProcessingInstruction*
/// @param oldChild QDomNode*
QDomNode* q_domprocessinginstruction_remove_child(void* self, void* oldChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomProcessingInstruction*
/// @param newChild QDomNode*
QDomNode* q_domprocessinginstruction_append_child(void* self, void* newChild);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self QDomProcessingInstruction*
bool q_domprocessinginstruction_has_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomProcessingInstruction*
QDomNode* q_domprocessinginstruction_clone_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomProcessingInstruction*
void q_domprocessinginstruction_normalize(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self QDomProcessingInstruction*
/// @param feature const char*
/// @param version const char*
bool q_domprocessinginstruction_is_supported(void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomProcessingInstruction*
const char* q_domprocessinginstruction_node_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self QDomProcessingInstruction*
QDomNode* q_domprocessinginstruction_parent_node(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self QDomProcessingInstruction*
QDomNodeList* q_domprocessinginstruction_child_nodes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self QDomProcessingInstruction*
QDomNode* q_domprocessinginstruction_first_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self QDomProcessingInstruction*
QDomNode* q_domprocessinginstruction_last_child(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self QDomProcessingInstruction*
QDomNode* q_domprocessinginstruction_previous_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self QDomProcessingInstruction*
QDomNode* q_domprocessinginstruction_next_sibling(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self QDomProcessingInstruction*
QDomNamedNodeMap* q_domprocessinginstruction_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self QDomProcessingInstruction*
QDomDocument* q_domprocessinginstruction_owner_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomProcessingInstruction*
const char* q_domprocessinginstruction_namespace_u_r_i(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomProcessingInstruction*
const char* q_domprocessinginstruction_local_name(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self QDomProcessingInstruction*
bool q_domprocessinginstruction_has_attributes(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomProcessingInstruction*
const char* q_domprocessinginstruction_node_value(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomProcessingInstruction*
/// @param value const char*
void q_domprocessinginstruction_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomProcessingInstruction*
const char* q_domprocessinginstruction_prefix(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomProcessingInstruction*
/// @param pre const char*
void q_domprocessinginstruction_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self QDomProcessingInstruction*
bool q_domprocessinginstruction_is_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self QDomProcessingInstruction*
bool q_domprocessinginstruction_is_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self QDomProcessingInstruction*
bool q_domprocessinginstruction_is_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self QDomProcessingInstruction*
bool q_domprocessinginstruction_is_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self QDomProcessingInstruction*
bool q_domprocessinginstruction_is_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self QDomProcessingInstruction*
bool q_domprocessinginstruction_is_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self QDomProcessingInstruction*
bool q_domprocessinginstruction_is_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self QDomProcessingInstruction*
bool q_domprocessinginstruction_is_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self QDomProcessingInstruction*
bool q_domprocessinginstruction_is_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self QDomProcessingInstruction*
bool q_domprocessinginstruction_is_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self QDomProcessingInstruction*
bool q_domprocessinginstruction_is_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self QDomProcessingInstruction*
bool q_domprocessinginstruction_is_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self QDomProcessingInstruction*
bool q_domprocessinginstruction_is_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self QDomProcessingInstruction*
/// @param name const char*
QDomNode* q_domprocessinginstruction_named_item(void* self, const char* name);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self QDomProcessingInstruction*
bool q_domprocessinginstruction_is_null(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomProcessingInstruction*
void q_domprocessinginstruction_clear(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self QDomProcessingInstruction*
QDomAttr* q_domprocessinginstruction_to_attr(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self QDomProcessingInstruction*
QDomCDATASection* q_domprocessinginstruction_to_c_d_a_t_a_section(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self QDomProcessingInstruction*
QDomDocumentFragment* q_domprocessinginstruction_to_document_fragment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self QDomProcessingInstruction*
QDomDocument* q_domprocessinginstruction_to_document(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self QDomProcessingInstruction*
QDomDocumentType* q_domprocessinginstruction_to_document_type(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self QDomProcessingInstruction*
QDomElement* q_domprocessinginstruction_to_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self QDomProcessingInstruction*
QDomEntityReference* q_domprocessinginstruction_to_entity_reference(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self QDomProcessingInstruction*
QDomText* q_domprocessinginstruction_to_text(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self QDomProcessingInstruction*
QDomEntity* q_domprocessinginstruction_to_entity(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self QDomProcessingInstruction*
QDomNotation* q_domprocessinginstruction_to_notation(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self QDomProcessingInstruction*
QDomProcessingInstruction* q_domprocessinginstruction_to_processing_instruction(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self QDomProcessingInstruction*
QDomCharacterData* q_domprocessinginstruction_to_character_data(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self QDomProcessingInstruction*
QDomComment* q_domprocessinginstruction_to_comment(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomProcessingInstruction*
/// @param param1 QTextStream*
/// @param param2 int
void q_domprocessinginstruction_save(void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomProcessingInstruction*
QDomElement* q_domprocessinginstruction_first_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomProcessingInstruction*
QDomElement* q_domprocessinginstruction_last_child_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomProcessingInstruction*
QDomElement* q_domprocessinginstruction_previous_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomProcessingInstruction*
QDomElement* q_domprocessinginstruction_next_sibling_element(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self QDomProcessingInstruction*
int32_t q_domprocessinginstruction_line_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self QDomProcessingInstruction*
int32_t q_domprocessinginstruction_column_number(void* self);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self QDomProcessingInstruction*
/// @param deep bool
QDomNode* q_domprocessinginstruction_clone_node1(void* self, bool deep);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self QDomProcessingInstruction*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
void q_domprocessinginstruction_save3(void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomProcessingInstruction*
/// @param tagName const char*
QDomElement* q_domprocessinginstruction_first_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self QDomProcessingInstruction*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domprocessinginstruction_first_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomProcessingInstruction*
/// @param tagName const char*
QDomElement* q_domprocessinginstruction_last_child_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self QDomProcessingInstruction*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domprocessinginstruction_last_child_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomProcessingInstruction*
/// @param tagName const char*
QDomElement* q_domprocessinginstruction_previous_sibling_element1(void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self QDomProcessingInstruction*
/// @param tagName const char*
/// @param namespaceURI const char*
QDomElement* q_domprocessinginstruction_previous_sibling_element2(void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomProcessingInstruction*
/// @param taName const char*
QDomElement* q_domprocessinginstruction_next_sibling_element1(void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self QDomProcessingInstruction*
/// @param taName const char*
/// @param namespaceURI const char*
QDomElement* q_domprocessinginstruction_next_sibling_element2(void* self, const char* taName, const char* namespaceURI);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#dtor.QDomProcessingInstruction)
///
/// Delete this object from C++ memory.
///
/// @param self QDomProcessingInstruction*
void q_domprocessinginstruction_delete(void* self);

/// https://doc.qt.io/qt-6/qdomdocument-parseresult.html

/// q_domdocument__parseresult_new constructs a new QDomDocument::ParseResult object.
///
/// @param param1 QDomDocument__ParseResult*
QDomDocument__ParseResult* q_domdocument__parseresult_new(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorMessage-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDomDocument__ParseResult*
const char* q_domdocument__parseresult_error_message(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorMessage-var)
///
/// @param self QDomDocument__ParseResult*
/// @param errorMessage const char*
void q_domdocument__parseresult_set_error_message(void* self, const char* errorMessage);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorLine-var)
///
/// @param self QDomDocument__ParseResult*
int64_t q_domdocument__parseresult_error_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorLine-var)
///
/// @param self QDomDocument__ParseResult*
/// @param errorLine int64_t
void q_domdocument__parseresult_set_error_line(void* self, int64_t errorLine);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorColumn-var)
///
/// @param self QDomDocument__ParseResult*
int64_t q_domdocument__parseresult_error_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorColumn-var)
///
/// @param self QDomDocument__ParseResult*
/// @param errorColumn int64_t
void q_domdocument__parseresult_set_error_column(void* self, int64_t errorColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#operator)
///
/// @param self QDomDocument__ParseResult*
bool q_domdocument__parseresult_to_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#operator-eq)
///
/// @param self QDomDocument__ParseResult*
/// @param param1 QDomDocument__ParseResult*
void q_domdocument__parseresult_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self QDomDocument__ParseResult*
void q_domdocument__parseresult_delete(void* self);

/// https://doc.qt.io/qt-6/qdom.html#types

typedef enum {
    QDOMIMPLEMENTATION_INVALIDDATAPOLICY_ACCEPTINVALIDCHARS = 0,
    QDOMIMPLEMENTATION_INVALIDDATAPOLICY_DROPINVALIDCHARS = 1,
    QDOMIMPLEMENTATION_INVALIDDATAPOLICY_RETURNNULLNODE = 2
} QDomImplementation__InvalidDataPolicy;

typedef enum {
    QDOMNODE_NODETYPE_ELEMENTNODE = 1,
    QDOMNODE_NODETYPE_ATTRIBUTENODE = 2,
    QDOMNODE_NODETYPE_TEXTNODE = 3,
    QDOMNODE_NODETYPE_CDATASECTIONNODE = 4,
    QDOMNODE_NODETYPE_ENTITYREFERENCENODE = 5,
    QDOMNODE_NODETYPE_ENTITYNODE = 6,
    QDOMNODE_NODETYPE_PROCESSINGINSTRUCTIONNODE = 7,
    QDOMNODE_NODETYPE_COMMENTNODE = 8,
    QDOMNODE_NODETYPE_DOCUMENTNODE = 9,
    QDOMNODE_NODETYPE_DOCUMENTTYPENODE = 10,
    QDOMNODE_NODETYPE_DOCUMENTFRAGMENTNODE = 11,
    QDOMNODE_NODETYPE_NOTATIONNODE = 12,
    QDOMNODE_NODETYPE_BASENODE = 21,
    QDOMNODE_NODETYPE_CHARACTERDATANODE = 22
} QDomNode__NodeType;

typedef enum {
    QDOMNODE_ENCODINGPOLICY_ENCODINGFROMDOCUMENT = 1,
    QDOMNODE_ENCODINGPOLICY_ENCODINGFROMTEXTSTREAM = 2
} QDomNode__EncodingPolicy;

typedef enum {
    QDOMDOCUMENT_PARSEOPTION_DEFAULT = 0,
    QDOMDOCUMENT_PARSEOPTION_USENAMESPACEPROCESSING = 1,
    QDOMDOCUMENT_PARSEOPTION_PRESERVESPACINGONLYNODES = 2
} QDomDocument__ParseOption;

#endif
