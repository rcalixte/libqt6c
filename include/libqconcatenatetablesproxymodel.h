#pragma once
#ifndef SRCQT6C_LIBQCONCATENATETABLESPROXYMODEL_H
#define SRCQT6C_LIBQCONCATENATETABLESPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemmodel.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqdatastream.h"
#include "libqmetaobject.h"
#include "libqmimedata.h"
#include "libqobject.h"
#include "libqsize.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QConcatenateTablesProxyModel* q_concatenatetablesproxymodel_new();
QConcatenateTablesProxyModel* q_concatenatetablesproxymodel_new2(void* parent);
QMetaObject* q_concatenatetablesproxymodel_meta_object(void* self);
void* q_concatenatetablesproxymodel_metacast(void* self, const char* param1);
int32_t q_concatenatetablesproxymodel_metacall(void* self, int64_t param1, int param2, void* param3);
void q_concatenatetablesproxymodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_concatenatetablesproxymodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_concatenatetablesproxymodel_tr(const char* s);
libqt_list /* of QAbstractItemModel* */ q_concatenatetablesproxymodel_source_models(void* self);
void q_concatenatetablesproxymodel_add_source_model(void* self, void* sourceModel);
void q_concatenatetablesproxymodel_remove_source_model(void* self, void* sourceModel);
QModelIndex* q_concatenatetablesproxymodel_map_from_source(void* self, void* sourceIndex);
QModelIndex* q_concatenatetablesproxymodel_map_to_source(void* self, void* proxyIndex);
QVariant* q_concatenatetablesproxymodel_data(void* self, void* index, int role);
void q_concatenatetablesproxymodel_on_data(void* self, QVariant* (*slot)(void*, void*, int));
QVariant* q_concatenatetablesproxymodel_qbase_data(void* self, void* index, int role);
bool q_concatenatetablesproxymodel_set_data(void* self, void* index, void* value, int role);
void q_concatenatetablesproxymodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int));
bool q_concatenatetablesproxymodel_qbase_set_data(void* self, void* index, void* value, int role);
libqt_map /* of int to QVariant* */ q_concatenatetablesproxymodel_item_data(void* self, void* proxyIndex);
void q_concatenatetablesproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*));
libqt_map /* of int to QVariant* */ q_concatenatetablesproxymodel_qbase_item_data(void* self, void* proxyIndex);
bool q_concatenatetablesproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);
void q_concatenatetablesproxymodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */));
bool q_concatenatetablesproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);
int64_t q_concatenatetablesproxymodel_flags(void* self, void* index);
void q_concatenatetablesproxymodel_on_flags(void* self, int64_t (*slot)(void*, void*));
int64_t q_concatenatetablesproxymodel_qbase_flags(void* self, void* index);
QModelIndex* q_concatenatetablesproxymodel_index(void* self, int row, int column, void* parent);
void q_concatenatetablesproxymodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*));
QModelIndex* q_concatenatetablesproxymodel_qbase_index(void* self, int row, int column, void* parent);
QModelIndex* q_concatenatetablesproxymodel_parent(void* self, void* index);
void q_concatenatetablesproxymodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*));
QModelIndex* q_concatenatetablesproxymodel_qbase_parent(void* self, void* index);
int32_t q_concatenatetablesproxymodel_row_count(void* self, void* parent);
void q_concatenatetablesproxymodel_on_row_count(void* self, int32_t (*slot)(void*, void*));
int32_t q_concatenatetablesproxymodel_qbase_row_count(void* self, void* parent);
QVariant* q_concatenatetablesproxymodel_header_data(void* self, int section, int64_t orientation, int role);
void q_concatenatetablesproxymodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int));
QVariant* q_concatenatetablesproxymodel_qbase_header_data(void* self, int section, int64_t orientation, int role);
int32_t q_concatenatetablesproxymodel_column_count(void* self, void* parent);
void q_concatenatetablesproxymodel_on_column_count(void* self, int32_t (*slot)(void*, void*));
int32_t q_concatenatetablesproxymodel_qbase_column_count(void* self, void* parent);
const char** q_concatenatetablesproxymodel_mime_types(void* self);
void q_concatenatetablesproxymodel_on_mime_types(void* self, const char** (*slot)());
const char** q_concatenatetablesproxymodel_qbase_mime_types(void* self);
QMimeData* q_concatenatetablesproxymodel_mime_data(void* self, void* indexes[]);
void q_concatenatetablesproxymodel_on_mime_data(void* self, QMimeData* (*slot)(void*, void*));
QMimeData* q_concatenatetablesproxymodel_qbase_mime_data(void* self, void* indexes[]);
bool q_concatenatetablesproxymodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);
void q_concatenatetablesproxymodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));
bool q_concatenatetablesproxymodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);
bool q_concatenatetablesproxymodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);
void q_concatenatetablesproxymodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));
bool q_concatenatetablesproxymodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);
QSize* q_concatenatetablesproxymodel_span(void* self, void* index);
void q_concatenatetablesproxymodel_on_span(void* self, QSize* (*slot)(void*, void*));
QSize* q_concatenatetablesproxymodel_qbase_span(void* self, void* index);
const char* q_concatenatetablesproxymodel_tr2(const char* s, const char* c);
const char* q_concatenatetablesproxymodel_tr3(const char* s, const char* c, int n);
bool q_concatenatetablesproxymodel_has_index(void* self, int row, int column);
bool q_concatenatetablesproxymodel_insert_row(void* self, int row);
bool q_concatenatetablesproxymodel_insert_column(void* self, int column);
bool q_concatenatetablesproxymodel_remove_row(void* self, int row);
bool q_concatenatetablesproxymodel_remove_column(void* self, int column);
bool q_concatenatetablesproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);
bool q_concatenatetablesproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);
bool q_concatenatetablesproxymodel_check_index(void* self, void* index);
void q_concatenatetablesproxymodel_data_changed(void* self, void* topLeft, void* bottomRight);
void q_concatenatetablesproxymodel_on_data_changed(void* self, void (*slot)(void*, void*, void*));
void q_concatenatetablesproxymodel_header_data_changed(void* self, int64_t orientation, int first, int last);
void q_concatenatetablesproxymodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int));
void q_concatenatetablesproxymodel_layout_changed(void* self);
void q_concatenatetablesproxymodel_on_layout_changed(void* self, void (*slot)(void*));
void q_concatenatetablesproxymodel_layout_about_to_be_changed(void* self);
void q_concatenatetablesproxymodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*));
bool q_concatenatetablesproxymodel_has_index3(void* self, int row, int column, void* parent);
bool q_concatenatetablesproxymodel_insert_row2(void* self, int row, void* parent);
bool q_concatenatetablesproxymodel_insert_column2(void* self, int column, void* parent);
bool q_concatenatetablesproxymodel_remove_row2(void* self, int row, void* parent);
bool q_concatenatetablesproxymodel_remove_column2(void* self, int column, void* parent);
bool q_concatenatetablesproxymodel_check_index2(void* self, void* index, int64_t options);
void q_concatenatetablesproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]);
void q_concatenatetablesproxymodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*));
void q_concatenatetablesproxymodel_layout_changed1(void* self, void* parents[]);
void q_concatenatetablesproxymodel_on_layout_changed1(void* self, void (*slot)(void*, void*));
void q_concatenatetablesproxymodel_layout_changed2(void* self, void* parents[], int64_t hint);
void q_concatenatetablesproxymodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t));
void q_concatenatetablesproxymodel_layout_about_to_be_changed1(void* self, void* parents[]);
void q_concatenatetablesproxymodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*));
void q_concatenatetablesproxymodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint);
void q_concatenatetablesproxymodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t));
const char* q_concatenatetablesproxymodel_object_name(void* self);
void q_concatenatetablesproxymodel_set_object_name(void* self, const char* name);
bool q_concatenatetablesproxymodel_is_widget_type(void* self);
bool q_concatenatetablesproxymodel_is_window_type(void* self);
bool q_concatenatetablesproxymodel_is_quick_item_type(void* self);
bool q_concatenatetablesproxymodel_signals_blocked(void* self);
bool q_concatenatetablesproxymodel_block_signals(void* self, bool b);
QThread* q_concatenatetablesproxymodel_thread(void* self);
void q_concatenatetablesproxymodel_move_to_thread(void* self, void* thread);
int32_t q_concatenatetablesproxymodel_start_timer(void* self, int interval);
void q_concatenatetablesproxymodel_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_concatenatetablesproxymodel_children(void* self);
void q_concatenatetablesproxymodel_set_parent(void* self, void* parent);
void q_concatenatetablesproxymodel_install_event_filter(void* self, void* filterObj);
void q_concatenatetablesproxymodel_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_concatenatetablesproxymodel_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_concatenatetablesproxymodel_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_concatenatetablesproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_concatenatetablesproxymodel_disconnect_with_q_meta_object_connection(void* param1);
void q_concatenatetablesproxymodel_dump_object_tree(void* self);
void q_concatenatetablesproxymodel_dump_object_info(void* self);
bool q_concatenatetablesproxymodel_set_property(void* self, const char* name, void* value);
QVariant* q_concatenatetablesproxymodel_property(void* self, const char* name);
const char** q_concatenatetablesproxymodel_dynamic_property_names(void* self);
QBindingStorage* q_concatenatetablesproxymodel_binding_storage(void* self);
QBindingStorage* q_concatenatetablesproxymodel_binding_storage2(void* self);
void q_concatenatetablesproxymodel_destroyed(void* self);
void q_concatenatetablesproxymodel_on_destroyed(void* self, void (*slot)(void*));
bool q_concatenatetablesproxymodel_inherits(void* self, const char* classname);
void q_concatenatetablesproxymodel_delete_later(void* self);
int32_t q_concatenatetablesproxymodel_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_concatenatetablesproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_concatenatetablesproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_concatenatetablesproxymodel_destroyed1(void* self, void* param1);
void q_concatenatetablesproxymodel_on_destroyed1(void* self, void (*slot)(void*, void*));
QModelIndex* q_concatenatetablesproxymodel_sibling(void* self, int row, int column, void* idx);
QModelIndex* q_concatenatetablesproxymodel_qbase_sibling(void* self, int row, int column, void* idx);
void q_concatenatetablesproxymodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*));
bool q_concatenatetablesproxymodel_has_children(void* self, void* parent);
bool q_concatenatetablesproxymodel_qbase_has_children(void* self, void* parent);
void q_concatenatetablesproxymodel_on_has_children(void* self, bool (*slot)(void*, void*));
bool q_concatenatetablesproxymodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role);
bool q_concatenatetablesproxymodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role);
void q_concatenatetablesproxymodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int));
bool q_concatenatetablesproxymodel_clear_item_data(void* self, void* index);
bool q_concatenatetablesproxymodel_qbase_clear_item_data(void* self, void* index);
void q_concatenatetablesproxymodel_on_clear_item_data(void* self, bool (*slot)(void*, void*));
int64_t q_concatenatetablesproxymodel_supported_drop_actions(void* self);
int64_t q_concatenatetablesproxymodel_qbase_supported_drop_actions(void* self);
void q_concatenatetablesproxymodel_on_supported_drop_actions(void* self, int64_t (*slot)());
int64_t q_concatenatetablesproxymodel_supported_drag_actions(void* self);
int64_t q_concatenatetablesproxymodel_qbase_supported_drag_actions(void* self);
void q_concatenatetablesproxymodel_on_supported_drag_actions(void* self, int64_t (*slot)());
bool q_concatenatetablesproxymodel_insert_rows(void* self, int row, int count, void* parent);
bool q_concatenatetablesproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent);
void q_concatenatetablesproxymodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*));
bool q_concatenatetablesproxymodel_insert_columns(void* self, int column, int count, void* parent);
bool q_concatenatetablesproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent);
void q_concatenatetablesproxymodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*));
bool q_concatenatetablesproxymodel_remove_rows(void* self, int row, int count, void* parent);
bool q_concatenatetablesproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent);
void q_concatenatetablesproxymodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*));
bool q_concatenatetablesproxymodel_remove_columns(void* self, int column, int count, void* parent);
bool q_concatenatetablesproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent);
void q_concatenatetablesproxymodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*));
bool q_concatenatetablesproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);
bool q_concatenatetablesproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);
void q_concatenatetablesproxymodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));
bool q_concatenatetablesproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);
bool q_concatenatetablesproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);
void q_concatenatetablesproxymodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));
void q_concatenatetablesproxymodel_fetch_more(void* self, void* parent);
void q_concatenatetablesproxymodel_qbase_fetch_more(void* self, void* parent);
void q_concatenatetablesproxymodel_on_fetch_more(void* self, void (*slot)(void*, void*));
bool q_concatenatetablesproxymodel_can_fetch_more(void* self, void* parent);
bool q_concatenatetablesproxymodel_qbase_can_fetch_more(void* self, void* parent);
void q_concatenatetablesproxymodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*));
void q_concatenatetablesproxymodel_sort(void* self, int column, int64_t order);
void q_concatenatetablesproxymodel_qbase_sort(void* self, int column, int64_t order);
void q_concatenatetablesproxymodel_on_sort(void* self, void (*slot)(void*, int, int64_t));
QModelIndex* q_concatenatetablesproxymodel_buddy(void* self, void* index);
QModelIndex* q_concatenatetablesproxymodel_qbase_buddy(void* self, void* index);
void q_concatenatetablesproxymodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*));
libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);
libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);
void q_concatenatetablesproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t));
libqt_map /* of int to char* */ q_concatenatetablesproxymodel_role_names(void* self);
libqt_map /* of int to char* */ q_concatenatetablesproxymodel_qbase_role_names(void* self);
void q_concatenatetablesproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)());
void q_concatenatetablesproxymodel_multi_data(void* self, void* index, void* roleDataSpan);
void q_concatenatetablesproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);
void q_concatenatetablesproxymodel_on_multi_data(void* self, void (*slot)(void*, void*, void*));
bool q_concatenatetablesproxymodel_submit(void* self);
bool q_concatenatetablesproxymodel_qbase_submit(void* self);
void q_concatenatetablesproxymodel_on_submit(void* self, bool (*slot)());
void q_concatenatetablesproxymodel_revert(void* self);
void q_concatenatetablesproxymodel_qbase_revert(void* self);
void q_concatenatetablesproxymodel_on_revert(void* self, void (*slot)());
void q_concatenatetablesproxymodel_reset_internal_data(void* self);
void q_concatenatetablesproxymodel_qbase_reset_internal_data(void* self);
void q_concatenatetablesproxymodel_on_reset_internal_data(void* self, void (*slot)());
bool q_concatenatetablesproxymodel_event(void* self, void* event);
bool q_concatenatetablesproxymodel_qbase_event(void* self, void* event);
void q_concatenatetablesproxymodel_on_event(void* self, bool (*slot)(void*, void*));
bool q_concatenatetablesproxymodel_event_filter(void* self, void* watched, void* event);
bool q_concatenatetablesproxymodel_qbase_event_filter(void* self, void* watched, void* event);
void q_concatenatetablesproxymodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_concatenatetablesproxymodel_timer_event(void* self, void* event);
void q_concatenatetablesproxymodel_qbase_timer_event(void* self, void* event);
void q_concatenatetablesproxymodel_on_timer_event(void* self, void (*slot)(void*, void*));
void q_concatenatetablesproxymodel_child_event(void* self, void* event);
void q_concatenatetablesproxymodel_qbase_child_event(void* self, void* event);
void q_concatenatetablesproxymodel_on_child_event(void* self, void (*slot)(void*, void*));
void q_concatenatetablesproxymodel_custom_event(void* self, void* event);
void q_concatenatetablesproxymodel_qbase_custom_event(void* self, void* event);
void q_concatenatetablesproxymodel_on_custom_event(void* self, void (*slot)(void*, void*));
void q_concatenatetablesproxymodel_connect_notify(void* self, void* signal);
void q_concatenatetablesproxymodel_qbase_connect_notify(void* self, void* signal);
void q_concatenatetablesproxymodel_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_concatenatetablesproxymodel_disconnect_notify(void* self, void* signal);
void q_concatenatetablesproxymodel_qbase_disconnect_notify(void* self, void* signal);
void q_concatenatetablesproxymodel_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QModelIndex* q_concatenatetablesproxymodel_create_index(void* self, int row, int column);
QModelIndex* q_concatenatetablesproxymodel_qbase_create_index(void* self, int row, int column);
void q_concatenatetablesproxymodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int));
void q_concatenatetablesproxymodel_encode_data(void* self, void* indexes[], void* stream);
void q_concatenatetablesproxymodel_qbase_encode_data(void* self, void* indexes[], void* stream);
void q_concatenatetablesproxymodel_on_encode_data(void* self, void (*slot)(void*, void*, void*));
bool q_concatenatetablesproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream);
bool q_concatenatetablesproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);
void q_concatenatetablesproxymodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*));
void q_concatenatetablesproxymodel_begin_insert_rows(void* self, void* parent, int first, int last);
void q_concatenatetablesproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);
void q_concatenatetablesproxymodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int));
void q_concatenatetablesproxymodel_end_insert_rows(void* self);
void q_concatenatetablesproxymodel_qbase_end_insert_rows(void* self);
void q_concatenatetablesproxymodel_on_end_insert_rows(void* self, void (*slot)());
void q_concatenatetablesproxymodel_begin_remove_rows(void* self, void* parent, int first, int last);
void q_concatenatetablesproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);
void q_concatenatetablesproxymodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int));
void q_concatenatetablesproxymodel_end_remove_rows(void* self);
void q_concatenatetablesproxymodel_qbase_end_remove_rows(void* self);
void q_concatenatetablesproxymodel_on_end_remove_rows(void* self, void (*slot)());
bool q_concatenatetablesproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);
bool q_concatenatetablesproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);
void q_concatenatetablesproxymodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));
void q_concatenatetablesproxymodel_end_move_rows(void* self);
void q_concatenatetablesproxymodel_qbase_end_move_rows(void* self);
void q_concatenatetablesproxymodel_on_end_move_rows(void* self, void (*slot)());
void q_concatenatetablesproxymodel_begin_insert_columns(void* self, void* parent, int first, int last);
void q_concatenatetablesproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);
void q_concatenatetablesproxymodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int));
void q_concatenatetablesproxymodel_end_insert_columns(void* self);
void q_concatenatetablesproxymodel_qbase_end_insert_columns(void* self);
void q_concatenatetablesproxymodel_on_end_insert_columns(void* self, void (*slot)());
void q_concatenatetablesproxymodel_begin_remove_columns(void* self, void* parent, int first, int last);
void q_concatenatetablesproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);
void q_concatenatetablesproxymodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int));
void q_concatenatetablesproxymodel_end_remove_columns(void* self);
void q_concatenatetablesproxymodel_qbase_end_remove_columns(void* self);
void q_concatenatetablesproxymodel_on_end_remove_columns(void* self, void (*slot)());
bool q_concatenatetablesproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);
bool q_concatenatetablesproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);
void q_concatenatetablesproxymodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));
void q_concatenatetablesproxymodel_end_move_columns(void* self);
void q_concatenatetablesproxymodel_qbase_end_move_columns(void* self);
void q_concatenatetablesproxymodel_on_end_move_columns(void* self, void (*slot)());
void q_concatenatetablesproxymodel_begin_reset_model(void* self);
void q_concatenatetablesproxymodel_qbase_begin_reset_model(void* self);
void q_concatenatetablesproxymodel_on_begin_reset_model(void* self, void (*slot)());
void q_concatenatetablesproxymodel_end_reset_model(void* self);
void q_concatenatetablesproxymodel_qbase_end_reset_model(void* self);
void q_concatenatetablesproxymodel_on_end_reset_model(void* self, void (*slot)());
void q_concatenatetablesproxymodel_change_persistent_index(void* self, void* from, void* to);
void q_concatenatetablesproxymodel_qbase_change_persistent_index(void* self, void* from, void* to);
void q_concatenatetablesproxymodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*));
void q_concatenatetablesproxymodel_change_persistent_index_list(void* self, void* from[], void* to[]);
void q_concatenatetablesproxymodel_qbase_change_persistent_index_list(void* self, void* from[], void* to[]);
void q_concatenatetablesproxymodel_on_change_persistent_index_list(void* self, void (*slot)(void*, void*, void*));
libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_persistent_index_list(void* self);
libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_qbase_persistent_index_list(void* self);
void q_concatenatetablesproxymodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)());
QObject* q_concatenatetablesproxymodel_sender(void* self);
QObject* q_concatenatetablesproxymodel_qbase_sender(void* self);
void q_concatenatetablesproxymodel_on_sender(void* self, QObject* (*slot)());
int32_t q_concatenatetablesproxymodel_sender_signal_index(void* self);
int32_t q_concatenatetablesproxymodel_qbase_sender_signal_index(void* self);
void q_concatenatetablesproxymodel_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_concatenatetablesproxymodel_receivers(void* self, const char* signal);
int32_t q_concatenatetablesproxymodel_qbase_receivers(void* self, const char* signal);
void q_concatenatetablesproxymodel_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_concatenatetablesproxymodel_is_signal_connected(void* self, void* signal);
bool q_concatenatetablesproxymodel_qbase_is_signal_connected(void* self, void* signal);
void q_concatenatetablesproxymodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_concatenatetablesproxymodel_delete(void* self);

#endif
