#pragma once
#ifndef XML_LIBQDOM_H
#define XML_LIBQDOM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html)

/// q_domimplementation_new constructs a new QDomImplementation object.
///
QDomImplementation* q_domimplementation_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html)

/// q_domimplementation_new2 constructs a new QDomImplementation object.
///
/// @param implementation QDomImplementation*
///
QDomImplementation* q_domimplementation_new2(const void* implementation);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#operator-eq)
///
/// @param self QDomImplementation*
/// @param other QDomImplementation*
///
void q_domimplementation_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#operator-eq-eq)
///
/// @param self const QDomImplementation*
/// @param other QDomImplementation*
///
bool q_domimplementation_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#operator-not-eq)
///
/// @param self const QDomImplementation*
/// @param other QDomImplementation*
///
bool q_domimplementation_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#hasFeature)
///
/// @param self const QDomImplementation*
/// @param feature const char*
/// @param version const char*
///
bool q_domimplementation_has_feature(const void* self, const char* feature, const char* version);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#createDocumentType)
///
/// @param self QDomImplementation*
/// @param qName const char*
/// @param publicId const char*
/// @param systemId const char*
///
QDomDocumentType* q_domimplementation_create_document_type(void* self, const char* qName, const char* publicId, const char* systemId);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#createDocument)
///
/// @param self QDomImplementation*
/// @param nsURI const char*
/// @param qName const char*
/// @param doctype QDomDocumentType*
///
QDomDocument* q_domimplementation_create_document(void* self, const char* nsURI, const char* qName, const void* doctype);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#invalidDataPolicy)
///
/// @return enum QDomImplementation__InvalidDataPolicy
///
int32_t q_domimplementation_invalid_data_policy();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#setInvalidDataPolicy)
///
/// @param policy enum QDomImplementation__InvalidDataPolicy
///
void q_domimplementation_set_invalid_data_policy(int32_t policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#isNull)
///
/// @param self QDomImplementation*
///
bool q_domimplementation_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#dtor.QDomImplementation)
///
/// Delete this object from C++ memory.
///
/// @param self QDomImplementation*
///
void q_domimplementation_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html)

/// q_domnode_new constructs a new QDomNode object.
///
QDomNode* q_domnode_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html)

