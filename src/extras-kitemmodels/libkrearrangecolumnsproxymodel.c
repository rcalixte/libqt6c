#include "../libqabstractitemmodel.hpp"
#include "../libqabstractproxymodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqidentityproxymodel.hpp"
#include "../libqitemselectionmodel.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libkrearrangecolumnsproxymodel.hpp"
#include "libkrearrangecolumnsproxymodel.h"

KRearrangeColumnsProxyModel* k_rearrangecolumnsproxymodel_new() {
    return KRearrangeColumnsProxyModel_New();
}

KRearrangeColumnsProxyModel* k_rearrangecolumnsproxymodel_new2(void* parent) {
    return KRearrangeColumnsProxyModel_New2((QObject*)parent);
}

const QMetaObject* k_rearrangecolumnsproxymodel_meta_object(const void* self) {
    return KRearrangeColumnsProxyModel_MetaObject((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    KRearrangeColumnsProxyModel_OnMetaObject((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

const QMetaObject* k_rearrangecolumnsproxymodel_super_meta_object(const void* self) {
    return KRearrangeColumnsProxyModel_SuperMetaObject((KRearrangeColumnsProxyModel*)self);
}

void* k_rearrangecolumnsproxymodel_metacast(void* self, const char* param1) {
    return KRearrangeColumnsProxyModel_Metacast((KRearrangeColumnsProxyModel*)self, param1);
}

void k_rearrangecolumnsproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KRearrangeColumnsProxyModel_OnMetacast((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void* k_rearrangecolumnsproxymodel_super_metacast(void* self, const char* param1) {
    return KRearrangeColumnsProxyModel_SuperMetacast((KRearrangeColumnsProxyModel*)self, param1);
}

int32_t k_rearrangecolumnsproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KRearrangeColumnsProxyModel_Metacall((KRearrangeColumnsProxyModel*)self, param1, param2, param3);
}

void k_rearrangecolumnsproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KRearrangeColumnsProxyModel_OnMetacall((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_rearrangecolumnsproxymodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KRearrangeColumnsProxyModel_SuperMetacall((KRearrangeColumnsProxyModel*)self, param1, param2, param3);
}

const char* k_rearrangecolumnsproxymodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_rearrangecolumnsproxymodel_set_source_columns(void* self, libqt_list /* of int */ columns) {
    KRearrangeColumnsProxyModel_SetSourceColumns((KRearrangeColumnsProxyModel*)self, columns);
}

int32_t k_rearrangecolumnsproxymodel_column_count(const void* self, const void* parent) {
    return KRearrangeColumnsProxyModel_ColumnCount((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_column_count(const void* self, int32_t (*callback)(const void*, const void*)) {
    KRearrangeColumnsProxyModel_OnColumnCount((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_rearrangecolumnsproxymodel_super_column_count(const void* self, const void* parent) {
    return KRearrangeColumnsProxyModel_SuperColumnCount((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_rearrangecolumnsproxymodel_row_count(const void* self, const void* parent) {
    return KRearrangeColumnsProxyModel_RowCount((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_row_count(const void* self, int32_t (*callback)(const void*, const void*)) {
    KRearrangeColumnsProxyModel_OnRowCount((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_rearrangecolumnsproxymodel_super_row_count(const void* self, const void* parent) {
    return KRearrangeColumnsProxyModel_SuperRowCount((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

QModelIndex* k_rearrangecolumnsproxymodel_index(const void* self, int row, int column, const void* parent) {
    return KRearrangeColumnsProxyModel_Index((KRearrangeColumnsProxyModel*)self, row, column, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_index(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    KRearrangeColumnsProxyModel_OnIndex((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_rearrangecolumnsproxymodel_super_index(const void* self, int row, int column, const void* parent) {
    return KRearrangeColumnsProxyModel_SuperIndex((KRearrangeColumnsProxyModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_rearrangecolumnsproxymodel_parent(const void* self, const void* child) {
    return KRearrangeColumnsProxyModel_Parent((KRearrangeColumnsProxyModel*)self, (QModelIndex*)child);
}

void k_rearrangecolumnsproxymodel_on_parent(const void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KRearrangeColumnsProxyModel_OnParent((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_rearrangecolumnsproxymodel_super_parent(const void* self, const void* child) {
    return KRearrangeColumnsProxyModel_SuperParent((KRearrangeColumnsProxyModel*)self, (QModelIndex*)child);
}

QModelIndex* k_rearrangecolumnsproxymodel_map_from_source(const void* self, const void* sourceIndex) {
    return KRearrangeColumnsProxyModel_MapFromSource((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_rearrangecolumnsproxymodel_on_map_from_source(const void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KRearrangeColumnsProxyModel_OnMapFromSource((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_rearrangecolumnsproxymodel_super_map_from_source(const void* self, const void* sourceIndex) {
    return KRearrangeColumnsProxyModel_SuperMapFromSource((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceIndex);
}

QModelIndex* k_rearrangecolumnsproxymodel_map_to_source(const void* self, const void* proxyIndex) {
    return KRearrangeColumnsProxyModel_MapToSource((KRearrangeColumnsProxyModel*)self, (QModelIndex*)proxyIndex);
}

void k_rearrangecolumnsproxymodel_on_map_to_source(const void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KRearrangeColumnsProxyModel_OnMapToSource((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_rearrangecolumnsproxymodel_super_map_to_source(const void* self, const void* proxyIndex) {
    return KRearrangeColumnsProxyModel_SuperMapToSource((KRearrangeColumnsProxyModel*)self, (QModelIndex*)proxyIndex);
}

QVariant* k_rearrangecolumnsproxymodel_header_data(const void* self, int section, int32_t orientation, int role) {
    return KRearrangeColumnsProxyModel_HeaderData((KRearrangeColumnsProxyModel*)self, section, orientation, role);
}

void k_rearrangecolumnsproxymodel_on_header_data(const void* self, QVariant* (*callback)(const void*, int, int32_t, int)) {
    KRearrangeColumnsProxyModel_OnHeaderData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QVariant* k_rearrangecolumnsproxymodel_super_header_data(const void* self, int section, int32_t orientation, int role) {
    return KRearrangeColumnsProxyModel_SuperHeaderData((KRearrangeColumnsProxyModel*)self, section, orientation, role);
}

bool k_rearrangecolumnsproxymodel_has_children(const void* self, const void* parent) {
    return KRearrangeColumnsProxyModel_HasChildren((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_has_children(const void* self, bool (*callback)(const void*, const void*)) {
    KRearrangeColumnsProxyModel_OnHasChildren((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_super_has_children(const void* self, const void* parent) {
    return KRearrangeColumnsProxyModel_SuperHasChildren((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

QModelIndex* k_rearrangecolumnsproxymodel_sibling(const void* self, int row, int column, const void* idx) {
    return KRearrangeColumnsProxyModel_Sibling((KRearrangeColumnsProxyModel*)self, row, column, (QModelIndex*)idx);
}

void k_rearrangecolumnsproxymodel_on_sibling(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    KRearrangeColumnsProxyModel_OnSibling((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_rearrangecolumnsproxymodel_super_sibling(const void* self, int row, int column, const void* idx) {
    return KRearrangeColumnsProxyModel_SuperSibling((KRearrangeColumnsProxyModel*)self, row, column, (QModelIndex*)idx);
}

int32_t k_rearrangecolumnsproxymodel_proxy_column_for_source_column(const void* self, int sourceColumn) {
    return KRearrangeColumnsProxyModel_ProxyColumnForSourceColumn((KRearrangeColumnsProxyModel*)self, sourceColumn);
}

int32_t k_rearrangecolumnsproxymodel_source_column_for_proxy_column(const void* self, int proxyColumn) {
    return KRearrangeColumnsProxyModel_SourceColumnForProxyColumn((KRearrangeColumnsProxyModel*)self, proxyColumn);
}

const char* k_rearrangecolumnsproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_rearrangecolumnsproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_rearrangecolumnsproxymodel_handle_source_layout_changes(const void* self) {
    return QIdentityProxyModel_HandleSourceLayoutChanges((QIdentityProxyModel*)self);
}

bool k_rearrangecolumnsproxymodel_handle_source_data_changes(const void* self) {
    return QIdentityProxyModel_HandleSourceDataChanges((QIdentityProxyModel*)self);
}

QAbstractItemModel* k_rearrangecolumnsproxymodel_source_model(const void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

bool k_rearrangecolumnsproxymodel_has_index(const void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool k_rearrangecolumnsproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_rearrangecolumnsproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_rearrangecolumnsproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_rearrangecolumnsproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_rearrangecolumnsproxymodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_rearrangecolumnsproxymodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_rearrangecolumnsproxymodel_check_index(const void* self, const void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_rearrangecolumnsproxymodel_data_changed(void* self, const void* topLeft, const void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_rearrangecolumnsproxymodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_rearrangecolumnsproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_rearrangecolumnsproxymodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_rearrangecolumnsproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_has_index3(const void* self, int row, int column, const void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_insert_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_insert_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_remove_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_remove_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_check_index2(const void* self, const void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_rearrangecolumnsproxymodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_rearrangecolumnsproxymodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_rearrangecolumnsproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_rearrangecolumnsproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_rearrangecolumnsproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_rearrangecolumnsproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_rearrangecolumnsproxymodel_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_rearrangecolumnsproxymodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_rearrangecolumnsproxymodel_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_rearrangecolumnsproxymodel_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_rearrangecolumnsproxymodel_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_rearrangecolumnsproxymodel_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_rearrangecolumnsproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_rearrangecolumnsproxymodel_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_rearrangecolumnsproxymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_rearrangecolumnsproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_rearrangecolumnsproxymodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_rearrangecolumnsproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_rearrangecolumnsproxymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_rearrangecolumnsproxymodel_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_rearrangecolumnsproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_rearrangecolumnsproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_rearrangecolumnsproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_rearrangecolumnsproxymodel_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_rearrangecolumnsproxymodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_rearrangecolumnsproxymodel_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_rearrangecolumnsproxymodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_rearrangecolumnsproxymodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_rearrangecolumnsproxymodel_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_rearrangecolumnsproxymodel_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_rearrangecolumnsproxymodel_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_rearrangecolumnsproxymodel_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_rearrangecolumnsproxymodel_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_rearrangecolumnsproxymodel_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_rearrangecolumnsproxymodel_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_rearrangecolumnsproxymodel_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_rearrangecolumnsproxymodel_dynamic_property_names\n");
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

QBindingStorage* k_rearrangecolumnsproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_rearrangecolumnsproxymodel_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_rearrangecolumnsproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_rearrangecolumnsproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_rearrangecolumnsproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_rearrangecolumnsproxymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_rearrangecolumnsproxymodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_rearrangecolumnsproxymodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_rearrangecolumnsproxymodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_rearrangecolumnsproxymodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_rearrangecolumnsproxymodel_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_rearrangecolumnsproxymodel_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_rearrangecolumnsproxymodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_rearrangecolumnsproxymodel_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_rearrangecolumnsproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_rearrangecolumnsproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KRearrangeColumnsProxyModel_DropMimeData((KRearrangeColumnsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KRearrangeColumnsProxyModel_SuperDropMimeData((KRearrangeColumnsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*)) {
    KRearrangeColumnsProxyModel_OnDropMimeData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_rearrangecolumnsproxymodel_map_selection_from_source(const void* self, const void* selection) {
    return KRearrangeColumnsProxyModel_MapSelectionFromSource((KRearrangeColumnsProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* k_rearrangecolumnsproxymodel_super_map_selection_from_source(const void* self, const void* selection) {
    return KRearrangeColumnsProxyModel_SuperMapSelectionFromSource((KRearrangeColumnsProxyModel*)self, (QItemSelection*)selection);
}

void k_rearrangecolumnsproxymodel_on_map_selection_from_source(const void* self, QItemSelection* (*callback)(const void*, const void*)) {
    KRearrangeColumnsProxyModel_OnMapSelectionFromSource((const KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_rearrangecolumnsproxymodel_map_selection_to_source(const void* self, const void* selection) {
    return KRearrangeColumnsProxyModel_MapSelectionToSource((KRearrangeColumnsProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* k_rearrangecolumnsproxymodel_super_map_selection_to_source(const void* self, const void* selection) {
    return KRearrangeColumnsProxyModel_SuperMapSelectionToSource((KRearrangeColumnsProxyModel*)self, (QItemSelection*)selection);
}

void k_rearrangecolumnsproxymodel_on_map_selection_to_source(const void* self, QItemSelection* (*callback)(const void*, const void*)) {
    KRearrangeColumnsProxyModel_OnMapSelectionToSource((const KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_rearrangecolumnsproxymodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = KRearrangeColumnsProxyModel_Match((KRearrangeColumnsProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_rearrangecolumnsproxymodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = KRearrangeColumnsProxyModel_SuperMatch((KRearrangeColumnsProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_rearrangecolumnsproxymodel_on_match(const void* self, libqt_list /* of QModelIndex* */ (*callback)(const void*, const void*, int, const void*, int, int32_t)) {
    KRearrangeColumnsProxyModel_OnMatch((const KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_set_source_model(void* self, void* sourceModel) {
    KRearrangeColumnsProxyModel_SetSourceModel((KRearrangeColumnsProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void k_rearrangecolumnsproxymodel_super_set_source_model(void* self, void* sourceModel) {
    KRearrangeColumnsProxyModel_SuperSetSourceModel((KRearrangeColumnsProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void k_rearrangecolumnsproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnSetSourceModel((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_insert_columns(void* self, int column, int count, const void* parent) {
    return KRearrangeColumnsProxyModel_InsertColumns((KRearrangeColumnsProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_super_insert_columns(void* self, int column, int count, const void* parent) {
    return KRearrangeColumnsProxyModel_SuperInsertColumns((KRearrangeColumnsProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    KRearrangeColumnsProxyModel_OnInsertColumns((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_insert_rows(void* self, int row, int count, const void* parent) {
    return KRearrangeColumnsProxyModel_InsertRows((KRearrangeColumnsProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_super_insert_rows(void* self, int row, int count, const void* parent) {
    return KRearrangeColumnsProxyModel_SuperInsertRows((KRearrangeColumnsProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    KRearrangeColumnsProxyModel_OnInsertRows((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_remove_columns(void* self, int column, int count, const void* parent) {
    return KRearrangeColumnsProxyModel_RemoveColumns((KRearrangeColumnsProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_super_remove_columns(void* self, int column, int count, const void* parent) {
    return KRearrangeColumnsProxyModel_SuperRemoveColumns((KRearrangeColumnsProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    KRearrangeColumnsProxyModel_OnRemoveColumns((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_remove_rows(void* self, int row, int count, const void* parent) {
    return KRearrangeColumnsProxyModel_RemoveRows((KRearrangeColumnsProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_super_remove_rows(void* self, int row, int count, const void* parent) {
    return KRearrangeColumnsProxyModel_SuperRemoveRows((KRearrangeColumnsProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    KRearrangeColumnsProxyModel_OnRemoveRows((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return KRearrangeColumnsProxyModel_MoveRows((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_rearrangecolumnsproxymodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return KRearrangeColumnsProxyModel_SuperMoveRows((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_rearrangecolumnsproxymodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    KRearrangeColumnsProxyModel_OnMoveRows((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return KRearrangeColumnsProxyModel_MoveColumns((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_rearrangecolumnsproxymodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return KRearrangeColumnsProxyModel_SuperMoveColumns((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_rearrangecolumnsproxymodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    KRearrangeColumnsProxyModel_OnMoveColumns((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_submit(void* self) {
    return KRearrangeColumnsProxyModel_Submit((KRearrangeColumnsProxyModel*)self);
}

bool k_rearrangecolumnsproxymodel_super_submit(void* self) {
    return KRearrangeColumnsProxyModel_SuperSubmit((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_submit(void* self, bool (*callback)(void*)) {
    KRearrangeColumnsProxyModel_OnSubmit((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_revert(void* self) {
    KRearrangeColumnsProxyModel_Revert((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_super_revert(void* self) {
    KRearrangeColumnsProxyModel_SuperRevert((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_revert(void* self, void (*callback)(void*)) {
    KRearrangeColumnsProxyModel_OnRevert((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QVariant* k_rearrangecolumnsproxymodel_data(const void* self, const void* proxyIndex, int role) {
    return KRearrangeColumnsProxyModel_Data((KRearrangeColumnsProxyModel*)self, (QModelIndex*)proxyIndex, role);
}

QVariant* k_rearrangecolumnsproxymodel_super_data(const void* self, const void* proxyIndex, int role) {
    return KRearrangeColumnsProxyModel_SuperData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)proxyIndex, role);
}

void k_rearrangecolumnsproxymodel_on_data(const void* self, QVariant* (*callback)(const void*, const void*, int)) {
    KRearrangeColumnsProxyModel_OnData((const KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_rearrangecolumnsproxymodel_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KRearrangeColumnsProxyModel_ItemData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_rearrangecolumnsproxymodel_super_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KRearrangeColumnsProxyModel_SuperItemData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_rearrangecolumnsproxymodel_on_item_data(const void* self, libqt_map /* of int to QVariant* */ (*callback)(const void*, const void*)) {
    KRearrangeColumnsProxyModel_OnItemData((const KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_rearrangecolumnsproxymodel_flags(const void* self, const void* index) {
    return KRearrangeColumnsProxyModel_Flags((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

int32_t k_rearrangecolumnsproxymodel_super_flags(const void* self, const void* index) {
    return KRearrangeColumnsProxyModel_SuperFlags((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_rearrangecolumnsproxymodel_on_flags(const void* self, int32_t (*callback)(const void*, const void*)) {
    KRearrangeColumnsProxyModel_OnFlags((const KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_set_data(void* self, const void* index, const void* value, int role) {
    return KRearrangeColumnsProxyModel_SetData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_rearrangecolumnsproxymodel_super_set_data(void* self, const void* index, const void* value, int role) {
    return KRearrangeColumnsProxyModel_SuperSetData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_rearrangecolumnsproxymodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int)) {
    KRearrangeColumnsProxyModel_OnSetData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_rearrangecolumnsproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_rearrangecolumnsproxymodel_set_item_data\n");
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
    bool _out = KRearrangeColumnsProxyModel_SetItemData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool k_rearrangecolumnsproxymodel_super_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_rearrangecolumnsproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_rearrangecolumnsproxymodel_set_item_data\n");
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
    bool _out = KRearrangeColumnsProxyModel_SuperSetItemData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_rearrangecolumnsproxymodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map /* of int to QVariant* */)) {
    KRearrangeColumnsProxyModel_OnSetItemData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return KRearrangeColumnsProxyModel_SetHeaderData((KRearrangeColumnsProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_rearrangecolumnsproxymodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return KRearrangeColumnsProxyModel_SuperSetHeaderData((KRearrangeColumnsProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void k_rearrangecolumnsproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int)) {
    KRearrangeColumnsProxyModel_OnSetHeaderData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_clear_item_data(void* self, const void* index) {
    return KRearrangeColumnsProxyModel_ClearItemData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

bool k_rearrangecolumnsproxymodel_super_clear_item_data(void* self, const void* index) {
    return KRearrangeColumnsProxyModel_SuperClearItemData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_rearrangecolumnsproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*)) {
    KRearrangeColumnsProxyModel_OnClearItemData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_rearrangecolumnsproxymodel_buddy(const void* self, const void* index) {
    return KRearrangeColumnsProxyModel_Buddy((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* k_rearrangecolumnsproxymodel_super_buddy(const void* self, const void* index) {
    return KRearrangeColumnsProxyModel_SuperBuddy((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_rearrangecolumnsproxymodel_on_buddy(const void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KRearrangeColumnsProxyModel_OnBuddy((const KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_can_fetch_more(const void* self, const void* parent) {
    return KRearrangeColumnsProxyModel_CanFetchMore((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_super_can_fetch_more(const void* self, const void* parent) {
    return KRearrangeColumnsProxyModel_SuperCanFetchMore((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_can_fetch_more(const void* self, bool (*callback)(const void*, const void*)) {
    KRearrangeColumnsProxyModel_OnCanFetchMore((const KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_fetch_more(void* self, const void* parent) {
    KRearrangeColumnsProxyModel_FetchMore((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_super_fetch_more(void* self, const void* parent) {
    KRearrangeColumnsProxyModel_SuperFetchMore((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_fetch_more(void* self, void (*callback)(void*, const void*)) {
    KRearrangeColumnsProxyModel_OnFetchMore((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_sort(void* self, int column, int32_t order) {
    KRearrangeColumnsProxyModel_Sort((KRearrangeColumnsProxyModel*)self, column, order);
}

void k_rearrangecolumnsproxymodel_super_sort(void* self, int column, int32_t order) {
    KRearrangeColumnsProxyModel_SuperSort((KRearrangeColumnsProxyModel*)self, column, order);
}

void k_rearrangecolumnsproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KRearrangeColumnsProxyModel_OnSort((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QSize* k_rearrangecolumnsproxymodel_span(const void* self, const void* index) {
    return KRearrangeColumnsProxyModel_Span((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

QSize* k_rearrangecolumnsproxymodel_super_span(const void* self, const void* index) {
    return KRearrangeColumnsProxyModel_SuperSpan((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_rearrangecolumnsproxymodel_on_span(const void* self, QSize* (*callback)(const void*, const void*)) {
    KRearrangeColumnsProxyModel_OnSpan((const KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QMimeData* k_rearrangecolumnsproxymodel_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KRearrangeColumnsProxyModel_MimeData((KRearrangeColumnsProxyModel*)self, indexes);
}

QMimeData* k_rearrangecolumnsproxymodel_super_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KRearrangeColumnsProxyModel_SuperMimeData((KRearrangeColumnsProxyModel*)self, indexes);
}

void k_rearrangecolumnsproxymodel_on_mime_data(const void* self, QMimeData* (*callback)(const void*, libqt_list /* of QModelIndex* */)) {
    KRearrangeColumnsProxyModel_OnMimeData((const KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KRearrangeColumnsProxyModel_CanDropMimeData((KRearrangeColumnsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KRearrangeColumnsProxyModel_SuperCanDropMimeData((KRearrangeColumnsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_can_drop_mime_data(const void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*)) {
    KRearrangeColumnsProxyModel_OnCanDropMimeData((const KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

const char** k_rearrangecolumnsproxymodel_mime_types(const void* self) {
    libqt_list _arr = KRearrangeColumnsProxyModel_MimeTypes((KRearrangeColumnsProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_rearrangecolumnsproxymodel_mime_types\n");
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

const char** k_rearrangecolumnsproxymodel_super_mime_types(const void* self) {
    libqt_list _arr = KRearrangeColumnsProxyModel_SuperMimeTypes((KRearrangeColumnsProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_rearrangecolumnsproxymodel_mime_types\n");
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

void k_rearrangecolumnsproxymodel_on_mime_types(const void* self, const char** (*callback)(const void*)) {
    KRearrangeColumnsProxyModel_OnMimeTypes((const KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_rearrangecolumnsproxymodel_supported_drag_actions(const void* self) {
    return KRearrangeColumnsProxyModel_SupportedDragActions((KRearrangeColumnsProxyModel*)self);
}

int32_t k_rearrangecolumnsproxymodel_super_supported_drag_actions(const void* self) {
    return KRearrangeColumnsProxyModel_SuperSupportedDragActions((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_supported_drag_actions(const void* self, int32_t (*callback)(const void*)) {
    KRearrangeColumnsProxyModel_OnSupportedDragActions((const KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_rearrangecolumnsproxymodel_supported_drop_actions(const void* self) {
    return KRearrangeColumnsProxyModel_SupportedDropActions((KRearrangeColumnsProxyModel*)self);
}

int32_t k_rearrangecolumnsproxymodel_super_supported_drop_actions(const void* self) {
    return KRearrangeColumnsProxyModel_SuperSupportedDropActions((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_supported_drop_actions(const void* self, int32_t (*callback)(const void*)) {
    KRearrangeColumnsProxyModel_OnSupportedDropActions((const KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_rearrangecolumnsproxymodel_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KRearrangeColumnsProxyModel_RoleNames((KRearrangeColumnsProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_rearrangecolumnsproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_rearrangecolumnsproxymodel_role_names\n");
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

libqt_map /* of int to char* */ k_rearrangecolumnsproxymodel_super_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KRearrangeColumnsProxyModel_SuperRoleNames((KRearrangeColumnsProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_rearrangecolumnsproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_rearrangecolumnsproxymodel_role_names\n");
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

void k_rearrangecolumnsproxymodel_on_role_names(const void* self, libqt_map /* of int to char* */ (*callback)(const void*)) {
    KRearrangeColumnsProxyModel_OnRoleNames((const KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_multi_data(const void* self, const void* index, void* roleDataSpan) {
    KRearrangeColumnsProxyModel_MultiData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_rearrangecolumnsproxymodel_super_multi_data(const void* self, const void* index, void* roleDataSpan) {
    KRearrangeColumnsProxyModel_SuperMultiData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_rearrangecolumnsproxymodel_on_multi_data(const void* self, void (*callback)(const void*, const void*, void*)) {
    KRearrangeColumnsProxyModel_OnMultiData((const KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_reset_internal_data(void* self) {
    KRearrangeColumnsProxyModel_ResetInternalData((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_super_reset_internal_data(void* self) {
    KRearrangeColumnsProxyModel_SuperResetInternalData((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_reset_internal_data(void* self, void (*callback)(void*)) {
    KRearrangeColumnsProxyModel_OnResetInternalData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_event(void* self, void* event) {
    return KRearrangeColumnsProxyModel_Event((KRearrangeColumnsProxyModel*)self, (QEvent*)event);
}

bool k_rearrangecolumnsproxymodel_super_event(void* self, void* event) {
    return KRearrangeColumnsProxyModel_SuperEvent((KRearrangeColumnsProxyModel*)self, (QEvent*)event);
}

void k_rearrangecolumnsproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnEvent((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_event_filter(void* self, void* watched, void* event) {
    return KRearrangeColumnsProxyModel_EventFilter((KRearrangeColumnsProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_rearrangecolumnsproxymodel_super_event_filter(void* self, void* watched, void* event) {
    return KRearrangeColumnsProxyModel_SuperEventFilter((KRearrangeColumnsProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_rearrangecolumnsproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KRearrangeColumnsProxyModel_OnEventFilter((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_timer_event(void* self, void* event) {
    KRearrangeColumnsProxyModel_TimerEvent((KRearrangeColumnsProxyModel*)self, (QTimerEvent*)event);
}

void k_rearrangecolumnsproxymodel_super_timer_event(void* self, void* event) {
    KRearrangeColumnsProxyModel_SuperTimerEvent((KRearrangeColumnsProxyModel*)self, (QTimerEvent*)event);
}

void k_rearrangecolumnsproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnTimerEvent((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_child_event(void* self, void* event) {
    KRearrangeColumnsProxyModel_ChildEvent((KRearrangeColumnsProxyModel*)self, (QChildEvent*)event);
}

void k_rearrangecolumnsproxymodel_super_child_event(void* self, void* event) {
    KRearrangeColumnsProxyModel_SuperChildEvent((KRearrangeColumnsProxyModel*)self, (QChildEvent*)event);
}

void k_rearrangecolumnsproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnChildEvent((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_custom_event(void* self, void* event) {
    KRearrangeColumnsProxyModel_CustomEvent((KRearrangeColumnsProxyModel*)self, (QEvent*)event);
}

void k_rearrangecolumnsproxymodel_super_custom_event(void* self, void* event) {
    KRearrangeColumnsProxyModel_SuperCustomEvent((KRearrangeColumnsProxyModel*)self, (QEvent*)event);
}

void k_rearrangecolumnsproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnCustomEvent((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_connect_notify(void* self, const void* signal) {
    KRearrangeColumnsProxyModel_ConnectNotify((KRearrangeColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_rearrangecolumnsproxymodel_super_connect_notify(void* self, const void* signal) {
    KRearrangeColumnsProxyModel_SuperConnectNotify((KRearrangeColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_rearrangecolumnsproxymodel_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    KRearrangeColumnsProxyModel_OnConnectNotify((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_disconnect_notify(void* self, const void* signal) {
    KRearrangeColumnsProxyModel_DisconnectNotify((KRearrangeColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_rearrangecolumnsproxymodel_super_disconnect_notify(void* self, const void* signal) {
    KRearrangeColumnsProxyModel_SuperDisconnectNotify((KRearrangeColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_rearrangecolumnsproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    KRearrangeColumnsProxyModel_OnDisconnectNotify((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_set_handle_source_layout_changes(void* self, bool handleSourceLayoutChanges) {
    KRearrangeColumnsProxyModel_SetHandleSourceLayoutChanges((KRearrangeColumnsProxyModel*)self, handleSourceLayoutChanges);
}

void k_rearrangecolumnsproxymodel_set_handle_source_data_changes(void* self, bool handleSourceDataChanges) {
    KRearrangeColumnsProxyModel_SetHandleSourceDataChanges((KRearrangeColumnsProxyModel*)self, handleSourceDataChanges);
}

QModelIndex* k_rearrangecolumnsproxymodel_create_source_index(const void* self, int row, int col, void* internalPtr) {
    return KRearrangeColumnsProxyModel_CreateSourceIndex((KRearrangeColumnsProxyModel*)self, row, col, internalPtr);
}

QModelIndex* k_rearrangecolumnsproxymodel_create_index(const void* self, int row, int column) {
    return KRearrangeColumnsProxyModel_CreateIndex((KRearrangeColumnsProxyModel*)self, row, column);
}

void k_rearrangecolumnsproxymodel_encode_data(const void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KRearrangeColumnsProxyModel_EncodeData((KRearrangeColumnsProxyModel*)self, indexes, (QDataStream*)stream);
}

bool k_rearrangecolumnsproxymodel_decode_data(void* self, int row, int column, const void* parent, void* stream) {
    return KRearrangeColumnsProxyModel_DecodeData((KRearrangeColumnsProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_rearrangecolumnsproxymodel_begin_insert_rows(void* self, const void* parent, int first, int last) {
    KRearrangeColumnsProxyModel_BeginInsertRows((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_rearrangecolumnsproxymodel_end_insert_rows(void* self) {
    KRearrangeColumnsProxyModel_EndInsertRows((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_begin_remove_rows(void* self, const void* parent, int first, int last) {
    KRearrangeColumnsProxyModel_BeginRemoveRows((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_rearrangecolumnsproxymodel_end_remove_rows(void* self) {
    KRearrangeColumnsProxyModel_EndRemoveRows((KRearrangeColumnsProxyModel*)self);
}

bool k_rearrangecolumnsproxymodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow) {
    return KRearrangeColumnsProxyModel_BeginMoveRows((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_rearrangecolumnsproxymodel_end_move_rows(void* self) {
    KRearrangeColumnsProxyModel_EndMoveRows((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_begin_insert_columns(void* self, const void* parent, int first, int last) {
    KRearrangeColumnsProxyModel_BeginInsertColumns((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_rearrangecolumnsproxymodel_end_insert_columns(void* self) {
    KRearrangeColumnsProxyModel_EndInsertColumns((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_begin_remove_columns(void* self, const void* parent, int first, int last) {
    KRearrangeColumnsProxyModel_BeginRemoveColumns((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_rearrangecolumnsproxymodel_end_remove_columns(void* self) {
    KRearrangeColumnsProxyModel_EndRemoveColumns((KRearrangeColumnsProxyModel*)self);
}

bool k_rearrangecolumnsproxymodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn) {
    return KRearrangeColumnsProxyModel_BeginMoveColumns((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_rearrangecolumnsproxymodel_end_move_columns(void* self) {
    KRearrangeColumnsProxyModel_EndMoveColumns((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_begin_reset_model(void* self) {
    KRearrangeColumnsProxyModel_BeginResetModel((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_end_reset_model(void* self) {
    KRearrangeColumnsProxyModel_EndResetModel((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_change_persistent_index(void* self, const void* from, const void* to) {
    KRearrangeColumnsProxyModel_ChangePersistentIndex((KRearrangeColumnsProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_rearrangecolumnsproxymodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KRearrangeColumnsProxyModel_ChangePersistentIndexList((KRearrangeColumnsProxyModel*)self, from, to);
}

libqt_list /* of QModelIndex* */ k_rearrangecolumnsproxymodel_persistent_index_list(const void* self) {
    libqt_list _arr = KRearrangeColumnsProxyModel_PersistentIndexList((KRearrangeColumnsProxyModel*)self);
    return _arr;
}

QObject* k_rearrangecolumnsproxymodel_sender(const void* self) {
    return KRearrangeColumnsProxyModel_Sender((KRearrangeColumnsProxyModel*)self);
}

int32_t k_rearrangecolumnsproxymodel_sender_signal_index(const void* self) {
    return KRearrangeColumnsProxyModel_SenderSignalIndex((KRearrangeColumnsProxyModel*)self);
}

int32_t k_rearrangecolumnsproxymodel_receivers(const void* self, const char* signal) {
    return KRearrangeColumnsProxyModel_Receivers((KRearrangeColumnsProxyModel*)self, signal);
}

bool k_rearrangecolumnsproxymodel_is_signal_connected(const void* self, const void* signal) {
    return KRearrangeColumnsProxyModel_IsSignalConnected((KRearrangeColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_rearrangecolumnsproxymodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_Connect_SourceModelChanged((QAbstractProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_delete(void* self) {
    KRearrangeColumnsProxyModel_Delete((KRearrangeColumnsProxyModel*)(self));
}
