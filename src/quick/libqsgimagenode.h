#pragma once
#ifndef QUICK_LIBQSGIMAGENODE_H
#define QUICK_LIBQSGIMAGENODE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setRect)
///
/// @param self QSGImageNode*
/// @param rect QRectF*
///
void q_sgimagenode_set_rect(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setRect)
///
/// @param self QSGImageNode*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_sgimagenode_set_rect2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#rect)
///
/// @param self QSGImageNode*
///
QRectF* q_sgimagenode_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setSourceRect)
///
/// @param self QSGImageNode*
/// @param r QRectF*
///
void q_sgimagenode_set_source_rect(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setSourceRect)
///
/// @param self QSGImageNode*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_sgimagenode_set_source_rect2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#sourceRect)
///
/// @param self QSGImageNode*
///
QRectF* q_sgimagenode_source_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setTexture)
///
/// @param self QSGImageNode*
/// @param texture QSGTexture*
///
void q_sgimagenode_set_texture(void* self, void* texture);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#texture)
///
/// @param self QSGImageNode*
///
QSGTexture* q_sgimagenode_texture(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setFiltering)
///
/// @param self QSGImageNode*
/// @param filtering enum QSGTexture__Filtering
///
void q_sgimagenode_set_filtering(void* self, int32_t filtering);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#filtering)
///
/// @param self QSGImageNode*
///
/// @return enum QSGTexture__Filtering
///
int32_t q_sgimagenode_filtering(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setMipmapFiltering)
///
/// @param self QSGImageNode*
/// @param filtering enum QSGTexture__Filtering
///
void q_sgimagenode_set_mipmap_filtering(void* self, int32_t filtering);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#mipmapFiltering)
///
/// @param self QSGImageNode*
///
/// @return enum QSGTexture__Filtering
///
int32_t q_sgimagenode_mipmap_filtering(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setAnisotropyLevel)
///
/// @param self QSGImageNode*
/// @param level enum QSGTexture__AnisotropyLevel
///
void q_sgimagenode_set_anisotropy_level(void* self, int32_t level);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#anisotropyLevel)
///
/// @param self QSGImageNode*
///
/// @return enum QSGTexture__AnisotropyLevel
///
int32_t q_sgimagenode_anisotropy_level(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setTextureCoordinatesTransform)
///
/// @param self QSGImageNode*
/// @param mode flag of enum QSGImageNode__TextureCoordinatesTransformFlag
///
void q_sgimagenode_set_texture_coordinates_transform(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#textureCoordinatesTransform)
///
/// @param self QSGImageNode*
///
/// @return flag of enum QSGImageNode__TextureCoordinatesTransformFlag
///
int32_t q_sgimagenode_texture_coordinates_transform(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setOwnsTexture)
///
/// @param self QSGImageNode*
/// @param owns bool
///
void q_sgimagenode_set_owns_texture(void* self, bool owns);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#ownsTexture)
///
/// @param self QSGImageNode*
///
bool q_sgimagenode_owns_texture(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#rebuildGeometry)
///
/// @param g QSGGeometry*
/// @param texture QSGTexture*
/// @param rect QRectF*
/// @param sourceRect QRectF*
/// @param texCoordMode flag of enum QSGImageNode__TextureCoordinatesTransformFlag
///
void q_sgimagenode_rebuild_geometry(void* g, void* texture, void* rect, void* sourceRect, int32_t texCoordMode);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setMaterial)
///
/// @param self QSGImageNode*
/// @param material QSGMaterial*
///
void q_sgimagenode_set_material(void* self, void* material);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#material)
///
/// @param self QSGImageNode*
///
QSGMaterial* q_sgimagenode_material(void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setOpaqueMaterial)
///
/// @param self QSGImageNode*
/// @param material QSGMaterial*
///
void q_sgimagenode_set_opaque_material(void* self, void* material);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#opaqueMaterial)
///
/// @param self QSGImageNode*
///
QSGMaterial* q_sgimagenode_opaque_material(void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#activeMaterial)
///
/// @param self QSGImageNode*
///
QSGMaterial* q_sgimagenode_active_material(void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setRenderOrder)
///
/// @param self QSGImageNode*
/// @param order int
///
void q_sgimagenode_set_render_order(void* self, int order);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#renderOrder)
///
/// @param self QSGImageNode*
///
int32_t q_sgimagenode_render_order(void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setInheritedOpacity)
///
/// @param self QSGImageNode*
/// @param opacity double
///
void q_sgimagenode_set_inherited_opacity(void* self, double opacity);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#inheritedOpacity)
///
/// @param self QSGImageNode*
///
double q_sgimagenode_inherited_opacity(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setGeometry)
///
/// @param self QSGImageNode*
/// @param geometry QSGGeometry*
///
void q_sgimagenode_set_geometry(void* self, void* geometry);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
///
/// @param self QSGImageNode*
///
const QSGGeometry* q_sgimagenode_geometry(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
///
/// @param self QSGImageNode*
///
QSGGeometry* q_sgimagenode_geometry2(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#matrix)
///
/// @param self QSGImageNode*
///
const QMatrix4x4* q_sgimagenode_matrix(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#clipList)
///
/// @param self QSGImageNode*
///
const QSGClipNode* q_sgimagenode_clip_list(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererMatrix)
///
/// @param self QSGImageNode*
/// @param m QMatrix4x4*
///
void q_sgimagenode_set_renderer_matrix(void* self, void* m);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererClipList)
///
/// @param self QSGImageNode*
/// @param c QSGClipNode*
///
void q_sgimagenode_set_renderer_clip_list(void* self, void* c);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#parent)
///
/// @param self QSGImageNode*
///
QSGNode* q_sgimagenode_parent(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeChildNode)
///
/// @param self QSGImageNode*
/// @param node QSGNode*
///
void q_sgimagenode_remove_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeAllChildNodes)
///
/// @param self QSGImageNode*
///
void q_sgimagenode_remove_all_child_nodes(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#prependChildNode)
///
/// @param self QSGImageNode*
/// @param node QSGNode*
///
void q_sgimagenode_prepend_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#appendChildNode)
///
/// @param self QSGImageNode*
/// @param node QSGNode*
///
void q_sgimagenode_append_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeBefore)
///
/// @param self QSGImageNode*
/// @param node QSGNode*
/// @param before QSGNode*
///
void q_sgimagenode_insert_child_node_before(void* self, void* node, void* before);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeAfter)
///
/// @param self QSGImageNode*
/// @param node QSGNode*
/// @param after QSGNode*
///
void q_sgimagenode_insert_child_node_after(void* self, void* node, void* after);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#reparentChildNodesTo)
///
/// @param self QSGImageNode*
/// @param newParent QSGNode*
///
void q_sgimagenode_reparent_child_nodes_to(void* self, void* newParent);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childCount)
///
/// @param self QSGImageNode*
///
int32_t q_sgimagenode_child_count(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childAtIndex)
///
/// @param self QSGImageNode*
/// @param i int
///
QSGNode* q_sgimagenode_child_at_index(void* self, int i);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#firstChild)
///
/// @param self QSGImageNode*
///
QSGNode* q_sgimagenode_first_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#lastChild)
///
/// @param self QSGImageNode*
///
QSGNode* q_sgimagenode_last_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#nextSibling)
///
/// @param self QSGImageNode*
///
QSGNode* q_sgimagenode_next_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#previousSibling)
///
/// @param self QSGImageNode*
///
QSGNode* q_sgimagenode_previous_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#type)
///
/// @param self QSGImageNode*
///
/// @return enum QSGNode__NodeType
///
int32_t q_sgimagenode_type(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#clearDirty)
///
/// @param self QSGImageNode*
///
void q_sgimagenode_clear_dirty(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#markDirty)
///
/// @param self QSGImageNode*
/// @param bits flag of enum QSGNode__DirtyStateBit
///
void q_sgimagenode_mark_dirty(void* self, int32_t bits);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dirtyState)
///
/// @param self QSGImageNode*
///
/// @return flag of enum QSGNode__DirtyStateBit
///
int32_t q_sgimagenode_dirty_state(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// @param self QSGImageNode*
///
bool q_sgimagenode_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#flags)
///
/// @param self QSGImageNode*
///
/// @return flag of enum QSGNode__Flag
///
int32_t q_sgimagenode_flags(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGImageNode*
/// @param param1 enum QSGNode__Flag
///
void q_sgimagenode_set_flag(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGImageNode*
/// @param param1 flag of enum QSGNode__Flag
///
void q_sgimagenode_set_flags(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// @param self QSGImageNode*
///
void q_sgimagenode_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGImageNode*
/// @param param1 enum QSGNode__Flag
/// @param param2 bool
///
void q_sgimagenode_set_flag2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGImageNode*
/// @param param1 flag of enum QSGNode__Flag
/// @param param2 bool
///
void q_sgimagenode_set_flags2(void* self, int32_t param1, bool param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#dtor.QSGImageNode)
///
/// Delete this object from C++ memory.
///
/// @param self QSGImageNode*
///
void q_sgimagenode_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#public-types)

typedef enum {
    QSGIMAGENODE_TEXTURECOORDINATESTRANSFORMFLAG_NOTRANSFORM = 0,
    QSGIMAGENODE_TEXTURECOORDINATESTRANSFORMFLAG_MIRRORHORIZONTALLY = 1,
    QSGIMAGENODE_TEXTURECOORDINATESTRANSFORMFLAG_MIRRORVERTICALLY = 2
} QSGImageNode__TextureCoordinatesTransformFlag;

#endif
