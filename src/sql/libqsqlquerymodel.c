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
    return QSqlQueryModel_new();
}

QSqlQueryModel* q_sqlquerymodel_new2(void* parent) {
    return QSqlQueryModel_new2((QObject*)parent);
}

const QMetaObject* q_sqlquerymodel_meta_object(void* self) {
    return QSqlQueryModel_MetaObject((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QSqlQueryModel_OnMetaObject((QSqlQueryModel*)self, (intptr_t)callback);
}

const QMetaObject* q_sqlquerymodel_qbase_meta_object(void* self) {
    return QSqlQueryModel_QBaseMetaObject((QSqlQueryModel*)self);
}

void* q_sqlquerymodel_metacast(void* self, const char* param1) {
    return QSqlQueryModel_Metacast((QSqlQueryModel*)self, param1);
}

void q_sqlquerymodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QSqlQueryModel_OnMetacast((QSqlQueryModel*)self, (intptr_t)callback);
}

void* q_sqlquerymodel_qbase_metacast(void* self, const char* param1) {
    return QSqlQueryModel_QBaseMetacast((QSqlQueryModel*)self, param1);
}

int32_t q_sqlquerymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSqlQueryModel_Metacall((QSqlQueryModel*)self, param1, param2, param3);
}

void q_sqlquerymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSqlQueryModel_OnMetacall((QSqlQueryModel*)self, (intptr_t)callback);
}

int32_t q_sqlquerymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSqlQueryModel_QBaseMetacall((QSqlQueryModel*)self, param1, param2, param3);
}

const char* q_sqlquerymodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_sqlquerymodel_row_count(void* self, void* parent) {
    return QSqlQueryModel_RowCount((QSqlQueryModel*)self, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    QSqlQueryModel_OnRowCount((QSqlQueryModel*)self, (intptr_t)callback);
}

int32_t q_sqlquerymodel_qbase_row_count(void* self, void* parent) {
    return QSqlQueryModel_QBaseRowCount((QSqlQueryModel*)self, (QModelIndex*)parent);
}

int32_t q_sqlquerymodel_column_count(void* self, void* parent) {
    return QSqlQueryModel_ColumnCount((QSqlQueryModel*)self, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QSqlQueryModel_OnColumnCount((QSqlQueryModel*)self, (intptr_t)callback);
}

int32_t q_sqlquerymodel_qbase_column_count(void* self, void* parent) {
    return QSqlQueryModel_QBaseColumnCount((QSqlQueryModel*)self, (QModelIndex*)parent);
}

QSqlRecord* q_sqlquerymodel_record(void* self, int row) {
    return QSqlQueryModel_Record((QSqlQueryModel*)self, row);
}

QSqlRecord* q_sqlquerymodel_record2(void* self) {
    return QSqlQueryModel_Record2((QSqlQueryModel*)self);
}

QVariant* q_sqlquerymodel_data(void* self, void* item, int role) {
    return QSqlQueryModel_Data((QSqlQueryModel*)self, (QModelIndex*)item, role);
}

void q_sqlquerymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    QSqlQueryModel_OnData((QSqlQueryModel*)self, (intptr_t)callback);
}

QVariant* q_sqlquerymodel_qbase_data(void* self, void* item, int role) {
    return QSqlQueryModel_QBaseData((QSqlQueryModel*)self, (QModelIndex*)item, role);
}

QVariant* q_sqlquerymodel_header_data(void* self, int section, int32_t orientation, int role) {
    return QSqlQueryModel_HeaderData((QSqlQueryModel*)self, section, orientation, role);
}

void q_sqlquerymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    QSqlQueryModel_OnHeaderData((QSqlQueryModel*)self, (intptr_t)callback);
}

QVariant* q_sqlquerymodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return QSqlQueryModel_QBaseHeaderData((QSqlQueryModel*)self, section, orientation, role);
}

bool q_sqlquerymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QSqlQueryModel_SetHeaderData((QSqlQueryModel*)self, section, orientation, (QVariant*)value, role);
}

