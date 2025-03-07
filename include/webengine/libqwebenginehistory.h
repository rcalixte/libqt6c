#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEHISTORY_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEHISTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqdatastream.h"
#include "../libqdatetime.h"
#include "../libqmetaobject.h"
#include "../libqmimedata.h"
#include "../libqobject.h"
#include "../libqsize.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"

QWebEngineHistoryItem* q_webenginehistoryitem_new(void* other);
void q_webenginehistoryitem_operator_assign(void* self, void* other);
QUrl* q_webenginehistoryitem_original_url(void* self);
QUrl* q_webenginehistoryitem_url(void* self);
const char* q_webenginehistoryitem_title(void* self);
QDateTime* q_webenginehistoryitem_last_visited(void* self);
QUrl* q_webenginehistoryitem_icon_url(void* self);
bool q_webenginehistoryitem_is_valid(void* self);
void q_webenginehistoryitem_swap(void* self, void* other);
void q_webenginehistoryitem_delete(void* self);

QMetaObject* q_webenginehistorymodel_meta_object(void* self);
void* q_webenginehistorymodel_metacast(void* self, const char* param1);
int32_t q_webenginehistorymodel_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_webenginehistorymodel_tr(const char* s);
int32_t q_webenginehistorymodel_row_count(void* self, void* parent);
QVariant* q_webenginehistorymodel_data(void* self, void* index, int role);
libqt_map /* of int to char* */ q_webenginehistorymodel_role_names(void* self);
void q_webenginehistorymodel_reset(void* self);
const char* q_webenginehistorymodel_tr2(const char* s, const char* c);
const char* q_webenginehistorymodel_tr3(const char* s, const char* c, int n);
QModelIndex* q_webenginehistorymodel_index(void* self, int row, int column, void* parent);
QModelIndex* q_webenginehistorymodel_sibling(void* self, int row, int column, void* idx);
bool q_webenginehistorymodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);
int64_t q_webenginehistorymodel_flags(void* self, void* index);
bool q_webenginehistorymodel_has_index(void* self, int row, int column);
QModelIndex* q_webenginehistorymodel_parent(void* self, void* child);
int32_t q_webenginehistorymodel_column_count(void* self, void* parent);
bool q_webenginehistorymodel_has_children(void* self, void* parent);
bool q_webenginehistorymodel_set_data(void* self, void* index, void* value, int role);
QVariant* q_webenginehistorymodel_header_data(void* self, int section, int64_t orientation, int role);
bool q_webenginehistorymodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role);
libqt_map /* of int to QVariant* */ q_webenginehistorymodel_item_data(void* self, void* index);
bool q_webenginehistorymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);
bool q_webenginehistorymodel_clear_item_data(void* self, void* index);
const char** q_webenginehistorymodel_mime_types(void* self);
QMimeData* q_webenginehistorymodel_mime_data(void* self, void* indexes[]);
bool q_webenginehistorymodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);
int64_t q_webenginehistorymodel_supported_drop_actions(void* self);
int64_t q_webenginehistorymodel_supported_drag_actions(void* self);
bool q_webenginehistorymodel_insert_rows(void* self, int row, int count, void* parent);
bool q_webenginehistorymodel_insert_columns(void* self, int column, int count, void* parent);
bool q_webenginehistorymodel_remove_rows(void* self, int row, int count, void* parent);
bool q_webenginehistorymodel_remove_columns(void* self, int column, int count, void* parent);
bool q_webenginehistorymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);
bool q_webenginehistorymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);
bool q_webenginehistorymodel_insert_row(void* self, int row);
bool q_webenginehistorymodel_insert_column(void* self, int column);
bool q_webenginehistorymodel_remove_row(void* self, int row);
bool q_webenginehistorymodel_remove_column(void* self, int column);
bool q_webenginehistorymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);
bool q_webenginehistorymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);
void q_webenginehistorymodel_fetch_more(void* self, void* parent);
bool q_webenginehistorymodel_can_fetch_more(void* self, void* parent);
void q_webenginehistorymodel_sort(void* self, int column, int64_t order);
QModelIndex* q_webenginehistorymodel_buddy(void* self, void* index);
libqt_list /* of QModelIndex* */ q_webenginehistorymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);
QSize* q_webenginehistorymodel_span(void* self, void* index);
bool q_webenginehistorymodel_check_index(void* self, void* index);
void q_webenginehistorymodel_multi_data(void* self, void* index, void* roleDataSpan);
void q_webenginehistorymodel_data_changed(void* self, void* topLeft, void* bottomRight);
void q_webenginehistorymodel_on_data_changed(void* self, void (*slot)(void*, void*, void*));
void q_webenginehistorymodel_header_data_changed(void* self, int64_t orientation, int first, int last);
void q_webenginehistorymodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int));
void q_webenginehistorymodel_layout_changed(void* self);
void q_webenginehistorymodel_on_layout_changed(void* self, void (*slot)(void*));
void q_webenginehistorymodel_layout_about_to_be_changed(void* self);
void q_webenginehistorymodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*));
bool q_webenginehistorymodel_submit(void* self);
void q_webenginehistorymodel_revert(void* self);
bool q_webenginehistorymodel_has_index3(void* self, int row, int column, void* parent);
bool q_webenginehistorymodel_insert_row2(void* self, int row, void* parent);
bool q_webenginehistorymodel_insert_column2(void* self, int column, void* parent);
bool q_webenginehistorymodel_remove_row2(void* self, int row, void* parent);
bool q_webenginehistorymodel_remove_column2(void* self, int column, void* parent);
bool q_webenginehistorymodel_check_index2(void* self, void* index, int64_t options);
void q_webenginehistorymodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]);
void q_webenginehistorymodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*));
void q_webenginehistorymodel_layout_changed1(void* self, void* parents[]);
void q_webenginehistorymodel_on_layout_changed1(void* self, void (*slot)(void*, void*));
void q_webenginehistorymodel_layout_changed2(void* self, void* parents[], int64_t hint);
void q_webenginehistorymodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t));
void q_webenginehistorymodel_layout_about_to_be_changed1(void* self, void* parents[]);
void q_webenginehistorymodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*));
void q_webenginehistorymodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint);
void q_webenginehistorymodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t));
bool q_webenginehistorymodel_event(void* self, void* event);
bool q_webenginehistorymodel_event_filter(void* self, void* watched, void* event);
const char* q_webenginehistorymodel_object_name(void* self);
void q_webenginehistorymodel_set_object_name(void* self, const char* name);
bool q_webenginehistorymodel_is_widget_type(void* self);
bool q_webenginehistorymodel_is_window_type(void* self);
bool q_webenginehistorymodel_is_quick_item_type(void* self);
bool q_webenginehistorymodel_signals_blocked(void* self);
bool q_webenginehistorymodel_block_signals(void* self, bool b);
QThread* q_webenginehistorymodel_thread(void* self);
void q_webenginehistorymodel_move_to_thread(void* self, void* thread);
int32_t q_webenginehistorymodel_start_timer(void* self, int interval);
void q_webenginehistorymodel_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_webenginehistorymodel_children(void* self);
void q_webenginehistorymodel_set_parent(void* self, void* parent);
void q_webenginehistorymodel_install_event_filter(void* self, void* filterObj);
void q_webenginehistorymodel_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_webenginehistorymodel_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_webenginehistorymodel_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_webenginehistorymodel_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_webenginehistorymodel_disconnect_with_q_meta_object_connection(void* param1);
void q_webenginehistorymodel_dump_object_tree(void* self);
void q_webenginehistorymodel_dump_object_info(void* self);
bool q_webenginehistorymodel_set_property(void* self, const char* name, void* value);
QVariant* q_webenginehistorymodel_property(void* self, const char* name);
const char** q_webenginehistorymodel_dynamic_property_names(void* self);
QBindingStorage* q_webenginehistorymodel_binding_storage(void* self);
QBindingStorage* q_webenginehistorymodel_binding_storage2(void* self);
void q_webenginehistorymodel_destroyed(void* self);
void q_webenginehistorymodel_on_destroyed(void* self, void (*slot)(void*));
bool q_webenginehistorymodel_inherits(void* self, const char* classname);
void q_webenginehistorymodel_delete_later(void* self);
int32_t q_webenginehistorymodel_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_webenginehistorymodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_webenginehistorymodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_webenginehistorymodel_destroyed1(void* self, void* param1);
void q_webenginehistorymodel_on_destroyed1(void* self, void (*slot)(void*, void*));
QMetaObject* q_webenginehistory_meta_object(void* self);
void* q_webenginehistory_metacast(void* self, const char* param1);
int32_t q_webenginehistory_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_webenginehistory_tr(const char* s);
void q_webenginehistory_clear(void* self);
libqt_list /* of QWebEngineHistoryItem* */ q_webenginehistory_items(void* self);
libqt_list /* of QWebEngineHistoryItem* */ q_webenginehistory_back_items(void* self, int maxItems);
libqt_list /* of QWebEngineHistoryItem* */ q_webenginehistory_forward_items(void* self, int maxItems);
bool q_webenginehistory_can_go_back(void* self);
bool q_webenginehistory_can_go_forward(void* self);
void q_webenginehistory_back(void* self);
void q_webenginehistory_forward(void* self);
void q_webenginehistory_go_to_item(void* self, void* item);
QWebEngineHistoryItem* q_webenginehistory_back_item(void* self);
QWebEngineHistoryItem* q_webenginehistory_current_item(void* self);
QWebEngineHistoryItem* q_webenginehistory_forward_item(void* self);
QWebEngineHistoryItem* q_webenginehistory_item_at(void* self, int i);
int32_t q_webenginehistory_current_item_index(void* self);
int32_t q_webenginehistory_count(void* self);
QWebEngineHistoryModel* q_webenginehistory_items_model(void* self);
QWebEngineHistoryModel* q_webenginehistory_back_items_model(void* self);
QWebEngineHistoryModel* q_webenginehistory_forward_items_model(void* self);
const char* q_webenginehistory_tr2(const char* s, const char* c);
const char* q_webenginehistory_tr3(const char* s, const char* c, int n);
bool q_webenginehistory_event(void* self, void* event);
bool q_webenginehistory_event_filter(void* self, void* watched, void* event);
const char* q_webenginehistory_object_name(void* self);
void q_webenginehistory_set_object_name(void* self, const char* name);
bool q_webenginehistory_is_widget_type(void* self);
bool q_webenginehistory_is_window_type(void* self);
bool q_webenginehistory_is_quick_item_type(void* self);
bool q_webenginehistory_signals_blocked(void* self);
bool q_webenginehistory_block_signals(void* self, bool b);
QThread* q_webenginehistory_thread(void* self);
void q_webenginehistory_move_to_thread(void* self, void* thread);
int32_t q_webenginehistory_start_timer(void* self, int interval);
void q_webenginehistory_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_webenginehistory_children(void* self);
void q_webenginehistory_set_parent(void* self, void* parent);
void q_webenginehistory_install_event_filter(void* self, void* filterObj);
void q_webenginehistory_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_webenginehistory_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_webenginehistory_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_webenginehistory_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_webenginehistory_disconnect_with_q_meta_object_connection(void* param1);
void q_webenginehistory_dump_object_tree(void* self);
void q_webenginehistory_dump_object_info(void* self);
bool q_webenginehistory_set_property(void* self, const char* name, void* value);
QVariant* q_webenginehistory_property(void* self, const char* name);
const char** q_webenginehistory_dynamic_property_names(void* self);
QBindingStorage* q_webenginehistory_binding_storage(void* self);
QBindingStorage* q_webenginehistory_binding_storage2(void* self);
void q_webenginehistory_destroyed(void* self);
void q_webenginehistory_on_destroyed(void* self, void (*slot)(void*));
QObject* q_webenginehistory_parent(void* self);
bool q_webenginehistory_inherits(void* self, const char* classname);
void q_webenginehistory_delete_later(void* self);
int32_t q_webenginehistory_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_webenginehistory_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_webenginehistory_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_webenginehistory_destroyed1(void* self, void* param1);
void q_webenginehistory_on_destroyed1(void* self, void (*slot)(void*, void*));

/// https://doc.qt.io/qt-6/qwebenginehistory.html#types

typedef enum {
    QWEBENGINEHISTORYMODEL_ROLES_URLROLE = 256,
    QWEBENGINEHISTORYMODEL_ROLES_TITLEROLE = 257,
    QWEBENGINEHISTORYMODEL_ROLES_OFFSETROLE = 258,
    QWEBENGINEHISTORYMODEL_ROLES_ICONURLROLE = 259
} QWebEngineHistoryModel__Roles;

#endif
