#include "libqabstractitemmodel.hpp"
#include "libqabstractproxymodel.hpp"
#include "libqcoreevent.hpp"
#include "libqdatastream.hpp"
#include "libqitemselectionmodel.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqtransposeproxymodel.hpp"
#include "libqtransposeproxymodel.h"

QTransposeProxyModel* q_transposeproxymodel_new() {
    return QTransposeProxyModel_new();
}

QTransposeProxyModel* q_transposeproxymodel_new2(void* parent) {
    return QTransposeProxyModel_new2((QObject*)parent);
}

const QMetaObject* q_transposeproxymodel_meta_object(void* self) {
    return QTransposeProxyModel_MetaObject((QTransposeProxyModel*)self);
}

void* q_transposeproxymodel_metacast(void* self, const char* param1) {
    return QTransposeProxyModel_Metacast((QTransposeProxyModel*)self, param1);
}

int32_t q_transposeproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTransposeProxyModel_Metacall((QTransposeProxyModel*)self, param1, param2, param3);
}

void q_transposeproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QTransposeProxyModel_OnMetacall((QTransposeProxyModel*)self, (intptr_t)callback);
}

int32_t q_transposeproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTransposeProxyModel_QBaseMetacall((QTransposeProxyModel*)self, param1, param2, param3);
}

