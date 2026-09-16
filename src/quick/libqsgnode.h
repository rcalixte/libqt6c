#pragma once
#ifndef QUICK_LIBQSGNODE_H
#define QUICK_LIBQSGNODE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html)

/// q_sgnode_new constructs a new QSGNode object.
///
QSGNode* q_sgnode_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#parent)
///
/// @param self QSGNode*
///
QSGNode* q_sgnode_parent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeChildNode)
///
/// @param self QSGNode*
/// @param node QSGNode*
///
void q_sgnode_remove_child_node(void* self, void* node);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeAllChildNodes)
///
/// @param self QSGNode*
///
void q_sgnode_remove_all_child_nodes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#prependChildNode)
///
/// @param self QSGNode*
/// @param node QSGNode*
///
void q_sgnode_prepend_child_node(void* self, void* node);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#appendChildNode)
///
/// @param self QSGNode*
/// @param node QSGNode*
///
void q_sgnode_append_child_node(void* self, void* node);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeBefore)
///
/// @param self QSGNode*
/// @param node QSGNode*
/// @param before QSGNode*
///
void q_sgnode_insert_child_node_before(void* self, void* node, void* before);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeAfter)
///
/// @param self QSGNode*
/// @param node QSGNode*
/// @param after QSGNode*
///
void q_sgnode_insert_child_node_after(void* self, void* node, void* after);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#reparentChildNodesTo)
///
/// @param self QSGNode*
/// @param newParent QSGNode*
///
void q_sgnode_reparent_child_nodes_to(void* self, void* newParent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childCount)
///
/// @param self QSGNode*
///
int32_t q_sgnode_child_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childAtIndex)
///
/// @param self QSGNode*
/// @param i int
///
QSGNode* q_sgnode_child_at_index(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#firstChild)
///
/// @param self QSGNode*
///
QSGNode* q_sgnode_first_child(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#lastChild)
///
/// @param self QSGNode*
///
QSGNode* q_sgnode_last_child(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#nextSibling)
///
/// @param self QSGNode*
///
QSGNode* q_sgnode_next_sibling(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#previousSibling)
///
/// @param self QSGNode*
///
QSGNode* q_sgnode_previous_sibling(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#type)
///
/// @param self QSGNode*
///
/// @return enum QSGNode__NodeType
///
int32_t q_sgnode_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#clearDirty)
///
/// @param self QSGNode*
///
void q_sgnode_clear_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#markDirty)
///
/// @param self QSGNode*
/// @param bits flag of enum QSGNode__DirtyStateBit
///
void q_sgnode_mark_dirty(void* self, int32_t bits);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dirtyState)
///
/// @param self QSGNode*
///
/// @return flag of enum QSGNode__DirtyStateBit
///
int32_t q_sgnode_dirty_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// @param self QSGNode*
///
bool q_sgnode_is_subtree_blocked(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Allows for overriding the related default method
///
/// @param self QSGNode*
/// @param callback bool func()
///
void q_sgnode_on_is_subtree_blocked(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Base class method implementation
///
/// @param self QSGNode*
///
bool q_sgnode_super_is_subtree_blocked(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#flags)
///
/// @param self QSGNode*
///
/// @return flag of enum QSGNode__Flag
///
int32_t q_sgnode_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGNode*
/// @param param1 enum QSGNode__Flag
///
void q_sgnode_set_flag(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGNode*
/// @param param1 flag of enum QSGNode__Flag
///
void q_sgnode_set_flags(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// @param self QSGNode*
///
void q_sgnode_preprocess(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Allows for overriding the related default method
///
/// @param self QSGNode*
/// @param callback void func()
///
void q_sgnode_on_preprocess(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Base class method implementation
///
/// @param self QSGNode*
///
void q_sgnode_super_preprocess(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGNode*
/// @param param1 enum QSGNode__Flag
/// @param param2 bool
///
void q_sgnode_set_flag2(void* self, int32_t param1, bool param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGNode*
/// @param param1 flag of enum QSGNode__Flag
/// @param param2 bool
///
void q_sgnode_set_flags2(void* self, int32_t param1, bool param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dtor.QSGNode)
///
/// Delete this object from C++ memory.
///
/// @param self QSGNode*
///
void q_sgnode_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode-h.html#qsgnode_set_description)
///
/// @param node QSGNode*
/// @param description const char*
///
void q_qsgnode_h_qsgnode_set_description(void* node, const char* description);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setGeometry)
///
/// @param self QSGBasicGeometryNode*
/// @param geometry QSGGeometry*
///
void q_sgbasicgeometrynode_set_geometry(void* self, void* geometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
///
/// @param self QSGBasicGeometryNode*
///
const QSGGeometry* q_sgbasicgeometrynode_geometry(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
///
/// @param self QSGBasicGeometryNode*
///
QSGGeometry* q_sgbasicgeometrynode_geometry2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#matrix)
///
/// @param self QSGBasicGeometryNode*
///
const QMatrix4x4* q_sgbasicgeometrynode_matrix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#clipList)
///
/// @param self QSGBasicGeometryNode*
///
const QSGClipNode* q_sgbasicgeometrynode_clip_list(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererMatrix)
///
/// @param self QSGBasicGeometryNode*
/// @param m QMatrix4x4*
///
void q_sgbasicgeometrynode_set_renderer_matrix(void* self, void* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererClipList)
///
/// @param self QSGBasicGeometryNode*
/// @param c QSGClipNode*
///
void q_sgbasicgeometrynode_set_renderer_clip_list(void* self, void* c);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#parent)
///
/// @param self QSGBasicGeometryNode*
///
QSGNode* q_sgbasicgeometrynode_parent(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeChildNode)
///
/// @param self QSGBasicGeometryNode*
/// @param node QSGNode*
///
void q_sgbasicgeometrynode_remove_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeAllChildNodes)
///
/// @param self QSGBasicGeometryNode*
///
void q_sgbasicgeometrynode_remove_all_child_nodes(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#prependChildNode)
///
/// @param self QSGBasicGeometryNode*
/// @param node QSGNode*
///
void q_sgbasicgeometrynode_prepend_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#appendChildNode)
///
/// @param self QSGBasicGeometryNode*
/// @param node QSGNode*
///
void q_sgbasicgeometrynode_append_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeBefore)
///
/// @param self QSGBasicGeometryNode*
/// @param node QSGNode*
/// @param before QSGNode*
///
void q_sgbasicgeometrynode_insert_child_node_before(void* self, void* node, void* before);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeAfter)
///
/// @param self QSGBasicGeometryNode*
/// @param node QSGNode*
/// @param after QSGNode*
///
void q_sgbasicgeometrynode_insert_child_node_after(void* self, void* node, void* after);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#reparentChildNodesTo)
///
/// @param self QSGBasicGeometryNode*
/// @param newParent QSGNode*
///
void q_sgbasicgeometrynode_reparent_child_nodes_to(void* self, void* newParent);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childCount)
///
/// @param self QSGBasicGeometryNode*
///
int32_t q_sgbasicgeometrynode_child_count(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childAtIndex)
///
/// @param self QSGBasicGeometryNode*
/// @param i int
///
QSGNode* q_sgbasicgeometrynode_child_at_index(void* self, int i);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#firstChild)
///
/// @param self QSGBasicGeometryNode*
///
QSGNode* q_sgbasicgeometrynode_first_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#lastChild)
///
/// @param self QSGBasicGeometryNode*
///
QSGNode* q_sgbasicgeometrynode_last_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#nextSibling)
///
/// @param self QSGBasicGeometryNode*
///
QSGNode* q_sgbasicgeometrynode_next_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#previousSibling)
///
/// @param self QSGBasicGeometryNode*
///
QSGNode* q_sgbasicgeometrynode_previous_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#type)
///
/// @param self QSGBasicGeometryNode*
///
/// @return enum QSGNode__NodeType
///
int32_t q_sgbasicgeometrynode_type(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#clearDirty)
///
/// @param self QSGBasicGeometryNode*
///
void q_sgbasicgeometrynode_clear_dirty(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#markDirty)
///
/// @param self QSGBasicGeometryNode*
/// @param bits flag of enum QSGNode__DirtyStateBit
///
void q_sgbasicgeometrynode_mark_dirty(void* self, int32_t bits);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dirtyState)
///
/// @param self QSGBasicGeometryNode*
///
/// @return flag of enum QSGNode__DirtyStateBit
///
int32_t q_sgbasicgeometrynode_dirty_state(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// @param self QSGBasicGeometryNode*
///
bool q_sgbasicgeometrynode_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#flags)
///
/// @param self QSGBasicGeometryNode*
///
/// @return flag of enum QSGNode__Flag
///
int32_t q_sgbasicgeometrynode_flags(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGBasicGeometryNode*
/// @param param1 enum QSGNode__Flag
///
void q_sgbasicgeometrynode_set_flag(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGBasicGeometryNode*
/// @param param1 flag of enum QSGNode__Flag
///
void q_sgbasicgeometrynode_set_flags(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// @param self QSGBasicGeometryNode*
///
void q_sgbasicgeometrynode_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGBasicGeometryNode*
/// @param param1 enum QSGNode__Flag
/// @param param2 bool
///
void q_sgbasicgeometrynode_set_flag2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGBasicGeometryNode*
/// @param param1 flag of enum QSGNode__Flag
/// @param param2 bool
///
void q_sgbasicgeometrynode_set_flags2(void* self, int32_t param1, bool param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#dtor.QSGBasicGeometryNode)
///
/// Delete this object from C++ memory.
///
/// @param self QSGBasicGeometryNode*
///
void q_sgbasicgeometrynode_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html)

/// q_sggeometrynode_new constructs a new QSGGeometryNode object.
///
QSGGeometryNode* q_sggeometrynode_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setMaterial)
///
/// @param self QSGGeometryNode*
/// @param material QSGMaterial*
///
void q_sggeometrynode_set_material(void* self, void* material);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#material)
///
/// @param self QSGGeometryNode*
///
QSGMaterial* q_sggeometrynode_material(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setOpaqueMaterial)
///
/// @param self QSGGeometryNode*
/// @param material QSGMaterial*
///
void q_sggeometrynode_set_opaque_material(void* self, void* material);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#opaqueMaterial)
///
/// @param self QSGGeometryNode*
///
QSGMaterial* q_sggeometrynode_opaque_material(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#activeMaterial)
///
/// @param self QSGGeometryNode*
///
QSGMaterial* q_sggeometrynode_active_material(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setRenderOrder)
///
/// @param self QSGGeometryNode*
/// @param order int
///
void q_sggeometrynode_set_render_order(void* self, int order);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#renderOrder)
///
/// @param self QSGGeometryNode*
///
int32_t q_sggeometrynode_render_order(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setInheritedOpacity)
///
/// @param self QSGGeometryNode*
/// @param opacity double
///
void q_sggeometrynode_set_inherited_opacity(void* self, double opacity);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#inheritedOpacity)
///
/// @param self QSGGeometryNode*
///
double q_sggeometrynode_inherited_opacity(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setGeometry)
///
/// @param self QSGGeometryNode*
/// @param geometry QSGGeometry*
///
void q_sggeometrynode_set_geometry(void* self, void* geometry);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
///
/// @param self QSGGeometryNode*
///
const QSGGeometry* q_sggeometrynode_geometry(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
///
/// @param self QSGGeometryNode*
///
QSGGeometry* q_sggeometrynode_geometry2(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#matrix)
///
/// @param self QSGGeometryNode*
///
const QMatrix4x4* q_sggeometrynode_matrix(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#clipList)
///
/// @param self QSGGeometryNode*
///
const QSGClipNode* q_sggeometrynode_clip_list(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererMatrix)
///
/// @param self QSGGeometryNode*
/// @param m QMatrix4x4*
///
void q_sggeometrynode_set_renderer_matrix(void* self, void* m);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererClipList)
///
/// @param self QSGGeometryNode*
/// @param c QSGClipNode*
///
void q_sggeometrynode_set_renderer_clip_list(void* self, void* c);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#parent)
///
/// @param self QSGGeometryNode*
///
QSGNode* q_sggeometrynode_parent(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeChildNode)
///
/// @param self QSGGeometryNode*
/// @param node QSGNode*
///
void q_sggeometrynode_remove_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeAllChildNodes)
///
/// @param self QSGGeometryNode*
///
void q_sggeometrynode_remove_all_child_nodes(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#prependChildNode)
///
/// @param self QSGGeometryNode*
/// @param node QSGNode*
///
void q_sggeometrynode_prepend_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#appendChildNode)
///
/// @param self QSGGeometryNode*
/// @param node QSGNode*
///
void q_sggeometrynode_append_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeBefore)
///
/// @param self QSGGeometryNode*
/// @param node QSGNode*
/// @param before QSGNode*
///
void q_sggeometrynode_insert_child_node_before(void* self, void* node, void* before);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeAfter)
///
/// @param self QSGGeometryNode*
/// @param node QSGNode*
/// @param after QSGNode*
///
void q_sggeometrynode_insert_child_node_after(void* self, void* node, void* after);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#reparentChildNodesTo)
///
/// @param self QSGGeometryNode*
/// @param newParent QSGNode*
///
void q_sggeometrynode_reparent_child_nodes_to(void* self, void* newParent);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childCount)
///
/// @param self QSGGeometryNode*
///
int32_t q_sggeometrynode_child_count(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childAtIndex)
///
/// @param self QSGGeometryNode*
/// @param i int
///
QSGNode* q_sggeometrynode_child_at_index(void* self, int i);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#firstChild)
///
/// @param self QSGGeometryNode*
///
QSGNode* q_sggeometrynode_first_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#lastChild)
///
/// @param self QSGGeometryNode*
///
QSGNode* q_sggeometrynode_last_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#nextSibling)
///
/// @param self QSGGeometryNode*
///
QSGNode* q_sggeometrynode_next_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#previousSibling)
///
/// @param self QSGGeometryNode*
///
QSGNode* q_sggeometrynode_previous_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#type)
///
/// @param self QSGGeometryNode*
///
/// @return enum QSGNode__NodeType
///
int32_t q_sggeometrynode_type(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#clearDirty)
///
/// @param self QSGGeometryNode*
///
void q_sggeometrynode_clear_dirty(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#markDirty)
///
/// @param self QSGGeometryNode*
/// @param bits flag of enum QSGNode__DirtyStateBit
///
void q_sggeometrynode_mark_dirty(void* self, int32_t bits);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dirtyState)
///
/// @param self QSGGeometryNode*
///
/// @return flag of enum QSGNode__DirtyStateBit
///
int32_t q_sggeometrynode_dirty_state(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#flags)
///
/// @param self QSGGeometryNode*
///
/// @return flag of enum QSGNode__Flag
///
int32_t q_sggeometrynode_flags(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGGeometryNode*
/// @param param1 enum QSGNode__Flag
///
void q_sggeometrynode_set_flag(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGGeometryNode*
/// @param param1 flag of enum QSGNode__Flag
///
void q_sggeometrynode_set_flags(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGGeometryNode*
/// @param param1 enum QSGNode__Flag
/// @param param2 bool
///
void q_sggeometrynode_set_flag2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGGeometryNode*
/// @param param1 flag of enum QSGNode__Flag
/// @param param2 bool
///
void q_sggeometrynode_set_flags2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGGeometryNode*
///
bool q_sggeometrynode_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGGeometryNode*
///
bool q_sggeometrynode_super_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGGeometryNode*
/// @param callback bool func()
///
void q_sggeometrynode_on_is_subtree_blocked(void* self, bool (*callback)());

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGGeometryNode*
///
void q_sggeometrynode_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGGeometryNode*
///
void q_sggeometrynode_super_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGGeometryNode*
/// @param callback void func()
///
void q_sggeometrynode_on_preprocess(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#dtor.QSGGeometryNode)
///
/// Delete this object from C++ memory.
///
/// @param self QSGGeometryNode*
///
void q_sggeometrynode_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgclipnode.html)

/// q_sgclipnode_new constructs a new QSGClipNode object.
///
QSGClipNode* q_sgclipnode_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsgclipnode.html#setIsRectangular)
///
/// @param self QSGClipNode*
/// @param rectHint bool
///
void q_sgclipnode_set_is_rectangular(void* self, bool rectHint);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgclipnode.html#isRectangular)
///
/// @param self QSGClipNode*
///
bool q_sgclipnode_is_rectangular(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgclipnode.html#setClipRect)
///
/// @param self QSGClipNode*
/// @param clipRect QRectF*
///
void q_sgclipnode_set_clip_rect(void* self, void* clipRect);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgclipnode.html#clipRect)
///
/// @param self QSGClipNode*
///
QRectF* q_sgclipnode_clip_rect(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setGeometry)
///
/// @param self QSGClipNode*
/// @param geometry QSGGeometry*
///
void q_sgclipnode_set_geometry(void* self, void* geometry);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
///
/// @param self QSGClipNode*
///
const QSGGeometry* q_sgclipnode_geometry(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
///
/// @param self QSGClipNode*
///
QSGGeometry* q_sgclipnode_geometry2(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#matrix)
///
/// @param self QSGClipNode*
///
const QMatrix4x4* q_sgclipnode_matrix(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#clipList)
///
/// @param self QSGClipNode*
///
const QSGClipNode* q_sgclipnode_clip_list(void* self);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererMatrix)
///
/// @param self QSGClipNode*
/// @param m QMatrix4x4*
///
void q_sgclipnode_set_renderer_matrix(void* self, void* m);

/// Inherited from QSGBasicGeometryNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererClipList)
///
/// @param self QSGClipNode*
/// @param c QSGClipNode*
///
void q_sgclipnode_set_renderer_clip_list(void* self, void* c);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#parent)
///
/// @param self QSGClipNode*
///
QSGNode* q_sgclipnode_parent(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeChildNode)
///
/// @param self QSGClipNode*
/// @param node QSGNode*
///
void q_sgclipnode_remove_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeAllChildNodes)
///
/// @param self QSGClipNode*
///
void q_sgclipnode_remove_all_child_nodes(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#prependChildNode)
///
/// @param self QSGClipNode*
/// @param node QSGNode*
///
void q_sgclipnode_prepend_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#appendChildNode)
///
/// @param self QSGClipNode*
/// @param node QSGNode*
///
void q_sgclipnode_append_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeBefore)
///
/// @param self QSGClipNode*
/// @param node QSGNode*
/// @param before QSGNode*
///
void q_sgclipnode_insert_child_node_before(void* self, void* node, void* before);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeAfter)
///
/// @param self QSGClipNode*
/// @param node QSGNode*
/// @param after QSGNode*
///
void q_sgclipnode_insert_child_node_after(void* self, void* node, void* after);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#reparentChildNodesTo)
///
/// @param self QSGClipNode*
/// @param newParent QSGNode*
///
void q_sgclipnode_reparent_child_nodes_to(void* self, void* newParent);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childCount)
///
/// @param self QSGClipNode*
///
int32_t q_sgclipnode_child_count(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childAtIndex)
///
/// @param self QSGClipNode*
/// @param i int
///
QSGNode* q_sgclipnode_child_at_index(void* self, int i);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#firstChild)
///
/// @param self QSGClipNode*
///
QSGNode* q_sgclipnode_first_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#lastChild)
///
/// @param self QSGClipNode*
///
QSGNode* q_sgclipnode_last_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#nextSibling)
///
/// @param self QSGClipNode*
///
QSGNode* q_sgclipnode_next_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#previousSibling)
///
/// @param self QSGClipNode*
///
QSGNode* q_sgclipnode_previous_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#type)
///
/// @param self QSGClipNode*
///
/// @return enum QSGNode__NodeType
///
int32_t q_sgclipnode_type(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#clearDirty)
///
/// @param self QSGClipNode*
///
void q_sgclipnode_clear_dirty(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#markDirty)
///
/// @param self QSGClipNode*
/// @param bits flag of enum QSGNode__DirtyStateBit
///
void q_sgclipnode_mark_dirty(void* self, int32_t bits);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dirtyState)
///
/// @param self QSGClipNode*
///
/// @return flag of enum QSGNode__DirtyStateBit
///
int32_t q_sgclipnode_dirty_state(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#flags)
///
/// @param self QSGClipNode*
///
/// @return flag of enum QSGNode__Flag
///
int32_t q_sgclipnode_flags(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGClipNode*
/// @param param1 enum QSGNode__Flag
///
void q_sgclipnode_set_flag(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGClipNode*
/// @param param1 flag of enum QSGNode__Flag
///
void q_sgclipnode_set_flags(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGClipNode*
/// @param param1 enum QSGNode__Flag
/// @param param2 bool
///
void q_sgclipnode_set_flag2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGClipNode*
/// @param param1 flag of enum QSGNode__Flag
/// @param param2 bool
///
void q_sgclipnode_set_flags2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGClipNode*
///
bool q_sgclipnode_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGClipNode*
///
bool q_sgclipnode_super_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGClipNode*
/// @param callback bool func()
///
void q_sgclipnode_on_is_subtree_blocked(void* self, bool (*callback)());

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGClipNode*
///
void q_sgclipnode_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGClipNode*
///
void q_sgclipnode_super_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGClipNode*
/// @param callback void func()
///
void q_sgclipnode_on_preprocess(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgclipnode.html#dtor.QSGClipNode)
///
/// Delete this object from C++ memory.
///
/// @param self QSGClipNode*
///
void q_sgclipnode_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html)

/// q_sgtransformnode_new constructs a new QSGTransformNode object.
///
QSGTransformNode* q_sgtransformnode_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#setMatrix)
///
/// @param self QSGTransformNode*
/// @param matrix QMatrix4x4*
///
void q_sgtransformnode_set_matrix(void* self, void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#matrix)
///
/// @param self QSGTransformNode*
///
const QMatrix4x4* q_sgtransformnode_matrix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#setCombinedMatrix)
///
/// @param self QSGTransformNode*
/// @param matrix QMatrix4x4*
///
void q_sgtransformnode_set_combined_matrix(void* self, void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#combinedMatrix)
///
/// @param self QSGTransformNode*
///
const QMatrix4x4* q_sgtransformnode_combined_matrix(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#parent)
///
/// @param self QSGTransformNode*
///
QSGNode* q_sgtransformnode_parent(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeChildNode)
///
/// @param self QSGTransformNode*
/// @param node QSGNode*
///
void q_sgtransformnode_remove_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeAllChildNodes)
///
/// @param self QSGTransformNode*
///
void q_sgtransformnode_remove_all_child_nodes(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#prependChildNode)
///
/// @param self QSGTransformNode*
/// @param node QSGNode*
///
void q_sgtransformnode_prepend_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#appendChildNode)
///
/// @param self QSGTransformNode*
/// @param node QSGNode*
///
void q_sgtransformnode_append_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeBefore)
///
/// @param self QSGTransformNode*
/// @param node QSGNode*
/// @param before QSGNode*
///
void q_sgtransformnode_insert_child_node_before(void* self, void* node, void* before);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeAfter)
///
/// @param self QSGTransformNode*
/// @param node QSGNode*
/// @param after QSGNode*
///
void q_sgtransformnode_insert_child_node_after(void* self, void* node, void* after);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#reparentChildNodesTo)
///
/// @param self QSGTransformNode*
/// @param newParent QSGNode*
///
void q_sgtransformnode_reparent_child_nodes_to(void* self, void* newParent);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childCount)
///
/// @param self QSGTransformNode*
///
int32_t q_sgtransformnode_child_count(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childAtIndex)
///
/// @param self QSGTransformNode*
/// @param i int
///
QSGNode* q_sgtransformnode_child_at_index(void* self, int i);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#firstChild)
///
/// @param self QSGTransformNode*
///
QSGNode* q_sgtransformnode_first_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#lastChild)
///
/// @param self QSGTransformNode*
///
QSGNode* q_sgtransformnode_last_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#nextSibling)
///
/// @param self QSGTransformNode*
///
QSGNode* q_sgtransformnode_next_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#previousSibling)
///
/// @param self QSGTransformNode*
///
QSGNode* q_sgtransformnode_previous_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#type)
///
/// @param self QSGTransformNode*
///
/// @return enum QSGNode__NodeType
///
int32_t q_sgtransformnode_type(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#clearDirty)
///
/// @param self QSGTransformNode*
///
void q_sgtransformnode_clear_dirty(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#markDirty)
///
/// @param self QSGTransformNode*
/// @param bits flag of enum QSGNode__DirtyStateBit
///
void q_sgtransformnode_mark_dirty(void* self, int32_t bits);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dirtyState)
///
/// @param self QSGTransformNode*
///
/// @return flag of enum QSGNode__DirtyStateBit
///
int32_t q_sgtransformnode_dirty_state(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#flags)
///
/// @param self QSGTransformNode*
///
/// @return flag of enum QSGNode__Flag
///
int32_t q_sgtransformnode_flags(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGTransformNode*
/// @param param1 enum QSGNode__Flag
///
void q_sgtransformnode_set_flag(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGTransformNode*
/// @param param1 flag of enum QSGNode__Flag
///
void q_sgtransformnode_set_flags(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGTransformNode*
/// @param param1 enum QSGNode__Flag
/// @param param2 bool
///
void q_sgtransformnode_set_flag2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGTransformNode*
/// @param param1 flag of enum QSGNode__Flag
/// @param param2 bool
///
void q_sgtransformnode_set_flags2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGTransformNode*
///
bool q_sgtransformnode_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGTransformNode*
///
bool q_sgtransformnode_super_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGTransformNode*
/// @param callback bool func()
///
void q_sgtransformnode_on_is_subtree_blocked(void* self, bool (*callback)());

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGTransformNode*
///
void q_sgtransformnode_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGTransformNode*
///
void q_sgtransformnode_super_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGTransformNode*
/// @param callback void func()
///
void q_sgtransformnode_on_preprocess(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#dtor.QSGTransformNode)
///
/// Delete this object from C++ memory.
///
/// @param self QSGTransformNode*
///
void q_sgtransformnode_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrootnode.html)

/// q_sgrootnode_new constructs a new QSGRootNode object.
///
QSGRootNode* q_sgrootnode_new();

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#parent)
///
/// @param self QSGRootNode*
///
QSGNode* q_sgrootnode_parent(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeChildNode)
///
/// @param self QSGRootNode*
/// @param node QSGNode*
///
void q_sgrootnode_remove_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeAllChildNodes)
///
/// @param self QSGRootNode*
///
void q_sgrootnode_remove_all_child_nodes(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#prependChildNode)
///
/// @param self QSGRootNode*
/// @param node QSGNode*
///
void q_sgrootnode_prepend_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#appendChildNode)
///
/// @param self QSGRootNode*
/// @param node QSGNode*
///
void q_sgrootnode_append_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeBefore)
///
/// @param self QSGRootNode*
/// @param node QSGNode*
/// @param before QSGNode*
///
void q_sgrootnode_insert_child_node_before(void* self, void* node, void* before);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeAfter)
///
/// @param self QSGRootNode*
/// @param node QSGNode*
/// @param after QSGNode*
///
void q_sgrootnode_insert_child_node_after(void* self, void* node, void* after);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#reparentChildNodesTo)
///
/// @param self QSGRootNode*
/// @param newParent QSGNode*
///
void q_sgrootnode_reparent_child_nodes_to(void* self, void* newParent);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childCount)
///
/// @param self QSGRootNode*
///
int32_t q_sgrootnode_child_count(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childAtIndex)
///
/// @param self QSGRootNode*
/// @param i int
///
QSGNode* q_sgrootnode_child_at_index(void* self, int i);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#firstChild)
///
/// @param self QSGRootNode*
///
QSGNode* q_sgrootnode_first_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#lastChild)
///
/// @param self QSGRootNode*
///
QSGNode* q_sgrootnode_last_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#nextSibling)
///
/// @param self QSGRootNode*
///
QSGNode* q_sgrootnode_next_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#previousSibling)
///
/// @param self QSGRootNode*
///
QSGNode* q_sgrootnode_previous_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#type)
///
/// @param self QSGRootNode*
///
/// @return enum QSGNode__NodeType
///
int32_t q_sgrootnode_type(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#clearDirty)
///
/// @param self QSGRootNode*
///
void q_sgrootnode_clear_dirty(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#markDirty)
///
/// @param self QSGRootNode*
/// @param bits flag of enum QSGNode__DirtyStateBit
///
void q_sgrootnode_mark_dirty(void* self, int32_t bits);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dirtyState)
///
/// @param self QSGRootNode*
///
/// @return flag of enum QSGNode__DirtyStateBit
///
int32_t q_sgrootnode_dirty_state(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#flags)
///
/// @param self QSGRootNode*
///
/// @return flag of enum QSGNode__Flag
///
int32_t q_sgrootnode_flags(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGRootNode*
/// @param param1 enum QSGNode__Flag
///
void q_sgrootnode_set_flag(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGRootNode*
/// @param param1 flag of enum QSGNode__Flag
///
void q_sgrootnode_set_flags(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGRootNode*
/// @param param1 enum QSGNode__Flag
/// @param param2 bool
///
void q_sgrootnode_set_flag2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGRootNode*
/// @param param1 flag of enum QSGNode__Flag
/// @param param2 bool
///
void q_sgrootnode_set_flags2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGRootNode*
///
bool q_sgrootnode_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGRootNode*
///
bool q_sgrootnode_super_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGRootNode*
/// @param callback bool func()
///
void q_sgrootnode_on_is_subtree_blocked(void* self, bool (*callback)());

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGRootNode*
///
void q_sgrootnode_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGRootNode*
///
void q_sgrootnode_super_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGRootNode*
/// @param callback void func()
///
void q_sgrootnode_on_preprocess(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrootnode.html#dtor.QSGRootNode)
///
/// Delete this object from C++ memory.
///
/// @param self QSGRootNode*
///
void q_sgrootnode_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html)

/// q_sgopacitynode_new constructs a new QSGOpacityNode object.
///
QSGOpacityNode* q_sgopacitynode_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html#setOpacity)
///
/// @param self QSGOpacityNode*
/// @param opacity double
///
void q_sgopacitynode_set_opacity(void* self, double opacity);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html#opacity)
///
/// @param self QSGOpacityNode*
///
double q_sgopacitynode_opacity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html#setCombinedOpacity)
///
/// @param self QSGOpacityNode*
/// @param opacity double
///
void q_sgopacitynode_set_combined_opacity(void* self, double opacity);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html#combinedOpacity)
///
/// @param self QSGOpacityNode*
///
double q_sgopacitynode_combined_opacity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html#isSubtreeBlocked)
///
/// @param self QSGOpacityNode*
///
bool q_sgopacitynode_is_subtree_blocked(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html#isSubtreeBlocked)
///
/// Allows for overriding the related default method
///
/// @param self QSGOpacityNode*
/// @param callback bool func()
///
void q_sgopacitynode_on_is_subtree_blocked(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html#isSubtreeBlocked)
///
/// Base class method implementation
///
/// @param self QSGOpacityNode*
///
bool q_sgopacitynode_super_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#parent)
///
/// @param self QSGOpacityNode*
///
QSGNode* q_sgopacitynode_parent(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeChildNode)
///
/// @param self QSGOpacityNode*
/// @param node QSGNode*
///
void q_sgopacitynode_remove_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeAllChildNodes)
///
/// @param self QSGOpacityNode*
///
void q_sgopacitynode_remove_all_child_nodes(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#prependChildNode)
///
/// @param self QSGOpacityNode*
/// @param node QSGNode*
///
void q_sgopacitynode_prepend_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#appendChildNode)
///
/// @param self QSGOpacityNode*
/// @param node QSGNode*
///
void q_sgopacitynode_append_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeBefore)
///
/// @param self QSGOpacityNode*
/// @param node QSGNode*
/// @param before QSGNode*
///
void q_sgopacitynode_insert_child_node_before(void* self, void* node, void* before);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeAfter)
///
/// @param self QSGOpacityNode*
/// @param node QSGNode*
/// @param after QSGNode*
///
void q_sgopacitynode_insert_child_node_after(void* self, void* node, void* after);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#reparentChildNodesTo)
///
/// @param self QSGOpacityNode*
/// @param newParent QSGNode*
///
void q_sgopacitynode_reparent_child_nodes_to(void* self, void* newParent);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childCount)
///
/// @param self QSGOpacityNode*
///
int32_t q_sgopacitynode_child_count(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childAtIndex)
///
/// @param self QSGOpacityNode*
/// @param i int
///
QSGNode* q_sgopacitynode_child_at_index(void* self, int i);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#firstChild)
///
/// @param self QSGOpacityNode*
///
QSGNode* q_sgopacitynode_first_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#lastChild)
///
/// @param self QSGOpacityNode*
///
QSGNode* q_sgopacitynode_last_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#nextSibling)
///
/// @param self QSGOpacityNode*
///
QSGNode* q_sgopacitynode_next_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#previousSibling)
///
/// @param self QSGOpacityNode*
///
QSGNode* q_sgopacitynode_previous_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#type)
///
/// @param self QSGOpacityNode*
///
/// @return enum QSGNode__NodeType
///
int32_t q_sgopacitynode_type(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#clearDirty)
///
/// @param self QSGOpacityNode*
///
void q_sgopacitynode_clear_dirty(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#markDirty)
///
/// @param self QSGOpacityNode*
/// @param bits flag of enum QSGNode__DirtyStateBit
///
void q_sgopacitynode_mark_dirty(void* self, int32_t bits);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dirtyState)
///
/// @param self QSGOpacityNode*
///
/// @return flag of enum QSGNode__DirtyStateBit
///
int32_t q_sgopacitynode_dirty_state(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#flags)
///
/// @param self QSGOpacityNode*
///
/// @return flag of enum QSGNode__Flag
///
int32_t q_sgopacitynode_flags(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGOpacityNode*
/// @param param1 enum QSGNode__Flag
///
void q_sgopacitynode_set_flag(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGOpacityNode*
/// @param param1 flag of enum QSGNode__Flag
///
void q_sgopacitynode_set_flags(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGOpacityNode*
/// @param param1 enum QSGNode__Flag
/// @param param2 bool
///
void q_sgopacitynode_set_flag2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGOpacityNode*
/// @param param1 flag of enum QSGNode__Flag
/// @param param2 bool
///
void q_sgopacitynode_set_flags2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGOpacityNode*
///
void q_sgopacitynode_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGOpacityNode*
///
void q_sgopacitynode_super_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGOpacityNode*
/// @param callback void func()
///
void q_sgopacitynode_on_preprocess(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html#dtor.QSGOpacityNode)
///
/// Delete this object from C++ memory.
///
/// @param self QSGOpacityNode*
///
void q_sgopacitynode_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html)

/// q_sgnodevisitor_new constructs a new QSGNodeVisitor object.
///
QSGNodeVisitor* q_sgnodevisitor_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterTransformNode)
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGTransformNode*
///
void q_sgnodevisitor_enter_transform_node(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterTransformNode)
///
/// Allows for overriding the related default method
///
/// @param self QSGNodeVisitor*
/// @param callback void func(QSGNodeVisitor* self, QSGTransformNode* param1)
///
void q_sgnodevisitor_on_enter_transform_node(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterTransformNode)
///
/// Base class method implementation
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGTransformNode*
///
void q_sgnodevisitor_super_enter_transform_node(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveTransformNode)
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGTransformNode*
///
void q_sgnodevisitor_leave_transform_node(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveTransformNode)
///
/// Allows for overriding the related default method
///
/// @param self QSGNodeVisitor*
/// @param callback void func(QSGNodeVisitor* self, QSGTransformNode* param1)
///
void q_sgnodevisitor_on_leave_transform_node(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveTransformNode)
///
/// Base class method implementation
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGTransformNode*
///
void q_sgnodevisitor_super_leave_transform_node(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterClipNode)
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGClipNode*
///
void q_sgnodevisitor_enter_clip_node(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterClipNode)
///
/// Allows for overriding the related default method
///
/// @param self QSGNodeVisitor*
/// @param callback void func(QSGNodeVisitor* self, QSGClipNode* param1)
///
void q_sgnodevisitor_on_enter_clip_node(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterClipNode)
///
/// Base class method implementation
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGClipNode*
///
void q_sgnodevisitor_super_enter_clip_node(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveClipNode)
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGClipNode*
///
void q_sgnodevisitor_leave_clip_node(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveClipNode)
///
/// Allows for overriding the related default method
///
/// @param self QSGNodeVisitor*
/// @param callback void func(QSGNodeVisitor* self, QSGClipNode* param1)
///
void q_sgnodevisitor_on_leave_clip_node(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveClipNode)
///
/// Base class method implementation
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGClipNode*
///
void q_sgnodevisitor_super_leave_clip_node(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterGeometryNode)
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGGeometryNode*
///
void q_sgnodevisitor_enter_geometry_node(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterGeometryNode)
///
/// Allows for overriding the related default method
///
/// @param self QSGNodeVisitor*
/// @param callback void func(QSGNodeVisitor* self, QSGGeometryNode* param1)
///
void q_sgnodevisitor_on_enter_geometry_node(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterGeometryNode)
///
/// Base class method implementation
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGGeometryNode*
///
void q_sgnodevisitor_super_enter_geometry_node(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveGeometryNode)
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGGeometryNode*
///
void q_sgnodevisitor_leave_geometry_node(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveGeometryNode)
///
/// Allows for overriding the related default method
///
/// @param self QSGNodeVisitor*
/// @param callback void func(QSGNodeVisitor* self, QSGGeometryNode* param1)
///
void q_sgnodevisitor_on_leave_geometry_node(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveGeometryNode)
///
/// Base class method implementation
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGGeometryNode*
///
void q_sgnodevisitor_super_leave_geometry_node(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterOpacityNode)
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGOpacityNode*
///
void q_sgnodevisitor_enter_opacity_node(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterOpacityNode)
///
/// Allows for overriding the related default method
///
/// @param self QSGNodeVisitor*
/// @param callback void func(QSGNodeVisitor* self, QSGOpacityNode* param1)
///
void q_sgnodevisitor_on_enter_opacity_node(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterOpacityNode)
///
/// Base class method implementation
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGOpacityNode*
///
void q_sgnodevisitor_super_enter_opacity_node(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveOpacityNode)
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGOpacityNode*
///
void q_sgnodevisitor_leave_opacity_node(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveOpacityNode)
///
/// Allows for overriding the related default method
///
/// @param self QSGNodeVisitor*
/// @param callback void func(QSGNodeVisitor* self, QSGOpacityNode* param1)
///
void q_sgnodevisitor_on_leave_opacity_node(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveOpacityNode)
///
/// Base class method implementation
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGOpacityNode*
///
void q_sgnodevisitor_super_leave_opacity_node(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#visitNode)
///
/// @param self QSGNodeVisitor*
/// @param n QSGNode*
///
void q_sgnodevisitor_visit_node(void* self, void* n);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#visitNode)
///
/// Allows for overriding the related default method
///
/// @param self QSGNodeVisitor*
/// @param callback void func(QSGNodeVisitor* self, QSGNode* n)
///
void q_sgnodevisitor_on_visit_node(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#visitNode)
///
/// Base class method implementation
///
/// @param self QSGNodeVisitor*
/// @param n QSGNode*
///
void q_sgnodevisitor_super_visit_node(void* self, void* n);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#visitChildren)
///
/// @param self QSGNodeVisitor*
/// @param n QSGNode*
///
void q_sgnodevisitor_visit_children(void* self, void* n);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#visitChildren)
///
/// Allows for overriding the related default method
///
/// @param self QSGNodeVisitor*
/// @param callback void func(QSGNodeVisitor* self, QSGNode* n)
///
void q_sgnodevisitor_on_visit_children(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#visitChildren)
///
/// Base class method implementation
///
/// @param self QSGNodeVisitor*
/// @param n QSGNode*
///
void q_sgnodevisitor_super_visit_children(void* self, void* n);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#operator-eq)
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGNodeVisitor*
///
void q_sgnodevisitor_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#operator-eq)
///
/// Allows for overriding the related default method
///
/// @param self QSGNodeVisitor*
/// @param callback void func(QSGNodeVisitor* self, QSGNodeVisitor* param1)
///
void q_sgnodevisitor_on_operator_assign(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#operator-eq)
///
/// Base class method implementation
///
/// @param self QSGNodeVisitor*
/// @param param1 QSGNodeVisitor*
///
void q_sgnodevisitor_super_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#dtor.QSGNodeVisitor)
///
/// Delete this object from C++ memory.
///
/// @param self QSGNodeVisitor*
///
void q_sgnodevisitor_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#public-types)

typedef enum {
    QSGNODE_NODETYPE_BASICNODETYPE = 0,
    QSGNODE_NODETYPE_GEOMETRYNODETYPE = 1,
    QSGNODE_NODETYPE_TRANSFORMNODETYPE = 2,
    QSGNODE_NODETYPE_CLIPNODETYPE = 3,
    QSGNODE_NODETYPE_OPACITYNODETYPE = 4,
    QSGNODE_NODETYPE_ROOTNODETYPE = 5,
    QSGNODE_NODETYPE_RENDERNODETYPE = 6
} QSGNode__NodeType;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#public-types)

typedef enum {
    QSGNODE_FLAG_OWNEDBYPARENT = 1,
    QSGNODE_FLAG_USEPREPROCESS = 2,
    QSGNODE_FLAG_OWNSGEOMETRY = 65536,
    QSGNODE_FLAG_OWNSMATERIAL = 131072,
    QSGNODE_FLAG_OWNSOPAQUEMATERIAL = 262144,
    QSGNODE_FLAG_ISVISITABLENODE = 16777216
} QSGNode__Flag;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#public-types)

typedef enum {
    QSGNODE_DIRTYSTATEBIT_DIRTYSUBTREEBLOCKED = 128,
    QSGNODE_DIRTYSTATEBIT_DIRTYMATRIX = 256,
    QSGNODE_DIRTYSTATEBIT_DIRTYNODEADDED = 1024,
    QSGNODE_DIRTYSTATEBIT_DIRTYNODEREMOVED = 2048,
    QSGNODE_DIRTYSTATEBIT_DIRTYGEOMETRY = 4096,
    QSGNODE_DIRTYSTATEBIT_DIRTYMATERIAL = 8192,
    QSGNODE_DIRTYSTATEBIT_DIRTYOPACITY = 16384,
    QSGNODE_DIRTYSTATEBIT_DIRTYFORCEUPDATE = 32768,
    QSGNODE_DIRTYSTATEBIT_DIRTYUSEPREPROCESS = 2,
    QSGNODE_DIRTYSTATEBIT_DIRTYPROPAGATIONMASK = 50432
} QSGNode__DirtyStateBit;

#endif
