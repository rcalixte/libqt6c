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
    return KRearrangeColumnsProxyModel_new();
}

KRearrangeColumnsProxyModel* k_rearrangecolumnsproxymodel_new2(void* parent) {
    return KRearrangeColumnsProxyModel_new2((QObject*)parent);
}

const QMetaObject* k_rearrangecolumnsproxymodel_meta_object(void* self) {
    return KRearrangeColumnsProxyModel_MetaObject((KRearrangeColumnsProxyModel*)self);
}

void* k_rearrangecolumnsproxymodel_metacast(void* self, const char* param1) {
    return KRearrangeColumnsProxyModel_Metacast((KRearrangeColumnsProxyModel*)self, param1);
}

int32_t k_rearrangecolumnsproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KRearrangeColumnsProxyModel_Metacall((KRearrangeColumnsProxyModel*)self, param1, param2, param3);
}

void k_rearrangecolumnsproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KRearrangeColumnsProxyModel_OnMetacall((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_rearrangecolumnsproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KRearrangeColumnsProxyModel_QBaseMetacall((KRearrangeColumnsProxyModel*)self, param1, param2, param3);
}

const char* k_rearrangecolumnsproxymodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_rearrangecolumnsproxymodel_set_source_columns(void* self, libqt_list columns) {
    KRearrangeColumnsProxyModel_SetSourceColumns((KRearrangeColumnsProxyModel*)self, columns);
}

int32_t k_rearrangecolumnsproxymodel_column_count(void* self, void* parent) {
    return KRearrangeColumnsProxyModel_ColumnCount((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnColumnCount((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_rearrangecolumnsproxymodel_qbase_column_count(void* self, void* parent) {
    return KRearrangeColumnsProxyModel_QBaseColumnCount((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_rearrangecolumnsproxymodel_row_count(void* self, void* parent) {
    return KRearrangeColumnsProxyModel_RowCount((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnRowCount((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_rearrangecolumnsproxymodel_qbase_row_count(void* self, void* parent) {
    return KRearrangeColumnsProxyModel_QBaseRowCount((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

QModelIndex* k_rearrangecolumnsproxymodel_index(void* self, int row, int column, void* parent) {
    return KRearrangeColumnsProxyModel_Index((KRearrangeColumnsProxyModel*)self, row, column, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KRearrangeColumnsProxyModel_OnIndex((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_rearrangecolumnsproxymodel_qbase_index(void* self, int row, int column, void* parent) {
    return KRearrangeColumnsProxyModel_QBaseIndex((KRearrangeColumnsProxyModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_rearrangecolumnsproxymodel_parent(void* self, void* child) {
    return KRearrangeColumnsProxyModel_Parent((KRearrangeColumnsProxyModel*)self, (QModelIndex*)child);
}

void k_rearrangecolumnsproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnParent((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_rearrangecolumnsproxymodel_qbase_parent(void* self, void* child) {
    return KRearrangeColumnsProxyModel_QBaseParent((KRearrangeColumnsProxyModel*)self, (QModelIndex*)child);
}

QModelIndex* k_rearrangecolumnsproxymodel_map_from_source(void* self, void* sourceIndex) {
    return KRearrangeColumnsProxyModel_MapFromSource((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_rearrangecolumnsproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnMapFromSource((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_rearrangecolumnsproxymodel_qbase_map_from_source(void* self, void* sourceIndex) {
    return KRearrangeColumnsProxyModel_QBaseMapFromSource((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceIndex);
}

QModelIndex* k_rearrangecolumnsproxymodel_map_to_source(void* self, void* proxyIndex) {
    return KRearrangeColumnsProxyModel_MapToSource((KRearrangeColumnsProxyModel*)self, (QModelIndex*)proxyIndex);
}

void k_rearrangecolumnsproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnMapToSource((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_rearrangecolumnsproxymodel_qbase_map_to_source(void* self, void* proxyIndex) {
    return KRearrangeColumnsProxyModel_QBaseMapToSource((KRearrangeColumnsProxyModel*)self, (QModelIndex*)proxyIndex);
}

QVariant* k_rearrangecolumnsproxymodel_header_data(void* self, int section, int32_t orientation, int role) {
    return KRearrangeColumnsProxyModel_HeaderData((KRearrangeColumnsProxyModel*)self, section, orientation, role);
}

void k_rearrangecolumnsproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    KRearrangeColumnsProxyModel_OnHeaderData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QVariant* k_rearrangecolumnsproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return KRearrangeColumnsProxyModel_QBaseHeaderData((KRearrangeColumnsProxyModel*)self, section, orientation, role);
}

bool k_rearrangecolumnsproxymodel_has_children(void* self, void* parent) {
    return KRearrangeColumnsProxyModel_HasChildren((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnHasChildren((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_qbase_has_children(void* self, void* parent) {
    return KRearrangeColumnsProxyModel_QBaseHasChildren((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

QModelIndex* k_rearrangecolumnsproxymodel_sibling(void* self, int row, int column, void* idx) {
    return KRearrangeColumnsProxyModel_Sibling((KRearrangeColumnsProxyModel*)self, row, column, (QModelIndex*)idx);
}

void k_rearrangecolumnsproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KRearrangeColumnsProxyModel_OnSibling((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_rearrangecolumnsproxymodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return KRearrangeColumnsProxyModel_QBaseSibling((KRearrangeColumnsProxyModel*)self, row, column, (QModelIndex*)idx);
}

int32_t k_rearrangecolumnsproxymodel_proxy_column_for_source_column(void* self, int sourceColumn) {
    return KRearrangeColumnsProxyModel_ProxyColumnForSourceColumn((KRearrangeColumnsProxyModel*)self, sourceColumn);
}

int32_t k_rearrangecolumnsproxymodel_source_column_for_proxy_column(void* self, int proxyColumn) {
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

bool k_rearrangecolumnsproxymodel_handle_source_layout_changes(void* self) {
    return QIdentityProxyModel_HandleSourceLayoutChanges((QIdentityProxyModel*)self);
}

bool k_rearrangecolumnsproxymodel_handle_source_data_changes(void* self) {
    return QIdentityProxyModel_HandleSourceDataChanges((QIdentityProxyModel*)self);
}

QAbstractItemModel* k_rearrangecolumnsproxymodel_source_model(void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

bool k_rearrangecolumnsproxymodel_has_index(void* self, int row, int column) {
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

bool k_rearrangecolumnsproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_rearrangecolumnsproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_rearrangecolumnsproxymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_rearrangecolumnsproxymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_rearrangecolumnsproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
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

bool k_rearrangecolumnsproxymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_rearrangecolumnsproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_rearrangecolumnsproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_rearrangecolumnsproxymodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_rearrangecolumnsproxymodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_rearrangecolumnsproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_rearrangecolumnsproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_rearrangecolumnsproxymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_rearrangecolumnsproxymodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_rearrangecolumnsproxymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_rearrangecolumnsproxymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_rearrangecolumnsproxymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_rearrangecolumnsproxymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_rearrangecolumnsproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_rearrangecolumnsproxymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_rearrangecolumnsproxymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_rearrangecolumnsproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_rearrangecolumnsproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_rearrangecolumnsproxymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_rearrangecolumnsproxymodel_children(void* self) {
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

QMetaObject__Connection* k_rearrangecolumnsproxymodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_rearrangecolumnsproxymodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_rearrangecolumnsproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_rearrangecolumnsproxymodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_rearrangecolumnsproxymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_rearrangecolumnsproxymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_rearrangecolumnsproxymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_rearrangecolumnsproxymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_rearrangecolumnsproxymodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_rearrangecolumnsproxymodel_dynamic_property_names");
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

QBindingStorage* k_rearrangecolumnsproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_rearrangecolumnsproxymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_rearrangecolumnsproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_rearrangecolumnsproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_rearrangecolumnsproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_rearrangecolumnsproxymodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_rearrangecolumnsproxymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_rearrangecolumnsproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_rearrangecolumnsproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_rearrangecolumnsproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_rearrangecolumnsproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KRearrangeColumnsProxyModel_DropMimeData((KRearrangeColumnsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KRearrangeColumnsProxyModel_QBaseDropMimeData((KRearrangeColumnsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KRearrangeColumnsProxyModel_OnDropMimeData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_rearrangecolumnsproxymodel_map_selection_from_source(void* self, void* selection) {
    return KRearrangeColumnsProxyModel_MapSelectionFromSource((KRearrangeColumnsProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* k_rearrangecolumnsproxymodel_qbase_map_selection_from_source(void* self, void* selection) {
    return KRearrangeColumnsProxyModel_QBaseMapSelectionFromSource((KRearrangeColumnsProxyModel*)self, (QItemSelection*)selection);
}

void k_rearrangecolumnsproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnMapSelectionFromSource((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_rearrangecolumnsproxymodel_map_selection_to_source(void* self, void* selection) {
    return KRearrangeColumnsProxyModel_MapSelectionToSource((KRearrangeColumnsProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* k_rearrangecolumnsproxymodel_qbase_map_selection_to_source(void* self, void* selection) {
    return KRearrangeColumnsProxyModel_QBaseMapSelectionToSource((KRearrangeColumnsProxyModel*)self, (QItemSelection*)selection);
}

void k_rearrangecolumnsproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnMapSelectionToSource((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_rearrangecolumnsproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KRearrangeColumnsProxyModel_Match((KRearrangeColumnsProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_rearrangecolumnsproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KRearrangeColumnsProxyModel_QBaseMatch((KRearrangeColumnsProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_rearrangecolumnsproxymodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    KRearrangeColumnsProxyModel_OnMatch((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_set_source_model(void* self, void* sourceModel) {
    KRearrangeColumnsProxyModel_SetSourceModel((KRearrangeColumnsProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void k_rearrangecolumnsproxymodel_qbase_set_source_model(void* self, void* sourceModel) {
    KRearrangeColumnsProxyModel_QBaseSetSourceModel((KRearrangeColumnsProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void k_rearrangecolumnsproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnSetSourceModel((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_insert_columns(void* self, int column, int count, void* parent) {
    return KRearrangeColumnsProxyModel_InsertColumns((KRearrangeColumnsProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return KRearrangeColumnsProxyModel_QBaseInsertColumns((KRearrangeColumnsProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KRearrangeColumnsProxyModel_OnInsertColumns((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_insert_rows(void* self, int row, int count, void* parent) {
    return KRearrangeColumnsProxyModel_InsertRows((KRearrangeColumnsProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return KRearrangeColumnsProxyModel_QBaseInsertRows((KRearrangeColumnsProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KRearrangeColumnsProxyModel_OnInsertRows((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_remove_columns(void* self, int column, int count, void* parent) {
    return KRearrangeColumnsProxyModel_RemoveColumns((KRearrangeColumnsProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return KRearrangeColumnsProxyModel_QBaseRemoveColumns((KRearrangeColumnsProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KRearrangeColumnsProxyModel_OnRemoveColumns((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_remove_rows(void* self, int row, int count, void* parent) {
    return KRearrangeColumnsProxyModel_RemoveRows((KRearrangeColumnsProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return KRearrangeColumnsProxyModel_QBaseRemoveRows((KRearrangeColumnsProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KRearrangeColumnsProxyModel_OnRemoveRows((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KRearrangeColumnsProxyModel_MoveRows((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_rearrangecolumnsproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KRearrangeColumnsProxyModel_QBaseMoveRows((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_rearrangecolumnsproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KRearrangeColumnsProxyModel_OnMoveRows((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KRearrangeColumnsProxyModel_MoveColumns((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_rearrangecolumnsproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KRearrangeColumnsProxyModel_QBaseMoveColumns((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_rearrangecolumnsproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KRearrangeColumnsProxyModel_OnMoveColumns((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_submit(void* self) {
    return KRearrangeColumnsProxyModel_Submit((KRearrangeColumnsProxyModel*)self);
}

bool k_rearrangecolumnsproxymodel_qbase_submit(void* self) {
    return KRearrangeColumnsProxyModel_QBaseSubmit((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_submit(void* self, bool (*callback)()) {
    KRearrangeColumnsProxyModel_OnSubmit((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_revert(void* self) {
    KRearrangeColumnsProxyModel_Revert((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_qbase_revert(void* self) {
    KRearrangeColumnsProxyModel_QBaseRevert((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_revert(void* self, void (*callback)()) {
    KRearrangeColumnsProxyModel_OnRevert((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QVariant* k_rearrangecolumnsproxymodel_data(void* self, void* proxyIndex, int role) {
    return KRearrangeColumnsProxyModel_Data((KRearrangeColumnsProxyModel*)self, (QModelIndex*)proxyIndex, role);
}

QVariant* k_rearrangecolumnsproxymodel_qbase_data(void* self, void* proxyIndex, int role) {
    return KRearrangeColumnsProxyModel_QBaseData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)proxyIndex, role);
}

void k_rearrangecolumnsproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    KRearrangeColumnsProxyModel_OnData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_rearrangecolumnsproxymodel_item_data(void* self, void* index) {
    return KRearrangeColumnsProxyModel_ItemData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

libqt_map /* of int to QVariant* */ k_rearrangecolumnsproxymodel_qbase_item_data(void* self, void* index) {
    return KRearrangeColumnsProxyModel_QBaseItemData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_rearrangecolumnsproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnItemData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_rearrangecolumnsproxymodel_flags(void* self, void* index) {
    return KRearrangeColumnsProxyModel_Flags((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

int32_t k_rearrangecolumnsproxymodel_qbase_flags(void* self, void* index) {
    return KRearrangeColumnsProxyModel_QBaseFlags((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_rearrangecolumnsproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnFlags((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_set_data(void* self, void* index, void* value, int role) {
    return KRearrangeColumnsProxyModel_SetData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_rearrangecolumnsproxymodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return KRearrangeColumnsProxyModel_QBaseSetData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_rearrangecolumnsproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    KRearrangeColumnsProxyModel_OnSetData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return KRearrangeColumnsProxyModel_SetItemData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index, roles);
}

bool k_rearrangecolumnsproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return KRearrangeColumnsProxyModel_QBaseSetItemData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index, roles);
}

void k_rearrangecolumnsproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    KRearrangeColumnsProxyModel_OnSetItemData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KRearrangeColumnsProxyModel_SetHeaderData((KRearrangeColumnsProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_rearrangecolumnsproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KRearrangeColumnsProxyModel_QBaseSetHeaderData((KRearrangeColumnsProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void k_rearrangecolumnsproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    KRearrangeColumnsProxyModel_OnSetHeaderData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_clear_item_data(void* self, void* index) {
    return KRearrangeColumnsProxyModel_ClearItemData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

bool k_rearrangecolumnsproxymodel_qbase_clear_item_data(void* self, void* index) {
    return KRearrangeColumnsProxyModel_QBaseClearItemData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_rearrangecolumnsproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnClearItemData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_rearrangecolumnsproxymodel_buddy(void* self, void* index) {
    return KRearrangeColumnsProxyModel_Buddy((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* k_rearrangecolumnsproxymodel_qbase_buddy(void* self, void* index) {
    return KRearrangeColumnsProxyModel_QBaseBuddy((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_rearrangecolumnsproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnBuddy((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_can_fetch_more(void* self, void* parent) {
    return KRearrangeColumnsProxyModel_CanFetchMore((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_qbase_can_fetch_more(void* self, void* parent) {
    return KRearrangeColumnsProxyModel_QBaseCanFetchMore((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnCanFetchMore((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_fetch_more(void* self, void* parent) {
    KRearrangeColumnsProxyModel_FetchMore((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_qbase_fetch_more(void* self, void* parent) {
    KRearrangeColumnsProxyModel_QBaseFetchMore((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnFetchMore((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_sort(void* self, int column, int32_t order) {
    KRearrangeColumnsProxyModel_Sort((KRearrangeColumnsProxyModel*)self, column, order);
}

void k_rearrangecolumnsproxymodel_qbase_sort(void* self, int column, int32_t order) {
    KRearrangeColumnsProxyModel_QBaseSort((KRearrangeColumnsProxyModel*)self, column, order);
}

void k_rearrangecolumnsproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KRearrangeColumnsProxyModel_OnSort((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QSize* k_rearrangecolumnsproxymodel_span(void* self, void* index) {
    return KRearrangeColumnsProxyModel_Span((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

QSize* k_rearrangecolumnsproxymodel_qbase_span(void* self, void* index) {
    return KRearrangeColumnsProxyModel_QBaseSpan((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_rearrangecolumnsproxymodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnSpan((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QMimeData* k_rearrangecolumnsproxymodel_mime_data(void* self, libqt_list indexes) {
    return KRearrangeColumnsProxyModel_MimeData((KRearrangeColumnsProxyModel*)self, indexes);
}

QMimeData* k_rearrangecolumnsproxymodel_qbase_mime_data(void* self, libqt_list indexes) {
    return KRearrangeColumnsProxyModel_QBaseMimeData((KRearrangeColumnsProxyModel*)self, indexes);
}

void k_rearrangecolumnsproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    KRearrangeColumnsProxyModel_OnMimeData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KRearrangeColumnsProxyModel_CanDropMimeData((KRearrangeColumnsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_rearrangecolumnsproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KRearrangeColumnsProxyModel_QBaseCanDropMimeData((KRearrangeColumnsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_rearrangecolumnsproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KRearrangeColumnsProxyModel_OnCanDropMimeData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

const char** k_rearrangecolumnsproxymodel_mime_types(void* self) {
    libqt_list _arr = KRearrangeColumnsProxyModel_MimeTypes((KRearrangeColumnsProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_rearrangecolumnsproxymodel_mime_types");
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

const char** k_rearrangecolumnsproxymodel_qbase_mime_types(void* self) {
    libqt_list _arr = KRearrangeColumnsProxyModel_QBaseMimeTypes((KRearrangeColumnsProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_rearrangecolumnsproxymodel_mime_types");
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

void k_rearrangecolumnsproxymodel_on_mime_types(void* self, const char** (*callback)()) {
    KRearrangeColumnsProxyModel_OnMimeTypes((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_rearrangecolumnsproxymodel_supported_drag_actions(void* self) {
    return KRearrangeColumnsProxyModel_SupportedDragActions((KRearrangeColumnsProxyModel*)self);
}

int32_t k_rearrangecolumnsproxymodel_qbase_supported_drag_actions(void* self) {
    return KRearrangeColumnsProxyModel_QBaseSupportedDragActions((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    KRearrangeColumnsProxyModel_OnSupportedDragActions((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_rearrangecolumnsproxymodel_supported_drop_actions(void* self) {
    return KRearrangeColumnsProxyModel_SupportedDropActions((KRearrangeColumnsProxyModel*)self);
}

int32_t k_rearrangecolumnsproxymodel_qbase_supported_drop_actions(void* self) {
    return KRearrangeColumnsProxyModel_QBaseSupportedDropActions((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KRearrangeColumnsProxyModel_OnSupportedDropActions((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_rearrangecolumnsproxymodel_role_names(void* self) {
    return KRearrangeColumnsProxyModel_RoleNames((KRearrangeColumnsProxyModel*)self);
}

libqt_map /* of int to char* */ k_rearrangecolumnsproxymodel_qbase_role_names(void* self) {
    return KRearrangeColumnsProxyModel_QBaseRoleNames((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    KRearrangeColumnsProxyModel_OnRoleNames((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    KRearrangeColumnsProxyModel_MultiData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_rearrangecolumnsproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    KRearrangeColumnsProxyModel_QBaseMultiData((KRearrangeColumnsProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_rearrangecolumnsproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    KRearrangeColumnsProxyModel_OnMultiData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_reset_internal_data(void* self) {
    KRearrangeColumnsProxyModel_ResetInternalData((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_qbase_reset_internal_data(void* self) {
    KRearrangeColumnsProxyModel_QBaseResetInternalData((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_reset_internal_data(void* self, void (*callback)()) {
    KRearrangeColumnsProxyModel_OnResetInternalData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_event(void* self, void* event) {
    return KRearrangeColumnsProxyModel_Event((KRearrangeColumnsProxyModel*)self, (QEvent*)event);
}

bool k_rearrangecolumnsproxymodel_qbase_event(void* self, void* event) {
    return KRearrangeColumnsProxyModel_QBaseEvent((KRearrangeColumnsProxyModel*)self, (QEvent*)event);
}

void k_rearrangecolumnsproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnEvent((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_event_filter(void* self, void* watched, void* event) {
    return KRearrangeColumnsProxyModel_EventFilter((KRearrangeColumnsProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_rearrangecolumnsproxymodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KRearrangeColumnsProxyModel_QBaseEventFilter((KRearrangeColumnsProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_rearrangecolumnsproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KRearrangeColumnsProxyModel_OnEventFilter((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_timer_event(void* self, void* event) {
    KRearrangeColumnsProxyModel_TimerEvent((KRearrangeColumnsProxyModel*)self, (QTimerEvent*)event);
}

void k_rearrangecolumnsproxymodel_qbase_timer_event(void* self, void* event) {
    KRearrangeColumnsProxyModel_QBaseTimerEvent((KRearrangeColumnsProxyModel*)self, (QTimerEvent*)event);
}

void k_rearrangecolumnsproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnTimerEvent((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_child_event(void* self, void* event) {
    KRearrangeColumnsProxyModel_ChildEvent((KRearrangeColumnsProxyModel*)self, (QChildEvent*)event);
}

void k_rearrangecolumnsproxymodel_qbase_child_event(void* self, void* event) {
    KRearrangeColumnsProxyModel_QBaseChildEvent((KRearrangeColumnsProxyModel*)self, (QChildEvent*)event);
}

void k_rearrangecolumnsproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnChildEvent((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_custom_event(void* self, void* event) {
    KRearrangeColumnsProxyModel_CustomEvent((KRearrangeColumnsProxyModel*)self, (QEvent*)event);
}

void k_rearrangecolumnsproxymodel_qbase_custom_event(void* self, void* event) {
    KRearrangeColumnsProxyModel_QBaseCustomEvent((KRearrangeColumnsProxyModel*)self, (QEvent*)event);
}

void k_rearrangecolumnsproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnCustomEvent((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_connect_notify(void* self, void* signal) {
    KRearrangeColumnsProxyModel_ConnectNotify((KRearrangeColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_rearrangecolumnsproxymodel_qbase_connect_notify(void* self, void* signal) {
    KRearrangeColumnsProxyModel_QBaseConnectNotify((KRearrangeColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_rearrangecolumnsproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnConnectNotify((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_disconnect_notify(void* self, void* signal) {
    KRearrangeColumnsProxyModel_DisconnectNotify((KRearrangeColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_rearrangecolumnsproxymodel_qbase_disconnect_notify(void* self, void* signal) {
    KRearrangeColumnsProxyModel_QBaseDisconnectNotify((KRearrangeColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_rearrangecolumnsproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnDisconnectNotify((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_set_handle_source_layout_changes(void* self, bool handleSourceLayoutChanges) {
    KRearrangeColumnsProxyModel_SetHandleSourceLayoutChanges((KRearrangeColumnsProxyModel*)self, handleSourceLayoutChanges);
}

void k_rearrangecolumnsproxymodel_qbase_set_handle_source_layout_changes(void* self, bool handleSourceLayoutChanges) {
    KRearrangeColumnsProxyModel_QBaseSetHandleSourceLayoutChanges((KRearrangeColumnsProxyModel*)self, handleSourceLayoutChanges);
}

void k_rearrangecolumnsproxymodel_on_set_handle_source_layout_changes(void* self, void (*callback)(void*, bool)) {
    KRearrangeColumnsProxyModel_OnSetHandleSourceLayoutChanges((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_set_handle_source_data_changes(void* self, bool handleSourceDataChanges) {
    KRearrangeColumnsProxyModel_SetHandleSourceDataChanges((KRearrangeColumnsProxyModel*)self, handleSourceDataChanges);
}

void k_rearrangecolumnsproxymodel_qbase_set_handle_source_data_changes(void* self, bool handleSourceDataChanges) {
    KRearrangeColumnsProxyModel_QBaseSetHandleSourceDataChanges((KRearrangeColumnsProxyModel*)self, handleSourceDataChanges);
}

void k_rearrangecolumnsproxymodel_on_set_handle_source_data_changes(void* self, void (*callback)(void*, bool)) {
    KRearrangeColumnsProxyModel_OnSetHandleSourceDataChanges((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_rearrangecolumnsproxymodel_create_source_index(void* self, int row, int col, void* internalPtr) {
    return KRearrangeColumnsProxyModel_CreateSourceIndex((KRearrangeColumnsProxyModel*)self, row, col, internalPtr);
}

QModelIndex* k_rearrangecolumnsproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr) {
    return KRearrangeColumnsProxyModel_QBaseCreateSourceIndex((KRearrangeColumnsProxyModel*)self, row, col, internalPtr);
}

void k_rearrangecolumnsproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KRearrangeColumnsProxyModel_OnCreateSourceIndex((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_rearrangecolumnsproxymodel_create_index(void* self, int row, int column) {
    return KRearrangeColumnsProxyModel_CreateIndex((KRearrangeColumnsProxyModel*)self, row, column);
}

QModelIndex* k_rearrangecolumnsproxymodel_qbase_create_index(void* self, int row, int column) {
    return KRearrangeColumnsProxyModel_QBaseCreateIndex((KRearrangeColumnsProxyModel*)self, row, column);
}

void k_rearrangecolumnsproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    KRearrangeColumnsProxyModel_OnCreateIndex((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_encode_data(void* self, libqt_list indexes, void* stream) {
    KRearrangeColumnsProxyModel_EncodeData((KRearrangeColumnsProxyModel*)self, indexes, (QDataStream*)stream);
}

void k_rearrangecolumnsproxymodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    KRearrangeColumnsProxyModel_QBaseEncodeData((KRearrangeColumnsProxyModel*)self, indexes, (QDataStream*)stream);
}

void k_rearrangecolumnsproxymodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    KRearrangeColumnsProxyModel_OnEncodeData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KRearrangeColumnsProxyModel_DecodeData((KRearrangeColumnsProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_rearrangecolumnsproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KRearrangeColumnsProxyModel_QBaseDecodeData((KRearrangeColumnsProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_rearrangecolumnsproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    KRearrangeColumnsProxyModel_OnDecodeData((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    KRearrangeColumnsProxyModel_BeginInsertRows((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_rearrangecolumnsproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    KRearrangeColumnsProxyModel_QBaseBeginInsertRows((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_rearrangecolumnsproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KRearrangeColumnsProxyModel_OnBeginInsertRows((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_end_insert_rows(void* self) {
    KRearrangeColumnsProxyModel_EndInsertRows((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_qbase_end_insert_rows(void* self) {
    KRearrangeColumnsProxyModel_QBaseEndInsertRows((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_end_insert_rows(void* self, void (*callback)()) {
    KRearrangeColumnsProxyModel_OnEndInsertRows((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    KRearrangeColumnsProxyModel_BeginRemoveRows((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_rearrangecolumnsproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    KRearrangeColumnsProxyModel_QBaseBeginRemoveRows((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_rearrangecolumnsproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KRearrangeColumnsProxyModel_OnBeginRemoveRows((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_end_remove_rows(void* self) {
    KRearrangeColumnsProxyModel_EndRemoveRows((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_qbase_end_remove_rows(void* self) {
    KRearrangeColumnsProxyModel_QBaseEndRemoveRows((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_end_remove_rows(void* self, void (*callback)()) {
    KRearrangeColumnsProxyModel_OnEndRemoveRows((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KRearrangeColumnsProxyModel_BeginMoveRows((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_rearrangecolumnsproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KRearrangeColumnsProxyModel_QBaseBeginMoveRows((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_rearrangecolumnsproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KRearrangeColumnsProxyModel_OnBeginMoveRows((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_end_move_rows(void* self) {
    KRearrangeColumnsProxyModel_EndMoveRows((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_qbase_end_move_rows(void* self) {
    KRearrangeColumnsProxyModel_QBaseEndMoveRows((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_end_move_rows(void* self, void (*callback)()) {
    KRearrangeColumnsProxyModel_OnEndMoveRows((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    KRearrangeColumnsProxyModel_BeginInsertColumns((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_rearrangecolumnsproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    KRearrangeColumnsProxyModel_QBaseBeginInsertColumns((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_rearrangecolumnsproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KRearrangeColumnsProxyModel_OnBeginInsertColumns((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_end_insert_columns(void* self) {
    KRearrangeColumnsProxyModel_EndInsertColumns((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_qbase_end_insert_columns(void* self) {
    KRearrangeColumnsProxyModel_QBaseEndInsertColumns((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_end_insert_columns(void* self, void (*callback)()) {
    KRearrangeColumnsProxyModel_OnEndInsertColumns((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    KRearrangeColumnsProxyModel_BeginRemoveColumns((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_rearrangecolumnsproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    KRearrangeColumnsProxyModel_QBaseBeginRemoveColumns((KRearrangeColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_rearrangecolumnsproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KRearrangeColumnsProxyModel_OnBeginRemoveColumns((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_end_remove_columns(void* self) {
    KRearrangeColumnsProxyModel_EndRemoveColumns((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_qbase_end_remove_columns(void* self) {
    KRearrangeColumnsProxyModel_QBaseEndRemoveColumns((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_end_remove_columns(void* self, void (*callback)()) {
    KRearrangeColumnsProxyModel_OnEndRemoveColumns((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KRearrangeColumnsProxyModel_BeginMoveColumns((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_rearrangecolumnsproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KRearrangeColumnsProxyModel_QBaseBeginMoveColumns((KRearrangeColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_rearrangecolumnsproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KRearrangeColumnsProxyModel_OnBeginMoveColumns((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_end_move_columns(void* self) {
    KRearrangeColumnsProxyModel_EndMoveColumns((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_qbase_end_move_columns(void* self) {
    KRearrangeColumnsProxyModel_QBaseEndMoveColumns((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_end_move_columns(void* self, void (*callback)()) {
    KRearrangeColumnsProxyModel_OnEndMoveColumns((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_begin_reset_model(void* self) {
    KRearrangeColumnsProxyModel_BeginResetModel((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_qbase_begin_reset_model(void* self) {
    KRearrangeColumnsProxyModel_QBaseBeginResetModel((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_begin_reset_model(void* self, void (*callback)()) {
    KRearrangeColumnsProxyModel_OnBeginResetModel((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_end_reset_model(void* self) {
    KRearrangeColumnsProxyModel_EndResetModel((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_qbase_end_reset_model(void* self) {
    KRearrangeColumnsProxyModel_QBaseEndResetModel((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_end_reset_model(void* self, void (*callback)()) {
    KRearrangeColumnsProxyModel_OnEndResetModel((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_change_persistent_index(void* self, void* from, void* to) {
    KRearrangeColumnsProxyModel_ChangePersistentIndex((KRearrangeColumnsProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_rearrangecolumnsproxymodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    KRearrangeColumnsProxyModel_QBaseChangePersistentIndex((KRearrangeColumnsProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_rearrangecolumnsproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    KRearrangeColumnsProxyModel_OnChangePersistentIndex((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KRearrangeColumnsProxyModel_ChangePersistentIndexList((KRearrangeColumnsProxyModel*)self, from, to);
}

void k_rearrangecolumnsproxymodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KRearrangeColumnsProxyModel_QBaseChangePersistentIndexList((KRearrangeColumnsProxyModel*)self, from, to);
}

void k_rearrangecolumnsproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    KRearrangeColumnsProxyModel_OnChangePersistentIndexList((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_rearrangecolumnsproxymodel_persistent_index_list(void* self) {
    libqt_list _arr = KRearrangeColumnsProxyModel_PersistentIndexList((KRearrangeColumnsProxyModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_rearrangecolumnsproxymodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = KRearrangeColumnsProxyModel_QBasePersistentIndexList((KRearrangeColumnsProxyModel*)self);
    return _arr;
}

void k_rearrangecolumnsproxymodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    KRearrangeColumnsProxyModel_OnPersistentIndexList((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

QObject* k_rearrangecolumnsproxymodel_sender(void* self) {
    return KRearrangeColumnsProxyModel_Sender((KRearrangeColumnsProxyModel*)self);
}

QObject* k_rearrangecolumnsproxymodel_qbase_sender(void* self) {
    return KRearrangeColumnsProxyModel_QBaseSender((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_sender(void* self, QObject* (*callback)()) {
    KRearrangeColumnsProxyModel_OnSender((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_rearrangecolumnsproxymodel_sender_signal_index(void* self) {
    return KRearrangeColumnsProxyModel_SenderSignalIndex((KRearrangeColumnsProxyModel*)self);
}

int32_t k_rearrangecolumnsproxymodel_qbase_sender_signal_index(void* self) {
    return KRearrangeColumnsProxyModel_QBaseSenderSignalIndex((KRearrangeColumnsProxyModel*)self);
}

void k_rearrangecolumnsproxymodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KRearrangeColumnsProxyModel_OnSenderSignalIndex((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_rearrangecolumnsproxymodel_receivers(void* self, const char* signal) {
    return KRearrangeColumnsProxyModel_Receivers((KRearrangeColumnsProxyModel*)self, signal);
}

int32_t k_rearrangecolumnsproxymodel_qbase_receivers(void* self, const char* signal) {
    return KRearrangeColumnsProxyModel_QBaseReceivers((KRearrangeColumnsProxyModel*)self, signal);
}

void k_rearrangecolumnsproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KRearrangeColumnsProxyModel_OnReceivers((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_rearrangecolumnsproxymodel_is_signal_connected(void* self, void* signal) {
    return KRearrangeColumnsProxyModel_IsSignalConnected((KRearrangeColumnsProxyModel*)self, (QMetaMethod*)signal);
}

bool k_rearrangecolumnsproxymodel_qbase_is_signal_connected(void* self, void* signal) {
    return KRearrangeColumnsProxyModel_QBaseIsSignalConnected((KRearrangeColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_rearrangecolumnsproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KRearrangeColumnsProxyModel_OnIsSignalConnected((KRearrangeColumnsProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_Connect_SourceModelChanged((QAbstractProxyModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_rearrangecolumnsproxymodel_delete(void* self) {
    KRearrangeColumnsProxyModel_Delete((KRearrangeColumnsProxyModel*)(self));
}
