#include "libqmetatype.hpp"
#include "libqmetacontainer.hpp"
#include "libqmetacontainer.h"

/// https://doc.qt.io/qt-6/qmetacontainer.html

/// q_metacontainer_new constructs a new QMetaContainer object.
///
/// ``` QMetaContainer* other ```
QMetaContainer* q_metacontainer_new(void* other) {
    return QMetaContainer_new((QMetaContainer*)other);
}

/// q_metacontainer_new2 constructs a new QMetaContainer object and invalidates the source QMetaContainer object.
///
/// ``` QMetaContainer* other ```
QMetaContainer* q_metacontainer_new2(void* other) {
    return QMetaContainer_new2((QMetaContainer*)other);
}

/// q_metacontainer_new3 constructs a new QMetaContainer object.
///
///
QMetaContainer* q_metacontainer_new3() {
    return QMetaContainer_new3();
}

/// q_metacontainer_new4 constructs a new QMetaContainer object.
///
/// ``` QMetaContainer* param1 ```
QMetaContainer* q_metacontainer_new4(void* param1) {
    return QMetaContainer_new4((QMetaContainer*)param1);
}

/// q_metacontainer_copy_assign shallow copies `other` into `self`.
///
/// ``` QMetaContainer* self, QMetaContainer* other ```
void q_metacontainer_copy_assign(void* self, void* other) {
    QMetaContainer_CopyAssign((QMetaContainer*)self, (QMetaContainer*)other);
}

