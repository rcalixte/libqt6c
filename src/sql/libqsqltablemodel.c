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
#include "libqsqlindex.hpp"
#include "libqsqlquerymodel.hpp"
#include "libqsqlrecord.hpp"
#include "../libqvariant.hpp"
#include "libqsqltablemodel.hpp"
#include "libqsqltablemodel.h"

QSqlTableModel* q_sqltablemodel_new() {
    return QSqlTableModel_new();
}

QSqlTableModel* q_sqltablemodel_new2(void* parent) {
    return QSqlTableModel_new2((QObject*)parent);
}

QSqlTableModel* q_sqltablemodel_new3(void* parent, void* db) {
    return QSqlTableModel_new3((QObject*)parent, (QSqlDatabase*)db);
}

const QMetaObject* q_sqltablemodel_meta_object(void* self) {
    return QSqlTableModel_MetaObject((QSqlTableModel*)self);
}

void* q_sqltablemodel_metacast(void* self, const char* param1) {
    return QSqlTableModel_Metacast((QSqlTableModel*)self, param1);
}

int32_t q_sqltablemodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSqlTableModel_Metacall((QSqlTableModel*)self, param1, param2, param3);
}

void q_sqltablemodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSqlTableModel_OnMetacall((QSqlTableModel*)self, (intptr_t)callback);
}

int32_t q_sqltablemodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSqlTableModel_QBaseMetacall((QSqlTableModel*)self, param1, param2, param3);
}

const char* q_sqltablemodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqltablemodel_set_table(void* self, const char* tableName) {
    QSqlTableModel_SetTable((QSqlTableModel*)self, qstring(tableName));
}

