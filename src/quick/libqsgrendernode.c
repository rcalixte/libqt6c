#include "../libqmatrix4x4.hpp"
#include "../libqrect.hpp"
#include "../libqregion.hpp"
#include "libqsgnode.hpp"
#include "libqsgrendernode.hpp"
#include "libqsgrendernode.h"

QSGRenderNode* q_sgrendernode_new() {
    return QSGRenderNode_New();
}

int32_t q_sgrendernode_changed_states(void* self) {
    return QSGRenderNode_ChangedStates((QSGRenderNode*)self);
}

void q_sgrendernode_on_changed_states(void* self, int32_t (*callback)()) {
    QSGRenderNode_OnChangedStates((QSGRenderNode*)self, (intptr_t)callback);
}

int32_t q_sgrendernode_super_changed_states(void* self) {
    return QSGRenderNode_SuperChangedStates((QSGRenderNode*)self);
}

void q_sgrendernode_prepare(void* self) {
    QSGRenderNode_Prepare((QSGRenderNode*)self);
}

void q_sgrendernode_on_prepare(void* self, void (*callback)()) {
    QSGRenderNode_OnPrepare((QSGRenderNode*)self, (intptr_t)callback);
}

void q_sgrendernode_super_prepare(void* self) {
    QSGRenderNode_SuperPrepare((QSGRenderNode*)self);
}

void q_sgrendernode_render(void* self, void* state) {
    QSGRenderNode_Render((QSGRenderNode*)self, (QSGRenderNode__RenderState*)state);
}

void q_sgrendernode_on_render(void* self, void (*callback)(void*, void*)) {
    QSGRenderNode_OnRender((QSGRenderNode*)self, (intptr_t)callback);
}

void q_sgrendernode_super_render(void* self, void* state) {
    QSGRenderNode_SuperRender((QSGRenderNode*)self, (QSGRenderNode__RenderState*)state);
}

void q_sgrendernode_release_resources(void* self) {
    QSGRenderNode_ReleaseResources((QSGRenderNode*)self);
}

void q_sgrendernode_on_release_resources(void* self, void (*callback)()) {
    QSGRenderNode_OnReleaseResources((QSGRenderNode*)self, (intptr_t)callback);
}

void q_sgrendernode_super_release_resources(void* self) {
    QSGRenderNode_SuperReleaseResources((QSGRenderNode*)self);
}

int32_t q_sgrendernode_flags(void* self) {
    return QSGRenderNode_Flags((QSGRenderNode*)self);
}

void q_sgrendernode_on_flags(void* self, int32_t (*callback)()) {
    QSGRenderNode_OnFlags((QSGRenderNode*)self, (intptr_t)callback);
}

int32_t q_sgrendernode_super_flags(void* self) {
    return QSGRenderNode_SuperFlags((QSGRenderNode*)self);
}

QRectF* q_sgrendernode_rect(void* self) {
    return QSGRenderNode_Rect((QSGRenderNode*)self);
}

void q_sgrendernode_on_rect(void* self, QRectF* (*callback)()) {
    QSGRenderNode_OnRect((QSGRenderNode*)self, (intptr_t)callback);
}

QRectF* q_sgrendernode_super_rect(void* self) {
    return QSGRenderNode_SuperRect((QSGRenderNode*)self);
}

const QMatrix4x4* q_sgrendernode_projection_matrix(void* self) {
    return QSGRenderNode_ProjectionMatrix((QSGRenderNode*)self);
}

const QMatrix4x4* q_sgrendernode_projection_matrix2(void* self, intptr_t index) {
    return QSGRenderNode_ProjectionMatrix2((QSGRenderNode*)self, index);
}

const QMatrix4x4* q_sgrendernode_matrix(void* self) {
    return QSGRenderNode_Matrix((QSGRenderNode*)self);
}

const QSGClipNode* q_sgrendernode_clip_list(void* self) {
    return QSGRenderNode_ClipList((QSGRenderNode*)self);
}

double q_sgrendernode_inherited_opacity(void* self) {
    return QSGRenderNode_InheritedOpacity((QSGRenderNode*)self);
}

QSGNode* q_sgrendernode_parent(void* self) {
    return QSGNode_Parent((QSGNode*)self);
}

