#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "libqsqldatabase.hpp"
#include "libqsqlerror.hpp"
#include "libqsqlquery.hpp"
#include "libqsqlrecord.hpp"
#include "../libqvariant.hpp"
#include "libqsqlquerymodel.hpp"
#include "libqsqlquerymodel.h"

QSqlQueryModel* q_sqlquerymodel_new() {
    return QSqlQueryModel_New();
}

QSqlQueryModel* q_sqlquerymodel_new2(void* parent) {
    return QSqlQueryModel_New2((QObject*)parent);
}

const QMetaObject* q_sqlquerymodel_meta_object(const void* self) {
    return QSqlQueryModel_MetaObject((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QSqlQueryModel_OnMetaObject((QSqlQueryModel*)self, (intptr_t)callback);
}

const QMetaObject* q_sqlquerymodel_super_meta_object(const void* self) {
    return QSqlQueryModel_SuperMetaObject((QSqlQueryModel*)self);
}

void* q_sqlquerymodel_metacast(void* self, const char* param1) {
    return QSqlQueryModel_Metacast((QSqlQueryModel*)self, param1);
}

void q_sqlquerymodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QSqlQueryModel_OnMetacast((QSqlQueryModel*)self, (intptr_t)callback);
}

void* q_sqlquerymodel_super_metacast(void* self, const char* param1) {
    return QSqlQueryModel_SuperMetacast((QSqlQueryModel*)self, param1);
}

int32_t q_sqlquerymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSqlQueryModel_Metacall((QSqlQueryModel*)self, param1, param2, param3);
}

void q_sqlquerymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSqlQueryModel_OnMetacall((QSqlQueryModel*)self, (intptr_t)callback);
}

int32_t q_sqlquerymodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSqlQueryModel_SuperMetacall((QSqlQueryModel*)self, param1, param2, param3);
}