void q_sqltablemodel_on_set_table(void* self, void (*callback)(void*, const char*)) {
    QSqlTableModel_OnSetTable((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_qbase_set_table(void* self, const char* tableName) {
    QSqlTableModel_QBaseSetTable((QSqlTableModel*)self, qstring(tableName));
}

const char* q_sqltablemodel_table_name(void* self) {
    libqt_string _str = QSqlTableModel_TableName((QSqlTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_sqltablemodel_flags(void* self, void* index) {
    return QSqlTableModel_Flags((QSqlTableModel*)self, (QModelIndex*)index);
}

void q_sqltablemodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    QSqlTableModel_OnFlags((QSqlTableModel*)self, (intptr_t)callback);
}

int32_t q_sqltablemodel_qbase_flags(void* self, void* index) {
    return QSqlTableModel_QBaseFlags((QSqlTableModel*)self, (QModelIndex*)index);
}

QSqlRecord* q_sqltablemodel_record(void* self) {
    return QSqlTableModel_Record((QSqlTableModel*)self);
}

QSqlRecord* q_sqltablemodel_record2(void* self, int row) {
    return QSqlTableModel_Record2((QSqlTableModel*)self, row);
}

QVariant* q_sqltablemodel_data(void* self, void* idx, int role) {
    return QSqlTableModel_Data((QSqlTableModel*)self, (QModelIndex*)idx, role);
}

void q_sqltablemodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    QSqlTableModel_OnData((QSqlTableModel*)self, (intptr_t)callback);
}

QVariant* q_sqltablemodel_qbase_data(void* self, void* idx, int role) {
    return QSqlTableModel_QBaseData((QSqlTableModel*)self, (QModelIndex*)idx, role);
}

bool q_sqltablemodel_set_data(void* self, void* index, void* value, int role) {
    return QSqlTableModel_SetData((QSqlTableModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_sqltablemodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    QSqlTableModel_OnSetData((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QSqlTableModel_QBaseSetData((QSqlTableModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool q_sqltablemodel_clear_item_data(void* self, void* index) {
    return QSqlTableModel_ClearItemData((QSqlTableModel*)self, (QModelIndex*)index);
}

void q_sqltablemodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    QSqlTableModel_OnClearItemData((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_qbase_clear_item_data(void* self, void* index) {
    return QSqlTableModel_QBaseClearItemData((QSqlTableModel*)self, (QModelIndex*)index);
}

QVariant* q_sqltablemodel_header_data(void* self, int section, int32_t orientation, int role) {
    return QSqlTableModel_HeaderData((QSqlTableModel*)self, section, orientation, role);
}

void q_sqltablemodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    QSqlTableModel_OnHeaderData((QSqlTableModel*)self, (intptr_t)callback);
}

QVariant* q_sqltablemodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return QSqlTableModel_QBaseHeaderData((QSqlTableModel*)self, section, orientation, role);
}

bool q_sqltablemodel_is_dirty(void* self) {
    return QSqlTableModel_IsDirty((QSqlTableModel*)self);
}

bool q_sqltablemodel_is_dirty2(void* self, void* index) {
    return QSqlTableModel_IsDirty2((QSqlTableModel*)self, (QModelIndex*)index);
}

void q_sqltablemodel_clear(void* self) {
    QSqlTableModel_Clear((QSqlTableModel*)self);
}

void q_sqltablemodel_on_clear(void* self, void (*callback)()) {
    QSqlTableModel_OnClear((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_qbase_clear(void* self) {
    QSqlTableModel_QBaseClear((QSqlTableModel*)self);
}

void q_sqltablemodel_set_edit_strategy(void* self, int32_t strategy) {
    QSqlTableModel_SetEditStrategy((QSqlTableModel*)self, strategy);
}

void q_sqltablemodel_on_set_edit_strategy(void* self, void (*callback)(void*, int32_t)) {
    QSqlTableModel_OnSetEditStrategy((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_qbase_set_edit_strategy(void* self, int32_t strategy) {
    QSqlTableModel_QBaseSetEditStrategy((QSqlTableModel*)self, strategy);
}

int32_t q_sqltablemodel_edit_strategy(void* self) {
    return QSqlTableModel_EditStrategy((QSqlTableModel*)self);
}

QSqlIndex* q_sqltablemodel_primary_key(void* self) {
    return QSqlTableModel_PrimaryKey((QSqlTableModel*)self);
}

QSqlDatabase* q_sqltablemodel_database(void* self) {
    return QSqlTableModel_Database((QSqlTableModel*)self);
}

int32_t q_sqltablemodel_field_index(void* self, const char* fieldName) {
    return QSqlTableModel_FieldIndex((QSqlTableModel*)self, qstring(fieldName));
}

void q_sqltablemodel_sort(void* self, int column, int32_t order) {
    QSqlTableModel_Sort((QSqlTableModel*)self, column, order);
}

void q_sqltablemodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QSqlTableModel_OnSort((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_qbase_sort(void* self, int column, int32_t order) {
    QSqlTableModel_QBaseSort((QSqlTableModel*)self, column, order);
}

void q_sqltablemodel_set_sort(void* self, int column, int32_t order) {
    QSqlTableModel_SetSort((QSqlTableModel*)self, column, order);
}

void q_sqltablemodel_on_set_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QSqlTableModel_OnSetSort((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_qbase_set_sort(void* self, int column, int32_t order) {
    QSqlTableModel_QBaseSetSort((QSqlTableModel*)self, column, order);
}

const char* q_sqltablemodel_filter(void* self) {
    libqt_string _str = QSqlTableModel_Filter((QSqlTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqltablemodel_set_filter(void* self, const char* filter) {
    QSqlTableModel_SetFilter((QSqlTableModel*)self, qstring(filter));
}

void q_sqltablemodel_on_set_filter(void* self, void (*callback)(void*, const char*)) {
    QSqlTableModel_OnSetFilter((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_qbase_set_filter(void* self, const char* filter) {
    QSqlTableModel_QBaseSetFilter((QSqlTableModel*)self, qstring(filter));
}

int32_t q_sqltablemodel_row_count(void* self, void* parent) {
    return QSqlTableModel_RowCount((QSqlTableModel*)self, (QModelIndex*)parent);
}

void q_sqltablemodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    QSqlTableModel_OnRowCount((QSqlTableModel*)self, (intptr_t)callback);
}

int32_t q_sqltablemodel_qbase_row_count(void* self, void* parent) {
    return QSqlTableModel_QBaseRowCount((QSqlTableModel*)self, (QModelIndex*)parent);
}

bool q_sqltablemodel_remove_columns(void* self, int column, int count, void* parent) {
    return QSqlTableModel_RemoveColumns((QSqlTableModel*)self, column, count, (QModelIndex*)parent);
}

void q_sqltablemodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QSqlTableModel_OnRemoveColumns((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QSqlTableModel_QBaseRemoveColumns((QSqlTableModel*)self, column, count, (QModelIndex*)parent);
}

bool q_sqltablemodel_remove_rows(void* self, int row, int count, void* parent) {
    return QSqlTableModel_RemoveRows((QSqlTableModel*)self, row, count, (QModelIndex*)parent);
}

void q_sqltablemodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QSqlTableModel_OnRemoveRows((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QSqlTableModel_QBaseRemoveRows((QSqlTableModel*)self, row, count, (QModelIndex*)parent);
}

bool q_sqltablemodel_insert_rows(void* self, int row, int count, void* parent) {
    return QSqlTableModel_InsertRows((QSqlTableModel*)self, row, count, (QModelIndex*)parent);
}

void q_sqltablemodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QSqlTableModel_OnInsertRows((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QSqlTableModel_QBaseInsertRows((QSqlTableModel*)self, row, count, (QModelIndex*)parent);
}

bool q_sqltablemodel_insert_record(void* self, int row, void* record) {
    return QSqlTableModel_InsertRecord((QSqlTableModel*)self, row, (QSqlRecord*)record);
}

bool q_sqltablemodel_set_record(void* self, int row, void* record) {
    return QSqlTableModel_SetRecord((QSqlTableModel*)self, row, (QSqlRecord*)record);
}

void q_sqltablemodel_revert_row(void* self, int row) {
    QSqlTableModel_RevertRow((QSqlTableModel*)self, row);
}

void q_sqltablemodel_on_revert_row(void* self, void (*callback)(void*, int)) {
    QSqlTableModel_OnRevertRow((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_qbase_revert_row(void* self, int row) {
    QSqlTableModel_QBaseRevertRow((QSqlTableModel*)self, row);
}

bool q_sqltablemodel_select(void* self) {
    return QSqlTableModel_Select((QSqlTableModel*)self);
}

void q_sqltablemodel_on_select(void* self, bool (*callback)()) {
    QSqlTableModel_OnSelect((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_qbase_select(void* self) {
    return QSqlTableModel_QBaseSelect((QSqlTableModel*)self);
}

bool q_sqltablemodel_select_row(void* self, int row) {
    return QSqlTableModel_SelectRow((QSqlTableModel*)self, row);
}

void q_sqltablemodel_on_select_row(void* self, bool (*callback)(void*, int)) {
    QSqlTableModel_OnSelectRow((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_qbase_select_row(void* self, int row) {
    return QSqlTableModel_QBaseSelectRow((QSqlTableModel*)self, row);
}

bool q_sqltablemodel_submit(void* self) {
    return QSqlTableModel_Submit((QSqlTableModel*)self);
}

void q_sqltablemodel_on_submit(void* self, bool (*callback)()) {
    QSqlTableModel_OnSubmit((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_qbase_submit(void* self) {
    return QSqlTableModel_QBaseSubmit((QSqlTableModel*)self);
}

void q_sqltablemodel_revert(void* self) {
    QSqlTableModel_Revert((QSqlTableModel*)self);
}

void q_sqltablemodel_on_revert(void* self, void (*callback)()) {
    QSqlTableModel_OnRevert((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_qbase_revert(void* self) {
    QSqlTableModel_QBaseRevert((QSqlTableModel*)self);
}

bool q_sqltablemodel_submit_all(void* self) {
    return QSqlTableModel_SubmitAll((QSqlTableModel*)self);
}

void q_sqltablemodel_revert_all(void* self) {
    QSqlTableModel_RevertAll((QSqlTableModel*)self);
}

void q_sqltablemodel_prime_insert(void* self, int row, void* record) {
    QSqlTableModel_PrimeInsert((QSqlTableModel*)self, row, (QSqlRecord*)record);
}

void q_sqltablemodel_on_prime_insert(void* self, void (*callback)(void*, int, void*)) {
    QSqlTableModel_Connect_PrimeInsert((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_before_insert(void* self, void* record) {
    QSqlTableModel_BeforeInsert((QSqlTableModel*)self, (QSqlRecord*)record);
}

void q_sqltablemodel_on_before_insert(void* self, void (*callback)(void*, void*)) {
    QSqlTableModel_Connect_BeforeInsert((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_before_update(void* self, int row, void* record) {
    QSqlTableModel_BeforeUpdate((QSqlTableModel*)self, row, (QSqlRecord*)record);
}

void q_sqltablemodel_on_before_update(void* self, void (*callback)(void*, int, void*)) {
    QSqlTableModel_Connect_BeforeUpdate((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_before_delete(void* self, int row) {
    QSqlTableModel_BeforeDelete((QSqlTableModel*)self, row);
}

void q_sqltablemodel_on_before_delete(void* self, void (*callback)(void*, int)) {
    QSqlTableModel_Connect_BeforeDelete((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_update_row_in_table(void* self, int row, void* values) {
    return QSqlTableModel_UpdateRowInTable((QSqlTableModel*)self, row, (QSqlRecord*)values);
}

void q_sqltablemodel_on_update_row_in_table(void* self, bool (*callback)(void*, int, void*)) {
    QSqlTableModel_OnUpdateRowInTable((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_qbase_update_row_in_table(void* self, int row, void* values) {
    return QSqlTableModel_QBaseUpdateRowInTable((QSqlTableModel*)self, row, (QSqlRecord*)values);
}

bool q_sqltablemodel_insert_row_into_table(void* self, void* values) {
    return QSqlTableModel_InsertRowIntoTable((QSqlTableModel*)self, (QSqlRecord*)values);
}

void q_sqltablemodel_on_insert_row_into_table(void* self, bool (*callback)(void*, void*)) {
    QSqlTableModel_OnInsertRowIntoTable((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_qbase_insert_row_into_table(void* self, void* values) {
    return QSqlTableModel_QBaseInsertRowIntoTable((QSqlTableModel*)self, (QSqlRecord*)values);
}

bool q_sqltablemodel_delete_row_from_table(void* self, int row) {
    return QSqlTableModel_DeleteRowFromTable((QSqlTableModel*)self, row);
}

void q_sqltablemodel_on_delete_row_from_table(void* self, bool (*callback)(void*, int)) {
    QSqlTableModel_OnDeleteRowFromTable((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_qbase_delete_row_from_table(void* self, int row) {
    return QSqlTableModel_QBaseDeleteRowFromTable((QSqlTableModel*)self, row);
}

const char* q_sqltablemodel_order_by_clause(void* self) {
    libqt_string _str = QSqlTableModel_OrderByClause((QSqlTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqltablemodel_on_order_by_clause(void* self, const char* (*callback)()) {
    QSqlTableModel_OnOrderByClause((QSqlTableModel*)self, (intptr_t)callback);
}

const char* q_sqltablemodel_qbase_order_by_clause(void* self) {
    libqt_string _str = QSqlTableModel_QBaseOrderByClause((QSqlTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqltablemodel_select_statement(void* self) {
    libqt_string _str = QSqlTableModel_SelectStatement((QSqlTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqltablemodel_on_select_statement(void* self, const char* (*callback)()) {
    QSqlTableModel_OnSelectStatement((QSqlTableModel*)self, (intptr_t)callback);
}

const char* q_sqltablemodel_qbase_select_statement(void* self) {
    libqt_string _str = QSqlTableModel_QBaseSelectStatement((QSqlTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqltablemodel_set_primary_key(void* self, void* key) {
    QSqlTableModel_SetPrimaryKey((QSqlTableModel*)self, (QSqlIndex*)key);
}

void q_sqltablemodel_on_set_primary_key(void* self, void (*callback)(void*, void*)) {
    QSqlTableModel_OnSetPrimaryKey((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_qbase_set_primary_key(void* self, void* key) {
    QSqlTableModel_QBaseSetPrimaryKey((QSqlTableModel*)self, (QSqlIndex*)key);
}

QModelIndex* q_sqltablemodel_index_in_query(void* self, void* item) {
    return QSqlTableModel_IndexInQuery((QSqlTableModel*)self, (QModelIndex*)item);
}

void q_sqltablemodel_on_index_in_query(void* self, QModelIndex* (*callback)(void*, void*)) {
    QSqlTableModel_OnIndexInQuery((QSqlTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqltablemodel_qbase_index_in_query(void* self, void* item) {
    return QSqlTableModel_QBaseIndexInQuery((QSqlTableModel*)self, (QModelIndex*)item);
}

QSqlRecord* q_sqltablemodel_primary_values(void* self, int row) {
    return QSqlTableModel_PrimaryValues((QSqlTableModel*)self, row);
}

void q_sqltablemodel_on_primary_values(void* self, QSqlRecord* (*callback)(void*, int)) {
    QSqlTableModel_OnPrimaryValues((QSqlTableModel*)self, (intptr_t)callback);
}

QSqlRecord* q_sqltablemodel_qbase_primary_values(void* self, int row) {
    return QSqlTableModel_QBasePrimaryValues((QSqlTableModel*)self, row);
}

const char* q_sqltablemodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqltablemodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqltablemodel_set_query(void* self, void* query) {
    QSqlQueryModel_SetQuery((QSqlQueryModel*)self, (QSqlQuery*)query);
}

void q_sqltablemodel_set_query2(void* self, const char* query) {
    QSqlQueryModel_SetQuery2((QSqlQueryModel*)self, qstring(query));
}

const QSqlQuery* q_sqltablemodel_query(void* self) {
    return QSqlQueryModel_Query((QSqlQueryModel*)self);
}

QSqlError* q_sqltablemodel_last_error(void* self) {
    return QSqlQueryModel_LastError((QSqlQueryModel*)self);
}

void q_sqltablemodel_set_query22(void* self, const char* query, void* db) {
    QSqlQueryModel_SetQuery22((QSqlQueryModel*)self, qstring(query), (QSqlDatabase*)db);
}

const QSqlQuery* q_sqltablemodel_query1(void* self, void* param1) {
    return QSqlQueryModel_Query1((QSqlQueryModel*)self, (Disambiguated_t*)param1);
}

bool q_sqltablemodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* q_sqltablemodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void q_sqltablemodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqltablemodel_qbase_parent(void* self, void* child) {
    return QAbstractItemModel_QBaseParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

bool q_sqltablemodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_sqltablemodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_qbase_has_children(void* self, void* parent) {
    return QAbstractItemModel_QBaseHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_sqltablemodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_sqltablemodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_sqltablemodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_sqltablemodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_sqltablemodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqltablemodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqltablemodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_sqltablemodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_sqltablemodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_sqltablemodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_sqltablemodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_sqltablemodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_sqltablemodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_sqltablemodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_sqltablemodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_sqltablemodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_sqltablemodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_sqltablemodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_sqltablemodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_sqltablemodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_sqltablemodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_sqltablemodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_sqltablemodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_sqltablemodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqltablemodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sqltablemodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sqltablemodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sqltablemodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sqltablemodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sqltablemodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sqltablemodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sqltablemodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sqltablemodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_sqltablemodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sqltablemodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sqltablemodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sqltablemodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sqltablemodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sqltablemodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sqltablemodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sqltablemodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sqltablemodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sqltablemodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_sqltablemodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sqltablemodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sqltablemodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sqltablemodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sqltablemodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqltablemodel_dynamic_property_names\n");
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

QBindingStorage* q_sqltablemodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sqltablemodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sqltablemodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sqltablemodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_sqltablemodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sqltablemodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_sqltablemodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_sqltablemodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_sqltablemodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sqltablemodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_sqltablemodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sqltablemodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_sqltablemodel_column_count(void* self, void* parent) {
    return QSqlTableModel_ColumnCount((QSqlTableModel*)self, (QModelIndex*)parent);
}

int32_t q_sqltablemodel_qbase_column_count(void* self, void* parent) {
    return QSqlTableModel_QBaseColumnCount((QSqlTableModel*)self, (QModelIndex*)parent);
}

void q_sqltablemodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QSqlTableModel_OnColumnCount((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QSqlTableModel_SetHeaderData((QSqlTableModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_sqltablemodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QSqlTableModel_QBaseSetHeaderData((QSqlTableModel*)self, section, orientation, (QVariant*)value, role);
}

void q_sqltablemodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    QSqlTableModel_OnSetHeaderData((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_insert_columns(void* self, int column, int count, void* parent) {
    return QSqlTableModel_InsertColumns((QSqlTableModel*)self, column, count, (QModelIndex*)parent);
}

bool q_sqltablemodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QSqlTableModel_QBaseInsertColumns((QSqlTableModel*)self, column, count, (QModelIndex*)parent);
}

void q_sqltablemodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QSqlTableModel_OnInsertColumns((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_fetch_more(void* self, void* parent) {
    QSqlTableModel_FetchMore((QSqlTableModel*)self, (QModelIndex*)parent);
}

void q_sqltablemodel_qbase_fetch_more(void* self, void* parent) {
    QSqlTableModel_QBaseFetchMore((QSqlTableModel*)self, (QModelIndex*)parent);
}

void q_sqltablemodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    QSqlTableModel_OnFetchMore((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_can_fetch_more(void* self, void* parent) {
    return QSqlTableModel_CanFetchMore((QSqlTableModel*)self, (QModelIndex*)parent);
}

bool q_sqltablemodel_qbase_can_fetch_more(void* self, void* parent) {
    return QSqlTableModel_QBaseCanFetchMore((QSqlTableModel*)self, (QModelIndex*)parent);
}

void q_sqltablemodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    QSqlTableModel_OnCanFetchMore((QSqlTableModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_sqltablemodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QSqlTableModel_RoleNames((QSqlTableModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_sqltablemodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_sqltablemodel_role_names\n");
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

libqt_map /* of int to char* */ q_sqltablemodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QSqlTableModel_QBaseRoleNames((QSqlTableModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_sqltablemodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_sqltablemodel_role_names\n");
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

void q_sqltablemodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    QSqlTableModel_OnRoleNames((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_query_change(void* self) {
    QSqlTableModel_QueryChange((QSqlTableModel*)self);
}

void q_sqltablemodel_qbase_query_change(void* self) {
    QSqlTableModel_QBaseQueryChange((QSqlTableModel*)self);
}

void q_sqltablemodel_on_query_change(void* self, void (*callback)()) {
    QSqlTableModel_OnQueryChange((QSqlTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqltablemodel_index(void* self, int row, int column, void* parent) {
    return QSqlTableModel_Index((QSqlTableModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_sqltablemodel_qbase_index(void* self, int row, int column, void* parent) {
    return QSqlTableModel_QBaseIndex((QSqlTableModel*)self, row, column, (QModelIndex*)parent);
}

void q_sqltablemodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QSqlTableModel_OnIndex((QSqlTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqltablemodel_sibling(void* self, int row, int column, void* idx) {
    return QSqlTableModel_Sibling((QSqlTableModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* q_sqltablemodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QSqlTableModel_QBaseSibling((QSqlTableModel*)self, row, column, (QModelIndex*)idx);
}

void q_sqltablemodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QSqlTableModel_OnSibling((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QSqlTableModel_DropMimeData((QSqlTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_sqltablemodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QSqlTableModel_QBaseDropMimeData((QSqlTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_sqltablemodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QSqlTableModel_OnDropMimeData((QSqlTableModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_sqltablemodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QSqlTableModel_ItemData((QSqlTableModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ q_sqltablemodel_qbase_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QSqlTableModel_QBaseItemData((QSqlTableModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void q_sqltablemodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    QSqlTableModel_OnItemData((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_sqltablemodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_sqltablemodel_set_item_data\n");
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
    bool _out = QSqlTableModel_SetItemData((QSqlTableModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool q_sqltablemodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_sqltablemodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_sqltablemodel_set_item_data\n");
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
    bool _out = QSqlTableModel_QBaseSetItemData((QSqlTableModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void q_sqltablemodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QSqlTableModel_OnSetItemData((QSqlTableModel*)self, (intptr_t)callback);
}

const char** q_sqltablemodel_mime_types(void* self) {
    libqt_list _arr = QSqlTableModel_MimeTypes((QSqlTableModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqltablemodel_mime_types\n");
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

const char** q_sqltablemodel_qbase_mime_types(void* self) {
    libqt_list _arr = QSqlTableModel_QBaseMimeTypes((QSqlTableModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqltablemodel_mime_types\n");
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

void q_sqltablemodel_on_mime_types(void* self, const char** (*callback)()) {
    QSqlTableModel_OnMimeTypes((QSqlTableModel*)self, (intptr_t)callback);
}

QMimeData* q_sqltablemodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QSqlTableModel_MimeData((QSqlTableModel*)self, indexes);
}

QMimeData* q_sqltablemodel_qbase_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QSqlTableModel_QBaseMimeData((QSqlTableModel*)self, indexes);
}

void q_sqltablemodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    QSqlTableModel_OnMimeData((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QSqlTableModel_CanDropMimeData((QSqlTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_sqltablemodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QSqlTableModel_QBaseCanDropMimeData((QSqlTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_sqltablemodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QSqlTableModel_OnCanDropMimeData((QSqlTableModel*)self, (intptr_t)callback);
}

int32_t q_sqltablemodel_supported_drop_actions(void* self) {
    return QSqlTableModel_SupportedDropActions((QSqlTableModel*)self);
}

int32_t q_sqltablemodel_qbase_supported_drop_actions(void* self) {
    return QSqlTableModel_QBaseSupportedDropActions((QSqlTableModel*)self);
}

void q_sqltablemodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    QSqlTableModel_OnSupportedDropActions((QSqlTableModel*)self, (intptr_t)callback);
}

int32_t q_sqltablemodel_supported_drag_actions(void* self) {
    return QSqlTableModel_SupportedDragActions((QSqlTableModel*)self);
}

int32_t q_sqltablemodel_qbase_supported_drag_actions(void* self) {
    return QSqlTableModel_QBaseSupportedDragActions((QSqlTableModel*)self);
}

void q_sqltablemodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    QSqlTableModel_OnSupportedDragActions((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QSqlTableModel_MoveRows((QSqlTableModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqltablemodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QSqlTableModel_QBaseMoveRows((QSqlTableModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_sqltablemodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QSqlTableModel_OnMoveRows((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QSqlTableModel_MoveColumns((QSqlTableModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqltablemodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QSqlTableModel_QBaseMoveColumns((QSqlTableModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_sqltablemodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QSqlTableModel_OnMoveColumns((QSqlTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqltablemodel_buddy(void* self, void* index) {
    return QSqlTableModel_Buddy((QSqlTableModel*)self, (QModelIndex*)index);
}

QModelIndex* q_sqltablemodel_qbase_buddy(void* self, void* index) {
    return QSqlTableModel_QBaseBuddy((QSqlTableModel*)self, (QModelIndex*)index);
}

void q_sqltablemodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    QSqlTableModel_OnBuddy((QSqlTableModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_sqltablemodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QSqlTableModel_Match((QSqlTableModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_sqltablemodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QSqlTableModel_QBaseMatch((QSqlTableModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_sqltablemodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    QSqlTableModel_OnMatch((QSqlTableModel*)self, (intptr_t)callback);
}

QSize* q_sqltablemodel_span(void* self, void* index) {
    return QSqlTableModel_Span((QSqlTableModel*)self, (QModelIndex*)index);
}

QSize* q_sqltablemodel_qbase_span(void* self, void* index) {
    return QSqlTableModel_QBaseSpan((QSqlTableModel*)self, (QModelIndex*)index);
}

void q_sqltablemodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    QSqlTableModel_OnSpan((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QSqlTableModel_MultiData((QSqlTableModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_sqltablemodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QSqlTableModel_QBaseMultiData((QSqlTableModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_sqltablemodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    QSqlTableModel_OnMultiData((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_reset_internal_data(void* self) {
    QSqlTableModel_ResetInternalData((QSqlTableModel*)self);
}

void q_sqltablemodel_qbase_reset_internal_data(void* self) {
    QSqlTableModel_QBaseResetInternalData((QSqlTableModel*)self);
}

void q_sqltablemodel_on_reset_internal_data(void* self, void (*callback)()) {
    QSqlTableModel_OnResetInternalData((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_event(void* self, void* event) {
    return QSqlTableModel_Event((QSqlTableModel*)self, (QEvent*)event);
}

bool q_sqltablemodel_qbase_event(void* self, void* event) {
    return QSqlTableModel_QBaseEvent((QSqlTableModel*)self, (QEvent*)event);
}

void q_sqltablemodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QSqlTableModel_OnEvent((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_event_filter(void* self, void* watched, void* event) {
    return QSqlTableModel_EventFilter((QSqlTableModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sqltablemodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QSqlTableModel_QBaseEventFilter((QSqlTableModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_sqltablemodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSqlTableModel_OnEventFilter((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_timer_event(void* self, void* event) {
    QSqlTableModel_TimerEvent((QSqlTableModel*)self, (QTimerEvent*)event);
}

void q_sqltablemodel_qbase_timer_event(void* self, void* event) {
    QSqlTableModel_QBaseTimerEvent((QSqlTableModel*)self, (QTimerEvent*)event);
}

void q_sqltablemodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSqlTableModel_OnTimerEvent((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_child_event(void* self, void* event) {
    QSqlTableModel_ChildEvent((QSqlTableModel*)self, (QChildEvent*)event);
}

void q_sqltablemodel_qbase_child_event(void* self, void* event) {
    QSqlTableModel_QBaseChildEvent((QSqlTableModel*)self, (QChildEvent*)event);
}

void q_sqltablemodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSqlTableModel_OnChildEvent((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_custom_event(void* self, void* event) {
    QSqlTableModel_CustomEvent((QSqlTableModel*)self, (QEvent*)event);
}

void q_sqltablemodel_qbase_custom_event(void* self, void* event) {
    QSqlTableModel_QBaseCustomEvent((QSqlTableModel*)self, (QEvent*)event);
}

void q_sqltablemodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSqlTableModel_OnCustomEvent((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_connect_notify(void* self, void* signal) {
    QSqlTableModel_ConnectNotify((QSqlTableModel*)self, (QMetaMethod*)signal);
}

void q_sqltablemodel_qbase_connect_notify(void* self, void* signal) {
    QSqlTableModel_QBaseConnectNotify((QSqlTableModel*)self, (QMetaMethod*)signal);
}

void q_sqltablemodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSqlTableModel_OnConnectNotify((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_disconnect_notify(void* self, void* signal) {
    QSqlTableModel_DisconnectNotify((QSqlTableModel*)self, (QMetaMethod*)signal);
}

void q_sqltablemodel_qbase_disconnect_notify(void* self, void* signal) {
    QSqlTableModel_QBaseDisconnectNotify((QSqlTableModel*)self, (QMetaMethod*)signal);
}

void q_sqltablemodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSqlTableModel_OnDisconnectNotify((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QSqlTableModel_BeginInsertRows((QSqlTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqltablemodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QSqlTableModel_QBaseBeginInsertRows((QSqlTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqltablemodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QSqlTableModel_OnBeginInsertRows((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_end_insert_rows(void* self) {
    QSqlTableModel_EndInsertRows((QSqlTableModel*)self);
}

void q_sqltablemodel_qbase_end_insert_rows(void* self) {
    QSqlTableModel_QBaseEndInsertRows((QSqlTableModel*)self);
}

void q_sqltablemodel_on_end_insert_rows(void* self, void (*callback)()) {
    QSqlTableModel_OnEndInsertRows((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QSqlTableModel_BeginRemoveRows((QSqlTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqltablemodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QSqlTableModel_QBaseBeginRemoveRows((QSqlTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqltablemodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QSqlTableModel_OnBeginRemoveRows((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_end_remove_rows(void* self) {
    QSqlTableModel_EndRemoveRows((QSqlTableModel*)self);
}

void q_sqltablemodel_qbase_end_remove_rows(void* self) {
    QSqlTableModel_QBaseEndRemoveRows((QSqlTableModel*)self);
}

void q_sqltablemodel_on_end_remove_rows(void* self, void (*callback)()) {
    QSqlTableModel_OnEndRemoveRows((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QSqlTableModel_BeginInsertColumns((QSqlTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqltablemodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QSqlTableModel_QBaseBeginInsertColumns((QSqlTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqltablemodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QSqlTableModel_OnBeginInsertColumns((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_end_insert_columns(void* self) {
    QSqlTableModel_EndInsertColumns((QSqlTableModel*)self);
}

void q_sqltablemodel_qbase_end_insert_columns(void* self) {
    QSqlTableModel_QBaseEndInsertColumns((QSqlTableModel*)self);
}

void q_sqltablemodel_on_end_insert_columns(void* self, void (*callback)()) {
    QSqlTableModel_OnEndInsertColumns((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QSqlTableModel_BeginRemoveColumns((QSqlTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqltablemodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QSqlTableModel_QBaseBeginRemoveColumns((QSqlTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqltablemodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QSqlTableModel_OnBeginRemoveColumns((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_end_remove_columns(void* self) {
    QSqlTableModel_EndRemoveColumns((QSqlTableModel*)self);
}

void q_sqltablemodel_qbase_end_remove_columns(void* self) {
    QSqlTableModel_QBaseEndRemoveColumns((QSqlTableModel*)self);
}

void q_sqltablemodel_on_end_remove_columns(void* self, void (*callback)()) {
    QSqlTableModel_OnEndRemoveColumns((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_begin_reset_model(void* self) {
    QSqlTableModel_BeginResetModel((QSqlTableModel*)self);
}

void q_sqltablemodel_qbase_begin_reset_model(void* self) {
    QSqlTableModel_QBaseBeginResetModel((QSqlTableModel*)self);
}

void q_sqltablemodel_on_begin_reset_model(void* self, void (*callback)()) {
    QSqlTableModel_OnBeginResetModel((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_end_reset_model(void* self) {
    QSqlTableModel_EndResetModel((QSqlTableModel*)self);
}

void q_sqltablemodel_qbase_end_reset_model(void* self) {
    QSqlTableModel_QBaseEndResetModel((QSqlTableModel*)self);
}

void q_sqltablemodel_on_end_reset_model(void* self, void (*callback)()) {
    QSqlTableModel_OnEndResetModel((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_set_last_error(void* self, void* error) {
    QSqlTableModel_SetLastError((QSqlTableModel*)self, (QSqlError*)error);
}

void q_sqltablemodel_qbase_set_last_error(void* self, void* error) {
    QSqlTableModel_QBaseSetLastError((QSqlTableModel*)self, (QSqlError*)error);
}

void q_sqltablemodel_on_set_last_error(void* self, void (*callback)(void*, void*)) {
    QSqlTableModel_OnSetLastError((QSqlTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqltablemodel_create_index(void* self, int row, int column) {
    return QSqlTableModel_CreateIndex((QSqlTableModel*)self, row, column);
}

QModelIndex* q_sqltablemodel_qbase_create_index(void* self, int row, int column) {
    return QSqlTableModel_QBaseCreateIndex((QSqlTableModel*)self, row, column);
}

void q_sqltablemodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    QSqlTableModel_OnCreateIndex((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QSqlTableModel_EncodeData((QSqlTableModel*)self, indexes, (QDataStream*)stream);
}

void q_sqltablemodel_qbase_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QSqlTableModel_QBaseEncodeData((QSqlTableModel*)self, indexes, (QDataStream*)stream);
}

void q_sqltablemodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    QSqlTableModel_OnEncodeData((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QSqlTableModel_DecodeData((QSqlTableModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_sqltablemodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QSqlTableModel_QBaseDecodeData((QSqlTableModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_sqltablemodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    QSqlTableModel_OnDecodeData((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QSqlTableModel_BeginMoveRows((QSqlTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool q_sqltablemodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QSqlTableModel_QBaseBeginMoveRows((QSqlTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_sqltablemodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QSqlTableModel_OnBeginMoveRows((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_end_move_rows(void* self) {
    QSqlTableModel_EndMoveRows((QSqlTableModel*)self);
}

void q_sqltablemodel_qbase_end_move_rows(void* self) {
    QSqlTableModel_QBaseEndMoveRows((QSqlTableModel*)self);
}

void q_sqltablemodel_on_end_move_rows(void* self, void (*callback)()) {
    QSqlTableModel_OnEndMoveRows((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QSqlTableModel_BeginMoveColumns((QSqlTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool q_sqltablemodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QSqlTableModel_QBaseBeginMoveColumns((QSqlTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_sqltablemodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QSqlTableModel_OnBeginMoveColumns((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_end_move_columns(void* self) {
    QSqlTableModel_EndMoveColumns((QSqlTableModel*)self);
}

void q_sqltablemodel_qbase_end_move_columns(void* self) {
    QSqlTableModel_QBaseEndMoveColumns((QSqlTableModel*)self);
}

void q_sqltablemodel_on_end_move_columns(void* self, void (*callback)()) {
    QSqlTableModel_OnEndMoveColumns((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_change_persistent_index(void* self, void* from, void* to) {
    QSqlTableModel_ChangePersistentIndex((QSqlTableModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_sqltablemodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QSqlTableModel_QBaseChangePersistentIndex((QSqlTableModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_sqltablemodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    QSqlTableModel_OnChangePersistentIndex((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QSqlTableModel_ChangePersistentIndexList((QSqlTableModel*)self, from, to);
}

void q_sqltablemodel_qbase_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QSqlTableModel_QBaseChangePersistentIndexList((QSqlTableModel*)self, from, to);
}

void q_sqltablemodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    QSqlTableModel_OnChangePersistentIndexList((QSqlTableModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_sqltablemodel_persistent_index_list(void* self) {
    libqt_list _arr = QSqlTableModel_PersistentIndexList((QSqlTableModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_sqltablemodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QSqlTableModel_QBasePersistentIndexList((QSqlTableModel*)self);
    return _arr;
}

void q_sqltablemodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    QSqlTableModel_OnPersistentIndexList((QSqlTableModel*)self, (intptr_t)callback);
}

QObject* q_sqltablemodel_sender(void* self) {
    return QSqlTableModel_Sender((QSqlTableModel*)self);
}

QObject* q_sqltablemodel_qbase_sender(void* self) {
    return QSqlTableModel_QBaseSender((QSqlTableModel*)self);
}

void q_sqltablemodel_on_sender(void* self, QObject* (*callback)()) {
    QSqlTableModel_OnSender((QSqlTableModel*)self, (intptr_t)callback);
}

int32_t q_sqltablemodel_sender_signal_index(void* self) {
    return QSqlTableModel_SenderSignalIndex((QSqlTableModel*)self);
}

int32_t q_sqltablemodel_qbase_sender_signal_index(void* self) {
    return QSqlTableModel_QBaseSenderSignalIndex((QSqlTableModel*)self);
}

void q_sqltablemodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSqlTableModel_OnSenderSignalIndex((QSqlTableModel*)self, (intptr_t)callback);
}

int32_t q_sqltablemodel_receivers(void* self, const char* signal) {
    return QSqlTableModel_Receivers((QSqlTableModel*)self, signal);
}

int32_t q_sqltablemodel_qbase_receivers(void* self, const char* signal) {
    return QSqlTableModel_QBaseReceivers((QSqlTableModel*)self, signal);
}

void q_sqltablemodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSqlTableModel_OnReceivers((QSqlTableModel*)self, (intptr_t)callback);
}

bool q_sqltablemodel_is_signal_connected(void* self, void* signal) {
    return QSqlTableModel_IsSignalConnected((QSqlTableModel*)self, (QMetaMethod*)signal);
}

bool q_sqltablemodel_qbase_is_signal_connected(void* self, void* signal) {
    return QSqlTableModel_QBaseIsSignalConnected((QSqlTableModel*)self, (QMetaMethod*)signal);
}

void q_sqltablemodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSqlTableModel_OnIsSignalConnected((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqltablemodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sqltablemodel_delete(void* self) {
    QSqlTableModel_Delete((QSqlTableModel*)(self));
}
