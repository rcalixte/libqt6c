#pragma once
#ifndef QUICK_LIBQSGSIMPLETEXTURENODE_H
#define QUICK_LIBQSGSIMPLETEXTURENODE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html)

/// q_sgsimpletexturenode_new constructs a new QSGSimpleTextureNode object.
///
QSGSimpleTextureNode* q_sgsimpletexturenode_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#setRect)
///
/// @param self QSGSimpleTextureNode*
/// @param rect QRectF*
///
void q_sgsimpletexturenode_set_rect(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#setRect)
///
/// @param self QSGSimpleTextureNode*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_sgsimpletexturenode_set_rect2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#rect)
///
/// @param self const QSGSimpleTextureNode*
///
QRectF* q_sgsimpletexturenode_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#setSourceRect)
///
/// @param self QSGSimpleTextureNode*
/// @param r QRectF*
///
void q_sgsimpletexturenode_set_source_rect(void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#setSourceRect)
///
/// @param self QSGSimpleTextureNode*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_sgsimpletexturenode_set_source_rect2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#sourceRect)
///
/// @param self const QSGSimpleTextureNode*
///
QRectF* q_sgsimpletexturenode_source_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#setTexture)
///
/// @param self QSGSimpleTextureNode*
/// @param texture QSGTexture*
///
void q_sgsimpletexturenode_set_texture(void* self, void* texture);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#texture)
///
/// @param self const QSGSimpleTextureNode*
///
QSGTexture* q_sgsimpletexturenode_texture(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#setFiltering)
///
/// @param self QSGSimpleTextureNode*
/// @param filtering enum QSGTexture__Filtering
///
void q_sgsimpletexturenode_set_filtering(void* self, int32_t filtering);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#filtering)
///
/// @param self const QSGSimpleTextureNode*
///
/// @return enum QSGTexture__Filtering
///
int32_t q_sgsimpletexturenode_filtering(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#setTextureCoordinatesTransform)
///
/// @param self QSGSimpleTextureNode*
/// @param mode flag of enum QSGSimpleTextureNode__TextureCoordinatesTransformFlag
///
void q_sgsimpletexturenode_set_texture_coordinates_transform(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#textureCoordinatesTransform)
///
/// @param self const QSGSimpleTextureNode*
///
/// @return flag of enum QSGSimpleTextureNode__TextureCoordinatesTransformFlag
///
int32_t q_sgsimpletexturenode_texture_coordinates_transform(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#setOwnsTexture)
///
/// @param self QSGSimpleTextureNode*
/// @param owns bool
///
void q_sgsimpletexturenode_set_owns_texture(void* self, bool owns);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#ownsTexture)
///
/// @param self const QSGSimpleTextureNode*
///
bool q_sgsimpletexturenode_owns_texture(const void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setMaterial)
///
/// @param self QSGSimpleTextureNode*
/// @param material QSGMaterial*
///
void q_sgsimpletexturenode_set_material(void* self, void* material);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#material)
///
/// @param self const QSGSimpleTextureNode*
///
QSGMaterial* q_sgsimpletexturenode_material(const void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setOpaqueMaterial)
///
/// @param self QSGSimpleTextureNode*
/// @param material QSGMaterial*
///
void q_sgsimpletexturenode_set_opaque_material(void* self, void* material);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#opaqueMaterial)
///
/// @param self const QSGSimpleTextureNode*
///
QSGMaterial* q_sgsimpletexturenode_opaque_material(const void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#activeMaterial)
///
/// @param self const QSGSimpleTextureNode*
///
QSGMaterial* q_sgsimpletexturenode_active_material(const void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setRenderOrder)
///
/// @param self QSGSimpleTextureNode*
/// @param order int
///
void q_sgsimpletexturenode_set_render_order(void* self, int order);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#renderOrder)
///
/// @param self const QSGSimpleTextureNode*
///
int32_t q_sgsimpletexturenode_render_order(const void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setInheritedOpacity)
///
/// @param self QSGSimpleTextureNode*
/// @param opacity double
///
void q_sgsimpletexturenode_set_inherited_opacity(void* self, double opacity);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#inheritedOpacity)
///
/// @param self const QSGSimpleTextureNode*
///
double q_sgsimpletexturenode_inherited_opacity(const void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setGeometry)
///
/// @param self QSGSimpleTextureNode*
/// @param geometry QSGGeometry*
///
void q_sgsimpletexturenode_set_geometry(void* self, void* geometry);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
///
/// @param self const QSGSimpleTextureNode*
///
const QSGGeometry* q_sgsimpletexturenode_geometry(const void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
///
/// @param self QSGSimpleTextureNode*
///
QSGGeometry* q_sgsimpletexturenode_geometry2(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#matrix)
///
/// @param self const QSGSimpleTextureNode*
///
const QMatrix4x4* q_sgsimpletexturenode_matrix(const void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#clipList)
///
/// @param self const QSGSimpleTextureNode*
///
const QSGClipNode* q_sgsimpletexturenode_clip_list(const void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererMatrix)
///
/// @param self QSGSimpleTextureNode*
/// @param m QMatrix4x4*
///
void q_sgsimpletexturenode_set_renderer_matrix(void* self, const void* m);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererClipList)
///
/// @param self QSGSimpleTextureNode*
/// @param c QSGClipNode*
///
void q_sgsimpletexturenode_set_renderer_clip_list(void* self, const void* c);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#parent)
///
/// @param self const QSGSimpleTextureNode*
///
QSGNode* q_sgsimpletexturenode_parent(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeChildNode)
///
/// @param self QSGSimpleTextureNode*
/// @param node QSGNode*
///
void q_sgsimpletexturenode_remove_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeAllChildNodes)
///
/// @param self QSGSimpleTextureNode*
///
void q_sgsimpletexturenode_remove_all_child_nodes(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#prependChildNode)
///
/// @param self QSGSimpleTextureNode*
/// @param node QSGNode*
///
void q_sgsimpletexturenode_prepend_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#appendChildNode)
///
/// @param self QSGSimpleTextureNode*
/// @param node QSGNode*
///
void q_sgsimpletexturenode_append_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeBefore)
///
/// @param self QSGSimpleTextureNode*
/// @param node QSGNode*
/// @param before QSGNode*
///
void q_sgsimpletexturenode_insert_child_node_before(void* self, void* node, void* before);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeAfter)
///
/// @param self QSGSimpleTextureNode*
/// @param node QSGNode*
/// @param after QSGNode*
///
void q_sgsimpletexturenode_insert_child_node_after(void* self, void* node, void* after);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#reparentChildNodesTo)
///
/// @param self QSGSimpleTextureNode*
/// @param newParent QSGNode*
///
void q_sgsimpletexturenode_reparent_child_nodes_to(void* self, void* newParent);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childCount)
///
/// @param self const QSGSimpleTextureNode*
///
int32_t q_sgsimpletexturenode_child_count(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childAtIndex)
///
/// @param self const QSGSimpleTextureNode*
/// @param i int
///
QSGNode* q_sgsimpletexturenode_child_at_index(const void* self, int i);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#firstChild)
///
/// @param self const QSGSimpleTextureNode*
///
QSGNode* q_sgsimpletexturenode_first_child(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#lastChild)
///
/// @param self const QSGSimpleTextureNode*
///
QSGNode* q_sgsimpletexturenode_last_child(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#nextSibling)
///
/// @param self const QSGSimpleTextureNode*
///
QSGNode* q_sgsimpletexturenode_next_sibling(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#previousSibling)
///
/// @param self const QSGSimpleTextureNode*
///
QSGNode* q_sgsimpletexturenode_previous_sibling(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#type)
///
/// @param self const QSGSimpleTextureNode*
///
/// @return enum QSGNode__NodeType
///
int32_t q_sgsimpletexturenode_type(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#clearDirty)
///
/// @param self QSGSimpleTextureNode*
///
void q_sgsimpletexturenode_clear_dirty(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#markDirty)
///
/// @param self QSGSimpleTextureNode*
/// @param bits flag of enum QSGNode__DirtyStateBit
///
void q_sgsimpletexturenode_mark_dirty(void* self, int32_t bits);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dirtyState)
///
/// @param self const QSGSimpleTextureNode*
///
/// @return flag of enum QSGNode__DirtyStateBit
///
int32_t q_sgsimpletexturenode_dirty_state(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#flags)
///
/// @param self const QSGSimpleTextureNode*
///
/// @return flag of enum QSGNode__Flag
///
int32_t q_sgsimpletexturenode_flags(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGSimpleTextureNode*
/// @param param1 enum QSGNode__Flag
///
void q_sgsimpletexturenode_set_flag(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGSimpleTextureNode*
/// @param param1 flag of enum QSGNode__Flag
///
void q_sgsimpletexturenode_set_flags(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGSimpleTextureNode*
/// @param param1 enum QSGNode__Flag
/// @param param2 bool
///
void q_sgsimpletexturenode_set_flag2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGSimpleTextureNode*
/// @param param1 flag of enum QSGNode__Flag
/// @param param2 bool
///
void q_sgsimpletexturenode_set_flags2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSGSimpleTextureNode*
///
bool q_sgsimpletexturenode_is_subtree_blocked(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSGSimpleTextureNode*
///
bool q_sgsimpletexturenode_super_is_subtree_blocked(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSGSimpleTextureNode*
/// @param callback bool func(QSGSimpleTextureNode* self)
///
void q_sgsimpletexturenode_on_is_subtree_blocked(const void* self, bool (*callback)(const void*));

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGSimpleTextureNode*
///
void q_sgsimpletexturenode_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGSimpleTextureNode*
///
void q_sgsimpletexturenode_super_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGSimpleTextureNode*
/// @param callback void func(QSGSimpleTextureNode* self)
///
void q_sgsimpletexturenode_on_preprocess(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#dtor.QSGSimpleTextureNode)
///
/// Delete this object from C++ memory.
///
/// @param self QSGSimpleTextureNode*
///
void q_sgsimpletexturenode_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#public-types)

typedef enum {
    QSGSIMPLETEXTURENODE_TEXTURECOORDINATESTRANSFORMFLAG_NOTRANSFORM = 0,
    QSGSIMPLETEXTURENODE_TEXTURECOORDINATESTRANSFORMFLAG_MIRRORHORIZONTALLY = 1,
    QSGSIMPLETEXTURENODE_TEXTURECOORDINATESTRANSFORMFLAG_MIRRORVERTICALLY = 2
} QSGSimpleTextureNode__TextureCoordinatesTransformFlag;

#endif
