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

QMetaContainer* q_metacontainer_new(void* other);
QMetaContainer* q_metacontainer_new2(void* other);
QMetaContainer* q_metacontainer_new3();
QMetaContainer* q_metacontainer_new4(void* param1);
void q_metacontainer_copy_assign(void* self, void* other);
void q_metacontainer_move_assign(void* self, void* other);
bool q_metacontainer_has_input_iterator(void* self);
bool q_metacontainer_has_forward_iterator(void* self);
bool q_metacontainer_has_bidirectional_iterator(void* self);
bool q_metacontainer_has_random_access_iterator(void* self);
bool q_metacontainer_has_size(void* self);
int64_t q_metacontainer_size(void* self, void* container);
bool q_metacontainer_can_clear(void* self);
void q_metacontainer_clear(void* self, void* container);
bool q_metacontainer_has_iterator(void* self);
void* q_metacontainer_begin(void* self, void* container);
void* q_metacontainer_end(void* self, void* container);
void q_metacontainer_destroy_iterator(void* self, void* iterator);
bool q_metacontainer_compare_iterator(void* self, void* i, void* j);
void q_metacontainer_copy_iterator(void* self, void* target, void* source);
void q_metacontainer_advance_iterator(void* self, void* iterator, int64_t step);
int64_t q_metacontainer_diff_iterator(void* self, void* i, void* j);
bool q_metacontainer_has_const_iterator(void* self);
void* q_metacontainer_const_begin(void* self, void* container);
void* q_metacontainer_const_end(void* self, void* container);
void q_metacontainer_destroy_const_iterator(void* self, void* iterator);
bool q_metacontainer_compare_const_iterator(void* self, void* i, void* j);
void q_metacontainer_copy_const_iterator(void* self, void* target, void* source);
void q_metacontainer_advance_const_iterator(void* self, void* iterator, int64_t step);
int64_t q_metacontainer_diff_const_iterator(void* self, void* i, void* j);
void q_metacontainer_delete(void* self);

QMetaSequence* q_metasequence_new(void* other);
QMetaSequence* q_metasequence_new2(void* other);
QMetaSequence* q_metasequence_new3();
void q_metasequence_copy_assign(void* self, void* other);
void q_metasequence_move_assign(void* self, void* other);
QMetaType* q_metasequence_value_meta_type(void* self);
bool q_metasequence_is_sortable(void* self);
bool q_metasequence_can_add_value_at_begin(void* self);
void q_metasequence_add_value_at_begin(void* self, void* container, void* value);
bool q_metasequence_can_add_value_at_end(void* self);
void q_metasequence_add_value_at_end(void* self, void* container, void* value);
bool q_metasequence_can_remove_value_at_begin(void* self);
void q_metasequence_remove_value_at_begin(void* self, void* container);
bool q_metasequence_can_remove_value_at_end(void* self);
void q_metasequence_remove_value_at_end(void* self, void* container);
bool q_metasequence_can_get_value_at_index(void* self);
void q_metasequence_value_at_index(void* self, void* container, int64_t index, void* result);
bool q_metasequence_can_set_value_at_index(void* self);
void q_metasequence_set_value_at_index(void* self, void* container, int64_t index, void* value);
bool q_metasequence_can_add_value(void* self);
void q_metasequence_add_value(void* self, void* container, void* value);
bool q_metasequence_can_remove_value(void* self);
void q_metasequence_remove_value(void* self, void* container);
bool q_metasequence_can_get_value_at_iterator(void* self);
void q_metasequence_value_at_iterator(void* self, void* iterator, void* result);
bool q_metasequence_can_set_value_at_iterator(void* self);
void q_metasequence_set_value_at_iterator(void* self, void* iterator, void* value);
bool q_metasequence_can_insert_value_at_iterator(void* self);
void q_metasequence_insert_value_at_iterator(void* self, void* container, void* iterator, void* value);
bool q_metasequence_can_erase_value_at_iterator(void* self);
void q_metasequence_erase_value_at_iterator(void* self, void* container, void* iterator);
bool q_metasequence_can_erase_range_at_iterator(void* self);
void q_metasequence_erase_range_at_iterator(void* self, void* container, void* iterator1, void* iterator2);
bool q_metasequence_can_get_value_at_const_iterator(void* self);
void q_metasequence_value_at_const_iterator(void* self, void* iterator, void* result);
bool q_metasequence_has_input_iterator(void* self);
bool q_metasequence_has_forward_iterator(void* self);
bool q_metasequence_has_bidirectional_iterator(void* self);
bool q_metasequence_has_random_access_iterator(void* self);
bool q_metasequence_has_size(void* self);
int64_t q_metasequence_size(void* self, void* container);
bool q_metasequence_can_clear(void* self);
void q_metasequence_clear(void* self, void* container);
bool q_metasequence_has_iterator(void* self);
void* q_metasequence_begin(void* self, void* container);
void* q_metasequence_end(void* self, void* container);
void q_metasequence_destroy_iterator(void* self, void* iterator);
bool q_metasequence_compare_iterator(void* self, void* i, void* j);
void q_metasequence_copy_iterator(void* self, void* target, void* source);
void q_metasequence_advance_iterator(void* self, void* iterator, int64_t step);
int64_t q_metasequence_diff_iterator(void* self, void* i, void* j);
bool q_metasequence_has_const_iterator(void* self);
void* q_metasequence_const_begin(void* self, void* container);
void* q_metasequence_const_end(void* self, void* container);
void q_metasequence_destroy_const_iterator(void* self, void* iterator);
bool q_metasequence_compare_const_iterator(void* self, void* i, void* j);
void q_metasequence_copy_const_iterator(void* self, void* target, void* source);
void q_metasequence_advance_const_iterator(void* self, void* iterator, int64_t step);
int64_t q_metasequence_diff_const_iterator(void* self, void* i, void* j);
void q_metasequence_delete(void* self);

