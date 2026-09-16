#include "../libqcolor.hpp"
#include "../libqrect.hpp"
#include "libqsgnode.hpp"
#include "libqsgrectanglenode.hpp"
#include "libqsgrectanglenode.h"

void q_sgrectanglenode_set_rect(void* self, void* rect) {
    QSGRectangleNode_SetRect((QSGRectangleNode*)self, (QRectF*)rect);
}

void q_sgrectanglenode_set_rect2(void* self, double x, double y, double w, double h) {
    QSGRectangleNode_SetRect2((QSGRectangleNode*)self, x, y, w, h);
}

QRectF* q_sgrectanglenode_rect(void* self) {
    return QSGRectangleNode_Rect((QSGRectangleNode*)self);
}

void q_sgrectanglenode_set_color(void* self, void* color) {
    QSGRectangleNode_SetColor((QSGRectangleNode*)self, (QColor*)color);
}

QColor* q_sgrectanglenode_color(void* self) {
    return QSGRectangleNode_Color((QSGRectangleNode*)self);
}

void q_sgrectanglenode_set_material(void* self, void* material) {
    QSGGeometryNode_SetMaterial((QSGGeometryNode*)self, (QSGMaterial*)material);
}

QSGMaterial* q_sgrectanglenode_material(void* self) {
    return QSGGeometryNode_Material((QSGGeometryNode*)self);
}

void q_sgrectanglenode_set_opaque_material(void* self, void* material) {
    QSGGeometryNode_SetOpaqueMaterial((QSGGeometryNode*)self, (QSGMaterial*)material);
}

QSGMaterial* q_sgrectanglenode_opaque_material(void* self) {
    return QSGGeometryNode_OpaqueMaterial((QSGGeometryNode*)self);
}

QSGMaterial* q_sgrectanglenode_active_material(void* self) {
    return QSGGeometryNode_ActiveMaterial((QSGGeometryNode*)self);
}

void q_sgrectanglenode_set_render_order(void* self, int order) {
    QSGGeometryNode_SetRenderOrder((QSGGeometryNode*)self, order);
}

int32_t q_sgrectanglenode_render_order(void* self) {
    return QSGGeometryNode_RenderOrder((QSGGeometryNode*)self);
}

void q_sgrectanglenode_set_inherited_opacity(void* self, double opacity) {
    QSGGeometryNode_SetInheritedOpacity((QSGGeometryNode*)self, opacity);
}

double q_sgrectanglenode_inherited_opacity(void* self) {
    return QSGGeometryNode_InheritedOpacity((QSGGeometryNode*)self);
}

void q_sgrectanglenode_set_geometry(void* self, void* geometry) {
    QSGBasicGeometryNode_SetGeometry((QSGBasicGeometryNode*)self, (QSGGeometry*)geometry);
}

const QSGGeometry* q_sgrectanglenode_geometry(void* self) {
    return QSGBasicGeometryNode_Geometry((QSGBasicGeometryNode*)self);
}

QSGGeometry* q_sgrectanglenode_geometry2(void* self) {
    return QSGBasicGeometryNode_Geometry2((QSGBasicGeometryNode*)self);
}

const QMatrix4x4* q_sgrectanglenode_matrix(void* self) {
    return QSGBasicGeometryNode_Matrix((QSGBasicGeometryNode*)self);
}

const QSGClipNode* q_sgrectanglenode_clip_list(void* self) {
    return QSGBasicGeometryNode_ClipList((QSGBasicGeometryNode*)self);
}

void q_sgrectanglenode_set_renderer_matrix(void* self, void* m) {
    QSGBasicGeometryNode_SetRendererMatrix((QSGBasicGeometryNode*)self, (QMatrix4x4*)m);
}

void q_sgrectanglenode_set_renderer_clip_list(void* self, void* c) {
    QSGBasicGeometryNode_SetRendererClipList((QSGBasicGeometryNode*)self, (QSGClipNode*)c);
}

QSGNode* q_sgrectanglenode_parent(void* self) {
    return QSGNode_Parent((QSGNode*)self);
}

void q_sgrectanglenode_remove_child_node(void* self, void* node) {
    QSGNode_RemoveChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgrectanglenode_remove_all_child_nodes(void* self) {
    QSGNode_RemoveAllChildNodes((QSGNode*)self);
}

void q_sgrectanglenode_prepend_child_node(void* self, void* node) {
    QSGNode_PrependChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgrectanglenode_append_child_node(void* self, void* node) {
    QSGNode_AppendChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgrectanglenode_insert_child_node_before(void* self, void* node, void* before) {
    QSGNode_InsertChildNodeBefore((QSGNode*)self, (QSGNode*)node, (QSGNode*)before);
}

void q_sgrectanglenode_insert_child_node_after(void* self, void* node, void* after) {
    QSGNode_InsertChildNodeAfter((QSGNode*)self, (QSGNode*)node, (QSGNode*)after);
}

void q_sgrectanglenode_reparent_child_nodes_to(void* self, void* newParent) {
    QSGNode_ReparentChildNodesTo((QSGNode*)self, (QSGNode*)newParent);
}

int32_t q_sgrectanglenode_child_count(void* self) {
    return QSGNode_ChildCount((QSGNode*)self);
}

QSGNode* q_sgrectanglenode_child_at_index(void* self, int i) {
    return QSGNode_ChildAtIndex((QSGNode*)self, i);
}

QSGNode* q_sgrectanglenode_first_child(void* self) {
    return QSGNode_FirstChild((QSGNode*)self);
}

QSGNode* q_sgrectanglenode_last_child(void* self) {
    return QSGNode_LastChild((QSGNode*)self);
}

QSGNode* q_sgrectanglenode_next_sibling(void* self) {
    return QSGNode_NextSibling((QSGNode*)self);
}

QSGNode* q_sgrectanglenode_previous_sibling(void* self) {
    return QSGNode_PreviousSibling((QSGNode*)self);
}

int32_t q_sgrectanglenode_type(void* self) {
    return QSGNode_Type((QSGNode*)self);
}

void q_sgrectanglenode_clear_dirty(void* self) {
    QSGNode_ClearDirty((QSGNode*)self);
}

void q_sgrectanglenode_mark_dirty(void* self, int32_t bits) {
    QSGNode_MarkDirty((QSGNode*)self, bits);
}

int32_t q_sgrectanglenode_dirty_state(void* self) {
    return QSGNode_DirtyState((QSGNode*)self);
}

bool q_sgrectanglenode_is_subtree_blocked(void* self) {
    return QSGNode_IsSubtreeBlocked((QSGNode*)self);
}

int32_t q_sgrectanglenode_flags(void* self) {
    return QSGNode_Flags((QSGNode*)self);
}

void q_sgrectanglenode_set_flag(void* self, int32_t param1) {
    QSGNode_SetFlag((QSGNode*)self, param1);
}

void q_sgrectanglenode_set_flags(void* self, int32_t param1) {
    QSGNode_SetFlags((QSGNode*)self, param1);
}

void q_sgrectanglenode_preprocess(void* self) {
    QSGNode_Preprocess((QSGNode*)self);
}

void q_sgrectanglenode_set_flag2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlag2((QSGNode*)self, param1, param2);
}

void q_sgrectanglenode_set_flags2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlags2((QSGNode*)self, param1, param2);
}

void q_sgrectanglenode_delete(void* self) {
    QSGRectangleNode_Delete((QSGRectangleNode*)(self));
}
