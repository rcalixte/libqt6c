#pragma once
#ifndef SRC_QT6C_LIBQMETACONTAINER_H
#define SRC_QT6C_LIBQMETACONTAINER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html)

/// q_metacontainer_new constructs a new QMetaContainer object.
///
/// @param other QMetaContainer*
///
QMetaContainer* q_metacontainer_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html)

/// q_metacontainer_new2 constructs a new QMetaContainer object and invalidates the source QMetaContainer object.
///
/// @param other QMetaContainer*
///
QMetaContainer* q_metacontainer_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html)

/// q_metacontainer_new3 constructs a new QMetaContainer object.
///
QMetaContainer* q_metacontainer_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html)

/// q_metacontainer_new4 constructs a new QMetaContainer object.
///
/// @param param1 QMetaContainer*
///
QMetaContainer* q_metacontainer_new4(void* param1);

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
/// @param self QMetaContainer*
///
bool q_metacontainer_has_input_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
///
/// @param self QMetaContainer*
///
bool q_metacontainer_has_forward_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
///
/// @param self QMetaContainer*
///
bool q_metacontainer_has_bidirectional_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
///
/// @param self QMetaContainer*
///
bool q_metacontainer_has_random_access_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
///
/// @param self QMetaContainer*
///
bool q_metacontainer_has_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#size)
///
/// @param self QMetaContainer*
/// @param container void*
///
int64_t q_metacontainer_size(void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
///
/// @param self QMetaContainer*
///
bool q_metacontainer_can_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
///
/// @param self QMetaContainer*
/// @param container void*
///
void q_metacontainer_clear(void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
///
/// @param self QMetaContainer*
///
bool q_metacontainer_has_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
///
/// @param self QMetaContainer*
/// @param container void*
///
void* q_metacontainer_begin(void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#end)
///
/// @param self QMetaContainer*
/// @param container void*
///
void* q_metacontainer_end(void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
///
/// @param self QMetaContainer*
/// @param iterator void*
///
void q_metacontainer_destroy_iterator(void* self, void* iterator);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
///
/// @param self QMetaContainer*
/// @param i void*
/// @param j void*
///
bool q_metacontainer_compare_iterator(void* self, void* i, void* j);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
///
/// @param self QMetaContainer*
/// @param target void*
/// @param source void*
///
void q_metacontainer_copy_iterator(void* self, void* target, void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
///
/// @param self QMetaContainer*
/// @param iterator void*
/// @param step int64_t
///
void q_metacontainer_advance_iterator(void* self, void* iterator, int64_t step);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
///
/// @param self QMetaContainer*
/// @param i void*
/// @param j void*
///
int64_t q_metacontainer_diff_iterator(void* self, void* i, void* j);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
///
/// @param self QMetaContainer*
///
bool q_metacontainer_has_const_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
///
/// @param self QMetaContainer*
/// @param container void*
///
void* q_metacontainer_const_begin(void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
///
/// @param self QMetaContainer*
/// @param container void*
///
void* q_metacontainer_const_end(void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
///
/// @param self QMetaContainer*
/// @param iterator void*
///
void q_metacontainer_destroy_const_iterator(void* self, void* iterator);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
///
/// @param self QMetaContainer*
/// @param i void*
/// @param j void*
///
bool q_metacontainer_compare_const_iterator(void* self, void* i, void* j);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
///
/// @param self QMetaContainer*
/// @param target void*
/// @param source void*
///
void q_metacontainer_copy_const_iterator(void* self, void* target, void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
///
/// @param self QMetaContainer*
/// @param iterator void*
/// @param step int64_t
///
void q_metacontainer_advance_const_iterator(void* self, void* iterator, int64_t step);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
///
/// @param self QMetaContainer*
/// @param i void*
/// @param j void*
///
int64_t q_metacontainer_diff_const_iterator(void* self, void* i, void* j);

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
/// @param other QMetaSequence*
///
QMetaSequence* q_metasequence_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html)

/// q_metasequence_new2 constructs a new QMetaSequence object and invalidates the source QMetaSequence object.
///
/// @param other QMetaSequence*
///
QMetaSequence* q_metasequence_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html)

/// q_metasequence_new3 constructs a new QMetaSequence object.
///
QMetaSequence* q_metasequence_new3();

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
/// @param self QMetaSequence*
///
QMetaType* q_metasequence_value_meta_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#isSortable)
///
/// @param self QMetaSequence*
///
bool q_metasequence_is_sortable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canAddValueAtBegin)
///
/// @param self QMetaSequence*
///
bool q_metasequence_can_add_value_at_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#addValueAtBegin)
///
/// @param self QMetaSequence*
/// @param container void*
/// @param value void*
///
void q_metasequence_add_value_at_begin(void* self, void* container, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canAddValueAtEnd)
///
/// @param self QMetaSequence*
///
bool q_metasequence_can_add_value_at_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#addValueAtEnd)
///
/// @param self QMetaSequence*
/// @param container void*
/// @param value void*
///
void q_metasequence_add_value_at_end(void* self, void* container, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValueAtBegin)
///
/// @param self QMetaSequence*
///
bool q_metasequence_can_remove_value_at_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#removeValueAtBegin)
///
/// @param self QMetaSequence*
/// @param container void*
///
void q_metasequence_remove_value_at_begin(void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValueAtEnd)
///
/// @param self QMetaSequence*
///
bool q_metasequence_can_remove_value_at_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#removeValueAtEnd)
///
/// @param self QMetaSequence*
/// @param container void*
///
void q_metasequence_remove_value_at_end(void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtIndex)
///
/// @param self QMetaSequence*
///
bool q_metasequence_can_get_value_at_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#valueAtIndex)
///
/// @param self QMetaSequence*
/// @param container void*
/// @param index int64_t
/// @param result void*
///
void q_metasequence_value_at_index(void* self, void* container, int64_t index, void* result);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canSetValueAtIndex)
///
/// @param self QMetaSequence*
///
bool q_metasequence_can_set_value_at_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#setValueAtIndex)
///
/// @param self QMetaSequence*
/// @param container void*
/// @param index int64_t
/// @param value void*
///
void q_metasequence_set_value_at_index(void* self, void* container, int64_t index, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canAddValue)
///
/// @param self QMetaSequence*
///
bool q_metasequence_can_add_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#addValue)
///
/// @param self QMetaSequence*
/// @param container void*
/// @param value void*
///
void q_metasequence_add_value(void* self, void* container, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValue)
///
/// @param self QMetaSequence*
///
bool q_metasequence_can_remove_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#removeValue)
///
/// @param self QMetaSequence*
/// @param container void*
///
void q_metasequence_remove_value(void* self, void* container);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtIterator)
///
/// @param self QMetaSequence*
///
bool q_metasequence_can_get_value_at_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#valueAtIterator)
///
/// @param self QMetaSequence*
/// @param iterator void*
/// @param result void*
///
void q_metasequence_value_at_iterator(void* self, void* iterator, void* result);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canSetValueAtIterator)
///
/// @param self QMetaSequence*
///
bool q_metasequence_can_set_value_at_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#setValueAtIterator)
///
/// @param self QMetaSequence*
/// @param iterator void*
/// @param value void*
///
void q_metasequence_set_value_at_iterator(void* self, void* iterator, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canInsertValueAtIterator)
///
/// @param self QMetaSequence*
///
bool q_metasequence_can_insert_value_at_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#insertValueAtIterator)
///
/// @param self QMetaSequence*
/// @param container void*
/// @param iterator void*
/// @param value void*
///
void q_metasequence_insert_value_at_iterator(void* self, void* container, void* iterator, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canEraseValueAtIterator)
///
/// @param self QMetaSequence*
///
bool q_metasequence_can_erase_value_at_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#eraseValueAtIterator)
///
/// @param self QMetaSequence*
/// @param container void*
/// @param iterator void*
///
void q_metasequence_erase_value_at_iterator(void* self, void* container, void* iterator);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canEraseRangeAtIterator)
///
/// @param self QMetaSequence*
///
bool q_metasequence_can_erase_range_at_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#eraseRangeAtIterator)
///
/// @param self QMetaSequence*
/// @param container void*
/// @param iterator1 void*
/// @param iterator2 void*
///
void q_metasequence_erase_range_at_iterator(void* self, void* container, void* iterator1, void* iterator2);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtConstIterator)
///
/// @param self QMetaSequence*
///
bool q_metasequence_can_get_value_at_const_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#valueAtConstIterator)
///
/// @param self QMetaSequence*
/// @param iterator void*
/// @param result void*
///
void q_metasequence_value_at_const_iterator(void* self, void* iterator, void* result);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
///
/// @param self QMetaSequence*
///
bool q_metasequence_has_input_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
///
/// @param self QMetaSequence*
///
bool q_metasequence_has_forward_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
///
/// @param self QMetaSequence*
///
bool q_metasequence_has_bidirectional_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
///
/// @param self QMetaSequence*
///
bool q_metasequence_has_random_access_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
///
/// @param self QMetaSequence*
///
bool q_metasequence_has_size(void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#size)
///
/// @param self QMetaSequence*
/// @param container void*
///
int64_t q_metasequence_size(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
///
/// @param self QMetaSequence*
///
bool q_metasequence_can_clear(void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
///
/// @param self QMetaSequence*
/// @param container void*
///
void q_metasequence_clear(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
///
/// @param self QMetaSequence*
///
bool q_metasequence_has_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
///
/// @param self QMetaSequence*
/// @param container void*
///
void* q_metasequence_begin(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#end)
///
/// @param self QMetaSequence*
/// @param container void*
///
void* q_metasequence_end(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
///
/// @param self QMetaSequence*
/// @param iterator void*
///
void q_metasequence_destroy_iterator(void* self, void* iterator);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
///
/// @param self QMetaSequence*
/// @param i void*
/// @param j void*
///
bool q_metasequence_compare_iterator(void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
///
/// @param self QMetaSequence*
/// @param target void*
/// @param source void*
///
void q_metasequence_copy_iterator(void* self, void* target, void* source);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
///
/// @param self QMetaSequence*
/// @param iterator void*
/// @param step int64_t
///
void q_metasequence_advance_iterator(void* self, void* iterator, int64_t step);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
///
/// @param self QMetaSequence*
/// @param i void*
/// @param j void*
///
int64_t q_metasequence_diff_iterator(void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
///
/// @param self QMetaSequence*
///
bool q_metasequence_has_const_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
///
/// @param self QMetaSequence*
/// @param container void*
///
void* q_metasequence_const_begin(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
///
/// @param self QMetaSequence*
/// @param container void*
///
void* q_metasequence_const_end(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
///
/// @param self QMetaSequence*
/// @param iterator void*
///
void q_metasequence_destroy_const_iterator(void* self, void* iterator);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
///
/// @param self QMetaSequence*
/// @param i void*
/// @param j void*
///
bool q_metasequence_compare_const_iterator(void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
///
/// @param self QMetaSequence*
/// @param target void*
/// @param source void*
///
void q_metasequence_copy_const_iterator(void* self, void* target, void* source);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
///
/// @param self QMetaSequence*
/// @param iterator void*
/// @param step int64_t
///
void q_metasequence_advance_const_iterator(void* self, void* iterator, int64_t step);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
///
/// @param self QMetaSequence*
/// @param i void*
/// @param j void*
///
int64_t q_metasequence_diff_const_iterator(void* self, void* i, void* j);

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
/// @param other QMetaAssociation*
///
QMetaAssociation* q_metaassociation_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html)

/// q_metaassociation_new2 constructs a new QMetaAssociation object and invalidates the source QMetaAssociation object.
///
/// @param other QMetaAssociation*
///
QMetaAssociation* q_metaassociation_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html)

/// q_metaassociation_new3 constructs a new QMetaAssociation object.
///
QMetaAssociation* q_metaassociation_new3();

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
/// @param self QMetaAssociation*
///
QMetaType* q_metaassociation_key_meta_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedMetaType)
///
/// @param self QMetaAssociation*
///
QMetaType* q_metaassociation_mapped_meta_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canInsertKey)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_can_insert_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#insertKey)
///
/// @param self QMetaAssociation*
/// @param container void*
/// @param key void*
///
void q_metaassociation_insert_key(void* self, void* container, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canRemoveKey)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_can_remove_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#removeKey)
///
/// @param self QMetaAssociation*
/// @param container void*
/// @param key void*
///
void q_metaassociation_remove_key(void* self, void* container, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canContainsKey)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_can_contains_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#containsKey)
///
/// @param self QMetaAssociation*
/// @param container void*
/// @param key void*
///
bool q_metaassociation_contains_key(void* self, void* container, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtKey)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_can_get_mapped_at_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtKey)
///
/// @param self QMetaAssociation*
/// @param container void*
/// @param key void*
/// @param mapped void*
///
void q_metaassociation_mapped_at_key(void* self, void* container, void* key, void* mapped);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canSetMappedAtKey)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_can_set_mapped_at_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#setMappedAtKey)
///
/// @param self QMetaAssociation*
/// @param container void*
/// @param key void*
/// @param mapped void*
///
void q_metaassociation_set_mapped_at_key(void* self, void* container, void* key, void* mapped);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetKeyAtIterator)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_can_get_key_at_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#keyAtIterator)
///
/// @param self QMetaAssociation*
/// @param iterator void*
/// @param key void*
///
void q_metaassociation_key_at_iterator(void* self, void* iterator, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetKeyAtConstIterator)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_can_get_key_at_const_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#keyAtConstIterator)
///
/// @param self QMetaAssociation*
/// @param iterator void*
/// @param key void*
///
void q_metaassociation_key_at_const_iterator(void* self, void* iterator, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtIterator)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_can_get_mapped_at_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtIterator)
///
/// @param self QMetaAssociation*
/// @param iterator void*
/// @param mapped void*
///
void q_metaassociation_mapped_at_iterator(void* self, void* iterator, void* mapped);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtConstIterator)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_can_get_mapped_at_const_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtConstIterator)
///
/// @param self QMetaAssociation*
/// @param iterator void*
/// @param mapped void*
///
void q_metaassociation_mapped_at_const_iterator(void* self, void* iterator, void* mapped);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canSetMappedAtIterator)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_can_set_mapped_at_iterator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#setMappedAtIterator)
///
/// @param self QMetaAssociation*
/// @param iterator void*
/// @param mapped void*
///
void q_metaassociation_set_mapped_at_iterator(void* self, void* iterator, void* mapped);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canCreateIteratorAtKey)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_can_create_iterator_at_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#createIteratorAtKey)
///
/// @param self QMetaAssociation*
/// @param container void*
/// @param key void*
///
void* q_metaassociation_create_iterator_at_key(void* self, void* container, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canCreateConstIteratorAtKey)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_can_create_const_iterator_at_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#createConstIteratorAtKey)
///
/// @param self QMetaAssociation*
/// @param container void*
/// @param key void*
///
void* q_metaassociation_create_const_iterator_at_key(void* self, void* container, void* key);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_has_input_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_has_forward_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_has_bidirectional_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_has_random_access_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_has_size(void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#size)
///
/// @param self QMetaAssociation*
/// @param container void*
///
int64_t q_metaassociation_size(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_can_clear(void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
///
/// @param self QMetaAssociation*
/// @param container void*
///
void q_metaassociation_clear(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_has_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
///
/// @param self QMetaAssociation*
/// @param container void*
///
void* q_metaassociation_begin(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#end)
///
/// @param self QMetaAssociation*
/// @param container void*
///
void* q_metaassociation_end(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
///
/// @param self QMetaAssociation*
/// @param iterator void*
///
void q_metaassociation_destroy_iterator(void* self, void* iterator);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
///
/// @param self QMetaAssociation*
/// @param i void*
/// @param j void*
///
bool q_metaassociation_compare_iterator(void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
///
/// @param self QMetaAssociation*
/// @param target void*
/// @param source void*
///
void q_metaassociation_copy_iterator(void* self, void* target, void* source);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
///
/// @param self QMetaAssociation*
/// @param iterator void*
/// @param step int64_t
///
void q_metaassociation_advance_iterator(void* self, void* iterator, int64_t step);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
///
/// @param self QMetaAssociation*
/// @param i void*
/// @param j void*
///
int64_t q_metaassociation_diff_iterator(void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
///
/// @param self QMetaAssociation*
///
bool q_metaassociation_has_const_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
///
/// @param self QMetaAssociation*
/// @param container void*
///
void* q_metaassociation_const_begin(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
///
/// @param self QMetaAssociation*
/// @param container void*
///
void* q_metaassociation_const_end(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
///
/// @param self QMetaAssociation*
/// @param iterator void*
///
void q_metaassociation_destroy_const_iterator(void* self, void* iterator);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
///
/// @param self QMetaAssociation*
/// @param i void*
/// @param j void*
///
bool q_metaassociation_compare_const_iterator(void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
///
/// @param self QMetaAssociation*
/// @param target void*
/// @param source void*
///
void q_metaassociation_copy_const_iterator(void* self, void* target, void* source);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
///
/// @param self QMetaAssociation*
/// @param iterator void*
/// @param step int64_t
///
void q_metaassociation_advance_const_iterator(void* self, void* iterator, int64_t step);

/// Inherited from QMetaContainer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
///
/// @param self QMetaAssociation*
/// @param i void*
/// @param j void*
///
int64_t q_metaassociation_diff_const_iterator(void* self, void* i, void* j);

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