void q_sgrendernode_remove_child_node(void* self, void* node) {
    QSGNode_RemoveChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgrendernode_remove_all_child_nodes(void* self) {
    QSGNode_RemoveAllChildNodes((QSGNode*)self);
}

void q_sgrendernode_prepend_child_node(void* self, void* node) {
    QSGNode_PrependChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgrendernode_append_child_node(void* self, void* node) {
    QSGNode_AppendChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgrendernode_insert_child_node_before(void* self, void* node, void* before) {
    QSGNode_InsertChildNodeBefore((QSGNode*)self, (QSGNode*)node, (QSGNode*)before);
}

void q_sgrendernode_insert_child_node_after(void* self, void* node, void* after) {
    QSGNode_InsertChildNodeAfter((QSGNode*)self, (QSGNode*)node, (QSGNode*)after);
}

void q_sgrendernode_reparent_child_nodes_to(void* self, void* newParent) {
    QSGNode_ReparentChildNodesTo((QSGNode*)self, (QSGNode*)newParent);
}

int32_t q_sgrendernode_child_count(void* self) {
    return QSGNode_ChildCount((QSGNode*)self);
}

QSGNode* q_sgrendernode_child_at_index(void* self, int i) {
    return QSGNode_ChildAtIndex((QSGNode*)self, i);
}

QSGNode* q_sgrendernode_first_child(void* self) {
    return QSGNode_FirstChild((QSGNode*)self);
}

QSGNode* q_sgrendernode_last_child(void* self) {
    return QSGNode_LastChild((QSGNode*)self);
}

QSGNode* q_sgrendernode_next_sibling(void* self) {
    return QSGNode_NextSibling((QSGNode*)self);
}

QSGNode* q_sgrendernode_previous_sibling(void* self) {
    return QSGNode_PreviousSibling((QSGNode*)self);
}

int32_t q_sgrendernode_type(void* self) {
    return QSGNode_Type((QSGNode*)self);
}

void q_sgrendernode_clear_dirty(void* self) {
    QSGNode_ClearDirty((QSGNode*)self);
}

void q_sgrendernode_mark_dirty(void* self, int32_t bits) {
    QSGNode_MarkDirty((QSGNode*)self, bits);
}

int32_t q_sgrendernode_dirty_state(void* self) {
    return QSGNode_DirtyState((QSGNode*)self);
}

void q_sgrendernode_set_flag(void* self, int32_t param1) {
    QSGNode_SetFlag((QSGNode*)self, param1);
}

void q_sgrendernode_set_flags(void* self, int32_t param1) {
    QSGNode_SetFlags((QSGNode*)self, param1);
}

void q_sgrendernode_set_flag2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlag2((QSGNode*)self, param1, param2);
}

void q_sgrendernode_set_flags2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlags2((QSGNode*)self, param1, param2);
}

bool q_sgrendernode_is_subtree_blocked(void* self) {
    return QSGRenderNode_IsSubtreeBlocked((QSGRenderNode*)self);
}

bool q_sgrendernode_super_is_subtree_blocked(void* self) {
    return QSGRenderNode_SuperIsSubtreeBlocked((QSGRenderNode*)self);
}

void q_sgrendernode_on_is_subtree_blocked(void* self, bool (*callback)()) {
    QSGRenderNode_OnIsSubtreeBlocked((QSGRenderNode*)self, (intptr_t)callback);
}

void q_sgrendernode_preprocess(void* self) {
    QSGRenderNode_Preprocess((QSGRenderNode*)self);
}

void q_sgrendernode_super_preprocess(void* self) {
    QSGRenderNode_SuperPreprocess((QSGRenderNode*)self);
}

void q_sgrendernode_on_preprocess(void* self, void (*callback)()) {
    QSGRenderNode_OnPreprocess((QSGRenderNode*)self, (intptr_t)callback);
}

void q_sgrendernode_delete(void* self) {
    QSGRenderNode_Delete((QSGRenderNode*)(self));
}

const QMatrix4x4* q_sgrendernode__renderstate_projection_matrix(void* self) {
    return QSGRenderNode__RenderState_ProjectionMatrix((QSGRenderNode__RenderState*)self);
}

QRect* q_sgrendernode__renderstate_scissor_rect(void* self) {
    return QSGRenderNode__RenderState_ScissorRect((QSGRenderNode__RenderState*)self);
}

bool q_sgrendernode__renderstate_scissor_enabled(void* self) {
    return QSGRenderNode__RenderState_ScissorEnabled((QSGRenderNode__RenderState*)self);
}

int32_t q_sgrendernode__renderstate_stencil_value(void* self) {
    return QSGRenderNode__RenderState_StencilValue((QSGRenderNode__RenderState*)self);
}

bool q_sgrendernode__renderstate_stencil_enabled(void* self) {
    return QSGRenderNode__RenderState_StencilEnabled((QSGRenderNode__RenderState*)self);
}

const QRegion* q_sgrendernode__renderstate_clip_region(void* self) {
    return QSGRenderNode__RenderState_ClipRegion((QSGRenderNode__RenderState*)self);
}

void* q_sgrendernode__renderstate_get(void* self, const char* state) {
    return QSGRenderNode__RenderState_Get((QSGRenderNode__RenderState*)self, state);
}

void q_sgrendernode__renderstate_operator_assign(void* self, void* param1) {
    QSGRenderNode__RenderState_OperatorAssign((QSGRenderNode__RenderState*)self, (QSGRenderNode__RenderState*)param1);
}

void q_sgrendernode__renderstate_delete(void* self) {
    QSGRenderNode__RenderState_Delete((QSGRenderNode__RenderState*)(self));
}
