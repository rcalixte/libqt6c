#pragma once
#ifndef QUICK_LIBQSGSIMPLERECTNODE_H
#define QUICK_LIBQSGSIMPLERECTNODE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimplerectnode.html)

/// q_sgsimplerectnode_new constructs a new QSGSimpleRectNode object.
///
/// @param rect QRectF*
/// @param color QColor*
///
QSGSimpleRectNode* q_sgsimplerectnode_new(void* rect, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimplerectnode.html)

/// q_sgsimplerectnode_new2 constructs a new QSGSimpleRectNode object.
///
QSGSimpleRectNode* q_sgsimplerectnode_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimplerectnode.html#setRect)
///
/// @param self QSGSimpleRectNode*
/// @param rect QRectF*
///
void q_sgsimplerectnode_set_rect(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimplerectnode.html#setRect)
///
/// @param self QSGSimpleRectNode*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_sgsimplerectnode_set_rect2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimplerectnode.html#rect)
///
/// @param self QSGSimpleRectNode*
///
QRectF* q_sgsimplerectnode_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimplerectnode.html#setColor)
///
/// @param self QSGSimpleRectNode*
/// @param color QColor*
///
void q_sgsimplerectnode_set_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimplerectnode.html#color)
///
/// @param self QSGSimpleRectNode*
///
QColor* q_sgsimplerectnode_color(void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setMaterial)
///
/// @param self QSGSimpleRectNode*
/// @param material QSGMaterial*
///
void q_sgsimplerectnode_set_material(void* self, void* material);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#material)
///
/// @param self QSGSimpleRectNode*
///
QSGMaterial* q_sgsimplerectnode_material(void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setOpaqueMaterial)
///
/// @param self QSGSimpleRectNode*
/// @param material QSGMaterial*
///
void q_sgsimplerectnode_set_opaque_material(void* self, void* material);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#opaqueMaterial)
///
/// @param self QSGSimpleRectNode*
///
QSGMaterial* q_sgsimplerectnode_opaque_material(void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#activeMaterial)
///
/// @param self QSGSimpleRectNode*
///
QSGMaterial* q_sgsimplerectnode_active_material(void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setRenderOrder)
///
/// @param self QSGSimpleRectNode*
/// @param order int
///
void q_sgsimplerectnode_set_render_order(void* self, int order);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#renderOrder)
///
/// @param self QSGSimpleRectNode*
///
int32_t q_sgsimplerectnode_render_order(void* self);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setInheritedOpacity)
///
/// @param self QSGSimpleRectNode*
/// @param opacity double
///
void q_sgsimplerectnode_set_inherited_opacity(void* self, double opacity);

/// Inherited from QSGGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#inheritedOpacity)
///
/// @param self QSGSimpleRectNode*
///
double q_sgsimplerectnode_inherited_opacity(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setGeometry)
///
/// @param self QSGSimpleRectNode*
/// @param geometry QSGGeometry*
///
void q_sgsimplerectnode_set_geometry(void* self, void* geometry);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
///
/// @param self QSGSimpleRectNode*
///
const QSGGeometry* q_sgsimplerectnode_geometry(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
///
/// @param self QSGSimpleRectNode*
///
QSGGeometry* q_sgsimplerectnode_geometry2(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#matrix)
///
/// @param self QSGSimpleRectNode*
///
const QMatrix4x4* q_sgsimplerectnode_matrix(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#clipList)
///
/// @param self QSGSimpleRectNode*
///
const QSGClipNode* q_sgsimplerectnode_clip_list(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererMatrix)
///
/// @param self QSGSimpleRectNode*
/// @param m QMatrix4x4*
///
void q_sgsimplerectnode_set_renderer_matrix(void* self, void* m);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererClipList)
///
/// @param self QSGSimpleRectNode*
/// @param c QSGClipNode*
///
void q_sgsimplerectnode_set_renderer_clip_list(void* self, void* c);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#parent)
///
/// @param self QSGSimpleRectNode*
///
QSGNode* q_sgsimplerectnode_parent(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeChildNode)
///
/// @param self QSGSimpleRectNode*
/// @param node QSGNode*
///
void q_sgsimplerectnode_remove_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeAllChildNodes)
///
/// @param self QSGSimpleRectNode*
///
void q_sgsimplerectnode_remove_all_child_nodes(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#prependChildNode)
///
/// @param self QSGSimpleRectNode*
/// @param node QSGNode*
///
void q_sgsimplerectnode_prepend_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#appendChildNode)
///
/// @param self QSGSimpleRectNode*
/// @param node QSGNode*
///
void q_sgsimplerectnode_append_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeBefore)
///
/// @param self QSGSimpleRectNode*
/// @param node QSGNode*
/// @param before QSGNode*
///
void q_sgsimplerectnode_insert_child_node_before(void* self, void* node, void* before);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeAfter)
///
/// @param self QSGSimpleRectNode*
/// @param node QSGNode*
/// @param after QSGNode*
///
void q_sgsimplerectnode_insert_child_node_after(void* self, void* node, void* after);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#reparentChildNodesTo)
///
/// @param self QSGSimpleRectNode*
/// @param newParent QSGNode*
///
void q_sgsimplerectnode_reparent_child_nodes_to(void* self, void* newParent);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childCount)
///
/// @param self QSGSimpleRectNode*
///
int32_t q_sgsimplerectnode_child_count(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childAtIndex)
///
/// @param self QSGSimpleRectNode*
/// @param i int
///
QSGNode* q_sgsimplerectnode_child_at_index(void* self, int i);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#firstChild)
///
/// @param self QSGSimpleRectNode*
///
QSGNode* q_sgsimplerectnode_first_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#lastChild)
///
/// @param self QSGSimpleRectNode*
///
QSGNode* q_sgsimplerectnode_last_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#nextSibling)
///
/// @param self QSGSimpleRectNode*
///
QSGNode* q_sgsimplerectnode_next_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#previousSibling)
///
/// @param self QSGSimpleRectNode*
///
QSGNode* q_sgsimplerectnode_previous_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#type)
///
/// @param self QSGSimpleRectNode*
///
/// @return enum QSGNode__NodeType
///
int32_t q_sgsimplerectnode_type(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#clearDirty)
///
/// @param self QSGSimpleRectNode*
///
void q_sgsimplerectnode_clear_dirty(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#markDirty)
///
/// @param self QSGSimpleRectNode*
/// @param bits flag of enum QSGNode__DirtyStateBit
///
void q_sgsimplerectnode_mark_dirty(void* self, int32_t bits);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dirtyState)
///
/// @param self QSGSimpleRectNode*
///
/// @return flag of enum QSGNode__DirtyStateBit
///
int32_t q_sgsimplerectnode_dirty_state(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#flags)
///
/// @param self QSGSimpleRectNode*
///
/// @return flag of enum QSGNode__Flag
///
int32_t q_sgsimplerectnode_flags(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGSimpleRectNode*
/// @param param1 enum QSGNode__Flag
///
void q_sgsimplerectnode_set_flag(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGSimpleRectNode*
/// @param param1 flag of enum QSGNode__Flag
///
void q_sgsimplerectnode_set_flags(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGSimpleRectNode*
/// @param param1 enum QSGNode__Flag
/// @param param2 bool
///
void q_sgsimplerectnode_set_flag2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGSimpleRectNode*
/// @param param1 flag of enum QSGNode__Flag
/// @param param2 bool
///
void q_sgsimplerectnode_set_flags2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGSimpleRectNode*
///
bool q_sgsimplerectnode_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGSimpleRectNode*
///
bool q_sgsimplerectnode_super_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGSimpleRectNode*
/// @param callback bool func()
///
void q_sgsimplerectnode_on_is_subtree_blocked(void* self, bool (*callback)());

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGSimpleRectNode*
///
void q_sgsimplerectnode_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGSimpleRectNode*
///
void q_sgsimplerectnode_super_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGSimpleRectNode*
/// @param callback void func()
///
void q_sgsimplerectnode_on_preprocess(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgsimplerectnode.html#dtor.QSGSimpleRectNode)
///
/// Delete this object from C++ memory.
///
/// @param self QSGSimpleRectNode*
///
void q_sgsimplerectnode_delete(void* self);

#endif
