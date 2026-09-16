#include "../libqrect.hpp"
#include "libqsgnode.hpp"
#include "libqsggeometry.hpp"
#include "libqsgtexture.hpp"
#include "libqsgimagenode.hpp"
#include "libqsgimagenode.h"

void q_sgimagenode_set_rect(void* self, void* rect) {
    QSGImageNode_SetRect((QSGImageNode*)self, (QRectF*)rect);
}

void q_sgimagenode_set_rect2(void* self, double x, double y, double w, double h) {
    QSGImageNode_SetRect2((QSGImageNode*)self, x, y, w, h);
}

QRectF* q_sgimagenode_rect(void* self) {
    return QSGImageNode_Rect((QSGImageNode*)self);
}

void q_sgimagenode_set_source_rect(void* self, void* r) {
    QSGImageNode_SetSourceRect((QSGImageNode*)self, (QRectF*)r);
}

void q_sgimagenode_set_source_rect2(void* self, double x, double y, double w, double h) {
    QSGImageNode_SetSourceRect2((QSGImageNode*)self, x, y, w, h);
}

QRectF* q_sgimagenode_source_rect(void* self) {
    return QSGImageNode_SourceRect((QSGImageNode*)self);
}

void q_sgimagenode_set_texture(void* self, void* texture) {
    QSGImageNode_SetTexture((QSGImageNode*)self, (QSGTexture*)texture);
}

QSGTexture* q_sgimagenode_texture(void* self) {
    return QSGImageNode_Texture((QSGImageNode*)self);
}

void q_sgimagenode_set_filtering(void* self, int32_t filtering) {
    QSGImageNode_SetFiltering((QSGImageNode*)self, filtering);
}

int32_t q_sgimagenode_filtering(void* self) {
    return QSGImageNode_Filtering((QSGImageNode*)self);
}

void q_sgimagenode_set_mipmap_filtering(void* self, int32_t filtering) {
    QSGImageNode_SetMipmapFiltering((QSGImageNode*)self, filtering);
}

int32_t q_sgimagenode_mipmap_filtering(void* self) {
    return QSGImageNode_MipmapFiltering((QSGImageNode*)self);
}

void q_sgimagenode_set_anisotropy_level(void* self, int32_t level) {
    QSGImageNode_SetAnisotropyLevel((QSGImageNode*)self, level);
}

int32_t q_sgimagenode_anisotropy_level(void* self) {
    return QSGImageNode_AnisotropyLevel((QSGImageNode*)self);
}

void q_sgimagenode_set_texture_coordinates_transform(void* self, int32_t mode) {
    QSGImageNode_SetTextureCoordinatesTransform((QSGImageNode*)self, mode);
}

int32_t q_sgimagenode_texture_coordinates_transform(void* self) {
    return QSGImageNode_TextureCoordinatesTransform((QSGImageNode*)self);
}

void q_sgimagenode_set_owns_texture(void* self, bool owns) {
    QSGImageNode_SetOwnsTexture((QSGImageNode*)self, owns);
}

bool q_sgimagenode_owns_texture(void* self) {
    return QSGImageNode_OwnsTexture((QSGImageNode*)self);
}

void q_sgimagenode_rebuild_geometry(void* g, void* texture, void* rect, void* sourceRect, int32_t texCoordMode) {
    QSGImageNode_RebuildGeometry((QSGGeometry*)g, (QSGTexture*)texture, (QRectF*)rect, (QRectF*)sourceRect, texCoordMode);
}

void q_sgimagenode_set_material(void* self, void* material) {
    QSGGeometryNode_SetMaterial((QSGGeometryNode*)self, (QSGMaterial*)material);
}

QSGMaterial* q_sgimagenode_material(void* self) {
    return QSGGeometryNode_Material((QSGGeometryNode*)self);
}

void q_sgimagenode_set_opaque_material(void* self, void* material) {
    QSGGeometryNode_SetOpaqueMaterial((QSGGeometryNode*)self, (QSGMaterial*)material);
}

QSGMaterial* q_sgimagenode_opaque_material(void* self) {
    return QSGGeometryNode_OpaqueMaterial((QSGGeometryNode*)self);
}

QSGMaterial* q_sgimagenode_active_material(void* self) {
    return QSGGeometryNode_ActiveMaterial((QSGGeometryNode*)self);
}

void q_sgimagenode_set_render_order(void* self, int order) {
    QSGGeometryNode_SetRenderOrder((QSGGeometryNode*)self, order);
}

int32_t q_sgimagenode_render_order(void* self) {
    return QSGGeometryNode_RenderOrder((QSGGeometryNode*)self);
}

void q_sgimagenode_set_inherited_opacity(void* self, double opacity) {
    QSGGeometryNode_SetInheritedOpacity((QSGGeometryNode*)self, opacity);
}

double q_sgimagenode_inherited_opacity(void* self) {
    return QSGGeometryNode_InheritedOpacity((QSGGeometryNode*)self);
}

