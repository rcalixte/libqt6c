#pragma once
#ifndef SRCQT6C_LIBQMETACONTAINER_H
#define SRCQT6C_LIBQMETACONTAINER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqmetatype.h"

/// https://doc.qt.io/qt-6/qmetacontainer.html

/// q_metacontainer_new constructs a new QMetaContainer object.
///
/// ``` QMetaContainer* other ```
QMetaContainer* q_metacontainer_new(void* other);

/// q_metacontainer_new2 constructs a new QMetaContainer object and invalidates the source QMetaContainer object.
///
/// ``` QMetaContainer* other ```
QMetaContainer* q_metacontainer_new2(void* other);

/// q_metacontainer_new3 constructs a new QMetaContainer object.
///
///
QMetaContainer* q_metacontainer_new3();

/// q_metacontainer_new4 constructs a new QMetaContainer object.
///
/// ``` QMetaContainer* param1 ```
QMetaContainer* q_metacontainer_new4(void* param1);

/// q_metacontainer_copy_assign shallow copies `other` into `self`.
///
/// ``` QMetaContainer* self, QMetaContainer* other ```
void q_metacontainer_copy_assign(void* self, void* other);

/// q_metacontainer_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMetaContainer* self, QMetaContainer* other ```
void q_metacontainer_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
///
/// ``` QMetaContainer* self ```
bool q_metacontainer_has_input_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
///
/// ``` QMetaContainer* self ```
bool q_metacontainer_has_forward_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
///
/// ``` QMetaContainer* self ```
bool q_metacontainer_has_bidirectional_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
///
/// ``` QMetaContainer* self ```
bool q_metacontainer_has_random_access_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
///
/// ``` QMetaContainer* self ```
bool q_metacontainer_has_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#size)
///
/// ``` QMetaContainer* self, void* container ```
int64_t q_metacontainer_size(void* self, void* container);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
///
/// ``` QMetaContainer* self ```
bool q_metacontainer_can_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
///
/// ``` QMetaContainer* self, void* container ```
void q_metacontainer_clear(void* self, void* container);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
///
/// ``` QMetaContainer* self ```
bool q_metacontainer_has_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
///
/// ``` QMetaContainer* self, void* container ```
void* q_metacontainer_begin(void* self, void* container);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#end)
///
/// ``` QMetaContainer* self, void* container ```
void* q_metacontainer_end(void* self, void* container);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
///
/// ``` QMetaContainer* self, void* iterator ```
void q_metacontainer_destroy_iterator(void* self, void* iterator);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
///
/// ``` QMetaContainer* self, void* i, void* j ```
bool q_metacontainer_compare_iterator(void* self, void* i, void* j);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
///
/// ``` QMetaContainer* self, void* target, void* source ```
void q_metacontainer_copy_iterator(void* self, void* target, void* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
///
/// ``` QMetaContainer* self, void* iterator, int64_t step ```
void q_metacontainer_advance_iterator(void* self, void* iterator, int64_t step);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
///
/// ``` QMetaContainer* self, void* i, void* j ```
int64_t q_metacontainer_diff_iterator(void* self, void* i, void* j);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
///
/// ``` QMetaContainer* self ```
bool q_metacontainer_has_const_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
///
/// ``` QMetaContainer* self, void* container ```
void* q_metacontainer_const_begin(void* self, void* container);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
///
/// ``` QMetaContainer* self, void* container ```
void* q_metacontainer_const_end(void* self, void* container);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
///
/// ``` QMetaContainer* self, void* iterator ```
void q_metacontainer_destroy_const_iterator(void* self, void* iterator);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
///
/// ``` QMetaContainer* self, void* i, void* j ```
bool q_metacontainer_compare_const_iterator(void* self, void* i, void* j);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
///
/// ``` QMetaContainer* self, void* target, void* source ```
void q_metacontainer_copy_const_iterator(void* self, void* target, void* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
///
/// ``` QMetaContainer* self, void* iterator, int64_t step ```
void q_metacontainer_advance_const_iterator(void* self, void* iterator, int64_t step);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
///
/// ``` QMetaContainer* self, void* i, void* j ```
int64_t q_metacontainer_diff_const_iterator(void* self, void* i, void* j);

/// Delete this object from C++ memory.
///
/// ``` QMetaContainer* self ```
void q_metacontainer_delete(void* self);

/// https://doc.qt.io/qt-6/qmetasequence.html

/// q_metasequence_new constructs a new QMetaSequence object.
///
/// ``` QMetaSequence* other ```
QMetaSequence* q_metasequence_new(void* other);

/// q_metasequence_new2 constructs a new QMetaSequence object and invalidates the source QMetaSequence object.
///
/// ``` QMetaSequence* other ```
QMetaSequence* q_metasequence_new2(void* other);

/// q_metasequence_new3 constructs a new QMetaSequence object.
///
///
QMetaSequence* q_metasequence_new3();

/// q_metasequence_copy_assign shallow copies `other` into `self`.
///
/// ``` QMetaSequence* self, QMetaSequence* other ```
void q_metasequence_copy_assign(void* self, void* other);

/// q_metasequence_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMetaSequence* self, QMetaSequence* other ```
void q_metasequence_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#valueMetaType)
///
/// ``` QMetaSequence* self ```
QMetaType* q_metasequence_value_meta_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#isSortable)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_is_sortable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canAddValueAtBegin)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_add_value_at_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#addValueAtBegin)
///
/// ``` QMetaSequence* self, void* container, void* value ```
void q_metasequence_add_value_at_begin(void* self, void* container, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canAddValueAtEnd)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_add_value_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#addValueAtEnd)
///
/// ``` QMetaSequence* self, void* container, void* value ```
void q_metasequence_add_value_at_end(void* self, void* container, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValueAtBegin)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_remove_value_at_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#removeValueAtBegin)
///
/// ``` QMetaSequence* self, void* container ```
void q_metasequence_remove_value_at_begin(void* self, void* container);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValueAtEnd)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_remove_value_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#removeValueAtEnd)
///
/// ``` QMetaSequence* self, void* container ```
void q_metasequence_remove_value_at_end(void* self, void* container);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtIndex)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_get_value_at_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#valueAtIndex)
///
/// ``` QMetaSequence* self, void* container, int64_t index, void* result ```
void q_metasequence_value_at_index(void* self, void* container, int64_t index, void* result);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canSetValueAtIndex)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_set_value_at_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#setValueAtIndex)
///
/// ``` QMetaSequence* self, void* container, int64_t index, void* value ```
void q_metasequence_set_value_at_index(void* self, void* container, int64_t index, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canAddValue)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_add_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#addValue)
///
/// ``` QMetaSequence* self, void* container, void* value ```
void q_metasequence_add_value(void* self, void* container, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValue)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_remove_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#removeValue)
///
/// ``` QMetaSequence* self, void* container ```
void q_metasequence_remove_value(void* self, void* container);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_get_value_at_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#valueAtIterator)
///
/// ``` QMetaSequence* self, void* iterator, void* result ```
void q_metasequence_value_at_iterator(void* self, void* iterator, void* result);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canSetValueAtIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_set_value_at_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#setValueAtIterator)
///
/// ``` QMetaSequence* self, void* iterator, void* value ```
void q_metasequence_set_value_at_iterator(void* self, void* iterator, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canInsertValueAtIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_insert_value_at_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#insertValueAtIterator)
///
/// ``` QMetaSequence* self, void* container, void* iterator, void* value ```
void q_metasequence_insert_value_at_iterator(void* self, void* container, void* iterator, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canEraseValueAtIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_erase_value_at_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#eraseValueAtIterator)
///
/// ``` QMetaSequence* self, void* container, void* iterator ```
void q_metasequence_erase_value_at_iterator(void* self, void* container, void* iterator);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canEraseRangeAtIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_erase_range_at_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#eraseRangeAtIterator)
///
/// ``` QMetaSequence* self, void* container, void* iterator1, void* iterator2 ```
void q_metasequence_erase_range_at_iterator(void* self, void* container, void* iterator1, void* iterator2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtConstIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_get_value_at_const_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#valueAtConstIterator)
///
/// ``` QMetaSequence* self, void* iterator, void* result ```
void q_metasequence_value_at_const_iterator(void* self, void* iterator, void* result);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_has_input_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_has_forward_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_has_bidirectional_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_has_random_access_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_has_size(void* self);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#size)
///
/// ``` QMetaSequence* self, void* container ```
int64_t q_metasequence_size(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_clear(void* self);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
///
/// ``` QMetaSequence* self, void* container ```
void q_metasequence_clear(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_has_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
///
/// ``` QMetaSequence* self, void* container ```
void* q_metasequence_begin(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#end)
///
/// ``` QMetaSequence* self, void* container ```
void* q_metasequence_end(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
///
/// ``` QMetaSequence* self, void* iterator ```
void q_metasequence_destroy_iterator(void* self, void* iterator);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
///
/// ``` QMetaSequence* self, void* i, void* j ```
bool q_metasequence_compare_iterator(void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
///
/// ``` QMetaSequence* self, void* target, void* source ```
void q_metasequence_copy_iterator(void* self, void* target, void* source);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
///
/// ``` QMetaSequence* self, void* iterator, int64_t step ```
void q_metasequence_advance_iterator(void* self, void* iterator, int64_t step);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
///
/// ``` QMetaSequence* self, void* i, void* j ```
int64_t q_metasequence_diff_iterator(void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_has_const_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
///
/// ``` QMetaSequence* self, void* container ```
void* q_metasequence_const_begin(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
///
/// ``` QMetaSequence* self, void* container ```
void* q_metasequence_const_end(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
///
/// ``` QMetaSequence* self, void* iterator ```
void q_metasequence_destroy_const_iterator(void* self, void* iterator);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
///
/// ``` QMetaSequence* self, void* i, void* j ```
bool q_metasequence_compare_const_iterator(void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
///
/// ``` QMetaSequence* self, void* target, void* source ```
void q_metasequence_copy_const_iterator(void* self, void* target, void* source);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
///
/// ``` QMetaSequence* self, void* iterator, int64_t step ```
void q_metasequence_advance_const_iterator(void* self, void* iterator, int64_t step);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
///
/// ``` QMetaSequence* self, void* i, void* j ```
int64_t q_metasequence_diff_const_iterator(void* self, void* i, void* j);

/// Delete this object from C++ memory.
///
/// ``` QMetaSequence* self ```
void q_metasequence_delete(void* self);

/// https://doc.qt.io/qt-6/qmetaassociation.html

/// q_metaassociation_new constructs a new QMetaAssociation object.
///
/// ``` QMetaAssociation* other ```
QMetaAssociation* q_metaassociation_new(void* other);

/// q_metaassociation_new2 constructs a new QMetaAssociation object and invalidates the source QMetaAssociation object.
///
/// ``` QMetaAssociation* other ```
QMetaAssociation* q_metaassociation_new2(void* other);

/// q_metaassociation_new3 constructs a new QMetaAssociation object.
///
///
QMetaAssociation* q_metaassociation_new3();

/// q_metaassociation_copy_assign shallow copies `other` into `self`.
///
/// ``` QMetaAssociation* self, QMetaAssociation* other ```
void q_metaassociation_copy_assign(void* self, void* other);

/// q_metaassociation_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMetaAssociation* self, QMetaAssociation* other ```
void q_metaassociation_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#keyMetaType)
///
/// ``` QMetaAssociation* self ```
QMetaType* q_metaassociation_key_meta_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#mappedMetaType)
///
/// ``` QMetaAssociation* self ```
QMetaType* q_metaassociation_mapped_meta_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canInsertKey)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_insert_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#insertKey)
///
/// ``` QMetaAssociation* self, void* container, void* key ```
void q_metaassociation_insert_key(void* self, void* container, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canRemoveKey)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_remove_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#removeKey)
///
/// ``` QMetaAssociation* self, void* container, void* key ```
void q_metaassociation_remove_key(void* self, void* container, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canContainsKey)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_contains_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#containsKey)
///
/// ``` QMetaAssociation* self, void* container, void* key ```
bool q_metaassociation_contains_key(void* self, void* container, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtKey)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_get_mapped_at_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtKey)
///
/// ``` QMetaAssociation* self, void* container, void* key, void* mapped ```
void q_metaassociation_mapped_at_key(void* self, void* container, void* key, void* mapped);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canSetMappedAtKey)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_set_mapped_at_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#setMappedAtKey)
///
/// ``` QMetaAssociation* self, void* container, void* key, void* mapped ```
void q_metaassociation_set_mapped_at_key(void* self, void* container, void* key, void* mapped);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canGetKeyAtIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_get_key_at_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#keyAtIterator)
///
/// ``` QMetaAssociation* self, void* iterator, void* key ```
void q_metaassociation_key_at_iterator(void* self, void* iterator, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canGetKeyAtConstIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_get_key_at_const_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#keyAtConstIterator)
///
/// ``` QMetaAssociation* self, void* iterator, void* key ```
void q_metaassociation_key_at_const_iterator(void* self, void* iterator, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_get_mapped_at_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtIterator)
///
/// ``` QMetaAssociation* self, void* iterator, void* mapped ```
void q_metaassociation_mapped_at_iterator(void* self, void* iterator, void* mapped);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtConstIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_get_mapped_at_const_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtConstIterator)
///
/// ``` QMetaAssociation* self, void* iterator, void* mapped ```
void q_metaassociation_mapped_at_const_iterator(void* self, void* iterator, void* mapped);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canSetMappedAtIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_set_mapped_at_iterator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#setMappedAtIterator)
///
/// ``` QMetaAssociation* self, void* iterator, void* mapped ```
void q_metaassociation_set_mapped_at_iterator(void* self, void* iterator, void* mapped);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canCreateIteratorAtKey)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_create_iterator_at_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#createIteratorAtKey)
///
/// ``` QMetaAssociation* self, void* container, void* key ```
void* q_metaassociation_create_iterator_at_key(void* self, void* container, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canCreateConstIteratorAtKey)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_create_const_iterator_at_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#createConstIteratorAtKey)
///
/// ``` QMetaAssociation* self, void* container, void* key ```
void* q_metaassociation_create_const_iterator_at_key(void* self, void* container, void* key);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_has_input_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_has_forward_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_has_bidirectional_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_has_random_access_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_has_size(void* self);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#size)
///
/// ``` QMetaAssociation* self, void* container ```
int64_t q_metaassociation_size(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_clear(void* self);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
///
/// ``` QMetaAssociation* self, void* container ```
void q_metaassociation_clear(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_has_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
///
/// ``` QMetaAssociation* self, void* container ```
void* q_metaassociation_begin(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#end)
///
/// ``` QMetaAssociation* self, void* container ```
void* q_metaassociation_end(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
///
/// ``` QMetaAssociation* self, void* iterator ```
void q_metaassociation_destroy_iterator(void* self, void* iterator);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
///
/// ``` QMetaAssociation* self, void* i, void* j ```
bool q_metaassociation_compare_iterator(void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
///
/// ``` QMetaAssociation* self, void* target, void* source ```
void q_metaassociation_copy_iterator(void* self, void* target, void* source);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
///
/// ``` QMetaAssociation* self, void* iterator, int64_t step ```
void q_metaassociation_advance_iterator(void* self, void* iterator, int64_t step);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
///
/// ``` QMetaAssociation* self, void* i, void* j ```
int64_t q_metaassociation_diff_iterator(void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_has_const_iterator(void* self);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
///
/// ``` QMetaAssociation* self, void* container ```
void* q_metaassociation_const_begin(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
///
/// ``` QMetaAssociation* self, void* container ```
void* q_metaassociation_const_end(void* self, void* container);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
///
/// ``` QMetaAssociation* self, void* iterator ```
void q_metaassociation_destroy_const_iterator(void* self, void* iterator);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
///
/// ``` QMetaAssociation* self, void* i, void* j ```
bool q_metaassociation_compare_const_iterator(void* self, void* i, void* j);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
///
/// ``` QMetaAssociation* self, void* target, void* source ```
void q_metaassociation_copy_const_iterator(void* self, void* target, void* source);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
///
/// ``` QMetaAssociation* self, void* iterator, int64_t step ```
void q_metaassociation_advance_const_iterator(void* self, void* iterator, int64_t step);

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
///
/// ``` QMetaAssociation* self, void* i, void* j ```
int64_t q_metaassociation_diff_const_iterator(void* self, void* i, void* j);

/// Delete this object from C++ memory.
///
/// ``` QMetaAssociation* self ```
void q_metaassociation_delete(void* self);

/// https://doc.qt.io/qt-6/qmetacontainer.html#types

typedef enum {
    QTMETACONTAINERPRIVATE_ITERATORCAPABILITY_INPUTCAPABILITY = 1,
    QTMETACONTAINERPRIVATE_ITERATORCAPABILITY_FORWARDCAPABILITY = 2,
    QTMETACONTAINERPRIVATE_ITERATORCAPABILITY_BIDIRECTIONALCAPABILITY = 4,
    QTMETACONTAINERPRIVATE_ITERATORCAPABILITY_RANDOMACCESSCAPABILITY = 8
} QtMetaContainerPrivate__IteratorCapability;

typedef enum {
    QTMETACONTAINERPRIVATE_ADDREMOVECAPABILITY_CANADDATBEGIN = 1,
    QTMETACONTAINERPRIVATE_ADDREMOVECAPABILITY_CANREMOVEATBEGIN = 2,
    QTMETACONTAINERPRIVATE_ADDREMOVECAPABILITY_CANADDATEND = 4,
    QTMETACONTAINERPRIVATE_ADDREMOVECAPABILITY_CANREMOVEATEND = 8
} QtMetaContainerPrivate__AddRemoveCapability;

typedef enum {
    QTMETACONTAINERPRIVATE_QMETACONTAINERINTERFACE_POSITION_ATBEGIN = 0,
    QTMETACONTAINERPRIVATE_QMETACONTAINERINTERFACE_POSITION_ATEND = 1,
    QTMETACONTAINERPRIVATE_QMETACONTAINERINTERFACE_POSITION_UNSPECIFIED = 2
} QtMetaContainerPrivate__QMetaContainerInterface__Position;

#endif
