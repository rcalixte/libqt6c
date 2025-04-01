#include "libqmetatype.hpp"
#include "libqmetacontainer.hpp"
#include "libqmetacontainer.h"

QMetaContainer* q_metacontainer_new(void* other) {
    return QMetaContainer_new((QMetaContainer*)other);
}

QMetaContainer* q_metacontainer_new2(void* other) {
    return QMetaContainer_new2((QMetaContainer*)other);
}

QMetaContainer* q_metacontainer_new3() {
    return QMetaContainer_new3();
}

QMetaContainer* q_metacontainer_new4(void* param1) {
    return QMetaContainer_new4((QMetaContainer*)param1);
}

void q_metacontainer_copy_assign(void* self, void* other) {
    QMetaContainer_CopyAssign((QMetaContainer*)self, (QMetaContainer*)other);
}

void q_metacontainer_move_assign(void* self, void* other) {
    QMetaContainer_MoveAssign((QMetaContainer*)self, (QMetaContainer*)other);
}

bool q_metacontainer_has_input_iterator(void* self) {
    return QMetaContainer_HasInputIterator((QMetaContainer*)self);
}

bool q_metacontainer_has_forward_iterator(void* self) {
    return QMetaContainer_HasForwardIterator((QMetaContainer*)self);
}

bool q_metacontainer_has_bidirectional_iterator(void* self) {
    return QMetaContainer_HasBidirectionalIterator((QMetaContainer*)self);
}

bool q_metacontainer_has_random_access_iterator(void* self) {
    return QMetaContainer_HasRandomAccessIterator((QMetaContainer*)self);
}

bool q_metacontainer_has_size(void* self) {
    return QMetaContainer_HasSize((QMetaContainer*)self);
}

int64_t q_metacontainer_size(void* self, void* container) {
    return QMetaContainer_Size((QMetaContainer*)self, container);
}

bool q_metacontainer_can_clear(void* self) {
    return QMetaContainer_CanClear((QMetaContainer*)self);
}

void q_metacontainer_clear(void* self, void* container) {
    QMetaContainer_Clear((QMetaContainer*)self, container);
}

bool q_metacontainer_has_iterator(void* self) {
    return QMetaContainer_HasIterator((QMetaContainer*)self);
}

void* q_metacontainer_begin(void* self, void* container) {
    return QMetaContainer_Begin((QMetaContainer*)self, container);
}

void* q_metacontainer_end(void* self, void* container) {
    return QMetaContainer_End((QMetaContainer*)self, container);
}

void q_metacontainer_destroy_iterator(void* self, void* iterator) {
    QMetaContainer_DestroyIterator((QMetaContainer*)self, iterator);
}

bool q_metacontainer_compare_iterator(void* self, void* i, void* j) {
    return QMetaContainer_CompareIterator((QMetaContainer*)self, i, j);
}

void q_metacontainer_copy_iterator(void* self, void* target, void* source) {
    QMetaContainer_CopyIterator((QMetaContainer*)self, target, source);
}

void q_metacontainer_advance_iterator(void* self, void* iterator, int64_t step) {
    QMetaContainer_AdvanceIterator((QMetaContainer*)self, iterator, step);
}

int64_t q_metacontainer_diff_iterator(void* self, void* i, void* j) {
    return QMetaContainer_DiffIterator((QMetaContainer*)self, i, j);
}

bool q_metacontainer_has_const_iterator(void* self) {
    return QMetaContainer_HasConstIterator((QMetaContainer*)self);
}

void* q_metacontainer_const_begin(void* self, void* container) {
    return QMetaContainer_ConstBegin((QMetaContainer*)self, container);
}

void* q_metacontainer_const_end(void* self, void* container) {
    return QMetaContainer_ConstEnd((QMetaContainer*)self, container);
}

void q_metacontainer_destroy_const_iterator(void* self, void* iterator) {
    QMetaContainer_DestroyConstIterator((QMetaContainer*)self, iterator);
}