void q_sgimagenode_set_geometry(void* self, void* geometry) {
    QSGBasicGeometryNode_SetGeometry((QSGBasicGeometryNode*)self, (QSGGeometry*)geometry);
}

const QSGGeometry* q_sgimagenode_geometry(void* self) {
    return QSGBasicGeometryNode_Geometry((QSGBasicGeometryNode*)self);
}

QSGGeometry* q_sgimagenode_geometry2(void* self) {
    return QSGBasicGeometryNode_Geometry2((QSGBasicGeometryNode*)self);
}

const QMatrix4x4* q_sgimagenode_matrix(void* self) {
    return QSGBasicGeometryNode_Matrix((QSGBasicGeometryNode*)self);
}

const QSGClipNode* q_sgimagenode_clip_list(void* self) {
    return QSGBasicGeometryNode_ClipList((QSGBasicGeometryNode*)self);
}

void q_sgimagenode_set_renderer_matrix(void* self, void* m) {
    QSGBasicGeometryNode_SetRendererMatrix((QSGBasicGeometryNode*)self, (QMatrix4x4*)m);
}

void q_sgimagenode_set_renderer_clip_list(void* self, void* c) {
    QSGBasicGeometryNode_SetRendererClipList((QSGBasicGeometryNode*)self, (QSGClipNode*)c);
}

QSGNode* q_sgimagenode_parent(void* self) {
    return QSGNode_Parent((QSGNode*)self);
}

void q_sgimagenode_remove_child_node(void* self, void* node) {
    QSGNode_RemoveChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgimagenode_remove_all_child_nodes(void* self) {
    QSGNode_RemoveAllChildNodes((QSGNode*)self);
}

void q_sgimagenode_prepend_child_node(void* self, void* node) {
    QSGNode_PrependChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgimagenode_append_child_node(void* self, void* node) {
    QSGNode_AppendChildNode((QSGNode*)self, (QSGNode*)node);
}

void q_sgimagenode_insert_child_node_before(void* self, void* node, void* before) {
    QSGNode_InsertChildNodeBefore((QSGNode*)self, (QSGNode*)node, (QSGNode*)before);
}

void q_sgimagenode_insert_child_node_after(void* self, void* node, void* after) {
    QSGNode_InsertChildNodeAfter((QSGNode*)self, (QSGNode*)node, (QSGNode*)after);
}

void q_sgimagenode_reparent_child_nodes_to(void* self, void* newParent) {
    QSGNode_ReparentChildNodesTo((QSGNode*)self, (QSGNode*)newParent);
}

int32_t q_sgimagenode_child_count(void* self) {
    return QSGNode_ChildCount((QSGNode*)self);
}

QSGNode* q_sgimagenode_child_at_index(void* self, int i) {
    return QSGNode_ChildAtIndex((QSGNode*)self, i);
}

QSGNode* q_sgimagenode_first_child(void* self) {
    return QSGNode_FirstChild((QSGNode*)self);
}

QSGNode* q_sgimagenode_last_child(void* self) {
    return QSGNode_LastChild((QSGNode*)self);
}

QSGNode* q_sgimagenode_next_sibling(void* self) {
    return QSGNode_NextSibling((QSGNode*)self);
}

QSGNode* q_sgimagenode_previous_sibling(void* self) {
    return QSGNode_PreviousSibling((QSGNode*)self);
}

int32_t q_sgimagenode_type(void* self) {
    return QSGNode_Type((QSGNode*)self);
}

void q_sgimagenode_clear_dirty(void* self) {
    QSGNode_ClearDirty((QSGNode*)self);
}

void q_sgimagenode_mark_dirty(void* self, int32_t bits) {
    QSGNode_MarkDirty((QSGNode*)self, bits);
}

int32_t q_sgimagenode_dirty_state(void* self) {
    return QSGNode_DirtyState((QSGNode*)self);
}

bool q_sgimagenode_is_subtree_blocked(void* self) {
    return QSGNode_IsSubtreeBlocked((QSGNode*)self);
}

int32_t q_sgimagenode_flags(void* self) {
    return QSGNode_Flags((QSGNode*)self);
}

void q_sgimagenode_set_flag(void* self, int32_t param1) {
    QSGNode_SetFlag((QSGNode*)self, param1);
}

void q_sgimagenode_set_flags(void* self, int32_t param1) {
    QSGNode_SetFlags((QSGNode*)self, param1);
}

void q_sgimagenode_preprocess(void* self) {
    QSGNode_Preprocess((QSGNode*)self);
}

void q_sgimagenode_set_flag2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlag2((QSGNode*)self, param1, param2);
}

void q_sgimagenode_set_flags2(void* self, int32_t param1, bool param2) {
    QSGNode_SetFlags2((QSGNode*)self, param1, param2);
}

void q_sgimagenode_delete(void* self) {
    QSGImageNode_Delete((QSGImageNode*)(self));
}
