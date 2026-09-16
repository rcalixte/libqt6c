#include "../libqmatrix4x4.hpp"
#include "../libqrect.hpp"
#include "libqsggeometry.hpp"
#include "libqsgmaterial.hpp"
#include "libqsgnode.hpp"
#include "libqsgnode.h"

QSGNode* q_sgnode_new() {
    return QSGNode_New();
}

QSGNode* q_sgnode_parent(void* self) {
    return QSGNode_Parent((QSGNode*)self);
}

void q_sgnode_remove_child_node(void* self, void* node) {
    QSGNode_RemoveChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgnode_remove_all_child_nodes(void* self) {
    QSGNode_RemoveAllChildNodes((QSGNode*)self);
}

void q_sgnode_prepend_child_node(void* self, void* node) {
    QSGNode_PrependChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgnode_append_child_node(void* self, void* node) {
    QSGNode_AppendChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgnode_insert_child_node_before(void* self, void* node, void* before) {
    QSGNode_InsertChildNodeBefore((QSGNode*)self, (QSGNode*)node, (QSGNode*)before);
}

void q_sgnode_insert_child_node_after(void* self, void* node, void* after) {
    QSGNode_InsertChildNodeAfter((QSGNode*)self, (QSGNode*)node, (QSGNode*)after);
}

void q_sgnode_reparent_child_nodes_to(void* self, void* newParent) {
    QSGNode_ReparentChildNodesTo((QSGNode*)self, (QSGNode*)newParent);
}

int32_t q_sgnode_child_count(void* self) {
    return QSGNode_ChildCount((QSGNode*)self);
}

QSGNode* q_sgnode_child_at_index(void* self, int i) {
    return QSGNode_ChildAtIndex((QSGNode*)self, i);
}

QSGNode* q_sgnode_first_child(void* self) {
    return QSGNode_FirstChild((QSGNode*)self);
}

QSGNode* q_sgnode_last_child(void* self) {
    return QSGNode_LastChild((QSGNode*)self);
}

QSGNode* q_sgnode_next_sibling(void* self) {
    return QSGNode_NextSibling((QSGNode*)self);
}

QSGNode* q_sgnode_previous_sibling(void* self) {
    return QSGNode_PreviousSibling((QSGNode*)self);
}

int32_t q_sgnode_type(void* self) {
    return QSGNode_Type((QSGNode*)self);
}

void q_sgnode_clear_dirty(void* self) {
    QSGNode_ClearDirty((QSGNode*)self);
}

void q_sgnode_mark_dirty(void* self, int32_t bits) {
    QSGNode_MarkDirty((QSGNode*)self, bits);
}

int32_t q_sgnode_dirty_state(void* self) {
    return QSGNode_DirtyState((QSGNode*)self);
}

bool q_sgnode_is_subtree_blocked(void* self) {
    return QSGNode_IsSubtreeBlocked((QSGNode*)self);
}

void q_sgnode_on_is_subtree_blocked(void* self, bool (*callback)()) {
    QSGNode_OnIsSubtreeBlocked((QSGNode*)self, (intptr_t)callback);
}

bool q_sgnode_super_is_subtree_blocked(void* self) {
    return QSGNode_SuperIsSubtreeBlocked((QSGNode*)self);
}

int32_t q_sgnode_flags(void* self) {
    return QSGNode_Flags((QSGNode*)self);
}

void q_sgnode_set_flag(void* self, int32_t param1) {
    QSGNode_SetFlag((QSGNode*)self, param1);
}

void q_sgnode_set_flags(void* self, int32_t param1) {
    QSGNode_SetFlags((QSGNode*)self, param1);
}

void q_sgnode_preprocess(void* self) {
    QSGNode_Preprocess((QSGNode*)self);
}

void q_sgnode_on_preprocess(void* self, void (*callback)()) {
    QSGNode_OnPreprocess((QSGNode*)self, (intptr_t)callback);
}

void q_sgnode_super_preprocess(void* self) {
    QSGNode_SuperPreprocess((QSGNode*)self);
}

void q_sgnode_set_flag2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlag2((QSGNode*)self, param1, param2);
}

void q_sgnode_set_flags2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlags2((QSGNode*)self, param1, param2);
}

void q_sgnode_delete(void* self) {
    QSGNode_Delete((QSGNode*)(self));
}

void q_qsgnode_h_qsgnode_set_description(void* node, const char* description) {
    qsgnode_h_QsgnodeSetDescription((QSGNode*)node, qstring(description));
}

void q_sgbasicgeometrynode_set_geometry(void* self, void* geometry) {
    QSGBasicGeometryNode_SetGeometry((QSGBasicGeometryNode*)self, (QSGGeometry*)geometry);
}

const QSGGeometry* q_sgbasicgeometrynode_geometry(void* self) {
    return QSGBasicGeometryNode_Geometry((QSGBasicGeometryNode*)self);
}

QSGGeometry* q_sgbasicgeometrynode_geometry2(void* self) {
    return QSGBasicGeometryNode_Geometry2((QSGBasicGeometryNode*)self);
}

const QMatrix4x4* q_sgbasicgeometrynode_matrix(void* self) {
    return QSGBasicGeometryNode_Matrix((QSGBasicGeometryNode*)self);
}

const QSGClipNode* q_sgbasicgeometrynode_clip_list(void* self) {
    return QSGBasicGeometryNode_ClipList((QSGBasicGeometryNode*)self);
}

void q_sgbasicgeometrynode_set_renderer_matrix(void* self, void* m) {
    QSGBasicGeometryNode_SetRendererMatrix((QSGBasicGeometryNode*)self, (QMatrix4x4*)m);
}

void q_sgbasicgeometrynode_set_renderer_clip_list(void* self, void* c) {
    QSGBasicGeometryNode_SetRendererClipList((QSGBasicGeometryNode*)self, (QSGClipNode*)c);
}

QSGNode* q_sgbasicgeometrynode_parent(void* self) {
    return QSGNode_Parent((QSGNode*)self);
}

void q_sgbasicgeometrynode_remove_child_node(void* self, void* node) {
    QSGNode_RemoveChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgbasicgeometrynode_remove_all_child_nodes(void* self) {
    QSGNode_RemoveAllChildNodes((QSGNode*)self);
}

void q_sgbasicgeometrynode_prepend_child_node(void* self, void* node) {
    QSGNode_PrependChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgbasicgeometrynode_append_child_node(void* self, void* node) {
    QSGNode_AppendChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgbasicgeometrynode_insert_child_node_before(void* self, void* node, void* before) {
    QSGNode_InsertChildNodeBefore((QSGNode*)self, (QSGNode*)node, (QSGNode*)before);
}

void q_sgbasicgeometrynode_insert_child_node_after(void* self, void* node, void* after) {
    QSGNode_InsertChildNodeAfter((QSGNode*)self, (QSGNode*)node, (QSGNode*)after);
}

void q_sgbasicgeometrynode_reparent_child_nodes_to(void* self, void* newParent) {
    QSGNode_ReparentChildNodesTo((QSGNode*)self, (QSGNode*)newParent);
}

int32_t q_sgbasicgeometrynode_child_count(void* self) {
    return QSGNode_ChildCount((QSGNode*)self);
}

QSGNode* q_sgbasicgeometrynode_child_at_index(void* self, int i) {
    return QSGNode_ChildAtIndex((QSGNode*)self, i);
}

QSGNode* q_sgbasicgeometrynode_first_child(void* self) {
    return QSGNode_FirstChild((QSGNode*)self);
}

QSGNode* q_sgbasicgeometrynode_last_child(void* self) {
    return QSGNode_LastChild((QSGNode*)self);
}

QSGNode* q_sgbasicgeometrynode_next_sibling(void* self) {
    return QSGNode_NextSibling((QSGNode*)self);
}

QSGNode* q_sgbasicgeometrynode_previous_sibling(void* self) {
    return QSGNode_PreviousSibling((QSGNode*)self);
}

int32_t q_sgbasicgeometrynode_type(void* self) {
    return QSGNode_Type((QSGNode*)self);
}

void q_sgbasicgeometrynode_clear_dirty(void* self) {
    QSGNode_ClearDirty((QSGNode*)self);
}

void q_sgbasicgeometrynode_mark_dirty(void* self, int32_t bits) {
    QSGNode_MarkDirty((QSGNode*)self, bits);
}

int32_t q_sgbasicgeometrynode_dirty_state(void* self) {
    return QSGNode_DirtyState((QSGNode*)self);
}

bool q_sgbasicgeometrynode_is_subtree_blocked(void* self) {
    return QSGNode_IsSubtreeBlocked((QSGNode*)self);
}

int32_t q_sgbasicgeometrynode_flags(void* self) {
    return QSGNode_Flags((QSGNode*)self);
}

void q_sgbasicgeometrynode_set_flag(void* self, int32_t param1) {
    QSGNode_SetFlag((QSGNode*)self, param1);
}

void q_sgbasicgeometrynode_set_flags(void* self, int32_t param1) {
    QSGNode_SetFlags((QSGNode*)self, param1);
}

void q_sgbasicgeometrynode_preprocess(void* self) {
    QSGNode_Preprocess((QSGNode*)self);
}

void q_sgbasicgeometrynode_set_flag2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlag2((QSGNode*)self, param1, param2);
}

void q_sgbasicgeometrynode_set_flags2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlags2((QSGNode*)self, param1, param2);
}

void q_sgbasicgeometrynode_delete(void* self) {
    QSGBasicGeometryNode_Delete((QSGBasicGeometryNode*)(self));
}

QSGGeometryNode* q_sggeometrynode_new() {
    return QSGGeometryNode_New();
}

void q_sggeometrynode_set_material(void* self, void* material) {
    QSGGeometryNode_SetMaterial((QSGGeometryNode*)self, (QSGMaterial*)material);
}

QSGMaterial* q_sggeometrynode_material(void* self) {
    return QSGGeometryNode_Material((QSGGeometryNode*)self);
}

void q_sggeometrynode_set_opaque_material(void* self, void* material) {
    QSGGeometryNode_SetOpaqueMaterial((QSGGeometryNode*)self, (QSGMaterial*)material);
}

QSGMaterial* q_sggeometrynode_opaque_material(void* self) {
    return QSGGeometryNode_OpaqueMaterial((QSGGeometryNode*)self);
}

QSGMaterial* q_sggeometrynode_active_material(void* self) {
    return QSGGeometryNode_ActiveMaterial((QSGGeometryNode*)self);
}

void q_sggeometrynode_set_render_order(void* self, int order) {
    QSGGeometryNode_SetRenderOrder((QSGGeometryNode*)self, order);
}

int32_t q_sggeometrynode_render_order(void* self) {
    return QSGGeometryNode_RenderOrder((QSGGeometryNode*)self);
}

void q_sggeometrynode_set_inherited_opacity(void* self, double opacity) {
    QSGGeometryNode_SetInheritedOpacity((QSGGeometryNode*)self, opacity);
}

double q_sggeometrynode_inherited_opacity(void* self) {
    return QSGGeometryNode_InheritedOpacity((QSGGeometryNode*)self);
}

void q_sggeometrynode_set_geometry(void* self, void* geometry) {
    QSGBasicGeometryNode_SetGeometry((QSGBasicGeometryNode*)self, (QSGGeometry*)geometry);
}

const QSGGeometry* q_sggeometrynode_geometry(void* self) {
    return QSGBasicGeometryNode_Geometry((QSGBasicGeometryNode*)self);
}

QSGGeometry* q_sggeometrynode_geometry2(void* self) {
    return QSGBasicGeometryNode_Geometry2((QSGBasicGeometryNode*)self);
}

const QMatrix4x4* q_sggeometrynode_matrix(void* self) {
    return QSGBasicGeometryNode_Matrix((QSGBasicGeometryNode*)self);
}

const QSGClipNode* q_sggeometrynode_clip_list(void* self) {
    return QSGBasicGeometryNode_ClipList((QSGBasicGeometryNode*)self);
}

void q_sggeometrynode_set_renderer_matrix(void* self, void* m) {
    QSGBasicGeometryNode_SetRendererMatrix((QSGBasicGeometryNode*)self, (QMatrix4x4*)m);
}

void q_sggeometrynode_set_renderer_clip_list(void* self, void* c) {
    QSGBasicGeometryNode_SetRendererClipList((QSGBasicGeometryNode*)self, (QSGClipNode*)c);
}

QSGNode* q_sggeometrynode_parent(void* self) {
    return QSGNode_Parent((QSGNode*)self);
}

void q_sggeometrynode_remove_child_node(void* self, void* node) {
    QSGNode_RemoveChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sggeometrynode_remove_all_child_nodes(void* self) {
    QSGNode_RemoveAllChildNodes((QSGNode*)self);
}

void q_sggeometrynode_prepend_child_node(void* self, void* node) {
    QSGNode_PrependChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sggeometrynode_append_child_node(void* self, void* node) {
    QSGNode_AppendChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sggeometrynode_insert_child_node_before(void* self, void* node, void* before) {
    QSGNode_InsertChildNodeBefore((QSGNode*)self, (QSGNode*)node, (QSGNode*)before);
}

void q_sggeometrynode_insert_child_node_after(void* self, void* node, void* after) {
    QSGNode_InsertChildNodeAfter((QSGNode*)self, (QSGNode*)node, (QSGNode*)after);
}

void q_sggeometrynode_reparent_child_nodes_to(void* self, void* newParent) {
    QSGNode_ReparentChildNodesTo((QSGNode*)self, (QSGNode*)newParent);
}

int32_t q_sggeometrynode_child_count(void* self) {
    return QSGNode_ChildCount((QSGNode*)self);
}

QSGNode* q_sggeometrynode_child_at_index(void* self, int i) {
    return QSGNode_ChildAtIndex((QSGNode*)self, i);
}

QSGNode* q_sggeometrynode_first_child(void* self) {
    return QSGNode_FirstChild((QSGNode*)self);
}

QSGNode* q_sggeometrynode_last_child(void* self) {
    return QSGNode_LastChild((QSGNode*)self);
}

QSGNode* q_sggeometrynode_next_sibling(void* self) {
    return QSGNode_NextSibling((QSGNode*)self);
}

QSGNode* q_sggeometrynode_previous_sibling(void* self) {
    return QSGNode_PreviousSibling((QSGNode*)self);
}

int32_t q_sggeometrynode_type(void* self) {
    return QSGNode_Type((QSGNode*)self);
}

void q_sggeometrynode_clear_dirty(void* self) {
    QSGNode_ClearDirty((QSGNode*)self);
}

void q_sggeometrynode_mark_dirty(void* self, int32_t bits) {
    QSGNode_MarkDirty((QSGNode*)self, bits);
}

int32_t q_sggeometrynode_dirty_state(void* self) {
    return QSGNode_DirtyState((QSGNode*)self);
}

int32_t q_sggeometrynode_flags(void* self) {
    return QSGNode_Flags((QSGNode*)self);
}

void q_sggeometrynode_set_flag(void* self, int32_t param1) {
    QSGNode_SetFlag((QSGNode*)self, param1);
}

void q_sggeometrynode_set_flags(void* self, int32_t param1) {
    QSGNode_SetFlags((QSGNode*)self, param1);
}

void q_sggeometrynode_set_flag2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlag2((QSGNode*)self, param1, param2);
}

void q_sggeometrynode_set_flags2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlags2((QSGNode*)self, param1, param2);
}

bool q_sggeometrynode_is_subtree_blocked(void* self) {
    return QSGGeometryNode_IsSubtreeBlocked((QSGGeometryNode*)self);
}

bool q_sggeometrynode_super_is_subtree_blocked(void* self) {
    return QSGGeometryNode_SuperIsSubtreeBlocked((QSGGeometryNode*)self);
}

void q_sggeometrynode_on_is_subtree_blocked(void* self, bool (*callback)()) {
    QSGGeometryNode_OnIsSubtreeBlocked((QSGGeometryNode*)self, (intptr_t)callback);
}

void q_sggeometrynode_preprocess(void* self) {
    QSGGeometryNode_Preprocess((QSGGeometryNode*)self);
}

void q_sggeometrynode_super_preprocess(void* self) {
    QSGGeometryNode_SuperPreprocess((QSGGeometryNode*)self);
}

void q_sggeometrynode_on_preprocess(void* self, void (*callback)()) {
    QSGGeometryNode_OnPreprocess((QSGGeometryNode*)self, (intptr_t)callback);
}

void q_sggeometrynode_delete(void* self) {
    QSGGeometryNode_Delete((QSGGeometryNode*)(self));
}

QSGClipNode* q_sgclipnode_new() {
    return QSGClipNode_New();
}

void q_sgclipnode_set_is_rectangular(void* self, bool rectHint) {
    QSGClipNode_SetIsRectangular((QSGClipNode*)self, rectHint);
}

bool q_sgclipnode_is_rectangular(void* self) {
    return QSGClipNode_IsRectangular((QSGClipNode*)self);
}

void q_sgclipnode_set_clip_rect(void* self, void* clipRect) {
    QSGClipNode_SetClipRect((QSGClipNode*)self, (QRectF*)clipRect);
}

QRectF* q_sgclipnode_clip_rect(void* self) {
    return QSGClipNode_ClipRect((QSGClipNode*)self);
}

void q_sgclipnode_set_geometry(void* self, void* geometry) {
    QSGBasicGeometryNode_SetGeometry((QSGBasicGeometryNode*)self, (QSGGeometry*)geometry);
}

const QSGGeometry* q_sgclipnode_geometry(void* self) {
    return QSGBasicGeometryNode_Geometry((QSGBasicGeometryNode*)self);
}

QSGGeometry* q_sgclipnode_geometry2(void* self) {
    return QSGBasicGeometryNode_Geometry2((QSGBasicGeometryNode*)self);
}

const QMatrix4x4* q_sgclipnode_matrix(void* self) {
    return QSGBasicGeometryNode_Matrix((QSGBasicGeometryNode*)self);
}

const QSGClipNode* q_sgclipnode_clip_list(void* self) {
    return QSGBasicGeometryNode_ClipList((QSGBasicGeometryNode*)self);
}

void q_sgclipnode_set_renderer_matrix(void* self, void* m) {
    QSGBasicGeometryNode_SetRendererMatrix((QSGBasicGeometryNode*)self, (QMatrix4x4*)m);
}

void q_sgclipnode_set_renderer_clip_list(void* self, void* c) {
    QSGBasicGeometryNode_SetRendererClipList((QSGBasicGeometryNode*)self, (QSGClipNode*)c);
}

QSGNode* q_sgclipnode_parent(void* self) {
    return QSGNode_Parent((QSGNode*)self);
}

void q_sgclipnode_remove_child_node(void* self, void* node) {
    QSGNode_RemoveChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgclipnode_remove_all_child_nodes(void* self) {
    QSGNode_RemoveAllChildNodes((QSGNode*)self);
}

void q_sgclipnode_prepend_child_node(void* self, void* node) {
    QSGNode_PrependChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgclipnode_append_child_node(void* self, void* node) {
    QSGNode_AppendChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgclipnode_insert_child_node_before(void* self, void* node, void* before) {
    QSGNode_InsertChildNodeBefore((QSGNode*)self, (QSGNode*)node, (QSGNode*)before);
}

void q_sgclipnode_insert_child_node_after(void* self, void* node, void* after) {
    QSGNode_InsertChildNodeAfter((QSGNode*)self, (QSGNode*)node, (QSGNode*)after);
}

void q_sgclipnode_reparent_child_nodes_to(void* self, void* newParent) {
    QSGNode_ReparentChildNodesTo((QSGNode*)self, (QSGNode*)newParent);
}

int32_t q_sgclipnode_child_count(void* self) {
    return QSGNode_ChildCount((QSGNode*)self);
}

QSGNode* q_sgclipnode_child_at_index(void* self, int i) {
    return QSGNode_ChildAtIndex((QSGNode*)self, i);
}

QSGNode* q_sgclipnode_first_child(void* self) {
    return QSGNode_FirstChild((QSGNode*)self);
}

QSGNode* q_sgclipnode_last_child(void* self) {
    return QSGNode_LastChild((QSGNode*)self);
}

QSGNode* q_sgclipnode_next_sibling(void* self) {
    return QSGNode_NextSibling((QSGNode*)self);
}

QSGNode* q_sgclipnode_previous_sibling(void* self) {
    return QSGNode_PreviousSibling((QSGNode*)self);
}

int32_t q_sgclipnode_type(void* self) {
    return QSGNode_Type((QSGNode*)self);
}

void q_sgclipnode_clear_dirty(void* self) {
    QSGNode_ClearDirty((QSGNode*)self);
}

void q_sgclipnode_mark_dirty(void* self, int32_t bits) {
    QSGNode_MarkDirty((QSGNode*)self, bits);
}

int32_t q_sgclipnode_dirty_state(void* self) {
    return QSGNode_DirtyState((QSGNode*)self);
}

int32_t q_sgclipnode_flags(void* self) {
    return QSGNode_Flags((QSGNode*)self);
}

void q_sgclipnode_set_flag(void* self, int32_t param1) {
    QSGNode_SetFlag((QSGNode*)self, param1);
}

void q_sgclipnode_set_flags(void* self, int32_t param1) {
    QSGNode_SetFlags((QSGNode*)self, param1);
}

void q_sgclipnode_set_flag2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlag2((QSGNode*)self, param1, param2);
}

void q_sgclipnode_set_flags2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlags2((QSGNode*)self, param1, param2);
}

bool q_sgclipnode_is_subtree_blocked(void* self) {
    return QSGClipNode_IsSubtreeBlocked((QSGClipNode*)self);
}

bool q_sgclipnode_super_is_subtree_blocked(void* self) {
    return QSGClipNode_SuperIsSubtreeBlocked((QSGClipNode*)self);
}

void q_sgclipnode_on_is_subtree_blocked(void* self, bool (*callback)()) {
    QSGClipNode_OnIsSubtreeBlocked((QSGClipNode*)self, (intptr_t)callback);
}

void q_sgclipnode_preprocess(void* self) {
    QSGClipNode_Preprocess((QSGClipNode*)self);
}

void q_sgclipnode_super_preprocess(void* self) {
    QSGClipNode_SuperPreprocess((QSGClipNode*)self);
}

void q_sgclipnode_on_preprocess(void* self, void (*callback)()) {
    QSGClipNode_OnPreprocess((QSGClipNode*)self, (intptr_t)callback);
}

void q_sgclipnode_delete(void* self) {
    QSGClipNode_Delete((QSGClipNode*)(self));
}

QSGTransformNode* q_sgtransformnode_new() {
    return QSGTransformNode_New();
}

void q_sgtransformnode_set_matrix(void* self, void* matrix) {
    QSGTransformNode_SetMatrix((QSGTransformNode*)self, (QMatrix4x4*)matrix);
}

const QMatrix4x4* q_sgtransformnode_matrix(void* self) {
    return QSGTransformNode_Matrix((QSGTransformNode*)self);
}

void q_sgtransformnode_set_combined_matrix(void* self, void* matrix) {
    QSGTransformNode_SetCombinedMatrix((QSGTransformNode*)self, (QMatrix4x4*)matrix);
}

const QMatrix4x4* q_sgtransformnode_combined_matrix(void* self) {
    return QSGTransformNode_CombinedMatrix((QSGTransformNode*)self);
}

QSGNode* q_sgtransformnode_parent(void* self) {
    return QSGNode_Parent((QSGNode*)self);
}

void q_sgtransformnode_remove_child_node(void* self, void* node) {
    QSGNode_RemoveChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgtransformnode_remove_all_child_nodes(void* self) {
    QSGNode_RemoveAllChildNodes((QSGNode*)self);
}

void q_sgtransformnode_prepend_child_node(void* self, void* node) {
    QSGNode_PrependChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgtransformnode_append_child_node(void* self, void* node) {
    QSGNode_AppendChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgtransformnode_insert_child_node_before(void* self, void* node, void* before) {
    QSGNode_InsertChildNodeBefore((QSGNode*)self, (QSGNode*)node, (QSGNode*)before);
}

void q_sgtransformnode_insert_child_node_after(void* self, void* node, void* after) {
    QSGNode_InsertChildNodeAfter((QSGNode*)self, (QSGNode*)node, (QSGNode*)after);
}

void q_sgtransformnode_reparent_child_nodes_to(void* self, void* newParent) {
    QSGNode_ReparentChildNodesTo((QSGNode*)self, (QSGNode*)newParent);
}

int32_t q_sgtransformnode_child_count(void* self) {
    return QSGNode_ChildCount((QSGNode*)self);
}

QSGNode* q_sgtransformnode_child_at_index(void* self, int i) {
    return QSGNode_ChildAtIndex((QSGNode*)self, i);
}

QSGNode* q_sgtransformnode_first_child(void* self) {
    return QSGNode_FirstChild((QSGNode*)self);
}

QSGNode* q_sgtransformnode_last_child(void* self) {
    return QSGNode_LastChild((QSGNode*)self);
}

QSGNode* q_sgtransformnode_next_sibling(void* self) {
    return QSGNode_NextSibling((QSGNode*)self);
}

QSGNode* q_sgtransformnode_previous_sibling(void* self) {
    return QSGNode_PreviousSibling((QSGNode*)self);
}

int32_t q_sgtransformnode_type(void* self) {
    return QSGNode_Type((QSGNode*)self);
}

void q_sgtransformnode_clear_dirty(void* self) {
    QSGNode_ClearDirty((QSGNode*)self);
}

void q_sgtransformnode_mark_dirty(void* self, int32_t bits) {
    QSGNode_MarkDirty((QSGNode*)self, bits);
}

int32_t q_sgtransformnode_dirty_state(void* self) {
    return QSGNode_DirtyState((QSGNode*)self);
}

int32_t q_sgtransformnode_flags(void* self) {
    return QSGNode_Flags((QSGNode*)self);
}

void q_sgtransformnode_set_flag(void* self, int32_t param1) {
    QSGNode_SetFlag((QSGNode*)self, param1);
}

void q_sgtransformnode_set_flags(void* self, int32_t param1) {
    QSGNode_SetFlags((QSGNode*)self, param1);
}

void q_sgtransformnode_set_flag2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlag2((QSGNode*)self, param1, param2);
}

void q_sgtransformnode_set_flags2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlags2((QSGNode*)self, param1, param2);
}

bool q_sgtransformnode_is_subtree_blocked(void* self) {
    return QSGTransformNode_IsSubtreeBlocked((QSGTransformNode*)self);
}

bool q_sgtransformnode_super_is_subtree_blocked(void* self) {
    return QSGTransformNode_SuperIsSubtreeBlocked((QSGTransformNode*)self);
}

void q_sgtransformnode_on_is_subtree_blocked(void* self, bool (*callback)()) {
    QSGTransformNode_OnIsSubtreeBlocked((QSGTransformNode*)self, (intptr_t)callback);
}

void q_sgtransformnode_preprocess(void* self) {
    QSGTransformNode_Preprocess((QSGTransformNode*)self);
}

void q_sgtransformnode_super_preprocess(void* self) {
    QSGTransformNode_SuperPreprocess((QSGTransformNode*)self);
}

void q_sgtransformnode_on_preprocess(void* self, void (*callback)()) {
    QSGTransformNode_OnPreprocess((QSGTransformNode*)self, (intptr_t)callback);
}

void q_sgtransformnode_delete(void* self) {
    QSGTransformNode_Delete((QSGTransformNode*)(self));
}

QSGRootNode* q_sgrootnode_new() {
    return QSGRootNode_New();
}

QSGNode* q_sgrootnode_parent(void* self) {
    return QSGNode_Parent((QSGNode*)self);
}

void q_sgrootnode_remove_child_node(void* self, void* node) {
    QSGNode_RemoveChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgrootnode_remove_all_child_nodes(void* self) {
    QSGNode_RemoveAllChildNodes((QSGNode*)self);
}

void q_sgrootnode_prepend_child_node(void* self, void* node) {
    QSGNode_PrependChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgrootnode_append_child_node(void* self, void* node) {
    QSGNode_AppendChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgrootnode_insert_child_node_before(void* self, void* node, void* before) {
    QSGNode_InsertChildNodeBefore((QSGNode*)self, (QSGNode*)node, (QSGNode*)before);
}

void q_sgrootnode_insert_child_node_after(void* self, void* node, void* after) {
    QSGNode_InsertChildNodeAfter((QSGNode*)self, (QSGNode*)node, (QSGNode*)after);
}

void q_sgrootnode_reparent_child_nodes_to(void* self, void* newParent) {
    QSGNode_ReparentChildNodesTo((QSGNode*)self, (QSGNode*)newParent);
}

int32_t q_sgrootnode_child_count(void* self) {
    return QSGNode_ChildCount((QSGNode*)self);
}

QSGNode* q_sgrootnode_child_at_index(void* self, int i) {
    return QSGNode_ChildAtIndex((QSGNode*)self, i);
}

QSGNode* q_sgrootnode_first_child(void* self) {
    return QSGNode_FirstChild((QSGNode*)self);
}

QSGNode* q_sgrootnode_last_child(void* self) {
    return QSGNode_LastChild((QSGNode*)self);
}

QSGNode* q_sgrootnode_next_sibling(void* self) {
    return QSGNode_NextSibling((QSGNode*)self);
}

QSGNode* q_sgrootnode_previous_sibling(void* self) {
    return QSGNode_PreviousSibling((QSGNode*)self);
}

int32_t q_sgrootnode_type(void* self) {
    return QSGNode_Type((QSGNode*)self);
}

void q_sgrootnode_clear_dirty(void* self) {
    QSGNode_ClearDirty((QSGNode*)self);
}

void q_sgrootnode_mark_dirty(void* self, int32_t bits) {
    QSGNode_MarkDirty((QSGNode*)self, bits);
}

int32_t q_sgrootnode_dirty_state(void* self) {
    return QSGNode_DirtyState((QSGNode*)self);
}

int32_t q_sgrootnode_flags(void* self) {
    return QSGNode_Flags((QSGNode*)self);
}

void q_sgrootnode_set_flag(void* self, int32_t param1) {
    QSGNode_SetFlag((QSGNode*)self, param1);
}

void q_sgrootnode_set_flags(void* self, int32_t param1) {
    QSGNode_SetFlags((QSGNode*)self, param1);
}

void q_sgrootnode_set_flag2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlag2((QSGNode*)self, param1, param2);
}

void q_sgrootnode_set_flags2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlags2((QSGNode*)self, param1, param2);
}

bool q_sgrootnode_is_subtree_blocked(void* self) {
    return QSGRootNode_IsSubtreeBlocked((QSGRootNode*)self);
}

bool q_sgrootnode_super_is_subtree_blocked(void* self) {
    return QSGRootNode_SuperIsSubtreeBlocked((QSGRootNode*)self);
}

void q_sgrootnode_on_is_subtree_blocked(void* self, bool (*callback)()) {
    QSGRootNode_OnIsSubtreeBlocked((QSGRootNode*)self, (intptr_t)callback);
}

void q_sgrootnode_preprocess(void* self) {
    QSGRootNode_Preprocess((QSGRootNode*)self);
}

void q_sgrootnode_super_preprocess(void* self) {
    QSGRootNode_SuperPreprocess((QSGRootNode*)self);
}

void q_sgrootnode_on_preprocess(void* self, void (*callback)()) {
    QSGRootNode_OnPreprocess((QSGRootNode*)self, (intptr_t)callback);
}

void q_sgrootnode_delete(void* self) {
    QSGRootNode_Delete((QSGRootNode*)(self));
}

QSGOpacityNode* q_sgopacitynode_new() {
    return QSGOpacityNode_New();
}

void q_sgopacitynode_set_opacity(void* self, double opacity) {
    QSGOpacityNode_SetOpacity((QSGOpacityNode*)self, opacity);
}

double q_sgopacitynode_opacity(void* self) {
    return QSGOpacityNode_Opacity((QSGOpacityNode*)self);
}

void q_sgopacitynode_set_combined_opacity(void* self, double opacity) {
    QSGOpacityNode_SetCombinedOpacity((QSGOpacityNode*)self, opacity);
}

double q_sgopacitynode_combined_opacity(void* self) {
    return QSGOpacityNode_CombinedOpacity((QSGOpacityNode*)self);
}

bool q_sgopacitynode_is_subtree_blocked(void* self) {
    return QSGOpacityNode_IsSubtreeBlocked((QSGOpacityNode*)self);
}

void q_sgopacitynode_on_is_subtree_blocked(void* self, bool (*callback)()) {
    QSGOpacityNode_OnIsSubtreeBlocked((QSGOpacityNode*)self, (intptr_t)callback);
}

bool q_sgopacitynode_super_is_subtree_blocked(void* self) {
    return QSGOpacityNode_SuperIsSubtreeBlocked((QSGOpacityNode*)self);
}

QSGNode* q_sgopacitynode_parent(void* self) {
    return QSGNode_Parent((QSGNode*)self);
}

void q_sgopacitynode_remove_child_node(void* self, void* node) {
    QSGNode_RemoveChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgopacitynode_remove_all_child_nodes(void* self) {
    QSGNode_RemoveAllChildNodes((QSGNode*)self);
}

void q_sgopacitynode_prepend_child_node(void* self, void* node) {
    QSGNode_PrependChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgopacitynode_append_child_node(void* self, void* node) {
    QSGNode_AppendChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgopacitynode_insert_child_node_before(void* self, void* node, void* before) {
    QSGNode_InsertChildNodeBefore((QSGNode*)self, (QSGNode*)node, (QSGNode*)before);
}

void q_sgopacitynode_insert_child_node_after(void* self, void* node, void* after) {
    QSGNode_InsertChildNodeAfter((QSGNode*)self, (QSGNode*)node, (QSGNode*)after);
}

void q_sgopacitynode_reparent_child_nodes_to(void* self, void* newParent) {
    QSGNode_ReparentChildNodesTo((QSGNode*)self, (QSGNode*)newParent);
}

int32_t q_sgopacitynode_child_count(void* self) {
    return QSGNode_ChildCount((QSGNode*)self);
}

QSGNode* q_sgopacitynode_child_at_index(void* self, int i) {
    return QSGNode_ChildAtIndex((QSGNode*)self, i);
}

QSGNode* q_sgopacitynode_first_child(void* self) {
    return QSGNode_FirstChild((QSGNode*)self);
}

QSGNode* q_sgopacitynode_last_child(void* self) {
    return QSGNode_LastChild((QSGNode*)self);
}

QSGNode* q_sgopacitynode_next_sibling(void* self) {
    return QSGNode_NextSibling((QSGNode*)self);
}

QSGNode* q_sgopacitynode_previous_sibling(void* self) {
    return QSGNode_PreviousSibling((QSGNode*)self);
}

int32_t q_sgopacitynode_type(void* self) {
    return QSGNode_Type((QSGNode*)self);
}

void q_sgopacitynode_clear_dirty(void* self) {
    QSGNode_ClearDirty((QSGNode*)self);
}

void q_sgopacitynode_mark_dirty(void* self, int32_t bits) {
    QSGNode_MarkDirty((QSGNode*)self, bits);
}

int32_t q_sgopacitynode_dirty_state(void* self) {
    return QSGNode_DirtyState((QSGNode*)self);
}

int32_t q_sgopacitynode_flags(void* self) {
    return QSGNode_Flags((QSGNode*)self);
}

void q_sgopacitynode_set_flag(void* self, int32_t param1) {
    QSGNode_SetFlag((QSGNode*)self, param1);
}

void q_sgopacitynode_set_flags(void* self, int32_t param1) {
    QSGNode_SetFlags((QSGNode*)self, param1);
}

void q_sgopacitynode_set_flag2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlag2((QSGNode*)self, param1, param2);
}

void q_sgopacitynode_set_flags2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlags2((QSGNode*)self, param1, param2);
}

void q_sgopacitynode_preprocess(void* self) {
    QSGOpacityNode_Preprocess((QSGOpacityNode*)self);
}

void q_sgopacitynode_super_preprocess(void* self) {
    QSGOpacityNode_SuperPreprocess((QSGOpacityNode*)self);
}

void q_sgopacitynode_on_preprocess(void* self, void (*callback)()) {
    QSGOpacityNode_OnPreprocess((QSGOpacityNode*)self, (intptr_t)callback);
}

void q_sgopacitynode_delete(void* self) {
    QSGOpacityNode_Delete((QSGOpacityNode*)(self));
}

QSGNodeVisitor* q_sgnodevisitor_new() {
    return QSGNodeVisitor_New();
}

void q_sgnodevisitor_enter_transform_node(void* self, void* param1) {
    QSGNodeVisitor_EnterTransformNode((QSGNodeVisitor*)self, (QSGTransformNode*)param1);
}

void q_sgnodevisitor_on_enter_transform_node(void* self, void (*callback)(void*, void*)) {
    QSGNodeVisitor_OnEnterTransformNode((QSGNodeVisitor*)self, (intptr_t)callback);
}

void q_sgnodevisitor_super_enter_transform_node(void* self, void* param1) {
    QSGNodeVisitor_SuperEnterTransformNode((QSGNodeVisitor*)self, (QSGTransformNode*)param1);
}

void q_sgnodevisitor_leave_transform_node(void* self, void* param1) {
    QSGNodeVisitor_LeaveTransformNode((QSGNodeVisitor*)self, (QSGTransformNode*)param1);
}

void q_sgnodevisitor_on_leave_transform_node(void* self, void (*callback)(void*, void*)) {
    QSGNodeVisitor_OnLeaveTransformNode((QSGNodeVisitor*)self, (intptr_t)callback);
}

void q_sgnodevisitor_super_leave_transform_node(void* self, void* param1) {
    QSGNodeVisitor_SuperLeaveTransformNode((QSGNodeVisitor*)self, (QSGTransformNode*)param1);
}

void q_sgnodevisitor_enter_clip_node(void* self, void* param1) {
    QSGNodeVisitor_EnterClipNode((QSGNodeVisitor*)self, (QSGClipNode*)param1);
}

void q_sgnodevisitor_on_enter_clip_node(void* self, void (*callback)(void*, void*)) {
    QSGNodeVisitor_OnEnterClipNode((QSGNodeVisitor*)self, (intptr_t)callback);
}

void q_sgnodevisitor_super_enter_clip_node(void* self, void* param1) {
    QSGNodeVisitor_SuperEnterClipNode((QSGNodeVisitor*)self, (QSGClipNode*)param1);
}

void q_sgnodevisitor_leave_clip_node(void* self, void* param1) {
    QSGNodeVisitor_LeaveClipNode((QSGNodeVisitor*)self, (QSGClipNode*)param1);
}

void q_sgnodevisitor_on_leave_clip_node(void* self, void (*callback)(void*, void*)) {
    QSGNodeVisitor_OnLeaveClipNode((QSGNodeVisitor*)self, (intptr_t)callback);
}

void q_sgnodevisitor_super_leave_clip_node(void* self, void* param1) {
    QSGNodeVisitor_SuperLeaveClipNode((QSGNodeVisitor*)self, (QSGClipNode*)param1);
}

void q_sgnodevisitor_enter_geometry_node(void* self, void* param1) {
    QSGNodeVisitor_EnterGeometryNode((QSGNodeVisitor*)self, (QSGGeometryNode*)param1);
}

void q_sgnodevisitor_on_enter_geometry_node(void* self, void (*callback)(void*, void*)) {
    QSGNodeVisitor_OnEnterGeometryNode((QSGNodeVisitor*)self, (intptr_t)callback);
}

void q_sgnodevisitor_super_enter_geometry_node(void* self, void* param1) {
    QSGNodeVisitor_SuperEnterGeometryNode((QSGNodeVisitor*)self, (QSGGeometryNode*)param1);
}

void q_sgnodevisitor_leave_geometry_node(void* self, void* param1) {
    QSGNodeVisitor_LeaveGeometryNode((QSGNodeVisitor*)self, (QSGGeometryNode*)param1);
}

void q_sgnodevisitor_on_leave_geometry_node(void* self, void (*callback)(void*, void*)) {
    QSGNodeVisitor_OnLeaveGeometryNode((QSGNodeVisitor*)self, (intptr_t)callback);
}

void q_sgnodevisitor_super_leave_geometry_node(void* self, void* param1) {
    QSGNodeVisitor_SuperLeaveGeometryNode((QSGNodeVisitor*)self, (QSGGeometryNode*)param1);
}

void q_sgnodevisitor_enter_opacity_node(void* self, void* param1) {
    QSGNodeVisitor_EnterOpacityNode((QSGNodeVisitor*)self, (QSGOpacityNode*)param1);
}

void q_sgnodevisitor_on_enter_opacity_node(void* self, void (*callback)(void*, void*)) {
    QSGNodeVisitor_OnEnterOpacityNode((QSGNodeVisitor*)self, (intptr_t)callback);
}

void q_sgnodevisitor_super_enter_opacity_node(void* self, void* param1) {
    QSGNodeVisitor_SuperEnterOpacityNode((QSGNodeVisitor*)self, (QSGOpacityNode*)param1);
}

void q_sgnodevisitor_leave_opacity_node(void* self, void* param1) {
    QSGNodeVisitor_LeaveOpacityNode((QSGNodeVisitor*)self, (QSGOpacityNode*)param1);
}

void q_sgnodevisitor_on_leave_opacity_node(void* self, void (*callback)(void*, void*)) {
    QSGNodeVisitor_OnLeaveOpacityNode((QSGNodeVisitor*)self, (intptr_t)callback);
}

void q_sgnodevisitor_super_leave_opacity_node(void* self, void* param1) {
    QSGNodeVisitor_SuperLeaveOpacityNode((QSGNodeVisitor*)self, (QSGOpacityNode*)param1);
}

void q_sgnodevisitor_visit_node(void* self, void* n) {
    QSGNodeVisitor_VisitNode((QSGNodeVisitor*)self, (QSGNode*)n);
}

void q_sgnodevisitor_on_visit_node(void* self, void (*callback)(void*, void*)) {
    QSGNodeVisitor_OnVisitNode((QSGNodeVisitor*)self, (intptr_t)callback);
}

void q_sgnodevisitor_super_visit_node(void* self, void* n) {
    QSGNodeVisitor_SuperVisitNode((QSGNodeVisitor*)self, (QSGNode*)n);
}

void q_sgnodevisitor_visit_children(void* self, void* n) {
    QSGNodeVisitor_VisitChildren((QSGNodeVisitor*)self, (QSGNode*)n);
}

void q_sgnodevisitor_on_visit_children(void* self, void (*callback)(void*, void*)) {
    QSGNodeVisitor_OnVisitChildren((QSGNodeVisitor*)self, (intptr_t)callback);
}

void q_sgnodevisitor_super_visit_children(void* self, void* n) {
    QSGNodeVisitor_SuperVisitChildren((QSGNodeVisitor*)self, (QSGNode*)n);
}

void q_sgnodevisitor_operator_assign(void* self, void* param1) {
    QSGNodeVisitor_OperatorAssign((QSGNodeVisitor*)self, (QSGNodeVisitor*)param1);
}

void q_sgnodevisitor_on_operator_assign(void* self, void (*callback)(void*, void*)) {
    QSGNodeVisitor_OnOperatorAssign((QSGNodeVisitor*)self, (intptr_t)callback);
}

void q_sgnodevisitor_super_operator_assign(void* self, void* param1) {
    QSGNodeVisitor_SuperOperatorAssign((QSGNodeVisitor*)self, (QSGNodeVisitor*)param1);
}

void q_sgnodevisitor_delete(void* self) {
    QSGNodeVisitor_Delete((QSGNodeVisitor*)(self));
}