QMetaAssociation* q_metaassociation_new(void* other);
QMetaAssociation* q_metaassociation_new2(void* other);
QMetaAssociation* q_metaassociation_new3();
void q_metaassociation_copy_assign(void* self, void* other);
void q_metaassociation_move_assign(void* self, void* other);
QMetaType* q_metaassociation_key_meta_type(void* self);
QMetaType* q_metaassociation_mapped_meta_type(void* self);
bool q_metaassociation_can_insert_key(void* self);
void q_metaassociation_insert_key(void* self, void* container, void* key);
bool q_metaassociation_can_remove_key(void* self);
void q_metaassociation_remove_key(void* self, void* container, void* key);
bool q_metaassociation_can_contains_key(void* self);
bool q_metaassociation_contains_key(void* self, void* container, void* key);
bool q_metaassociation_can_get_mapped_at_key(void* self);
void q_metaassociation_mapped_at_key(void* self, void* container, void* key, void* mapped);
bool q_metaassociation_can_set_mapped_at_key(void* self);
void q_metaassociation_set_mapped_at_key(void* self, void* container, void* key, void* mapped);
bool q_metaassociation_can_get_key_at_iterator(void* self);
void q_metaassociation_key_at_iterator(void* self, void* iterator, void* key);
bool q_metaassociation_can_get_key_at_const_iterator(void* self);
void q_metaassociation_key_at_const_iterator(void* self, void* iterator, void* key);
bool q_metaassociation_can_get_mapped_at_iterator(void* self);
void q_metaassociation_mapped_at_iterator(void* self, void* iterator, void* mapped);
bool q_metaassociation_can_get_mapped_at_const_iterator(void* self);
void q_metaassociation_mapped_at_const_iterator(void* self, void* iterator, void* mapped);
bool q_metaassociation_can_set_mapped_at_iterator(void* self);
void q_metaassociation_set_mapped_at_iterator(void* self, void* iterator, void* mapped);
bool q_metaassociation_can_create_iterator_at_key(void* self);
void* q_metaassociation_create_iterator_at_key(void* self, void* container, void* key);
bool q_metaassociation_can_create_const_iterator_at_key(void* self);
void* q_metaassociation_create_const_iterator_at_key(void* self, void* container, void* key);
bool q_metaassociation_has_input_iterator(void* self);
bool q_metaassociation_has_forward_iterator(void* self);
bool q_metaassociation_has_bidirectional_iterator(void* self);
bool q_metaassociation_has_random_access_iterator(void* self);
bool q_metaassociation_has_size(void* self);
int64_t q_metaassociation_size(void* self, void* container);
bool q_metaassociation_can_clear(void* self);
void q_metaassociation_clear(void* self, void* container);
bool q_metaassociation_has_iterator(void* self);
void* q_metaassociation_begin(void* self, void* container);
void* q_metaassociation_end(void* self, void* container);
void q_metaassociation_destroy_iterator(void* self, void* iterator);
bool q_metaassociation_compare_iterator(void* self, void* i, void* j);
void q_metaassociation_copy_iterator(void* self, void* target, void* source);
void q_metaassociation_advance_iterator(void* self, void* iterator, int64_t step);
int64_t q_metaassociation_diff_iterator(void* self, void* i, void* j);
bool q_metaassociation_has_const_iterator(void* self);
void* q_metaassociation_const_begin(void* self, void* container);
void* q_metaassociation_const_end(void* self, void* container);
void q_metaassociation_destroy_const_iterator(void* self, void* iterator);
bool q_metaassociation_compare_const_iterator(void* self, void* i, void* j);
void q_metaassociation_copy_const_iterator(void* self, void* target, void* source);
void q_metaassociation_advance_const_iterator(void* self, void* iterator, int64_t step);
int64_t q_metaassociation_diff_const_iterator(void* self, void* i, void* j);
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
