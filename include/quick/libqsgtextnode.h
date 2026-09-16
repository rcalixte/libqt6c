#pragma once
#ifndef QUICK_LIBQSGTEXTNODE_H
#define QUICK_LIBQSGTEXTNODE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setColor)
///
/// @param self QSGTextNode*
/// @param color QColor*
///
void q_sgtextnode_set_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#color)
///
/// @param self QSGTextNode*
///
QColor* q_sgtextnode_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setTextStyle)
///
/// @param self QSGTextNode*
/// @param textStyle enum QSGTextNode__TextStyle
///
void q_sgtextnode_set_text_style(void* self, uint8_t textStyle);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#textStyle)
///
/// @param self QSGTextNode*
///
/// @return enum QSGTextNode__TextStyle
///
uint8_t q_sgtextnode_text_style(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setStyleColor)
///
/// @param self QSGTextNode*
/// @param styleColor QColor*
///
void q_sgtextnode_set_style_color(void* self, void* styleColor);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#styleColor)
///
/// @param self QSGTextNode*
///
QColor* q_sgtextnode_style_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setLinkColor)
///
/// @param self QSGTextNode*
/// @param linkColor QColor*
///
void q_sgtextnode_set_link_color(void* self, void* linkColor);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#linkColor)
///
/// @param self QSGTextNode*
///
QColor* q_sgtextnode_link_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setSelectionColor)
///
/// @param self QSGTextNode*
/// @param selectionColor QColor*
///
void q_sgtextnode_set_selection_color(void* self, void* selectionColor);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#selectionColor)
///
/// @param self QSGTextNode*
///
QColor* q_sgtextnode_selection_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setSelectionTextColor)
///
/// @param self QSGTextNode*
/// @param selectionTextColor QColor*
///
void q_sgtextnode_set_selection_text_color(void* self, void* selectionTextColor);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#selectionTextColor)
///
/// @param self QSGTextNode*
///
QColor* q_sgtextnode_selection_text_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setRenderType)
///
/// @param self QSGTextNode*
/// @param renderType enum QSGTextNode__RenderType
///
void q_sgtextnode_set_render_type(void* self, uint8_t renderType);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#renderType)
///
/// @param self QSGTextNode*
///
/// @return enum QSGTextNode__RenderType
///
uint8_t q_sgtextnode_render_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setRenderTypeQuality)
///
/// @param self QSGTextNode*
/// @param renderTypeQuality int
///
void q_sgtextnode_set_render_type_quality(void* self, int renderTypeQuality);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#renderTypeQuality)
///
/// @param self QSGTextNode*
///
int32_t q_sgtextnode_render_type_quality(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setFiltering)
///
/// @param self QSGTextNode*
/// @param filtering enum QSGTexture__Filtering
///
void q_sgtextnode_set_filtering(void* self, int32_t filtering);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#filtering)
///
/// @param self QSGTextNode*
///
/// @return enum QSGTexture__Filtering
///
int32_t q_sgtextnode_filtering(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#clear)
///
/// @param self QSGTextNode*
///
void q_sgtextnode_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setViewport)
///
/// @param self QSGTextNode*
/// @param viewport QRectF*
///
void q_sgtextnode_set_viewport(void* self, void* viewport);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#viewport)
///
/// @param self QSGTextNode*
///
QRectF* q_sgtextnode_viewport(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#addTextLayout)
///
/// @param self QSGTextNode*
/// @param position QPointF*
/// @param layout QTextLayout*
///
void q_sgtextnode_add_text_layout(void* self, void* position, void* layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#addTextDocument)
///
/// @param self QSGTextNode*
/// @param position QPointF*
/// @param document QTextDocument*
///
void q_sgtextnode_add_text_document(void* self, void* position, void* document);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#addTextLayout)
///
/// @param self QSGTextNode*
/// @param position QPointF*
/// @param layout QTextLayout*
/// @param selectionStart int
///
void q_sgtextnode_add_text_layout3(void* self, void* position, void* layout, int selectionStart);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#addTextLayout)
///
/// @param self QSGTextNode*
/// @param position QPointF*
/// @param layout QTextLayout*
/// @param selectionStart int
/// @param selectionCount int
///
void q_sgtextnode_add_text_layout4(void* self, void* position, void* layout, int selectionStart, int selectionCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#addTextLayout)
///
/// @param self QSGTextNode*
/// @param position QPointF*
/// @param layout QTextLayout*
/// @param selectionStart int
/// @param selectionCount int
/// @param lineStart int
///
void q_sgtextnode_add_text_layout5(void* self, void* position, void* layout, int selectionStart, int selectionCount, int lineStart);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#addTextLayout)
///
/// @param self QSGTextNode*
/// @param position QPointF*
/// @param layout QTextLayout*
/// @param selectionStart int
/// @param selectionCount int
/// @param lineStart int
/// @param lineCount int
///
void q_sgtextnode_add_text_layout6(void* self, void* position, void* layout, int selectionStart, int selectionCount, int lineStart, int lineCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#addTextDocument)
///
/// @param self QSGTextNode*
/// @param position QPointF*
/// @param document QTextDocument*
/// @param selectionStart int
///
void q_sgtextnode_add_text_document3(void* self, void* position, void* document, int selectionStart);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#addTextDocument)
///
/// @param self QSGTextNode*
/// @param position QPointF*
/// @param document QTextDocument*
/// @param selectionStart int
/// @param selectionCount int
///
void q_sgtextnode_add_text_document4(void* self, void* position, void* document, int selectionStart, int selectionCount);

/// Inherited from QSGTransformNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#setMatrix)
///
/// @param self QSGTextNode*
/// @param matrix QMatrix4x4*
///
void q_sgtextnode_set_matrix(void* self, void* matrix);

/// Inherited from QSGTransformNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#matrix)
///
/// @param self QSGTextNode*
///
const QMatrix4x4* q_sgtextnode_matrix(void* self);

/// Inherited from QSGTransformNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#setCombinedMatrix)
///
/// @param self QSGTextNode*
/// @param matrix QMatrix4x4*
///
void q_sgtextnode_set_combined_matrix(void* self, void* matrix);

/// Inherited from QSGTransformNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#combinedMatrix)
///
/// @param self QSGTextNode*
///
const QMatrix4x4* q_sgtextnode_combined_matrix(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#parent)
///
/// @param self QSGTextNode*
///
QSGNode* q_sgtextnode_parent(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeChildNode)
///
/// @param self QSGTextNode*
/// @param node QSGNode*
///
void q_sgtextnode_remove_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeAllChildNodes)
///
/// @param self QSGTextNode*
///
void q_sgtextnode_remove_all_child_nodes(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#prependChildNode)
///
/// @param self QSGTextNode*
/// @param node QSGNode*
///
void q_sgtextnode_prepend_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#appendChildNode)
///
/// @param self QSGTextNode*
/// @param node QSGNode*
///
void q_sgtextnode_append_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeBefore)
///
/// @param self QSGTextNode*
/// @param node QSGNode*
/// @param before QSGNode*
///
void q_sgtextnode_insert_child_node_before(void* self, void* node, void* before);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeAfter)
///
/// @param self QSGTextNode*
/// @param node QSGNode*
/// @param after QSGNode*
///
void q_sgtextnode_insert_child_node_after(void* self, void* node, void* after);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#reparentChildNodesTo)
///
/// @param self QSGTextNode*
/// @param newParent QSGNode*
///
void q_sgtextnode_reparent_child_nodes_to(void* self, void* newParent);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childCount)
///
/// @param self QSGTextNode*
///
int32_t q_sgtextnode_child_count(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childAtIndex)
///
/// @param self QSGTextNode*
/// @param i int
///
QSGNode* q_sgtextnode_child_at_index(void* self, int i);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#firstChild)
///
/// @param self QSGTextNode*
///
QSGNode* q_sgtextnode_first_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#lastChild)
///
/// @param self QSGTextNode*
///
QSGNode* q_sgtextnode_last_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#nextSibling)
///
/// @param self QSGTextNode*
///
QSGNode* q_sgtextnode_next_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#previousSibling)
///
/// @param self QSGTextNode*
///
QSGNode* q_sgtextnode_previous_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#type)
///
/// @param self QSGTextNode*
///
/// @return enum QSGNode__NodeType
///
int32_t q_sgtextnode_type(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#clearDirty)
///
/// @param self QSGTextNode*
///
void q_sgtextnode_clear_dirty(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#markDirty)
///
/// @param self QSGTextNode*
/// @param bits flag of enum QSGNode__DirtyStateBit
///
void q_sgtextnode_mark_dirty(void* self, int32_t bits);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dirtyState)
///
/// @param self QSGTextNode*
///
/// @return flag of enum QSGNode__DirtyStateBit
///
int32_t q_sgtextnode_dirty_state(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// @param self QSGTextNode*
///
bool q_sgtextnode_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#flags)
///
/// @param self QSGTextNode*
///
/// @return flag of enum QSGNode__Flag
///
int32_t q_sgtextnode_flags(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGTextNode*
/// @param param1 enum QSGNode__Flag
///
void q_sgtextnode_set_flag(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGTextNode*
/// @param param1 flag of enum QSGNode__Flag
///
void q_sgtextnode_set_flags(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// @param self QSGTextNode*
///
void q_sgtextnode_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGTextNode*
/// @param param1 enum QSGNode__Flag
/// @param param2 bool
///
void q_sgtextnode_set_flag2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGTextNode*
/// @param param1 flag of enum QSGNode__Flag
/// @param param2 bool
///
void q_sgtextnode_set_flags2(void* self, int32_t param1, bool param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#dtor.QSGTextNode)
///
/// Delete this object from C++ memory.
///
/// @param self QSGTextNode*
///
void q_sgtextnode_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#public-types)

typedef enum {
    QSGTEXTNODE_TEXTSTYLE_NORMAL = 0,
    QSGTEXTNODE_TEXTSTYLE_OUTLINE = 1,
    QSGTEXTNODE_TEXTSTYLE_RAISED = 2,
    QSGTEXTNODE_TEXTSTYLE_SUNKEN = 3
} QSGTextNode__TextStyle;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#public-types)

typedef enum {
    QSGTEXTNODE_RENDERTYPE_QTRENDERING = 0,
    QSGTEXTNODE_RENDERTYPE_NATIVERENDERING = 1,
    QSGTEXTNODE_RENDERTYPE_CURVERENDERING = 2
} QSGTextNode__RenderType;

#endif
