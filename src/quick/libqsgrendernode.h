#pragma once
#ifndef QUICK_LIBQSGRENDERNODE_H
#define QUICK_LIBQSGRENDERNODE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html)

/// q_sgrendernode_new constructs a new QSGRenderNode object.
///
QSGRenderNode* q_sgrendernode_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#changedStates)
///
/// @param self QSGRenderNode*
///
/// @return flag of enum QSGRenderNode__StateFlag
///
int32_t q_sgrendernode_changed_states(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#changedStates)
///
/// Allows for overriding the related default method
///
/// @param self QSGRenderNode*
/// @param callback int32_t func()
///
void q_sgrendernode_on_changed_states(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#changedStates)
///
/// Base class method implementation
///
/// @param self QSGRenderNode*
///
/// @return flag of enum QSGRenderNode__StateFlag
///
int32_t q_sgrendernode_super_changed_states(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#prepare)
///
/// @param self QSGRenderNode*
///
void q_sgrendernode_prepare(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#prepare)
///
/// Allows for overriding the related default method
///
/// @param self QSGRenderNode*
/// @param callback void func()
///
void q_sgrendernode_on_prepare(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#prepare)
///
/// Base class method implementation
///
/// @param self QSGRenderNode*
///
void q_sgrendernode_super_prepare(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#render)
///
/// @param self QSGRenderNode*
/// @param state QSGRenderNode__RenderState*
///
void q_sgrendernode_render(void* self, void* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#render)
///
/// Allows for overriding the related default method
///
/// @param self QSGRenderNode*
/// @param callback void func(QSGRenderNode* self, QSGRenderNode__RenderState* state)
///
void q_sgrendernode_on_render(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#render)
///
/// Base class method implementation
///
/// @param self QSGRenderNode*
/// @param state QSGRenderNode__RenderState*
///
void q_sgrendernode_super_render(void* self, void* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#releaseResources)
///
/// @param self QSGRenderNode*
///
void q_sgrendernode_release_resources(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#releaseResources)
///
/// Allows for overriding the related default method
///
/// @param self QSGRenderNode*
/// @param callback void func()
///
void q_sgrendernode_on_release_resources(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#releaseResources)
///
/// Base class method implementation
///
/// @param self QSGRenderNode*
///
void q_sgrendernode_super_release_resources(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#flags)
///
/// @param self QSGRenderNode*
///
/// @return flag of enum QSGRenderNode__RenderingFlag
///
int32_t q_sgrendernode_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self QSGRenderNode*
/// @param callback int32_t func()
///
void q_sgrendernode_on_flags(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#flags)
///
/// Base class method implementation
///
/// @param self QSGRenderNode*
///
/// @return flag of enum QSGRenderNode__RenderingFlag
///
int32_t q_sgrendernode_super_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#rect)
///
/// @param self QSGRenderNode*
///
QRectF* q_sgrendernode_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#rect)
///
/// Allows for overriding the related default method
///
/// @param self QSGRenderNode*
/// @param callback QRectF* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_sgrendernode_on_rect(void* self, QRectF* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#rect)
///
/// Base class method implementation
///
/// @param self QSGRenderNode*
///
QRectF* q_sgrendernode_super_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#projectionMatrix)
///
/// @param self QSGRenderNode*
///
const QMatrix4x4* q_sgrendernode_projection_matrix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#projectionMatrix)
///
/// @param self QSGRenderNode*
/// @param index intptr_t
///
const QMatrix4x4* q_sgrendernode_projection_matrix2(void* self, intptr_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#matrix)
///
/// @param self QSGRenderNode*
///
const QMatrix4x4* q_sgrendernode_matrix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#clipList)
///
/// @param self QSGRenderNode*
///
const QSGClipNode* q_sgrendernode_clip_list(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#inheritedOpacity)
///
/// @param self QSGRenderNode*
///
double q_sgrendernode_inherited_opacity(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#parent)
///
/// @param self QSGRenderNode*
///
QSGNode* q_sgrendernode_parent(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeChildNode)
///
/// @param self QSGRenderNode*
/// @param node QSGNode*
///
void q_sgrendernode_remove_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeAllChildNodes)
///
/// @param self QSGRenderNode*
///
void q_sgrendernode_remove_all_child_nodes(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#prependChildNode)
///
/// @param self QSGRenderNode*
/// @param node QSGNode*
///
void q_sgrendernode_prepend_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#appendChildNode)
///
/// @param self QSGRenderNode*
/// @param node QSGNode*
///
void q_sgrendernode_append_child_node(void* self, void* node);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeBefore)
///
/// @param self QSGRenderNode*
/// @param node QSGNode*
/// @param before QSGNode*
///
void q_sgrendernode_insert_child_node_before(void* self, void* node, void* before);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeAfter)
///
/// @param self QSGRenderNode*
/// @param node QSGNode*
/// @param after QSGNode*
///
void q_sgrendernode_insert_child_node_after(void* self, void* node, void* after);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#reparentChildNodesTo)
///
/// @param self QSGRenderNode*
/// @param newParent QSGNode*
///
void q_sgrendernode_reparent_child_nodes_to(void* self, void* newParent);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childCount)
///
/// @param self QSGRenderNode*
///
int32_t q_sgrendernode_child_count(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childAtIndex)
///
/// @param self QSGRenderNode*
/// @param i int
///
QSGNode* q_sgrendernode_child_at_index(void* self, int i);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#firstChild)
///
/// @param self QSGRenderNode*
///
QSGNode* q_sgrendernode_first_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#lastChild)
///
/// @param self QSGRenderNode*
///
QSGNode* q_sgrendernode_last_child(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#nextSibling)
///
/// @param self QSGRenderNode*
///
QSGNode* q_sgrendernode_next_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#previousSibling)
///
/// @param self QSGRenderNode*
///
QSGNode* q_sgrendernode_previous_sibling(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#type)
///
/// @param self QSGRenderNode*
///
/// @return enum QSGNode__NodeType
///
int32_t q_sgrendernode_type(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#clearDirty)
///
/// @param self QSGRenderNode*
///
void q_sgrendernode_clear_dirty(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#markDirty)
///
/// @param self QSGRenderNode*
/// @param bits flag of enum QSGNode__DirtyStateBit
///
void q_sgrendernode_mark_dirty(void* self, int32_t bits);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dirtyState)
///
/// @param self QSGRenderNode*
///
/// @return flag of enum QSGNode__DirtyStateBit
///
int32_t q_sgrendernode_dirty_state(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGRenderNode*
/// @param param1 enum QSGNode__Flag
///
void q_sgrendernode_set_flag(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGRenderNode*
/// @param param1 flag of enum QSGNode__Flag
///
void q_sgrendernode_set_flags(void* self, int32_t param1);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
///
/// @param self QSGRenderNode*
/// @param param1 enum QSGNode__Flag
/// @param param2 bool
///
void q_sgrendernode_set_flag2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
///
/// @param self QSGRenderNode*
/// @param param1 flag of enum QSGNode__Flag
/// @param param2 bool
///
void q_sgrendernode_set_flags2(void* self, int32_t param1, bool param2);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGRenderNode*
///
bool q_sgrendernode_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGRenderNode*
///
bool q_sgrendernode_super_is_subtree_blocked(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGRenderNode*
/// @param callback bool func()
///
void q_sgrendernode_on_is_subtree_blocked(void* self, bool (*callback)());

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGRenderNode*
///
void q_sgrendernode_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGRenderNode*
///
void q_sgrendernode_super_preprocess(void* self);

/// Inherited from QSGNode
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGRenderNode*
/// @param callback void func()
///
void q_sgrendernode_on_preprocess(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#dtor.QSGRenderNode)
///
/// Delete this object from C++ memory.
///
/// @param self QSGRenderNode*
///
void q_sgrendernode_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html#projectionMatrix)
///
/// @param self QSGRenderNode__RenderState*
///
const QMatrix4x4* q_sgrendernode__renderstate_projection_matrix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html#scissorRect)
///
/// @param self QSGRenderNode__RenderState*
///
QRect* q_sgrendernode__renderstate_scissor_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html#scissorEnabled)
///
/// @param self QSGRenderNode__RenderState*
///
bool q_sgrendernode__renderstate_scissor_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html#stencilValue)
///
/// @param self QSGRenderNode__RenderState*
///
int32_t q_sgrendernode__renderstate_stencil_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html#stencilEnabled)
///
/// @param self QSGRenderNode__RenderState*
///
bool q_sgrendernode__renderstate_stencil_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html#clipRegion)
///
/// @param self QSGRenderNode__RenderState*
///
const QRegion* q_sgrendernode__renderstate_clip_region(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html#get)
///
/// @param self QSGRenderNode__RenderState*
/// @param state const char*
///
void* q_sgrendernode__renderstate_get(void* self, const char* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html#operator-eq)
///
/// @param self QSGRenderNode__RenderState*
/// @param param1 QSGRenderNode__RenderState*
///
void q_sgrendernode__renderstate_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self QSGRenderNode__RenderState*
///
void q_sgrendernode__renderstate_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#public-types)

typedef enum {
    QSGRENDERNODE_STATEFLAG_DEPTHSTATE = 1,
    QSGRENDERNODE_STATEFLAG_STENCILSTATE = 2,
    QSGRENDERNODE_STATEFLAG_SCISSORSTATE = 4,
    QSGRENDERNODE_STATEFLAG_COLORSTATE = 8,
    QSGRENDERNODE_STATEFLAG_BLENDSTATE = 16,
    QSGRENDERNODE_STATEFLAG_CULLSTATE = 32,
    QSGRENDERNODE_STATEFLAG_VIEWPORTSTATE = 64,
    QSGRENDERNODE_STATEFLAG_RENDERTARGETSTATE = 128
} QSGRenderNode__StateFlag;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#public-types)

typedef enum {
    QSGRENDERNODE_RENDERINGFLAG_BOUNDEDRECTRENDERING = 1,
    QSGRENDERNODE_RENDERINGFLAG_DEPTHAWARERENDERING = 2,
    QSGRENDERNODE_RENDERINGFLAG_OPAQUERENDERING = 4,
    QSGRENDERNODE_RENDERINGFLAG_NOEXTERNALRENDERING = 8
} QSGRenderNode__RenderingFlag;

#endif