bool q_metacontainer_compare_const_iterator(void* self, void* i, void* j) {
    return QMetaContainer_CompareConstIterator((QMetaContainer*)self, i, j);
}

void q_metacontainer_copy_const_iterator(void* self, void* target, void* source) {
    QMetaContainer_CopyConstIterator((QMetaContainer*)self, target, source);
}

void q_metacontainer_advance_const_iterator(void* self, void* iterator, int64_t step) {
    QMetaContainer_AdvanceConstIterator((QMetaContainer*)self, iterator, step);
}

int64_t q_metacontainer_diff_const_iterator(void* self, void* i, void* j) {
    return QMetaContainer_DiffConstIterator((QMetaContainer*)self, i, j);
}

void q_metacontainer_delete(void* self) {
    QMetaContainer_Delete((QMetaContainer*)(self));
}

QMetaSequence* q_metasequence_new(void* other) {
    return QMetaSequence_new((QMetaSequence*)other);
}

QMetaSequence* q_metasequence_new2(void* other) {
    return QMetaSequence_new2((QMetaSequence*)other);
}

QMetaSequence* q_metasequence_new3() {
    return QMetaSequence_new3();
}

void q_metasequence_copy_assign(void* self, void* other) {
    QMetaSequence_CopyAssign((QMetaSequence*)self, (QMetaSequence*)other);
}

void q_metasequence_move_assign(void* self, void* other) {
    QMetaSequence_MoveAssign((QMetaSequence*)self, (QMetaSequence*)other);
}

QMetaType* q_metasequence_value_meta_type(void* self) {
    return QMetaSequence_ValueMetaType((QMetaSequence*)self);
}

bool q_metasequence_is_sortable(void* self) {
    return QMetaSequence_IsSortable((QMetaSequence*)self);
}

bool q_metasequence_can_add_value_at_begin(void* self) {
    return QMetaSequence_CanAddValueAtBegin((QMetaSequence*)self);
}

void q_metasequence_add_value_at_begin(void* self, void* container, void* value) {
    QMetaSequence_AddValueAtBegin((QMetaSequence*)self, container, value);
}

bool q_metasequence_can_add_value_at_end(void* self) {
    return QMetaSequence_CanAddValueAtEnd((QMetaSequence*)self);
}

void q_metasequence_add_value_at_end(void* self, void* container, void* value) {
    QMetaSequence_AddValueAtEnd((QMetaSequence*)self, container, value);
}

bool q_metasequence_can_remove_value_at_begin(void* self) {
    return QMetaSequence_CanRemoveValueAtBegin((QMetaSequence*)self);
}

void q_metasequence_remove_value_at_begin(void* self, void* container) {
    QMetaSequence_RemoveValueAtBegin((QMetaSequence*)self, container);
}

bool q_metasequence_can_remove_value_at_end(void* self) {
    return QMetaSequence_CanRemoveValueAtEnd((QMetaSequence*)self);
}

void q_metasequence_remove_value_at_end(void* self, void* container) {
    QMetaSequence_RemoveValueAtEnd((QMetaSequence*)self, container);
}

bool q_metasequence_can_get_value_at_index(void* self) {
    return QMetaSequence_CanGetValueAtIndex((QMetaSequence*)self);
}

void q_metasequence_value_at_index(void* self, void* container, int64_t index, void* result) {
    QMetaSequence_ValueAtIndex((QMetaSequence*)self, container, index, result);
}

bool q_metasequence_can_set_value_at_index(void* self) {
    return QMetaSequence_CanSetValueAtIndex((QMetaSequence*)self);
}

void q_metasequence_set_value_at_index(void* self, void* container, int64_t index, void* value) {
    QMetaSequence_SetValueAtIndex((QMetaSequence*)self, container, index, value);
}

