#pragma once
#ifndef SRCQT6C_LIBQFILESYSTEMMODEL_H
#define SRCQT6C_LIBQFILESYSTEMMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractfileiconprovider.h"
#include "libqabstractitemmodel.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqdatastream.h"
#include "libqdatetime.h"
#include "libqdir.h"
#include "libqfileinfo.h"
#include "libqicon.h"
#include "libqmetaobject.h"
#include "libqmimedata.h"
#include "libqobject.h"
#include "libqsize.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QFileSystemModel* q_filesystemmodel_new();
QFileSystemModel* q_filesystemmodel_new2(void* parent);
QMetaObject* q_filesystemmodel_meta_object(void* self);
void* q_filesystemmodel_metacast(void* self, const char* param1);
int32_t q_filesystemmodel_metacall(void* self, int64_t param1, int param2, void* param3);
void q_filesystemmodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_filesystemmodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_filesystemmodel_tr(const char* s);
void q_filesystemmodel_root_path_changed(void* self, const char* newPath);
void q_filesystemmodel_on_root_path_changed(void* self, void (*slot)(void*, const char*));
void q_filesystemmodel_file_renamed(void* self, const char* path, const char* oldName, const char* newName);
void q_filesystemmodel_on_file_renamed(void* self, void (*slot)(void*, const char*, const char*, const char*));
void q_filesystemmodel_directory_loaded(void* self, const char* path);
void q_filesystemmodel_on_directory_loaded(void* self, void (*slot)(void*, const char*));
QModelIndex* q_filesystemmodel_index(void* self, int row, int column, void* parent);
void q_filesystemmodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*));
QModelIndex* q_filesystemmodel_qbase_index(void* self, int row, int column, void* parent);
QModelIndex* q_filesystemmodel_index_with_path(void* self, const char* path);
QModelIndex* q_filesystemmodel_parent(void* self, void* child);
void q_filesystemmodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*));
QModelIndex* q_filesystemmodel_qbase_parent(void* self, void* child);
QModelIndex* q_filesystemmodel_sibling(void* self, int row, int column, void* idx);
void q_filesystemmodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*));
QModelIndex* q_filesystemmodel_qbase_sibling(void* self, int row, int column, void* idx);
bool q_filesystemmodel_has_children(void* self, void* parent);
void q_filesystemmodel_on_has_children(void* self, bool (*slot)(void*, void*));
bool q_filesystemmodel_qbase_has_children(void* self, void* parent);
bool q_filesystemmodel_can_fetch_more(void* self, void* parent);
void q_filesystemmodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*));
bool q_filesystemmodel_qbase_can_fetch_more(void* self, void* parent);
void q_filesystemmodel_fetch_more(void* self, void* parent);
void q_filesystemmodel_on_fetch_more(void* self, void (*slot)(void*, void*));
void q_filesystemmodel_qbase_fetch_more(void* self, void* parent);
int32_t q_filesystemmodel_row_count(void* self, void* parent);
void q_filesystemmodel_on_row_count(void* self, int32_t (*slot)(void*, void*));
int32_t q_filesystemmodel_qbase_row_count(void* self, void* parent);
int32_t q_filesystemmodel_column_count(void* self, void* parent);
void q_filesystemmodel_on_column_count(void* self, int32_t (*slot)(void*, void*));
int32_t q_filesystemmodel_qbase_column_count(void* self, void* parent);
QVariant* q_filesystemmodel_my_computer(void* self);
QVariant* q_filesystemmodel_data(void* self, void* index, int role);
void q_filesystemmodel_on_data(void* self, QVariant* (*slot)(void*, void*, int));
QVariant* q_filesystemmodel_qbase_data(void* self, void* index, int role);
bool q_filesystemmodel_set_data(void* self, void* index, void* value, int role);
void q_filesystemmodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int));
bool q_filesystemmodel_qbase_set_data(void* self, void* index, void* value, int role);
QVariant* q_filesystemmodel_header_data(void* self, int section, int64_t orientation, int role);
void q_filesystemmodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int));
QVariant* q_filesystemmodel_qbase_header_data(void* self, int section, int64_t orientation, int role);
int64_t q_filesystemmodel_flags(void* self, void* index);
void q_filesystemmodel_on_flags(void* self, int64_t (*slot)(void*, void*));
int64_t q_filesystemmodel_qbase_flags(void* self, void* index);
void q_filesystemmodel_sort(void* self, int column, int64_t order);
void q_filesystemmodel_on_sort(void* self, void (*slot)(void*, int, int64_t));
void q_filesystemmodel_qbase_sort(void* self, int column, int64_t order);
const char** q_filesystemmodel_mime_types(void* self);
void q_filesystemmodel_on_mime_types(void* self, const char** (*slot)());
const char** q_filesystemmodel_qbase_mime_types(void* self);
QMimeData* q_filesystemmodel_mime_data(void* self, void* indexes[]);
void q_filesystemmodel_on_mime_data(void* self, QMimeData* (*slot)(void*, void*));
QMimeData* q_filesystemmodel_qbase_mime_data(void* self, void* indexes[]);
bool q_filesystemmodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);
void q_filesystemmodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));
bool q_filesystemmodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);
int64_t q_filesystemmodel_supported_drop_actions(void* self);
void q_filesystemmodel_on_supported_drop_actions(void* self, int64_t (*slot)());
int64_t q_filesystemmodel_qbase_supported_drop_actions(void* self);
libqt_map /* of int to char* */ q_filesystemmodel_role_names(void* self);
void q_filesystemmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)());
libqt_map /* of int to char* */ q_filesystemmodel_qbase_role_names(void* self);
QModelIndex* q_filesystemmodel_set_root_path(void* self, const char* path);
const char* q_filesystemmodel_root_path(void* self);
QDir* q_filesystemmodel_root_directory(void* self);
void q_filesystemmodel_set_icon_provider(void* self, void* provider);
QAbstractFileIconProvider* q_filesystemmodel_icon_provider(void* self);
void q_filesystemmodel_set_filter(void* self, int64_t filters);
int64_t q_filesystemmodel_filter(void* self);
void q_filesystemmodel_set_resolve_symlinks(void* self, bool enable);
bool q_filesystemmodel_resolve_symlinks(void* self);
void q_filesystemmodel_set_read_only(void* self, bool enable);
bool q_filesystemmodel_is_read_only(void* self);
void q_filesystemmodel_set_name_filter_disables(void* self, bool enable);
bool q_filesystemmodel_name_filter_disables(void* self);
void q_filesystemmodel_set_name_filters(void* self, const char* filters[]);
const char** q_filesystemmodel_name_filters(void* self);
void q_filesystemmodel_set_option(void* self, int64_t option);
bool q_filesystemmodel_test_option(void* self, int64_t option);
void q_filesystemmodel_set_options(void* self, int64_t options);
int64_t q_filesystemmodel_options(void* self);
const char* q_filesystemmodel_file_path(void* self, void* index);
bool q_filesystemmodel_is_dir(void* self, void* index);
long long q_filesystemmodel_size(void* self, void* index);
const char* q_filesystemmodel_type(void* self, void* index);
QDateTime* q_filesystemmodel_last_modified(void* self, void* index);
QModelIndex* q_filesystemmodel_mkdir(void* self, void* parent, const char* name);
bool q_filesystemmodel_rmdir(void* self, void* index);
const char* q_filesystemmodel_file_name(void* self, void* index);
QIcon* q_filesystemmodel_file_icon(void* self, void* index);
int64_t q_filesystemmodel_permissions(void* self, void* index);
QFileInfo* q_filesystemmodel_file_info(void* self, void* index);
bool q_filesystemmodel_remove(void* self, void* index);
void q_filesystemmodel_timer_event(void* self, void* event);
void q_filesystemmodel_on_timer_event(void* self, void (*slot)(void*, void*));
void q_filesystemmodel_qbase_timer_event(void* self, void* event);
bool q_filesystemmodel_event(void* self, void* event);
void q_filesystemmodel_on_event(void* self, bool (*slot)(void*, void*));
bool q_filesystemmodel_qbase_event(void* self, void* event);
const char* q_filesystemmodel_tr2(const char* s, const char* c);
const char* q_filesystemmodel_tr3(const char* s, const char* c, int n);
QModelIndex* q_filesystemmodel_index2(void* self, const char* path, int column);
QVariant* q_filesystemmodel_my_computer1(void* self, int role);
void q_filesystemmodel_set_option2(void* self, int64_t option, bool on);
bool q_filesystemmodel_has_index(void* self, int row, int column);
bool q_filesystemmodel_insert_row(void* self, int row);
bool q_filesystemmodel_insert_column(void* self, int column);
bool q_filesystemmodel_remove_row(void* self, int row);
bool q_filesystemmodel_remove_column(void* self, int column);
bool q_filesystemmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);
bool q_filesystemmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);
bool q_filesystemmodel_check_index(void* self, void* index);
void q_filesystemmodel_data_changed(void* self, void* topLeft, void* bottomRight);
void q_filesystemmodel_on_data_changed(void* self, void (*slot)(void*, void*, void*));
void q_filesystemmodel_header_data_changed(void* self, int64_t orientation, int first, int last);
void q_filesystemmodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int));
void q_filesystemmodel_layout_changed(void* self);
void q_filesystemmodel_on_layout_changed(void* self, void (*slot)(void*));
void q_filesystemmodel_layout_about_to_be_changed(void* self);
void q_filesystemmodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*));
bool q_filesystemmodel_has_index3(void* self, int row, int column, void* parent);
bool q_filesystemmodel_insert_row2(void* self, int row, void* parent);
bool q_filesystemmodel_insert_column2(void* self, int column, void* parent);
bool q_filesystemmodel_remove_row2(void* self, int row, void* parent);
bool q_filesystemmodel_remove_column2(void* self, int column, void* parent);
bool q_filesystemmodel_check_index2(void* self, void* index, int64_t options);
void q_filesystemmodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]);
void q_filesystemmodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*));
void q_filesystemmodel_layout_changed1(void* self, void* parents[]);
void q_filesystemmodel_on_layout_changed1(void* self, void (*slot)(void*, void*));
void q_filesystemmodel_layout_changed2(void* self, void* parents[], int64_t hint);
void q_filesystemmodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t));
void q_filesystemmodel_layout_about_to_be_changed1(void* self, void* parents[]);
void q_filesystemmodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*));
void q_filesystemmodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint);
void q_filesystemmodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t));
const char* q_filesystemmodel_object_name(void* self);
void q_filesystemmodel_set_object_name(void* self, const char* name);
bool q_filesystemmodel_is_widget_type(void* self);
bool q_filesystemmodel_is_window_type(void* self);
bool q_filesystemmodel_is_quick_item_type(void* self);
bool q_filesystemmodel_signals_blocked(void* self);
bool q_filesystemmodel_block_signals(void* self, bool b);
QThread* q_filesystemmodel_thread(void* self);
void q_filesystemmodel_move_to_thread(void* self, void* thread);
int32_t q_filesystemmodel_start_timer(void* self, int interval);
void q_filesystemmodel_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_filesystemmodel_children(void* self);
void q_filesystemmodel_set_parent(void* self, void* parent);
void q_filesystemmodel_install_event_filter(void* self, void* filterObj);
void q_filesystemmodel_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_filesystemmodel_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_filesystemmodel_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_filesystemmodel_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_filesystemmodel_disconnect_with_q_meta_object_connection(void* param1);
void q_filesystemmodel_dump_object_tree(void* self);
void q_filesystemmodel_dump_object_info(void* self);
bool q_filesystemmodel_set_property(void* self, const char* name, void* value);
QVariant* q_filesystemmodel_property(void* self, const char* name);
const char** q_filesystemmodel_dynamic_property_names(void* self);
QBindingStorage* q_filesystemmodel_binding_storage(void* self);
QBindingStorage* q_filesystemmodel_binding_storage2(void* self);
void q_filesystemmodel_destroyed(void* self);
void q_filesystemmodel_on_destroyed(void* self, void (*slot)(void*));
bool q_filesystemmodel_inherits(void* self, const char* classname);
void q_filesystemmodel_delete_later(void* self);
int32_t q_filesystemmodel_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_filesystemmodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_filesystemmodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_filesystemmodel_destroyed1(void* self, void* param1);
void q_filesystemmodel_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_filesystemmodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role);
bool q_filesystemmodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role);
void q_filesystemmodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int));
libqt_map /* of int to QVariant* */ q_filesystemmodel_item_data(void* self, void* index);
libqt_map /* of int to QVariant* */ q_filesystemmodel_qbase_item_data(void* self, void* index);
void q_filesystemmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*));
bool q_filesystemmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);
bool q_filesystemmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);
void q_filesystemmodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */));
bool q_filesystemmodel_clear_item_data(void* self, void* index);
bool q_filesystemmodel_qbase_clear_item_data(void* self, void* index);
void q_filesystemmodel_on_clear_item_data(void* self, bool (*slot)(void*, void*));
bool q_filesystemmodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);
bool q_filesystemmodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);
void q_filesystemmodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));
int64_t q_filesystemmodel_supported_drag_actions(void* self);
int64_t q_filesystemmodel_qbase_supported_drag_actions(void* self);
void q_filesystemmodel_on_supported_drag_actions(void* self, int64_t (*slot)());
bool q_filesystemmodel_insert_rows(void* self, int row, int count, void* parent);
bool q_filesystemmodel_qbase_insert_rows(void* self, int row, int count, void* parent);
void q_filesystemmodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*));
bool q_filesystemmodel_insert_columns(void* self, int column, int count, void* parent);
bool q_filesystemmodel_qbase_insert_columns(void* self, int column, int count, void* parent);
void q_filesystemmodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*));
bool q_filesystemmodel_remove_rows(void* self, int row, int count, void* parent);
bool q_filesystemmodel_qbase_remove_rows(void* self, int row, int count, void* parent);
void q_filesystemmodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*));
bool q_filesystemmodel_remove_columns(void* self, int column, int count, void* parent);
bool q_filesystemmodel_qbase_remove_columns(void* self, int column, int count, void* parent);
void q_filesystemmodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*));
bool q_filesystemmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);
bool q_filesystemmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);
void q_filesystemmodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));
bool q_filesystemmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);
bool q_filesystemmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);
void q_filesystemmodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));
QModelIndex* q_filesystemmodel_buddy(void* self, void* index);
QModelIndex* q_filesystemmodel_qbase_buddy(void* self, void* index);
void q_filesystemmodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*));
libqt_list /* of QModelIndex* */ q_filesystemmodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);
libqt_list /* of QModelIndex* */ q_filesystemmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);
void q_filesystemmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t));
QSize* q_filesystemmodel_span(void* self, void* index);
QSize* q_filesystemmodel_qbase_span(void* self, void* index);
void q_filesystemmodel_on_span(void* self, QSize* (*slot)(void*, void*));
void q_filesystemmodel_multi_data(void* self, void* index, void* roleDataSpan);
void q_filesystemmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);
void q_filesystemmodel_on_multi_data(void* self, void (*slot)(void*, void*, void*));
bool q_filesystemmodel_submit(void* self);
bool q_filesystemmodel_qbase_submit(void* self);
void q_filesystemmodel_on_submit(void* self, bool (*slot)());
void q_filesystemmodel_revert(void* self);
void q_filesystemmodel_qbase_revert(void* self);
void q_filesystemmodel_on_revert(void* self, void (*slot)());
void q_filesystemmodel_reset_internal_data(void* self);
void q_filesystemmodel_qbase_reset_internal_data(void* self);
void q_filesystemmodel_on_reset_internal_data(void* self, void (*slot)());
bool q_filesystemmodel_event_filter(void* self, void* watched, void* event);
bool q_filesystemmodel_qbase_event_filter(void* self, void* watched, void* event);
void q_filesystemmodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_filesystemmodel_child_event(void* self, void* event);
void q_filesystemmodel_qbase_child_event(void* self, void* event);
void q_filesystemmodel_on_child_event(void* self, void (*slot)(void*, void*));
void q_filesystemmodel_custom_event(void* self, void* event);
void q_filesystemmodel_qbase_custom_event(void* self, void* event);
void q_filesystemmodel_on_custom_event(void* self, void (*slot)(void*, void*));
void q_filesystemmodel_connect_notify(void* self, void* signal);
void q_filesystemmodel_qbase_connect_notify(void* self, void* signal);
void q_filesystemmodel_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_filesystemmodel_disconnect_notify(void* self, void* signal);
void q_filesystemmodel_qbase_disconnect_notify(void* self, void* signal);
void q_filesystemmodel_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QModelIndex* q_filesystemmodel_create_index(void* self, int row, int column);
QModelIndex* q_filesystemmodel_qbase_create_index(void* self, int row, int column);
void q_filesystemmodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int));
void q_filesystemmodel_encode_data(void* self, void* indexes[], void* stream);
void q_filesystemmodel_qbase_encode_data(void* self, void* indexes[], void* stream);
void q_filesystemmodel_on_encode_data(void* self, void (*slot)(void*, void*, void*));
bool q_filesystemmodel_decode_data(void* self, int row, int column, void* parent, void* stream);
bool q_filesystemmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);
void q_filesystemmodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*));
void q_filesystemmodel_begin_insert_rows(void* self, void* parent, int first, int last);
void q_filesystemmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);
void q_filesystemmodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int));
void q_filesystemmodel_end_insert_rows(void* self);
void q_filesystemmodel_qbase_end_insert_rows(void* self);
void q_filesystemmodel_on_end_insert_rows(void* self, void (*slot)());
void q_filesystemmodel_begin_remove_rows(void* self, void* parent, int first, int last);
void q_filesystemmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);
void q_filesystemmodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int));
void q_filesystemmodel_end_remove_rows(void* self);
void q_filesystemmodel_qbase_end_remove_rows(void* self);
void q_filesystemmodel_on_end_remove_rows(void* self, void (*slot)());
bool q_filesystemmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);
bool q_filesystemmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);
void q_filesystemmodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));
void q_filesystemmodel_end_move_rows(void* self);
void q_filesystemmodel_qbase_end_move_rows(void* self);
void q_filesystemmodel_on_end_move_rows(void* self, void (*slot)());
void q_filesystemmodel_begin_insert_columns(void* self, void* parent, int first, int last);
void q_filesystemmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);
void q_filesystemmodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int));
void q_filesystemmodel_end_insert_columns(void* self);
void q_filesystemmodel_qbase_end_insert_columns(void* self);
void q_filesystemmodel_on_end_insert_columns(void* self, void (*slot)());
void q_filesystemmodel_begin_remove_columns(void* self, void* parent, int first, int last);
void q_filesystemmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);
void q_filesystemmodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int));
void q_filesystemmodel_end_remove_columns(void* self);
void q_filesystemmodel_qbase_end_remove_columns(void* self);
void q_filesystemmodel_on_end_remove_columns(void* self, void (*slot)());
bool q_filesystemmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);
bool q_filesystemmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);
void q_filesystemmodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));
void q_filesystemmodel_end_move_columns(void* self);
void q_filesystemmodel_qbase_end_move_columns(void* self);
void q_filesystemmodel_on_end_move_columns(void* self, void (*slot)());
void q_filesystemmodel_begin_reset_model(void* self);
void q_filesystemmodel_qbase_begin_reset_model(void* self);
void q_filesystemmodel_on_begin_reset_model(void* self, void (*slot)());
void q_filesystemmodel_end_reset_model(void* self);
void q_filesystemmodel_qbase_end_reset_model(void* self);
void q_filesystemmodel_on_end_reset_model(void* self, void (*slot)());
void q_filesystemmodel_change_persistent_index(void* self, void* from, void* to);
void q_filesystemmodel_qbase_change_persistent_index(void* self, void* from, void* to);
void q_filesystemmodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*));
void q_filesystemmodel_change_persistent_index_list(void* self, void* from[], void* to[]);
void q_filesystemmodel_qbase_change_persistent_index_list(void* self, void* from[], void* to[]);
void q_filesystemmodel_on_change_persistent_index_list(void* self, void (*slot)(void*, void*, void*));
libqt_list /* of QModelIndex* */ q_filesystemmodel_persistent_index_list(void* self);
libqt_list /* of QModelIndex* */ q_filesystemmodel_qbase_persistent_index_list(void* self);
void q_filesystemmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)());
QObject* q_filesystemmodel_sender(void* self);
QObject* q_filesystemmodel_qbase_sender(void* self);
void q_filesystemmodel_on_sender(void* self, QObject* (*slot)());
int32_t q_filesystemmodel_sender_signal_index(void* self);
int32_t q_filesystemmodel_qbase_sender_signal_index(void* self);
void q_filesystemmodel_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_filesystemmodel_receivers(void* self, const char* signal);
int32_t q_filesystemmodel_qbase_receivers(void* self, const char* signal);
void q_filesystemmodel_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_filesystemmodel_is_signal_connected(void* self, void* signal);
bool q_filesystemmodel_qbase_is_signal_connected(void* self, void* signal);
void q_filesystemmodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_filesystemmodel_delete(void* self);

/// https://doc.qt.io/qt-6/qfilesystemmodel.html#types

typedef enum {
    QFILESYSTEMMODEL_ROLES_FILEICONROLE = 1,
    QFILESYSTEMMODEL_ROLES_FILEPATHROLE = 257,
    QFILESYSTEMMODEL_ROLES_FILENAMEROLE = 258,
    QFILESYSTEMMODEL_ROLES_FILEPERMISSIONS = 259
} QFileSystemModel__Roles;

typedef enum {
    QFILESYSTEMMODEL_OPTION_DONTWATCHFORCHANGES = 1,
    QFILESYSTEMMODEL_OPTION_DONTRESOLVESYMLINKS = 2,
    QFILESYSTEMMODEL_OPTION_DONTUSECUSTOMDIRECTORYICONS = 4
} QFileSystemModel__Option;

#endif
