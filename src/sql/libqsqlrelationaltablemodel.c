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
#include "libqsqltablemodel.hpp"
#include "../libqvariant.hpp"
#include "libqsqlrelationaltablemodel.hpp"
#include "libqsqlrelationaltablemodel.h"

QSqlRelation* q_sqlrelation_new() {
    return QSqlRelation_new();
}

QSqlRelation* q_sqlrelation_new2(const char* aTableName, const char* indexCol, const char* displayCol) {
    return QSqlRelation_new2(qstring(aTableName), qstring(indexCol), qstring(displayCol));
}

QSqlRelation* q_sqlrelation_new3(void* param1) {
    return QSqlRelation_new3((QSqlRelation*)param1);
}

void q_sqlrelation_swap(void* self, void* other) {
    QSqlRelation_Swap((QSqlRelation*)self, (QSqlRelation*)other);
}

const char* q_sqlrelation_table_name(void* self) {
    libqt_string _str = QSqlRelation_TableName((QSqlRelation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqlrelation_index_column(void* self) {
    libqt_string _str = QSqlRelation_IndexColumn((QSqlRelation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqlrelation_display_column(void* self) {
    libqt_string _str = QSqlRelation_DisplayColumn((QSqlRelation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sqlrelation_is_valid(void* self) {
    return QSqlRelation_IsValid((QSqlRelation*)self);
}

void q_sqlrelation_delete(void* self) {
    QSqlRelation_Delete((QSqlRelation*)(self));
}

QSqlRelationalTableModel* q_sqlrelationaltablemodel_new() {
    return QSqlRelationalTableModel_new();
}

QSqlRelationalTableModel* q_sqlrelationaltablemodel_new2(void* parent) {
    return QSqlRelationalTableModel_new2((QObject*)parent);
}

QSqlRelationalTableModel* q_sqlrelationaltablemodel_new3(void* parent, void* db) {
    return QSqlRelationalTableModel_new3((QObject*)parent, (QSqlDatabase*)db);
}

const QMetaObject* q_sqlrelationaltablemodel_meta_object(void* self) {
    return QSqlRelationalTableModel_MetaObject((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QSqlRelationalTableModel_OnMetaObject((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

const QMetaObject* q_sqlrelationaltablemodel_qbase_meta_object(void* self) {
    return QSqlRelationalTableModel_QBaseMetaObject((QSqlRelationalTableModel*)self);
}

void* q_sqlrelationaltablemodel_metacast(void* self, const char* param1) {
    return QSqlRelationalTableModel_Metacast((QSqlRelationalTableModel*)self, param1);
}

void q_sqlrelationaltablemodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QSqlRelationalTableModel_OnMetacast((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void* q_sqlrelationaltablemodel_qbase_metacast(void* self, const char* param1) {
    return QSqlRelationalTableModel_QBaseMetacast((QSqlRelationalTableModel*)self, param1);
}

int32_t q_sqlrelationaltablemodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSqlRelationalTableModel_Metacall((QSqlRelationalTableModel*)self, param1, param2, param3);
}

void q_sqlrelationaltablemodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSqlRelationalTableModel_OnMetacall((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

int32_t q_sqlrelationaltablemodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSqlRelationalTableModel_QBaseMetacall((QSqlRelationalTableModel*)self, param1, param2, param3);
}

const char* q_sqlrelationaltablemodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* q_sqlrelationaltablemodel_data(void* self, void* item, int role) {
    return QSqlRelationalTableModel_Data((QSqlRelationalTableModel*)self, (QModelIndex*)item, role);
}

void q_sqlrelationaltablemodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    QSqlRelationalTableModel_OnData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QVariant* q_sqlrelationaltablemodel_qbase_data(void* self, void* item, int role) {
    return QSqlRelationalTableModel_QBaseData((QSqlRelationalTableModel*)self, (QModelIndex*)item, role);
}

bool q_sqlrelationaltablemodel_set_data(void* self, void* item, void* value, int role) {
    return QSqlRelationalTableModel_SetData((QSqlRelationalTableModel*)self, (QModelIndex*)item, (QVariant*)value, role);
}

void q_sqlrelationaltablemodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    QSqlRelationalTableModel_OnSetData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_qbase_set_data(void* self, void* item, void* value, int role) {
    return QSqlRelationalTableModel_QBaseSetData((QSqlRelationalTableModel*)self, (QModelIndex*)item, (QVariant*)value, role);
}

bool q_sqlrelationaltablemodel_remove_columns(void* self, int column, int count, void* parent) {
    return QSqlRelationalTableModel_RemoveColumns((QSqlRelationalTableModel*)self, column, count, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QSqlRelationalTableModel_OnRemoveColumns((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QSqlRelationalTableModel_QBaseRemoveColumns((QSqlRelationalTableModel*)self, column, count, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_clear(void* self) {
    QSqlRelationalTableModel_Clear((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_clear(void* self, void (*callback)()) {
    QSqlRelationalTableModel_OnClear((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_qbase_clear(void* self) {
    QSqlRelationalTableModel_QBaseClear((QSqlRelationalTableModel*)self);
}

bool q_sqlrelationaltablemodel_select(void* self) {
    return QSqlRelationalTableModel_Select((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_select(void* self, bool (*callback)()) {
    QSqlRelationalTableModel_OnSelect((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_qbase_select(void* self) {
    return QSqlRelationalTableModel_QBaseSelect((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_set_table(void* self, const char* tableName) {
    QSqlRelationalTableModel_SetTable((QSqlRelationalTableModel*)self, qstring(tableName));
}

void q_sqlrelationaltablemodel_on_set_table(void* self, void (*callback)(void*, const char*)) {
    QSqlRelationalTableModel_OnSetTable((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_qbase_set_table(void* self, const char* tableName) {
    QSqlRelationalTableModel_QBaseSetTable((QSqlRelationalTableModel*)self, qstring(tableName));
}

void q_sqlrelationaltablemodel_set_relation(void* self, int column, void* relation) {
    QSqlRelationalTableModel_SetRelation((QSqlRelationalTableModel*)self, column, (QSqlRelation*)relation);
}

void q_sqlrelationaltablemodel_on_set_relation(void* self, void (*callback)(void*, int, void*)) {
    QSqlRelationalTableModel_OnSetRelation((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_qbase_set_relation(void* self, int column, void* relation) {
    QSqlRelationalTableModel_QBaseSetRelation((QSqlRelationalTableModel*)self, column, (QSqlRelation*)relation);
}

QSqlRelation* q_sqlrelationaltablemodel_relation(void* self, int column) {
    return QSqlRelationalTableModel_Relation((QSqlRelationalTableModel*)self, column);
}

QSqlTableModel* q_sqlrelationaltablemodel_relation_model(void* self, int column) {
    return QSqlRelationalTableModel_RelationModel((QSqlRelationalTableModel*)self, column);
}

void q_sqlrelationaltablemodel_on_relation_model(void* self, QSqlTableModel* (*callback)(void*, int)) {
    QSqlRelationalTableModel_OnRelationModel((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QSqlTableModel* q_sqlrelationaltablemodel_qbase_relation_model(void* self, int column) {
    return QSqlRelationalTableModel_QBaseRelationModel((QSqlRelationalTableModel*)self, column);
}

void q_sqlrelationaltablemodel_set_join_mode(void* self, int32_t joinMode) {
    QSqlRelationalTableModel_SetJoinMode((QSqlRelationalTableModel*)self, joinMode);
}

void q_sqlrelationaltablemodel_revert_row(void* self, int row) {
    QSqlRelationalTableModel_RevertRow((QSqlRelationalTableModel*)self, row);
}

void q_sqlrelationaltablemodel_on_revert_row(void* self, void (*callback)(void*, int)) {
    QSqlRelationalTableModel_OnRevertRow((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_qbase_revert_row(void* self, int row) {
    QSqlRelationalTableModel_QBaseRevertRow((QSqlRelationalTableModel*)self, row);
}

const char* q_sqlrelationaltablemodel_select_statement(void* self) {
    libqt_string _str = QSqlRelationalTableModel_SelectStatement((QSqlRelationalTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqlrelationaltablemodel_on_select_statement(void* self, const char* (*callback)()) {
    QSqlRelationalTableModel_OnSelectStatement((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

const char* q_sqlrelationaltablemodel_qbase_select_statement(void* self) {
    libqt_string _str = QSqlRelationalTableModel_QBaseSelectStatement((QSqlRelationalTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sqlrelationaltablemodel_update_row_in_table(void* self, int row, void* values) {
    return QSqlRelationalTableModel_UpdateRowInTable((QSqlRelationalTableModel*)self, row, (QSqlRecord*)values);
}

void q_sqlrelationaltablemodel_on_update_row_in_table(void* self, bool (*callback)(void*, int, void*)) {
    QSqlRelationalTableModel_OnUpdateRowInTable((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_qbase_update_row_in_table(void* self, int row, void* values) {
    return QSqlRelationalTableModel_QBaseUpdateRowInTable((QSqlRelationalTableModel*)self, row, (QSqlRecord*)values);
}

bool q_sqlrelationaltablemodel_insert_row_into_table(void* self, void* values) {
    return QSqlRelationalTableModel_InsertRowIntoTable((QSqlRelationalTableModel*)self, (QSqlRecord*)values);
}

void q_sqlrelationaltablemodel_on_insert_row_into_table(void* self, bool (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnInsertRowIntoTable((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_qbase_insert_row_into_table(void* self, void* values) {
    return QSqlRelationalTableModel_QBaseInsertRowIntoTable((QSqlRelationalTableModel*)self, (QSqlRecord*)values);
}

const char* q_sqlrelationaltablemodel_order_by_clause(void* self) {
    libqt_string _str = QSqlRelationalTableModel_OrderByClause((QSqlRelationalTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqlrelationaltablemodel_on_order_by_clause(void* self, const char* (*callback)()) {
    QSqlRelationalTableModel_OnOrderByClause((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

const char* q_sqlrelationaltablemodel_qbase_order_by_clause(void* self) {
    libqt_string _str = QSqlRelationalTableModel_QBaseOrderByClause((QSqlRelationalTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqlrelationaltablemodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqlrelationaltablemodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqlrelationaltablemodel_table_name(void* self) {
    libqt_string _str = QSqlTableModel_TableName((QSqlTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSqlRecord* q_sqlrelationaltablemodel_record(void* self) {
    return QSqlTableModel_Record((QSqlTableModel*)self);
}

QSqlRecord* q_sqlrelationaltablemodel_record2(void* self, int row) {
    return QSqlTableModel_Record2((QSqlTableModel*)self, row);
}

bool q_sqlrelationaltablemodel_is_dirty(void* self) {
    return QSqlTableModel_IsDirty((QSqlTableModel*)self);
}

bool q_sqlrelationaltablemodel_is_dirty2(void* self, void* index) {
    return QSqlTableModel_IsDirty2((QSqlTableModel*)self, (QModelIndex*)index);
}

int32_t q_sqlrelationaltablemodel_edit_strategy(void* self) {
    return QSqlTableModel_EditStrategy((QSqlTableModel*)self);
}

QSqlIndex* q_sqlrelationaltablemodel_primary_key(void* self) {
    return QSqlTableModel_PrimaryKey((QSqlTableModel*)self);
}

QSqlDatabase* q_sqlrelationaltablemodel_database(void* self) {
    return QSqlTableModel_Database((QSqlTableModel*)self);
}

int32_t q_sqlrelationaltablemodel_field_index(void* self, const char* fieldName) {
    return QSqlTableModel_FieldIndex((QSqlTableModel*)self, qstring(fieldName));
}

const char* q_sqlrelationaltablemodel_filter(void* self) {
    libqt_string _str = QSqlTableModel_Filter((QSqlTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sqlrelationaltablemodel_insert_record(void* self, int row, void* record) {
    return QSqlTableModel_InsertRecord((QSqlTableModel*)self, row, (QSqlRecord*)record);
}

bool q_sqlrelationaltablemodel_set_record(void* self, int row, void* record) {
    return QSqlTableModel_SetRecord((QSqlTableModel*)self, row, (QSqlRecord*)record);
}

bool q_sqlrelationaltablemodel_submit_all(void* self) {
    return QSqlTableModel_SubmitAll((QSqlTableModel*)self);
}

void q_sqlrelationaltablemodel_revert_all(void* self) {
    QSqlTableModel_RevertAll((QSqlTableModel*)self);
}

void q_sqlrelationaltablemodel_prime_insert(void* self, int row, void* record) {
    QSqlTableModel_PrimeInsert((QSqlTableModel*)self, row, (QSqlRecord*)record);
}

void q_sqlrelationaltablemodel_on_prime_insert(void* self, void (*callback)(void*, int, void*)) {
    QSqlTableModel_Connect_PrimeInsert((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_before_insert(void* self, void* record) {
    QSqlTableModel_BeforeInsert((QSqlTableModel*)self, (QSqlRecord*)record);
}

void q_sqlrelationaltablemodel_on_before_insert(void* self, void (*callback)(void*, void*)) {
    QSqlTableModel_Connect_BeforeInsert((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_before_update(void* self, int row, void* record) {
    QSqlTableModel_BeforeUpdate((QSqlTableModel*)self, row, (QSqlRecord*)record);
}

void q_sqlrelationaltablemodel_on_before_update(void* self, void (*callback)(void*, int, void*)) {
    QSqlTableModel_Connect_BeforeUpdate((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_before_delete(void* self, int row) {
    QSqlTableModel_BeforeDelete((QSqlTableModel*)self, row);
}

void q_sqlrelationaltablemodel_on_before_delete(void* self, void (*callback)(void*, int)) {
    QSqlTableModel_Connect_BeforeDelete((QSqlTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_set_query(void* self, void* query) {
    QSqlQueryModel_SetQuery((QSqlQueryModel*)self, (QSqlQuery*)query);
}

void q_sqlrelationaltablemodel_set_query2(void* self, const char* query) {
    QSqlQueryModel_SetQuery2((QSqlQueryModel*)self, qstring(query));
}

const QSqlQuery* q_sqlrelationaltablemodel_query(void* self) {
    return QSqlQueryModel_Query((QSqlQueryModel*)self);
}

QSqlError* q_sqlrelationaltablemodel_last_error(void* self) {
    return QSqlQueryModel_LastError((QSqlQueryModel*)self);
}

void q_sqlrelationaltablemodel_set_query22(void* self, const char* query, void* db) {
    QSqlQueryModel_SetQuery22((QSqlQueryModel*)self, qstring(query), (QSqlDatabase*)db);
}

const QSqlQuery* q_sqlrelationaltablemodel_query1(void* self, void* param1) {
    return QSqlQueryModel_Query1((QSqlQueryModel*)self, (Disambiguated_t*)param1);
}

bool q_sqlrelationaltablemodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* q_sqlrelationaltablemodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void q_sqlrelationaltablemodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlrelationaltablemodel_qbase_parent(void* self, void* child) {
    return QAbstractItemModel_QBaseParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

bool q_sqlrelationaltablemodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_qbase_has_children(void* self, void* parent) {
    return QAbstractItemModel_QBaseHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_sqlrelationaltablemodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_sqlrelationaltablemodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_sqlrelationaltablemodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_sqlrelationaltablemodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqlrelationaltablemodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqlrelationaltablemodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_sqlrelationaltablemodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_sqlrelationaltablemodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_sqlrelationaltablemodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_sqlrelationaltablemodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_sqlrelationaltablemodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_sqlrelationaltablemodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_sqlrelationaltablemodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_sqlrelationaltablemodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_sqlrelationaltablemodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_sqlrelationaltablemodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_sqlrelationaltablemodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_sqlrelationaltablemodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqlrelationaltablemodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sqlrelationaltablemodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sqlrelationaltablemodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sqlrelationaltablemodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sqlrelationaltablemodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sqlrelationaltablemodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sqlrelationaltablemodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sqlrelationaltablemodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sqlrelationaltablemodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_sqlrelationaltablemodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_sqlrelationaltablemodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sqlrelationaltablemodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sqlrelationaltablemodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sqlrelationaltablemodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sqlrelationaltablemodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sqlrelationaltablemodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sqlrelationaltablemodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sqlrelationaltablemodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sqlrelationaltablemodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sqlrelationaltablemodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_sqlrelationaltablemodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sqlrelationaltablemodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sqlrelationaltablemodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sqlrelationaltablemodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sqlrelationaltablemodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqlrelationaltablemodel_dynamic_property_names\n");
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

QBindingStorage* q_sqlrelationaltablemodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sqlrelationaltablemodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sqlrelationaltablemodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sqlrelationaltablemodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sqlrelationaltablemodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_sqlrelationaltablemodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_sqlrelationaltablemodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_sqlrelationaltablemodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_sqlrelationaltablemodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sqlrelationaltablemodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_sqlrelationaltablemodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sqlrelationaltablemodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_sqlrelationaltablemodel_flags(void* self, void* index) {
    return QSqlRelationalTableModel_Flags((QSqlRelationalTableModel*)self, (QModelIndex*)index);
}

int32_t q_sqlrelationaltablemodel_qbase_flags(void* self, void* index) {
    return QSqlRelationalTableModel_QBaseFlags((QSqlRelationalTableModel*)self, (QModelIndex*)index);
}

void q_sqlrelationaltablemodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnFlags((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_clear_item_data(void* self, void* index) {
    return QSqlRelationalTableModel_ClearItemData((QSqlRelationalTableModel*)self, (QModelIndex*)index);
}

bool q_sqlrelationaltablemodel_qbase_clear_item_data(void* self, void* index) {
    return QSqlRelationalTableModel_QBaseClearItemData((QSqlRelationalTableModel*)self, (QModelIndex*)index);
}

void q_sqlrelationaltablemodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnClearItemData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QVariant* q_sqlrelationaltablemodel_header_data(void* self, int section, int32_t orientation, int role) {
    return QSqlRelationalTableModel_HeaderData((QSqlRelationalTableModel*)self, section, orientation, role);
}

QVariant* q_sqlrelationaltablemodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return QSqlRelationalTableModel_QBaseHeaderData((QSqlRelationalTableModel*)self, section, orientation, role);
}

void q_sqlrelationaltablemodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    QSqlRelationalTableModel_OnHeaderData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_set_edit_strategy(void* self, int32_t strategy) {
    QSqlRelationalTableModel_SetEditStrategy((QSqlRelationalTableModel*)self, strategy);
}

void q_sqlrelationaltablemodel_qbase_set_edit_strategy(void* self, int32_t strategy) {
    QSqlRelationalTableModel_QBaseSetEditStrategy((QSqlRelationalTableModel*)self, strategy);
}

void q_sqlrelationaltablemodel_on_set_edit_strategy(void* self, void (*callback)(void*, int32_t)) {
    QSqlRelationalTableModel_OnSetEditStrategy((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_sort(void* self, int column, int32_t order) {
    QSqlRelationalTableModel_Sort((QSqlRelationalTableModel*)self, column, order);
}

void q_sqlrelationaltablemodel_qbase_sort(void* self, int column, int32_t order) {
    QSqlRelationalTableModel_QBaseSort((QSqlRelationalTableModel*)self, column, order);
}

void q_sqlrelationaltablemodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QSqlRelationalTableModel_OnSort((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_set_sort(void* self, int column, int32_t order) {
    QSqlRelationalTableModel_SetSort((QSqlRelationalTableModel*)self, column, order);
}

void q_sqlrelationaltablemodel_qbase_set_sort(void* self, int column, int32_t order) {
    QSqlRelationalTableModel_QBaseSetSort((QSqlRelationalTableModel*)self, column, order);
}

void q_sqlrelationaltablemodel_on_set_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QSqlRelationalTableModel_OnSetSort((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_set_filter(void* self, const char* filter) {
    QSqlRelationalTableModel_SetFilter((QSqlRelationalTableModel*)self, qstring(filter));
}

void q_sqlrelationaltablemodel_qbase_set_filter(void* self, const char* filter) {
    QSqlRelationalTableModel_QBaseSetFilter((QSqlRelationalTableModel*)self, qstring(filter));
}

void q_sqlrelationaltablemodel_on_set_filter(void* self, void (*callback)(void*, const char*)) {
    QSqlRelationalTableModel_OnSetFilter((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

int32_t q_sqlrelationaltablemodel_row_count(void* self, void* parent) {
    return QSqlRelationalTableModel_RowCount((QSqlRelationalTableModel*)self, (QModelIndex*)parent);
}

int32_t q_sqlrelationaltablemodel_qbase_row_count(void* self, void* parent) {
    return QSqlRelationalTableModel_QBaseRowCount((QSqlRelationalTableModel*)self, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnRowCount((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_remove_rows(void* self, int row, int count, void* parent) {
    return QSqlRelationalTableModel_RemoveRows((QSqlRelationalTableModel*)self, row, count, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QSqlRelationalTableModel_QBaseRemoveRows((QSqlRelationalTableModel*)self, row, count, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QSqlRelationalTableModel_OnRemoveRows((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_insert_rows(void* self, int row, int count, void* parent) {
    return QSqlRelationalTableModel_InsertRows((QSqlRelationalTableModel*)self, row, count, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QSqlRelationalTableModel_QBaseInsertRows((QSqlRelationalTableModel*)self, row, count, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QSqlRelationalTableModel_OnInsertRows((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_select_row(void* self, int row) {
    return QSqlRelationalTableModel_SelectRow((QSqlRelationalTableModel*)self, row);
}

bool q_sqlrelationaltablemodel_qbase_select_row(void* self, int row) {
    return QSqlRelationalTableModel_QBaseSelectRow((QSqlRelationalTableModel*)self, row);
}

void q_sqlrelationaltablemodel_on_select_row(void* self, bool (*callback)(void*, int)) {
    QSqlRelationalTableModel_OnSelectRow((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_submit(void* self) {
    return QSqlRelationalTableModel_Submit((QSqlRelationalTableModel*)self);
}

bool q_sqlrelationaltablemodel_qbase_submit(void* self) {
    return QSqlRelationalTableModel_QBaseSubmit((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_submit(void* self, bool (*callback)()) {
    QSqlRelationalTableModel_OnSubmit((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_revert(void* self) {
    QSqlRelationalTableModel_Revert((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_qbase_revert(void* self) {
    QSqlRelationalTableModel_QBaseRevert((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_revert(void* self, void (*callback)()) {
    QSqlRelationalTableModel_OnRevert((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_delete_row_from_table(void* self, int row) {
    return QSqlRelationalTableModel_DeleteRowFromTable((QSqlRelationalTableModel*)self, row);
}

bool q_sqlrelationaltablemodel_qbase_delete_row_from_table(void* self, int row) {
    return QSqlRelationalTableModel_QBaseDeleteRowFromTable((QSqlRelationalTableModel*)self, row);
}

void q_sqlrelationaltablemodel_on_delete_row_from_table(void* self, bool (*callback)(void*, int)) {
    QSqlRelationalTableModel_OnDeleteRowFromTable((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlrelationaltablemodel_index_in_query(void* self, void* item) {
    return QSqlRelationalTableModel_IndexInQuery((QSqlRelationalTableModel*)self, (QModelIndex*)item);
}

QModelIndex* q_sqlrelationaltablemodel_qbase_index_in_query(void* self, void* item) {
    return QSqlRelationalTableModel_QBaseIndexInQuery((QSqlRelationalTableModel*)self, (QModelIndex*)item);
}

void q_sqlrelationaltablemodel_on_index_in_query(void* self, QModelIndex* (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnIndexInQuery((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

int32_t q_sqlrelationaltablemodel_column_count(void* self, void* parent) {
    return QSqlRelationalTableModel_ColumnCount((QSqlRelationalTableModel*)self, (QModelIndex*)parent);
}

int32_t q_sqlrelationaltablemodel_qbase_column_count(void* self, void* parent) {
    return QSqlRelationalTableModel_QBaseColumnCount((QSqlRelationalTableModel*)self, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnColumnCount((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QSqlRelationalTableModel_SetHeaderData((QSqlRelationalTableModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_sqlrelationaltablemodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QSqlRelationalTableModel_QBaseSetHeaderData((QSqlRelationalTableModel*)self, section, orientation, (QVariant*)value, role);
}

void q_sqlrelationaltablemodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    QSqlRelationalTableModel_OnSetHeaderData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_insert_columns(void* self, int column, int count, void* parent) {
    return QSqlRelationalTableModel_InsertColumns((QSqlRelationalTableModel*)self, column, count, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QSqlRelationalTableModel_QBaseInsertColumns((QSqlRelationalTableModel*)self, column, count, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QSqlRelationalTableModel_OnInsertColumns((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_fetch_more(void* self, void* parent) {
    QSqlRelationalTableModel_FetchMore((QSqlRelationalTableModel*)self, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_qbase_fetch_more(void* self, void* parent) {
    QSqlRelationalTableModel_QBaseFetchMore((QSqlRelationalTableModel*)self, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnFetchMore((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_can_fetch_more(void* self, void* parent) {
    return QSqlRelationalTableModel_CanFetchMore((QSqlRelationalTableModel*)self, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_qbase_can_fetch_more(void* self, void* parent) {
    return QSqlRelationalTableModel_QBaseCanFetchMore((QSqlRelationalTableModel*)self, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnCanFetchMore((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_sqlrelationaltablemodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QSqlRelationalTableModel_RoleNames((QSqlRelationalTableModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_sqlrelationaltablemodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_sqlrelationaltablemodel_role_names\n");
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

libqt_map /* of int to char* */ q_sqlrelationaltablemodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QSqlRelationalTableModel_QBaseRoleNames((QSqlRelationalTableModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_sqlrelationaltablemodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_sqlrelationaltablemodel_role_names\n");
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

void q_sqlrelationaltablemodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    QSqlRelationalTableModel_OnRoleNames((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_query_change(void* self) {
    QSqlRelationalTableModel_QueryChange((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_qbase_query_change(void* self) {
    QSqlRelationalTableModel_QBaseQueryChange((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_query_change(void* self, void (*callback)()) {
    QSqlRelationalTableModel_OnQueryChange((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlrelationaltablemodel_index(void* self, int row, int column, void* parent) {
    return QSqlRelationalTableModel_Index((QSqlRelationalTableModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_sqlrelationaltablemodel_qbase_index(void* self, int row, int column, void* parent) {
    return QSqlRelationalTableModel_QBaseIndex((QSqlRelationalTableModel*)self, row, column, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QSqlRelationalTableModel_OnIndex((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlrelationaltablemodel_sibling(void* self, int row, int column, void* idx) {
    return QSqlRelationalTableModel_Sibling((QSqlRelationalTableModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* q_sqlrelationaltablemodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QSqlRelationalTableModel_QBaseSibling((QSqlRelationalTableModel*)self, row, column, (QModelIndex*)idx);
}

void q_sqlrelationaltablemodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QSqlRelationalTableModel_OnSibling((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QSqlRelationalTableModel_DropMimeData((QSqlRelationalTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QSqlRelationalTableModel_QBaseDropMimeData((QSqlRelationalTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QSqlRelationalTableModel_OnDropMimeData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_sqlrelationaltablemodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QSqlRelationalTableModel_ItemData((QSqlRelationalTableModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ q_sqlrelationaltablemodel_qbase_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QSqlRelationalTableModel_QBaseItemData((QSqlRelationalTableModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void q_sqlrelationaltablemodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnItemData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_sqlrelationaltablemodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_sqlrelationaltablemodel_set_item_data\n");
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
    bool _out = QSqlRelationalTableModel_SetItemData((QSqlRelationalTableModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool q_sqlrelationaltablemodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_sqlrelationaltablemodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_sqlrelationaltablemodel_set_item_data\n");
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
    bool _out = QSqlRelationalTableModel_QBaseSetItemData((QSqlRelationalTableModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void q_sqlrelationaltablemodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QSqlRelationalTableModel_OnSetItemData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

const char** q_sqlrelationaltablemodel_mime_types(void* self) {
    libqt_list _arr = QSqlRelationalTableModel_MimeTypes((QSqlRelationalTableModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqlrelationaltablemodel_mime_types\n");
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

const char** q_sqlrelationaltablemodel_qbase_mime_types(void* self) {
    libqt_list _arr = QSqlRelationalTableModel_QBaseMimeTypes((QSqlRelationalTableModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqlrelationaltablemodel_mime_types\n");
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

void q_sqlrelationaltablemodel_on_mime_types(void* self, const char** (*callback)()) {
    QSqlRelationalTableModel_OnMimeTypes((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QMimeData* q_sqlrelationaltablemodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QSqlRelationalTableModel_MimeData((QSqlRelationalTableModel*)self, indexes);
}

QMimeData* q_sqlrelationaltablemodel_qbase_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QSqlRelationalTableModel_QBaseMimeData((QSqlRelationalTableModel*)self, indexes);
}

void q_sqlrelationaltablemodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    QSqlRelationalTableModel_OnMimeData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QSqlRelationalTableModel_CanDropMimeData((QSqlRelationalTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QSqlRelationalTableModel_QBaseCanDropMimeData((QSqlRelationalTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QSqlRelationalTableModel_OnCanDropMimeData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

int32_t q_sqlrelationaltablemodel_supported_drop_actions(void* self) {
    return QSqlRelationalTableModel_SupportedDropActions((QSqlRelationalTableModel*)self);
}

int32_t q_sqlrelationaltablemodel_qbase_supported_drop_actions(void* self) {
    return QSqlRelationalTableModel_QBaseSupportedDropActions((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    QSqlRelationalTableModel_OnSupportedDropActions((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

int32_t q_sqlrelationaltablemodel_supported_drag_actions(void* self) {
    return QSqlRelationalTableModel_SupportedDragActions((QSqlRelationalTableModel*)self);
}

int32_t q_sqlrelationaltablemodel_qbase_supported_drag_actions(void* self) {
    return QSqlRelationalTableModel_QBaseSupportedDragActions((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    QSqlRelationalTableModel_OnSupportedDragActions((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QSqlRelationalTableModel_MoveRows((QSqlRelationalTableModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqlrelationaltablemodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QSqlRelationalTableModel_QBaseMoveRows((QSqlRelationalTableModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_sqlrelationaltablemodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QSqlRelationalTableModel_OnMoveRows((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QSqlRelationalTableModel_MoveColumns((QSqlRelationalTableModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqlrelationaltablemodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QSqlRelationalTableModel_QBaseMoveColumns((QSqlRelationalTableModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_sqlrelationaltablemodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QSqlRelationalTableModel_OnMoveColumns((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlrelationaltablemodel_buddy(void* self, void* index) {
    return QSqlRelationalTableModel_Buddy((QSqlRelationalTableModel*)self, (QModelIndex*)index);
}

QModelIndex* q_sqlrelationaltablemodel_qbase_buddy(void* self, void* index) {
    return QSqlRelationalTableModel_QBaseBuddy((QSqlRelationalTableModel*)self, (QModelIndex*)index);
}

void q_sqlrelationaltablemodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnBuddy((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_sqlrelationaltablemodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QSqlRelationalTableModel_Match((QSqlRelationalTableModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_sqlrelationaltablemodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QSqlRelationalTableModel_QBaseMatch((QSqlRelationalTableModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_sqlrelationaltablemodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    QSqlRelationalTableModel_OnMatch((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QSize* q_sqlrelationaltablemodel_span(void* self, void* index) {
    return QSqlRelationalTableModel_Span((QSqlRelationalTableModel*)self, (QModelIndex*)index);
}

QSize* q_sqlrelationaltablemodel_qbase_span(void* self, void* index) {
    return QSqlRelationalTableModel_QBaseSpan((QSqlRelationalTableModel*)self, (QModelIndex*)index);
}

void q_sqlrelationaltablemodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnSpan((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QSqlRelationalTableModel_MultiData((QSqlRelationalTableModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_sqlrelationaltablemodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QSqlRelationalTableModel_QBaseMultiData((QSqlRelationalTableModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_sqlrelationaltablemodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    QSqlRelationalTableModel_OnMultiData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_reset_internal_data(void* self) {
    QSqlRelationalTableModel_ResetInternalData((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_qbase_reset_internal_data(void* self) {
    QSqlRelationalTableModel_QBaseResetInternalData((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_reset_internal_data(void* self, void (*callback)()) {
    QSqlRelationalTableModel_OnResetInternalData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_event(void* self, void* event) {
    return QSqlRelationalTableModel_Event((QSqlRelationalTableModel*)self, (QEvent*)event);
}

bool q_sqlrelationaltablemodel_qbase_event(void* self, void* event) {
    return QSqlRelationalTableModel_QBaseEvent((QSqlRelationalTableModel*)self, (QEvent*)event);
}

void q_sqlrelationaltablemodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnEvent((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_event_filter(void* self, void* watched, void* event) {
    return QSqlRelationalTableModel_EventFilter((QSqlRelationalTableModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sqlrelationaltablemodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QSqlRelationalTableModel_QBaseEventFilter((QSqlRelationalTableModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_sqlrelationaltablemodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSqlRelationalTableModel_OnEventFilter((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_timer_event(void* self, void* event) {
    QSqlRelationalTableModel_TimerEvent((QSqlRelationalTableModel*)self, (QTimerEvent*)event);
}

void q_sqlrelationaltablemodel_qbase_timer_event(void* self, void* event) {
    QSqlRelationalTableModel_QBaseTimerEvent((QSqlRelationalTableModel*)self, (QTimerEvent*)event);
}

void q_sqlrelationaltablemodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnTimerEvent((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_child_event(void* self, void* event) {
    QSqlRelationalTableModel_ChildEvent((QSqlRelationalTableModel*)self, (QChildEvent*)event);
}

void q_sqlrelationaltablemodel_qbase_child_event(void* self, void* event) {
    QSqlRelationalTableModel_QBaseChildEvent((QSqlRelationalTableModel*)self, (QChildEvent*)event);
}

void q_sqlrelationaltablemodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnChildEvent((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_custom_event(void* self, void* event) {
    QSqlRelationalTableModel_CustomEvent((QSqlRelationalTableModel*)self, (QEvent*)event);
}

void q_sqlrelationaltablemodel_qbase_custom_event(void* self, void* event) {
    QSqlRelationalTableModel_QBaseCustomEvent((QSqlRelationalTableModel*)self, (QEvent*)event);
}

void q_sqlrelationaltablemodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnCustomEvent((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_connect_notify(void* self, void* signal) {
    QSqlRelationalTableModel_ConnectNotify((QSqlRelationalTableModel*)self, (QMetaMethod*)signal);
}

void q_sqlrelationaltablemodel_qbase_connect_notify(void* self, void* signal) {
    QSqlRelationalTableModel_QBaseConnectNotify((QSqlRelationalTableModel*)self, (QMetaMethod*)signal);
}

void q_sqlrelationaltablemodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnConnectNotify((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_disconnect_notify(void* self, void* signal) {
    QSqlRelationalTableModel_DisconnectNotify((QSqlRelationalTableModel*)self, (QMetaMethod*)signal);
}

void q_sqlrelationaltablemodel_qbase_disconnect_notify(void* self, void* signal) {
    QSqlRelationalTableModel_QBaseDisconnectNotify((QSqlRelationalTableModel*)self, (QMetaMethod*)signal);
}

void q_sqlrelationaltablemodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnDisconnectNotify((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_set_primary_key(void* self, void* key) {
    QSqlRelationalTableModel_SetPrimaryKey((QSqlRelationalTableModel*)self, (QSqlIndex*)key);
}

void q_sqlrelationaltablemodel_qbase_set_primary_key(void* self, void* key) {
    QSqlRelationalTableModel_QBaseSetPrimaryKey((QSqlRelationalTableModel*)self, (QSqlIndex*)key);
}

void q_sqlrelationaltablemodel_on_set_primary_key(void* self, void (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnSetPrimaryKey((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QSqlRecord* q_sqlrelationaltablemodel_primary_values(void* self, int row) {
    return QSqlRelationalTableModel_PrimaryValues((QSqlRelationalTableModel*)self, row);
}

QSqlRecord* q_sqlrelationaltablemodel_qbase_primary_values(void* self, int row) {
    return QSqlRelationalTableModel_QBasePrimaryValues((QSqlRelationalTableModel*)self, row);
}

void q_sqlrelationaltablemodel_on_primary_values(void* self, QSqlRecord* (*callback)(void*, int)) {
    QSqlRelationalTableModel_OnPrimaryValues((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QSqlRelationalTableModel_BeginInsertRows((QSqlRelationalTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlrelationaltablemodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QSqlRelationalTableModel_QBaseBeginInsertRows((QSqlRelationalTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlrelationaltablemodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QSqlRelationalTableModel_OnBeginInsertRows((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_end_insert_rows(void* self) {
    QSqlRelationalTableModel_EndInsertRows((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_qbase_end_insert_rows(void* self) {
    QSqlRelationalTableModel_QBaseEndInsertRows((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_end_insert_rows(void* self, void (*callback)()) {
    QSqlRelationalTableModel_OnEndInsertRows((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QSqlRelationalTableModel_BeginRemoveRows((QSqlRelationalTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlrelationaltablemodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QSqlRelationalTableModel_QBaseBeginRemoveRows((QSqlRelationalTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlrelationaltablemodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QSqlRelationalTableModel_OnBeginRemoveRows((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_end_remove_rows(void* self) {
    QSqlRelationalTableModel_EndRemoveRows((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_qbase_end_remove_rows(void* self) {
    QSqlRelationalTableModel_QBaseEndRemoveRows((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_end_remove_rows(void* self, void (*callback)()) {
    QSqlRelationalTableModel_OnEndRemoveRows((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QSqlRelationalTableModel_BeginInsertColumns((QSqlRelationalTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlrelationaltablemodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QSqlRelationalTableModel_QBaseBeginInsertColumns((QSqlRelationalTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlrelationaltablemodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QSqlRelationalTableModel_OnBeginInsertColumns((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_end_insert_columns(void* self) {
    QSqlRelationalTableModel_EndInsertColumns((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_qbase_end_insert_columns(void* self) {
    QSqlRelationalTableModel_QBaseEndInsertColumns((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_end_insert_columns(void* self, void (*callback)()) {
    QSqlRelationalTableModel_OnEndInsertColumns((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QSqlRelationalTableModel_BeginRemoveColumns((QSqlRelationalTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlrelationaltablemodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QSqlRelationalTableModel_QBaseBeginRemoveColumns((QSqlRelationalTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlrelationaltablemodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QSqlRelationalTableModel_OnBeginRemoveColumns((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_end_remove_columns(void* self) {
    QSqlRelationalTableModel_EndRemoveColumns((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_qbase_end_remove_columns(void* self) {
    QSqlRelationalTableModel_QBaseEndRemoveColumns((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_end_remove_columns(void* self, void (*callback)()) {
    QSqlRelationalTableModel_OnEndRemoveColumns((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_begin_reset_model(void* self) {
    QSqlRelationalTableModel_BeginResetModel((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_qbase_begin_reset_model(void* self) {
    QSqlRelationalTableModel_QBaseBeginResetModel((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_begin_reset_model(void* self, void (*callback)()) {
    QSqlRelationalTableModel_OnBeginResetModel((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_end_reset_model(void* self) {
    QSqlRelationalTableModel_EndResetModel((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_qbase_end_reset_model(void* self) {
    QSqlRelationalTableModel_QBaseEndResetModel((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_end_reset_model(void* self, void (*callback)()) {
    QSqlRelationalTableModel_OnEndResetModel((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_set_last_error(void* self, void* error) {
    QSqlRelationalTableModel_SetLastError((QSqlRelationalTableModel*)self, (QSqlError*)error);
}

void q_sqlrelationaltablemodel_qbase_set_last_error(void* self, void* error) {
    QSqlRelationalTableModel_QBaseSetLastError((QSqlRelationalTableModel*)self, (QSqlError*)error);
}

void q_sqlrelationaltablemodel_on_set_last_error(void* self, void (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnSetLastError((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlrelationaltablemodel_create_index(void* self, int row, int column) {
    return QSqlRelationalTableModel_CreateIndex((QSqlRelationalTableModel*)self, row, column);
}

QModelIndex* q_sqlrelationaltablemodel_qbase_create_index(void* self, int row, int column) {
    return QSqlRelationalTableModel_QBaseCreateIndex((QSqlRelationalTableModel*)self, row, column);
}

void q_sqlrelationaltablemodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    QSqlRelationalTableModel_OnCreateIndex((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QSqlRelationalTableModel_EncodeData((QSqlRelationalTableModel*)self, indexes, (QDataStream*)stream);
}

void q_sqlrelationaltablemodel_qbase_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QSqlRelationalTableModel_QBaseEncodeData((QSqlRelationalTableModel*)self, indexes, (QDataStream*)stream);
}

void q_sqlrelationaltablemodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    QSqlRelationalTableModel_OnEncodeData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QSqlRelationalTableModel_DecodeData((QSqlRelationalTableModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_sqlrelationaltablemodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QSqlRelationalTableModel_QBaseDecodeData((QSqlRelationalTableModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_sqlrelationaltablemodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    QSqlRelationalTableModel_OnDecodeData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QSqlRelationalTableModel_BeginMoveRows((QSqlRelationalTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool q_sqlrelationaltablemodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QSqlRelationalTableModel_QBaseBeginMoveRows((QSqlRelationalTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_sqlrelationaltablemodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QSqlRelationalTableModel_OnBeginMoveRows((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_end_move_rows(void* self) {
    QSqlRelationalTableModel_EndMoveRows((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_qbase_end_move_rows(void* self) {
    QSqlRelationalTableModel_QBaseEndMoveRows((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_end_move_rows(void* self, void (*callback)()) {
    QSqlRelationalTableModel_OnEndMoveRows((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QSqlRelationalTableModel_BeginMoveColumns((QSqlRelationalTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool q_sqlrelationaltablemodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QSqlRelationalTableModel_QBaseBeginMoveColumns((QSqlRelationalTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_sqlrelationaltablemodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QSqlRelationalTableModel_OnBeginMoveColumns((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_end_move_columns(void* self) {
    QSqlRelationalTableModel_EndMoveColumns((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_qbase_end_move_columns(void* self) {
    QSqlRelationalTableModel_QBaseEndMoveColumns((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_end_move_columns(void* self, void (*callback)()) {
    QSqlRelationalTableModel_OnEndMoveColumns((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_change_persistent_index(void* self, void* from, void* to) {
    QSqlRelationalTableModel_ChangePersistentIndex((QSqlRelationalTableModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_sqlrelationaltablemodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QSqlRelationalTableModel_QBaseChangePersistentIndex((QSqlRelationalTableModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_sqlrelationaltablemodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    QSqlRelationalTableModel_OnChangePersistentIndex((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QSqlRelationalTableModel_ChangePersistentIndexList((QSqlRelationalTableModel*)self, from, to);
}

void q_sqlrelationaltablemodel_qbase_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QSqlRelationalTableModel_QBaseChangePersistentIndexList((QSqlRelationalTableModel*)self, from, to);
}

void q_sqlrelationaltablemodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    QSqlRelationalTableModel_OnChangePersistentIndexList((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_sqlrelationaltablemodel_persistent_index_list(void* self) {
    libqt_list _arr = QSqlRelationalTableModel_PersistentIndexList((QSqlRelationalTableModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_sqlrelationaltablemodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QSqlRelationalTableModel_QBasePersistentIndexList((QSqlRelationalTableModel*)self);
    return _arr;
}

void q_sqlrelationaltablemodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    QSqlRelationalTableModel_OnPersistentIndexList((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QObject* q_sqlrelationaltablemodel_sender(void* self) {
    return QSqlRelationalTableModel_Sender((QSqlRelationalTableModel*)self);
}

QObject* q_sqlrelationaltablemodel_qbase_sender(void* self) {
    return QSqlRelationalTableModel_QBaseSender((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_sender(void* self, QObject* (*callback)()) {
    QSqlRelationalTableModel_OnSender((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

int32_t q_sqlrelationaltablemodel_sender_signal_index(void* self) {
    return QSqlRelationalTableModel_SenderSignalIndex((QSqlRelationalTableModel*)self);
}

int32_t q_sqlrelationaltablemodel_qbase_sender_signal_index(void* self) {
    return QSqlRelationalTableModel_QBaseSenderSignalIndex((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSqlRelationalTableModel_OnSenderSignalIndex((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

int32_t q_sqlrelationaltablemodel_receivers(void* self, const char* signal) {
    return QSqlRelationalTableModel_Receivers((QSqlRelationalTableModel*)self, signal);
}

int32_t q_sqlrelationaltablemodel_qbase_receivers(void* self, const char* signal) {
    return QSqlRelationalTableModel_QBaseReceivers((QSqlRelationalTableModel*)self, signal);
}

void q_sqlrelationaltablemodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSqlRelationalTableModel_OnReceivers((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_is_signal_connected(void* self, void* signal) {
    return QSqlRelationalTableModel_IsSignalConnected((QSqlRelationalTableModel*)self, (QMetaMethod*)signal);
}

bool q_sqlrelationaltablemodel_qbase_is_signal_connected(void* self, void* signal) {
    return QSqlRelationalTableModel_QBaseIsSignalConnected((QSqlRelationalTableModel*)self, (QMetaMethod*)signal);
}

void q_sqlrelationaltablemodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnIsSignalConnected((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_delete(void* self) {
    QSqlRelationalTableModel_Delete((QSqlRelationalTableModel*)(self));
}
