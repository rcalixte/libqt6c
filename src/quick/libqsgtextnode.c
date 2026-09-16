#include "../libqcolor.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "libqsgnode.hpp"
#include "../libqtextdocument.hpp"
#include "../libqtextlayout.hpp"
#include "libqsgtextnode.hpp"
#include "libqsgtextnode.h"

void q_sgtextnode_set_color(void* self, void* color) {
    QSGTextNode_SetColor((QSGTextNode*)self, (QColor*)color);
}

QColor* q_sgtextnode_color(void* self) {
    return QSGTextNode_Color((QSGTextNode*)self);
}

void q_sgtextnode_set_text_style(void* self, uint8_t textStyle) {
    QSGTextNode_SetTextStyle((QSGTextNode*)self, textStyle);
}

uint8_t q_sgtextnode_text_style(void* self) {
    return QSGTextNode_TextStyle((QSGTextNode*)self);
}

void q_sgtextnode_set_style_color(void* self, void* styleColor) {
    QSGTextNode_SetStyleColor((QSGTextNode*)self, (QColor*)styleColor);
}

QColor* q_sgtextnode_style_color(void* self) {
    return QSGTextNode_StyleColor((QSGTextNode*)self);
}

void q_sgtextnode_set_link_color(void* self, void* linkColor) {
    QSGTextNode_SetLinkColor((QSGTextNode*)self, (QColor*)linkColor);
}

QColor* q_sgtextnode_link_color(void* self) {
    return QSGTextNode_LinkColor((QSGTextNode*)self);
}

void q_sgtextnode_set_selection_color(void* self, void* selectionColor) {
    QSGTextNode_SetSelectionColor((QSGTextNode*)self, (QColor*)selectionColor);
}

QColor* q_sgtextnode_selection_color(void* self) {
    return QSGTextNode_SelectionColor((QSGTextNode*)self);
}

void q_sgtextnode_set_selection_text_color(void* self, void* selectionTextColor) {
    QSGTextNode_SetSelectionTextColor((QSGTextNode*)self, (QColor*)selectionTextColor);
}

QColor* q_sgtextnode_selection_text_color(void* self) {
    return QSGTextNode_SelectionTextColor((QSGTextNode*)self);
}

void q_sgtextnode_set_render_type(void* self, uint8_t renderType) {
    QSGTextNode_SetRenderType((QSGTextNode*)self, renderType);
}

uint8_t q_sgtextnode_render_type(void* self) {
    return QSGTextNode_RenderType((QSGTextNode*)self);
}

void q_sgtextnode_set_render_type_quality(void* self, int renderTypeQuality) {
    QSGTextNode_SetRenderTypeQuality((QSGTextNode*)self, renderTypeQuality);
}

int32_t q_sgtextnode_render_type_quality(void* self) {
    return QSGTextNode_RenderTypeQuality((QSGTextNode*)self);
}

void q_sgtextnode_set_filtering(void* self, int32_t filtering) {
    QSGTextNode_SetFiltering((QSGTextNode*)self, filtering);
}

int32_t q_sgtextnode_filtering(void* self) {
    return QSGTextNode_Filtering((QSGTextNode*)self);
}

void q_sgtextnode_clear(void* self) {
    QSGTextNode_Clear((QSGTextNode*)self);
}

void q_sgtextnode_set_viewport(void* self, void* viewport) {
    QSGTextNode_SetViewport((QSGTextNode*)self, (QRectF*)viewport);
}

QRectF* q_sgtextnode_viewport(void* self) {
    return QSGTextNode_Viewport((QSGTextNode*)self);
}

void q_sgtextnode_add_text_layout(void* self, void* position, void* layout) {
    QSGTextNode_AddTextLayout((QSGTextNode*)self, (QPointF*)position, (QTextLayout*)layout);
}

void q_sgtextnode_add_text_document(void* self, void* position, void* document) {
    QSGTextNode_AddTextDocument((QSGTextNode*)self, (QPointF*)position, (QTextDocument*)document);
}

void q_sgtextnode_add_text_layout3(void* self, void* position, void* layout, int selectionStart) {
    QSGTextNode_AddTextLayout3((QSGTextNode*)self, (QPointF*)position, (QTextLayout*)layout, selectionStart);
}

void q_sgtextnode_add_text_layout4(void* self, void* position, void* layout, int selectionStart, int selectionCount) {
    QSGTextNode_AddTextLayout4((QSGTextNode*)self, (QPointF*)position, (QTextLayout*)layout, selectionStart, selectionCount);
}

void q_sgtextnode_add_text_layout5(void* self, void* position, void* layout, int selectionStart, int selectionCount, int lineStart) {
    QSGTextNode_AddTextLayout5((QSGTextNode*)self, (QPointF*)position, (QTextLayout*)layout, selectionStart, selectionCount, lineStart);
}

