#include "../libqcolor.hpp"
#include "../libqrect.hpp"
#include "libqsgnode.hpp"
#include "libqsgsimplerectnode.hpp"
#include "libqsgsimplerectnode.h"

QSGSimpleRectNode* q_sgsimplerectnode_new(const void* rect, const void* color) {
    return QSGSimpleRectNode_New((QRectF*)rect, (QColor*)color);
}

QSGSimpleRectNode* q_sgsimplerectnode_new2() {
    return QSGSimpleRectNode_New2();
}

void q_sgsimplerectnode_set_rect(void* self, const void* rect) {
    QSGSimpleRectNode_SetRect((QSGSimpleRectNode*)self, (QRectF*)rect);
}

void q_sgsimplerectnode_set_rect2(void* self, double x, double y, double w, double h) {
    QSGSimpleRectNode_SetRect2((QSGSimpleRectNode*)self, x, y, w, h);
}

QRectF* q_sgsimplerectnode_rect(const void* self) {
    return QSGSimpleRectNode_Rect((QSGSimpleRectNode*)self);
}

void q_sgsimplerectnode_set_color(void* self, const void* color) {
    QSGSimpleRectNode_SetColor((QSGSimpleRectNode*)self, (QColor*)color);
}

QColor* q_sgsimplerectnode_color(const void* self) {
    return QSGSimpleRectNode_Color((QSGSimpleRectNode*)self);
}

void q_sgsimplerectnode_set_material(void* self, void* material) {
    QSGGeometryNode_SetMaterial((QSGGeometryNode*)self, (QSGMaterial*)material);
}

QSGMaterial* q_sgsimplerectnode_material(const void* self) {
    return QSGGeometryNode_Material((QSGGeometryNode*)self);
}

void q_sgsimplerectnode_set_opaque_material(void* self, void* material) {
    QSGGeometryNode_SetOpaqueMaterial((QSGGeometryNode*)self, (QSGMaterial*)material);
}

QSGMaterial* q_sgsimplerectnode_opaque_material(const void* self) {
    return QSGGeometryNode_OpaqueMaterial((QSGGeometryNode*)self);
}

QSGMaterial* q_sgsimplerectnode_active_material(const void* self) {
    return QSGGeometryNode_ActiveMaterial((QSGGeometryNode*)self);
}

void q_sgsimplerectnode_set_render_order(void* self, int order) {
    QSGGeometryNode_SetRenderOrder((QSGGeometryNode*)self, order);
}

int32_t q_sgsimplerectnode_render_order(const void* self) {
    return QSGGeometryNode_RenderOrder((QSGGeometryNode*)self);
}

void q_sgsimplerectnode_set_inherited_opacity(void* self, double opacity) {
    QSGGeometryNode_SetInheritedOpacity((QSGGeometryNode*)self, opacity);
}

double q_sgsimplerectnode_inherited_opacity(const void* self) {
    return QSGGeometryNode_InheritedOpacity((QSGGeometryNode*)self);
}

void q_sgsimplerectnode_set_geometry(void* self, void* geometry) {
    QSGBasicGeometryNode_SetGeometry((QSGBasicGeometryNode*)self, (QSGGeometry*)geometry);
}

const QSGGeometry* q_sgsimplerectnode_geometry(const void* self) {
    return QSGBasicGeometryNode_Geometry((QSGBasicGeometryNode*)self);
}

QSGGeometry* q_sgsimplerectnode_geometry2(void* self) {
    return QSGBasicGeometryNode_Geometry2((QSGBasicGeometryNode*)self);
}

const QMatrix4x4* q_sgsimplerectnode_matrix(const void* self) {
    return QSGBasicGeometryNode_Matrix((QSGBasicGeometryNode*)self);
}

const QSGClipNode* q_sgsimplerectnode_clip_list(const void* self) {
    return QSGBasicGeometryNode_ClipList((QSGBasicGeometryNode*)self);
}

void q_sgsimplerectnode_set_renderer_matrix(void* self, const void* m) {
    QSGBasicGeometryNode_SetRendererMatrix((QSGBasicGeometryNode*)self, (QMatrix4x4*)m);
}

void q_sgsimplerectnode_set_renderer_clip_list(void* self, const void* c) {
    QSGBasicGeometryNode_SetRendererClipList((QSGBasicGeometryNode*)self, (QSGClipNode*)c);
}

QSGNode* q_sgsimplerectnode_parent(const void* self) {
    return QSGNode_Parent((QSGNode*)self);
}