bool q_metasequence_can_add_value(void* self) {
    return QMetaSequence_CanAddValue((QMetaSequence*)self);
}

void q_metasequence_add_value(void* self, void* container, void* value) {
    QMetaSequence_AddValue((QMetaSequence*)self, container, value);
}

bool q_metasequence_can_remove_value(void* self) {
    return QMetaSequence_CanRemoveValue((QMetaSequence*)self);
}

void q_metasequence_remove_value(void* self, void* container) {
    QMetaSequence_RemoveValue((QMetaSequence*)self, container);
}

bool q_metasequence_can_get_value_at_iterator(void* self) {
    return QMetaSequence_CanGetValueAtIterator((QMetaSequence*)self);
}

void q_metasequence_value_at_iterator(void* self, void* iterator, void* result) {
    QMetaSequence_ValueAtIterator((QMetaSequence*)self, iterator, result);
}

bool q_metasequence_can_set_value_at_iterator(void* self) {
    return QMetaSequence_CanSetValueAtIterator((QMetaSequence*)self);
}

void q_metasequence_set_value_at_iterator(void* self, void* iterator, void* value) {
    QMetaSequence_SetValueAtIterator((QMetaSequence*)self, iterator, value);
}

bool q_metasequence_can_insert_value_at_iterator(void* self) {
    return QMetaSequence_CanInsertValueAtIterator((QMetaSequence*)self);
}

void q_metasequence_insert_value_at_iterator(void* self, void* container, void* iterator, void* value) {
    QMetaSequence_InsertValueAtIterator((QMetaSequence*)self, container, iterator, value);
}

bool q_metasequence_can_erase_value_at_iterator(void* self) {
    return QMetaSequence_CanEraseValueAtIterator((QMetaSequence*)self);
}

void q_metasequence_erase_value_at_iterator(void* self, void* container, void* iterator) {
    QMetaSequence_EraseValueAtIterator((QMetaSequence*)self, container, iterator);
}

bool q_metasequence_can_erase_range_at_iterator(void* self) {
    return QMetaSequence_CanEraseRangeAtIterator((QMetaSequence*)self);
}

void q_metasequence_erase_range_at_iterator(void* self, void* container, void* iterator1, void* iterator2) {
    QMetaSequence_EraseRangeAtIterator((QMetaSequence*)self, container, iterator1, iterator2);
}

bool q_metasequence_can_get_value_at_const_iterator(void* self) {
    return QMetaSequence_CanGetValueAtConstIterator((QMetaSequence*)self);
}

void q_metasequence_value_at_const_iterator(void* self, void* iterator, void* result) {
    QMetaSequence_ValueAtConstIterator((QMetaSequence*)self, iterator, result);
}

bool q_metasequence_has_input_iterator(void* self) {
    return QMetaContainer_HasInputIterator((QMetaContainer*)self);
}

bool q_metasequence_has_forward_iterator(void* self) {
    return QMetaContainer_HasForwardIterator((QMetaContainer*)self);
}

bool q_metasequence_has_bidirectional_iterator(void* self) {
    return QMetaContainer_HasBidirectionalIterator((QMetaContainer*)self);
}

bool q_metasequence_has_random_access_iterator(void* self) {
    return QMetaContainer_HasRandomAccessIterator((QMetaContainer*)self);
}

bool q_metasequence_has_size(void* self) {
    return QMetaContainer_HasSize((QMetaContainer*)self);
}

int64_t q_metasequence_size(void* self, void* container) {
    return QMetaContainer_Size((QMetaContainer*)self, container);
}

bool q_metasequence_can_clear(void* self) {
    return QMetaContainer_CanClear((QMetaContainer*)self);
}

void q_metasequence_clear(void* self, void* container) {
    QMetaContainer_Clear((QMetaContainer*)self, container);
}

bool q_metasequence_has_iterator(void* self) {
    return QMetaContainer_HasIterator((QMetaContainer*)self);
}

