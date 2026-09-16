#pragma once
#ifndef QUICK_LIBQSGNINEPATCHNODE_H
#define QUICK_LIBQSGNINEPATCHNODE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html#setTexture)
///
/// @param self QSGNinePatchNode*
/// @param texture QSGTexture*
///
void q_sgninepatchnode_set_texture(void* self, void* texture);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html#setBounds)
///
/// @param self QSGNinePatchNode*
/// @param bounds QRectF*
///
void q_sgninepatchnode_set_bounds(void* self, void* bounds);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html#setDevicePixelRatio)
///
/// @param self QSGNinePatchNode*
/// @param ratio double
///
void q_sgninepatchnode_set_device_pixel_ratio(void* self, double ratio);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html#setPadding)
///
/// @param self QSGNinePatchNode*
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
///
void q_sgninepatchnode_set_padding(void* self, double left, double top, double right, double bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html#update)
///
/// @param self QSGNinePatchNode*
///
void q_sgninepatchnode_update(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html#rebuildGeometry)
///
/// @param texture QSGTexture*
/// @param geometry QSGGeometry*
/// @param padding QVector4D*
/// @param bounds QRectF*
/// @param dpr double
///
void q_sgninepatchnode_rebuild_geometry(void* texture, void* geometry, void* padding, void* bounds, double dpr);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setMaterial)
///
/// @param self QSGNinePatchNode*
/// @param material QSGMaterial*
///
void q_sgninepatchnode_set_material(void* self, void* material);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#material)
///
/// @param self QSGNinePatchNode*
///
QSGMaterial* q_sgninepatchnode_material(void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setOpaqueMaterial)
///
/// @param self QSGNinePatchNode*
/// @param material QSGMaterial*
///
void q_sgninepatchnode_set_opaque_material(void* self, void* material);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#opaqueMaterial)
///
/// @param self QSGNinePatchNode*
///
QSGMaterial* q_sgninepatchnode_opaque_material(void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#activeMaterial)
///
/// @param self QSGNinePatchNode*
///
QSGMaterial* q_sgninepatchnode_active_material(void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setRenderOrder)
///
/// @param self QSGNinePatchNode*
/// @param order int
///
void q_sgninepatchnode_set_render_order(void* self, int order);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#renderOrder)
///
/// @param self QSGNinePatchNode*
///
int32_t q_sgninepatchnode_render_order(void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setInheritedOpacity)
///
/// @param self QSGNinePatchNode*
/// @param opacity double
///
void q_sgninepatchnode_set_inherited_opacity(void* self, double opacity);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#inheritedOpacity)
///
/// @param self QSGNinePatchNode*
///
double q_sgninepatchnode_inherited_opacity(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setGeometry)
///
/// @param self QSGNinePatchNode*
/// @param geometry QSGGeometry*
///
void q_sgninepatchnode_set_geometry(void* self, void* geometry);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
///
/// @param self QSGNinePatchNode*
///
const QSGGeometry* q_sgninepatchnode_geometry(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
///
/// @param self QSGNinePatchNode*
///
QSGGeometry* q_sgninepatchnode_geometry2(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#matrix)
///
/// @param self QSGNinePatchNode*
///
const QMatrix4x4* q_sgninepatchnode_matrix(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#clipList)
///
/// @param self QSGNinePatchNode*
///
const QSGClipNode* q_sgninepatchnode_clip_list(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererMatrix)
///
/// @param self QSGNinePatchNode*
/// @param m QMatrix4x4*
///
void q_sgninepatchnode_set_renderer_matrix(void* self, void* m);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererClipList)
///
/// @param self QSGNinePatchNode*
/// @param c QSGClipNode*
///
void q_sgninepatchnode_set_renderer_clip_list(void* self, void* c);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#parent)
///
/// @param self QSGNinePatchNode*
///
QSGNode* q_sgninepatchnode_parent(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeChildNode)
///
/// @param self QSGNinePatchNode*
/// @param node QSGNode*
///
void q_sgninepatchnode_remove_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeAllChildNodes)
///
/// @param self QSGNinePatchNode*
///
void q_sgninepatchnode_remove_all_child_nodes(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#prependChildNode)
///
/// @param self QSGNinePatchNode*
/// @param node QSGNode*
///
void q_sgninepatchnode_prepend_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#appendChildNode)
///
/// @param self QSGNinePatchNode*
/// @param node QSGNode*
///
void q_sgninepatchnode_append_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeBefore)
///
/// @param self QSGNinePatchNode*
/// @param node QSGNode*
/// @param before QSGNode*
///
void q_sgninepatchnode_insert_child_node_before(void* self, void* node, void* before);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeAfter)
///
/// @param self QSGNinePatchNode*
/// @param node QSGNode*
/// @param after QSGNode*
///
void q_sgninepatchnode_insert_child_node_after(void* self, void* node, void* after);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#reparentChildNodesTo)
///
/// @param self QSGNinePatchNode*
/// @param newParent QSGNode*
///
void q_sgninepatchnode_reparent_child_nodes_to(void* self, void* newParent);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childCount)
///
/// @param self QSGNinePatchNode*
///
int32_t q_sgninepatchnode_child_count(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childAtIndex)
///
/// @param self QSGNinePatchNode*
/// @param i int
///
QSGNode* q_sgninepatchnode_child_at_index(void* self, int i);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#firstChild)
///
/// @param self QSGNinePatchNode*
///
QSGNode* q_sgninepatchnode_first_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#lastChild)
///
/// @param self QSGNinePatchNode*
///
QSGNode* q_sgninepatchnode_last_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#nextSibling)
///
/// @param self QSGNinePatchNode*
///
QSGNode* q_sgninepatchnode_next_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#previousSibling)
///
/// @param self QSGNinePatchNode*
///
QSGNode* q_sgninepatchnode_previous_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#type)
///
/// @param self QSGNinePatchNode*
///
/// @return enum QSGNode__NodeType
///
int32_t q_sgninepatchnode_type(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#clearDirty)
///
/// @param self QSGNinePatchNode*
///
void q_sgninepatchnode_clear_dirty(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#markDirty)
///
/// @param self QSGNinePatchNode*
/// @param bits flag of enum QSGNode__DirtyStateBit
///
void q_sgninepatchnode_mark_dirty(void* self, int32_t bits);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dirtyState)
///
/// @param self QSGNinePatchNode*
///
/// @return flag of enum QSGNode__DirtyStateBit
///
int32_t q_sgninepatchnode_dirty_state(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// @param self QSGNinePatchNode*
///
bool q_sgninepatchnode_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#flags)
///
/// @param self QSGNinePatchNode*
///
/// @return flag of enum QSGNode__Flag
///
int32_t q_sgninepatchnode_flags(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGNinePatchNode*
/// @param param1 enum QSGNode__Flag
///
void q_sgninepatchnode_set_flag(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGNinePatchNode*
/// @param param1 flag of enum QSGNode__Flag
///
void q_sgninepatchnode_set_flags(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// @param self QSGNinePatchNode*
///
void q_sgninepatchnode_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGNinePatchNode*
/// @param param1 enum QSGNode__Flag
/// @param param2 bool
///
void q_sgninepatchnode_set_flag2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGNinePatchNode*
/// @param param1 flag of enum QSGNode__Flag
/// @param param2 bool
///
void q_sgninepatchnode_set_flags2(void* self, int32_t param1, bool param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html#dtor.QSGNinePatchNode)
///
/// Delete this object from C++ memory.
///
/// @param self QSGNinePatchNode*
///
void q_sgninepatchnode_delete(void* self);

#endif