/// q_domnode_new2 constructs a new QDomNode object.
///
/// @param node QDomNode*
///
QDomNode* q_domnode_new2(const void* node);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq)
///
/// @param self QDomNode*
/// @param other QDomNode*
///
void q_domnode_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self const QDomNode*
/// @param other QDomNode*
///
bool q_domnode_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self const QDomNode*
/// @param other QDomNode*
///
bool q_domnode_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomNode*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domnode_insert_before(void* self, const void* newChild, const void* refChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomNode*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domnode_insert_after(void* self, const void* newChild, const void* refChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomNode*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
///
QDomNode* q_domnode_replace_child(void* self, const void* newChild, const void* oldChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomNode*
/// @param oldChild QDomNode*
///
QDomNode* q_domnode_remove_child(void* self, const void* oldChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomNode*
/// @param newChild QDomNode*
///
QDomNode* q_domnode_append_child(void* self, const void* newChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self const QDomNode*
///
bool q_domnode_has_child_nodes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomNode*
///
QDomNode* q_domnode_clone_node(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomNode*
///
void q_domnode_normalize(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self const QDomNode*
/// @param feature const char*
/// @param version const char*
///
bool q_domnode_is_supported(const void* self, const char* feature, const char* version);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomNode*
///
const char* q_domnode_node_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeType)
///
/// @param self const QDomNode*
///
/// @return enum QDomNode__NodeType
///
int32_t q_domnode_node_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self const QDomNode*
///
QDomNode* q_domnode_parent_node(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self const QDomNode*
///
QDomNodeList* q_domnode_child_nodes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self const QDomNode*
///
QDomNode* q_domnode_first_child(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self const QDomNode*
///
QDomNode* q_domnode_last_child(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self const QDomNode*
///
QDomNode* q_domnode_previous_sibling(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self const QDomNode*
///
QDomNode* q_domnode_next_sibling(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self const QDomNode*
///
QDomNamedNodeMap* q_domnode_attributes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self const QDomNode*
///
QDomDocument* q_domnode_owner_document(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomNode*
///
const char* q_domnode_namespace_u_r_i(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomNode*
///
const char* q_domnode_local_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self const QDomNode*
///
bool q_domnode_has_attributes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomNode*
///
const char* q_domnode_node_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomNode*
/// @param value const char*
///
void q_domnode_set_node_value(void* self, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomNode*
///
const char* q_domnode_prefix(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomNode*
/// @param pre const char*
///
void q_domnode_set_prefix(void* self, const char* pre);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self const QDomNode*
///
bool q_domnode_is_attr(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self const QDomNode*
///
bool q_domnode_is_c_d_a_t_a_section(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self const QDomNode*
///
bool q_domnode_is_document_fragment(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self const QDomNode*
///
bool q_domnode_is_document(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self const QDomNode*
///
bool q_domnode_is_document_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self const QDomNode*
///
bool q_domnode_is_element(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self const QDomNode*
///
bool q_domnode_is_entity_reference(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self const QDomNode*
///
bool q_domnode_is_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self const QDomNode*
///
bool q_domnode_is_entity(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self const QDomNode*
///
bool q_domnode_is_notation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self const QDomNode*
///
bool q_domnode_is_processing_instruction(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self const QDomNode*
///
bool q_domnode_is_character_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self const QDomNode*
///
bool q_domnode_is_comment(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self const QDomNode*
/// @param name const char*
///
QDomNode* q_domnode_named_item(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self const QDomNode*
///
bool q_domnode_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomNode*
///
void q_domnode_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self const QDomNode*
///
QDomAttr* q_domnode_to_attr(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self const QDomNode*
///
QDomCDATASection* q_domnode_to_c_d_a_t_a_section(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self const QDomNode*
///
QDomDocumentFragment* q_domnode_to_document_fragment(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self const QDomNode*
///
QDomDocument* q_domnode_to_document(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self const QDomNode*
///
QDomDocumentType* q_domnode_to_document_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self const QDomNode*
///
QDomElement* q_domnode_to_element(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self const QDomNode*
///
QDomEntityReference* q_domnode_to_entity_reference(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self const QDomNode*
///
QDomText* q_domnode_to_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self const QDomNode*
///
QDomEntity* q_domnode_to_entity(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self const QDomNode*
///
QDomNotation* q_domnode_to_notation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self const QDomNode*
///
QDomProcessingInstruction* q_domnode_to_processing_instruction(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self const QDomNode*
///
QDomCharacterData* q_domnode_to_character_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self const QDomNode*
///
QDomComment* q_domnode_to_comment(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomNode*
/// @param param1 QTextStream*
/// @param param2 int
///
void q_domnode_save(const void* self, void* param1, int param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomNode*
///
QDomElement* q_domnode_first_child_element(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomNode*
///
QDomElement* q_domnode_last_child_element(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomNode*
///
QDomElement* q_domnode_previous_sibling_element(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomNode*
///
QDomElement* q_domnode_next_sibling_element(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self const QDomNode*
///
int32_t q_domnode_line_number(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self const QDomNode*
///
int32_t q_domnode_column_number(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomNode*
/// @param deep bool
///
QDomNode* q_domnode_clone_node1(const void* self, bool deep);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomNode*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
///
void q_domnode_save3(const void* self, void* param1, int param2, int32_t param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomNode*
/// @param tagName const char*
///
QDomElement* q_domnode_first_child_element1(const void* self, const char* tagName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomNode*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domnode_first_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomNode*
/// @param tagName const char*
///
QDomElement* q_domnode_last_child_element1(const void* self, const char* tagName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomNode*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domnode_last_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomNode*
/// @param tagName const char*
///
QDomElement* q_domnode_previous_sibling_element1(const void* self, const char* tagName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomNode*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domnode_previous_sibling_element2(const void* self, const char* tagName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomNode*
/// @param taName const char*
///
QDomElement* q_domnode_next_sibling_element1(const void* self, const char* taName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomNode*
/// @param taName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domnode_next_sibling_element2(const void* self, const char* taName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#dtor.QDomNode)
///
/// Delete this object from C++ memory.
///
/// @param self QDomNode*
///
void q_domnode_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html)

/// q_domnodelist_new constructs a new QDomNodeList object.
///
QDomNodeList* q_domnodelist_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html)

/// q_domnodelist_new2 constructs a new QDomNodeList object.
///
/// @param nodeList QDomNodeList*
///
QDomNodeList* q_domnodelist_new2(const void* nodeList);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#operator-eq)
///
/// @param self QDomNodeList*
/// @param other QDomNodeList*
///
void q_domnodelist_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#operator-eq-eq)
///
/// @param self const QDomNodeList*
/// @param other QDomNodeList*
///
bool q_domnodelist_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#operator-not-eq)
///
/// @param self const QDomNodeList*
/// @param other QDomNodeList*
///
bool q_domnodelist_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#item)
///
/// @param self const QDomNodeList*
/// @param index int
///
QDomNode* q_domnodelist_item(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#at)
///
/// @param self const QDomNodeList*
/// @param index int
///
QDomNode* q_domnodelist_at(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#length)
///
/// @param self const QDomNodeList*
///
int32_t q_domnodelist_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#count)
///
/// @param self const QDomNodeList*
///
int32_t q_domnodelist_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#size)
///
/// @param self const QDomNodeList*
///
int32_t q_domnodelist_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#isEmpty)
///
/// @param self const QDomNodeList*
///
bool q_domnodelist_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#dtor.QDomNodeList)
///
/// Delete this object from C++ memory.
///
/// @param self QDomNodeList*
///
void q_domnodelist_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html)

/// q_domdocumenttype_new constructs a new QDomDocumentType object.
///
QDomDocumentType* q_domdocumenttype_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html)

/// q_domdocumenttype_new2 constructs a new QDomDocumentType object.
///
/// @param documentType QDomDocumentType*
///
QDomDocumentType* q_domdocumenttype_new2(const void* documentType);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#operator-eq)
///
/// @param self QDomDocumentType*
/// @param other QDomDocumentType*
///
void q_domdocumenttype_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocumentType*
///
const char* q_domdocumenttype_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#entities)
///
/// @param self const QDomDocumentType*
///
QDomNamedNodeMap* q_domdocumenttype_entities(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#notations)
///
/// @param self const QDomDocumentType*
///
QDomNamedNodeMap* q_domdocumenttype_notations(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#publicId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocumentType*
///
const char* q_domdocumenttype_public_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#systemId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocumentType*
///
const char* q_domdocumenttype_system_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#internalSubset)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocumentType*
///
const char* q_domdocumenttype_internal_subset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#nodeType)
///
/// @param self const QDomDocumentType*
///
/// @return enum QDomNode__NodeType
///
int32_t q_domdocumenttype_node_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self const QDomDocumentType*
/// @param other QDomNode*
///
bool q_domdocumenttype_operator_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self const QDomDocumentType*
/// @param other QDomNode*
///
bool q_domdocumenttype_operator_not_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomDocumentType*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domdocumenttype_insert_before(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomDocumentType*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domdocumenttype_insert_after(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomDocumentType*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
///
QDomNode* q_domdocumenttype_replace_child(void* self, const void* newChild, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomDocumentType*
/// @param oldChild QDomNode*
///
QDomNode* q_domdocumenttype_remove_child(void* self, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomDocumentType*
/// @param newChild QDomNode*
///
QDomNode* q_domdocumenttype_append_child(void* self, const void* newChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self const QDomDocumentType*
///
bool q_domdocumenttype_has_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomDocumentType*
///
QDomNode* q_domdocumenttype_clone_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomDocumentType*
///
void q_domdocumenttype_normalize(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self const QDomDocumentType*
/// @param feature const char*
/// @param version const char*
///
bool q_domdocumenttype_is_supported(const void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocumentType*
///
const char* q_domdocumenttype_node_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self const QDomDocumentType*
///
QDomNode* q_domdocumenttype_parent_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self const QDomDocumentType*
///
QDomNodeList* q_domdocumenttype_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self const QDomDocumentType*
///
QDomNode* q_domdocumenttype_first_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self const QDomDocumentType*
///
QDomNode* q_domdocumenttype_last_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self const QDomDocumentType*
///
QDomNode* q_domdocumenttype_previous_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self const QDomDocumentType*
///
QDomNode* q_domdocumenttype_next_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self const QDomDocumentType*
///
QDomNamedNodeMap* q_domdocumenttype_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self const QDomDocumentType*
///
QDomDocument* q_domdocumenttype_owner_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocumentType*
///
const char* q_domdocumenttype_namespace_u_r_i(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocumentType*
///
const char* q_domdocumenttype_local_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self const QDomDocumentType*
///
bool q_domdocumenttype_has_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocumentType*
///
const char* q_domdocumenttype_node_value(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomDocumentType*
/// @param value const char*
///
void q_domdocumenttype_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocumentType*
///
const char* q_domdocumenttype_prefix(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomDocumentType*
/// @param pre const char*
///
void q_domdocumenttype_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self const QDomDocumentType*
///
bool q_domdocumenttype_is_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self const QDomDocumentType*
///
bool q_domdocumenttype_is_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self const QDomDocumentType*
///
bool q_domdocumenttype_is_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self const QDomDocumentType*
///
bool q_domdocumenttype_is_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self const QDomDocumentType*
///
bool q_domdocumenttype_is_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self const QDomDocumentType*
///
bool q_domdocumenttype_is_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self const QDomDocumentType*
///
bool q_domdocumenttype_is_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self const QDomDocumentType*
///
bool q_domdocumenttype_is_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self const QDomDocumentType*
///
bool q_domdocumenttype_is_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self const QDomDocumentType*
///
bool q_domdocumenttype_is_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self const QDomDocumentType*
///
bool q_domdocumenttype_is_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self const QDomDocumentType*
///
bool q_domdocumenttype_is_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self const QDomDocumentType*
///
bool q_domdocumenttype_is_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self const QDomDocumentType*
/// @param name const char*
///
QDomNode* q_domdocumenttype_named_item(const void* self, const char* name);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self const QDomDocumentType*
///
bool q_domdocumenttype_is_null(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomDocumentType*
///
void q_domdocumenttype_clear(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self const QDomDocumentType*
///
QDomAttr* q_domdocumenttype_to_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self const QDomDocumentType*
///
QDomCDATASection* q_domdocumenttype_to_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self const QDomDocumentType*
///
QDomDocumentFragment* q_domdocumenttype_to_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self const QDomDocumentType*
///
QDomDocument* q_domdocumenttype_to_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self const QDomDocumentType*
///
QDomDocumentType* q_domdocumenttype_to_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self const QDomDocumentType*
///
QDomElement* q_domdocumenttype_to_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self const QDomDocumentType*
///
QDomEntityReference* q_domdocumenttype_to_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self const QDomDocumentType*
///
QDomText* q_domdocumenttype_to_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self const QDomDocumentType*
///
QDomEntity* q_domdocumenttype_to_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self const QDomDocumentType*
///
QDomNotation* q_domdocumenttype_to_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self const QDomDocumentType*
///
QDomProcessingInstruction* q_domdocumenttype_to_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self const QDomDocumentType*
///
QDomCharacterData* q_domdocumenttype_to_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self const QDomDocumentType*
///
QDomComment* q_domdocumenttype_to_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomDocumentType*
/// @param param1 QTextStream*
/// @param param2 int
///
void q_domdocumenttype_save(const void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomDocumentType*
///
QDomElement* q_domdocumenttype_first_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomDocumentType*
///
QDomElement* q_domdocumenttype_last_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomDocumentType*
///
QDomElement* q_domdocumenttype_previous_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomDocumentType*
///
QDomElement* q_domdocumenttype_next_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self const QDomDocumentType*
///
int32_t q_domdocumenttype_line_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self const QDomDocumentType*
///
int32_t q_domdocumenttype_column_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomDocumentType*
/// @param deep bool
///
QDomNode* q_domdocumenttype_clone_node1(const void* self, bool deep);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomDocumentType*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
///
void q_domdocumenttype_save3(const void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomDocumentType*
/// @param tagName const char*
///
QDomElement* q_domdocumenttype_first_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomDocumentType*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domdocumenttype_first_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomDocumentType*
/// @param tagName const char*
///
QDomElement* q_domdocumenttype_last_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomDocumentType*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domdocumenttype_last_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomDocumentType*
/// @param tagName const char*
///
QDomElement* q_domdocumenttype_previous_sibling_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomDocumentType*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domdocumenttype_previous_sibling_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomDocumentType*
/// @param taName const char*
///
QDomElement* q_domdocumenttype_next_sibling_element1(const void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomDocumentType*
/// @param taName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domdocumenttype_next_sibling_element2(const void* self, const char* taName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#dtor.QDomDocumentType)
///
/// Delete this object from C++ memory.
///
/// @param self QDomDocumentType*
///
void q_domdocumenttype_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html)

/// q_domdocument_new constructs a new QDomDocument object.
///
QDomDocument* q_domdocument_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html)

/// q_domdocument_new2 constructs a new QDomDocument object.
///
/// @param name const char*
///
QDomDocument* q_domdocument_new2(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html)

/// q_domdocument_new3 constructs a new QDomDocument object.
///
/// @param doctype QDomDocumentType*
///
QDomDocument* q_domdocument_new3(const void* doctype);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html)

/// q_domdocument_new4 constructs a new QDomDocument object.
///
/// @param document QDomDocument*
///
QDomDocument* q_domdocument_new4(const void* document);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#operator-eq)
///
/// @param self QDomDocument*
/// @param other QDomDocument*
///
void q_domdocument_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createElement)
///
/// @param self QDomDocument*
/// @param tagName const char*
///
QDomElement* q_domdocument_create_element(void* self, const char* tagName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createDocumentFragment)
///
/// @param self QDomDocument*
///
QDomDocumentFragment* q_domdocument_create_document_fragment(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createTextNode)
///
/// @param self QDomDocument*
/// @param data const char*
///
QDomText* q_domdocument_create_text_node(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createComment)
///
/// @param self QDomDocument*
/// @param data const char*
///
QDomComment* q_domdocument_create_comment(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createCDATASection)
///
/// @param self QDomDocument*
/// @param data const char*
///
QDomCDATASection* q_domdocument_create_c_d_a_t_a_section(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createProcessingInstruction)
///
/// @param self QDomDocument*
/// @param target const char*
/// @param data const char*
///
QDomProcessingInstruction* q_domdocument_create_processing_instruction(void* self, const char* target, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createAttribute)
///
/// @param self QDomDocument*
/// @param name const char*
///
QDomAttr* q_domdocument_create_attribute(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createEntityReference)
///
/// @param self QDomDocument*
/// @param name const char*
///
QDomEntityReference* q_domdocument_create_entity_reference(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#elementsByTagName)
///
/// @param self const QDomDocument*
/// @param tagname const char*
///
QDomNodeList* q_domdocument_elements_by_tag_name(const void* self, const char* tagname);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#importNode)
///
/// @param self QDomDocument*
/// @param importedNode QDomNode*
/// @param deep bool
///
QDomNode* q_domdocument_import_node(void* self, const void* importedNode, bool deep);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createElementNS)
///
/// @param self QDomDocument*
/// @param nsURI const char*
/// @param qName const char*
///
QDomElement* q_domdocument_create_element_n_s(void* self, const char* nsURI, const char* qName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createAttributeNS)
///
/// @param self QDomDocument*
/// @param nsURI const char*
/// @param qName const char*
///
QDomAttr* q_domdocument_create_attribute_n_s(void* self, const char* nsURI, const char* qName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#elementsByTagNameNS)
///
/// @param self QDomDocument*
/// @param nsURI const char*
/// @param localName const char*
///
QDomNodeList* q_domdocument_elements_by_tag_name_n_s(void* self, const char* nsURI, const char* localName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#elementById)
///
/// @param self QDomDocument*
/// @param elementId const char*
///
QDomElement* q_domdocument_element_by_id(void* self, const char* elementId);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#doctype)
///
/// @param self const QDomDocument*
///
QDomDocumentType* q_domdocument_doctype(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#implementation)
///
/// @param self const QDomDocument*
///
QDomImplementation* q_domdocument_implementation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#documentElement)
///
/// @param self const QDomDocument*
///
QDomElement* q_domdocument_document_element(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#nodeType)
///
/// @param self const QDomDocument*
///
/// @return enum QDomNode__NodeType
///
int32_t q_domdocument_node_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param text char*
/// @param namespaceProcessing bool
///
bool q_domdocument_set_content(void* self, char* text, bool namespaceProcessing);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param text const char*
/// @param namespaceProcessing bool
///
bool q_domdocument_set_content2(void* self, const char* text, bool namespaceProcessing);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param dev QIODevice*
/// @param namespaceProcessing bool
///
bool q_domdocument_set_content3(void* self, void* dev, bool namespaceProcessing);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param reader QXmlStreamReader*
/// @param namespaceProcessing bool
///
bool q_domdocument_set_content7(void* self, void* reader, bool namespaceProcessing);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param data const char*
///
QDomDocument__ParseResult* q_domdocument_set_content8(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param device QIODevice*
///
QDomDocument__ParseResult* q_domdocument_set_content9(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param reader QXmlStreamReader*
///
QDomDocument__ParseResult* q_domdocument_set_content10(void* self, void* reader);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocument*
///
const char* q_domdocument_to_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#toByteArray)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QDomDocument*
///
char* q_domdocument_to_byte_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param data const char*
/// @param options flag of enum QDomDocument__ParseOption
///
QDomDocument__ParseResult* q_domdocument_set_content22(void* self, const char* data, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param device QIODevice*
/// @param options flag of enum QDomDocument__ParseOption
///
QDomDocument__ParseResult* q_domdocument_set_content23(void* self, void* device, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
///
/// @param self QDomDocument*
/// @param reader QXmlStreamReader*
/// @param options flag of enum QDomDocument__ParseOption
///
QDomDocument__ParseResult* q_domdocument_set_content24(void* self, void* reader, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocument*
/// @param indent int
///
const char* q_domdocument_to_string1(const void* self, int indent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#toByteArray)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QDomDocument*
/// @param indent int
///
char* q_domdocument_to_byte_array1(const void* self, int indent);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self const QDomDocument*
/// @param other QDomNode*
///
bool q_domdocument_operator_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self const QDomDocument*
/// @param other QDomNode*
///
bool q_domdocument_operator_not_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomDocument*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domdocument_insert_before(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomDocument*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domdocument_insert_after(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomDocument*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
///
QDomNode* q_domdocument_replace_child(void* self, const void* newChild, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomDocument*
/// @param oldChild QDomNode*
///
QDomNode* q_domdocument_remove_child(void* self, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomDocument*
/// @param newChild QDomNode*
///
QDomNode* q_domdocument_append_child(void* self, const void* newChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self const QDomDocument*
///
bool q_domdocument_has_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomDocument*
///
QDomNode* q_domdocument_clone_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomDocument*
///
void q_domdocument_normalize(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self const QDomDocument*
/// @param feature const char*
/// @param version const char*
///
bool q_domdocument_is_supported(const void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocument*
///
const char* q_domdocument_node_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self const QDomDocument*
///
QDomNode* q_domdocument_parent_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self const QDomDocument*
///
QDomNodeList* q_domdocument_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self const QDomDocument*
///
QDomNode* q_domdocument_first_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self const QDomDocument*
///
QDomNode* q_domdocument_last_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self const QDomDocument*
///
QDomNode* q_domdocument_previous_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self const QDomDocument*
///
QDomNode* q_domdocument_next_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self const QDomDocument*
///
QDomNamedNodeMap* q_domdocument_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self const QDomDocument*
///
QDomDocument* q_domdocument_owner_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocument*
///
const char* q_domdocument_namespace_u_r_i(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocument*
///
const char* q_domdocument_local_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self const QDomDocument*
///
bool q_domdocument_has_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocument*
///
const char* q_domdocument_node_value(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomDocument*
/// @param value const char*
///
void q_domdocument_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocument*
///
const char* q_domdocument_prefix(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomDocument*
/// @param pre const char*
///
void q_domdocument_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self const QDomDocument*
///
bool q_domdocument_is_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self const QDomDocument*
///
bool q_domdocument_is_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self const QDomDocument*
///
bool q_domdocument_is_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self const QDomDocument*
///
bool q_domdocument_is_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self const QDomDocument*
///
bool q_domdocument_is_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self const QDomDocument*
///
bool q_domdocument_is_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self const QDomDocument*
///
bool q_domdocument_is_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self const QDomDocument*
///
bool q_domdocument_is_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self const QDomDocument*
///
bool q_domdocument_is_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self const QDomDocument*
///
bool q_domdocument_is_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self const QDomDocument*
///
bool q_domdocument_is_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self const QDomDocument*
///
bool q_domdocument_is_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self const QDomDocument*
///
bool q_domdocument_is_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self const QDomDocument*
/// @param name const char*
///
QDomNode* q_domdocument_named_item(const void* self, const char* name);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self const QDomDocument*
///
bool q_domdocument_is_null(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomDocument*
///
void q_domdocument_clear(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self const QDomDocument*
///
QDomAttr* q_domdocument_to_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self const QDomDocument*
///
QDomCDATASection* q_domdocument_to_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self const QDomDocument*
///
QDomDocumentFragment* q_domdocument_to_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self const QDomDocument*
///
QDomDocument* q_domdocument_to_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self const QDomDocument*
///
QDomDocumentType* q_domdocument_to_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self const QDomDocument*
///
QDomElement* q_domdocument_to_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self const QDomDocument*
///
QDomEntityReference* q_domdocument_to_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self const QDomDocument*
///
QDomText* q_domdocument_to_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self const QDomDocument*
///
QDomEntity* q_domdocument_to_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self const QDomDocument*
///
QDomNotation* q_domdocument_to_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self const QDomDocument*
///
QDomProcessingInstruction* q_domdocument_to_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self const QDomDocument*
///
QDomCharacterData* q_domdocument_to_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self const QDomDocument*
///
QDomComment* q_domdocument_to_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomDocument*
/// @param param1 QTextStream*
/// @param param2 int
///
void q_domdocument_save(const void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomDocument*
///
QDomElement* q_domdocument_first_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomDocument*
///
QDomElement* q_domdocument_last_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomDocument*
///
QDomElement* q_domdocument_previous_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomDocument*
///
QDomElement* q_domdocument_next_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self const QDomDocument*
///
int32_t q_domdocument_line_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self const QDomDocument*
///
int32_t q_domdocument_column_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomDocument*
/// @param deep bool
///
QDomNode* q_domdocument_clone_node1(const void* self, bool deep);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomDocument*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
///
void q_domdocument_save3(const void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomDocument*
/// @param tagName const char*
///
QDomElement* q_domdocument_first_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomDocument*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domdocument_first_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomDocument*
/// @param tagName const char*
///
QDomElement* q_domdocument_last_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomDocument*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domdocument_last_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomDocument*
/// @param tagName const char*
///
QDomElement* q_domdocument_previous_sibling_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomDocument*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domdocument_previous_sibling_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomDocument*
/// @param taName const char*
///
QDomElement* q_domdocument_next_sibling_element1(const void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomDocument*
/// @param taName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domdocument_next_sibling_element2(const void* self, const char* taName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#dtor.QDomDocument)
///
/// Delete this object from C++ memory.
///
/// @param self QDomDocument*
///
void q_domdocument_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html)

/// q_domnamednodemap_new constructs a new QDomNamedNodeMap object.
///
QDomNamedNodeMap* q_domnamednodemap_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html)

/// q_domnamednodemap_new2 constructs a new QDomNamedNodeMap object.
///
/// @param namedNodeMap QDomNamedNodeMap*
///
QDomNamedNodeMap* q_domnamednodemap_new2(const void* namedNodeMap);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-eq)
///
/// @param self QDomNamedNodeMap*
/// @param other QDomNamedNodeMap*
///
void q_domnamednodemap_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-eq-eq)
///
/// @param self const QDomNamedNodeMap*
/// @param other QDomNamedNodeMap*
///
bool q_domnamednodemap_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-not-eq)
///
/// @param self const QDomNamedNodeMap*
/// @param other QDomNamedNodeMap*
///
bool q_domnamednodemap_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#namedItem)
///
/// @param self const QDomNamedNodeMap*
/// @param name const char*
///
QDomNode* q_domnamednodemap_named_item(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#setNamedItem)
///
/// @param self QDomNamedNodeMap*
/// @param newNode QDomNode*
///
QDomNode* q_domnamednodemap_set_named_item(void* self, const void* newNode);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#removeNamedItem)
///
/// @param self QDomNamedNodeMap*
/// @param name const char*
///
QDomNode* q_domnamednodemap_remove_named_item(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#item)
///
/// @param self const QDomNamedNodeMap*
/// @param index int
///
QDomNode* q_domnamednodemap_item(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#namedItemNS)
///
/// @param self const QDomNamedNodeMap*
/// @param nsURI const char*
/// @param localName const char*
///
QDomNode* q_domnamednodemap_named_item_n_s(const void* self, const char* nsURI, const char* localName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#setNamedItemNS)
///
/// @param self QDomNamedNodeMap*
/// @param newNode QDomNode*
///
QDomNode* q_domnamednodemap_set_named_item_n_s(void* self, const void* newNode);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#removeNamedItemNS)
///
/// @param self QDomNamedNodeMap*
/// @param nsURI const char*
/// @param localName const char*
///
QDomNode* q_domnamednodemap_remove_named_item_n_s(void* self, const char* nsURI, const char* localName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#length)
///
/// @param self const QDomNamedNodeMap*
///
int32_t q_domnamednodemap_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#count)
///
/// @param self const QDomNamedNodeMap*
///
int32_t q_domnamednodemap_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#size)
///
/// @param self const QDomNamedNodeMap*
///
int32_t q_domnamednodemap_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#isEmpty)
///
/// @param self const QDomNamedNodeMap*
///
bool q_domnamednodemap_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#contains)
///
/// @param self const QDomNamedNodeMap*
/// @param name const char*
///
bool q_domnamednodemap_contains(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#dtor.QDomNamedNodeMap)
///
/// Delete this object from C++ memory.
///
/// @param self QDomNamedNodeMap*
///
void q_domnamednodemap_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocumentfragment.html)

/// q_domdocumentfragment_new constructs a new QDomDocumentFragment object.
///
QDomDocumentFragment* q_domdocumentfragment_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocumentfragment.html)

/// q_domdocumentfragment_new2 constructs a new QDomDocumentFragment object.
///
/// @param documentFragment QDomDocumentFragment*
///
QDomDocumentFragment* q_domdocumentfragment_new2(const void* documentFragment);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocumentfragment.html#operator-eq)
///
/// @param self QDomDocumentFragment*
/// @param other QDomDocumentFragment*
///
void q_domdocumentfragment_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocumentfragment.html#nodeType)
///
/// @param self const QDomDocumentFragment*
///
/// @return enum QDomNode__NodeType
///
int32_t q_domdocumentfragment_node_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self const QDomDocumentFragment*
/// @param other QDomNode*
///
bool q_domdocumentfragment_operator_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self const QDomDocumentFragment*
/// @param other QDomNode*
///
bool q_domdocumentfragment_operator_not_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomDocumentFragment*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domdocumentfragment_insert_before(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomDocumentFragment*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domdocumentfragment_insert_after(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomDocumentFragment*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
///
QDomNode* q_domdocumentfragment_replace_child(void* self, const void* newChild, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomDocumentFragment*
/// @param oldChild QDomNode*
///
QDomNode* q_domdocumentfragment_remove_child(void* self, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomDocumentFragment*
/// @param newChild QDomNode*
///
QDomNode* q_domdocumentfragment_append_child(void* self, const void* newChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self const QDomDocumentFragment*
///
bool q_domdocumentfragment_has_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomDocumentFragment*
///
QDomNode* q_domdocumentfragment_clone_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomDocumentFragment*
///
void q_domdocumentfragment_normalize(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self const QDomDocumentFragment*
/// @param feature const char*
/// @param version const char*
///
bool q_domdocumentfragment_is_supported(const void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocumentFragment*
///
const char* q_domdocumentfragment_node_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self const QDomDocumentFragment*
///
QDomNode* q_domdocumentfragment_parent_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self const QDomDocumentFragment*
///
QDomNodeList* q_domdocumentfragment_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self const QDomDocumentFragment*
///
QDomNode* q_domdocumentfragment_first_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self const QDomDocumentFragment*
///
QDomNode* q_domdocumentfragment_last_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self const QDomDocumentFragment*
///
QDomNode* q_domdocumentfragment_previous_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self const QDomDocumentFragment*
///
QDomNode* q_domdocumentfragment_next_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self const QDomDocumentFragment*
///
QDomNamedNodeMap* q_domdocumentfragment_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self const QDomDocumentFragment*
///
QDomDocument* q_domdocumentfragment_owner_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocumentFragment*
///
const char* q_domdocumentfragment_namespace_u_r_i(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocumentFragment*
///
const char* q_domdocumentfragment_local_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self const QDomDocumentFragment*
///
bool q_domdocumentfragment_has_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocumentFragment*
///
const char* q_domdocumentfragment_node_value(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomDocumentFragment*
/// @param value const char*
///
void q_domdocumentfragment_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocumentFragment*
///
const char* q_domdocumentfragment_prefix(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomDocumentFragment*
/// @param pre const char*
///
void q_domdocumentfragment_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self const QDomDocumentFragment*
///
bool q_domdocumentfragment_is_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self const QDomDocumentFragment*
///
bool q_domdocumentfragment_is_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self const QDomDocumentFragment*
///
bool q_domdocumentfragment_is_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self const QDomDocumentFragment*
///
bool q_domdocumentfragment_is_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self const QDomDocumentFragment*
///
bool q_domdocumentfragment_is_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self const QDomDocumentFragment*
///
bool q_domdocumentfragment_is_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self const QDomDocumentFragment*
///
bool q_domdocumentfragment_is_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self const QDomDocumentFragment*
///
bool q_domdocumentfragment_is_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self const QDomDocumentFragment*
///
bool q_domdocumentfragment_is_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self const QDomDocumentFragment*
///
bool q_domdocumentfragment_is_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self const QDomDocumentFragment*
///
bool q_domdocumentfragment_is_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self const QDomDocumentFragment*
///
bool q_domdocumentfragment_is_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self const QDomDocumentFragment*
///
bool q_domdocumentfragment_is_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self const QDomDocumentFragment*
/// @param name const char*
///
QDomNode* q_domdocumentfragment_named_item(const void* self, const char* name);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self const QDomDocumentFragment*
///
bool q_domdocumentfragment_is_null(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomDocumentFragment*
///
void q_domdocumentfragment_clear(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self const QDomDocumentFragment*
///
QDomAttr* q_domdocumentfragment_to_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self const QDomDocumentFragment*
///
QDomCDATASection* q_domdocumentfragment_to_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self const QDomDocumentFragment*
///
QDomDocumentFragment* q_domdocumentfragment_to_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self const QDomDocumentFragment*
///
QDomDocument* q_domdocumentfragment_to_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self const QDomDocumentFragment*
///
QDomDocumentType* q_domdocumentfragment_to_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self const QDomDocumentFragment*
///
QDomElement* q_domdocumentfragment_to_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self const QDomDocumentFragment*
///
QDomEntityReference* q_domdocumentfragment_to_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self const QDomDocumentFragment*
///
QDomText* q_domdocumentfragment_to_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self const QDomDocumentFragment*
///
QDomEntity* q_domdocumentfragment_to_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self const QDomDocumentFragment*
///
QDomNotation* q_domdocumentfragment_to_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self const QDomDocumentFragment*
///
QDomProcessingInstruction* q_domdocumentfragment_to_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self const QDomDocumentFragment*
///
QDomCharacterData* q_domdocumentfragment_to_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self const QDomDocumentFragment*
///
QDomComment* q_domdocumentfragment_to_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomDocumentFragment*
/// @param param1 QTextStream*
/// @param param2 int
///
void q_domdocumentfragment_save(const void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomDocumentFragment*
///
QDomElement* q_domdocumentfragment_first_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomDocumentFragment*
///
QDomElement* q_domdocumentfragment_last_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomDocumentFragment*
///
QDomElement* q_domdocumentfragment_previous_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomDocumentFragment*
///
QDomElement* q_domdocumentfragment_next_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self const QDomDocumentFragment*
///
int32_t q_domdocumentfragment_line_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self const QDomDocumentFragment*
///
int32_t q_domdocumentfragment_column_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomDocumentFragment*
/// @param deep bool
///
QDomNode* q_domdocumentfragment_clone_node1(const void* self, bool deep);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomDocumentFragment*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
///
void q_domdocumentfragment_save3(const void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomDocumentFragment*
/// @param tagName const char*
///
QDomElement* q_domdocumentfragment_first_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomDocumentFragment*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domdocumentfragment_first_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomDocumentFragment*
/// @param tagName const char*
///
QDomElement* q_domdocumentfragment_last_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomDocumentFragment*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domdocumentfragment_last_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomDocumentFragment*
/// @param tagName const char*
///
QDomElement* q_domdocumentfragment_previous_sibling_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomDocumentFragment*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domdocumentfragment_previous_sibling_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomDocumentFragment*
/// @param taName const char*
///
QDomElement* q_domdocumentfragment_next_sibling_element1(const void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomDocumentFragment*
/// @param taName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domdocumentfragment_next_sibling_element2(const void* self, const char* taName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocumentfragment.html#dtor.QDomDocumentFragment)
///
/// Delete this object from C++ memory.
///
/// @param self QDomDocumentFragment*
///
void q_domdocumentfragment_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html)

/// q_domcharacterdata_new constructs a new QDomCharacterData object.
///
QDomCharacterData* q_domcharacterdata_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html)

/// q_domcharacterdata_new2 constructs a new QDomCharacterData object.
///
/// @param characterData QDomCharacterData*
///
QDomCharacterData* q_domcharacterdata_new2(const void* characterData);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#operator-eq)
///
/// @param self QDomCharacterData*
/// @param other QDomCharacterData*
///
void q_domcharacterdata_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDomCharacterData*
/// @param offset uintptr_t
/// @param count uintptr_t
///
const char* q_domcharacterdata_substring_data(void* self, uintptr_t offset, uintptr_t count);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
///
/// @param self QDomCharacterData*
/// @param arg const char*
///
void q_domcharacterdata_append_data(void* self, const char* arg);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
///
/// @param self QDomCharacterData*
/// @param offset uintptr_t
/// @param arg const char*
///
void q_domcharacterdata_insert_data(void* self, uintptr_t offset, const char* arg);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
///
/// @param self QDomCharacterData*
/// @param offset uintptr_t
/// @param count uintptr_t
///
void q_domcharacterdata_delete_data(void* self, uintptr_t offset, uintptr_t count);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
///
/// @param self QDomCharacterData*
/// @param offset uintptr_t
/// @param count uintptr_t
/// @param arg const char*
///
void q_domcharacterdata_replace_data(void* self, uintptr_t offset, uintptr_t count, const char* arg);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
///
/// @param self const QDomCharacterData*
///
int32_t q_domcharacterdata_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomCharacterData*
///
const char* q_domcharacterdata_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
///
/// @param self QDomCharacterData*
/// @param data const char*
///
void q_domcharacterdata_set_data(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#nodeType)
///
/// @param self const QDomCharacterData*
///
/// @return enum QDomNode__NodeType
///
int32_t q_domcharacterdata_node_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self const QDomCharacterData*
/// @param other QDomNode*
///
bool q_domcharacterdata_operator_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self const QDomCharacterData*
/// @param other QDomNode*
///
bool q_domcharacterdata_operator_not_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomCharacterData*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domcharacterdata_insert_before(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomCharacterData*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domcharacterdata_insert_after(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomCharacterData*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
///
QDomNode* q_domcharacterdata_replace_child(void* self, const void* newChild, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomCharacterData*
/// @param oldChild QDomNode*
///
QDomNode* q_domcharacterdata_remove_child(void* self, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomCharacterData*
/// @param newChild QDomNode*
///
QDomNode* q_domcharacterdata_append_child(void* self, const void* newChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self const QDomCharacterData*
///
bool q_domcharacterdata_has_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomCharacterData*
///
QDomNode* q_domcharacterdata_clone_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomCharacterData*
///
void q_domcharacterdata_normalize(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self const QDomCharacterData*
/// @param feature const char*
/// @param version const char*
///
bool q_domcharacterdata_is_supported(const void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomCharacterData*
///
const char* q_domcharacterdata_node_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self const QDomCharacterData*
///
QDomNode* q_domcharacterdata_parent_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self const QDomCharacterData*
///
QDomNodeList* q_domcharacterdata_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self const QDomCharacterData*
///
QDomNode* q_domcharacterdata_first_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self const QDomCharacterData*
///
QDomNode* q_domcharacterdata_last_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self const QDomCharacterData*
///
QDomNode* q_domcharacterdata_previous_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self const QDomCharacterData*
///
QDomNode* q_domcharacterdata_next_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self const QDomCharacterData*
///
QDomNamedNodeMap* q_domcharacterdata_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self const QDomCharacterData*
///
QDomDocument* q_domcharacterdata_owner_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomCharacterData*
///
const char* q_domcharacterdata_namespace_u_r_i(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomCharacterData*
///
const char* q_domcharacterdata_local_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self const QDomCharacterData*
///
bool q_domcharacterdata_has_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomCharacterData*
///
const char* q_domcharacterdata_node_value(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomCharacterData*
/// @param value const char*
///
void q_domcharacterdata_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomCharacterData*
///
const char* q_domcharacterdata_prefix(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomCharacterData*
/// @param pre const char*
///
void q_domcharacterdata_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self const QDomCharacterData*
///
bool q_domcharacterdata_is_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self const QDomCharacterData*
///
bool q_domcharacterdata_is_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self const QDomCharacterData*
///
bool q_domcharacterdata_is_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self const QDomCharacterData*
///
bool q_domcharacterdata_is_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self const QDomCharacterData*
///
bool q_domcharacterdata_is_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self const QDomCharacterData*
///
bool q_domcharacterdata_is_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self const QDomCharacterData*
///
bool q_domcharacterdata_is_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self const QDomCharacterData*
///
bool q_domcharacterdata_is_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self const QDomCharacterData*
///
bool q_domcharacterdata_is_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self const QDomCharacterData*
///
bool q_domcharacterdata_is_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self const QDomCharacterData*
///
bool q_domcharacterdata_is_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self const QDomCharacterData*
///
bool q_domcharacterdata_is_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self const QDomCharacterData*
///
bool q_domcharacterdata_is_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self const QDomCharacterData*
/// @param name const char*
///
QDomNode* q_domcharacterdata_named_item(const void* self, const char* name);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self const QDomCharacterData*
///
bool q_domcharacterdata_is_null(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomCharacterData*
///
void q_domcharacterdata_clear(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self const QDomCharacterData*
///
QDomAttr* q_domcharacterdata_to_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self const QDomCharacterData*
///
QDomCDATASection* q_domcharacterdata_to_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self const QDomCharacterData*
///
QDomDocumentFragment* q_domcharacterdata_to_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self const QDomCharacterData*
///
QDomDocument* q_domcharacterdata_to_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self const QDomCharacterData*
///
QDomDocumentType* q_domcharacterdata_to_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self const QDomCharacterData*
///
QDomElement* q_domcharacterdata_to_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self const QDomCharacterData*
///
QDomEntityReference* q_domcharacterdata_to_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self const QDomCharacterData*
///
QDomText* q_domcharacterdata_to_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self const QDomCharacterData*
///
QDomEntity* q_domcharacterdata_to_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self const QDomCharacterData*
///
QDomNotation* q_domcharacterdata_to_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self const QDomCharacterData*
///
QDomProcessingInstruction* q_domcharacterdata_to_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self const QDomCharacterData*
///
QDomCharacterData* q_domcharacterdata_to_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self const QDomCharacterData*
///
QDomComment* q_domcharacterdata_to_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomCharacterData*
/// @param param1 QTextStream*
/// @param param2 int
///
void q_domcharacterdata_save(const void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomCharacterData*
///
QDomElement* q_domcharacterdata_first_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomCharacterData*
///
QDomElement* q_domcharacterdata_last_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomCharacterData*
///
QDomElement* q_domcharacterdata_previous_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomCharacterData*
///
QDomElement* q_domcharacterdata_next_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self const QDomCharacterData*
///
int32_t q_domcharacterdata_line_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self const QDomCharacterData*
///
int32_t q_domcharacterdata_column_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomCharacterData*
/// @param deep bool
///
QDomNode* q_domcharacterdata_clone_node1(const void* self, bool deep);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomCharacterData*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
///
void q_domcharacterdata_save3(const void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomCharacterData*
/// @param tagName const char*
///
QDomElement* q_domcharacterdata_first_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomCharacterData*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domcharacterdata_first_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomCharacterData*
/// @param tagName const char*
///
QDomElement* q_domcharacterdata_last_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomCharacterData*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domcharacterdata_last_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomCharacterData*
/// @param tagName const char*
///
QDomElement* q_domcharacterdata_previous_sibling_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomCharacterData*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domcharacterdata_previous_sibling_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomCharacterData*
/// @param taName const char*
///
QDomElement* q_domcharacterdata_next_sibling_element1(const void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomCharacterData*
/// @param taName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domcharacterdata_next_sibling_element2(const void* self, const char* taName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#dtor.QDomCharacterData)
///
/// Delete this object from C++ memory.
///
/// @param self QDomCharacterData*
///
void q_domcharacterdata_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html)

/// q_domattr_new constructs a new QDomAttr object.
///
QDomAttr* q_domattr_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html)

/// q_domattr_new2 constructs a new QDomAttr object.
///
/// @param attr QDomAttr*
///
QDomAttr* q_domattr_new2(const void* attr);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#operator-eq)
///
/// @param self QDomAttr*
/// @param other QDomAttr*
///
void q_domattr_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomAttr*
///
const char* q_domattr_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#specified)
///
/// @param self const QDomAttr*
///
bool q_domattr_specified(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#ownerElement)
///
/// @param self const QDomAttr*
///
QDomElement* q_domattr_owner_element(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomAttr*
///
const char* q_domattr_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#setValue)
///
/// @param self QDomAttr*
/// @param value const char*
///
void q_domattr_set_value(void* self, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#nodeType)
///
/// @param self const QDomAttr*
///
/// @return enum QDomNode__NodeType
///
int32_t q_domattr_node_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self const QDomAttr*
/// @param other QDomNode*
///
bool q_domattr_operator_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self const QDomAttr*
/// @param other QDomNode*
///
bool q_domattr_operator_not_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomAttr*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domattr_insert_before(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomAttr*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domattr_insert_after(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomAttr*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
///
QDomNode* q_domattr_replace_child(void* self, const void* newChild, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomAttr*
/// @param oldChild QDomNode*
///
QDomNode* q_domattr_remove_child(void* self, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomAttr*
/// @param newChild QDomNode*
///
QDomNode* q_domattr_append_child(void* self, const void* newChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self const QDomAttr*
///
bool q_domattr_has_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomAttr*
///
QDomNode* q_domattr_clone_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomAttr*
///
void q_domattr_normalize(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self const QDomAttr*
/// @param feature const char*
/// @param version const char*
///
bool q_domattr_is_supported(const void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomAttr*
///
const char* q_domattr_node_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self const QDomAttr*
///
QDomNode* q_domattr_parent_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self const QDomAttr*
///
QDomNodeList* q_domattr_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self const QDomAttr*
///
QDomNode* q_domattr_first_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self const QDomAttr*
///
QDomNode* q_domattr_last_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self const QDomAttr*
///
QDomNode* q_domattr_previous_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self const QDomAttr*
///
QDomNode* q_domattr_next_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self const QDomAttr*
///
QDomNamedNodeMap* q_domattr_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self const QDomAttr*
///
QDomDocument* q_domattr_owner_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomAttr*
///
const char* q_domattr_namespace_u_r_i(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomAttr*
///
const char* q_domattr_local_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self const QDomAttr*
///
bool q_domattr_has_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomAttr*
///
const char* q_domattr_node_value(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomAttr*
/// @param value const char*
///
void q_domattr_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomAttr*
///
const char* q_domattr_prefix(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomAttr*
/// @param pre const char*
///
void q_domattr_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self const QDomAttr*
///
bool q_domattr_is_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self const QDomAttr*
///
bool q_domattr_is_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self const QDomAttr*
///
bool q_domattr_is_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self const QDomAttr*
///
bool q_domattr_is_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self const QDomAttr*
///
bool q_domattr_is_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self const QDomAttr*
///
bool q_domattr_is_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self const QDomAttr*
///
bool q_domattr_is_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self const QDomAttr*
///
bool q_domattr_is_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self const QDomAttr*
///
bool q_domattr_is_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self const QDomAttr*
///
bool q_domattr_is_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self const QDomAttr*
///
bool q_domattr_is_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self const QDomAttr*
///
bool q_domattr_is_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self const QDomAttr*
///
bool q_domattr_is_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self const QDomAttr*
/// @param name const char*
///
QDomNode* q_domattr_named_item(const void* self, const char* name);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self const QDomAttr*
///
bool q_domattr_is_null(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomAttr*
///
void q_domattr_clear(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self const QDomAttr*
///
QDomAttr* q_domattr_to_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self const QDomAttr*
///
QDomCDATASection* q_domattr_to_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self const QDomAttr*
///
QDomDocumentFragment* q_domattr_to_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self const QDomAttr*
///
QDomDocument* q_domattr_to_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self const QDomAttr*
///
QDomDocumentType* q_domattr_to_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self const QDomAttr*
///
QDomElement* q_domattr_to_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self const QDomAttr*
///
QDomEntityReference* q_domattr_to_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self const QDomAttr*
///
QDomText* q_domattr_to_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self const QDomAttr*
///
QDomEntity* q_domattr_to_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self const QDomAttr*
///
QDomNotation* q_domattr_to_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self const QDomAttr*
///
QDomProcessingInstruction* q_domattr_to_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self const QDomAttr*
///
QDomCharacterData* q_domattr_to_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self const QDomAttr*
///
QDomComment* q_domattr_to_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomAttr*
/// @param param1 QTextStream*
/// @param param2 int
///
void q_domattr_save(const void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomAttr*
///
QDomElement* q_domattr_first_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomAttr*
///
QDomElement* q_domattr_last_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomAttr*
///
QDomElement* q_domattr_previous_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomAttr*
///
QDomElement* q_domattr_next_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self const QDomAttr*
///
int32_t q_domattr_line_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self const QDomAttr*
///
int32_t q_domattr_column_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomAttr*
/// @param deep bool
///
QDomNode* q_domattr_clone_node1(const void* self, bool deep);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomAttr*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
///
void q_domattr_save3(const void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomAttr*
/// @param tagName const char*
///
QDomElement* q_domattr_first_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomAttr*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domattr_first_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomAttr*
/// @param tagName const char*
///
QDomElement* q_domattr_last_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomAttr*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domattr_last_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomAttr*
/// @param tagName const char*
///
QDomElement* q_domattr_previous_sibling_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomAttr*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domattr_previous_sibling_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomAttr*
/// @param taName const char*
///
QDomElement* q_domattr_next_sibling_element1(const void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomAttr*
/// @param taName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domattr_next_sibling_element2(const void* self, const char* taName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#dtor.QDomAttr)
///
/// Delete this object from C++ memory.
///
/// @param self QDomAttr*
///
void q_domattr_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html)

/// q_domelement_new constructs a new QDomElement object.
///
QDomElement* q_domelement_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html)

/// q_domelement_new2 constructs a new QDomElement object.
///
/// @param element QDomElement*
///
QDomElement* q_domelement_new2(const void* element);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#operator-eq)
///
/// @param self QDomElement*
/// @param other QDomElement*
///
void q_domelement_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attribute)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomElement*
/// @param name const char*
///
const char* q_domelement_attribute(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
///
/// @param self QDomElement*
/// @param name const char*
/// @param value const char*
///
void q_domelement_set_attribute(void* self, const char* name, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
///
/// @param self QDomElement*
/// @param name const char*
/// @param value long long
///
void q_domelement_set_attribute2(void* self, const char* name, long long value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
///
/// @param self QDomElement*
/// @param name const char*
/// @param value uintptr_t
///
void q_domelement_set_attribute3(void* self, const char* name, uintptr_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
///
/// @param self QDomElement*
/// @param name const char*
/// @param value int
///
void q_domelement_set_attribute4(void* self, const char* name, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
///
/// @param self QDomElement*
/// @param name const char*
/// @param value uint32_t
///
void q_domelement_set_attribute5(void* self, const char* name, uint32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
///
/// @param self QDomElement*
/// @param name const char*
/// @param value float
///
void q_domelement_set_attribute6(void* self, const char* name, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
///
/// @param self QDomElement*
/// @param name const char*
/// @param value double
///
void q_domelement_set_attribute7(void* self, const char* name, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#removeAttribute)
///
/// @param self QDomElement*
/// @param name const char*
///
void q_domelement_remove_attribute(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributeNode)
///
/// @param self QDomElement*
/// @param name const char*
///
QDomAttr* q_domelement_attribute_node(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNode)
///
/// @param self QDomElement*
/// @param newAttr QDomAttr*
///
QDomAttr* q_domelement_set_attribute_node(void* self, const void* newAttr);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#removeAttributeNode)
///
/// @param self QDomElement*
/// @param oldAttr QDomAttr*
///
QDomAttr* q_domelement_remove_attribute_node(void* self, const void* oldAttr);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#elementsByTagName)
///
/// @param self const QDomElement*
/// @param tagname const char*
///
QDomNodeList* q_domelement_elements_by_tag_name(const void* self, const char* tagname);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#hasAttribute)
///
/// @param self const QDomElement*
/// @param name const char*
///
bool q_domelement_has_attribute(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributeNS)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomElement*
/// @param nsURI const char*
/// @param localName const char*
///
const char* q_domelement_attribute_n_s(const void* self, const char* nsURI, const char* localName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param qName const char*
/// @param value const char*
///
void q_domelement_set_attribute_n_s(void* self, const char* nsURI, const char* qName, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param qName const char*
/// @param value int
///
void q_domelement_set_attribute_n_s2(void* self, const char* nsURI, const char* qName, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param qName const char*
/// @param value uint32_t
///
void q_domelement_set_attribute_n_s3(void* self, const char* nsURI, const char* qName, uint32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param qName const char*
/// @param value long long
///
void q_domelement_set_attribute_n_s4(void* self, const char* nsURI, const char* qName, long long value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param qName const char*
/// @param value uintptr_t
///
void q_domelement_set_attribute_n_s5(void* self, const char* nsURI, const char* qName, uintptr_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param qName const char*
/// @param value double
///
void q_domelement_set_attribute_n_s6(void* self, const char* nsURI, const char* qName, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#removeAttributeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param localName const char*
///
void q_domelement_remove_attribute_n_s(void* self, const char* nsURI, const char* localName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributeNodeNS)
///
/// @param self QDomElement*
/// @param nsURI const char*
/// @param localName const char*
///
QDomAttr* q_domelement_attribute_node_n_s(void* self, const char* nsURI, const char* localName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNodeNS)
///
/// @param self QDomElement*
/// @param newAttr QDomAttr*
///
QDomAttr* q_domelement_set_attribute_node_n_s(void* self, const void* newAttr);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#elementsByTagNameNS)
///
/// @param self const QDomElement*
/// @param nsURI const char*
/// @param localName const char*
///
QDomNodeList* q_domelement_elements_by_tag_name_n_s(const void* self, const char* nsURI, const char* localName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#hasAttributeNS)
///
/// @param self const QDomElement*
/// @param nsURI const char*
/// @param localName const char*
///
bool q_domelement_has_attribute_n_s(const void* self, const char* nsURI, const char* localName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#tagName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomElement*
///
const char* q_domelement_tag_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setTagName)
///
/// @param self QDomElement*
/// @param name const char*
///
void q_domelement_set_tag_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributes)
///
/// @param self const QDomElement*
///
QDomNamedNodeMap* q_domelement_attributes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#nodeType)
///
/// @param self const QDomElement*
///
/// @return enum QDomNode__NodeType
///
int32_t q_domelement_node_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomElement*
///
const char* q_domelement_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attribute)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomElement*
/// @param name const char*
/// @param defValue const char*
///
const char* q_domelement_attribute2(const void* self, const char* name, const char* defValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributeNS)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomElement*
/// @param nsURI const char*
/// @param localName const char*
/// @param defValue const char*
///
const char* q_domelement_attribute_n_s3(const void* self, const char* nsURI, const char* localName, const char* defValue);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self const QDomElement*
/// @param other QDomNode*
///
bool q_domelement_operator_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self const QDomElement*
/// @param other QDomNode*
///
bool q_domelement_operator_not_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomElement*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domelement_insert_before(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomElement*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domelement_insert_after(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomElement*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
///
QDomNode* q_domelement_replace_child(void* self, const void* newChild, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomElement*
/// @param oldChild QDomNode*
///
QDomNode* q_domelement_remove_child(void* self, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomElement*
/// @param newChild QDomNode*
///
QDomNode* q_domelement_append_child(void* self, const void* newChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self const QDomElement*
///
bool q_domelement_has_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomElement*
///
QDomNode* q_domelement_clone_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomElement*
///
void q_domelement_normalize(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self const QDomElement*
/// @param feature const char*
/// @param version const char*
///
bool q_domelement_is_supported(const void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomElement*
///
const char* q_domelement_node_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self const QDomElement*
///
QDomNode* q_domelement_parent_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self const QDomElement*
///
QDomNodeList* q_domelement_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self const QDomElement*
///
QDomNode* q_domelement_first_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self const QDomElement*
///
QDomNode* q_domelement_last_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self const QDomElement*
///
QDomNode* q_domelement_previous_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self const QDomElement*
///
QDomNode* q_domelement_next_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self const QDomElement*
///
QDomDocument* q_domelement_owner_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomElement*
///
const char* q_domelement_namespace_u_r_i(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomElement*
///
const char* q_domelement_local_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self const QDomElement*
///
bool q_domelement_has_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomElement*
///
const char* q_domelement_node_value(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomElement*
/// @param value const char*
///
void q_domelement_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomElement*
///
const char* q_domelement_prefix(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomElement*
/// @param pre const char*
///
void q_domelement_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self const QDomElement*
///
bool q_domelement_is_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self const QDomElement*
///
bool q_domelement_is_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self const QDomElement*
///
bool q_domelement_is_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self const QDomElement*
///
bool q_domelement_is_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self const QDomElement*
///
bool q_domelement_is_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self const QDomElement*
///
bool q_domelement_is_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self const QDomElement*
///
bool q_domelement_is_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self const QDomElement*
///
bool q_domelement_is_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self const QDomElement*
///
bool q_domelement_is_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self const QDomElement*
///
bool q_domelement_is_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self const QDomElement*
///
bool q_domelement_is_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self const QDomElement*
///
bool q_domelement_is_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self const QDomElement*
///
bool q_domelement_is_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self const QDomElement*
/// @param name const char*
///
QDomNode* q_domelement_named_item(const void* self, const char* name);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self const QDomElement*
///
bool q_domelement_is_null(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomElement*
///
void q_domelement_clear(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self const QDomElement*
///
QDomAttr* q_domelement_to_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self const QDomElement*
///
QDomCDATASection* q_domelement_to_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self const QDomElement*
///
QDomDocumentFragment* q_domelement_to_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self const QDomElement*
///
QDomDocument* q_domelement_to_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self const QDomElement*
///
QDomDocumentType* q_domelement_to_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self const QDomElement*
///
QDomElement* q_domelement_to_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self const QDomElement*
///
QDomEntityReference* q_domelement_to_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self const QDomElement*
///
QDomText* q_domelement_to_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self const QDomElement*
///
QDomEntity* q_domelement_to_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self const QDomElement*
///
QDomNotation* q_domelement_to_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self const QDomElement*
///
QDomProcessingInstruction* q_domelement_to_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self const QDomElement*
///
QDomCharacterData* q_domelement_to_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self const QDomElement*
///
QDomComment* q_domelement_to_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomElement*
/// @param param1 QTextStream*
/// @param param2 int
///
void q_domelement_save(const void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomElement*
///
QDomElement* q_domelement_first_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomElement*
///
QDomElement* q_domelement_last_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomElement*
///
QDomElement* q_domelement_previous_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomElement*
///
QDomElement* q_domelement_next_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self const QDomElement*
///
int32_t q_domelement_line_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self const QDomElement*
///
int32_t q_domelement_column_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomElement*
/// @param deep bool
///
QDomNode* q_domelement_clone_node1(const void* self, bool deep);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomElement*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
///
void q_domelement_save3(const void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomElement*
/// @param tagName const char*
///
QDomElement* q_domelement_first_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomElement*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domelement_first_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomElement*
/// @param tagName const char*
///
QDomElement* q_domelement_last_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomElement*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domelement_last_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomElement*
/// @param tagName const char*
///
QDomElement* q_domelement_previous_sibling_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomElement*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domelement_previous_sibling_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomElement*
/// @param taName const char*
///
QDomElement* q_domelement_next_sibling_element1(const void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomElement*
/// @param taName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domelement_next_sibling_element2(const void* self, const char* taName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#dtor.QDomElement)
///
/// Delete this object from C++ memory.
///
/// @param self QDomElement*
///
void q_domelement_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html)

/// q_domtext_new constructs a new QDomText object.
///
QDomText* q_domtext_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html)

/// q_domtext_new2 constructs a new QDomText object.
///
/// @param text QDomText*
///
QDomText* q_domtext_new2(const void* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#operator-eq)
///
/// @param self QDomText*
/// @param other QDomText*
///
void q_domtext_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#splitText)
///
/// @param self QDomText*
/// @param offset int
///
QDomText* q_domtext_split_text(void* self, int offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#nodeType)
///
/// @param self const QDomText*
///
/// @return enum QDomNode__NodeType
///
int32_t q_domtext_node_type(const void* self);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDomText*
/// @param offset uintptr_t
/// @param count uintptr_t
///
const char* q_domtext_substring_data(void* self, uintptr_t offset, uintptr_t count);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
///
/// @param self QDomText*
/// @param arg const char*
///
void q_domtext_append_data(void* self, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
///
/// @param self QDomText*
/// @param offset uintptr_t
/// @param arg const char*
///
void q_domtext_insert_data(void* self, uintptr_t offset, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
///
/// @param self QDomText*
/// @param offset uintptr_t
/// @param count uintptr_t
///
void q_domtext_delete_data(void* self, uintptr_t offset, uintptr_t count);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
///
/// @param self QDomText*
/// @param offset uintptr_t
/// @param count uintptr_t
/// @param arg const char*
///
void q_domtext_replace_data(void* self, uintptr_t offset, uintptr_t count, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
///
/// @param self const QDomText*
///
int32_t q_domtext_length(const void* self);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomText*
///
const char* q_domtext_data(const void* self);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
///
/// @param self QDomText*
/// @param data const char*
///
void q_domtext_set_data(void* self, const char* data);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self const QDomText*
/// @param other QDomNode*
///
bool q_domtext_operator_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self const QDomText*
/// @param other QDomNode*
///
bool q_domtext_operator_not_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomText*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domtext_insert_before(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomText*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domtext_insert_after(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomText*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
///
QDomNode* q_domtext_replace_child(void* self, const void* newChild, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomText*
/// @param oldChild QDomNode*
///
QDomNode* q_domtext_remove_child(void* self, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomText*
/// @param newChild QDomNode*
///
QDomNode* q_domtext_append_child(void* self, const void* newChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self const QDomText*
///
bool q_domtext_has_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomText*
///
QDomNode* q_domtext_clone_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomText*
///
void q_domtext_normalize(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self const QDomText*
/// @param feature const char*
/// @param version const char*
///
bool q_domtext_is_supported(const void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomText*
///
const char* q_domtext_node_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self const QDomText*
///
QDomNode* q_domtext_parent_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self const QDomText*
///
QDomNodeList* q_domtext_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self const QDomText*
///
QDomNode* q_domtext_first_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self const QDomText*
///
QDomNode* q_domtext_last_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self const QDomText*
///
QDomNode* q_domtext_previous_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self const QDomText*
///
QDomNode* q_domtext_next_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self const QDomText*
///
QDomNamedNodeMap* q_domtext_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self const QDomText*
///
QDomDocument* q_domtext_owner_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomText*
///
const char* q_domtext_namespace_u_r_i(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomText*
///
const char* q_domtext_local_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self const QDomText*
///
bool q_domtext_has_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomText*
///
const char* q_domtext_node_value(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomText*
/// @param value const char*
///
void q_domtext_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomText*
///
const char* q_domtext_prefix(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomText*
/// @param pre const char*
///
void q_domtext_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self const QDomText*
///
bool q_domtext_is_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self const QDomText*
///
bool q_domtext_is_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self const QDomText*
///
bool q_domtext_is_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self const QDomText*
///
bool q_domtext_is_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self const QDomText*
///
bool q_domtext_is_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self const QDomText*
///
bool q_domtext_is_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self const QDomText*
///
bool q_domtext_is_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self const QDomText*
///
bool q_domtext_is_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self const QDomText*
///
bool q_domtext_is_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self const QDomText*
///
bool q_domtext_is_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self const QDomText*
///
bool q_domtext_is_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self const QDomText*
///
bool q_domtext_is_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self const QDomText*
///
bool q_domtext_is_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self const QDomText*
/// @param name const char*
///
QDomNode* q_domtext_named_item(const void* self, const char* name);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self const QDomText*
///
bool q_domtext_is_null(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomText*
///
void q_domtext_clear(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self const QDomText*
///
QDomAttr* q_domtext_to_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self const QDomText*
///
QDomCDATASection* q_domtext_to_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self const QDomText*
///
QDomDocumentFragment* q_domtext_to_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self const QDomText*
///
QDomDocument* q_domtext_to_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self const QDomText*
///
QDomDocumentType* q_domtext_to_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self const QDomText*
///
QDomElement* q_domtext_to_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self const QDomText*
///
QDomEntityReference* q_domtext_to_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self const QDomText*
///
QDomText* q_domtext_to_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self const QDomText*
///
QDomEntity* q_domtext_to_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self const QDomText*
///
QDomNotation* q_domtext_to_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self const QDomText*
///
QDomProcessingInstruction* q_domtext_to_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self const QDomText*
///
QDomCharacterData* q_domtext_to_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self const QDomText*
///
QDomComment* q_domtext_to_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomText*
/// @param param1 QTextStream*
/// @param param2 int
///
void q_domtext_save(const void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomText*
///
QDomElement* q_domtext_first_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomText*
///
QDomElement* q_domtext_last_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomText*
///
QDomElement* q_domtext_previous_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomText*
///
QDomElement* q_domtext_next_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self const QDomText*
///
int32_t q_domtext_line_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self const QDomText*
///
int32_t q_domtext_column_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomText*
/// @param deep bool
///
QDomNode* q_domtext_clone_node1(const void* self, bool deep);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomText*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
///
void q_domtext_save3(const void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomText*
/// @param tagName const char*
///
QDomElement* q_domtext_first_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomText*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domtext_first_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomText*
/// @param tagName const char*
///
QDomElement* q_domtext_last_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomText*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domtext_last_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomText*
/// @param tagName const char*
///
QDomElement* q_domtext_previous_sibling_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomText*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domtext_previous_sibling_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomText*
/// @param taName const char*
///
QDomElement* q_domtext_next_sibling_element1(const void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomText*
/// @param taName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domtext_next_sibling_element2(const void* self, const char* taName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#dtor.QDomText)
///
/// Delete this object from C++ memory.
///
/// @param self QDomText*
///
void q_domtext_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcomment.html)

/// q_domcomment_new constructs a new QDomComment object.
///
QDomComment* q_domcomment_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcomment.html)

/// q_domcomment_new2 constructs a new QDomComment object.
///
/// @param comment QDomComment*
///
QDomComment* q_domcomment_new2(const void* comment);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcomment.html#operator-eq)
///
/// @param self QDomComment*
/// @param other QDomComment*
///
void q_domcomment_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcomment.html#nodeType)
///
/// @param self const QDomComment*
///
/// @return enum QDomNode__NodeType
///
int32_t q_domcomment_node_type(const void* self);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDomComment*
/// @param offset uintptr_t
/// @param count uintptr_t
///
const char* q_domcomment_substring_data(void* self, uintptr_t offset, uintptr_t count);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
///
/// @param self QDomComment*
/// @param arg const char*
///
void q_domcomment_append_data(void* self, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
///
/// @param self QDomComment*
/// @param offset uintptr_t
/// @param arg const char*
///
void q_domcomment_insert_data(void* self, uintptr_t offset, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
///
/// @param self QDomComment*
/// @param offset uintptr_t
/// @param count uintptr_t
///
void q_domcomment_delete_data(void* self, uintptr_t offset, uintptr_t count);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
///
/// @param self QDomComment*
/// @param offset uintptr_t
/// @param count uintptr_t
/// @param arg const char*
///
void q_domcomment_replace_data(void* self, uintptr_t offset, uintptr_t count, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
///
/// @param self const QDomComment*
///
int32_t q_domcomment_length(const void* self);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomComment*
///
const char* q_domcomment_data(const void* self);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
///
/// @param self QDomComment*
/// @param data const char*
///
void q_domcomment_set_data(void* self, const char* data);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self const QDomComment*
/// @param other QDomNode*
///
bool q_domcomment_operator_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self const QDomComment*
/// @param other QDomNode*
///
bool q_domcomment_operator_not_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomComment*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domcomment_insert_before(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomComment*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domcomment_insert_after(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomComment*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
///
QDomNode* q_domcomment_replace_child(void* self, const void* newChild, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomComment*
/// @param oldChild QDomNode*
///
QDomNode* q_domcomment_remove_child(void* self, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomComment*
/// @param newChild QDomNode*
///
QDomNode* q_domcomment_append_child(void* self, const void* newChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self const QDomComment*
///
bool q_domcomment_has_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomComment*
///
QDomNode* q_domcomment_clone_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomComment*
///
void q_domcomment_normalize(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self const QDomComment*
/// @param feature const char*
/// @param version const char*
///
bool q_domcomment_is_supported(const void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomComment*
///
const char* q_domcomment_node_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self const QDomComment*
///
QDomNode* q_domcomment_parent_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self const QDomComment*
///
QDomNodeList* q_domcomment_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self const QDomComment*
///
QDomNode* q_domcomment_first_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self const QDomComment*
///
QDomNode* q_domcomment_last_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self const QDomComment*
///
QDomNode* q_domcomment_previous_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self const QDomComment*
///
QDomNode* q_domcomment_next_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self const QDomComment*
///
QDomNamedNodeMap* q_domcomment_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self const QDomComment*
///
QDomDocument* q_domcomment_owner_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomComment*
///
const char* q_domcomment_namespace_u_r_i(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomComment*
///
const char* q_domcomment_local_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self const QDomComment*
///
bool q_domcomment_has_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomComment*
///
const char* q_domcomment_node_value(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomComment*
/// @param value const char*
///
void q_domcomment_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomComment*
///
const char* q_domcomment_prefix(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomComment*
/// @param pre const char*
///
void q_domcomment_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self const QDomComment*
///
bool q_domcomment_is_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self const QDomComment*
///
bool q_domcomment_is_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self const QDomComment*
///
bool q_domcomment_is_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self const QDomComment*
///
bool q_domcomment_is_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self const QDomComment*
///
bool q_domcomment_is_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self const QDomComment*
///
bool q_domcomment_is_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self const QDomComment*
///
bool q_domcomment_is_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self const QDomComment*
///
bool q_domcomment_is_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self const QDomComment*
///
bool q_domcomment_is_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self const QDomComment*
///
bool q_domcomment_is_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self const QDomComment*
///
bool q_domcomment_is_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self const QDomComment*
///
bool q_domcomment_is_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self const QDomComment*
///
bool q_domcomment_is_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self const QDomComment*
/// @param name const char*
///
QDomNode* q_domcomment_named_item(const void* self, const char* name);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self const QDomComment*
///
bool q_domcomment_is_null(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomComment*
///
void q_domcomment_clear(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self const QDomComment*
///
QDomAttr* q_domcomment_to_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self const QDomComment*
///
QDomCDATASection* q_domcomment_to_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self const QDomComment*
///
QDomDocumentFragment* q_domcomment_to_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self const QDomComment*
///
QDomDocument* q_domcomment_to_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self const QDomComment*
///
QDomDocumentType* q_domcomment_to_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self const QDomComment*
///
QDomElement* q_domcomment_to_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self const QDomComment*
///
QDomEntityReference* q_domcomment_to_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self const QDomComment*
///
QDomText* q_domcomment_to_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self const QDomComment*
///
QDomEntity* q_domcomment_to_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self const QDomComment*
///
QDomNotation* q_domcomment_to_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self const QDomComment*
///
QDomProcessingInstruction* q_domcomment_to_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self const QDomComment*
///
QDomCharacterData* q_domcomment_to_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self const QDomComment*
///
QDomComment* q_domcomment_to_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomComment*
/// @param param1 QTextStream*
/// @param param2 int
///
void q_domcomment_save(const void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomComment*
///
QDomElement* q_domcomment_first_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomComment*
///
QDomElement* q_domcomment_last_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomComment*
///
QDomElement* q_domcomment_previous_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomComment*
///
QDomElement* q_domcomment_next_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self const QDomComment*
///
int32_t q_domcomment_line_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self const QDomComment*
///
int32_t q_domcomment_column_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomComment*
/// @param deep bool
///
QDomNode* q_domcomment_clone_node1(const void* self, bool deep);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomComment*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
///
void q_domcomment_save3(const void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomComment*
/// @param tagName const char*
///
QDomElement* q_domcomment_first_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomComment*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domcomment_first_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomComment*
/// @param tagName const char*
///
QDomElement* q_domcomment_last_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomComment*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domcomment_last_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomComment*
/// @param tagName const char*
///
QDomElement* q_domcomment_previous_sibling_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomComment*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domcomment_previous_sibling_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomComment*
/// @param taName const char*
///
QDomElement* q_domcomment_next_sibling_element1(const void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomComment*
/// @param taName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domcomment_next_sibling_element2(const void* self, const char* taName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcomment.html#dtor.QDomComment)
///
/// Delete this object from C++ memory.
///
/// @param self QDomComment*
///
void q_domcomment_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcdatasection.html)

/// q_domcdatasection_new constructs a new QDomCDATASection object.
///
QDomCDATASection* q_domcdatasection_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcdatasection.html)

/// q_domcdatasection_new2 constructs a new QDomCDATASection object.
///
/// @param cdataSection QDomCDATASection*
///
QDomCDATASection* q_domcdatasection_new2(const void* cdataSection);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcdatasection.html#operator-eq)
///
/// @param self QDomCDATASection*
/// @param other QDomCDATASection*
///
void q_domcdatasection_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcdatasection.html#nodeType)
///
/// @param self const QDomCDATASection*
///
/// @return enum QDomNode__NodeType
///
int32_t q_domcdatasection_node_type(const void* self);

/// Inherited from QDomText
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#splitText)
///
/// @param self QDomCDATASection*
/// @param offset int
///
QDomText* q_domcdatasection_split_text(void* self, int offset);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDomCDATASection*
/// @param offset uintptr_t
/// @param count uintptr_t
///
const char* q_domcdatasection_substring_data(void* self, uintptr_t offset, uintptr_t count);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
///
/// @param self QDomCDATASection*
/// @param arg const char*
///
void q_domcdatasection_append_data(void* self, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
///
/// @param self QDomCDATASection*
/// @param offset uintptr_t
/// @param arg const char*
///
void q_domcdatasection_insert_data(void* self, uintptr_t offset, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
///
/// @param self QDomCDATASection*
/// @param offset uintptr_t
/// @param count uintptr_t
///
void q_domcdatasection_delete_data(void* self, uintptr_t offset, uintptr_t count);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
///
/// @param self QDomCDATASection*
/// @param offset uintptr_t
/// @param count uintptr_t
/// @param arg const char*
///
void q_domcdatasection_replace_data(void* self, uintptr_t offset, uintptr_t count, const char* arg);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
///
/// @param self const QDomCDATASection*
///
int32_t q_domcdatasection_length(const void* self);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomCDATASection*
///
const char* q_domcdatasection_data(const void* self);

/// Inherited from QDomCharacterData
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
///
/// @param self QDomCDATASection*
/// @param data const char*
///
void q_domcdatasection_set_data(void* self, const char* data);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self const QDomCDATASection*
/// @param other QDomNode*
///
bool q_domcdatasection_operator_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self const QDomCDATASection*
/// @param other QDomNode*
///
bool q_domcdatasection_operator_not_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomCDATASection*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domcdatasection_insert_before(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomCDATASection*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domcdatasection_insert_after(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomCDATASection*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
///
QDomNode* q_domcdatasection_replace_child(void* self, const void* newChild, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomCDATASection*
/// @param oldChild QDomNode*
///
QDomNode* q_domcdatasection_remove_child(void* self, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomCDATASection*
/// @param newChild QDomNode*
///
QDomNode* q_domcdatasection_append_child(void* self, const void* newChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self const QDomCDATASection*
///
bool q_domcdatasection_has_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomCDATASection*
///
QDomNode* q_domcdatasection_clone_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomCDATASection*
///
void q_domcdatasection_normalize(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self const QDomCDATASection*
/// @param feature const char*
/// @param version const char*
///
bool q_domcdatasection_is_supported(const void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomCDATASection*
///
const char* q_domcdatasection_node_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self const QDomCDATASection*
///
QDomNode* q_domcdatasection_parent_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self const QDomCDATASection*
///
QDomNodeList* q_domcdatasection_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self const QDomCDATASection*
///
QDomNode* q_domcdatasection_first_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self const QDomCDATASection*
///
QDomNode* q_domcdatasection_last_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self const QDomCDATASection*
///
QDomNode* q_domcdatasection_previous_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self const QDomCDATASection*
///
QDomNode* q_domcdatasection_next_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self const QDomCDATASection*
///
QDomNamedNodeMap* q_domcdatasection_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self const QDomCDATASection*
///
QDomDocument* q_domcdatasection_owner_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomCDATASection*
///
const char* q_domcdatasection_namespace_u_r_i(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomCDATASection*
///
const char* q_domcdatasection_local_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self const QDomCDATASection*
///
bool q_domcdatasection_has_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomCDATASection*
///
const char* q_domcdatasection_node_value(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomCDATASection*
/// @param value const char*
///
void q_domcdatasection_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomCDATASection*
///
const char* q_domcdatasection_prefix(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomCDATASection*
/// @param pre const char*
///
void q_domcdatasection_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self const QDomCDATASection*
///
bool q_domcdatasection_is_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self const QDomCDATASection*
///
bool q_domcdatasection_is_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self const QDomCDATASection*
///
bool q_domcdatasection_is_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self const QDomCDATASection*
///
bool q_domcdatasection_is_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self const QDomCDATASection*
///
bool q_domcdatasection_is_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self const QDomCDATASection*
///
bool q_domcdatasection_is_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self const QDomCDATASection*
///
bool q_domcdatasection_is_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self const QDomCDATASection*
///
bool q_domcdatasection_is_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self const QDomCDATASection*
///
bool q_domcdatasection_is_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self const QDomCDATASection*
///
bool q_domcdatasection_is_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self const QDomCDATASection*
///
bool q_domcdatasection_is_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self const QDomCDATASection*
///
bool q_domcdatasection_is_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self const QDomCDATASection*
///
bool q_domcdatasection_is_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self const QDomCDATASection*
/// @param name const char*
///
QDomNode* q_domcdatasection_named_item(const void* self, const char* name);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self const QDomCDATASection*
///
bool q_domcdatasection_is_null(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomCDATASection*
///
void q_domcdatasection_clear(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self const QDomCDATASection*
///
QDomAttr* q_domcdatasection_to_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self const QDomCDATASection*
///
QDomCDATASection* q_domcdatasection_to_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self const QDomCDATASection*
///
QDomDocumentFragment* q_domcdatasection_to_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self const QDomCDATASection*
///
QDomDocument* q_domcdatasection_to_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self const QDomCDATASection*
///
QDomDocumentType* q_domcdatasection_to_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self const QDomCDATASection*
///
QDomElement* q_domcdatasection_to_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self const QDomCDATASection*
///
QDomEntityReference* q_domcdatasection_to_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self const QDomCDATASection*
///
QDomText* q_domcdatasection_to_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self const QDomCDATASection*
///
QDomEntity* q_domcdatasection_to_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self const QDomCDATASection*
///
QDomNotation* q_domcdatasection_to_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self const QDomCDATASection*
///
QDomProcessingInstruction* q_domcdatasection_to_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self const QDomCDATASection*
///
QDomCharacterData* q_domcdatasection_to_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self const QDomCDATASection*
///
QDomComment* q_domcdatasection_to_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomCDATASection*
/// @param param1 QTextStream*
/// @param param2 int
///
void q_domcdatasection_save(const void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomCDATASection*
///
QDomElement* q_domcdatasection_first_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomCDATASection*
///
QDomElement* q_domcdatasection_last_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomCDATASection*
///
QDomElement* q_domcdatasection_previous_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomCDATASection*
///
QDomElement* q_domcdatasection_next_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self const QDomCDATASection*
///
int32_t q_domcdatasection_line_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self const QDomCDATASection*
///
int32_t q_domcdatasection_column_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomCDATASection*
/// @param deep bool
///
QDomNode* q_domcdatasection_clone_node1(const void* self, bool deep);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomCDATASection*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
///
void q_domcdatasection_save3(const void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomCDATASection*
/// @param tagName const char*
///
QDomElement* q_domcdatasection_first_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomCDATASection*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domcdatasection_first_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomCDATASection*
/// @param tagName const char*
///
QDomElement* q_domcdatasection_last_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomCDATASection*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domcdatasection_last_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomCDATASection*
/// @param tagName const char*
///
QDomElement* q_domcdatasection_previous_sibling_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomCDATASection*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domcdatasection_previous_sibling_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomCDATASection*
/// @param taName const char*
///
QDomElement* q_domcdatasection_next_sibling_element1(const void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomCDATASection*
/// @param taName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domcdatasection_next_sibling_element2(const void* self, const char* taName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomcdatasection.html#dtor.QDomCDATASection)
///
/// Delete this object from C++ memory.
///
/// @param self QDomCDATASection*
///
void q_domcdatasection_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html)

/// q_domnotation_new constructs a new QDomNotation object.
///
QDomNotation* q_domnotation_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html)

/// q_domnotation_new2 constructs a new QDomNotation object.
///
/// @param notation QDomNotation*
///
QDomNotation* q_domnotation_new2(const void* notation);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#operator-eq)
///
/// @param self QDomNotation*
/// @param other QDomNotation*
///
void q_domnotation_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#publicId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomNotation*
///
const char* q_domnotation_public_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#systemId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomNotation*
///
const char* q_domnotation_system_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#nodeType)
///
/// @param self const QDomNotation*
///
/// @return enum QDomNode__NodeType
///
int32_t q_domnotation_node_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self const QDomNotation*
/// @param other QDomNode*
///
bool q_domnotation_operator_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self const QDomNotation*
/// @param other QDomNode*
///
bool q_domnotation_operator_not_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomNotation*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domnotation_insert_before(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomNotation*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domnotation_insert_after(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomNotation*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
///
QDomNode* q_domnotation_replace_child(void* self, const void* newChild, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomNotation*
/// @param oldChild QDomNode*
///
QDomNode* q_domnotation_remove_child(void* self, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomNotation*
/// @param newChild QDomNode*
///
QDomNode* q_domnotation_append_child(void* self, const void* newChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self const QDomNotation*
///
bool q_domnotation_has_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomNotation*
///
QDomNode* q_domnotation_clone_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomNotation*
///
void q_domnotation_normalize(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self const QDomNotation*
/// @param feature const char*
/// @param version const char*
///
bool q_domnotation_is_supported(const void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomNotation*
///
const char* q_domnotation_node_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self const QDomNotation*
///
QDomNode* q_domnotation_parent_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self const QDomNotation*
///
QDomNodeList* q_domnotation_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self const QDomNotation*
///
QDomNode* q_domnotation_first_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self const QDomNotation*
///
QDomNode* q_domnotation_last_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self const QDomNotation*
///
QDomNode* q_domnotation_previous_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self const QDomNotation*
///
QDomNode* q_domnotation_next_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self const QDomNotation*
///
QDomNamedNodeMap* q_domnotation_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self const QDomNotation*
///
QDomDocument* q_domnotation_owner_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomNotation*
///
const char* q_domnotation_namespace_u_r_i(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomNotation*
///
const char* q_domnotation_local_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self const QDomNotation*
///
bool q_domnotation_has_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomNotation*
///
const char* q_domnotation_node_value(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomNotation*
/// @param value const char*
///
void q_domnotation_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomNotation*
///
const char* q_domnotation_prefix(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomNotation*
/// @param pre const char*
///
void q_domnotation_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self const QDomNotation*
///
bool q_domnotation_is_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self const QDomNotation*
///
bool q_domnotation_is_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self const QDomNotation*
///
bool q_domnotation_is_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self const QDomNotation*
///
bool q_domnotation_is_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self const QDomNotation*
///
bool q_domnotation_is_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self const QDomNotation*
///
bool q_domnotation_is_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self const QDomNotation*
///
bool q_domnotation_is_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self const QDomNotation*
///
bool q_domnotation_is_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self const QDomNotation*
///
bool q_domnotation_is_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self const QDomNotation*
///
bool q_domnotation_is_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self const QDomNotation*
///
bool q_domnotation_is_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self const QDomNotation*
///
bool q_domnotation_is_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self const QDomNotation*
///
bool q_domnotation_is_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self const QDomNotation*
/// @param name const char*
///
QDomNode* q_domnotation_named_item(const void* self, const char* name);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self const QDomNotation*
///
bool q_domnotation_is_null(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomNotation*
///
void q_domnotation_clear(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self const QDomNotation*
///
QDomAttr* q_domnotation_to_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self const QDomNotation*
///
QDomCDATASection* q_domnotation_to_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self const QDomNotation*
///
QDomDocumentFragment* q_domnotation_to_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self const QDomNotation*
///
QDomDocument* q_domnotation_to_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self const QDomNotation*
///
QDomDocumentType* q_domnotation_to_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self const QDomNotation*
///
QDomElement* q_domnotation_to_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self const QDomNotation*
///
QDomEntityReference* q_domnotation_to_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self const QDomNotation*
///
QDomText* q_domnotation_to_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self const QDomNotation*
///
QDomEntity* q_domnotation_to_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self const QDomNotation*
///
QDomNotation* q_domnotation_to_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self const QDomNotation*
///
QDomProcessingInstruction* q_domnotation_to_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self const QDomNotation*
///
QDomCharacterData* q_domnotation_to_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self const QDomNotation*
///
QDomComment* q_domnotation_to_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomNotation*
/// @param param1 QTextStream*
/// @param param2 int
///
void q_domnotation_save(const void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomNotation*
///
QDomElement* q_domnotation_first_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomNotation*
///
QDomElement* q_domnotation_last_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomNotation*
///
QDomElement* q_domnotation_previous_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomNotation*
///
QDomElement* q_domnotation_next_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self const QDomNotation*
///
int32_t q_domnotation_line_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self const QDomNotation*
///
int32_t q_domnotation_column_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomNotation*
/// @param deep bool
///
QDomNode* q_domnotation_clone_node1(const void* self, bool deep);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomNotation*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
///
void q_domnotation_save3(const void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomNotation*
/// @param tagName const char*
///
QDomElement* q_domnotation_first_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomNotation*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domnotation_first_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomNotation*
/// @param tagName const char*
///
QDomElement* q_domnotation_last_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomNotation*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domnotation_last_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomNotation*
/// @param tagName const char*
///
QDomElement* q_domnotation_previous_sibling_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomNotation*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domnotation_previous_sibling_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomNotation*
/// @param taName const char*
///
QDomElement* q_domnotation_next_sibling_element1(const void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomNotation*
/// @param taName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domnotation_next_sibling_element2(const void* self, const char* taName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#dtor.QDomNotation)
///
/// Delete this object from C++ memory.
///
/// @param self QDomNotation*
///
void q_domnotation_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html)

/// q_domentity_new constructs a new QDomEntity object.
///
QDomEntity* q_domentity_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html)

/// q_domentity_new2 constructs a new QDomEntity object.
///
/// @param entity QDomEntity*
///
QDomEntity* q_domentity_new2(const void* entity);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#operator-eq)
///
/// @param self QDomEntity*
/// @param other QDomEntity*
///
void q_domentity_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#publicId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomEntity*
///
const char* q_domentity_public_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#systemId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomEntity*
///
const char* q_domentity_system_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#notationName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomEntity*
///
const char* q_domentity_notation_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#nodeType)
///
/// @param self const QDomEntity*
///
/// @return enum QDomNode__NodeType
///
int32_t q_domentity_node_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self const QDomEntity*
/// @param other QDomNode*
///
bool q_domentity_operator_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self const QDomEntity*
/// @param other QDomNode*
///
bool q_domentity_operator_not_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomEntity*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domentity_insert_before(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomEntity*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domentity_insert_after(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomEntity*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
///
QDomNode* q_domentity_replace_child(void* self, const void* newChild, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomEntity*
/// @param oldChild QDomNode*
///
QDomNode* q_domentity_remove_child(void* self, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomEntity*
/// @param newChild QDomNode*
///
QDomNode* q_domentity_append_child(void* self, const void* newChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self const QDomEntity*
///
bool q_domentity_has_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomEntity*
///
QDomNode* q_domentity_clone_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomEntity*
///
void q_domentity_normalize(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self const QDomEntity*
/// @param feature const char*
/// @param version const char*
///
bool q_domentity_is_supported(const void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomEntity*
///
const char* q_domentity_node_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self const QDomEntity*
///
QDomNode* q_domentity_parent_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self const QDomEntity*
///
QDomNodeList* q_domentity_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self const QDomEntity*
///
QDomNode* q_domentity_first_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self const QDomEntity*
///
QDomNode* q_domentity_last_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self const QDomEntity*
///
QDomNode* q_domentity_previous_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self const QDomEntity*
///
QDomNode* q_domentity_next_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self const QDomEntity*
///
QDomNamedNodeMap* q_domentity_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self const QDomEntity*
///
QDomDocument* q_domentity_owner_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomEntity*
///
const char* q_domentity_namespace_u_r_i(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomEntity*
///
const char* q_domentity_local_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self const QDomEntity*
///
bool q_domentity_has_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomEntity*
///
const char* q_domentity_node_value(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomEntity*
/// @param value const char*
///
void q_domentity_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomEntity*
///
const char* q_domentity_prefix(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomEntity*
/// @param pre const char*
///
void q_domentity_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self const QDomEntity*
///
bool q_domentity_is_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self const QDomEntity*
///
bool q_domentity_is_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self const QDomEntity*
///
bool q_domentity_is_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self const QDomEntity*
///
bool q_domentity_is_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self const QDomEntity*
///
bool q_domentity_is_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self const QDomEntity*
///
bool q_domentity_is_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self const QDomEntity*
///
bool q_domentity_is_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self const QDomEntity*
///
bool q_domentity_is_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self const QDomEntity*
///
bool q_domentity_is_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self const QDomEntity*
///
bool q_domentity_is_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self const QDomEntity*
///
bool q_domentity_is_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self const QDomEntity*
///
bool q_domentity_is_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self const QDomEntity*
///
bool q_domentity_is_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self const QDomEntity*
/// @param name const char*
///
QDomNode* q_domentity_named_item(const void* self, const char* name);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self const QDomEntity*
///
bool q_domentity_is_null(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomEntity*
///
void q_domentity_clear(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self const QDomEntity*
///
QDomAttr* q_domentity_to_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self const QDomEntity*
///
QDomCDATASection* q_domentity_to_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self const QDomEntity*
///
QDomDocumentFragment* q_domentity_to_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self const QDomEntity*
///
QDomDocument* q_domentity_to_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self const QDomEntity*
///
QDomDocumentType* q_domentity_to_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self const QDomEntity*
///
QDomElement* q_domentity_to_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self const QDomEntity*
///
QDomEntityReference* q_domentity_to_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self const QDomEntity*
///
QDomText* q_domentity_to_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self const QDomEntity*
///
QDomEntity* q_domentity_to_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self const QDomEntity*
///
QDomNotation* q_domentity_to_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self const QDomEntity*
///
QDomProcessingInstruction* q_domentity_to_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self const QDomEntity*
///
QDomCharacterData* q_domentity_to_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self const QDomEntity*
///
QDomComment* q_domentity_to_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomEntity*
/// @param param1 QTextStream*
/// @param param2 int
///
void q_domentity_save(const void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomEntity*
///
QDomElement* q_domentity_first_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomEntity*
///
QDomElement* q_domentity_last_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomEntity*
///
QDomElement* q_domentity_previous_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomEntity*
///
QDomElement* q_domentity_next_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self const QDomEntity*
///
int32_t q_domentity_line_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self const QDomEntity*
///
int32_t q_domentity_column_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomEntity*
/// @param deep bool
///
QDomNode* q_domentity_clone_node1(const void* self, bool deep);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomEntity*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
///
void q_domentity_save3(const void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomEntity*
/// @param tagName const char*
///
QDomElement* q_domentity_first_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomEntity*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domentity_first_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomEntity*
/// @param tagName const char*
///
QDomElement* q_domentity_last_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomEntity*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domentity_last_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomEntity*
/// @param tagName const char*
///
QDomElement* q_domentity_previous_sibling_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomEntity*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domentity_previous_sibling_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomEntity*
/// @param taName const char*
///
QDomElement* q_domentity_next_sibling_element1(const void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomEntity*
/// @param taName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domentity_next_sibling_element2(const void* self, const char* taName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#dtor.QDomEntity)
///
/// Delete this object from C++ memory.
///
/// @param self QDomEntity*
///
void q_domentity_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomentityreference.html)

/// q_domentityreference_new constructs a new QDomEntityReference object.
///
QDomEntityReference* q_domentityreference_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomentityreference.html)

/// q_domentityreference_new2 constructs a new QDomEntityReference object.
///
/// @param entityReference QDomEntityReference*
///
QDomEntityReference* q_domentityreference_new2(const void* entityReference);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomentityreference.html#operator-eq)
///
/// @param self QDomEntityReference*
/// @param other QDomEntityReference*
///
void q_domentityreference_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomentityreference.html#nodeType)
///
/// @param self const QDomEntityReference*
///
/// @return enum QDomNode__NodeType
///
int32_t q_domentityreference_node_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self const QDomEntityReference*
/// @param other QDomNode*
///
bool q_domentityreference_operator_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self const QDomEntityReference*
/// @param other QDomNode*
///
bool q_domentityreference_operator_not_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomEntityReference*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domentityreference_insert_before(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomEntityReference*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domentityreference_insert_after(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomEntityReference*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
///
QDomNode* q_domentityreference_replace_child(void* self, const void* newChild, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomEntityReference*
/// @param oldChild QDomNode*
///
QDomNode* q_domentityreference_remove_child(void* self, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomEntityReference*
/// @param newChild QDomNode*
///
QDomNode* q_domentityreference_append_child(void* self, const void* newChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self const QDomEntityReference*
///
bool q_domentityreference_has_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomEntityReference*
///
QDomNode* q_domentityreference_clone_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomEntityReference*
///
void q_domentityreference_normalize(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self const QDomEntityReference*
/// @param feature const char*
/// @param version const char*
///
bool q_domentityreference_is_supported(const void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomEntityReference*
///
const char* q_domentityreference_node_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self const QDomEntityReference*
///
QDomNode* q_domentityreference_parent_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self const QDomEntityReference*
///
QDomNodeList* q_domentityreference_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self const QDomEntityReference*
///
QDomNode* q_domentityreference_first_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self const QDomEntityReference*
///
QDomNode* q_domentityreference_last_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self const QDomEntityReference*
///
QDomNode* q_domentityreference_previous_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self const QDomEntityReference*
///
QDomNode* q_domentityreference_next_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self const QDomEntityReference*
///
QDomNamedNodeMap* q_domentityreference_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self const QDomEntityReference*
///
QDomDocument* q_domentityreference_owner_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomEntityReference*
///
const char* q_domentityreference_namespace_u_r_i(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomEntityReference*
///
const char* q_domentityreference_local_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self const QDomEntityReference*
///
bool q_domentityreference_has_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomEntityReference*
///
const char* q_domentityreference_node_value(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomEntityReference*
/// @param value const char*
///
void q_domentityreference_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomEntityReference*
///
const char* q_domentityreference_prefix(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomEntityReference*
/// @param pre const char*
///
void q_domentityreference_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self const QDomEntityReference*
///
bool q_domentityreference_is_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self const QDomEntityReference*
///
bool q_domentityreference_is_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self const QDomEntityReference*
///
bool q_domentityreference_is_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self const QDomEntityReference*
///
bool q_domentityreference_is_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self const QDomEntityReference*
///
bool q_domentityreference_is_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self const QDomEntityReference*
///
bool q_domentityreference_is_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self const QDomEntityReference*
///
bool q_domentityreference_is_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self const QDomEntityReference*
///
bool q_domentityreference_is_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self const QDomEntityReference*
///
bool q_domentityreference_is_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self const QDomEntityReference*
///
bool q_domentityreference_is_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self const QDomEntityReference*
///
bool q_domentityreference_is_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self const QDomEntityReference*
///
bool q_domentityreference_is_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self const QDomEntityReference*
///
bool q_domentityreference_is_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self const QDomEntityReference*
/// @param name const char*
///
QDomNode* q_domentityreference_named_item(const void* self, const char* name);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self const QDomEntityReference*
///
bool q_domentityreference_is_null(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomEntityReference*
///
void q_domentityreference_clear(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self const QDomEntityReference*
///
QDomAttr* q_domentityreference_to_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self const QDomEntityReference*
///
QDomCDATASection* q_domentityreference_to_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self const QDomEntityReference*
///
QDomDocumentFragment* q_domentityreference_to_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self const QDomEntityReference*
///
QDomDocument* q_domentityreference_to_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self const QDomEntityReference*
///
QDomDocumentType* q_domentityreference_to_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self const QDomEntityReference*
///
QDomElement* q_domentityreference_to_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self const QDomEntityReference*
///
QDomEntityReference* q_domentityreference_to_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self const QDomEntityReference*
///
QDomText* q_domentityreference_to_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self const QDomEntityReference*
///
QDomEntity* q_domentityreference_to_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self const QDomEntityReference*
///
QDomNotation* q_domentityreference_to_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self const QDomEntityReference*
///
QDomProcessingInstruction* q_domentityreference_to_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self const QDomEntityReference*
///
QDomCharacterData* q_domentityreference_to_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self const QDomEntityReference*
///
QDomComment* q_domentityreference_to_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomEntityReference*
/// @param param1 QTextStream*
/// @param param2 int
///
void q_domentityreference_save(const void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomEntityReference*
///
QDomElement* q_domentityreference_first_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomEntityReference*
///
QDomElement* q_domentityreference_last_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomEntityReference*
///
QDomElement* q_domentityreference_previous_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomEntityReference*
///
QDomElement* q_domentityreference_next_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self const QDomEntityReference*
///
int32_t q_domentityreference_line_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self const QDomEntityReference*
///
int32_t q_domentityreference_column_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomEntityReference*
/// @param deep bool
///
QDomNode* q_domentityreference_clone_node1(const void* self, bool deep);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomEntityReference*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
///
void q_domentityreference_save3(const void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomEntityReference*
/// @param tagName const char*
///
QDomElement* q_domentityreference_first_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomEntityReference*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domentityreference_first_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomEntityReference*
/// @param tagName const char*
///
QDomElement* q_domentityreference_last_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomEntityReference*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domentityreference_last_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomEntityReference*
/// @param tagName const char*
///
QDomElement* q_domentityreference_previous_sibling_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomEntityReference*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domentityreference_previous_sibling_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomEntityReference*
/// @param taName const char*
///
QDomElement* q_domentityreference_next_sibling_element1(const void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomEntityReference*
/// @param taName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domentityreference_next_sibling_element2(const void* self, const char* taName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomentityreference.html#dtor.QDomEntityReference)
///
/// Delete this object from C++ memory.
///
/// @param self QDomEntityReference*
///
void q_domentityreference_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html)

/// q_domprocessinginstruction_new constructs a new QDomProcessingInstruction object.
///
QDomProcessingInstruction* q_domprocessinginstruction_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html)

/// q_domprocessinginstruction_new2 constructs a new QDomProcessingInstruction object.
///
/// @param processingInstruction QDomProcessingInstruction*
///
QDomProcessingInstruction* q_domprocessinginstruction_new2(const void* processingInstruction);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#operator-eq)
///
/// @param self QDomProcessingInstruction*
/// @param other QDomProcessingInstruction*
///
void q_domprocessinginstruction_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#target)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomProcessingInstruction*
///
const char* q_domprocessinginstruction_target(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#data)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomProcessingInstruction*
///
const char* q_domprocessinginstruction_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#setData)
///
/// @param self QDomProcessingInstruction*
/// @param data const char*
///
void q_domprocessinginstruction_set_data(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#nodeType)
///
/// @param self const QDomProcessingInstruction*
///
/// @return enum QDomNode__NodeType
///
int32_t q_domprocessinginstruction_node_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
///
/// @param self const QDomProcessingInstruction*
/// @param other QDomNode*
///
bool q_domprocessinginstruction_operator_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
///
/// @param self const QDomProcessingInstruction*
/// @param other QDomNode*
///
bool q_domprocessinginstruction_operator_not_equal(const void* self, const void* other);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
///
/// @param self QDomProcessingInstruction*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domprocessinginstruction_insert_before(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
///
/// @param self QDomProcessingInstruction*
/// @param newChild QDomNode*
/// @param refChild QDomNode*
///
QDomNode* q_domprocessinginstruction_insert_after(void* self, const void* newChild, const void* refChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
///
/// @param self QDomProcessingInstruction*
/// @param newChild QDomNode*
/// @param oldChild QDomNode*
///
QDomNode* q_domprocessinginstruction_replace_child(void* self, const void* newChild, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
///
/// @param self QDomProcessingInstruction*
/// @param oldChild QDomNode*
///
QDomNode* q_domprocessinginstruction_remove_child(void* self, const void* oldChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
///
/// @param self QDomProcessingInstruction*
/// @param newChild QDomNode*
///
QDomNode* q_domprocessinginstruction_append_child(void* self, const void* newChild);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
///
/// @param self const QDomProcessingInstruction*
///
bool q_domprocessinginstruction_has_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomProcessingInstruction*
///
QDomNode* q_domprocessinginstruction_clone_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
///
/// @param self QDomProcessingInstruction*
///
void q_domprocessinginstruction_normalize(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
///
/// @param self const QDomProcessingInstruction*
/// @param feature const char*
/// @param version const char*
///
bool q_domprocessinginstruction_is_supported(const void* self, const char* feature, const char* version);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomProcessingInstruction*
///
const char* q_domprocessinginstruction_node_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
///
/// @param self const QDomProcessingInstruction*
///
QDomNode* q_domprocessinginstruction_parent_node(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
///
/// @param self const QDomProcessingInstruction*
///
QDomNodeList* q_domprocessinginstruction_child_nodes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
///
/// @param self const QDomProcessingInstruction*
///
QDomNode* q_domprocessinginstruction_first_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
///
/// @param self const QDomProcessingInstruction*
///
QDomNode* q_domprocessinginstruction_last_child(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
///
/// @param self const QDomProcessingInstruction*
///
QDomNode* q_domprocessinginstruction_previous_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
///
/// @param self const QDomProcessingInstruction*
///
QDomNode* q_domprocessinginstruction_next_sibling(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
///
/// @param self const QDomProcessingInstruction*
///
QDomNamedNodeMap* q_domprocessinginstruction_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
///
/// @param self const QDomProcessingInstruction*
///
QDomDocument* q_domprocessinginstruction_owner_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomProcessingInstruction*
///
const char* q_domprocessinginstruction_namespace_u_r_i(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomProcessingInstruction*
///
const char* q_domprocessinginstruction_local_name(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
///
/// @param self const QDomProcessingInstruction*
///
bool q_domprocessinginstruction_has_attributes(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomProcessingInstruction*
///
const char* q_domprocessinginstruction_node_value(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
///
/// @param self QDomProcessingInstruction*
/// @param value const char*
///
void q_domprocessinginstruction_set_node_value(void* self, const char* value);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomProcessingInstruction*
///
const char* q_domprocessinginstruction_prefix(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
///
/// @param self QDomProcessingInstruction*
/// @param pre const char*
///
void q_domprocessinginstruction_set_prefix(void* self, const char* pre);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
///
/// @param self const QDomProcessingInstruction*
///
bool q_domprocessinginstruction_is_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
///
/// @param self const QDomProcessingInstruction*
///
bool q_domprocessinginstruction_is_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
///
/// @param self const QDomProcessingInstruction*
///
bool q_domprocessinginstruction_is_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
///
/// @param self const QDomProcessingInstruction*
///
bool q_domprocessinginstruction_is_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
///
/// @param self const QDomProcessingInstruction*
///
bool q_domprocessinginstruction_is_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
///
/// @param self const QDomProcessingInstruction*
///
bool q_domprocessinginstruction_is_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
///
/// @param self const QDomProcessingInstruction*
///
bool q_domprocessinginstruction_is_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
///
/// @param self const QDomProcessingInstruction*
///
bool q_domprocessinginstruction_is_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
///
/// @param self const QDomProcessingInstruction*
///
bool q_domprocessinginstruction_is_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
///
/// @param self const QDomProcessingInstruction*
///
bool q_domprocessinginstruction_is_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
///
/// @param self const QDomProcessingInstruction*
///
bool q_domprocessinginstruction_is_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
///
/// @param self const QDomProcessingInstruction*
///
bool q_domprocessinginstruction_is_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
///
/// @param self const QDomProcessingInstruction*
///
bool q_domprocessinginstruction_is_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
///
/// @param self const QDomProcessingInstruction*
/// @param name const char*
///
QDomNode* q_domprocessinginstruction_named_item(const void* self, const char* name);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
///
/// @param self const QDomProcessingInstruction*
///
bool q_domprocessinginstruction_is_null(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
///
/// @param self QDomProcessingInstruction*
///
void q_domprocessinginstruction_clear(void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
///
/// @param self const QDomProcessingInstruction*
///
QDomAttr* q_domprocessinginstruction_to_attr(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
///
/// @param self const QDomProcessingInstruction*
///
QDomCDATASection* q_domprocessinginstruction_to_c_d_a_t_a_section(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
///
/// @param self const QDomProcessingInstruction*
///
QDomDocumentFragment* q_domprocessinginstruction_to_document_fragment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
///
/// @param self const QDomProcessingInstruction*
///
QDomDocument* q_domprocessinginstruction_to_document(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
///
/// @param self const QDomProcessingInstruction*
///
QDomDocumentType* q_domprocessinginstruction_to_document_type(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
///
/// @param self const QDomProcessingInstruction*
///
QDomElement* q_domprocessinginstruction_to_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
///
/// @param self const QDomProcessingInstruction*
///
QDomEntityReference* q_domprocessinginstruction_to_entity_reference(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
///
/// @param self const QDomProcessingInstruction*
///
QDomText* q_domprocessinginstruction_to_text(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
///
/// @param self const QDomProcessingInstruction*
///
QDomEntity* q_domprocessinginstruction_to_entity(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
///
/// @param self const QDomProcessingInstruction*
///
QDomNotation* q_domprocessinginstruction_to_notation(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
///
/// @param self const QDomProcessingInstruction*
///
QDomProcessingInstruction* q_domprocessinginstruction_to_processing_instruction(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
///
/// @param self const QDomProcessingInstruction*
///
QDomCharacterData* q_domprocessinginstruction_to_character_data(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
///
/// @param self const QDomProcessingInstruction*
///
QDomComment* q_domprocessinginstruction_to_comment(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomProcessingInstruction*
/// @param param1 QTextStream*
/// @param param2 int
///
void q_domprocessinginstruction_save(const void* self, void* param1, int param2);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomProcessingInstruction*
///
QDomElement* q_domprocessinginstruction_first_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomProcessingInstruction*
///
QDomElement* q_domprocessinginstruction_last_child_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomProcessingInstruction*
///
QDomElement* q_domprocessinginstruction_previous_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomProcessingInstruction*
///
QDomElement* q_domprocessinginstruction_next_sibling_element(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
///
/// @param self const QDomProcessingInstruction*
///
int32_t q_domprocessinginstruction_line_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
///
/// @param self const QDomProcessingInstruction*
///
int32_t q_domprocessinginstruction_column_number(const void* self);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
///
/// @param self const QDomProcessingInstruction*
/// @param deep bool
///
QDomNode* q_domprocessinginstruction_clone_node1(const void* self, bool deep);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
///
/// @param self const QDomProcessingInstruction*
/// @param param1 QTextStream*
/// @param param2 int
/// @param param3 enum QDomNode__EncodingPolicy
///
void q_domprocessinginstruction_save3(const void* self, void* param1, int param2, int32_t param3);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomProcessingInstruction*
/// @param tagName const char*
///
QDomElement* q_domprocessinginstruction_first_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
///
/// @param self const QDomProcessingInstruction*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domprocessinginstruction_first_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomProcessingInstruction*
/// @param tagName const char*
///
QDomElement* q_domprocessinginstruction_last_child_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
///
/// @param self const QDomProcessingInstruction*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domprocessinginstruction_last_child_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomProcessingInstruction*
/// @param tagName const char*
///
QDomElement* q_domprocessinginstruction_previous_sibling_element1(const void* self, const char* tagName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
///
/// @param self const QDomProcessingInstruction*
/// @param tagName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domprocessinginstruction_previous_sibling_element2(const void* self, const char* tagName, const char* namespaceURI);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomProcessingInstruction*
/// @param taName const char*
///
QDomElement* q_domprocessinginstruction_next_sibling_element1(const void* self, const char* taName);

/// Inherited from QDomNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
///
/// @param self const QDomProcessingInstruction*
/// @param taName const char*
/// @param namespaceURI const char*
///
QDomElement* q_domprocessinginstruction_next_sibling_element2(const void* self, const char* taName, const char* namespaceURI);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#dtor.QDomProcessingInstruction)
///
/// Delete this object from C++ memory.
///
/// @param self QDomProcessingInstruction*
///
void q_domprocessinginstruction_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html)

/// q_domdocument__parseresult_new constructs a new QDomDocument::ParseResult object.
///
QDomDocument__ParseResult* q_domdocument__parseresult_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html)

/// q_domdocument__parseresult_new2 constructs a new QDomDocument::ParseResult object.
///
/// @param param1 QDomDocument__ParseResult*
///
QDomDocument__ParseResult* q_domdocument__parseresult_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorMessage-var)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDomDocument__ParseResult*
///
const char* q_domdocument__parseresult_error_message(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorMessage-var)
///
/// @param self QDomDocument__ParseResult*
/// @param errorMessage const char*
///
void q_domdocument__parseresult_set_error_message(void* self, const char* errorMessage);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorLine-var)
///
/// @param self const QDomDocument__ParseResult*
///
intptr_t q_domdocument__parseresult_error_line(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorLine-var)
///
/// @param self QDomDocument__ParseResult*
/// @param errorLine intptr_t
///
void q_domdocument__parseresult_set_error_line(void* self, intptr_t errorLine);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorColumn-var)
///
/// @param self const QDomDocument__ParseResult*
///
intptr_t q_domdocument__parseresult_error_column(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorColumn-var)
///
/// @param self QDomDocument__ParseResult*
/// @param errorColumn intptr_t
///
void q_domdocument__parseresult_set_error_column(void* self, intptr_t errorColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#operator-bool)
///
/// @param self const QDomDocument__ParseResult*
///
bool q_domdocument__parseresult_to_bool(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#operator-eq)
///
/// @param self QDomDocument__ParseResult*
/// @param param1 QDomDocument__ParseResult*
///
void q_domdocument__parseresult_operator_assign(void* self, const void* param1);

/// Delete this object from C++ memory.
///
/// @param self QDomDocument__ParseResult*
///
void q_domdocument__parseresult_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdom.html#public-types)

typedef enum {
    QDOMIMPLEMENTATION_INVALIDDATAPOLICY_ACCEPTINVALIDCHARS = 0,
    QDOMIMPLEMENTATION_INVALIDDATAPOLICY_DROPINVALIDCHARS = 1,
    QDOMIMPLEMENTATION_INVALIDDATAPOLICY_RETURNNULLNODE = 2
} QDomImplementation__InvalidDataPolicy;

/// [Upstream resources](https://doc.qt.io/qt-6/qdom.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qdom.html#public-types)

typedef enum {
    QDOMNODE_ENCODINGPOLICY_ENCODINGFROMDOCUMENT = 1,
    QDOMNODE_ENCODINGPOLICY_ENCODINGFROMTEXTSTREAM = 2
} QDomNode__EncodingPolicy;

/// [Upstream resources](https://doc.qt.io/qt-6/qdom.html#public-types)

typedef enum {
    QDOMDOCUMENT_PARSEOPTION_DEFAULT = 0,
    QDOMDOCUMENT_PARSEOPTION_USENAMESPACEPROCESSING = 1,
    QDOMDOCUMENT_PARSEOPTION_PRESERVESPACINGONLYNODES = 2
} QDomDocument__ParseOption;

#endif