void* q_metasequence_begin(void* self, void* container) {
    return QMetaContainer_Begin((QMetaContainer*)self, container);
}

void* q_metasequence_end(void* self, void* container) {
    return QMetaContainer_End((QMetaContainer*)self, container);
}

void q_metasequence_destroy_iterator(void* self, void* iterator) {
    QMetaContainer_DestroyIterator((QMetaContainer*)self, iterator);
}

bool q_metasequence_compare_iterator(void* self, void* i, void* j) {
    return QMetaContainer_CompareIterator((QMetaContainer*)self, i, j);
}

void q_metasequence_copy_iterator(void* self, void* target, void* source) {
    QMetaContainer_CopyIterator((QMetaContainer*)self, target, source);
}

void q_metasequence_advance_iterator(void* self, void* iterator, int64_t step) {
    QMetaContainer_AdvanceIterator((QMetaContainer*)self, iterator, step);
}

int64_t q_metasequence_diff_iterator(void* self, void* i, void* j) {
    return QMetaContainer_DiffIterator((QMetaContainer*)self, i, j);
}

bool q_metasequence_has_const_iterator(void* self) {
    return QMetaContainer_HasConstIterator((QMetaContainer*)self);
}

void* q_metasequence_const_begin(void* self, void* container) {
    return QMetaContainer_ConstBegin((QMetaContainer*)self, container);
}

void* q_metasequence_const_end(void* self, void* container) {
    return QMetaContainer_ConstEnd((QMetaContainer*)self, container);
}

void q_metasequence_destroy_const_iterator(void* self, void* iterator) {
    QMetaContainer_DestroyConstIterator((QMetaContainer*)self, iterator);
}

bool q_metasequence_compare_const_iterator(void* self, void* i, void* j) {
    return QMetaContainer_CompareConstIterator((QMetaContainer*)self, i, j);
}

void q_metasequence_copy_const_iterator(void* self, void* target, void* source) {
    QMetaContainer_CopyConstIterator((QMetaContainer*)self, target, source);
}

void q_metasequence_advance_const_iterator(void* self, void* iterator, int64_t step) {
    QMetaContainer_AdvanceConstIterator((QMetaContainer*)self, iterator, step);
}

int64_t q_metasequence_diff_const_iterator(void* self, void* i, void* j) {
    return QMetaContainer_DiffConstIterator((QMetaContainer*)self, i, j);
}

void q_metasequence_delete(void* self) {
    QMetaSequence_Delete((QMetaSequence*)(self));
}

QMetaAssociation* q_metaassociation_new(void* other) {
    return QMetaAssociation_new((QMetaAssociation*)other);
}

QMetaAssociation* q_metaassociation_new2(void* other) {
    return QMetaAssociation_new2((QMetaAssociation*)other);
}

QMetaAssociation* q_metaassociation_new3() {
    return QMetaAssociation_new3();
}

void q_metaassociation_copy_assign(void* self, void* other) {
    QMetaAssociation_CopyAssign((QMetaAssociation*)self, (QMetaAssociation*)other);
}

void q_metaassociation_move_assign(void* self, void* other) {
    QMetaAssociation_MoveAssign((QMetaAssociation*)self, (QMetaAssociation*)other);
}

QMetaType* q_metaassociation_key_meta_type(void* self) {
    return QMetaAssociation_KeyMetaType((QMetaAssociation*)self);
}

QMetaType* q_metaassociation_mapped_meta_type(void* self) {
    return QMetaAssociation_MappedMetaType((QMetaAssociation*)self);
}

bool q_metaassociation_can_insert_key(void* self) {
    return QMetaAssociation_CanInsertKey((QMetaAssociation*)self);
}

void q_metaassociation_insert_key(void* self, void* container, void* key) {
    QMetaAssociation_InsertKey((QMetaAssociation*)self, container, key);
}