void q_sqlquerymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    QSqlQueryModel_OnSetHeaderData((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QSqlQueryModel_QBaseSetHeaderData((QSqlQueryModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_sqlquerymodel_insert_columns(void* self, int column, int count, void* parent) {
    return QSqlQueryModel_InsertColumns((QSqlQueryModel*)self, column, count, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QSqlQueryModel_OnInsertColumns((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QSqlQueryModel_QBaseInsertColumns((QSqlQueryModel*)self, column, count, (QModelIndex*)parent);
}

bool q_sqlquerymodel_remove_columns(void* self, int column, int count, void* parent) {
    return QSqlQueryModel_RemoveColumns((QSqlQueryModel*)self, column, count, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QSqlQueryModel_OnRemoveColumns((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QSqlQueryModel_QBaseRemoveColumns((QSqlQueryModel*)self, column, count, (QModelIndex*)parent);
}

void q_sqlquerymodel_set_query(void* self, void* query) {
    QSqlQueryModel_SetQuery((QSqlQueryModel*)self, (QSqlQuery*)query);
}

void q_sqlquerymodel_set_query2(void* self, const char* query) {
    QSqlQueryModel_SetQuery2((QSqlQueryModel*)self, qstring(query));
}

const QSqlQuery* q_sqlquerymodel_query(void* self) {
    return QSqlQueryModel_Query((QSqlQueryModel*)self);
}

void q_sqlquerymodel_clear(void* self) {
    QSqlQueryModel_Clear((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_clear(void* self, void (*callback)()) {
    QSqlQueryModel_OnClear((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_qbase_clear(void* self) {
    QSqlQueryModel_QBaseClear((QSqlQueryModel*)self);
}

QSqlError* q_sqlquerymodel_last_error(void* self) {
    return QSqlQueryModel_LastError((QSqlQueryModel*)self);
}

void q_sqlquerymodel_fetch_more(void* self, void* parent) {
    QSqlQueryModel_FetchMore((QSqlQueryModel*)self, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    QSqlQueryModel_OnFetchMore((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_qbase_fetch_more(void* self, void* parent) {
    QSqlQueryModel_QBaseFetchMore((QSqlQueryModel*)self, (QModelIndex*)parent);
}

bool q_sqlquerymodel_can_fetch_more(void* self, void* parent) {
    return QSqlQueryModel_CanFetchMore((QSqlQueryModel*)self, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    QSqlQueryModel_OnCanFetchMore((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_qbase_can_fetch_more(void* self, void* parent) {
    return QSqlQueryModel_QBaseCanFetchMore((QSqlQueryModel*)self, (QModelIndex*)parent);
}

libqt_map /* of int to char* */ q_sqlquerymodel_role_names(void* self) {
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

void q_sqlquerymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    QSqlQueryModel_OnRoleNames((QSqlQueryModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_sqlquerymodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QSqlQueryModel_QBaseRoleNames((QSqlQueryModel*)self);
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

void q_sqlquerymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QSqlQueryModel_BeginInsertRows((QSqlQueryModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlquerymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QSqlQueryModel_OnBeginInsertRows((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QSqlQueryModel_QBaseBeginInsertRows((QSqlQueryModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlquerymodel_end_insert_rows(void* self) {
    QSqlQueryModel_EndInsertRows((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_end_insert_rows(void* self, void (*callback)()) {
    QSqlQueryModel_OnEndInsertRows((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_qbase_end_insert_rows(void* self) {
    QSqlQueryModel_QBaseEndInsertRows((QSqlQueryModel*)self);
}

void q_sqlquerymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QSqlQueryModel_BeginRemoveRows((QSqlQueryModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlquerymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QSqlQueryModel_OnBeginRemoveRows((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QSqlQueryModel_QBaseBeginRemoveRows((QSqlQueryModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlquerymodel_end_remove_rows(void* self) {
    QSqlQueryModel_EndRemoveRows((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_end_remove_rows(void* self, void (*callback)()) {
    QSqlQueryModel_OnEndRemoveRows((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_qbase_end_remove_rows(void* self) {
    QSqlQueryModel_QBaseEndRemoveRows((QSqlQueryModel*)self);
}

void q_sqlquerymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QSqlQueryModel_BeginInsertColumns((QSqlQueryModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlquerymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QSqlQueryModel_OnBeginInsertColumns((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QSqlQueryModel_QBaseBeginInsertColumns((QSqlQueryModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlquerymodel_end_insert_columns(void* self) {
    QSqlQueryModel_EndInsertColumns((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_end_insert_columns(void* self, void (*callback)()) {
    QSqlQueryModel_OnEndInsertColumns((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_qbase_end_insert_columns(void* self) {
    QSqlQueryModel_QBaseEndInsertColumns((QSqlQueryModel*)self);
}

void q_sqlquerymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QSqlQueryModel_BeginRemoveColumns((QSqlQueryModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlquerymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QSqlQueryModel_OnBeginRemoveColumns((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QSqlQueryModel_QBaseBeginRemoveColumns((QSqlQueryModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlquerymodel_end_remove_columns(void* self) {
    QSqlQueryModel_EndRemoveColumns((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_end_remove_columns(void* self, void (*callback)()) {
    QSqlQueryModel_OnEndRemoveColumns((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_qbase_end_remove_columns(void* self) {
    QSqlQueryModel_QBaseEndRemoveColumns((QSqlQueryModel*)self);
}

void q_sqlquerymodel_begin_reset_model(void* self) {
    QSqlQueryModel_BeginResetModel((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_begin_reset_model(void* self, void (*callback)()) {
    QSqlQueryModel_OnBeginResetModel((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_qbase_begin_reset_model(void* self) {
    QSqlQueryModel_QBaseBeginResetModel((QSqlQueryModel*)self);
}

void q_sqlquerymodel_end_reset_model(void* self) {
    QSqlQueryModel_EndResetModel((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_end_reset_model(void* self, void (*callback)()) {
    QSqlQueryModel_OnEndResetModel((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_qbase_end_reset_model(void* self) {
    QSqlQueryModel_QBaseEndResetModel((QSqlQueryModel*)self);
}

void q_sqlquerymodel_query_change(void* self) {
    QSqlQueryModel_QueryChange((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_query_change(void* self, void (*callback)()) {
    QSqlQueryModel_OnQueryChange((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_qbase_query_change(void* self) {
    QSqlQueryModel_QBaseQueryChange((QSqlQueryModel*)self);
}

QModelIndex* q_sqlquerymodel_index_in_query(void* self, void* item) {
    return QSqlQueryModel_IndexInQuery((QSqlQueryModel*)self, (QModelIndex*)item);
}

void q_sqlquerymodel_on_index_in_query(void* self, QModelIndex* (*callback)(void*, void*)) {
    QSqlQueryModel_OnIndexInQuery((QSqlQueryModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlquerymodel_qbase_index_in_query(void* self, void* item) {
    return QSqlQueryModel_QBaseIndexInQuery((QSqlQueryModel*)self, (QModelIndex*)item);
}

void q_sqlquerymodel_set_last_error(void* self, void* error) {
    QSqlQueryModel_SetLastError((QSqlQueryModel*)self, (QSqlError*)error);
}

void q_sqlquerymodel_on_set_last_error(void* self, void (*callback)(void*, void*)) {
    QSqlQueryModel_OnSetLastError((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_qbase_set_last_error(void* self, void* error) {
    QSqlQueryModel_QBaseSetLastError((QSqlQueryModel*)self, (QSqlError*)error);
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

void q_sqlquerymodel_set_query22(void* self, const char* query, void* db) {
    QSqlQueryModel_SetQuery22((QSqlQueryModel*)self, qstring(query), (QSqlDatabase*)db);
}

bool q_sqlquerymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* q_sqlquerymodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void q_sqlquerymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlquerymodel_qbase_parent(void* self, void* child) {
    return QAbstractItemModel_QBaseParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

bool q_sqlquerymodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_qbase_has_children(void* self, void* parent) {
    return QAbstractItemModel_QBaseHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
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

bool q_sqlquerymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqlquerymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqlquerymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_sqlquerymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_sqlquerymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
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

bool q_sqlquerymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_sqlquerymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_sqlquerymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_sqlquerymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_sqlquerymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_sqlquerymodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_sqlquerymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_sqlquerymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_sqlquerymodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_sqlquerymodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_sqlquerymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_sqlquerymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_sqlquerymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqlquerymodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sqlquerymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sqlquerymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sqlquerymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sqlquerymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sqlquerymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sqlquerymodel_thread(void* self) {
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

libqt_list /* of QObject* */ q_sqlquerymodel_children(void* self) {
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

QMetaObject__Connection* q_sqlquerymodel_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_sqlquerymodel_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sqlquerymodel_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sqlquerymodel_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_sqlquerymodel_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sqlquerymodel_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_sqlquerymodel_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_sqlquerymodel_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_sqlquerymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sqlquerymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sqlquerymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sqlquerymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sqlquerymodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqlquerymodel_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_sqlquerymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sqlquerymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sqlquerymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sqlquerymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_inherits(void* self, const char* classname) {
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

QMetaObject__Connection* q_sqlquerymodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_sqlquerymodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sqlquerymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_sqlquerymodel_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_sqlquerymodel_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_sqlquerymodel_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_sqlquerymodel_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_sqlquerymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sqlquerymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* q_sqlquerymodel_index(void* self, int row, int column, void* parent) {
    return QSqlQueryModel_Index((QSqlQueryModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_sqlquerymodel_qbase_index(void* self, int row, int column, void* parent) {
    return QSqlQueryModel_QBaseIndex((QSqlQueryModel*)self, row, column, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QSqlQueryModel_OnIndex((QSqlQueryModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlquerymodel_sibling(void* self, int row, int column, void* idx) {
    return QSqlQueryModel_Sibling((QSqlQueryModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* q_sqlquerymodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QSqlQueryModel_QBaseSibling((QSqlQueryModel*)self, row, column, (QModelIndex*)idx);
}

void q_sqlquerymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QSqlQueryModel_OnSibling((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QSqlQueryModel_DropMimeData((QSqlQueryModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_sqlquerymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QSqlQueryModel_QBaseDropMimeData((QSqlQueryModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QSqlQueryModel_OnDropMimeData((QSqlQueryModel*)self, (intptr_t)callback);
}

int32_t q_sqlquerymodel_flags(void* self, void* index) {
    return QSqlQueryModel_Flags((QSqlQueryModel*)self, (QModelIndex*)index);
}

int32_t q_sqlquerymodel_qbase_flags(void* self, void* index) {
    return QSqlQueryModel_QBaseFlags((QSqlQueryModel*)self, (QModelIndex*)index);
}

void q_sqlquerymodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    QSqlQueryModel_OnFlags((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_set_data(void* self, void* index, void* value, int role) {
    return QSqlQueryModel_SetData((QSqlQueryModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool q_sqlquerymodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QSqlQueryModel_QBaseSetData((QSqlQueryModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_sqlquerymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    QSqlQueryModel_OnSetData((QSqlQueryModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_sqlquerymodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QSqlQueryModel_ItemData((QSqlQueryModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ q_sqlquerymodel_qbase_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QSqlQueryModel_QBaseItemData((QSqlQueryModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void q_sqlquerymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    QSqlQueryModel_OnItemData((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
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

bool q_sqlquerymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
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
    bool _out = QSqlQueryModel_QBaseSetItemData((QSqlQueryModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void q_sqlquerymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QSqlQueryModel_OnSetItemData((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_clear_item_data(void* self, void* index) {
    return QSqlQueryModel_ClearItemData((QSqlQueryModel*)self, (QModelIndex*)index);
}

bool q_sqlquerymodel_qbase_clear_item_data(void* self, void* index) {
    return QSqlQueryModel_QBaseClearItemData((QSqlQueryModel*)self, (QModelIndex*)index);
}

void q_sqlquerymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    QSqlQueryModel_OnClearItemData((QSqlQueryModel*)self, (intptr_t)callback);
}

const char** q_sqlquerymodel_mime_types(void* self) {
    libqt_list _arr = QSqlQueryModel_MimeTypes((QSqlQueryModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqlquerymodel_mime_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** q_sqlquerymodel_qbase_mime_types(void* self) {
    libqt_list _arr = QSqlQueryModel_QBaseMimeTypes((QSqlQueryModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqlquerymodel_mime_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_sqlquerymodel_on_mime_types(void* self, const char** (*callback)()) {
    QSqlQueryModel_OnMimeTypes((QSqlQueryModel*)self, (intptr_t)callback);
}

QMimeData* q_sqlquerymodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QSqlQueryModel_MimeData((QSqlQueryModel*)self, indexes);
}

QMimeData* q_sqlquerymodel_qbase_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QSqlQueryModel_QBaseMimeData((QSqlQueryModel*)self, indexes);
}

void q_sqlquerymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    QSqlQueryModel_OnMimeData((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QSqlQueryModel_CanDropMimeData((QSqlQueryModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_sqlquerymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QSqlQueryModel_QBaseCanDropMimeData((QSqlQueryModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QSqlQueryModel_OnCanDropMimeData((QSqlQueryModel*)self, (intptr_t)callback);
}

int32_t q_sqlquerymodel_supported_drop_actions(void* self) {
    return QSqlQueryModel_SupportedDropActions((QSqlQueryModel*)self);
}

int32_t q_sqlquerymodel_qbase_supported_drop_actions(void* self) {
    return QSqlQueryModel_QBaseSupportedDropActions((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    QSqlQueryModel_OnSupportedDropActions((QSqlQueryModel*)self, (intptr_t)callback);
}

int32_t q_sqlquerymodel_supported_drag_actions(void* self) {
    return QSqlQueryModel_SupportedDragActions((QSqlQueryModel*)self);
}

int32_t q_sqlquerymodel_qbase_supported_drag_actions(void* self) {
    return QSqlQueryModel_QBaseSupportedDragActions((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    QSqlQueryModel_OnSupportedDragActions((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_insert_rows(void* self, int row, int count, void* parent) {
    return QSqlQueryModel_InsertRows((QSqlQueryModel*)self, row, count, (QModelIndex*)parent);
}

bool q_sqlquerymodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QSqlQueryModel_QBaseInsertRows((QSqlQueryModel*)self, row, count, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QSqlQueryModel_OnInsertRows((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_remove_rows(void* self, int row, int count, void* parent) {
    return QSqlQueryModel_RemoveRows((QSqlQueryModel*)self, row, count, (QModelIndex*)parent);
}

bool q_sqlquerymodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QSqlQueryModel_QBaseRemoveRows((QSqlQueryModel*)self, row, count, (QModelIndex*)parent);
}

void q_sqlquerymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QSqlQueryModel_OnRemoveRows((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QSqlQueryModel_MoveRows((QSqlQueryModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqlquerymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QSqlQueryModel_QBaseMoveRows((QSqlQueryModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_sqlquerymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QSqlQueryModel_OnMoveRows((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QSqlQueryModel_MoveColumns((QSqlQueryModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqlquerymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QSqlQueryModel_QBaseMoveColumns((QSqlQueryModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_sqlquerymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QSqlQueryModel_OnMoveColumns((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_sort(void* self, int column, int32_t order) {
    QSqlQueryModel_Sort((QSqlQueryModel*)self, column, order);
}

void q_sqlquerymodel_qbase_sort(void* self, int column, int32_t order) {
    QSqlQueryModel_QBaseSort((QSqlQueryModel*)self, column, order);
}

void q_sqlquerymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QSqlQueryModel_OnSort((QSqlQueryModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlquerymodel_buddy(void* self, void* index) {
    return QSqlQueryModel_Buddy((QSqlQueryModel*)self, (QModelIndex*)index);
}

QModelIndex* q_sqlquerymodel_qbase_buddy(void* self, void* index) {
    return QSqlQueryModel_QBaseBuddy((QSqlQueryModel*)self, (QModelIndex*)index);
}

void q_sqlquerymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    QSqlQueryModel_OnBuddy((QSqlQueryModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_sqlquerymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QSqlQueryModel_Match((QSqlQueryModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_sqlquerymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QSqlQueryModel_QBaseMatch((QSqlQueryModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_sqlquerymodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    QSqlQueryModel_OnMatch((QSqlQueryModel*)self, (intptr_t)callback);
}

QSize* q_sqlquerymodel_span(void* self, void* index) {
    return QSqlQueryModel_Span((QSqlQueryModel*)self, (QModelIndex*)index);
}

QSize* q_sqlquerymodel_qbase_span(void* self, void* index) {
    return QSqlQueryModel_QBaseSpan((QSqlQueryModel*)self, (QModelIndex*)index);
}

void q_sqlquerymodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    QSqlQueryModel_OnSpan((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QSqlQueryModel_MultiData((QSqlQueryModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_sqlquerymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QSqlQueryModel_QBaseMultiData((QSqlQueryModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_sqlquerymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    QSqlQueryModel_OnMultiData((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_submit(void* self) {
    return QSqlQueryModel_Submit((QSqlQueryModel*)self);
}

bool q_sqlquerymodel_qbase_submit(void* self) {
    return QSqlQueryModel_QBaseSubmit((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_submit(void* self, bool (*callback)()) {
    QSqlQueryModel_OnSubmit((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_revert(void* self) {
    QSqlQueryModel_Revert((QSqlQueryModel*)self);
}

void q_sqlquerymodel_qbase_revert(void* self) {
    QSqlQueryModel_QBaseRevert((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_revert(void* self, void (*callback)()) {
    QSqlQueryModel_OnRevert((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_reset_internal_data(void* self) {
    QSqlQueryModel_ResetInternalData((QSqlQueryModel*)self);
}

void q_sqlquerymodel_qbase_reset_internal_data(void* self) {
    QSqlQueryModel_QBaseResetInternalData((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_reset_internal_data(void* self, void (*callback)()) {
    QSqlQueryModel_OnResetInternalData((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_event(void* self, void* event) {
    return QSqlQueryModel_Event((QSqlQueryModel*)self, (QEvent*)event);
}

bool q_sqlquerymodel_qbase_event(void* self, void* event) {
    return QSqlQueryModel_QBaseEvent((QSqlQueryModel*)self, (QEvent*)event);
}

void q_sqlquerymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QSqlQueryModel_OnEvent((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_event_filter(void* self, void* watched, void* event) {
    return QSqlQueryModel_EventFilter((QSqlQueryModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sqlquerymodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QSqlQueryModel_QBaseEventFilter((QSqlQueryModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_sqlquerymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSqlQueryModel_OnEventFilter((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_timer_event(void* self, void* event) {
    QSqlQueryModel_TimerEvent((QSqlQueryModel*)self, (QTimerEvent*)event);
}

void q_sqlquerymodel_qbase_timer_event(void* self, void* event) {
    QSqlQueryModel_QBaseTimerEvent((QSqlQueryModel*)self, (QTimerEvent*)event);
}

void q_sqlquerymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSqlQueryModel_OnTimerEvent((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_child_event(void* self, void* event) {
    QSqlQueryModel_ChildEvent((QSqlQueryModel*)self, (QChildEvent*)event);
}

void q_sqlquerymodel_qbase_child_event(void* self, void* event) {
    QSqlQueryModel_QBaseChildEvent((QSqlQueryModel*)self, (QChildEvent*)event);
}

void q_sqlquerymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSqlQueryModel_OnChildEvent((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_custom_event(void* self, void* event) {
    QSqlQueryModel_CustomEvent((QSqlQueryModel*)self, (QEvent*)event);
}

void q_sqlquerymodel_qbase_custom_event(void* self, void* event) {
    QSqlQueryModel_QBaseCustomEvent((QSqlQueryModel*)self, (QEvent*)event);
}

void q_sqlquerymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSqlQueryModel_OnCustomEvent((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_connect_notify(void* self, void* signal) {
    QSqlQueryModel_ConnectNotify((QSqlQueryModel*)self, (QMetaMethod*)signal);
}

void q_sqlquerymodel_qbase_connect_notify(void* self, void* signal) {
    QSqlQueryModel_QBaseConnectNotify((QSqlQueryModel*)self, (QMetaMethod*)signal);
}

void q_sqlquerymodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSqlQueryModel_OnConnectNotify((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_disconnect_notify(void* self, void* signal) {
    QSqlQueryModel_DisconnectNotify((QSqlQueryModel*)self, (QMetaMethod*)signal);
}

void q_sqlquerymodel_qbase_disconnect_notify(void* self, void* signal) {
    QSqlQueryModel_QBaseDisconnectNotify((QSqlQueryModel*)self, (QMetaMethod*)signal);
}

void q_sqlquerymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSqlQueryModel_OnDisconnectNotify((QSqlQueryModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlquerymodel_create_index(void* self, int row, int column) {
    return QSqlQueryModel_CreateIndex((QSqlQueryModel*)self, row, column);
}

QModelIndex* q_sqlquerymodel_qbase_create_index(void* self, int row, int column) {
    return QSqlQueryModel_QBaseCreateIndex((QSqlQueryModel*)self, row, column);
}

void q_sqlquerymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    QSqlQueryModel_OnCreateIndex((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QSqlQueryModel_EncodeData((QSqlQueryModel*)self, indexes, (QDataStream*)stream);
}

void q_sqlquerymodel_qbase_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QSqlQueryModel_QBaseEncodeData((QSqlQueryModel*)self, indexes, (QDataStream*)stream);
}

void q_sqlquerymodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    QSqlQueryModel_OnEncodeData((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QSqlQueryModel_DecodeData((QSqlQueryModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_sqlquerymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QSqlQueryModel_QBaseDecodeData((QSqlQueryModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_sqlquerymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    QSqlQueryModel_OnDecodeData((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QSqlQueryModel_BeginMoveRows((QSqlQueryModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool q_sqlquerymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QSqlQueryModel_QBaseBeginMoveRows((QSqlQueryModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_sqlquerymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QSqlQueryModel_OnBeginMoveRows((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_end_move_rows(void* self) {
    QSqlQueryModel_EndMoveRows((QSqlQueryModel*)self);
}

void q_sqlquerymodel_qbase_end_move_rows(void* self) {
    QSqlQueryModel_QBaseEndMoveRows((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_end_move_rows(void* self, void (*callback)()) {
    QSqlQueryModel_OnEndMoveRows((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QSqlQueryModel_BeginMoveColumns((QSqlQueryModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool q_sqlquerymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QSqlQueryModel_QBaseBeginMoveColumns((QSqlQueryModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_sqlquerymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QSqlQueryModel_OnBeginMoveColumns((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_end_move_columns(void* self) {
    QSqlQueryModel_EndMoveColumns((QSqlQueryModel*)self);
}

void q_sqlquerymodel_qbase_end_move_columns(void* self) {
    QSqlQueryModel_QBaseEndMoveColumns((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_end_move_columns(void* self, void (*callback)()) {
    QSqlQueryModel_OnEndMoveColumns((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_change_persistent_index(void* self, void* from, void* to) {
    QSqlQueryModel_ChangePersistentIndex((QSqlQueryModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_sqlquerymodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QSqlQueryModel_QBaseChangePersistentIndex((QSqlQueryModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_sqlquerymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    QSqlQueryModel_OnChangePersistentIndex((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QSqlQueryModel_ChangePersistentIndexList((QSqlQueryModel*)self, from, to);
}

void q_sqlquerymodel_qbase_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QSqlQueryModel_QBaseChangePersistentIndexList((QSqlQueryModel*)self, from, to);
}

void q_sqlquerymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    QSqlQueryModel_OnChangePersistentIndexList((QSqlQueryModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_sqlquerymodel_persistent_index_list(void* self) {
    libqt_list _arr = QSqlQueryModel_PersistentIndexList((QSqlQueryModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_sqlquerymodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QSqlQueryModel_QBasePersistentIndexList((QSqlQueryModel*)self);
    return _arr;
}

void q_sqlquerymodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    QSqlQueryModel_OnPersistentIndexList((QSqlQueryModel*)self, (intptr_t)callback);
}

QObject* q_sqlquerymodel_sender(void* self) {
    return QSqlQueryModel_Sender((QSqlQueryModel*)self);
}

QObject* q_sqlquerymodel_qbase_sender(void* self) {
    return QSqlQueryModel_QBaseSender((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_sender(void* self, QObject* (*callback)()) {
    QSqlQueryModel_OnSender((QSqlQueryModel*)self, (intptr_t)callback);
}

int32_t q_sqlquerymodel_sender_signal_index(void* self) {
    return QSqlQueryModel_SenderSignalIndex((QSqlQueryModel*)self);
}

int32_t q_sqlquerymodel_qbase_sender_signal_index(void* self) {
    return QSqlQueryModel_QBaseSenderSignalIndex((QSqlQueryModel*)self);
}

void q_sqlquerymodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSqlQueryModel_OnSenderSignalIndex((QSqlQueryModel*)self, (intptr_t)callback);
}

int32_t q_sqlquerymodel_receivers(void* self, const char* signal) {
    return QSqlQueryModel_Receivers((QSqlQueryModel*)self, signal);
}

int32_t q_sqlquerymodel_qbase_receivers(void* self, const char* signal) {
    return QSqlQueryModel_QBaseReceivers((QSqlQueryModel*)self, signal);
}

void q_sqlquerymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSqlQueryModel_OnReceivers((QSqlQueryModel*)self, (intptr_t)callback);
}

bool q_sqlquerymodel_is_signal_connected(void* self, void* signal) {
    return QSqlQueryModel_IsSignalConnected((QSqlQueryModel*)self, (QMetaMethod*)signal);
}

bool q_sqlquerymodel_qbase_is_signal_connected(void* self, void* signal) {
    return QSqlQueryModel_QBaseIsSignalConnected((QSqlQueryModel*)self, (QMetaMethod*)signal);
}

void q_sqlquerymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSqlQueryModel_OnIsSignalConnected((QSqlQueryModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlquerymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sqlquerymodel_delete(void* self) {
    QSqlQueryModel_Delete((QSqlQueryModel*)(self));
}