/// q_metacontainer_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMetaContainer* self, QMetaContainer* other ```
void q_metacontainer_move_assign(void* self, void* other) {
    QMetaContainer_MoveAssign((QMetaContainer*)self, (QMetaContainer*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
///
/// ``` QMetaContainer* self ```
bool q_metacontainer_has_input_iterator(void* self) {
    return QMetaContainer_HasInputIterator((QMetaContainer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
///
/// ``` QMetaContainer* self ```
bool q_metacontainer_has_forward_iterator(void* self) {
    return QMetaContainer_HasForwardIterator((QMetaContainer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
///
/// ``` QMetaContainer* self ```
bool q_metacontainer_has_bidirectional_iterator(void* self) {
    return QMetaContainer_HasBidirectionalIterator((QMetaContainer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
///
/// ``` QMetaContainer* self ```
bool q_metacontainer_has_random_access_iterator(void* self) {
    return QMetaContainer_HasRandomAccessIterator((QMetaContainer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
///
/// ``` QMetaContainer* self ```
bool q_metacontainer_has_size(void* self) {
    return QMetaContainer_HasSize((QMetaContainer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#size)
///
/// ``` QMetaContainer* self, void* container ```
int64_t q_metacontainer_size(void* self, void* container) {
    return QMetaContainer_Size((QMetaContainer*)self, container);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
///
/// ``` QMetaContainer* self ```
bool q_metacontainer_can_clear(void* self) {
    return QMetaContainer_CanClear((QMetaContainer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
///
/// ``` QMetaContainer* self, void* container ```
void q_metacontainer_clear(void* self, void* container) {
    QMetaContainer_Clear((QMetaContainer*)self, container);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
///
/// ``` QMetaContainer* self ```
bool q_metacontainer_has_iterator(void* self) {
    return QMetaContainer_HasIterator((QMetaContainer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
///
/// ``` QMetaContainer* self, void* container ```
void* q_metacontainer_begin(void* self, void* container) {
    return QMetaContainer_Begin((QMetaContainer*)self, container);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#end)
///
/// ``` QMetaContainer* self, void* container ```
void* q_metacontainer_end(void* self, void* container) {
    return QMetaContainer_End((QMetaContainer*)self, container);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
///
/// ``` QMetaContainer* self, void* iterator ```
void q_metacontainer_destroy_iterator(void* self, void* iterator) {
    QMetaContainer_DestroyIterator((QMetaContainer*)self, iterator);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
///
/// ``` QMetaContainer* self, void* i, void* j ```
bool q_metacontainer_compare_iterator(void* self, void* i, void* j) {
    return QMetaContainer_CompareIterator((QMetaContainer*)self, i, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
///
/// ``` QMetaContainer* self, void* target, void* source ```
void q_metacontainer_copy_iterator(void* self, void* target, void* source) {
    QMetaContainer_CopyIterator((QMetaContainer*)self, target, source);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
///
/// ``` QMetaContainer* self, void* iterator, int64_t step ```
void q_metacontainer_advance_iterator(void* self, void* iterator, int64_t step) {
    QMetaContainer_AdvanceIterator((QMetaContainer*)self, iterator, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
///
/// ``` QMetaContainer* self, void* i, void* j ```
int64_t q_metacontainer_diff_iterator(void* self, void* i, void* j) {
    return QMetaContainer_DiffIterator((QMetaContainer*)self, i, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
///
/// ``` QMetaContainer* self ```
bool q_metacontainer_has_const_iterator(void* self) {
    return QMetaContainer_HasConstIterator((QMetaContainer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
///
/// ``` QMetaContainer* self, void* container ```
void* q_metacontainer_const_begin(void* self, void* container) {
    return QMetaContainer_ConstBegin((QMetaContainer*)self, container);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
///
/// ``` QMetaContainer* self, void* container ```
void* q_metacontainer_const_end(void* self, void* container) {
    return QMetaContainer_ConstEnd((QMetaContainer*)self, container);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
///
/// ``` QMetaContainer* self, void* iterator ```
void q_metacontainer_destroy_const_iterator(void* self, void* iterator) {
    QMetaContainer_DestroyConstIterator((QMetaContainer*)self, iterator);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
///
/// ``` QMetaContainer* self, void* i, void* j ```
bool q_metacontainer_compare_const_iterator(void* self, void* i, void* j) {
    return QMetaContainer_CompareConstIterator((QMetaContainer*)self, i, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
///
/// ``` QMetaContainer* self, void* target, void* source ```
void q_metacontainer_copy_const_iterator(void* self, void* target, void* source) {
    QMetaContainer_CopyConstIterator((QMetaContainer*)self, target, source);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
///
/// ``` QMetaContainer* self, void* iterator, int64_t step ```
void q_metacontainer_advance_const_iterator(void* self, void* iterator, int64_t step) {
    QMetaContainer_AdvanceConstIterator((QMetaContainer*)self, iterator, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
///
/// ``` QMetaContainer* self, void* i, void* j ```
int64_t q_metacontainer_diff_const_iterator(void* self, void* i, void* j) {
    return QMetaContainer_DiffConstIterator((QMetaContainer*)self, i, j);
}

/// Delete this object from C++ memory.
///
/// ``` QMetaContainer* self ```
void q_metacontainer_delete(void* self) {
    QMetaContainer_Delete((QMetaContainer*)(self));
}

/// https://doc.qt.io/qt-6/qmetasequence.html

/// q_metasequence_new constructs a new QMetaSequence object.
///
/// ``` QMetaSequence* other ```
QMetaSequence* q_metasequence_new(void* other) {
    return QMetaSequence_new((QMetaSequence*)other);
}

/// q_metasequence_new2 constructs a new QMetaSequence object and invalidates the source QMetaSequence object.
///
/// ``` QMetaSequence* other ```
QMetaSequence* q_metasequence_new2(void* other) {
    return QMetaSequence_new2((QMetaSequence*)other);
}

/// q_metasequence_new3 constructs a new QMetaSequence object.
///
///
QMetaSequence* q_metasequence_new3() {
    return QMetaSequence_new3();
}

/// q_metasequence_copy_assign shallow copies `other` into `self`.
///
/// ``` QMetaSequence* self, QMetaSequence* other ```
void q_metasequence_copy_assign(void* self, void* other) {
    QMetaSequence_CopyAssign((QMetaSequence*)self, (QMetaSequence*)other);
}

/// q_metasequence_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMetaSequence* self, QMetaSequence* other ```
void q_metasequence_move_assign(void* self, void* other) {
    QMetaSequence_MoveAssign((QMetaSequence*)self, (QMetaSequence*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#valueMetaType)
///
/// ``` QMetaSequence* self ```
QMetaType* q_metasequence_value_meta_type(void* self) {
    return QMetaSequence_ValueMetaType((QMetaSequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#isSortable)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_is_sortable(void* self) {
    return QMetaSequence_IsSortable((QMetaSequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canAddValueAtBegin)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_add_value_at_begin(void* self) {
    return QMetaSequence_CanAddValueAtBegin((QMetaSequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#addValueAtBegin)
///
/// ``` QMetaSequence* self, void* container, void* value ```
void q_metasequence_add_value_at_begin(void* self, void* container, void* value) {
    QMetaSequence_AddValueAtBegin((QMetaSequence*)self, container, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canAddValueAtEnd)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_add_value_at_end(void* self) {
    return QMetaSequence_CanAddValueAtEnd((QMetaSequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#addValueAtEnd)
///
/// ``` QMetaSequence* self, void* container, void* value ```
void q_metasequence_add_value_at_end(void* self, void* container, void* value) {
    QMetaSequence_AddValueAtEnd((QMetaSequence*)self, container, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValueAtBegin)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_remove_value_at_begin(void* self) {
    return QMetaSequence_CanRemoveValueAtBegin((QMetaSequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#removeValueAtBegin)
///
/// ``` QMetaSequence* self, void* container ```
void q_metasequence_remove_value_at_begin(void* self, void* container) {
    QMetaSequence_RemoveValueAtBegin((QMetaSequence*)self, container);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValueAtEnd)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_remove_value_at_end(void* self) {
    return QMetaSequence_CanRemoveValueAtEnd((QMetaSequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#removeValueAtEnd)
///
/// ``` QMetaSequence* self, void* container ```
void q_metasequence_remove_value_at_end(void* self, void* container) {
    QMetaSequence_RemoveValueAtEnd((QMetaSequence*)self, container);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtIndex)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_get_value_at_index(void* self) {
    return QMetaSequence_CanGetValueAtIndex((QMetaSequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#valueAtIndex)
///
/// ``` QMetaSequence* self, void* container, int64_t index, void* result ```
void q_metasequence_value_at_index(void* self, void* container, int64_t index, void* result) {
    QMetaSequence_ValueAtIndex((QMetaSequence*)self, container, index, result);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canSetValueAtIndex)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_set_value_at_index(void* self) {
    return QMetaSequence_CanSetValueAtIndex((QMetaSequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#setValueAtIndex)
///
/// ``` QMetaSequence* self, void* container, int64_t index, void* value ```
void q_metasequence_set_value_at_index(void* self, void* container, int64_t index, void* value) {
    QMetaSequence_SetValueAtIndex((QMetaSequence*)self, container, index, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canAddValue)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_add_value(void* self) {
    return QMetaSequence_CanAddValue((QMetaSequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#addValue)
///
/// ``` QMetaSequence* self, void* container, void* value ```
void q_metasequence_add_value(void* self, void* container, void* value) {
    QMetaSequence_AddValue((QMetaSequence*)self, container, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValue)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_remove_value(void* self) {
    return QMetaSequence_CanRemoveValue((QMetaSequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#removeValue)
///
/// ``` QMetaSequence* self, void* container ```
void q_metasequence_remove_value(void* self, void* container) {
    QMetaSequence_RemoveValue((QMetaSequence*)self, container);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_get_value_at_iterator(void* self) {
    return QMetaSequence_CanGetValueAtIterator((QMetaSequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#valueAtIterator)
///
/// ``` QMetaSequence* self, void* iterator, void* result ```
void q_metasequence_value_at_iterator(void* self, void* iterator, void* result) {
    QMetaSequence_ValueAtIterator((QMetaSequence*)self, iterator, result);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canSetValueAtIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_set_value_at_iterator(void* self) {
    return QMetaSequence_CanSetValueAtIterator((QMetaSequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#setValueAtIterator)
///
/// ``` QMetaSequence* self, void* iterator, void* value ```
void q_metasequence_set_value_at_iterator(void* self, void* iterator, void* value) {
    QMetaSequence_SetValueAtIterator((QMetaSequence*)self, iterator, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canInsertValueAtIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_insert_value_at_iterator(void* self) {
    return QMetaSequence_CanInsertValueAtIterator((QMetaSequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#insertValueAtIterator)
///
/// ``` QMetaSequence* self, void* container, void* iterator, void* value ```
void q_metasequence_insert_value_at_iterator(void* self, void* container, void* iterator, void* value) {
    QMetaSequence_InsertValueAtIterator((QMetaSequence*)self, container, iterator, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canEraseValueAtIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_erase_value_at_iterator(void* self) {
    return QMetaSequence_CanEraseValueAtIterator((QMetaSequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#eraseValueAtIterator)
///
/// ``` QMetaSequence* self, void* container, void* iterator ```
void q_metasequence_erase_value_at_iterator(void* self, void* container, void* iterator) {
    QMetaSequence_EraseValueAtIterator((QMetaSequence*)self, container, iterator);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canEraseRangeAtIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_erase_range_at_iterator(void* self) {
    return QMetaSequence_CanEraseRangeAtIterator((QMetaSequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#eraseRangeAtIterator)
///
/// ``` QMetaSequence* self, void* container, void* iterator1, void* iterator2 ```
void q_metasequence_erase_range_at_iterator(void* self, void* container, void* iterator1, void* iterator2) {
    QMetaSequence_EraseRangeAtIterator((QMetaSequence*)self, container, iterator1, iterator2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtConstIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_get_value_at_const_iterator(void* self) {
    return QMetaSequence_CanGetValueAtConstIterator((QMetaSequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#valueAtConstIterator)
///
/// ``` QMetaSequence* self, void* iterator, void* result ```
void q_metasequence_value_at_const_iterator(void* self, void* iterator, void* result) {
    QMetaSequence_ValueAtConstIterator((QMetaSequence*)self, iterator, result);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_has_input_iterator(void* self) {
    return QMetaContainer_HasInputIterator((QMetaContainer*)self);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_has_forward_iterator(void* self) {
    return QMetaContainer_HasForwardIterator((QMetaContainer*)self);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_has_bidirectional_iterator(void* self) {
    return QMetaContainer_HasBidirectionalIterator((QMetaContainer*)self);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_has_random_access_iterator(void* self) {
    return QMetaContainer_HasRandomAccessIterator((QMetaContainer*)self);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_has_size(void* self) {
    return QMetaContainer_HasSize((QMetaContainer*)self);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#size)
///
/// ``` QMetaSequence* self, void* container ```
int64_t q_metasequence_size(void* self, void* container) {
    return QMetaContainer_Size((QMetaContainer*)self, container);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_can_clear(void* self) {
    return QMetaContainer_CanClear((QMetaContainer*)self);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
///
/// ``` QMetaSequence* self, void* container ```
void q_metasequence_clear(void* self, void* container) {
    QMetaContainer_Clear((QMetaContainer*)self, container);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_has_iterator(void* self) {
    return QMetaContainer_HasIterator((QMetaContainer*)self);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
///
/// ``` QMetaSequence* self, void* container ```
void* q_metasequence_begin(void* self, void* container) {
    return QMetaContainer_Begin((QMetaContainer*)self, container);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#end)
///
/// ``` QMetaSequence* self, void* container ```
void* q_metasequence_end(void* self, void* container) {
    return QMetaContainer_End((QMetaContainer*)self, container);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
///
/// ``` QMetaSequence* self, void* iterator ```
void q_metasequence_destroy_iterator(void* self, void* iterator) {
    QMetaContainer_DestroyIterator((QMetaContainer*)self, iterator);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
///
/// ``` QMetaSequence* self, void* i, void* j ```
bool q_metasequence_compare_iterator(void* self, void* i, void* j) {
    return QMetaContainer_CompareIterator((QMetaContainer*)self, i, j);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
///
/// ``` QMetaSequence* self, void* target, void* source ```
void q_metasequence_copy_iterator(void* self, void* target, void* source) {
    QMetaContainer_CopyIterator((QMetaContainer*)self, target, source);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
///
/// ``` QMetaSequence* self, void* iterator, int64_t step ```
void q_metasequence_advance_iterator(void* self, void* iterator, int64_t step) {
    QMetaContainer_AdvanceIterator((QMetaContainer*)self, iterator, step);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
///
/// ``` QMetaSequence* self, void* i, void* j ```
int64_t q_metasequence_diff_iterator(void* self, void* i, void* j) {
    return QMetaContainer_DiffIterator((QMetaContainer*)self, i, j);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
///
/// ``` QMetaSequence* self ```
bool q_metasequence_has_const_iterator(void* self) {
    return QMetaContainer_HasConstIterator((QMetaContainer*)self);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
///
/// ``` QMetaSequence* self, void* container ```
void* q_metasequence_const_begin(void* self, void* container) {
    return QMetaContainer_ConstBegin((QMetaContainer*)self, container);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
///
/// ``` QMetaSequence* self, void* container ```
void* q_metasequence_const_end(void* self, void* container) {
    return QMetaContainer_ConstEnd((QMetaContainer*)self, container);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
///
/// ``` QMetaSequence* self, void* iterator ```
void q_metasequence_destroy_const_iterator(void* self, void* iterator) {
    QMetaContainer_DestroyConstIterator((QMetaContainer*)self, iterator);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
///
/// ``` QMetaSequence* self, void* i, void* j ```
bool q_metasequence_compare_const_iterator(void* self, void* i, void* j) {
    return QMetaContainer_CompareConstIterator((QMetaContainer*)self, i, j);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
///
/// ``` QMetaSequence* self, void* target, void* source ```
void q_metasequence_copy_const_iterator(void* self, void* target, void* source) {
    QMetaContainer_CopyConstIterator((QMetaContainer*)self, target, source);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
///
/// ``` QMetaSequence* self, void* iterator, int64_t step ```
void q_metasequence_advance_const_iterator(void* self, void* iterator, int64_t step) {
    QMetaContainer_AdvanceConstIterator((QMetaContainer*)self, iterator, step);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
///
/// ``` QMetaSequence* self, void* i, void* j ```
int64_t q_metasequence_diff_const_iterator(void* self, void* i, void* j) {
    return QMetaContainer_DiffConstIterator((QMetaContainer*)self, i, j);
}

/// Delete this object from C++ memory.
///
/// ``` QMetaSequence* self ```
void q_metasequence_delete(void* self) {
    QMetaSequence_Delete((QMetaSequence*)(self));
}

/// https://doc.qt.io/qt-6/qmetaassociation.html

/// q_metaassociation_new constructs a new QMetaAssociation object.
///
/// ``` QMetaAssociation* other ```
QMetaAssociation* q_metaassociation_new(void* other) {
    return QMetaAssociation_new((QMetaAssociation*)other);
}

/// q_metaassociation_new2 constructs a new QMetaAssociation object and invalidates the source QMetaAssociation object.
///
/// ``` QMetaAssociation* other ```
QMetaAssociation* q_metaassociation_new2(void* other) {
    return QMetaAssociation_new2((QMetaAssociation*)other);
}

/// q_metaassociation_new3 constructs a new QMetaAssociation object.
///
///
QMetaAssociation* q_metaassociation_new3() {
    return QMetaAssociation_new3();
}

/// q_metaassociation_copy_assign shallow copies `other` into `self`.
///
/// ``` QMetaAssociation* self, QMetaAssociation* other ```
void q_metaassociation_copy_assign(void* self, void* other) {
    QMetaAssociation_CopyAssign((QMetaAssociation*)self, (QMetaAssociation*)other);
}

/// q_metaassociation_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMetaAssociation* self, QMetaAssociation* other ```
void q_metaassociation_move_assign(void* self, void* other) {
    QMetaAssociation_MoveAssign((QMetaAssociation*)self, (QMetaAssociation*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#keyMetaType)
///
/// ``` QMetaAssociation* self ```
QMetaType* q_metaassociation_key_meta_type(void* self) {
    return QMetaAssociation_KeyMetaType((QMetaAssociation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#mappedMetaType)
///
/// ``` QMetaAssociation* self ```
QMetaType* q_metaassociation_mapped_meta_type(void* self) {
    return QMetaAssociation_MappedMetaType((QMetaAssociation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canInsertKey)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_insert_key(void* self) {
    return QMetaAssociation_CanInsertKey((QMetaAssociation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#insertKey)
///
/// ``` QMetaAssociation* self, void* container, void* key ```
void q_metaassociation_insert_key(void* self, void* container, void* key) {
    QMetaAssociation_InsertKey((QMetaAssociation*)self, container, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canRemoveKey)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_remove_key(void* self) {
    return QMetaAssociation_CanRemoveKey((QMetaAssociation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#removeKey)
///
/// ``` QMetaAssociation* self, void* container, void* key ```
void q_metaassociation_remove_key(void* self, void* container, void* key) {
    QMetaAssociation_RemoveKey((QMetaAssociation*)self, container, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canContainsKey)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_contains_key(void* self) {
    return QMetaAssociation_CanContainsKey((QMetaAssociation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#containsKey)
///
/// ``` QMetaAssociation* self, void* container, void* key ```
bool q_metaassociation_contains_key(void* self, void* container, void* key) {
    return QMetaAssociation_ContainsKey((QMetaAssociation*)self, container, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtKey)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_get_mapped_at_key(void* self) {
    return QMetaAssociation_CanGetMappedAtKey((QMetaAssociation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtKey)
///
/// ``` QMetaAssociation* self, void* container, void* key, void* mapped ```
void q_metaassociation_mapped_at_key(void* self, void* container, void* key, void* mapped) {
    QMetaAssociation_MappedAtKey((QMetaAssociation*)self, container, key, mapped);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canSetMappedAtKey)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_set_mapped_at_key(void* self) {
    return QMetaAssociation_CanSetMappedAtKey((QMetaAssociation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#setMappedAtKey)
///
/// ``` QMetaAssociation* self, void* container, void* key, void* mapped ```
void q_metaassociation_set_mapped_at_key(void* self, void* container, void* key, void* mapped) {
    QMetaAssociation_SetMappedAtKey((QMetaAssociation*)self, container, key, mapped);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canGetKeyAtIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_get_key_at_iterator(void* self) {
    return QMetaAssociation_CanGetKeyAtIterator((QMetaAssociation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#keyAtIterator)
///
/// ``` QMetaAssociation* self, void* iterator, void* key ```
void q_metaassociation_key_at_iterator(void* self, void* iterator, void* key) {
    QMetaAssociation_KeyAtIterator((QMetaAssociation*)self, iterator, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canGetKeyAtConstIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_get_key_at_const_iterator(void* self) {
    return QMetaAssociation_CanGetKeyAtConstIterator((QMetaAssociation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#keyAtConstIterator)
///
/// ``` QMetaAssociation* self, void* iterator, void* key ```
void q_metaassociation_key_at_const_iterator(void* self, void* iterator, void* key) {
    QMetaAssociation_KeyAtConstIterator((QMetaAssociation*)self, iterator, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_get_mapped_at_iterator(void* self) {
    return QMetaAssociation_CanGetMappedAtIterator((QMetaAssociation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtIterator)
///
/// ``` QMetaAssociation* self, void* iterator, void* mapped ```
void q_metaassociation_mapped_at_iterator(void* self, void* iterator, void* mapped) {
    QMetaAssociation_MappedAtIterator((QMetaAssociation*)self, iterator, mapped);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtConstIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_get_mapped_at_const_iterator(void* self) {
    return QMetaAssociation_CanGetMappedAtConstIterator((QMetaAssociation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtConstIterator)
///
/// ``` QMetaAssociation* self, void* iterator, void* mapped ```
void q_metaassociation_mapped_at_const_iterator(void* self, void* iterator, void* mapped) {
    QMetaAssociation_MappedAtConstIterator((QMetaAssociation*)self, iterator, mapped);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canSetMappedAtIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_set_mapped_at_iterator(void* self) {
    return QMetaAssociation_CanSetMappedAtIterator((QMetaAssociation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#setMappedAtIterator)
///
/// ``` QMetaAssociation* self, void* iterator, void* mapped ```
void q_metaassociation_set_mapped_at_iterator(void* self, void* iterator, void* mapped) {
    QMetaAssociation_SetMappedAtIterator((QMetaAssociation*)self, iterator, mapped);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canCreateIteratorAtKey)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_create_iterator_at_key(void* self) {
    return QMetaAssociation_CanCreateIteratorAtKey((QMetaAssociation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#createIteratorAtKey)
///
/// ``` QMetaAssociation* self, void* container, void* key ```
void* q_metaassociation_create_iterator_at_key(void* self, void* container, void* key) {
    return QMetaAssociation_CreateIteratorAtKey((QMetaAssociation*)self, container, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canCreateConstIteratorAtKey)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_create_const_iterator_at_key(void* self) {
    return QMetaAssociation_CanCreateConstIteratorAtKey((QMetaAssociation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#createConstIteratorAtKey)
///
/// ``` QMetaAssociation* self, void* container, void* key ```
void* q_metaassociation_create_const_iterator_at_key(void* self, void* container, void* key) {
    return QMetaAssociation_CreateConstIteratorAtKey((QMetaAssociation*)self, container, key);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_has_input_iterator(void* self) {
    return QMetaContainer_HasInputIterator((QMetaContainer*)self);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_has_forward_iterator(void* self) {
    return QMetaContainer_HasForwardIterator((QMetaContainer*)self);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_has_bidirectional_iterator(void* self) {
    return QMetaContainer_HasBidirectionalIterator((QMetaContainer*)self);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_has_random_access_iterator(void* self) {
    return QMetaContainer_HasRandomAccessIterator((QMetaContainer*)self);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_has_size(void* self) {
    return QMetaContainer_HasSize((QMetaContainer*)self);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#size)
///
/// ``` QMetaAssociation* self, void* container ```
int64_t q_metaassociation_size(void* self, void* container) {
    return QMetaContainer_Size((QMetaContainer*)self, container);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_can_clear(void* self) {
    return QMetaContainer_CanClear((QMetaContainer*)self);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
///
/// ``` QMetaAssociation* self, void* container ```
void q_metaassociation_clear(void* self, void* container) {
    QMetaContainer_Clear((QMetaContainer*)self, container);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_has_iterator(void* self) {
    return QMetaContainer_HasIterator((QMetaContainer*)self);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
///
/// ``` QMetaAssociation* self, void* container ```
void* q_metaassociation_begin(void* self, void* container) {
    return QMetaContainer_Begin((QMetaContainer*)self, container);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#end)
///
/// ``` QMetaAssociation* self, void* container ```
void* q_metaassociation_end(void* self, void* container) {
    return QMetaContainer_End((QMetaContainer*)self, container);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
///
/// ``` QMetaAssociation* self, void* iterator ```
void q_metaassociation_destroy_iterator(void* self, void* iterator) {
    QMetaContainer_DestroyIterator((QMetaContainer*)self, iterator);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
///
/// ``` QMetaAssociation* self, void* i, void* j ```
bool q_metaassociation_compare_iterator(void* self, void* i, void* j) {
    return QMetaContainer_CompareIterator((QMetaContainer*)self, i, j);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
///
/// ``` QMetaAssociation* self, void* target, void* source ```
void q_metaassociation_copy_iterator(void* self, void* target, void* source) {
    QMetaContainer_CopyIterator((QMetaContainer*)self, target, source);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
///
/// ``` QMetaAssociation* self, void* iterator, int64_t step ```
void q_metaassociation_advance_iterator(void* self, void* iterator, int64_t step) {
    QMetaContainer_AdvanceIterator((QMetaContainer*)self, iterator, step);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
///
/// ``` QMetaAssociation* self, void* i, void* j ```
int64_t q_metaassociation_diff_iterator(void* self, void* i, void* j) {
    return QMetaContainer_DiffIterator((QMetaContainer*)self, i, j);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
///
/// ``` QMetaAssociation* self ```
bool q_metaassociation_has_const_iterator(void* self) {
    return QMetaContainer_HasConstIterator((QMetaContainer*)self);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
///
/// ``` QMetaAssociation* self, void* container ```
void* q_metaassociation_const_begin(void* self, void* container) {
    return QMetaContainer_ConstBegin((QMetaContainer*)self, container);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
///
/// ``` QMetaAssociation* self, void* container ```
void* q_metaassociation_const_end(void* self, void* container) {
    return QMetaContainer_ConstEnd((QMetaContainer*)self, container);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
///
/// ``` QMetaAssociation* self, void* iterator ```
void q_metaassociation_destroy_const_iterator(void* self, void* iterator) {
    QMetaContainer_DestroyConstIterator((QMetaContainer*)self, iterator);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
///
/// ``` QMetaAssociation* self, void* i, void* j ```
bool q_metaassociation_compare_const_iterator(void* self, void* i, void* j) {
    return QMetaContainer_CompareConstIterator((QMetaContainer*)self, i, j);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
///
/// ``` QMetaAssociation* self, void* target, void* source ```
void q_metaassociation_copy_const_iterator(void* self, void* target, void* source) {
    QMetaContainer_CopyConstIterator((QMetaContainer*)self, target, source);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
///
/// ``` QMetaAssociation* self, void* iterator, int64_t step ```
void q_metaassociation_advance_const_iterator(void* self, void* iterator, int64_t step) {
    QMetaContainer_AdvanceConstIterator((QMetaContainer*)self, iterator, step);
}

/// Inherited from QMetaContainer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
///
/// ``` QMetaAssociation* self, void* i, void* j ```
int64_t q_metaassociation_diff_const_iterator(void* self, void* i, void* j) {
    return QMetaContainer_DiffConstIterator((QMetaContainer*)self, i, j);
}

/// Delete this object from C++ memory.
///
/// ``` QMetaAssociation* self ```
void q_metaassociation_delete(void* self) {
    QMetaAssociation_Delete((QMetaAssociation*)(self));
}