bool q_metaassociation_can_remove_key(void* self) {
    return QMetaAssociation_CanRemoveKey((QMetaAssociation*)self);
}

void q_metaassociation_remove_key(void* self, void* container, void* key) {
    QMetaAssociation_RemoveKey((QMetaAssociation*)self, container, key);
}

bool q_metaassociation_can_contains_key(void* self) {
    return QMetaAssociation_CanContainsKey((QMetaAssociation*)self);
}

bool q_metaassociation_contains_key(void* self, void* container, void* key) {
    return QMetaAssociation_ContainsKey((QMetaAssociation*)self, container, key);
}

bool q_metaassociation_can_get_mapped_at_key(void* self) {
    return QMetaAssociation_CanGetMappedAtKey((QMetaAssociation*)self);
}

void q_metaassociation_mapped_at_key(void* self, void* container, void* key, void* mapped) {
    QMetaAssociation_MappedAtKey((QMetaAssociation*)self, container, key, mapped);
}

bool q_metaassociation_can_set_mapped_at_key(void* self) {
    return QMetaAssociation_CanSetMappedAtKey((QMetaAssociation*)self);
}

void q_metaassociation_set_mapped_at_key(void* self, void* container, void* key, void* mapped) {
    QMetaAssociation_SetMappedAtKey((QMetaAssociation*)self, container, key, mapped);
}

bool q_metaassociation_can_get_key_at_iterator(void* self) {
    return QMetaAssociation_CanGetKeyAtIterator((QMetaAssociation*)self);
}

void q_metaassociation_key_at_iterator(void* self, void* iterator, void* key) {
    QMetaAssociation_KeyAtIterator((QMetaAssociation*)self, iterator, key);
}

bool q_metaassociation_can_get_key_at_const_iterator(void* self) {
    return QMetaAssociation_CanGetKeyAtConstIterator((QMetaAssociation*)self);
}

void q_metaassociation_key_at_const_iterator(void* self, void* iterator, void* key) {
    QMetaAssociation_KeyAtConstIterator((QMetaAssociation*)self, iterator, key);
}

bool q_metaassociation_can_get_mapped_at_iterator(void* self) {
    return QMetaAssociation_CanGetMappedAtIterator((QMetaAssociation*)self);
}

void q_metaassociation_mapped_at_iterator(void* self, void* iterator, void* mapped) {
    QMetaAssociation_MappedAtIterator((QMetaAssociation*)self, iterator, mapped);
}

bool q_metaassociation_can_get_mapped_at_const_iterator(void* self) {
    return QMetaAssociation_CanGetMappedAtConstIterator((QMetaAssociation*)self);
}

void q_metaassociation_mapped_at_const_iterator(void* self, void* iterator, void* mapped) {
    QMetaAssociation_MappedAtConstIterator((QMetaAssociation*)self, iterator, mapped);
}

bool q_metaassociation_can_set_mapped_at_iterator(void* self) {
    return QMetaAssociation_CanSetMappedAtIterator((QMetaAssociation*)self);
}

void q_metaassociation_set_mapped_at_iterator(void* self, void* iterator, void* mapped) {
    QMetaAssociation_SetMappedAtIterator((QMetaAssociation*)self, iterator, mapped);
}

bool q_metaassociation_can_create_iterator_at_key(void* self) {
    return QMetaAssociation_CanCreateIteratorAtKey((QMetaAssociation*)self);
}

void* q_metaassociation_create_iterator_at_key(void* self, void* container, void* key) {
    return QMetaAssociation_CreateIteratorAtKey((QMetaAssociation*)self, container, key);
}

bool q_metaassociation_can_create_const_iterator_at_key(void* self) {
    return QMetaAssociation_CanCreateConstIteratorAtKey((QMetaAssociation*)self);
}

void* q_metaassociation_create_const_iterator_at_key(void* self, void* container, void* key) {
    return QMetaAssociation_CreateConstIteratorAtKey((QMetaAssociation*)self, container, key);
}

