#pragma once
#ifndef QUICK_LIBQSGRECTANGLENODE_H
#define QUICK_LIBQSGRECTANGLENODE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrectanglenode.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrectanglenode.html#setRect)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QSGRectangleNode*
/// @param rect QRectF*
///
void q_sgrectanglenode_set_rect(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrectanglenode.html#setRect)
///
/// @param self QSGRectangleNode*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_sgrectanglenode_set_rect2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrectanglenode.html#rect)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QSGRectangleNode*
///
QRectF* q_sgrectanglenode_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrectanglenode.html#setColor)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QSGRectangleNode*
/// @param color QColor*
///
void q_sgrectanglenode_set_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrectanglenode.html#color)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QSGRectangleNode*
///
QColor* q_sgrectanglenode_color(const void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setMaterial)
///
/// @param self QSGRectangleNode*
/// @param material QSGMaterial*
///
void q_sgrectanglenode_set_material(void* self, void* material);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#material)
///
/// @param self const QSGRectangleNode*
///
QSGMaterial* q_sgrectanglenode_material(const void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setOpaqueMaterial)
///
/// @param self QSGRectangleNode*
/// @param material QSGMaterial*
///
void q_sgrectanglenode_set_opaque_material(void* self, void* material);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#opaqueMaterial)
///
/// @param self const QSGRectangleNode*
///
QSGMaterial* q_sgrectanglenode_opaque_material(const void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#activeMaterial)
///
/// @param self const QSGRectangleNode*
///
QSGMaterial* q_sgrectanglenode_active_material(const void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setRenderOrder)
///
/// @param self QSGRectangleNode*
/// @param order int
///
void q_sgrectanglenode_set_render_order(void* self, int order);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#renderOrder)
///
/// @param self const QSGRectangleNode*
///
int32_t q_sgrectanglenode_render_order(const void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setInheritedOpacity)
///
/// @param self QSGRectangleNode*
/// @param opacity double
///
void q_sgrectanglenode_set_inherited_opacity(void* self, double opacity);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#inheritedOpacity)
///
/// @param self const QSGRectangleNode*
///
double q_sgrectanglenode_inherited_opacity(const void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setGeometry)
///
/// @param self QSGRectangleNode*
/// @param geometry QSGGeometry*
///
void q_sgrectanglenode_set_geometry(void* self, void* geometry);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
///
/// @param self const QSGRectangleNode*
///
const QSGGeometry* q_sgrectanglenode_geometry(const void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
///
/// @param self QSGRectangleNode*
///
QSGGeometry* q_sgrectanglenode_geometry2(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#matrix)
///
/// @param self const QSGRectangleNode*
///
const QMatrix4x4* q_sgrectanglenode_matrix(const void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#clipList)
///
/// @param self const QSGRectangleNode*
///
const QSGClipNode* q_sgrectanglenode_clip_list(const void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererMatrix)
///
/// @param self QSGRectangleNode*
/// @param m QMatrix4x4*
///
void q_sgrectanglenode_set_renderer_matrix(void* self, const void* m);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererClipList)
///
/// @param self QSGRectangleNode*
/// @param c QSGClipNode*
///
void q_sgrectanglenode_set_renderer_clip_list(void* self, const void* c);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#parent)
///
/// @param self const QSGRectangleNode*
///
QSGNode* q_sgrectanglenode_parent(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeChildNode)
///
/// @param self QSGRectangleNode*
/// @param node QSGNode*
///
void q_sgrectanglenode_remove_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeAllChildNodes)
///
/// @param self QSGRectangleNode*
///
void q_sgrectanglenode_remove_all_child_nodes(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#prependChildNode)
///
/// @param self QSGRectangleNode*
/// @param node QSGNode*
///
void q_sgrectanglenode_prepend_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#appendChildNode)
///
/// @param self QSGRectangleNode*
/// @param node QSGNode*
///
void q_sgrectanglenode_append_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeBefore)
///
/// @param self QSGRectangleNode*
/// @param node QSGNode*
/// @param before QSGNode*
///
void q_sgrectanglenode_insert_child_node_before(void* self, void* node, void* before);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeAfter)
///
/// @param self QSGRectangleNode*
/// @param node QSGNode*
/// @param after QSGNode*
///
void q_sgrectanglenode_insert_child_node_after(void* self, void* node, void* after);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#reparentChildNodesTo)
///
/// @param self QSGRectangleNode*
/// @param newParent QSGNode*
///
void q_sgrectanglenode_reparent_child_nodes_to(void* self, void* newParent);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childCount)
///
/// @param self const QSGRectangleNode*
///
int32_t q_sgrectanglenode_child_count(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childAtIndex)
///
/// @param self const QSGRectangleNode*
/// @param i int
///
QSGNode* q_sgrectanglenode_child_at_index(const void* self, int i);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#firstChild)
///
/// @param self const QSGRectangleNode*
///
QSGNode* q_sgrectanglenode_first_child(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#lastChild)
///
/// @param self const QSGRectangleNode*
///
QSGNode* q_sgrectanglenode_last_child(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#nextSibling)
///
/// @param self const QSGRectangleNode*
///
QSGNode* q_sgrectanglenode_next_sibling(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#previousSibling)
///
/// @param self const QSGRectangleNode*
///
QSGNode* q_sgrectanglenode_previous_sibling(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#type)
///
/// @param self const QSGRectangleNode*
///
/// @return enum QSGNode__NodeType
///
int32_t q_sgrectanglenode_type(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#clearDirty)
///
/// @param self QSGRectangleNode*
///
void q_sgrectanglenode_clear_dirty(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#markDirty)
///
/// @param self QSGRectangleNode*
/// @param bits flag of enum QSGNode__DirtyStateBit
///
void q_sgrectanglenode_mark_dirty(void* self, int32_t bits);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dirtyState)
///
/// @param self const QSGRectangleNode*
///
/// @return flag of enum QSGNode__DirtyStateBit
///
int32_t q_sgrectanglenode_dirty_state(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// @param self const QSGRectangleNode*
///
bool q_sgrectanglenode_is_subtree_blocked(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#flags)
///
/// @param self const QSGRectangleNode*
///
/// @return flag of enum QSGNode__Flag
///
int32_t q_sgrectanglenode_flags(const void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGRectangleNode*
/// @param param1 enum QSGNode__Flag
///
void q_sgrectanglenode_set_flag(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGRectangleNode*
/// @param param1 flag of enum QSGNode__Flag
///
void q_sgrectanglenode_set_flags(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// @param self QSGRectangleNode*
///
void q_sgrectanglenode_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGRectangleNode*
/// @param param1 enum QSGNode__Flag
/// @param param2 bool
///
void q_sgrectanglenode_set_flag2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGRectangleNode*
/// @param param1 flag of enum QSGNode__Flag
/// @param param2 bool
///
void q_sgrectanglenode_set_flags2(void* self, int32_t param1, bool param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrectanglenode.html#dtor.QSGRectangleNode)
///
/// Delete this object from C++ memory.
///
/// @param self QSGRectangleNode*
///
void q_sgrectanglenode_delete(void* self);

#endif