const char* q_sqlquerymodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_sqlquerymodel_row_count(const void* self, const void* parent) {
    return QSqlQueryModel_RowCount((QSqlQueryModel*)self, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_row_count(const void* self, int32_t (*callback)(const void*, const void*)) {
    QSqlQueryModel_OnRowCount((QSqlQueryModel*)self, (intptr_t)callback);
}

int32_t q_sqlquerymodel_super_row_count(const void* self, const void* parent) {
    return QSqlQueryModel_SuperRowCount((QSqlQueryModel*)self, (QModelIndex*)parent);
}

int32_t q_sqlquerymodel_column_count(const void* self, const void* parent) {
    return QSqlQueryModel_ColumnCount((QSqlQueryModel*)self, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_column_count(const void* self, int32_t (*callback)(const void*, const void*)) {
    QSqlQueryModel_OnColumnCount((QSqlQueryModel*)self, (intptr_t)callback);
}

int32_t q_sqlquerymodel_super_column_count(const void* self, const void* parent) {
    return QSqlQueryModel_SuperColumnCount((QSqlQueryModel*)self, (QModelIndex*)parent);
}

QSqlRecord* q_sqlquerymodel_record(const void* self, int row) {
    return QSqlQueryModel_Record((QSqlQueryModel*)self, row);
}

QSqlRecord* q_sqlquerymodel_record2(const void* self) {
    return QSqlQueryModel_Record2((QSqlQueryModel*)self);
}

QVariant* q_sqlquerymodel_data(const void* self, const void* item, int role) {
    return QSqlQueryModel_Data((QSqlQueryModel*)self, (QModelIndex*)item, role);
}

void q_sqlquerymodel_on_data(const void* self, QVariant* (*callback)(const void*, const void*, int)) {
    QSqlQueryModel_OnData((QSqlQueryModel*)self, (intptr_t)callback);
}

QVariant* q_sqlquerymodel_super_data(const void* self, const void* item, int role) {
    return QSqlQueryModel_SuperData((QSqlQueryModel*)self, (QModelIndex*)item, role);
}

QVariant* q_sqlquerymodel_header_data(const void* self, int section, int32_t orientation, int role) {
    return QSqlQueryModel_HeaderData((QSqlQueryModel*)self, section, orientation, role);
}

void q_sqlquerymodel_on_header_data(const void* self, QVariant* (*callback)(const void*, int, int32_t, int)) {
    QSqlQueryModel_OnHeaderData((QSqlQueryModel*)self, (intptr_t)callback);
}

QVariant* q_sqlquerymodel_super_header_data(const void* self, int section, int32_t orientation, int role) {
    return QSqlQueryModel_SuperHeaderData((QSqlQueryModel*)self, section, orientation, role);
}

bool q_sqlquerymodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return QSqlQueryModel_SetHeaderData((QSqlQueryModel*)self, section, orientation, (QVariant*)value, role);
}

void q_sqlquerymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int)) {
    QSqlQueryModel_OnSetHeaderData((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return QSqlQueryModel_SuperSetHeaderData((QSqlQueryModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_sqlquerymodel_insert_columns(void* self, int column, int count, const void* parent) {
    return QSqlQueryModel_InsertColumns((QSqlQueryModel*)self, column, count, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    QSqlQueryModel_OnInsertColumns((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_super_insert_columns(void* self, int column, int count, const void* parent) {
    return QSqlQueryModel_SuperInsertColumns((QSqlQueryModel*)self, column, count, (QModelIndex*)parent);
}

bool q_sqlquerymodel_remove_columns(void* self, int column, int count, const void* parent) {
    return QSqlQueryModel_RemoveColumns((QSqlQueryModel*)self, column, count, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    QSqlQueryModel_OnRemoveColumns((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_super_remove_columns(void* self, int column, int count, const void* parent) {
    return QSqlQueryModel_SuperRemoveColumns((QSqlQueryModel*)self, column, count, (QModelIndex*)parent);
}

void q_sqlquerymodel_set_query(void* self, const void* query) {
    QSqlQueryModel_SetQuery((QSqlQueryModel*)self, (QSqlQuery*)query);
}

void q_sqlquerymodel_set_query2(void* self, const char* query) {
    QSqlQueryModel_SetQuery2((QSqlQueryModel*)self, qstring(query));
}

const QSqlQuery* q_sqlquerymodel_query(const void* self) {
    return QSqlQueryModel_Query((QSqlQueryModel*)self);
}

void q_sqlquerymodel_clear(void* self) {
    QSqlQueryModel_Clear((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_clear(void* self, void (*callback)(void*)) {
    QSqlQueryModel_OnClear((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_super_clear(void* self) {
    QSqlQueryModel_SuperClear((QSqlQueryModel*)self);
}

QSqlError* q_sqlquerymodel_last_error(const void* self) {
    return QSqlQueryModel_LastError((QSqlQueryModel*)self);
}

void q_sqlquerymodel_fetch_more(void* self, const void* parent) {
    QSqlQueryModel_FetchMore((QSqlQueryModel*)self, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_fetch_more(void* self, void (*callback)(void*, const void*)) {
    QSqlQueryModel_OnFetchMore((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_super_fetch_more(void* self, const void* parent) {
    QSqlQueryModel_SuperFetchMore((QSqlQueryModel*)self, (QModelIndex*)parent);
}

bool q_sqlquerymodel_can_fetch_more(const void* self, const void* parent) {
    return QSqlQueryModel_CanFetchMore((QSqlQueryModel*)self, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_can_fetch_more(const void* self, bool (*callback)(const void*, const void*)) {
    QSqlQueryModel_OnCanFetchMore((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_super_can_fetch_more(const void* self, const void* parent) {
    return QSqlQueryModel_SuperCanFetchMore((QSqlQueryModel*)self, (QModelIndex*)parent);
}

libqt_map /* of int to char* */ q_sqlquerymodel_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QSqlQueryModel_RoleNames((QSqlQueryModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_sqlquerymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_sqlquerymodel_role_names\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

void q_sqlquerymodel_on_role_names(const void* self, libqt_map /* of int to char* */ (*callback)(const void*)) {
    QSqlQueryModel_OnRoleNames((QSqlQueryModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_sqlquerymodel_super_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QSqlQueryModel_SuperRoleNames((QSqlQueryModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_sqlquerymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_sqlquerymodel_role_names\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

void q_sqlquerymodel_begin_insert_rows(void* self, const void* parent, int first, int last) {
    QSqlQueryModel_BeginInsertRows((QSqlQueryModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlquerymodel_end_insert_rows(void* self) {
    QSqlQueryModel_EndInsertRows((QSqlQueryModel*)self);
}

void q_sqlquerymodel_begin_remove_rows(void* self, const void* parent, int first, int last) {
    QSqlQueryModel_BeginRemoveRows((QSqlQueryModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlquerymodel_end_remove_rows(void* self) {
    QSqlQueryModel_EndRemoveRows((QSqlQueryModel*)self);
}

void q_sqlquerymodel_begin_insert_columns(void* self, const void* parent, int first, int last) {
    QSqlQueryModel_BeginInsertColumns((QSqlQueryModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlquerymodel_end_insert_columns(void* self) {
    QSqlQueryModel_EndInsertColumns((QSqlQueryModel*)self);
}

void q_sqlquerymodel_begin_remove_columns(void* self, const void* parent, int first, int last) {
    QSqlQueryModel_BeginRemoveColumns((QSqlQueryModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlquerymodel_end_remove_columns(void* self) {
    QSqlQueryModel_EndRemoveColumns((QSqlQueryModel*)self);
}

void q_sqlquerymodel_begin_reset_model(void* self) {
    QSqlQueryModel_BeginResetModel((QSqlQueryModel*)self);
}

void q_sqlquerymodel_end_reset_model(void* self) {
    QSqlQueryModel_EndResetModel((QSqlQueryModel*)self);
}

void q_sqlquerymodel_query_change(void* self) {
    QSqlQueryModel_QueryChange((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_query_change(void* self, void (*callback)(void*)) {
    QSqlQueryModel_OnQueryChange((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_super_query_change(void* self) {
    QSqlQueryModel_SuperQueryChange((QSqlQueryModel*)self);
}

QModelIndex* q_sqlquerymodel_index_in_query(const void* self, const void* item) {
    return QSqlQueryModel_IndexInQuery((QSqlQueryModel*)self, (QModelIndex*)item);
}

void q_sqlquerymodel_on_index_in_query(const void* self, QModelIndex* (*callback)(const void*, const void*)) {
    QSqlQueryModel_OnIndexInQuery((QSqlQueryModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlquerymodel_super_index_in_query(const void* self, const void* item) {
    return QSqlQueryModel_SuperIndexInQuery((QSqlQueryModel*)self, (QModelIndex*)item);
}

void q_sqlquerymodel_set_last_error(void* self, const void* error) {
    QSqlQueryModel_SetLastError((QSqlQueryModel*)self, (QSqlError*)error);
}

const char* q_sqlquerymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqlquerymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqlquerymodel_set_query22(void* self, const char* query, const void* db) {
    QSqlQueryModel_SetQuery22((QSqlQueryModel*)self, qstring(query), (QSqlDatabase*)db);
}

bool q_sqlquerymodel_has_index(const void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* q_sqlquerymodel_parent(const void* self, const void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void q_sqlquerymodel_on_parent(const void* self, QModelIndex* (*callback)(const void*, const void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_has_children(const void* self, const void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_has_children(const void* self, bool (*callback)(const void*, const void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_super_has_children(const void* self, const void* parent) {
    return QAbstractItemModel_SuperHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_sqlquerymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_sqlquerymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_sqlquerymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_sqlquerymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_sqlquerymodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqlquerymodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqlquerymodel_check_index(const void* self, const void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_sqlquerymodel_data_changed(void* self, const void* topLeft, const void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_sqlquerymodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_sqlquerymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_sqlquerymodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_sqlquerymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_has_index3(const void* self, int row, int column, const void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_sqlquerymodel_insert_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_sqlquerymodel_insert_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_sqlquerymodel_remove_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_sqlquerymodel_remove_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_sqlquerymodel_check_index2(const void* self, const void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_sqlquerymodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_sqlquerymodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_sqlquerymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_sqlquerymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_sqlquerymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_sqlquerymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_sqlquerymodel_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqlquerymodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sqlquerymodel_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sqlquerymodel_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sqlquerymodel_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sqlquerymodel_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sqlquerymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sqlquerymodel_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sqlquerymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sqlquerymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_sqlquerymodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_sqlquerymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sqlquerymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sqlquerymodel_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sqlquerymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sqlquerymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sqlquerymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sqlquerymodel_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_sqlquerymodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sqlquerymodel_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sqlquerymodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_sqlquerymodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sqlquerymodel_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_sqlquerymodel_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_sqlquerymodel_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_sqlquerymodel_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sqlquerymodel_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sqlquerymodel_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sqlquerymodel_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sqlquerymodel_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqlquerymodel_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_sqlquerymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sqlquerymodel_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sqlquerymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sqlquerymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sqlquerymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_sqlquerymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_sqlquerymodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_sqlquerymodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_sqlquerymodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sqlquerymodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_sqlquerymodel_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_sqlquerymodel_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_sqlquerymodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_sqlquerymodel_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_sqlquerymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sqlquerymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* q_sqlquerymodel_index(const void* self, int row, int column, const void* parent) {
    return QSqlQueryModel_Index((QSqlQueryModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_sqlquerymodel_super_index(const void* self, int row, int column, const void* parent) {
    return QSqlQueryModel_SuperIndex((QSqlQueryModel*)self, row, column, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_index(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    QSqlQueryModel_OnIndex((const QSqlQueryModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlquerymodel_sibling(const void* self, int row, int column, const void* idx) {
    return QSqlQueryModel_Sibling((QSqlQueryModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* q_sqlquerymodel_super_sibling(const void* self, int row, int column, const void* idx) {
    return QSqlQueryModel_SuperSibling((QSqlQueryModel*)self, row, column, (QModelIndex*)idx);
}

void q_sqlquerymodel_on_sibling(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    QSqlQueryModel_OnSibling((const QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return QSqlQueryModel_DropMimeData((QSqlQueryModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_sqlquerymodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return QSqlQueryModel_SuperDropMimeData((QSqlQueryModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*)) {
    QSqlQueryModel_OnDropMimeData((QSqlQueryModel*)self, (intptr_t)callback);
}

int32_t q_sqlquerymodel_flags(const void* self, const void* index) {
    return QSqlQueryModel_Flags((QSqlQueryModel*)self, (QModelIndex*)index);
}

int32_t q_sqlquerymodel_super_flags(const void* self, const void* index) {
    return QSqlQueryModel_SuperFlags((QSqlQueryModel*)self, (QModelIndex*)index);
}

void q_sqlquerymodel_on_flags(const void* self, int32_t (*callback)(const void*, const void*)) {
    QSqlQueryModel_OnFlags((const QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_set_data(void* self, const void* index, const void* value, int role) {
    return QSqlQueryModel_SetData((QSqlQueryModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool q_sqlquerymodel_super_set_data(void* self, const void* index, const void* value, int role) {
    return QSqlQueryModel_SuperSetData((QSqlQueryModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_sqlquerymodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int)) {
    QSqlQueryModel_OnSetData((QSqlQueryModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_sqlquerymodel_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QSqlQueryModel_ItemData((QSqlQueryModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ q_sqlquerymodel_super_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QSqlQueryModel_SuperItemData((QSqlQueryModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void q_sqlquerymodel_on_item_data(const void* self, libqt_map /* of int to QVariant* */ (*callback)(const void*, const void*)) {
    QSqlQueryModel_OnItemData((const QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_sqlquerymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_sqlquerymodel_set_item_data\n");
        abort();
    }
    int* roles_karr = (int*)roles.keys;
    int* roles_kdest = (int*)roles_ret.keys;
    QVariant** roles_varr = (QVariant**)roles.values;
    QVariant** roles_vdest = (QVariant**)roles_ret.values;
    for (size_t i = 0; i < roles_ret.len; ++i) {
        roles_kdest[i] = roles_karr[i];
        roles_vdest[i] = roles_varr[i];
    }
    bool _out = QSqlQueryModel_SetItemData((QSqlQueryModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool q_sqlquerymodel_super_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_sqlquerymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_sqlquerymodel_set_item_data\n");
        abort();
    }
    int* roles_karr = (int*)roles.keys;
    int* roles_kdest = (int*)roles_ret.keys;
    QVariant** roles_varr = (QVariant**)roles.values;
    QVariant** roles_vdest = (QVariant**)roles_ret.values;
    for (size_t i = 0; i < roles_ret.len; ++i) {
        roles_kdest[i] = roles_karr[i];
        roles_vdest[i] = roles_varr[i];
    }
    bool _out = QSqlQueryModel_SuperSetItemData((QSqlQueryModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void q_sqlquerymodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map /* of int to QVariant* */)) {
    QSqlQueryModel_OnSetItemData((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_clear_item_data(void* self, const void* index) {
    return QSqlQueryModel_ClearItemData((QSqlQueryModel*)self, (QModelIndex*)index);
}

bool q_sqlquerymodel_super_clear_item_data(void* self, const void* index) {
    return QSqlQueryModel_SuperClearItemData((QSqlQueryModel*)self, (QModelIndex*)index);
}

void q_sqlquerymodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*)) {
    QSqlQueryModel_OnClearItemData((QSqlQueryModel*)self, (intptr_t)callback);
}

const char** q_sqlquerymodel_mime_types(const void* self) {
    libqt_list _arr = QSqlQueryModel_MimeTypes((QSqlQueryModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqlquerymodel_mime_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** q_sqlquerymodel_super_mime_types(const void* self) {
    libqt_list _arr = QSqlQueryModel_SuperMimeTypes((QSqlQueryModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqlquerymodel_mime_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_sqlquerymodel_on_mime_types(const void* self, const char** (*callback)(const void*)) {
    QSqlQueryModel_OnMimeTypes((const QSqlQueryModel*)self, (intptr_t)callback);
}

QMimeData* q_sqlquerymodel_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QSqlQueryModel_MimeData((QSqlQueryModel*)self, indexes);
}

QMimeData* q_sqlquerymodel_super_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QSqlQueryModel_SuperMimeData((QSqlQueryModel*)self, indexes);
}

void q_sqlquerymodel_on_mime_data(const void* self, QMimeData* (*callback)(const void*, libqt_list /* of QModelIndex* */)) {
    QSqlQueryModel_OnMimeData((const QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return QSqlQueryModel_CanDropMimeData((QSqlQueryModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_sqlquerymodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return QSqlQueryModel_SuperCanDropMimeData((QSqlQueryModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_can_drop_mime_data(const void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*)) {
    QSqlQueryModel_OnCanDropMimeData((const QSqlQueryModel*)self, (intptr_t)callback);
}

int32_t q_sqlquerymodel_supported_drop_actions(const void* self) {
    return QSqlQueryModel_SupportedDropActions((QSqlQueryModel*)self);
}

int32_t q_sqlquerymodel_super_supported_drop_actions(const void* self) {
    return QSqlQueryModel_SuperSupportedDropActions((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_supported_drop_actions(const void* self, int32_t (*callback)(const void*)) {
    QSqlQueryModel_OnSupportedDropActions((const QSqlQueryModel*)self, (intptr_t)callback);
}

int32_t q_sqlquerymodel_supported_drag_actions(const void* self) {
    return QSqlQueryModel_SupportedDragActions((QSqlQueryModel*)self);
}

int32_t q_sqlquerymodel_super_supported_drag_actions(const void* self) {
    return QSqlQueryModel_SuperSupportedDragActions((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_supported_drag_actions(const void* self, int32_t (*callback)(const void*)) {
    QSqlQueryModel_OnSupportedDragActions((const QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_insert_rows(void* self, int row, int count, const void* parent) {
    return QSqlQueryModel_InsertRows((QSqlQueryModel*)self, row, count, (QModelIndex*)parent);
}

bool q_sqlquerymodel_super_insert_rows(void* self, int row, int count, const void* parent) {
    return QSqlQueryModel_SuperInsertRows((QSqlQueryModel*)self, row, count, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    QSqlQueryModel_OnInsertRows((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_remove_rows(void* self, int row, int count, const void* parent) {
    return QSqlQueryModel_RemoveRows((QSqlQueryModel*)self, row, count, (QModelIndex*)parent);
}

bool q_sqlquerymodel_super_remove_rows(void* self, int row, int count, const void* parent) {
    return QSqlQueryModel_SuperRemoveRows((QSqlQueryModel*)self, row, count, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    QSqlQueryModel_OnRemoveRows((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return QSqlQueryModel_MoveRows((QSqlQueryModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqlquerymodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return QSqlQueryModel_SuperMoveRows((QSqlQueryModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_sqlquerymodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    QSqlQueryModel_OnMoveRows((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return QSqlQueryModel_MoveColumns((QSqlQueryModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqlquerymodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return QSqlQueryModel_SuperMoveColumns((QSqlQueryModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_sqlquerymodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    QSqlQueryModel_OnMoveColumns((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_sort(void* self, int column, int32_t order) {
    QSqlQueryModel_Sort((QSqlQueryModel*)self, column, order);
}

void q_sqlquerymodel_super_sort(void* self, int column, int32_t order) {
    QSqlQueryModel_SuperSort((QSqlQueryModel*)self, column, order);
}

void q_sqlquerymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QSqlQueryModel_OnSort((QSqlQueryModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlquerymodel_buddy(const void* self, const void* index) {
    return QSqlQueryModel_Buddy((QSqlQueryModel*)self, (QModelIndex*)index);
}

QModelIndex* q_sqlquerymodel_super_buddy(const void* self, const void* index) {
    return QSqlQueryModel_SuperBuddy((QSqlQueryModel*)self, (QModelIndex*)index);
}

void q_sqlquerymodel_on_buddy(const void* self, QModelIndex* (*callback)(const void*, const void*)) {
    QSqlQueryModel_OnBuddy((const QSqlQueryModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_sqlquerymodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = QSqlQueryModel_Match((QSqlQueryModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_sqlquerymodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = QSqlQueryModel_SuperMatch((QSqlQueryModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_sqlquerymodel_on_match(const void* self, libqt_list /* of QModelIndex* */ (*callback)(const void*, const void*, int, const void*, int, int32_t)) {
    QSqlQueryModel_OnMatch((const QSqlQueryModel*)self, (intptr_t)callback);
}

QSize* q_sqlquerymodel_span(const void* self, const void* index) {
    return QSqlQueryModel_Span((QSqlQueryModel*)self, (QModelIndex*)index);
}

QSize* q_sqlquerymodel_super_span(const void* self, const void* index) {
    return QSqlQueryModel_SuperSpan((QSqlQueryModel*)self, (QModelIndex*)index);
}

void q_sqlquerymodel_on_span(const void* self, QSize* (*callback)(const void*, const void*)) {
    QSqlQueryModel_OnSpan((const QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_multi_data(const void* self, const void* index, void* roleDataSpan) {
    QSqlQueryModel_MultiData((QSqlQueryModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_sqlquerymodel_super_multi_data(const void* self, const void* index, void* roleDataSpan) {
    QSqlQueryModel_SuperMultiData((QSqlQueryModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_sqlquerymodel_on_multi_data(const void* self, void (*callback)(const void*, const void*, void*)) {
    QSqlQueryModel_OnMultiData((const QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_submit(void* self) {
    return QSqlQueryModel_Submit((QSqlQueryModel*)self);
}

bool q_sqlquerymodel_super_submit(void* self) {
    return QSqlQueryModel_SuperSubmit((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_submit(void* self, bool (*callback)(void*)) {
    QSqlQueryModel_OnSubmit((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_revert(void* self) {
    QSqlQueryModel_Revert((QSqlQueryModel*)self);
}

void q_sqlquerymodel_super_revert(void* self) {
    QSqlQueryModel_SuperRevert((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_revert(void* self, void (*callback)(void*)) {
    QSqlQueryModel_OnRevert((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_reset_internal_data(void* self) {
    QSqlQueryModel_ResetInternalData((QSqlQueryModel*)self);
}

void q_sqlquerymodel_super_reset_internal_data(void* self) {
    QSqlQueryModel_SuperResetInternalData((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_reset_internal_data(void* self, void (*callback)(void*)) {
    QSqlQueryModel_OnResetInternalData((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_event(void* self, void* event) {
    return QSqlQueryModel_Event((QSqlQueryModel*)self, (QEvent*)event);
}

bool q_sqlquerymodel_super_event(void* self, void* event) {
    return QSqlQueryModel_SuperEvent((QSqlQueryModel*)self, (QEvent*)event);
}

void q_sqlquerymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QSqlQueryModel_OnEvent((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_event_filter(void* self, void* watched, void* event) {
    return QSqlQueryModel_EventFilter((QSqlQueryModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sqlquerymodel_super_event_filter(void* self, void* watched, void* event) {
    return QSqlQueryModel_SuperEventFilter((QSqlQueryModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_sqlquerymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSqlQueryModel_OnEventFilter((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_timer_event(void* self, void* event) {
    QSqlQueryModel_TimerEvent((QSqlQueryModel*)self, (QTimerEvent*)event);
}

void q_sqlquerymodel_super_timer_event(void* self, void* event) {
    QSqlQueryModel_SuperTimerEvent((QSqlQueryModel*)self, (QTimerEvent*)event);
}

void q_sqlquerymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSqlQueryModel_OnTimerEvent((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_child_event(void* self, void* event) {
    QSqlQueryModel_ChildEvent((QSqlQueryModel*)self, (QChildEvent*)event);
}

void q_sqlquerymodel_super_child_event(void* self, void* event) {
    QSqlQueryModel_SuperChildEvent((QSqlQueryModel*)self, (QChildEvent*)event);
}

void q_sqlquerymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSqlQueryModel_OnChildEvent((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_custom_event(void* self, void* event) {
    QSqlQueryModel_CustomEvent((QSqlQueryModel*)self, (QEvent*)event);
}

void q_sqlquerymodel_super_custom_event(void* self, void* event) {
    QSqlQueryModel_SuperCustomEvent((QSqlQueryModel*)self, (QEvent*)event);
}

void q_sqlquerymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSqlQueryModel_OnCustomEvent((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_connect_notify(void* self, const void* signal) {
    QSqlQueryModel_ConnectNotify((QSqlQueryModel*)self, (QMetaMethod*)signal);
}

void q_sqlquerymodel_super_connect_notify(void* self, const void* signal) {
    QSqlQueryModel_SuperConnectNotify((QSqlQueryModel*)self, (QMetaMethod*)signal);
}

void q_sqlquerymodel_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QSqlQueryModel_OnConnectNotify((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_disconnect_notify(void* self, const void* signal) {
    QSqlQueryModel_DisconnectNotify((QSqlQueryModel*)self, (QMetaMethod*)signal);
}

void q_sqlquerymodel_super_disconnect_notify(void* self, const void* signal) {
    QSqlQueryModel_SuperDisconnectNotify((QSqlQueryModel*)self, (QMetaMethod*)signal);
}

void q_sqlquerymodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QSqlQueryModel_OnDisconnectNotify((QSqlQueryModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlquerymodel_create_index(const void* self, int row, int column) {
    return QSqlQueryModel_CreateIndex((QSqlQueryModel*)self, row, column);
}

void q_sqlquerymodel_encode_data(const void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QSqlQueryModel_EncodeData((QSqlQueryModel*)self, indexes, (QDataStream*)stream);
}

bool q_sqlquerymodel_decode_data(void* self, int row, int column, const void* parent, void* stream) {
    return QSqlQueryModel_DecodeData((QSqlQueryModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_sqlquerymodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow) {
    return QSqlQueryModel_BeginMoveRows((QSqlQueryModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_sqlquerymodel_end_move_rows(void* self) {
    QSqlQueryModel_EndMoveRows((QSqlQueryModel*)self);
}

bool q_sqlquerymodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn) {
    return QSqlQueryModel_BeginMoveColumns((QSqlQueryModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_sqlquerymodel_end_move_columns(void* self) {
    QSqlQueryModel_EndMoveColumns((QSqlQueryModel*)self);
}

void q_sqlquerymodel_change_persistent_index(void* self, const void* from, const void* to) {
    QSqlQueryModel_ChangePersistentIndex((QSqlQueryModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_sqlquerymodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QSqlQueryModel_ChangePersistentIndexList((QSqlQueryModel*)self, from, to);
}

libqt_list /* of QModelIndex* */ q_sqlquerymodel_persistent_index_list(const void* self) {
    libqt_list _arr = QSqlQueryModel_PersistentIndexList((QSqlQueryModel*)self);
    return _arr;
}

QObject* q_sqlquerymodel_sender(const void* self) {
    return QSqlQueryModel_Sender((QSqlQueryModel*)self);
}

int32_t q_sqlquerymodel_sender_signal_index(const void* self) {
    return QSqlQueryModel_SenderSignalIndex((QSqlQueryModel*)self);
}

int32_t q_sqlquerymodel_receivers(const void* self, const char* signal) {
    return QSqlQueryModel_Receivers((QSqlQueryModel*)self, signal);
}

bool q_sqlquerymodel_is_signal_connected(const void* self, const void* signal) {
    return QSqlQueryModel_IsSignalConnected((QSqlQueryModel*)self, (QMetaMethod*)signal);
}

void q_sqlquerymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sqlquerymodel_delete(void* self) {
    QSqlQueryModel_Delete((QSqlQueryModel*)(self));
}
