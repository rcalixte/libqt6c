#include "../libqabstractitemmodel.hpp"
#include "../libqdatastream.hpp"
#include "../libqdatetime.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqwebenginehistory.hpp"
#include "libqwebenginehistory.h"

QWebEngineHistoryItem* q_webenginehistoryitem_new(void* other) {
    return QWebEngineHistoryItem_new((QWebEngineHistoryItem*)other);
}

void q_webenginehistoryitem_operator_assign(void* self, void* other) {
    QWebEngineHistoryItem_OperatorAssign((QWebEngineHistoryItem*)self, (QWebEngineHistoryItem*)other);
}

QUrl* q_webenginehistoryitem_original_url(void* self) {
    return QWebEngineHistoryItem_OriginalUrl((QWebEngineHistoryItem*)self);
}

QUrl* q_webenginehistoryitem_url(void* self) {
    return QWebEngineHistoryItem_Url((QWebEngineHistoryItem*)self);
}

const char* q_webenginehistoryitem_title(void* self) {
    libqt_string _str = QWebEngineHistoryItem_Title((QWebEngineHistoryItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDateTime* q_webenginehistoryitem_last_visited(void* self) {
    return QWebEngineHistoryItem_LastVisited((QWebEngineHistoryItem*)self);
}

QUrl* q_webenginehistoryitem_icon_url(void* self) {
    return QWebEngineHistoryItem_IconUrl((QWebEngineHistoryItem*)self);
}

bool q_webenginehistoryitem_is_valid(void* self) {
    return QWebEngineHistoryItem_IsValid((QWebEngineHistoryItem*)self);
}

void q_webenginehistoryitem_swap(void* self, void* other) {
    QWebEngineHistoryItem_Swap((QWebEngineHistoryItem*)self, (QWebEngineHistoryItem*)other);
}

void q_webenginehistoryitem_delete(void* self) {
    QWebEngineHistoryItem_Delete((QWebEngineHistoryItem*)(self));
}

const QMetaObject* q_webenginehistorymodel_meta_object(void* self) {
    return QWebEngineHistoryModel_MetaObject((QWebEngineHistoryModel*)self);
}

void* q_webenginehistorymodel_metacast(void* self, const char* param1) {
    return QWebEngineHistoryModel_Metacast((QWebEngineHistoryModel*)self, param1);
}

int32_t q_webenginehistorymodel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineHistoryModel_Metacall((QWebEngineHistoryModel*)self, param1, param2, param3);
}

const char* q_webenginehistorymodel_tr(const char* s) {
    libqt_string _str = QWebEngineHistoryModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_webenginehistorymodel_row_count(void* self, void* parent) {
    return QWebEngineHistoryModel_RowCount((QWebEngineHistoryModel*)self, (QModelIndex*)parent);
}

QVariant* q_webenginehistorymodel_data(void* self, void* index, int role) {
    return QWebEngineHistoryModel_Data((QWebEngineHistoryModel*)self, (QModelIndex*)index, role);
}

libqt_map /* of int to char* */ q_webenginehistorymodel_role_names(void* self) {
    return QWebEngineHistoryModel_RoleNames((QWebEngineHistoryModel*)self);
}

void q_webenginehistorymodel_reset(void* self) {
    QWebEngineHistoryModel_Reset((QWebEngineHistoryModel*)self);
}

const char* q_webenginehistorymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineHistoryModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webenginehistorymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineHistoryModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QModelIndex* q_webenginehistorymodel_index(void* self, int row, int column, void* parent) {
    return QAbstractListModel_Index((QAbstractListModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_webenginehistorymodel_sibling(void* self, int row, int column, void* idx) {
    return QAbstractListModel_Sibling((QAbstractListModel*)self, row, column, (QModelIndex*)idx);
}

bool q_webenginehistorymodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractListModel_DropMimeData((QAbstractListModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

int64_t q_webenginehistorymodel_flags(void* self, void* index) {
    return QAbstractListModel_Flags((QAbstractListModel*)self, (QModelIndex*)index);
}

bool q_webenginehistorymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* q_webenginehistorymodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

int32_t q_webenginehistorymodel_column_count(void* self, void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_webenginehistorymodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_webenginehistorymodel_set_data(void* self, void* index, void* value, int role) {
    return QAbstractItemModel_SetData((QAbstractItemModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

QVariant* q_webenginehistorymodel_header_data(void* self, int section, int64_t orientation, int role) {
    return QAbstractItemModel_HeaderData((QAbstractItemModel*)self, section, orientation, role);
}

bool q_webenginehistorymodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QAbstractItemModel_SetHeaderData((QAbstractItemModel*)self, section, orientation, (QVariant*)value, role);
}

libqt_map /* of int to QVariant* */ q_webenginehistorymodel_item_data(void* self, void* index) {
    return QAbstractItemModel_ItemData((QAbstractItemModel*)self, (QModelIndex*)index);
}

bool q_webenginehistorymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QAbstractItemModel_SetItemData((QAbstractItemModel*)self, (QModelIndex*)index, roles);
}

bool q_webenginehistorymodel_clear_item_data(void* self, void* index) {
    return QAbstractItemModel_ClearItemData((QAbstractItemModel*)self, (QModelIndex*)index);
}

const char** q_webenginehistorymodel_mime_types(void* self) {
    libqt_list _arr = QAbstractItemModel_MimeTypes((QAbstractItemModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QMimeData* q_webenginehistorymodel_mime_data(void* self, libqt_list indexes) {
    return QAbstractItemModel_MimeData((QAbstractItemModel*)self, indexes);
}

bool q_webenginehistorymodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractItemModel_CanDropMimeData((QAbstractItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

int64_t q_webenginehistorymodel_supported_drop_actions(void* self) {
    return QAbstractItemModel_SupportedDropActions((QAbstractItemModel*)self);
}

int64_t q_webenginehistorymodel_supported_drag_actions(void* self) {
    return QAbstractItemModel_SupportedDragActions((QAbstractItemModel*)self);
}

bool q_webenginehistorymodel_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractItemModel_InsertRows((QAbstractItemModel*)self, row, count, (QModelIndex*)parent);
}

bool q_webenginehistorymodel_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractItemModel_InsertColumns((QAbstractItemModel*)self, column, count, (QModelIndex*)parent);
}

bool q_webenginehistorymodel_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractItemModel_RemoveRows((QAbstractItemModel*)self, row, count, (QModelIndex*)parent);
}

bool q_webenginehistorymodel_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractItemModel_RemoveColumns((QAbstractItemModel*)self, column, count, (QModelIndex*)parent);
}

bool q_webenginehistorymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRows((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_webenginehistorymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumns((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_webenginehistorymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_webenginehistorymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_webenginehistorymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_webenginehistorymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_webenginehistorymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_webenginehistorymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

void q_webenginehistorymodel_fetch_more(void* self, void* parent) {
    QAbstractItemModel_FetchMore((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_webenginehistorymodel_can_fetch_more(void* self, void* parent) {
    return QAbstractItemModel_CanFetchMore((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_webenginehistorymodel_sort(void* self, int column, int64_t order) {
    QAbstractItemModel_Sort((QAbstractItemModel*)self, column, order);
}

QModelIndex* q_webenginehistorymodel_buddy(void* self, void* index) {
    return QAbstractItemModel_Buddy((QAbstractItemModel*)self, (QModelIndex*)index);
}

libqt_list /* of QModelIndex* */ q_webenginehistorymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QAbstractItemModel_Match((QAbstractItemModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

QSize* q_webenginehistorymodel_span(void* self, void* index) {
    return QAbstractItemModel_Span((QAbstractItemModel*)self, (QModelIndex*)index);
}

bool q_webenginehistorymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_webenginehistorymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QAbstractItemModel_MultiData((QAbstractItemModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_webenginehistorymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_webenginehistorymodel_on_data_changed(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_header_data_changed(void* self, int64_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_webenginehistorymodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_webenginehistorymodel_on_layout_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_webenginehistorymodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

bool q_webenginehistorymodel_submit(void* self) {
    return QAbstractItemModel_Submit((QAbstractItemModel*)self);
}

void q_webenginehistorymodel_revert(void* self) {
    QAbstractItemModel_Revert((QAbstractItemModel*)self);
}

bool q_webenginehistorymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_webenginehistorymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_webenginehistorymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_webenginehistorymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_webenginehistorymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_webenginehistorymodel_check_index2(void* self, void* index, int64_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_webenginehistorymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_webenginehistorymodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, libqt_list)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_webenginehistorymodel_on_layout_changed1(void* self, void (*slot)(void*, libqt_list)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_layout_changed2(void* self, libqt_list parents, int64_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_webenginehistorymodel_on_layout_changed2(void* self, void (*slot)(void*, libqt_list, int64_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_webenginehistorymodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, libqt_list)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int64_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_webenginehistorymodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, libqt_list, int64_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

bool q_webenginehistorymodel_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_webenginehistorymodel_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_webenginehistorymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginehistorymodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webenginehistorymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webenginehistorymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webenginehistorymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webenginehistorymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webenginehistorymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webenginehistorymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_webenginehistorymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webenginehistorymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_webenginehistorymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webenginehistorymodel_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webenginehistorymodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webenginehistorymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_webenginehistorymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webenginehistorymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webenginehistorymodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webenginehistorymodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webenginehistorymodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webenginehistorymodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_webenginehistorymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webenginehistorymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webenginehistorymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webenginehistorymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webenginehistorymodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_webenginehistorymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webenginehistorymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webenginehistorymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webenginehistorymodel_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

bool q_webenginehistorymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webenginehistorymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_webenginehistorymodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_webenginehistorymodel_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_webenginehistorymodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_webenginehistorymodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_webenginehistorymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webenginehistorymodel_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_on_rows_about_to_be_inserted(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_on_rows_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_on_columns_about_to_be_inserted(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_on_columns_inserted(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_on_columns_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_on_columns_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_on_model_about_to_be_reset(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_on_model_reset(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_on_rows_about_to_be_moved(void* self, void (*slot)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_on_rows_moved(void* self, void (*slot)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_on_columns_about_to_be_moved(void* self, void (*slot)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_on_columns_moved(void* self, void (*slot)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)slot);
}

void q_webenginehistorymodel_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

const QMetaObject* q_webenginehistory_meta_object(void* self) {
    return QWebEngineHistory_MetaObject((QWebEngineHistory*)self);
}

void* q_webenginehistory_metacast(void* self, const char* param1) {
    return QWebEngineHistory_Metacast((QWebEngineHistory*)self, param1);
}

int32_t q_webenginehistory_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineHistory_Metacall((QWebEngineHistory*)self, param1, param2, param3);
}

const char* q_webenginehistory_tr(const char* s) {
    libqt_string _str = QWebEngineHistory_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginehistory_clear(void* self) {
    QWebEngineHistory_Clear((QWebEngineHistory*)self);
}

libqt_list /* of QWebEngineHistoryItem* */ q_webenginehistory_items(void* self) {
    libqt_list _arr = QWebEngineHistory_Items((QWebEngineHistory*)self);
    return _arr;
}

libqt_list /* of QWebEngineHistoryItem* */ q_webenginehistory_back_items(void* self, int maxItems) {
    libqt_list _arr = QWebEngineHistory_BackItems((QWebEngineHistory*)self, maxItems);
    return _arr;
}

libqt_list /* of QWebEngineHistoryItem* */ q_webenginehistory_forward_items(void* self, int maxItems) {
    libqt_list _arr = QWebEngineHistory_ForwardItems((QWebEngineHistory*)self, maxItems);
    return _arr;
}

bool q_webenginehistory_can_go_back(void* self) {
    return QWebEngineHistory_CanGoBack((QWebEngineHistory*)self);
}

bool q_webenginehistory_can_go_forward(void* self) {
    return QWebEngineHistory_CanGoForward((QWebEngineHistory*)self);
}

void q_webenginehistory_back(void* self) {
    QWebEngineHistory_Back((QWebEngineHistory*)self);
}

void q_webenginehistory_forward(void* self) {
    QWebEngineHistory_Forward((QWebEngineHistory*)self);
}

void q_webenginehistory_go_to_item(void* self, void* item) {
    QWebEngineHistory_GoToItem((QWebEngineHistory*)self, (QWebEngineHistoryItem*)item);
}

QWebEngineHistoryItem* q_webenginehistory_back_item(void* self) {
    return QWebEngineHistory_BackItem((QWebEngineHistory*)self);
}

QWebEngineHistoryItem* q_webenginehistory_current_item(void* self) {
    return QWebEngineHistory_CurrentItem((QWebEngineHistory*)self);
}

QWebEngineHistoryItem* q_webenginehistory_forward_item(void* self) {
    return QWebEngineHistory_ForwardItem((QWebEngineHistory*)self);
}

QWebEngineHistoryItem* q_webenginehistory_item_at(void* self, int i) {
    return QWebEngineHistory_ItemAt((QWebEngineHistory*)self, i);
}

int32_t q_webenginehistory_current_item_index(void* self) {
    return QWebEngineHistory_CurrentItemIndex((QWebEngineHistory*)self);
}

int32_t q_webenginehistory_count(void* self) {
    return QWebEngineHistory_Count((QWebEngineHistory*)self);
}

QWebEngineHistoryModel* q_webenginehistory_items_model(void* self) {
    return QWebEngineHistory_ItemsModel((QWebEngineHistory*)self);
}

QWebEngineHistoryModel* q_webenginehistory_back_items_model(void* self) {
    return QWebEngineHistory_BackItemsModel((QWebEngineHistory*)self);
}

QWebEngineHistoryModel* q_webenginehistory_forward_items_model(void* self) {
    return QWebEngineHistory_ForwardItemsModel((QWebEngineHistory*)self);
}

const char* q_webenginehistory_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineHistory_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webenginehistory_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineHistory_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_webenginehistory_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_webenginehistory_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_webenginehistory_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginehistory_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webenginehistory_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webenginehistory_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webenginehistory_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webenginehistory_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webenginehistory_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webenginehistory_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_webenginehistory_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webenginehistory_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_webenginehistory_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webenginehistory_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webenginehistory_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webenginehistory_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_webenginehistory_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webenginehistory_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webenginehistory_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webenginehistory_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webenginehistory_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webenginehistory_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_webenginehistory_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webenginehistory_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webenginehistory_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webenginehistory_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webenginehistory_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_webenginehistory_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webenginehistory_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webenginehistory_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webenginehistory_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_webenginehistory_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_webenginehistory_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webenginehistory_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_webenginehistory_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_webenginehistory_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_webenginehistory_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_webenginehistory_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_webenginehistory_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webenginehistory_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_webenginehistory_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}
