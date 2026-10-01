#pragma once
#ifndef LIBQMETACONTAINER_H
#define LIBQMETACONTAINER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html)

/// q_metacontainer_new constructs a new QMetaContainer object.
///
QMetaContainer* q_metacontainer_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html)

/// q_metacontainer_new2 constructs a new QMetaContainer object.
///
/// @param other QMetaContainer*
///
QMetaContainer* q_metacontainer_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html)

/// q_metacontainer_new3 constructs a new QMetaContainer object and invalidates the source QMetaContainer object.
///
/// @param other QMetaContainer*
///
QMetaContainer* q_metacontainer_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html)

/// q_metacontainer_new4 constructs a new QMetaContainer object.
///
/// @param param1 QMetaContainer*
///
QMetaContainer* q_metacontainer_new4(const void* param1);

/// q_metacontainer_copy_assign shallow copies `other` into `self`.
///
/// @param self QMetaContainer*
/// @param other QMetaContainer*
///
void q_metacontainer_copy_assign(void* self, void* other);

/// q_metacontainer_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMetaContainer*
/// @param other QMetaContainer*
///
void q_metacontainer_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
///
/// @param self const QMetaContainer*
///
bool q_metacontainer_has_input_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
///
/// @param self const QMetaContainer*
///
bool q_metacontainer_has_forward_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
///
/// @param self const QMetaContainer*
///
bool q_metacontainer_has_bidirectional_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
///
/// @param self const QMetaContainer*
///
bool q_metacontainer_has_random_access_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
///
/// @param self const QMetaContainer*
///
bool q_metacontainer_has_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#size)
///
/// @param self const QMetaContainer*
/// @param container void*
///
intptr_t q_metacontainer_size(const void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
///
/// @param self const QMetaContainer*
///
bool q_metacontainer_can_clear(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
///
/// @param self const QMetaContainer*
/// @param container void*
///
void q_metacontainer_clear(const void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
///
/// @param self const QMetaContainer*
///
bool q_metacontainer_has_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
///
/// @param self const QMetaContainer*
/// @param container void*
///
void* q_metacontainer_begin(const void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#end)
///
/// @param self const QMetaContainer*
/// @param container void*
///
void* q_metacontainer_end(const void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
///
/// @param self const QMetaContainer*
/// @param iterator void*
///
void q_metacontainer_destroy_iterator(const void* self, void* iterator);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
///
/// @param self const QMetaContainer*
/// @param i void*
/// @param j void*
///
bool q_metacontainer_compare_iterator(const void* self, void* i, void* j);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
///
/// @param self const QMetaContainer*
/// @param target void*
/// @param source void*
///
void q_metacontainer_copy_iterator(const void* self, void* target, void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
///
/// @param self const QMetaContainer*
/// @param iterator void*
/// @param step intptr_t
///
void q_metacontainer_advance_iterator(const void* self, void* iterator, intptr_t step);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
///
/// @param self const QMetaContainer*
/// @param i void*
/// @param j void*
///
intptr_t q_metacontainer_diff_iterator(const void* self, void* i, void* j);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
///
/// @param self const QMetaContainer*
///
bool q_metacontainer_has_const_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
///
/// @param self const QMetaContainer*
/// @param container void*
///
void* q_metacontainer_const_begin(const void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
///
/// @param self const QMetaContainer*
/// @param container void*
///
void* q_metacontainer_const_end(const void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
///
/// @param self const QMetaContainer*
/// @param iterator void*
///
void q_metacontainer_destroy_const_iterator(const void* self, void* iterator);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
///
/// @param self const QMetaContainer*
/// @param i void*
/// @param j void*
///
bool q_metacontainer_compare_const_iterator(const void* self, void* i, void* j);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
///
/// @param self const QMetaContainer*
/// @param target void*
/// @param source void*
///
void q_metacontainer_copy_const_iterator(const void* self, void* target, void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
///
/// @param self const QMetaContainer*
/// @param iterator void*
/// @param step intptr_t
///
void q_metacontainer_advance_const_iterator(const void* self, void* iterator, intptr_t step);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
///
/// @param self const QMetaContainer*
/// @param i void*
/// @param j void*
///
intptr_t q_metacontainer_diff_const_iterator(const void* self, void* i, void* j);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#dtor.QMetaContainer)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaContainer*
///
void q_metacontainer_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html)

/// q_metasequence_new constructs a new QMetaSequence object.
///
QMetaSequence* q_metasequence_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html)

/// q_metasequence_new2 constructs a new QMetaSequence object.
///
/// @param other QMetaSequence*
///
QMetaSequence* q_metasequence_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html)

/// q_metasequence_new3 constructs a new QMetaSequence object and invalidates the source QMetaSequence object.
///
/// @param other QMetaSequence*
///
QMetaSequence* q_metasequence_new3(void* other);

/// q_metasequence_copy_assign shallow copies `other` into `self`.
///
/// @param self QMetaSequence*
/// @param other QMetaSequence*
///
void q_metasequence_copy_assign(void* self, void* other);

/// q_metasequence_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMetaSequence*
/// @param other QMetaSequence*
///
void q_metasequence_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#valueMetaType)
///
/// @param self const QMetaSequence*
///
QMetaType* q_metasequence_value_meta_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#isSortable)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_is_sortable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canAddValueAtBegin)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_can_add_value_at_begin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#addValueAtBegin)
///
/// @param self const QMetaSequence*
/// @param container void*
/// @param value void*
///
void q_metasequence_add_value_at_begin(const void* self, void* container, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canAddValueAtEnd)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_can_add_value_at_end(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#addValueAtEnd)
///
/// @param self const QMetaSequence*
/// @param container void*
/// @param value void*
///
void q_metasequence_add_value_at_end(const void* self, void* container, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValueAtBegin)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_can_remove_value_at_begin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#removeValueAtBegin)
///
/// @param self const QMetaSequence*
/// @param container void*
///
void q_metasequence_remove_value_at_begin(const void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValueAtEnd)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_can_remove_value_at_end(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#removeValueAtEnd)
///
/// @param self const QMetaSequence*
/// @param container void*
///
void q_metasequence_remove_value_at_end(const void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtIndex)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_can_get_value_at_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#valueAtIndex)
///
/// @param self const QMetaSequence*
/// @param container void*
/// @param index intptr_t
/// @param result void*
///
void q_metasequence_value_at_index(const void* self, void* container, intptr_t index, void* result);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canSetValueAtIndex)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_can_set_value_at_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#setValueAtIndex)
///
/// @param self const QMetaSequence*
/// @param container void*
/// @param index intptr_t
/// @param value void*
///
void q_metasequence_set_value_at_index(const void* self, void* container, intptr_t index, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canAddValue)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_can_add_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#addValue)
///
/// @param self const QMetaSequence*
/// @param container void*
/// @param value void*
///
void q_metasequence_add_value(const void* self, void* container, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValue)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_can_remove_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#removeValue)
///
/// @param self const QMetaSequence*
/// @param container void*
///
void q_metasequence_remove_value(const void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtIterator)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_can_get_value_at_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#valueAtIterator)
///
/// @param self const QMetaSequence*
/// @param iterator void*
/// @param result void*
///
void q_metasequence_value_at_iterator(const void* self, void* iterator, void* result);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canSetValueAtIterator)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_can_set_value_at_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#setValueAtIterator)
///
/// @param self const QMetaSequence*
/// @param iterator void*
/// @param value void*
///
void q_metasequence_set_value_at_iterator(const void* self, void* iterator, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canInsertValueAtIterator)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_can_insert_value_at_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#insertValueAtIterator)
///
/// @param self const QMetaSequence*
/// @param container void*
/// @param iterator void*
/// @param value void*
///
void q_metasequence_insert_value_at_iterator(const void* self, void* container, void* iterator, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canEraseValueAtIterator)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_can_erase_value_at_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#eraseValueAtIterator)
///
/// @param self const QMetaSequence*
/// @param container void*
/// @param iterator void*
///
void q_metasequence_erase_value_at_iterator(const void* self, void* container, void* iterator);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canEraseRangeAtIterator)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_can_erase_range_at_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#eraseRangeAtIterator)
///
/// @param self const QMetaSequence*
/// @param container void*
/// @param iterator1 void*
/// @param iterator2 void*
///
void q_metasequence_erase_range_at_iterator(const void* self, void* container, void* iterator1, void* iterator2);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtConstIterator)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_can_get_value_at_const_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#valueAtConstIterator)
///
/// @param self const QMetaSequence*
/// @param iterator void*
/// @param result void*
///
void q_metasequence_value_at_const_iterator(const void* self, void* iterator, void* result);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_has_input_iterator(const void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_has_forward_iterator(const void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_has_bidirectional_iterator(const void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_has_random_access_iterator(const void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_has_size(const void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#size)
///
/// @param self const QMetaSequence*
/// @param container void*
///
intptr_t q_metasequence_size(const void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_can_clear(const void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
///
/// @param self const QMetaSequence*
/// @param container void*
///
void q_metasequence_clear(const void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_has_iterator(const void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
///
/// @param self const QMetaSequence*
/// @param container void*
///
void* q_metasequence_begin(const void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#end)
///
/// @param self const QMetaSequence*
/// @param container void*
///
void* q_metasequence_end(const void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
///
/// @param self const QMetaSequence*
/// @param iterator void*
///
void q_metasequence_destroy_iterator(const void* self, void* iterator);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
///
/// @param self const QMetaSequence*
/// @param i void*
/// @param j void*
///
bool q_metasequence_compare_iterator(const void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
///
/// @param self const QMetaSequence*
/// @param target void*
/// @param source void*
///
void q_metasequence_copy_iterator(const void* self, void* target, void* source);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
///
/// @param self const QMetaSequence*
/// @param iterator void*
/// @param step intptr_t
///
void q_metasequence_advance_iterator(const void* self, void* iterator, intptr_t step);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
///
/// @param self const QMetaSequence*
/// @param i void*
/// @param j void*
///
intptr_t q_metasequence_diff_iterator(const void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
///
/// @param self const QMetaSequence*
///
bool q_metasequence_has_const_iterator(const void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
///
/// @param self const QMetaSequence*
/// @param container void*
///
void* q_metasequence_const_begin(const void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
///
/// @param self const QMetaSequence*
/// @param container void*
///
void* q_metasequence_const_end(const void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
///
/// @param self const QMetaSequence*
/// @param iterator void*
///
void q_metasequence_destroy_const_iterator(const void* self, void* iterator);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
///
/// @param self const QMetaSequence*
/// @param i void*
/// @param j void*
///
bool q_metasequence_compare_const_iterator(const void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
///
/// @param self const QMetaSequence*
/// @param target void*
/// @param source void*
///
void q_metasequence_copy_const_iterator(const void* self, void* target, void* source);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
///
/// @param self const QMetaSequence*
/// @param iterator void*
/// @param step intptr_t
///
void q_metasequence_advance_const_iterator(const void* self, void* iterator, intptr_t step);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
///
/// @param self const QMetaSequence*
/// @param i void*
/// @param j void*
///
intptr_t q_metasequence_diff_const_iterator(const void* self, void* i, void* j);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#dtor.QMetaSequence)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaSequence*
///
void q_metasequence_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html)

/// q_metaassociation_new constructs a new QMetaAssociation object.
///
QMetaAssociation* q_metaassociation_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html)

/// q_metaassociation_new2 constructs a new QMetaAssociation object.
///
/// @param other QMetaAssociation*
///
QMetaAssociation* q_metaassociation_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html)

/// q_metaassociation_new3 constructs a new QMetaAssociation object and invalidates the source QMetaAssociation object.
///
/// @param other QMetaAssociation*
///
QMetaAssociation* q_metaassociation_new3(void* other);

/// q_metaassociation_copy_assign shallow copies `other` into `self`.
///
/// @param self QMetaAssociation*
/// @param other QMetaAssociation*
///
void q_metaassociation_copy_assign(void* self, void* other);

/// q_metaassociation_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMetaAssociation*
/// @param other QMetaAssociation*
///
void q_metaassociation_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#keyMetaType)
///
/// @param self const QMetaAssociation*
///
QMetaType* q_metaassociation_key_meta_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedMetaType)
///
/// @param self const QMetaAssociation*
///
QMetaType* q_metaassociation_mapped_meta_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canInsertKey)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_can_insert_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#insertKey)
///
/// @param self const QMetaAssociation*
/// @param container void*
/// @param key void*
///
void q_metaassociation_insert_key(const void* self, void* container, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canRemoveKey)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_can_remove_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#removeKey)
///
/// @param self const QMetaAssociation*
/// @param container void*
/// @param key void*
///
void q_metaassociation_remove_key(const void* self, void* container, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canContainsKey)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_can_contains_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#containsKey)
///
/// @param self const QMetaAssociation*
/// @param container void*
/// @param key void*
///
bool q_metaassociation_contains_key(const void* self, void* container, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtKey)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_can_get_mapped_at_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtKey)
///
/// @param self const QMetaAssociation*
/// @param container void*
/// @param key void*
/// @param mapped void*
///
void q_metaassociation_mapped_at_key(const void* self, void* container, void* key, void* mapped);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canSetMappedAtKey)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_can_set_mapped_at_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#setMappedAtKey)
///
/// @param self const QMetaAssociation*
/// @param container void*
/// @param key void*
/// @param mapped void*
///
void q_metaassociation_set_mapped_at_key(const void* self, void* container, void* key, void* mapped);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetKeyAtIterator)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_can_get_key_at_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#keyAtIterator)
///
/// @param self const QMetaAssociation*
/// @param iterator void*
/// @param key void*
///
void q_metaassociation_key_at_iterator(const void* self, void* iterator, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetKeyAtConstIterator)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_can_get_key_at_const_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#keyAtConstIterator)
///
/// @param self const QMetaAssociation*
/// @param iterator void*
/// @param key void*
///
void q_metaassociation_key_at_const_iterator(const void* self, void* iterator, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtIterator)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_can_get_mapped_at_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtIterator)
///
/// @param self const QMetaAssociation*
/// @param iterator void*
/// @param mapped void*
///
void q_metaassociation_mapped_at_iterator(const void* self, void* iterator, void* mapped);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtConstIterator)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_can_get_mapped_at_const_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtConstIterator)
///
/// @param self const QMetaAssociation*
/// @param iterator void*
/// @param mapped void*
///
void q_metaassociation_mapped_at_const_iterator(const void* self, void* iterator, void* mapped);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canSetMappedAtIterator)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_can_set_mapped_at_iterator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#setMappedAtIterator)
///
/// @param self const QMetaAssociation*
/// @param iterator void*
/// @param mapped void*
///
void q_metaassociation_set_mapped_at_iterator(const void* self, void* iterator, void* mapped);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canCreateIteratorAtKey)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_can_create_iterator_at_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#createIteratorAtKey)
///
/// @param self const QMetaAssociation*
/// @param container void*
/// @param key void*
///
void* q_metaassociation_create_iterator_at_key(const void* self, void* container, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canCreateConstIteratorAtKey)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_can_create_const_iterator_at_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#createConstIteratorAtKey)
///
/// @param self const QMetaAssociation*
/// @param container void*
/// @param key void*
///
void* q_metaassociation_create_const_iterator_at_key(const void* self, void* container, void* key);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_has_input_iterator(const void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_has_forward_iterator(const void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_has_bidirectional_iterator(const void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_has_random_access_iterator(const void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_has_size(const void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#size)
///
/// @param self const QMetaAssociation*
/// @param container void*
///
intptr_t q_metaassociation_size(const void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_can_clear(const void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
///
/// @param self const QMetaAssociation*
/// @param container void*
///
void q_metaassociation_clear(const void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_has_iterator(const void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
///
/// @param self const QMetaAssociation*
/// @param container void*
///
void* q_metaassociation_begin(const void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#end)
///
/// @param self const QMetaAssociation*
/// @param container void*
///
void* q_metaassociation_end(const void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
///
/// @param self const QMetaAssociation*
/// @param iterator void*
///
void q_metaassociation_destroy_iterator(const void* self, void* iterator);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
///
/// @param self const QMetaAssociation*
/// @param i void*
/// @param j void*
///
bool q_metaassociation_compare_iterator(const void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
///
/// @param self const QMetaAssociation*
/// @param target void*
/// @param source void*
///
void q_metaassociation_copy_iterator(const void* self, void* target, void* source);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
///
/// @param self const QMetaAssociation*
/// @param iterator void*
/// @param step intptr_t
///
void q_metaassociation_advance_iterator(const void* self, void* iterator, intptr_t step);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
///
/// @param self const QMetaAssociation*
/// @param i void*
/// @param j void*
///
intptr_t q_metaassociation_diff_iterator(const void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
///
/// @param self const QMetaAssociation*
///
bool q_metaassociation_has_const_iterator(const void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
///
/// @param self const QMetaAssociation*
/// @param container void*
///
void* q_metaassociation_const_begin(const void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
///
/// @param self const QMetaAssociation*
/// @param container void*
///
void* q_metaassociation_const_end(const void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
///
/// @param self const QMetaAssociation*
/// @param iterator void*
///
void q_metaassociation_destroy_const_iterator(const void* self, void* iterator);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
///
/// @param self const QMetaAssociation*
/// @param i void*
/// @param j void*
///
bool q_metaassociation_compare_const_iterator(const void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
///
/// @param self const QMetaAssociation*
/// @param target void*
/// @param source void*
///
void q_metaassociation_copy_const_iterator(const void* self, void* target, void* source);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
///
/// @param self const QMetaAssociation*
/// @param iterator void*
/// @param step intptr_t
///
void q_metaassociation_advance_const_iterator(const void* self, void* iterator, intptr_t step);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
///
/// @param self const QMetaAssociation*
/// @param i void*
/// @param j void*
///
intptr_t q_metaassociation_diff_const_iterator(const void* self, void* i, void* j);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#dtor.QMetaAssociation)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaAssociation*
///
void q_metaassociation_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#public-types)

typedef enum {
    QTMETACONTAINERPRIVATE_ITERATORCAPABILITY_INPUTCAPABILITY = 1,
    QTMETACONTAINERPRIVATE_ITERATORCAPABILITY_FORWARDCAPABILITY = 2,
    QTMETACONTAINERPRIVATE_ITERATORCAPABILITY_BIDIRECTIONALCAPABILITY = 4,
    QTMETACONTAINERPRIVATE_ITERATORCAPABILITY_RANDOMACCESSCAPABILITY = 8
} QtMetaContainerPrivate__IteratorCapability;

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#public-types)

typedef enum {
    QTMETACONTAINERPRIVATE_ADDREMOVECAPABILITY_CANADDATBEGIN = 1,
    QTMETACONTAINERPRIVATE_ADDREMOVECAPABILITY_CANREMOVEATBEGIN = 2,
    QTMETACONTAINERPRIVATE_ADDREMOVECAPABILITY_CANADDATEND = 4,
    QTMETACONTAINERPRIVATE_ADDREMOVECAPABILITY_CANREMOVEATEND = 8
} QtMetaContainerPrivate__AddRemoveCapability;

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#public-types)

typedef enum {
    QTMETACONTAINERPRIVATE_QMETACONTAINERINTERFACE_POSITION_ATBEGIN = 0,
    QTMETACONTAINERPRIVATE_QMETACONTAINERINTERFACE_POSITION_ATEND = 1,
    QTMETACONTAINERPRIVATE_QMETACONTAINERINTERFACE_POSITION_UNSPECIFIED = 2
} QtMetaContainerPrivate__QMetaContainerInterface__Position;

#endif