const char* q_transposeproxymodel_tr(const char* s) {
    libqt_string _str = QTransposeProxyModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_transposeproxymodel_set_source_model(void* self, void* newSourceModel) {
    QTransposeProxyModel_SetSourceModel((QTransposeProxyModel*)self, (QAbstractItemModel*)newSourceModel);
}

void q_transposeproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*)) {
    QTransposeProxyModel_OnSetSourceModel((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_qbase_set_source_model(void* self, void* newSourceModel) {
    QTransposeProxyModel_QBaseSetSourceModel((QTransposeProxyModel*)self, (QAbstractItemModel*)newSourceModel);
}

int32_t q_transposeproxymodel_row_count(void* self, void* parent) {
    return QTransposeProxyModel_RowCount((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

void q_transposeproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    QTransposeProxyModel_OnRowCount((QTransposeProxyModel*)self, (intptr_t)callback);
}

int32_t q_transposeproxymodel_qbase_row_count(void* self, void* parent) {
    return QTransposeProxyModel_QBaseRowCount((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

int32_t q_transposeproxymodel_column_count(void* self, void* parent) {
    return QTransposeProxyModel_ColumnCount((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

void q_transposeproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QTransposeProxyModel_OnColumnCount((QTransposeProxyModel*)self, (intptr_t)callback);
}

int32_t q_transposeproxymodel_qbase_column_count(void* self, void* parent) {
    return QTransposeProxyModel_QBaseColumnCount((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

QVariant* q_transposeproxymodel_header_data(void* self, int section, int32_t orientation, int role) {
    return QTransposeProxyModel_HeaderData((QTransposeProxyModel*)self, section, orientation, role);
}

void q_transposeproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    QTransposeProxyModel_OnHeaderData((QTransposeProxyModel*)self, (intptr_t)callback);
}

QVariant* q_transposeproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return QTransposeProxyModel_QBaseHeaderData((QTransposeProxyModel*)self, section, orientation, role);
}

bool q_transposeproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QTransposeProxyModel_SetHeaderData((QTransposeProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void q_transposeproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    QTransposeProxyModel_OnSetHeaderData((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QTransposeProxyModel_QBaseSetHeaderData((QTransposeProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_transposeproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QTransposeProxyModel_SetItemData((QTransposeProxyModel*)self, (QModelIndex*)index, roles);
}

void q_transposeproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QTransposeProxyModel_OnSetItemData((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QTransposeProxyModel_QBaseSetItemData((QTransposeProxyModel*)self, (QModelIndex*)index, roles);
}

QSize* q_transposeproxymodel_span(void* self, void* index) {
    return QTransposeProxyModel_Span((QTransposeProxyModel*)self, (QModelIndex*)index);
}

void q_transposeproxymodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    QTransposeProxyModel_OnSpan((QTransposeProxyModel*)self, (intptr_t)callback);
}

QSize* q_transposeproxymodel_qbase_span(void* self, void* index) {
    return QTransposeProxyModel_QBaseSpan((QTransposeProxyModel*)self, (QModelIndex*)index);
}

libqt_map /* of int to QVariant* */ q_transposeproxymodel_item_data(void* self, void* index) {
    return QTransposeProxyModel_ItemData((QTransposeProxyModel*)self, (QModelIndex*)index);
}

void q_transposeproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    QTransposeProxyModel_OnItemData((QTransposeProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_transposeproxymodel_qbase_item_data(void* self, void* index) {
    return QTransposeProxyModel_QBaseItemData((QTransposeProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* q_transposeproxymodel_map_from_source(void* self, void* sourceIndex) {
    return QTransposeProxyModel_MapFromSource((QTransposeProxyModel*)self, (QModelIndex*)sourceIndex);
}

void q_transposeproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    QTransposeProxyModel_OnMapFromSource((QTransposeProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_transposeproxymodel_qbase_map_from_source(void* self, void* sourceIndex) {
    return QTransposeProxyModel_QBaseMapFromSource((QTransposeProxyModel*)self, (QModelIndex*)sourceIndex);
}

QModelIndex* q_transposeproxymodel_map_to_source(void* self, void* proxyIndex) {
    return QTransposeProxyModel_MapToSource((QTransposeProxyModel*)self, (QModelIndex*)proxyIndex);
}

void q_transposeproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    QTransposeProxyModel_OnMapToSource((QTransposeProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_transposeproxymodel_qbase_map_to_source(void* self, void* proxyIndex) {
    return QTransposeProxyModel_QBaseMapToSource((QTransposeProxyModel*)self, (QModelIndex*)proxyIndex);
}

QModelIndex* q_transposeproxymodel_parent(void* self, void* index) {
    return QTransposeProxyModel_Parent((QTransposeProxyModel*)self, (QModelIndex*)index);
}

void q_transposeproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QTransposeProxyModel_OnParent((QTransposeProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_transposeproxymodel_qbase_parent(void* self, void* index) {
    return QTransposeProxyModel_QBaseParent((QTransposeProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* q_transposeproxymodel_index(void* self, int row, int column, void* parent) {
    return QTransposeProxyModel_Index((QTransposeProxyModel*)self, row, column, (QModelIndex*)parent);
}

void q_transposeproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QTransposeProxyModel_OnIndex((QTransposeProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_transposeproxymodel_qbase_index(void* self, int row, int column, void* parent) {
    return QTransposeProxyModel_QBaseIndex((QTransposeProxyModel*)self, row, column, (QModelIndex*)parent);
}

bool q_transposeproxymodel_insert_rows(void* self, int row, int count, void* parent) {
    return QTransposeProxyModel_InsertRows((QTransposeProxyModel*)self, row, count, (QModelIndex*)parent);
}

void q_transposeproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QTransposeProxyModel_OnInsertRows((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QTransposeProxyModel_QBaseInsertRows((QTransposeProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool q_transposeproxymodel_remove_rows(void* self, int row, int count, void* parent) {
    return QTransposeProxyModel_RemoveRows((QTransposeProxyModel*)self, row, count, (QModelIndex*)parent);
}

void q_transposeproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QTransposeProxyModel_OnRemoveRows((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QTransposeProxyModel_QBaseRemoveRows((QTransposeProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool q_transposeproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QTransposeProxyModel_MoveRows((QTransposeProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_transposeproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QTransposeProxyModel_OnMoveRows((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QTransposeProxyModel_QBaseMoveRows((QTransposeProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_transposeproxymodel_insert_columns(void* self, int column, int count, void* parent) {
    return QTransposeProxyModel_InsertColumns((QTransposeProxyModel*)self, column, count, (QModelIndex*)parent);
}

void q_transposeproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QTransposeProxyModel_OnInsertColumns((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QTransposeProxyModel_QBaseInsertColumns((QTransposeProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool q_transposeproxymodel_remove_columns(void* self, int column, int count, void* parent) {
    return QTransposeProxyModel_RemoveColumns((QTransposeProxyModel*)self, column, count, (QModelIndex*)parent);
}

void q_transposeproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QTransposeProxyModel_OnRemoveColumns((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QTransposeProxyModel_QBaseRemoveColumns((QTransposeProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool q_transposeproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QTransposeProxyModel_MoveColumns((QTransposeProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_transposeproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QTransposeProxyModel_OnMoveColumns((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QTransposeProxyModel_QBaseMoveColumns((QTransposeProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_transposeproxymodel_sort(void* self, int column, int32_t order) {
    QTransposeProxyModel_Sort((QTransposeProxyModel*)self, column, order);
}

void q_transposeproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QTransposeProxyModel_OnSort((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_qbase_sort(void* self, int column, int32_t order) {
    QTransposeProxyModel_QBaseSort((QTransposeProxyModel*)self, column, order);
}

const char* q_transposeproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QTransposeProxyModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_transposeproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTransposeProxyModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_transposeproxymodel_source_model(void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

bool q_transposeproxymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool q_transposeproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_transposeproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_transposeproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_transposeproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_transposeproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_transposeproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_transposeproxymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_transposeproxymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_transposeproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_transposeproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_transposeproxymodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_transposeproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_transposeproxymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_transposeproxymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_transposeproxymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_transposeproxymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_transposeproxymodel_check_index2(void* self, void* index, int64_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_transposeproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_transposeproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_transposeproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_transposeproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_transposeproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_transposeproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_transposeproxymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_transposeproxymodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_transposeproxymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_transposeproxymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_transposeproxymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_transposeproxymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_transposeproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_transposeproxymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_transposeproxymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_transposeproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_transposeproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_transposeproxymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_transposeproxymodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_transposeproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_transposeproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_transposeproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_transposeproxymodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_transposeproxymodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_transposeproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_transposeproxymodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_transposeproxymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_transposeproxymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_transposeproxymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_transposeproxymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_transposeproxymodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_transposeproxymodel_dynamic_property_names");
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

QBindingStorage* q_transposeproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_transposeproxymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_transposeproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_transposeproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_transposeproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_transposeproxymodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_transposeproxymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_transposeproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_transposeproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_transposeproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_transposeproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QItemSelection* q_transposeproxymodel_map_selection_to_source(void* self, void* selection) {
    return QTransposeProxyModel_MapSelectionToSource((QTransposeProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* q_transposeproxymodel_qbase_map_selection_to_source(void* self, void* selection) {
    return QTransposeProxyModel_QBaseMapSelectionToSource((QTransposeProxyModel*)self, (QItemSelection*)selection);
}

void q_transposeproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    QTransposeProxyModel_OnMapSelectionToSource((QTransposeProxyModel*)self, (intptr_t)callback);
}

QItemSelection* q_transposeproxymodel_map_selection_from_source(void* self, void* selection) {
    return QTransposeProxyModel_MapSelectionFromSource((QTransposeProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* q_transposeproxymodel_qbase_map_selection_from_source(void* self, void* selection) {
    return QTransposeProxyModel_QBaseMapSelectionFromSource((QTransposeProxyModel*)self, (QItemSelection*)selection);
}

void q_transposeproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    QTransposeProxyModel_OnMapSelectionFromSource((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_submit(void* self) {
    return QTransposeProxyModel_Submit((QTransposeProxyModel*)self);
}

bool q_transposeproxymodel_qbase_submit(void* self) {
    return QTransposeProxyModel_QBaseSubmit((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_on_submit(void* self, bool (*callback)()) {
    QTransposeProxyModel_OnSubmit((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_revert(void* self) {
    QTransposeProxyModel_Revert((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_qbase_revert(void* self) {
    QTransposeProxyModel_QBaseRevert((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_on_revert(void* self, void (*callback)()) {
    QTransposeProxyModel_OnRevert((QTransposeProxyModel*)self, (intptr_t)callback);
}

QVariant* q_transposeproxymodel_data(void* self, void* proxyIndex, int role) {
    return QTransposeProxyModel_Data((QTransposeProxyModel*)self, (QModelIndex*)proxyIndex, role);
}

QVariant* q_transposeproxymodel_qbase_data(void* self, void* proxyIndex, int role) {
    return QTransposeProxyModel_QBaseData((QTransposeProxyModel*)self, (QModelIndex*)proxyIndex, role);
}

void q_transposeproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    QTransposeProxyModel_OnData((QTransposeProxyModel*)self, (intptr_t)callback);
}

int64_t q_transposeproxymodel_flags(void* self, void* index) {
    return QTransposeProxyModel_Flags((QTransposeProxyModel*)self, (QModelIndex*)index);
}

int64_t q_transposeproxymodel_qbase_flags(void* self, void* index) {
    return QTransposeProxyModel_QBaseFlags((QTransposeProxyModel*)self, (QModelIndex*)index);
}

void q_transposeproxymodel_on_flags(void* self, int64_t (*callback)(void*, void*)) {
    QTransposeProxyModel_OnFlags((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_set_data(void* self, void* index, void* value, int role) {
    return QTransposeProxyModel_SetData((QTransposeProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool q_transposeproxymodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QTransposeProxyModel_QBaseSetData((QTransposeProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_transposeproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    QTransposeProxyModel_OnSetData((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_clear_item_data(void* self, void* index) {
    return QTransposeProxyModel_ClearItemData((QTransposeProxyModel*)self, (QModelIndex*)index);
}

bool q_transposeproxymodel_qbase_clear_item_data(void* self, void* index) {
    return QTransposeProxyModel_QBaseClearItemData((QTransposeProxyModel*)self, (QModelIndex*)index);
}

void q_transposeproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    QTransposeProxyModel_OnClearItemData((QTransposeProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_transposeproxymodel_buddy(void* self, void* index) {
    return QTransposeProxyModel_Buddy((QTransposeProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* q_transposeproxymodel_qbase_buddy(void* self, void* index) {
    return QTransposeProxyModel_QBaseBuddy((QTransposeProxyModel*)self, (QModelIndex*)index);
}

void q_transposeproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    QTransposeProxyModel_OnBuddy((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_can_fetch_more(void* self, void* parent) {
    return QTransposeProxyModel_CanFetchMore((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

bool q_transposeproxymodel_qbase_can_fetch_more(void* self, void* parent) {
    return QTransposeProxyModel_QBaseCanFetchMore((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

void q_transposeproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    QTransposeProxyModel_OnCanFetchMore((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_fetch_more(void* self, void* parent) {
    QTransposeProxyModel_FetchMore((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

void q_transposeproxymodel_qbase_fetch_more(void* self, void* parent) {
    QTransposeProxyModel_QBaseFetchMore((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

void q_transposeproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    QTransposeProxyModel_OnFetchMore((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_has_children(void* self, void* parent) {
    return QTransposeProxyModel_HasChildren((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

bool q_transposeproxymodel_qbase_has_children(void* self, void* parent) {
    return QTransposeProxyModel_QBaseHasChildren((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

void q_transposeproxymodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QTransposeProxyModel_OnHasChildren((QTransposeProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_transposeproxymodel_sibling(void* self, int row, int column, void* idx) {
    return QTransposeProxyModel_Sibling((QTransposeProxyModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* q_transposeproxymodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QTransposeProxyModel_QBaseSibling((QTransposeProxyModel*)self, row, column, (QModelIndex*)idx);
}

void q_transposeproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QTransposeProxyModel_OnSibling((QTransposeProxyModel*)self, (intptr_t)callback);
}

QMimeData* q_transposeproxymodel_mime_data(void* self, libqt_list indexes) {
    return QTransposeProxyModel_MimeData((QTransposeProxyModel*)self, indexes);
}

QMimeData* q_transposeproxymodel_qbase_mime_data(void* self, libqt_list indexes) {
    return QTransposeProxyModel_QBaseMimeData((QTransposeProxyModel*)self, indexes);
}

void q_transposeproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list)) {
    QTransposeProxyModel_OnMimeData((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QTransposeProxyModel_CanDropMimeData((QTransposeProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_transposeproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QTransposeProxyModel_QBaseCanDropMimeData((QTransposeProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_transposeproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QTransposeProxyModel_OnCanDropMimeData((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QTransposeProxyModel_DropMimeData((QTransposeProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_transposeproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QTransposeProxyModel_QBaseDropMimeData((QTransposeProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_transposeproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QTransposeProxyModel_OnDropMimeData((QTransposeProxyModel*)self, (intptr_t)callback);
}

const char** q_transposeproxymodel_mime_types(void* self) {
    libqt_list _arr = QTransposeProxyModel_MimeTypes((QTransposeProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_transposeproxymodel_mime_types");
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

const char** q_transposeproxymodel_qbase_mime_types(void* self) {
    libqt_list _arr = QTransposeProxyModel_QBaseMimeTypes((QTransposeProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_transposeproxymodel_mime_types");
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

void q_transposeproxymodel_on_mime_types(void* self, const char** (*callback)()) {
    QTransposeProxyModel_OnMimeTypes((QTransposeProxyModel*)self, (intptr_t)callback);
}

int64_t q_transposeproxymodel_supported_drag_actions(void* self) {
    return QTransposeProxyModel_SupportedDragActions((QTransposeProxyModel*)self);
}

int64_t q_transposeproxymodel_qbase_supported_drag_actions(void* self) {
    return QTransposeProxyModel_QBaseSupportedDragActions((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_on_supported_drag_actions(void* self, int64_t (*callback)()) {
    QTransposeProxyModel_OnSupportedDragActions((QTransposeProxyModel*)self, (intptr_t)callback);
}

int64_t q_transposeproxymodel_supported_drop_actions(void* self) {
    return QTransposeProxyModel_SupportedDropActions((QTransposeProxyModel*)self);
}

int64_t q_transposeproxymodel_qbase_supported_drop_actions(void* self) {
    return QTransposeProxyModel_QBaseSupportedDropActions((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_on_supported_drop_actions(void* self, int64_t (*callback)()) {
    QTransposeProxyModel_OnSupportedDropActions((QTransposeProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_transposeproxymodel_role_names(void* self) {
    return QTransposeProxyModel_RoleNames((QTransposeProxyModel*)self);
}

libqt_map /* of int to char* */ q_transposeproxymodel_qbase_role_names(void* self) {
    return QTransposeProxyModel_QBaseRoleNames((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    QTransposeProxyModel_OnRoleNames((QTransposeProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_transposeproxymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QTransposeProxyModel_Match((QTransposeProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_transposeproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QTransposeProxyModel_QBaseMatch((QTransposeProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_transposeproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(void*, void*, int, void*, int, int64_t)) {
    QTransposeProxyModel_OnMatch((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QTransposeProxyModel_MultiData((QTransposeProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_transposeproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QTransposeProxyModel_QBaseMultiData((QTransposeProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_transposeproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    QTransposeProxyModel_OnMultiData((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_reset_internal_data(void* self) {
    QTransposeProxyModel_ResetInternalData((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_qbase_reset_internal_data(void* self) {
    QTransposeProxyModel_QBaseResetInternalData((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_on_reset_internal_data(void* self, void (*callback)()) {
    QTransposeProxyModel_OnResetInternalData((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_event(void* self, void* event) {
    return QTransposeProxyModel_Event((QTransposeProxyModel*)self, (QEvent*)event);
}

bool q_transposeproxymodel_qbase_event(void* self, void* event) {
    return QTransposeProxyModel_QBaseEvent((QTransposeProxyModel*)self, (QEvent*)event);
}

void q_transposeproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QTransposeProxyModel_OnEvent((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_event_filter(void* self, void* watched, void* event) {
    return QTransposeProxyModel_EventFilter((QTransposeProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_transposeproxymodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QTransposeProxyModel_QBaseEventFilter((QTransposeProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_transposeproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QTransposeProxyModel_OnEventFilter((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_timer_event(void* self, void* event) {
    QTransposeProxyModel_TimerEvent((QTransposeProxyModel*)self, (QTimerEvent*)event);
}

void q_transposeproxymodel_qbase_timer_event(void* self, void* event) {
    QTransposeProxyModel_QBaseTimerEvent((QTransposeProxyModel*)self, (QTimerEvent*)event);
}

void q_transposeproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QTransposeProxyModel_OnTimerEvent((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_child_event(void* self, void* event) {
    QTransposeProxyModel_ChildEvent((QTransposeProxyModel*)self, (QChildEvent*)event);
}

void q_transposeproxymodel_qbase_child_event(void* self, void* event) {
    QTransposeProxyModel_QBaseChildEvent((QTransposeProxyModel*)self, (QChildEvent*)event);
}

void q_transposeproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QTransposeProxyModel_OnChildEvent((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_custom_event(void* self, void* event) {
    QTransposeProxyModel_CustomEvent((QTransposeProxyModel*)self, (QEvent*)event);
}

void q_transposeproxymodel_qbase_custom_event(void* self, void* event) {
    QTransposeProxyModel_QBaseCustomEvent((QTransposeProxyModel*)self, (QEvent*)event);
}

void q_transposeproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QTransposeProxyModel_OnCustomEvent((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_connect_notify(void* self, void* signal) {
    QTransposeProxyModel_ConnectNotify((QTransposeProxyModel*)self, (QMetaMethod*)signal);
}

void q_transposeproxymodel_qbase_connect_notify(void* self, void* signal) {
    QTransposeProxyModel_QBaseConnectNotify((QTransposeProxyModel*)self, (QMetaMethod*)signal);
}

void q_transposeproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QTransposeProxyModel_OnConnectNotify((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_disconnect_notify(void* self, void* signal) {
    QTransposeProxyModel_DisconnectNotify((QTransposeProxyModel*)self, (QMetaMethod*)signal);
}

void q_transposeproxymodel_qbase_disconnect_notify(void* self, void* signal) {
    QTransposeProxyModel_QBaseDisconnectNotify((QTransposeProxyModel*)self, (QMetaMethod*)signal);
}

void q_transposeproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QTransposeProxyModel_OnDisconnectNotify((QTransposeProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_transposeproxymodel_create_source_index(void* self, int row, int col, void* internalPtr) {
    return QTransposeProxyModel_CreateSourceIndex((QTransposeProxyModel*)self, row, col, internalPtr);
}

QModelIndex* q_transposeproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr) {
    return QTransposeProxyModel_QBaseCreateSourceIndex((QTransposeProxyModel*)self, row, col, internalPtr);
}

void q_transposeproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QTransposeProxyModel_OnCreateSourceIndex((QTransposeProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_transposeproxymodel_create_index(void* self, int row, int column) {
    return QTransposeProxyModel_CreateIndex((QTransposeProxyModel*)self, row, column);
}

QModelIndex* q_transposeproxymodel_qbase_create_index(void* self, int row, int column) {
    return QTransposeProxyModel_QBaseCreateIndex((QTransposeProxyModel*)self, row, column);
}

void q_transposeproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    QTransposeProxyModel_OnCreateIndex((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_encode_data(void* self, libqt_list indexes, void* stream) {
    QTransposeProxyModel_EncodeData((QTransposeProxyModel*)self, indexes, (QDataStream*)stream);
}

void q_transposeproxymodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    QTransposeProxyModel_QBaseEncodeData((QTransposeProxyModel*)self, indexes, (QDataStream*)stream);
}

void q_transposeproxymodel_on_encode_data(void* self, void (*callback)(void*, libqt_list, void*)) {
    QTransposeProxyModel_OnEncodeData((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QTransposeProxyModel_DecodeData((QTransposeProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_transposeproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QTransposeProxyModel_QBaseDecodeData((QTransposeProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_transposeproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    QTransposeProxyModel_OnDecodeData((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QTransposeProxyModel_BeginInsertRows((QTransposeProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_transposeproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QTransposeProxyModel_QBaseBeginInsertRows((QTransposeProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_transposeproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QTransposeProxyModel_OnBeginInsertRows((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_end_insert_rows(void* self) {
    QTransposeProxyModel_EndInsertRows((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_qbase_end_insert_rows(void* self) {
    QTransposeProxyModel_QBaseEndInsertRows((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_on_end_insert_rows(void* self, void (*callback)()) {
    QTransposeProxyModel_OnEndInsertRows((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QTransposeProxyModel_BeginRemoveRows((QTransposeProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_transposeproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QTransposeProxyModel_QBaseBeginRemoveRows((QTransposeProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_transposeproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QTransposeProxyModel_OnBeginRemoveRows((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_end_remove_rows(void* self) {
    QTransposeProxyModel_EndRemoveRows((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_qbase_end_remove_rows(void* self) {
    QTransposeProxyModel_QBaseEndRemoveRows((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_on_end_remove_rows(void* self, void (*callback)()) {
    QTransposeProxyModel_OnEndRemoveRows((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QTransposeProxyModel_BeginMoveRows((QTransposeProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool q_transposeproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QTransposeProxyModel_QBaseBeginMoveRows((QTransposeProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_transposeproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QTransposeProxyModel_OnBeginMoveRows((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_end_move_rows(void* self) {
    QTransposeProxyModel_EndMoveRows((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_qbase_end_move_rows(void* self) {
    QTransposeProxyModel_QBaseEndMoveRows((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_on_end_move_rows(void* self, void (*callback)()) {
    QTransposeProxyModel_OnEndMoveRows((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QTransposeProxyModel_BeginInsertColumns((QTransposeProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_transposeproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QTransposeProxyModel_QBaseBeginInsertColumns((QTransposeProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_transposeproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QTransposeProxyModel_OnBeginInsertColumns((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_end_insert_columns(void* self) {
    QTransposeProxyModel_EndInsertColumns((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_qbase_end_insert_columns(void* self) {
    QTransposeProxyModel_QBaseEndInsertColumns((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_on_end_insert_columns(void* self, void (*callback)()) {
    QTransposeProxyModel_OnEndInsertColumns((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QTransposeProxyModel_BeginRemoveColumns((QTransposeProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_transposeproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QTransposeProxyModel_QBaseBeginRemoveColumns((QTransposeProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_transposeproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QTransposeProxyModel_OnBeginRemoveColumns((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_end_remove_columns(void* self) {
    QTransposeProxyModel_EndRemoveColumns((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_qbase_end_remove_columns(void* self) {
    QTransposeProxyModel_QBaseEndRemoveColumns((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_on_end_remove_columns(void* self, void (*callback)()) {
    QTransposeProxyModel_OnEndRemoveColumns((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QTransposeProxyModel_BeginMoveColumns((QTransposeProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool q_transposeproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QTransposeProxyModel_QBaseBeginMoveColumns((QTransposeProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_transposeproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QTransposeProxyModel_OnBeginMoveColumns((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_end_move_columns(void* self) {
    QTransposeProxyModel_EndMoveColumns((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_qbase_end_move_columns(void* self) {
    QTransposeProxyModel_QBaseEndMoveColumns((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_on_end_move_columns(void* self, void (*callback)()) {
    QTransposeProxyModel_OnEndMoveColumns((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_begin_reset_model(void* self) {
    QTransposeProxyModel_BeginResetModel((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_qbase_begin_reset_model(void* self) {
    QTransposeProxyModel_QBaseBeginResetModel((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_on_begin_reset_model(void* self, void (*callback)()) {
    QTransposeProxyModel_OnBeginResetModel((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_end_reset_model(void* self) {
    QTransposeProxyModel_EndResetModel((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_qbase_end_reset_model(void* self) {
    QTransposeProxyModel_QBaseEndResetModel((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_on_end_reset_model(void* self, void (*callback)()) {
    QTransposeProxyModel_OnEndResetModel((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_change_persistent_index(void* self, void* from, void* to) {
    QTransposeProxyModel_ChangePersistentIndex((QTransposeProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_transposeproxymodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QTransposeProxyModel_QBaseChangePersistentIndex((QTransposeProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_transposeproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    QTransposeProxyModel_OnChangePersistentIndex((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QTransposeProxyModel_ChangePersistentIndexList((QTransposeProxyModel*)self, from, to);
}

void q_transposeproxymodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QTransposeProxyModel_QBaseChangePersistentIndexList((QTransposeProxyModel*)self, from, to);
}

void q_transposeproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list)) {
    QTransposeProxyModel_OnChangePersistentIndexList((QTransposeProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_transposeproxymodel_persistent_index_list(void* self) {
    libqt_list _arr = QTransposeProxyModel_PersistentIndexList((QTransposeProxyModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_transposeproxymodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QTransposeProxyModel_QBasePersistentIndexList((QTransposeProxyModel*)self);
    return _arr;
}

void q_transposeproxymodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*callback)()) {
    QTransposeProxyModel_OnPersistentIndexList((QTransposeProxyModel*)self, (intptr_t)callback);
}

QObject* q_transposeproxymodel_sender(void* self) {
    return QTransposeProxyModel_Sender((QTransposeProxyModel*)self);
}

QObject* q_transposeproxymodel_qbase_sender(void* self) {
    return QTransposeProxyModel_QBaseSender((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_on_sender(void* self, QObject* (*callback)()) {
    QTransposeProxyModel_OnSender((QTransposeProxyModel*)self, (intptr_t)callback);
}

int32_t q_transposeproxymodel_sender_signal_index(void* self) {
    return QTransposeProxyModel_SenderSignalIndex((QTransposeProxyModel*)self);
}

int32_t q_transposeproxymodel_qbase_sender_signal_index(void* self) {
    return QTransposeProxyModel_QBaseSenderSignalIndex((QTransposeProxyModel*)self);
}

void q_transposeproxymodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QTransposeProxyModel_OnSenderSignalIndex((QTransposeProxyModel*)self, (intptr_t)callback);
}

int32_t q_transposeproxymodel_receivers(void* self, const char* signal) {
    return QTransposeProxyModel_Receivers((QTransposeProxyModel*)self, signal);
}

int32_t q_transposeproxymodel_qbase_receivers(void* self, const char* signal) {
    return QTransposeProxyModel_QBaseReceivers((QTransposeProxyModel*)self, signal);
}

void q_transposeproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QTransposeProxyModel_OnReceivers((QTransposeProxyModel*)self, (intptr_t)callback);
}

bool q_transposeproxymodel_is_signal_connected(void* self, void* signal) {
    return QTransposeProxyModel_IsSignalConnected((QTransposeProxyModel*)self, (QMetaMethod*)signal);
}

bool q_transposeproxymodel_qbase_is_signal_connected(void* self, void* signal) {
    return QTransposeProxyModel_QBaseIsSignalConnected((QTransposeProxyModel*)self, (QMetaMethod*)signal);
}

void q_transposeproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QTransposeProxyModel_OnIsSignalConnected((QTransposeProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_Connect_SourceModelChanged((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_transposeproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_transposeproxymodel_delete(void* self) {
    QTransposeProxyModel_Delete((QTransposeProxyModel*)(self));
}