void q_sgsimplerectnode_remove_child_node(void* self, void* node) {
    QSGNode_RemoveChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgsimplerectnode_remove_all_child_nodes(void* self) {
    QSGNode_RemoveAllChildNodes((QSGNode*)self);
}

void q_sgsimplerectnode_prepend_child_node(void* self, void* node) {
    QSGNode_PrependChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgsimplerectnode_append_child_node(void* self, void* node) {
    QSGNode_AppendChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgsimplerectnode_insert_child_node_before(void* self, void* node, void* before) {
    QSGNode_InsertChildNodeBefore((QSGNode*)self, (QSGNode*)node, (QSGNode*)before);
}

void q_sgsimplerectnode_insert_child_node_after(void* self, void* node, void* after) {
    QSGNode_InsertChildNodeAfter((QSGNode*)self, (QSGNode*)node, (QSGNode*)after);
}

void q_sgsimplerectnode_reparent_child_nodes_to(void* self, void* newParent) {
    QSGNode_ReparentChildNodesTo((QSGNode*)self, (QSGNode*)newParent);
}

int32_t q_sgsimplerectnode_child_count(const void* self) {
    return QSGNode_ChildCount((QSGNode*)self);
}

QSGNode* q_sgsimplerectnode_child_at_index(const void* self, int i) {
    return QSGNode_ChildAtIndex((QSGNode*)self, i);
}

QSGNode* q_sgsimplerectnode_first_child(const void* self) {
    return QSGNode_FirstChild((QSGNode*)self);
}

QSGNode* q_sgsimplerectnode_last_child(const void* self) {
    return QSGNode_LastChild((QSGNode*)self);
}

QSGNode* q_sgsimplerectnode_next_sibling(const void* self) {
    return QSGNode_NextSibling((QSGNode*)self);
}

QSGNode* q_sgsimplerectnode_previous_sibling(const void* self) {
    return QSGNode_PreviousSibling((QSGNode*)self);
}

int32_t q_sgsimplerectnode_type(const void* self) {
    return QSGNode_Type((QSGNode*)self);
}

void q_sgsimplerectnode_clear_dirty(void* self) {
    QSGNode_ClearDirty((QSGNode*)self);
}

void q_sgsimplerectnode_mark_dirty(void* self, int32_t bits) {
    QSGNode_MarkDirty((QSGNode*)self, bits);
}

int32_t q_sgsimplerectnode_dirty_state(const void* self) {
    return QSGNode_DirtyState((QSGNode*)self);
}

int32_t q_sgsimplerectnode_flags(const void* self) {
    return QSGNode_Flags((QSGNode*)self);
}

void q_sgsimplerectnode_set_flag(void* self, int32_t param1) {
    QSGNode_SetFlag((QSGNode*)self, param1);
}

void q_sgsimplerectnode_set_flags(void* self, int32_t param1) {
    QSGNode_SetFlags((QSGNode*)self, param1);
}

void q_sgsimplerectnode_set_flag2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlag2((QSGNode*)self, param1, param2);
}

void q_sgsimplerectnode_set_flags2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlags2((QSGNode*)self, param1, param2);
}

bool q_sgsimplerectnode_is_subtree_blocked(const void* self) {
    return QSGSimpleRectNode_IsSubtreeBlocked((QSGSimpleRectNode*)self);
}

bool q_sgsimplerectnode_super_is_subtree_blocked(const void* self) {
    return QSGSimpleRectNode_SuperIsSubtreeBlocked((QSGSimpleRectNode*)self);
}

void q_sgsimplerectnode_on_is_subtree_blocked(void* self, bool (*callback)(const void*)) {
    QSGSimpleRectNode_OnIsSubtreeBlocked((QSGSimpleRectNode*)self, (intptr_t)callback);
}

void q_sgsimplerectnode_preprocess(void* self) {
    QSGSimpleRectNode_Preprocess((QSGSimpleRectNode*)self);
}

void q_sgsimplerectnode_super_preprocess(void* self) {
    QSGSimpleRectNode_SuperPreprocess((QSGSimpleRectNode*)self);
}

void q_sgsimplerectnode_on_preprocess(void* self, void (*callback)(void*)) {
    QSGSimpleRectNode_OnPreprocess((QSGSimpleRectNode*)self, (intptr_t)callback);
}

void q_sgsimplerectnode_delete(void* self) {
    QSGSimpleRectNode_Delete((QSGSimpleRectNode*)(self));
}
