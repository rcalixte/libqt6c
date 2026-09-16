#include "../libqrect.hpp"
#include "libqsgnode.hpp"
#include "libqsgtexture.hpp"
#include "libqsgsimpletexturenode.hpp"
#include "libqsgsimpletexturenode.h"

QSGSimpleTextureNode* q_sgsimpletexturenode_new() {
    return QSGSimpleTextureNode_New();
}

void q_sgsimpletexturenode_set_rect(void* self, void* rect) {
    QSGSimpleTextureNode_SetRect((QSGSimpleTextureNode*)self, (QRectF*)rect);
}

void q_sgsimpletexturenode_set_rect2(void* self, double x, double y, double w, double h) {
    QSGSimpleTextureNode_SetRect2((QSGSimpleTextureNode*)self, x, y, w, h);
}

QRectF* q_sgsimpletexturenode_rect(void* self) {
    return QSGSimpleTextureNode_Rect((QSGSimpleTextureNode*)self);
}

void q_sgsimpletexturenode_set_source_rect(void* self, void* r) {
    QSGSimpleTextureNode_SetSourceRect((QSGSimpleTextureNode*)self, (QRectF*)r);
}

void q_sgsimpletexturenode_set_source_rect2(void* self, double x, double y, double w, double h) {
    QSGSimpleTextureNode_SetSourceRect2((QSGSimpleTextureNode*)self, x, y, w, h);
}

QRectF* q_sgsimpletexturenode_source_rect(void* self) {
    return QSGSimpleTextureNode_SourceRect((QSGSimpleTextureNode*)self);
}

void q_sgsimpletexturenode_set_texture(void* self, void* texture) {
    QSGSimpleTextureNode_SetTexture((QSGSimpleTextureNode*)self, (QSGTexture*)texture);
}

QSGTexture* q_sgsimpletexturenode_texture(void* self) {
    return QSGSimpleTextureNode_Texture((QSGSimpleTextureNode*)self);
}

void q_sgsimpletexturenode_set_filtering(void* self, int32_t filtering) {
    QSGSimpleTextureNode_SetFiltering((QSGSimpleTextureNode*)self, filtering);
}

int32_t q_sgsimpletexturenode_filtering(void* self) {
    return QSGSimpleTextureNode_Filtering((QSGSimpleTextureNode*)self);
}

void q_sgsimpletexturenode_set_texture_coordinates_transform(void* self, int32_t mode) {
    QSGSimpleTextureNode_SetTextureCoordinatesTransform((QSGSimpleTextureNode*)self, mode);
}

int32_t q_sgsimpletexturenode_texture_coordinates_transform(void* self) {
    return QSGSimpleTextureNode_TextureCoordinatesTransform((QSGSimpleTextureNode*)self);
}

void q_sgsimpletexturenode_set_owns_texture(void* self, bool owns) {
    QSGSimpleTextureNode_SetOwnsTexture((QSGSimpleTextureNode*)self, owns);
}

bool q_sgsimpletexturenode_owns_texture(void* self) {
    return QSGSimpleTextureNode_OwnsTexture((QSGSimpleTextureNode*)self);
}

void q_sgsimpletexturenode_set_material(void* self, void* material) {
    QSGGeometryNode_SetMaterial((QSGGeometryNode*)self, (QSGMaterial*)material);
}

QSGMaterial* q_sgsimpletexturenode_material(void* self) {
    return QSGGeometryNode_Material((QSGGeometryNode*)self);
}

void q_sgsimpletexturenode_set_opaque_material(void* self, void* material) {
    QSGGeometryNode_SetOpaqueMaterial((QSGGeometryNode*)self, (QSGMaterial*)material);
}

QSGMaterial* q_sgsimpletexturenode_opaque_material(void* self) {
    return QSGGeometryNode_OpaqueMaterial((QSGGeometryNode*)self);
}

QSGMaterial* q_sgsimpletexturenode_active_material(void* self) {
    return QSGGeometryNode_ActiveMaterial((QSGGeometryNode*)self);
}

void q_sgsimpletexturenode_set_render_order(void* self, int order) {
    QSGGeometryNode_SetRenderOrder((QSGGeometryNode*)self, order);
}

int32_t q_sgsimpletexturenode_render_order(void* self) {
    return QSGGeometryNode_RenderOrder((QSGGeometryNode*)self);
}

void q_sgsimpletexturenode_set_inherited_opacity(void* self, double opacity) {
    QSGGeometryNode_SetInheritedOpacity((QSGGeometryNode*)self, opacity);
}

double q_sgsimpletexturenode_inherited_opacity(void* self) {
    return QSGGeometryNode_InheritedOpacity((QSGGeometryNode*)self);
}

void q_sgsimpletexturenode_set_geometry(void* self, void* geometry) {
    QSGBasicGeometryNode_SetGeometry((QSGBasicGeometryNode*)self, (QSGGeometry*)geometry);
}

const QSGGeometry* q_sgsimpletexturenode_geometry(void* self) {
    return QSGBasicGeometryNode_Geometry((QSGBasicGeometryNode*)self);
}

QSGGeometry* q_sgsimpletexturenode_geometry2(void* self) {
    return QSGBasicGeometryNode_Geometry2((QSGBasicGeometryNode*)self);
}

const QMatrix4x4* q_sgsimpletexturenode_matrix(void* self) {
    return QSGBasicGeometryNode_Matrix((QSGBasicGeometryNode*)self);
}

