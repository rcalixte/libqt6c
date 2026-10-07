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
    return QSqlRelation_New();
}

QSqlRelation* q_sqlrelation_new2(const char* aTableName, const char* indexCol, const char* displayCol) {
    return QSqlRelation_New2(qstring(aTableName), qstring(indexCol), qstring(displayCol));
}

QSqlRelation* q_sqlrelation_new3(const void* param1) {
    return QSqlRelation_New3((QSqlRelation*)param1);
}

void q_sqlrelation_swap(void* self, void* other) {
    QSqlRelation_Swap((QSqlRelation*)self, (QSqlRelation*)other);
}

const char* q_sqlrelation_table_name(const void* self) {
    libqt_string _str = QSqlRelation_TableName((QSqlRelation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqlrelation_index_column(const void* self) {
    libqt_string _str = QSqlRelation_IndexColumn((QSqlRelation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqlrelation_display_column(const void* self) {
    libqt_string _str = QSqlRelation_DisplayColumn((QSqlRelation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sqlrelation_is_valid(const void* self) {
    return QSqlRelation_IsValid((QSqlRelation*)self);
}

void q_sqlrelation_operator_assign(void* self, const void* param1) {
    QSqlRelation_OperatorAssign((QSqlRelation*)self, (QSqlRelation*)param1);
}

void q_sqlrelation_delete(void* self) {
    QSqlRelation_Delete((QSqlRelation*)(self));
}

QSqlRelationalTableModel* q_sqlrelationaltablemodel_new() {
    return QSqlRelationalTableModel_New();
}

QSqlRelationalTableModel* q_sqlrelationaltablemodel_new2(void* parent) {
    return QSqlRelationalTableModel_New2((QObject*)parent);
}

QSqlRelationalTableModel* q_sqlrelationaltablemodel_new3(void* parent, const void* db) {
    return QSqlRelationalTableModel_New3((QObject*)parent, (QSqlDatabase*)db);
}

const QMetaObject* q_sqlrelationaltablemodel_meta_object(const void* self) {
    return QSqlRelationalTableModel_MetaObject((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QSqlRelationalTableModel_OnMetaObject((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

const QMetaObject* q_sqlrelationaltablemodel_super_meta_object(const void* self) {
    return QSqlRelationalTableModel_SuperMetaObject((QSqlRelationalTableModel*)self);
}

void* q_sqlrelationaltablemodel_metacast(void* self, const char* param1) {
    return QSqlRelationalTableModel_Metacast((QSqlRelationalTableModel*)self, param1);
}

void q_sqlrelationaltablemodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QSqlRelationalTableModel_OnMetacast((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void* q_sqlrelationaltablemodel_super_metacast(void* self, const char* param1) {
    return QSqlRelationalTableModel_SuperMetacast((QSqlRelationalTableModel*)self, param1);
}

int32_t q_sqlrelationaltablemodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSqlRelationalTableModel_Metacall((QSqlRelationalTableModel*)self, param1, param2, param3);
}

void q_sqlrelationaltablemodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSqlRelationalTableModel_OnMetacall((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

int32_t q_sqlrelationaltablemodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSqlRelationalTableModel_SuperMetacall((QSqlRelationalTableModel*)self, param1, param2, param3);
}

const char* q_sqlrelationaltablemodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* q_sqlrelationaltablemodel_data(const void* self, const void* item, int role) {
    return QSqlRelationalTableModel_Data((QSqlRelationalTableModel*)self, (QModelIndex*)item, role);
}

void q_sqlrelationaltablemodel_on_data(void* self, QVariant* (*callback)(const void*, const void*, int)) {
    QSqlRelationalTableModel_OnData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QVariant* q_sqlrelationaltablemodel_super_data(const void* self, const void* item, int role) {
    return QSqlRelationalTableModel_SuperData((QSqlRelationalTableModel*)self, (QModelIndex*)item, role);
}

bool q_sqlrelationaltablemodel_set_data(void* self, const void* item, const void* value, int role) {
    return QSqlRelationalTableModel_SetData((QSqlRelationalTableModel*)self, (QModelIndex*)item, (QVariant*)value, role);
}

void q_sqlrelationaltablemodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int)) {
    QSqlRelationalTableModel_OnSetData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_super_set_data(void* self, const void* item, const void* value, int role) {
    return QSqlRelationalTableModel_SuperSetData((QSqlRelationalTableModel*)self, (QModelIndex*)item, (QVariant*)value, role);
}

bool q_sqlrelationaltablemodel_remove_columns(void* self, int column, int count, const void* parent) {
    return QSqlRelationalTableModel_RemoveColumns((QSqlRelationalTableModel*)self, column, count, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    QSqlRelationalTableModel_OnRemoveColumns((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_super_remove_columns(void* self, int column, int count, const void* parent) {
    return QSqlRelationalTableModel_SuperRemoveColumns((QSqlRelationalTableModel*)self, column, count, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_clear(void* self) {
    QSqlRelationalTableModel_Clear((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_clear(void* self, void (*callback)(void*)) {
    QSqlRelationalTableModel_OnClear((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_super_clear(void* self) {
    QSqlRelationalTableModel_SuperClear((QSqlRelationalTableModel*)self);
}

bool q_sqlrelationaltablemodel_select(void* self) {
    return QSqlRelationalTableModel_Select((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_select(void* self, bool (*callback)(void*)) {
    QSqlRelationalTableModel_OnSelect((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_super_select(void* self) {
    return QSqlRelationalTableModel_SuperSelect((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_set_table(void* self, const char* tableName) {
    QSqlRelationalTableModel_SetTable((QSqlRelationalTableModel*)self, qstring(tableName));
}

void q_sqlrelationaltablemodel_on_set_table(void* self, void (*callback)(void*, const char*)) {
    QSqlRelationalTableModel_OnSetTable((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_super_set_table(void* self, const char* tableName) {
    QSqlRelationalTableModel_SuperSetTable((QSqlRelationalTableModel*)self, qstring(tableName));
}

void q_sqlrelationaltablemodel_set_relation(void* self, int column, const void* relation) {
    QSqlRelationalTableModel_SetRelation((QSqlRelationalTableModel*)self, column, (QSqlRelation*)relation);
}

void q_sqlrelationaltablemodel_on_set_relation(void* self, void (*callback)(void*, int, const void*)) {
    QSqlRelationalTableModel_OnSetRelation((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_super_set_relation(void* self, int column, const void* relation) {
    QSqlRelationalTableModel_SuperSetRelation((QSqlRelationalTableModel*)self, column, (QSqlRelation*)relation);
}

QSqlRelation* q_sqlrelationaltablemodel_relation(const void* self, int column) {
    return QSqlRelationalTableModel_Relation((QSqlRelationalTableModel*)self, column);
}

QSqlTableModel* q_sqlrelationaltablemodel_relation_model(const void* self, int column) {
    return QSqlRelationalTableModel_RelationModel((QSqlRelationalTableModel*)self, column);
}

void q_sqlrelationaltablemodel_on_relation_model(void* self, QSqlTableModel* (*callback)(const void*, int)) {
    QSqlRelationalTableModel_OnRelationModel((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QSqlTableModel* q_sqlrelationaltablemodel_super_relation_model(const void* self, int column) {
    return QSqlRelationalTableModel_SuperRelationModel((QSqlRelationalTableModel*)self, column);
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

void q_sqlrelationaltablemodel_super_revert_row(void* self, int row) {
    QSqlRelationalTableModel_SuperRevertRow((QSqlRelationalTableModel*)self, row);
}

const char* q_sqlrelationaltablemodel_select_statement(const void* self) {
    libqt_string _str = QSqlRelationalTableModel_SelectStatement((QSqlRelationalTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqlrelationaltablemodel_on_select_statement(void* self, const char* (*callback)(const void*)) {
    QSqlRelationalTableModel_OnSelectStatement((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

const char* q_sqlrelationaltablemodel_super_select_statement(const void* self) {
    libqt_string _str = QSqlRelationalTableModel_SuperSelectStatement((QSqlRelationalTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sqlrelationaltablemodel_update_row_in_table(void* self, int row, const void* values) {
    return QSqlRelationalTableModel_UpdateRowInTable((QSqlRelationalTableModel*)self, row, (QSqlRecord*)values);
}

void q_sqlrelationaltablemodel_on_update_row_in_table(void* self, bool (*callback)(void*, int, const void*)) {
    QSqlRelationalTableModel_OnUpdateRowInTable((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_super_update_row_in_table(void* self, int row, const void* values) {
    return QSqlRelationalTableModel_SuperUpdateRowInTable((QSqlRelationalTableModel*)self, row, (QSqlRecord*)values);
}

bool q_sqlrelationaltablemodel_insert_row_into_table(void* self, const void* values) {
    return QSqlRelationalTableModel_InsertRowIntoTable((QSqlRelationalTableModel*)self, (QSqlRecord*)values);
}

void q_sqlrelationaltablemodel_on_insert_row_into_table(void* self, bool (*callback)(void*, const void*)) {
    QSqlRelationalTableModel_OnInsertRowIntoTable((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_super_insert_row_into_table(void* self, const void* values) {
    return QSqlRelationalTableModel_SuperInsertRowIntoTable((QSqlRelationalTableModel*)self, (QSqlRecord*)values);
}

const char* q_sqlrelationaltablemodel_order_by_clause(const void* self) {
    libqt_string _str = QSqlRelationalTableModel_OrderByClause((QSqlRelationalTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqlrelationaltablemodel_on_order_by_clause(void* self, const char* (*callback)(const void*)) {
    QSqlRelationalTableModel_OnOrderByClause((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

const char* q_sqlrelationaltablemodel_super_order_by_clause(const void* self) {
    libqt_string _str = QSqlRelationalTableModel_SuperOrderByClause((QSqlRelationalTableModel*)self);
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

const char* q_sqlrelationaltablemodel_table_name(const void* self) {
    libqt_string _str = QSqlTableModel_TableName((QSqlTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSqlRecord* q_sqlrelationaltablemodel_record(const void* self) {
    return QSqlTableModel_Record((QSqlTableModel*)self);
}

QSqlRecord* q_sqlrelationaltablemodel_record2(const void* self, int row) {
    return QSqlTableModel_Record2((QSqlTableModel*)self, row);
}

bool q_sqlrelationaltablemodel_is_dirty(const void* self) {
    return QSqlTableModel_IsDirty((QSqlTableModel*)self);
}

bool q_sqlrelationaltablemodel_is_dirty2(const void* self, const void* index) {
    return QSqlTableModel_IsDirty2((QSqlTableModel*)self, (QModelIndex*)index);
}

int32_t q_sqlrelationaltablemodel_edit_strategy(const void* self) {
    return QSqlTableModel_EditStrategy((QSqlTableModel*)self);
}

QSqlIndex* q_sqlrelationaltablemodel_primary_key(const void* self) {
    return QSqlTableModel_PrimaryKey((QSqlTableModel*)self);
}

QSqlDatabase* q_sqlrelationaltablemodel_database(const void* self) {
    return QSqlTableModel_Database((QSqlTableModel*)self);
}

int32_t q_sqlrelationaltablemodel_field_index(const void* self, const char* fieldName) {
    return QSqlTableModel_FieldIndex((QSqlTableModel*)self, qstring(fieldName));
}

const char* q_sqlrelationaltablemodel_filter(const void* self) {
    libqt_string _str = QSqlTableModel_Filter((QSqlTableModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sqlrelationaltablemodel_insert_record(void* self, int row, const void* record) {
    return QSqlTableModel_InsertRecord((QSqlTableModel*)self, row, (QSqlRecord*)record);
}

bool q_sqlrelationaltablemodel_set_record(void* self, int row, const void* record) {
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

void q_sqlrelationaltablemodel_set_query(void* self, const void* query) {
    QSqlQueryModel_SetQuery((QSqlQueryModel*)self, (QSqlQuery*)query);
}

void q_sqlrelationaltablemodel_set_query2(void* self, const char* query) {
    QSqlQueryModel_SetQuery2((QSqlQueryModel*)self, qstring(query));
}

const QSqlQuery* q_sqlrelationaltablemodel_query(const void* self) {
    return QSqlQueryModel_Query((QSqlQueryModel*)self);
}

QSqlError* q_sqlrelationaltablemodel_last_error(const void* self) {
    return QSqlQueryModel_LastError((QSqlQueryModel*)self);
}

void q_sqlrelationaltablemodel_set_query22(void* self, const char* query, const void* db) {
    QSqlQueryModel_SetQuery22((QSqlQueryModel*)self, qstring(query), (QSqlDatabase*)db);
}

bool q_sqlrelationaltablemodel_has_index(const void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* q_sqlrelationaltablemodel_parent(const void* self, const void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void q_sqlrelationaltablemodel_on_parent(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_has_children(const void* self, const void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_has_children(void* self, bool (*callback)(const void*, const void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_super_has_children(const void* self, const void* parent) {
    return QAbstractItemModel_SuperHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
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

bool q_sqlrelationaltablemodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqlrelationaltablemodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqlrelationaltablemodel_check_index(const void* self, const void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_sqlrelationaltablemodel_data_changed(void* self, const void* topLeft, const void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_sqlrelationaltablemodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*)) {
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

bool q_sqlrelationaltablemodel_has_index3(const void* self, int row, int column, const void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_insert_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_insert_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_remove_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_remove_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_check_index2(const void* self, const void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_sqlrelationaltablemodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_sqlrelationaltablemodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_sqlrelationaltablemodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_sqlrelationaltablemodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_sqlrelationaltablemodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_sqlrelationaltablemodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_sqlrelationaltablemodel_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqlrelationaltablemodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sqlrelationaltablemodel_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sqlrelationaltablemodel_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sqlrelationaltablemodel_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sqlrelationaltablemodel_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sqlrelationaltablemodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sqlrelationaltablemodel_thread(const void* self) {
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

libqt_list /* of QObject* */ q_sqlrelationaltablemodel_children(const void* self) {
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

QMetaObject__Connection* q_sqlrelationaltablemodel_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_sqlrelationaltablemodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sqlrelationaltablemodel_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sqlrelationaltablemodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_sqlrelationaltablemodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sqlrelationaltablemodel_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_sqlrelationaltablemodel_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_sqlrelationaltablemodel_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_sqlrelationaltablemodel_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sqlrelationaltablemodel_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sqlrelationaltablemodel_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sqlrelationaltablemodel_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sqlrelationaltablemodel_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqlrelationaltablemodel_dynamic_property_names\n");
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

QBindingStorage* q_sqlrelationaltablemodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sqlrelationaltablemodel_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sqlrelationaltablemodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sqlrelationaltablemodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sqlrelationaltablemodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_sqlrelationaltablemodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_sqlrelationaltablemodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_sqlrelationaltablemodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_sqlrelationaltablemodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sqlrelationaltablemodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_sqlrelationaltablemodel_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_sqlrelationaltablemodel_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_sqlrelationaltablemodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_sqlrelationaltablemodel_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_sqlrelationaltablemodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sqlrelationaltablemodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_sqlrelationaltablemodel_flags(const void* self, const void* index) {
    return QSqlRelationalTableModel_Flags((QSqlRelationalTableModel*)self, (QModelIndex*)index);
}

int32_t q_sqlrelationaltablemodel_super_flags(const void* self, const void* index) {
    return QSqlRelationalTableModel_SuperFlags((QSqlRelationalTableModel*)self, (QModelIndex*)index);
}

void q_sqlrelationaltablemodel_on_flags(void* self, int32_t (*callback)(const void*, const void*)) {
    QSqlRelationalTableModel_OnFlags((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_clear_item_data(void* self, const void* index) {
    return QSqlRelationalTableModel_ClearItemData((QSqlRelationalTableModel*)self, (QModelIndex*)index);
}

bool q_sqlrelationaltablemodel_super_clear_item_data(void* self, const void* index) {
    return QSqlRelationalTableModel_SuperClearItemData((QSqlRelationalTableModel*)self, (QModelIndex*)index);
}

void q_sqlrelationaltablemodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*)) {
    QSqlRelationalTableModel_OnClearItemData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QVariant* q_sqlrelationaltablemodel_header_data(const void* self, int section, int32_t orientation, int role) {
    return QSqlRelationalTableModel_HeaderData((QSqlRelationalTableModel*)self, section, orientation, role);
}

QVariant* q_sqlrelationaltablemodel_super_header_data(const void* self, int section, int32_t orientation, int role) {
    return QSqlRelationalTableModel_SuperHeaderData((QSqlRelationalTableModel*)self, section, orientation, role);
}

void q_sqlrelationaltablemodel_on_header_data(void* self, QVariant* (*callback)(const void*, int, int32_t, int)) {
    QSqlRelationalTableModel_OnHeaderData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_set_edit_strategy(void* self, int32_t strategy) {
    QSqlRelationalTableModel_SetEditStrategy((QSqlRelationalTableModel*)self, strategy);
}

void q_sqlrelationaltablemodel_super_set_edit_strategy(void* self, int32_t strategy) {
    QSqlRelationalTableModel_SuperSetEditStrategy((QSqlRelationalTableModel*)self, strategy);
}

void q_sqlrelationaltablemodel_on_set_edit_strategy(void* self, void (*callback)(void*, int32_t)) {
    QSqlRelationalTableModel_OnSetEditStrategy((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_sort(void* self, int column, int32_t order) {
    QSqlRelationalTableModel_Sort((QSqlRelationalTableModel*)self, column, order);
}

void q_sqlrelationaltablemodel_super_sort(void* self, int column, int32_t order) {
    QSqlRelationalTableModel_SuperSort((QSqlRelationalTableModel*)self, column, order);
}

void q_sqlrelationaltablemodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QSqlRelationalTableModel_OnSort((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_set_sort(void* self, int column, int32_t order) {
    QSqlRelationalTableModel_SetSort((QSqlRelationalTableModel*)self, column, order);
}

void q_sqlrelationaltablemodel_super_set_sort(void* self, int column, int32_t order) {
    QSqlRelationalTableModel_SuperSetSort((QSqlRelationalTableModel*)self, column, order);
}

void q_sqlrelationaltablemodel_on_set_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QSqlRelationalTableModel_OnSetSort((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_set_filter(void* self, const char* filter) {
    QSqlRelationalTableModel_SetFilter((QSqlRelationalTableModel*)self, qstring(filter));
}

void q_sqlrelationaltablemodel_super_set_filter(void* self, const char* filter) {
    QSqlRelationalTableModel_SuperSetFilter((QSqlRelationalTableModel*)self, qstring(filter));
}

void q_sqlrelationaltablemodel_on_set_filter(void* self, void (*callback)(void*, const char*)) {
    QSqlRelationalTableModel_OnSetFilter((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

int32_t q_sqlrelationaltablemodel_row_count(const void* self, const void* parent) {
    return QSqlRelationalTableModel_RowCount((QSqlRelationalTableModel*)self, (QModelIndex*)parent);
}

int32_t q_sqlrelationaltablemodel_super_row_count(const void* self, const void* parent) {
    return QSqlRelationalTableModel_SuperRowCount((QSqlRelationalTableModel*)self, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_row_count(void* self, int32_t (*callback)(const void*, const void*)) {
    QSqlRelationalTableModel_OnRowCount((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_remove_rows(void* self, int row, int count, const void* parent) {
    return QSqlRelationalTableModel_RemoveRows((QSqlRelationalTableModel*)self, row, count, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_super_remove_rows(void* self, int row, int count, const void* parent) {
    return QSqlRelationalTableModel_SuperRemoveRows((QSqlRelationalTableModel*)self, row, count, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    QSqlRelationalTableModel_OnRemoveRows((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_insert_rows(void* self, int row, int count, const void* parent) {
    return QSqlRelationalTableModel_InsertRows((QSqlRelationalTableModel*)self, row, count, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_super_insert_rows(void* self, int row, int count, const void* parent) {
    return QSqlRelationalTableModel_SuperInsertRows((QSqlRelationalTableModel*)self, row, count, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    QSqlRelationalTableModel_OnInsertRows((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_select_row(void* self, int row) {
    return QSqlRelationalTableModel_SelectRow((QSqlRelationalTableModel*)self, row);
}

bool q_sqlrelationaltablemodel_super_select_row(void* self, int row) {
    return QSqlRelationalTableModel_SuperSelectRow((QSqlRelationalTableModel*)self, row);
}

void q_sqlrelationaltablemodel_on_select_row(void* self, bool (*callback)(void*, int)) {
    QSqlRelationalTableModel_OnSelectRow((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_submit(void* self) {
    return QSqlRelationalTableModel_Submit((QSqlRelationalTableModel*)self);
}

bool q_sqlrelationaltablemodel_super_submit(void* self) {
    return QSqlRelationalTableModel_SuperSubmit((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_submit(void* self, bool (*callback)(void*)) {
    QSqlRelationalTableModel_OnSubmit((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_revert(void* self) {
    QSqlRelationalTableModel_Revert((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_super_revert(void* self) {
    QSqlRelationalTableModel_SuperRevert((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_revert(void* self, void (*callback)(void*)) {
    QSqlRelationalTableModel_OnRevert((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_delete_row_from_table(void* self, int row) {
    return QSqlRelationalTableModel_DeleteRowFromTable((QSqlRelationalTableModel*)self, row);
}

bool q_sqlrelationaltablemodel_super_delete_row_from_table(void* self, int row) {
    return QSqlRelationalTableModel_SuperDeleteRowFromTable((QSqlRelationalTableModel*)self, row);
}

void q_sqlrelationaltablemodel_on_delete_row_from_table(void* self, bool (*callback)(void*, int)) {
    QSqlRelationalTableModel_OnDeleteRowFromTable((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlrelationaltablemodel_index_in_query(const void* self, const void* item) {
    return QSqlRelationalTableModel_IndexInQuery((QSqlRelationalTableModel*)self, (QModelIndex*)item);
}

QModelIndex* q_sqlrelationaltablemodel_super_index_in_query(const void* self, const void* item) {
    return QSqlRelationalTableModel_SuperIndexInQuery((QSqlRelationalTableModel*)self, (QModelIndex*)item);
}

void q_sqlrelationaltablemodel_on_index_in_query(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    QSqlRelationalTableModel_OnIndexInQuery((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

int32_t q_sqlrelationaltablemodel_column_count(const void* self, const void* parent) {
    return QSqlRelationalTableModel_ColumnCount((QSqlRelationalTableModel*)self, (QModelIndex*)parent);
}

int32_t q_sqlrelationaltablemodel_super_column_count(const void* self, const void* parent) {
    return QSqlRelationalTableModel_SuperColumnCount((QSqlRelationalTableModel*)self, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_column_count(void* self, int32_t (*callback)(const void*, const void*)) {
    QSqlRelationalTableModel_OnColumnCount((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return QSqlRelationalTableModel_SetHeaderData((QSqlRelationalTableModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_sqlrelationaltablemodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return QSqlRelationalTableModel_SuperSetHeaderData((QSqlRelationalTableModel*)self, section, orientation, (QVariant*)value, role);
}

void q_sqlrelationaltablemodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int)) {
    QSqlRelationalTableModel_OnSetHeaderData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_insert_columns(void* self, int column, int count, const void* parent) {
    return QSqlRelationalTableModel_InsertColumns((QSqlRelationalTableModel*)self, column, count, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_super_insert_columns(void* self, int column, int count, const void* parent) {
    return QSqlRelationalTableModel_SuperInsertColumns((QSqlRelationalTableModel*)self, column, count, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    QSqlRelationalTableModel_OnInsertColumns((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_fetch_more(void* self, const void* parent) {
    QSqlRelationalTableModel_FetchMore((QSqlRelationalTableModel*)self, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_super_fetch_more(void* self, const void* parent) {
    QSqlRelationalTableModel_SuperFetchMore((QSqlRelationalTableModel*)self, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_fetch_more(void* self, void (*callback)(void*, const void*)) {
    QSqlRelationalTableModel_OnFetchMore((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_can_fetch_more(const void* self, const void* parent) {
    return QSqlRelationalTableModel_CanFetchMore((QSqlRelationalTableModel*)self, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_super_can_fetch_more(const void* self, const void* parent) {
    return QSqlRelationalTableModel_SuperCanFetchMore((QSqlRelationalTableModel*)self, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_can_fetch_more(void* self, bool (*callback)(const void*, const void*)) {
    QSqlRelationalTableModel_OnCanFetchMore((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

libqt_map /* of int to const char* */ q_sqlrelationaltablemodel_role_names(const void* self) {
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

libqt_map /* of int to const char* */ q_sqlrelationaltablemodel_super_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QSqlRelationalTableModel_SuperRoleNames((QSqlRelationalTableModel*)self);
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

void q_sqlrelationaltablemodel_on_role_names(void* self, libqt_map /* of int to const char* */ (*callback)(const void*)) {
    QSqlRelationalTableModel_OnRoleNames((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_query_change(void* self) {
    QSqlRelationalTableModel_QueryChange((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_super_query_change(void* self) {
    QSqlRelationalTableModel_SuperQueryChange((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_query_change(void* self, void (*callback)(void*)) {
    QSqlRelationalTableModel_OnQueryChange((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlrelationaltablemodel_index(const void* self, int row, int column, const void* parent) {
    return QSqlRelationalTableModel_Index((QSqlRelationalTableModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_sqlrelationaltablemodel_super_index(const void* self, int row, int column, const void* parent) {
    return QSqlRelationalTableModel_SuperIndex((QSqlRelationalTableModel*)self, row, column, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_index(void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    QSqlRelationalTableModel_OnIndex((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlrelationaltablemodel_sibling(const void* self, int row, int column, const void* idx) {
    return QSqlRelationalTableModel_Sibling((QSqlRelationalTableModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* q_sqlrelationaltablemodel_super_sibling(const void* self, int row, int column, const void* idx) {
    return QSqlRelationalTableModel_SuperSibling((QSqlRelationalTableModel*)self, row, column, (QModelIndex*)idx);
}

void q_sqlrelationaltablemodel_on_sibling(void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    QSqlRelationalTableModel_OnSibling((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return QSqlRelationalTableModel_DropMimeData((QSqlRelationalTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return QSqlRelationalTableModel_SuperDropMimeData((QSqlRelationalTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*)) {
    QSqlRelationalTableModel_OnDropMimeData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_sqlrelationaltablemodel_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QSqlRelationalTableModel_ItemData((QSqlRelationalTableModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ q_sqlrelationaltablemodel_super_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QSqlRelationalTableModel_SuperItemData((QSqlRelationalTableModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void q_sqlrelationaltablemodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(const void*, const void*)) {
    QSqlRelationalTableModel_OnItemData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
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

bool q_sqlrelationaltablemodel_super_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
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
    bool _out = QSqlRelationalTableModel_SuperSetItemData((QSqlRelationalTableModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void q_sqlrelationaltablemodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map /* of int to QVariant* */)) {
    QSqlRelationalTableModel_OnSetItemData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

const char** q_sqlrelationaltablemodel_mime_types(const void* self) {
    libqt_list _arr = QSqlRelationalTableModel_MimeTypes((QSqlRelationalTableModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqlrelationaltablemodel_mime_types\n");
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

const char** q_sqlrelationaltablemodel_super_mime_types(const void* self) {
    libqt_list _arr = QSqlRelationalTableModel_SuperMimeTypes((QSqlRelationalTableModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqlrelationaltablemodel_mime_types\n");
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

void q_sqlrelationaltablemodel_on_mime_types(void* self, const char** (*callback)(const void*)) {
    QSqlRelationalTableModel_OnMimeTypes((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QMimeData* q_sqlrelationaltablemodel_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QSqlRelationalTableModel_MimeData((QSqlRelationalTableModel*)self, indexes);
}

QMimeData* q_sqlrelationaltablemodel_super_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QSqlRelationalTableModel_SuperMimeData((QSqlRelationalTableModel*)self, indexes);
}

void q_sqlrelationaltablemodel_on_mime_data(void* self, QMimeData* (*callback)(const void*, libqt_list /* of QModelIndex* */)) {
    QSqlRelationalTableModel_OnMimeData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return QSqlRelationalTableModel_CanDropMimeData((QSqlRelationalTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_sqlrelationaltablemodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return QSqlRelationalTableModel_SuperCanDropMimeData((QSqlRelationalTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_sqlrelationaltablemodel_on_can_drop_mime_data(void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*)) {
    QSqlRelationalTableModel_OnCanDropMimeData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

int32_t q_sqlrelationaltablemodel_supported_drop_actions(const void* self) {
    return QSqlRelationalTableModel_SupportedDropActions((QSqlRelationalTableModel*)self);
}

int32_t q_sqlrelationaltablemodel_super_supported_drop_actions(const void* self) {
    return QSqlRelationalTableModel_SuperSupportedDropActions((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_supported_drop_actions(void* self, int32_t (*callback)(const void*)) {
    QSqlRelationalTableModel_OnSupportedDropActions((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

int32_t q_sqlrelationaltablemodel_supported_drag_actions(const void* self) {
    return QSqlRelationalTableModel_SupportedDragActions((QSqlRelationalTableModel*)self);
}

int32_t q_sqlrelationaltablemodel_super_supported_drag_actions(const void* self) {
    return QSqlRelationalTableModel_SuperSupportedDragActions((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_supported_drag_actions(void* self, int32_t (*callback)(const void*)) {
    QSqlRelationalTableModel_OnSupportedDragActions((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return QSqlRelationalTableModel_MoveRows((QSqlRelationalTableModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqlrelationaltablemodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return QSqlRelationalTableModel_SuperMoveRows((QSqlRelationalTableModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_sqlrelationaltablemodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    QSqlRelationalTableModel_OnMoveRows((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return QSqlRelationalTableModel_MoveColumns((QSqlRelationalTableModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sqlrelationaltablemodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return QSqlRelationalTableModel_SuperMoveColumns((QSqlRelationalTableModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_sqlrelationaltablemodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    QSqlRelationalTableModel_OnMoveColumns((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_sqlrelationaltablemodel_buddy(const void* self, const void* index) {
    return QSqlRelationalTableModel_Buddy((QSqlRelationalTableModel*)self, (QModelIndex*)index);
}

QModelIndex* q_sqlrelationaltablemodel_super_buddy(const void* self, const void* index) {
    return QSqlRelationalTableModel_SuperBuddy((QSqlRelationalTableModel*)self, (QModelIndex*)index);
}

void q_sqlrelationaltablemodel_on_buddy(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    QSqlRelationalTableModel_OnBuddy((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_sqlrelationaltablemodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = QSqlRelationalTableModel_Match((QSqlRelationalTableModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_sqlrelationaltablemodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = QSqlRelationalTableModel_SuperMatch((QSqlRelationalTableModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_sqlrelationaltablemodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(const void*, const void*, int, const void*, int, int32_t)) {
    QSqlRelationalTableModel_OnMatch((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

QSize* q_sqlrelationaltablemodel_span(const void* self, const void* index) {
    return QSqlRelationalTableModel_Span((QSqlRelationalTableModel*)self, (QModelIndex*)index);
}

QSize* q_sqlrelationaltablemodel_super_span(const void* self, const void* index) {
    return QSqlRelationalTableModel_SuperSpan((QSqlRelationalTableModel*)self, (QModelIndex*)index);
}

void q_sqlrelationaltablemodel_on_span(void* self, QSize* (*callback)(const void*, const void*)) {
    QSqlRelationalTableModel_OnSpan((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_multi_data(const void* self, const void* index, void* roleDataSpan) {
    QSqlRelationalTableModel_MultiData((QSqlRelationalTableModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_sqlrelationaltablemodel_super_multi_data(const void* self, const void* index, void* roleDataSpan) {
    QSqlRelationalTableModel_SuperMultiData((QSqlRelationalTableModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_sqlrelationaltablemodel_on_multi_data(void* self, void (*callback)(const void*, const void*, void*)) {
    QSqlRelationalTableModel_OnMultiData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_reset_internal_data(void* self) {
    QSqlRelationalTableModel_ResetInternalData((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_super_reset_internal_data(void* self) {
    QSqlRelationalTableModel_SuperResetInternalData((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_on_reset_internal_data(void* self, void (*callback)(void*)) {
    QSqlRelationalTableModel_OnResetInternalData((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_event(void* self, void* event) {
    return QSqlRelationalTableModel_Event((QSqlRelationalTableModel*)self, (QEvent*)event);
}

bool q_sqlrelationaltablemodel_super_event(void* self, void* event) {
    return QSqlRelationalTableModel_SuperEvent((QSqlRelationalTableModel*)self, (QEvent*)event);
}

void q_sqlrelationaltablemodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnEvent((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

bool q_sqlrelationaltablemodel_event_filter(void* self, void* watched, void* event) {
    return QSqlRelationalTableModel_EventFilter((QSqlRelationalTableModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sqlrelationaltablemodel_super_event_filter(void* self, void* watched, void* event) {
    return QSqlRelationalTableModel_SuperEventFilter((QSqlRelationalTableModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_sqlrelationaltablemodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSqlRelationalTableModel_OnEventFilter((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_timer_event(void* self, void* event) {
    QSqlRelationalTableModel_TimerEvent((QSqlRelationalTableModel*)self, (QTimerEvent*)event);
}

void q_sqlrelationaltablemodel_super_timer_event(void* self, void* event) {
    QSqlRelationalTableModel_SuperTimerEvent((QSqlRelationalTableModel*)self, (QTimerEvent*)event);
}

void q_sqlrelationaltablemodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnTimerEvent((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_child_event(void* self, void* event) {
    QSqlRelationalTableModel_ChildEvent((QSqlRelationalTableModel*)self, (QChildEvent*)event);
}

void q_sqlrelationaltablemodel_super_child_event(void* self, void* event) {
    QSqlRelationalTableModel_SuperChildEvent((QSqlRelationalTableModel*)self, (QChildEvent*)event);
}

void q_sqlrelationaltablemodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnChildEvent((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_custom_event(void* self, void* event) {
    QSqlRelationalTableModel_CustomEvent((QSqlRelationalTableModel*)self, (QEvent*)event);
}

void q_sqlrelationaltablemodel_super_custom_event(void* self, void* event) {
    QSqlRelationalTableModel_SuperCustomEvent((QSqlRelationalTableModel*)self, (QEvent*)event);
}

void q_sqlrelationaltablemodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSqlRelationalTableModel_OnCustomEvent((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_connect_notify(void* self, const void* signal) {
    QSqlRelationalTableModel_ConnectNotify((QSqlRelationalTableModel*)self, (QMetaMethod*)signal);
}

void q_sqlrelationaltablemodel_super_connect_notify(void* self, const void* signal) {
    QSqlRelationalTableModel_SuperConnectNotify((QSqlRelationalTableModel*)self, (QMetaMethod*)signal);
}

void q_sqlrelationaltablemodel_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QSqlRelationalTableModel_OnConnectNotify((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_disconnect_notify(void* self, const void* signal) {
    QSqlRelationalTableModel_DisconnectNotify((QSqlRelationalTableModel*)self, (QMetaMethod*)signal);
}

void q_sqlrelationaltablemodel_super_disconnect_notify(void* self, const void* signal) {
    QSqlRelationalTableModel_SuperDisconnectNotify((QSqlRelationalTableModel*)self, (QMetaMethod*)signal);
}

void q_sqlrelationaltablemodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QSqlRelationalTableModel_OnDisconnectNotify((QSqlRelationalTableModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_set_primary_key(void* self, const void* key) {
    QSqlRelationalTableModel_SetPrimaryKey((QSqlRelationalTableModel*)self, (QSqlIndex*)key);
}

QSqlRecord* q_sqlrelationaltablemodel_primary_values(const void* self, int row) {
    return QSqlRelationalTableModel_PrimaryValues((QSqlRelationalTableModel*)self, row);
}

void q_sqlrelationaltablemodel_begin_insert_rows(void* self, const void* parent, int first, int last) {
    QSqlRelationalTableModel_BeginInsertRows((QSqlRelationalTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlrelationaltablemodel_end_insert_rows(void* self) {
    QSqlRelationalTableModel_EndInsertRows((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_begin_remove_rows(void* self, const void* parent, int first, int last) {
    QSqlRelationalTableModel_BeginRemoveRows((QSqlRelationalTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlrelationaltablemodel_end_remove_rows(void* self) {
    QSqlRelationalTableModel_EndRemoveRows((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_begin_insert_columns(void* self, const void* parent, int first, int last) {
    QSqlRelationalTableModel_BeginInsertColumns((QSqlRelationalTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlrelationaltablemodel_end_insert_columns(void* self) {
    QSqlRelationalTableModel_EndInsertColumns((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_begin_remove_columns(void* self, const void* parent, int first, int last) {
    QSqlRelationalTableModel_BeginRemoveColumns((QSqlRelationalTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_sqlrelationaltablemodel_end_remove_columns(void* self) {
    QSqlRelationalTableModel_EndRemoveColumns((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_begin_reset_model(void* self) {
    QSqlRelationalTableModel_BeginResetModel((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_end_reset_model(void* self) {
    QSqlRelationalTableModel_EndResetModel((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_set_last_error(void* self, const void* error) {
    QSqlRelationalTableModel_SetLastError((QSqlRelationalTableModel*)self, (QSqlError*)error);
}

QModelIndex* q_sqlrelationaltablemodel_create_index(const void* self, int row, int column) {
    return QSqlRelationalTableModel_CreateIndex((QSqlRelationalTableModel*)self, row, column);
}

void q_sqlrelationaltablemodel_encode_data(const void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QSqlRelationalTableModel_EncodeData((QSqlRelationalTableModel*)self, indexes, (QDataStream*)stream);
}

bool q_sqlrelationaltablemodel_decode_data(void* self, int row, int column, const void* parent, void* stream) {
    return QSqlRelationalTableModel_DecodeData((QSqlRelationalTableModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_sqlrelationaltablemodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow) {
    return QSqlRelationalTableModel_BeginMoveRows((QSqlRelationalTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_sqlrelationaltablemodel_end_move_rows(void* self) {
    QSqlRelationalTableModel_EndMoveRows((QSqlRelationalTableModel*)self);
}

bool q_sqlrelationaltablemodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn) {
    return QSqlRelationalTableModel_BeginMoveColumns((QSqlRelationalTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_sqlrelationaltablemodel_end_move_columns(void* self) {
    QSqlRelationalTableModel_EndMoveColumns((QSqlRelationalTableModel*)self);
}

void q_sqlrelationaltablemodel_change_persistent_index(void* self, const void* from, const void* to) {
    QSqlRelationalTableModel_ChangePersistentIndex((QSqlRelationalTableModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_sqlrelationaltablemodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QSqlRelationalTableModel_ChangePersistentIndexList((QSqlRelationalTableModel*)self, from, to);
}

libqt_list /* of QModelIndex* */ q_sqlrelationaltablemodel_persistent_index_list(const void* self) {
    libqt_list _arr = QSqlRelationalTableModel_PersistentIndexList((QSqlRelationalTableModel*)self);
    return _arr;
}

QObject* q_sqlrelationaltablemodel_sender(const void* self) {
    return QSqlRelationalTableModel_Sender((QSqlRelationalTableModel*)self);
}

int32_t q_sqlrelationaltablemodel_sender_signal_index(const void* self) {
    return QSqlRelationalTableModel_SenderSignalIndex((QSqlRelationalTableModel*)self);
}

int32_t q_sqlrelationaltablemodel_receivers(const void* self, const char* signal) {
    return QSqlRelationalTableModel_Receivers((QSqlRelationalTableModel*)self, signal);
}

bool q_sqlrelationaltablemodel_is_signal_connected(const void* self, const void* signal) {
    return QSqlRelationalTableModel_IsSignalConnected((QSqlRelationalTableModel*)self, (QMetaMethod*)signal);
}

void q_sqlrelationaltablemodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sqlrelationaltablemodel_delete(void* self) {
    QSqlRelationalTableModel_Delete((QSqlRelationalTableModel*)(self));
}