void q_sgtextnode_add_text_layout6(void* self, void* position, void* layout, int selectionStart, int selectionCount, int lineStart, int lineCount) {
    QSGTextNode_AddTextLayout6((QSGTextNode*)self, (QPointF*)position, (QTextLayout*)layout, selectionStart, selectionCount, lineStart, lineCount);
}

void q_sgtextnode_add_text_document3(void* self, void* position, void* document, int selectionStart) {
    QSGTextNode_AddTextDocument3((QSGTextNode*)self, (QPointF*)position, (QTextDocument*)document, selectionStart);
}

void q_sgtextnode_add_text_document4(void* self, void* position, void* document, int selectionStart, int selectionCount) {
    QSGTextNode_AddTextDocument4((QSGTextNode*)self, (QPointF*)position, (QTextDocument*)document, selectionStart, selectionCount);
}

void q_sgtextnode_set_matrix(void* self, void* matrix) {
    QSGTransformNode_SetMatrix((QSGTransformNode*)self, (QMatrix4x4*)matrix);
}

const QMatrix4x4* q_sgtextnode_matrix(void* self) {
    return QSGTransformNode_Matrix((QSGTransformNode*)self);
}

void q_sgtextnode_set_combined_matrix(void* self, void* matrix) {
    QSGTransformNode_SetCombinedMatrix((QSGTransformNode*)self, (QMatrix4x4*)matrix);
}

const QMatrix4x4* q_sgtextnode_combined_matrix(void* self) {
    return QSGTransformNode_CombinedMatrix((QSGTransformNode*)self);
}

QSGNode* q_sgtextnode_parent(void* self) {
    return QSGNode_Parent((QSGNode*)self);
}

void q_sgtextnode_remove_child_node(void* self, void* node) {
    QSGNode_RemoveChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgtextnode_remove_all_child_nodes(void* self) {
    QSGNode_RemoveAllChildNodes((QSGNode*)self);
}

void q_sgtextnode_prepend_child_node(void* self, void* node) {
    QSGNode_PrependChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgtextnode_append_child_node(void* self, void* node) {
    QSGNode_AppendChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgtextnode_insert_child_node_before(void* self, void* node, void* before) {
    QSGNode_InsertChildNodeBefore((QSGNode*)self, (QSGNode*)node, (QSGNode*)before);
}

void q_sgtextnode_insert_child_node_after(void* self, void* node, void* after) {
    QSGNode_InsertChildNodeAfter((QSGNode*)self, (QSGNode*)node, (QSGNode*)after);
}

void q_sgtextnode_reparent_child_nodes_to(void* self, void* newParent) {
    QSGNode_ReparentChildNodesTo((QSGNode*)self, (QSGNode*)newParent);
}

int32_t q_sgtextnode_child_count(void* self) {
    return QSGNode_ChildCount((QSGNode*)self);
}

QSGNode* q_sgtextnode_child_at_index(void* self, int i) {
    return QSGNode_ChildAtIndex((QSGNode*)self, i);
}

QSGNode* q_sgtextnode_first_child(void* self) {
    return QSGNode_FirstChild((QSGNode*)self);
}

QSGNode* q_sgtextnode_last_child(void* self) {
    return QSGNode_LastChild((QSGNode*)self);
}

QSGNode* q_sgtextnode_next_sibling(void* self) {
    return QSGNode_NextSibling((QSGNode*)self);
}

QSGNode* q_sgtextnode_previous_sibling(void* self) {
    return QSGNode_PreviousSibling((QSGNode*)self);
}

int32_t q_sgtextnode_type(void* self) {
    return QSGNode_Type((QSGNode*)self);
}

void q_sgtextnode_clear_dirty(void* self) {
    QSGNode_ClearDirty((QSGNode*)self);
}

void q_sgtextnode_mark_dirty(void* self, int32_t bits) {
    QSGNode_MarkDirty((QSGNode*)self, bits);
}

int32_t q_sgtextnode_dirty_state(void* self) {
    return QSGNode_DirtyState((QSGNode*)self);
}

bool q_sgtextnode_is_subtree_blocked(void* self) {
    return QSGNode_IsSubtreeBlocked((QSGNode*)self);
}

int32_t q_sgtextnode_flags(void* self) {
    return QSGNode_Flags((QSGNode*)self);
}

void q_sgtextnode_set_flag(void* self, int32_t param1) {
    QSGNode_SetFlag((QSGNode*)self, param1);
}

void q_sgtextnode_set_flags(void* self, int32_t param1) {
    QSGNode_SetFlags((QSGNode*)self, param1);
}

void q_sgtextnode_preprocess(void* self) {
    QSGNode_Preprocess((QSGNode*)self);
}

void q_sgtextnode_set_flag2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlag2((QSGNode*)self, param1, param2);
}

void q_sgtextnode_set_flags2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlags2((QSGNode*)self, param1, param2);
}

void q_sgtextnode_delete(void* self) {
    QSGTextNode_Delete((QSGTextNode*)(self));
}