bool q_metaassociation_has_input_iterator(void* self) {
    return QMetaContainer_HasInputIterator((QMetaContainer*)self);
}

bool q_metaassociation_has_forward_iterator(void* self) {
    return QMetaContainer_HasForwardIterator((QMetaContainer*)self);
}

bool q_metaassociation_has_bidirectional_iterator(void* self) {
    return QMetaContainer_HasBidirectionalIterator((QMetaContainer*)self);
}

bool q_metaassociation_has_random_access_iterator(void* self) {
    return QMetaContainer_HasRandomAccessIterator((QMetaContainer*)self);
}

bool q_metaassociation_has_size(void* self) {
    return QMetaContainer_HasSize((QMetaContainer*)self);
}

int64_t q_metaassociation_size(void* self, void* container) {
    return QMetaContainer_Size((QMetaContainer*)self, container);
}

bool q_metaassociation_can_clear(void* self) {
    return QMetaContainer_CanClear((QMetaContainer*)self);
}

void q_metaassociation_clear(void* self, void* container) {
    QMetaContainer_Clear((QMetaContainer*)self, container);
}

bool q_metaassociation_has_iterator(void* self) {
    return QMetaContainer_HasIterator((QMetaContainer*)self);
}

void* q_metaassociation_begin(void* self, void* container) {
    return QMetaContainer_Begin((QMetaContainer*)self, container);
}

void* q_metaassociation_end(void* self, void* container) {
    return QMetaContainer_End((QMetaContainer*)self, container);
}

void q_metaassociation_destroy_iterator(void* self, void* iterator) {
    QMetaContainer_DestroyIterator((QMetaContainer*)self, iterator);
}

bool q_metaassociation_compare_iterator(void* self, void* i, void* j) {
    return QMetaContainer_CompareIterator((QMetaContainer*)self, i, j);
}

void q_metaassociation_copy_iterator(void* self, void* target, void* source) {
    QMetaContainer_CopyIterator((QMetaContainer*)self, target, source);
}

void q_metaassociation_advance_iterator(void* self, void* iterator, int64_t step) {
    QMetaContainer_AdvanceIterator((QMetaContainer*)self, iterator, step);
}

int64_t q_metaassociation_diff_iterator(void* self, void* i, void* j) {
    return QMetaContainer_DiffIterator((QMetaContainer*)self, i, j);
}

bool q_metaassociation_has_const_iterator(void* self) {
    return QMetaContainer_HasConstIterator((QMetaContainer*)self);
}

void* q_metaassociation_const_begin(void* self, void* container) {
    return QMetaContainer_ConstBegin((QMetaContainer*)self, container);
}

void* q_metaassociation_const_end(void* self, void* container) {
    return QMetaContainer_ConstEnd((QMetaContainer*)self, container);
}

void q_metaassociation_destroy_const_iterator(void* self, void* iterator) {
    QMetaContainer_DestroyConstIterator((QMetaContainer*)self, iterator);
}

bool q_metaassociation_compare_const_iterator(void* self, void* i, void* j) {
    return QMetaContainer_CompareConstIterator((QMetaContainer*)self, i, j);
}

void q_metaassociation_copy_const_iterator(void* self, void* target, void* source) {
    QMetaContainer_CopyConstIterator((QMetaContainer*)self, target, source);
}

void q_metaassociation_advance_const_iterator(void* self, void* iterator, int64_t step) {
    QMetaContainer_AdvanceConstIterator((QMetaContainer*)self, iterator, step);
}

int64_t q_metaassociation_diff_const_iterator(void* self, void* i, void* j) {
    return QMetaContainer_DiffConstIterator((QMetaContainer*)self, i, j);
}

void q_metaassociation_delete(void* self) {
    QMetaAssociation_Delete((QMetaAssociation*)(self));
}