const QSGClipNode* q_sgsimpletexturenode_clip_list(void* self) {
    return QSGBasicGeometryNode_ClipList((QSGBasicGeometryNode*)self);
}

void q_sgsimpletexturenode_set_renderer_matrix(void* self, void* m) {
    QSGBasicGeometryNode_SetRendererMatrix((QSGBasicGeometryNode*)self, (QMatrix4x4*)m);
}

void q_sgsimpletexturenode_set_renderer_clip_list(void* self, void* c) {
    QSGBasicGeometryNode_SetRendererClipList((QSGBasicGeometryNode*)self, (QSGClipNode*)c);
}

QSGNode* q_sgsimpletexturenode_parent(void* self) {
    return QSGNode_Parent((QSGNode*)self);
}

void q_sgsimpletexturenode_remove_child_node(void* self, void* node) {
    QSGNode_RemoveChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgsimpletexturenode_remove_all_child_nodes(void* self) {
    QSGNode_RemoveAllChildNodes((QSGNode*)self);
}

void q_sgsimpletexturenode_prepend_child_node(void* self, void* node) {
    QSGNode_PrependChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgsimpletexturenode_append_child_node(void* self, void* node) {
    QSGNode_AppendChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgsimpletexturenode_insert_child_node_before(void* self, void* node, void* before) {
    QSGNode_InsertChildNodeBefore((QSGNode*)self, (QSGNode*)node, (QSGNode*)before);
}

void q_sgsimpletexturenode_insert_child_node_after(void* self, void* node, void* after) {
    QSGNode_InsertChildNodeAfter((QSGNode*)self, (QSGNode*)node, (QSGNode*)after);
}

void q_sgsimpletexturenode_reparent_child_nodes_to(void* self, void* newParent) {
    QSGNode_ReparentChildNodesTo((QSGNode*)self, (QSGNode*)newParent);
}

int32_t q_sgsimpletexturenode_child_count(void* self) {
    return QSGNode_ChildCount((QSGNode*)self);
}

QSGNode* q_sgsimpletexturenode_child_at_index(void* self, int i) {
    return QSGNode_ChildAtIndex((QSGNode*)self, i);
}

QSGNode* q_sgsimpletexturenode_first_child(void* self) {
    return QSGNode_FirstChild((QSGNode*)self);
}

QSGNode* q_sgsimpletexturenode_last_child(void* self) {
    return QSGNode_LastChild((QSGNode*)self);
}

QSGNode* q_sgsimpletexturenode_next_sibling(void* self) {
    return QSGNode_NextSibling((QSGNode*)self);
}

QSGNode* q_sgsimpletexturenode_previous_sibling(void* self) {
    return QSGNode_PreviousSibling((QSGNode*)self);
}

int32_t q_sgsimpletexturenode_type(void* self) {
    return QSGNode_Type((QSGNode*)self);
}

void q_sgsimpletexturenode_clear_dirty(void* self) {
    QSGNode_ClearDirty((QSGNode*)self);
}

void q_sgsimpletexturenode_mark_dirty(void* self, int32_t bits) {
    QSGNode_MarkDirty((QSGNode*)self, bits);
}

int32_t q_sgsimpletexturenode_dirty_state(void* self) {
    return QSGNode_DirtyState((QSGNode*)self);
}

int32_t q_sgsimpletexturenode_flags(void* self) {
    return QSGNode_Flags((QSGNode*)self);
}

void q_sgsimpletexturenode_set_flag(void* self, int32_t param1) {
    QSGNode_SetFlag((QSGNode*)self, param1);
}

void q_sgsimpletexturenode_set_flags(void* self, int32_t param1) {
    QSGNode_SetFlags((QSGNode*)self, param1);
}

void q_sgsimpletexturenode_set_flag2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlag2((QSGNode*)self, param1, param2);
}

void q_sgsimpletexturenode_set_flags2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlags2((QSGNode*)self, param1, param2);
}

bool q_sgsimpletexturenode_is_subtree_blocked(void* self) {
    return QSGSimpleTextureNode_IsSubtreeBlocked((QSGSimpleTextureNode*)self);
}

bool q_sgsimpletexturenode_super_is_subtree_blocked(void* self) {
    return QSGSimpleTextureNode_SuperIsSubtreeBlocked((QSGSimpleTextureNode*)self);
}

void q_sgsimpletexturenode_on_is_subtree_blocked(void* self, bool (*callback)()) {
    QSGSimpleTextureNode_OnIsSubtreeBlocked((QSGSimpleTextureNode*)self, (intptr_t)callback);
}

void q_sgsimpletexturenode_preprocess(void* self) {
    QSGSimpleTextureNode_Preprocess((QSGSimpleTextureNode*)self);
}

void q_sgsimpletexturenode_super_preprocess(void* self) {
    QSGSimpleTextureNode_SuperPreprocess((QSGSimpleTextureNode*)self);
}

void q_sgsimpletexturenode_on_preprocess(void* self, void (*callback)()) {
    QSGSimpleTextureNode_OnPreprocess((QSGSimpleTextureNode*)self, (intptr_t)callback);
}

void q_sgsimpletexturenode_delete(void* self) {
    QSGSimpleTextureNode_Delete((QSGSimpleTextureNode*)(self));
}
