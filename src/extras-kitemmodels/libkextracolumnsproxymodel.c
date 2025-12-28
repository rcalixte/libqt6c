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
#include "libkextracolumnsproxymodel.hpp"
#include "libkextracolumnsproxymodel.h"

KExtraColumnsProxyModel* k_extracolumnsproxymodel_new() {
    return KExtraColumnsProxyModel_new();
}

KExtraColumnsProxyModel* k_extracolumnsproxymodel_new2(void* parent) {
    return KExtraColumnsProxyModel_new2((QObject*)parent);
}

const QMetaObject* k_extracolumnsproxymodel_meta_object(void* self) {
    return KExtraColumnsProxyModel_MetaObject((KExtraColumnsProxyModel*)self);
}

void* k_extracolumnsproxymodel_metacast(void* self, const char* param1) {
    return KExtraColumnsProxyModel_Metacast((KExtraColumnsProxyModel*)self, param1);
}

int32_t k_extracolumnsproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KExtraColumnsProxyModel_Metacall((KExtraColumnsProxyModel*)self, param1, param2, param3);
}

void k_extracolumnsproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KExtraColumnsProxyModel_OnMetacall((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_extracolumnsproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KExtraColumnsProxyModel_QBaseMetacall((KExtraColumnsProxyModel*)self, param1, param2, param3);
}

const char* k_extracolumnsproxymodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_extracolumnsproxymodel_append_column(void* self) {
    KExtraColumnsProxyModel_AppendColumn((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_remove_extra_column(void* self, int idx) {
    KExtraColumnsProxyModel_RemoveExtraColumn((KExtraColumnsProxyModel*)self, idx);
}

QVariant* k_extracolumnsproxymodel_extra_column_data(void* self, void* parent, int row, int extraColumn, int role) {
    return KExtraColumnsProxyModel_ExtraColumnData((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, row, extraColumn, role);
}

void k_extracolumnsproxymodel_on_extra_column_data(void* self, QVariant* (*callback)(void*, void*, int, int, int)) {
    KExtraColumnsProxyModel_OnExtraColumnData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QVariant* k_extracolumnsproxymodel_qbase_extra_column_data(void* self, void* parent, int row, int extraColumn, int role) {
    return KExtraColumnsProxyModel_QBaseExtraColumnData((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, row, extraColumn, role);
}

bool k_extracolumnsproxymodel_set_extra_column_data(void* self, void* parent, int row, int extraColumn, void* data, int role) {
    return KExtraColumnsProxyModel_SetExtraColumnData((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, row, extraColumn, (QVariant*)data, role);
}

void k_extracolumnsproxymodel_on_set_extra_column_data(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KExtraColumnsProxyModel_OnSetExtraColumnData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_qbase_set_extra_column_data(void* self, void* parent, int row, int extraColumn, void* data, int role) {
    return KExtraColumnsProxyModel_QBaseSetExtraColumnData((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, row, extraColumn, (QVariant*)data, role);
}

void k_extracolumnsproxymodel_extra_column_data_changed(void* self, void* parent, int row, int extraColumn, libqt_list roles) {
    KExtraColumnsProxyModel_ExtraColumnDataChanged((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, row, extraColumn, roles);
}

int32_t k_extracolumnsproxymodel_extra_column_for_proxy_column(void* self, int proxyColumn) {
    return KExtraColumnsProxyModel_ExtraColumnForProxyColumn((KExtraColumnsProxyModel*)self, proxyColumn);
}

int32_t k_extracolumnsproxymodel_proxy_column_for_extra_column(void* self, int extraColumn) {
    return KExtraColumnsProxyModel_ProxyColumnForExtraColumn((KExtraColumnsProxyModel*)self, extraColumn);
}

void k_extracolumnsproxymodel_set_source_model(void* self, void* model) {
    KExtraColumnsProxyModel_SetSourceModel((KExtraColumnsProxyModel*)self, (QAbstractItemModel*)model);
}

void k_extracolumnsproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnSetSourceModel((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_qbase_set_source_model(void* self, void* model) {
    KExtraColumnsProxyModel_QBaseSetSourceModel((KExtraColumnsProxyModel*)self, (QAbstractItemModel*)model);
}

QModelIndex* k_extracolumnsproxymodel_map_to_source(void* self, void* proxyIndex) {
    return KExtraColumnsProxyModel_MapToSource((KExtraColumnsProxyModel*)self, (QModelIndex*)proxyIndex);
}

void k_extracolumnsproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnMapToSource((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_extracolumnsproxymodel_qbase_map_to_source(void* self, void* proxyIndex) {
    return KExtraColumnsProxyModel_QBaseMapToSource((KExtraColumnsProxyModel*)self, (QModelIndex*)proxyIndex);
}

QItemSelection* k_extracolumnsproxymodel_map_selection_to_source(void* self, void* selection) {
    return KExtraColumnsProxyModel_MapSelectionToSource((KExtraColumnsProxyModel*)self, (QItemSelection*)selection);
}

void k_extracolumnsproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnMapSelectionToSource((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_extracolumnsproxymodel_qbase_map_selection_to_source(void* self, void* selection) {
    return KExtraColumnsProxyModel_QBaseMapSelectionToSource((KExtraColumnsProxyModel*)self, (QItemSelection*)selection);
}

int32_t k_extracolumnsproxymodel_column_count(void* self, void* parent) {
    return KExtraColumnsProxyModel_ColumnCount((KExtraColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnColumnCount((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_extracolumnsproxymodel_qbase_column_count(void* self, void* parent) {
    return KExtraColumnsProxyModel_QBaseColumnCount((KExtraColumnsProxyModel*)self, (QModelIndex*)parent);
}

QVariant* k_extracolumnsproxymodel_data(void* self, void* index, int role) {
    return KExtraColumnsProxyModel_Data((KExtraColumnsProxyModel*)self, (QModelIndex*)index, role);
}

void k_extracolumnsproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    KExtraColumnsProxyModel_OnData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QVariant* k_extracolumnsproxymodel_qbase_data(void* self, void* index, int role) {
    return KExtraColumnsProxyModel_QBaseData((KExtraColumnsProxyModel*)self, (QModelIndex*)index, role);
}

bool k_extracolumnsproxymodel_set_data(void* self, void* index, void* value, int role) {
    return KExtraColumnsProxyModel_SetData((KExtraColumnsProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_extracolumnsproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    KExtraColumnsProxyModel_OnSetData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return KExtraColumnsProxyModel_QBaseSetData((KExtraColumnsProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

QModelIndex* k_extracolumnsproxymodel_sibling(void* self, int row, int column, void* idx) {
    return KExtraColumnsProxyModel_Sibling((KExtraColumnsProxyModel*)self, row, column, (QModelIndex*)idx);
}

void k_extracolumnsproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KExtraColumnsProxyModel_OnSibling((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_extracolumnsproxymodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return KExtraColumnsProxyModel_QBaseSibling((KExtraColumnsProxyModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_extracolumnsproxymodel_buddy(void* self, void* index) {
    return KExtraColumnsProxyModel_Buddy((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_extracolumnsproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnBuddy((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_extracolumnsproxymodel_qbase_buddy(void* self, void* index) {
    return KExtraColumnsProxyModel_QBaseBuddy((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

int32_t k_extracolumnsproxymodel_flags(void* self, void* index) {
    return KExtraColumnsProxyModel_Flags((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_extracolumnsproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnFlags((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_extracolumnsproxymodel_qbase_flags(void* self, void* index) {
    return KExtraColumnsProxyModel_QBaseFlags((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

bool k_extracolumnsproxymodel_has_children(void* self, void* index) {
    return KExtraColumnsProxyModel_HasChildren((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_extracolumnsproxymodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnHasChildren((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_qbase_has_children(void* self, void* index) {
    return KExtraColumnsProxyModel_QBaseHasChildren((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

QVariant* k_extracolumnsproxymodel_header_data(void* self, int section, int32_t orientation, int role) {
    return KExtraColumnsProxyModel_HeaderData((KExtraColumnsProxyModel*)self, section, orientation, role);
}

void k_extracolumnsproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    KExtraColumnsProxyModel_OnHeaderData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QVariant* k_extracolumnsproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return KExtraColumnsProxyModel_QBaseHeaderData((KExtraColumnsProxyModel*)self, section, orientation, role);
}

QModelIndex* k_extracolumnsproxymodel_index(void* self, int row, int column, void* parent) {
    return KExtraColumnsProxyModel_Index((KExtraColumnsProxyModel*)self, row, column, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KExtraColumnsProxyModel_OnIndex((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_extracolumnsproxymodel_qbase_index(void* self, int row, int column, void* parent) {
    return KExtraColumnsProxyModel_QBaseIndex((KExtraColumnsProxyModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_extracolumnsproxymodel_parent(void* self, void* child) {
    return KExtraColumnsProxyModel_Parent((KExtraColumnsProxyModel*)self, (QModelIndex*)child);
}

void k_extracolumnsproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnParent((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_extracolumnsproxymodel_qbase_parent(void* self, void* child) {
    return KExtraColumnsProxyModel_QBaseParent((KExtraColumnsProxyModel*)self, (QModelIndex*)child);
}

const char* k_extracolumnsproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_extracolumnsproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_extracolumnsproxymodel_append_column1(void* self, const char* header) {
    KExtraColumnsProxyModel_AppendColumn1((KExtraColumnsProxyModel*)self, qstring(header));
}

bool k_extracolumnsproxymodel_handle_source_layout_changes(void* self) {
    return QIdentityProxyModel_HandleSourceLayoutChanges((QIdentityProxyModel*)self);
}

bool k_extracolumnsproxymodel_handle_source_data_changes(void* self) {
    return QIdentityProxyModel_HandleSourceDataChanges((QIdentityProxyModel*)self);
}

QAbstractItemModel* k_extracolumnsproxymodel_source_model(void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

bool k_extracolumnsproxymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool k_extracolumnsproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_extracolumnsproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_extracolumnsproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_extracolumnsproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_extracolumnsproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_extracolumnsproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_extracolumnsproxymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_extracolumnsproxymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_extracolumnsproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_extracolumnsproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_extracolumnsproxymodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_extracolumnsproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_extracolumnsproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_extracolumnsproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_extracolumnsproxymodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_extracolumnsproxymodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_extracolumnsproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_extracolumnsproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_extracolumnsproxymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_extracolumnsproxymodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_extracolumnsproxymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_extracolumnsproxymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_extracolumnsproxymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_extracolumnsproxymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_extracolumnsproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_extracolumnsproxymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_extracolumnsproxymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_extracolumnsproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_extracolumnsproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_extracolumnsproxymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_extracolumnsproxymodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_extracolumnsproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_extracolumnsproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_extracolumnsproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_extracolumnsproxymodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_extracolumnsproxymodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_extracolumnsproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_extracolumnsproxymodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_extracolumnsproxymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_extracolumnsproxymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_extracolumnsproxymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_extracolumnsproxymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_extracolumnsproxymodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_extracolumnsproxymodel_dynamic_property_names");
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

QBindingStorage* k_extracolumnsproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_extracolumnsproxymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_extracolumnsproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_extracolumnsproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_extracolumnsproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_extracolumnsproxymodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_extracolumnsproxymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_extracolumnsproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_extracolumnsproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_extracolumnsproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_extracolumnsproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* k_extracolumnsproxymodel_map_from_source(void* self, void* sourceIndex) {
    return KExtraColumnsProxyModel_MapFromSource((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceIndex);
}

QModelIndex* k_extracolumnsproxymodel_qbase_map_from_source(void* self, void* sourceIndex) {
    return KExtraColumnsProxyModel_QBaseMapFromSource((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_extracolumnsproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnMapFromSource((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_extracolumnsproxymodel_row_count(void* self, void* parent) {
    return KExtraColumnsProxyModel_RowCount((KExtraColumnsProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_extracolumnsproxymodel_qbase_row_count(void* self, void* parent) {
    return KExtraColumnsProxyModel_QBaseRowCount((KExtraColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnRowCount((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KExtraColumnsProxyModel_DropMimeData((KExtraColumnsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KExtraColumnsProxyModel_QBaseDropMimeData((KExtraColumnsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KExtraColumnsProxyModel_OnDropMimeData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_extracolumnsproxymodel_map_selection_from_source(void* self, void* selection) {
    return KExtraColumnsProxyModel_MapSelectionFromSource((KExtraColumnsProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* k_extracolumnsproxymodel_qbase_map_selection_from_source(void* self, void* selection) {
    return KExtraColumnsProxyModel_QBaseMapSelectionFromSource((KExtraColumnsProxyModel*)self, (QItemSelection*)selection);
}

void k_extracolumnsproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnMapSelectionFromSource((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_extracolumnsproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KExtraColumnsProxyModel_Match((KExtraColumnsProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_extracolumnsproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KExtraColumnsProxyModel_QBaseMatch((KExtraColumnsProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_extracolumnsproxymodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    KExtraColumnsProxyModel_OnMatch((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_insert_columns(void* self, int column, int count, void* parent) {
    return KExtraColumnsProxyModel_InsertColumns((KExtraColumnsProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return KExtraColumnsProxyModel_QBaseInsertColumns((KExtraColumnsProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KExtraColumnsProxyModel_OnInsertColumns((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_insert_rows(void* self, int row, int count, void* parent) {
    return KExtraColumnsProxyModel_InsertRows((KExtraColumnsProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return KExtraColumnsProxyModel_QBaseInsertRows((KExtraColumnsProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KExtraColumnsProxyModel_OnInsertRows((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_remove_columns(void* self, int column, int count, void* parent) {
    return KExtraColumnsProxyModel_RemoveColumns((KExtraColumnsProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return KExtraColumnsProxyModel_QBaseRemoveColumns((KExtraColumnsProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KExtraColumnsProxyModel_OnRemoveColumns((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_remove_rows(void* self, int row, int count, void* parent) {
    return KExtraColumnsProxyModel_RemoveRows((KExtraColumnsProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return KExtraColumnsProxyModel_QBaseRemoveRows((KExtraColumnsProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KExtraColumnsProxyModel_OnRemoveRows((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KExtraColumnsProxyModel_MoveRows((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_extracolumnsproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KExtraColumnsProxyModel_QBaseMoveRows((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_extracolumnsproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KExtraColumnsProxyModel_OnMoveRows((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KExtraColumnsProxyModel_MoveColumns((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_extracolumnsproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KExtraColumnsProxyModel_QBaseMoveColumns((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_extracolumnsproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KExtraColumnsProxyModel_OnMoveColumns((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_submit(void* self) {
    return KExtraColumnsProxyModel_Submit((KExtraColumnsProxyModel*)self);
}

bool k_extracolumnsproxymodel_qbase_submit(void* self) {
    return KExtraColumnsProxyModel_QBaseSubmit((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_submit(void* self, bool (*callback)()) {
    KExtraColumnsProxyModel_OnSubmit((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_revert(void* self) {
    KExtraColumnsProxyModel_Revert((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_qbase_revert(void* self) {
    KExtraColumnsProxyModel_QBaseRevert((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_revert(void* self, void (*callback)()) {
    KExtraColumnsProxyModel_OnRevert((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_extracolumnsproxymodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KExtraColumnsProxyModel_ItemData((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_extracolumnsproxymodel_qbase_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KExtraColumnsProxyModel_QBaseItemData((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_extracolumnsproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnItemData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    roles_ret.values = malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
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
    bool _out = KExtraColumnsProxyModel_SetItemData((KExtraColumnsProxyModel*)self, (QModelIndex*)index, roles_ret);
    libqt_free(roles_ret.keys);
    libqt_free(roles_ret.values);
    return _out;
}

bool k_extracolumnsproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    roles_ret.values = malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
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
    bool _out = KExtraColumnsProxyModel_QBaseSetItemData((KExtraColumnsProxyModel*)self, (QModelIndex*)index, roles_ret);
    libqt_free(roles_ret.keys);
    libqt_free(roles_ret.values);
    return _out;
}

void k_extracolumnsproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    KExtraColumnsProxyModel_OnSetItemData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KExtraColumnsProxyModel_SetHeaderData((KExtraColumnsProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_extracolumnsproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KExtraColumnsProxyModel_QBaseSetHeaderData((KExtraColumnsProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void k_extracolumnsproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    KExtraColumnsProxyModel_OnSetHeaderData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_clear_item_data(void* self, void* index) {
    return KExtraColumnsProxyModel_ClearItemData((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

bool k_extracolumnsproxymodel_qbase_clear_item_data(void* self, void* index) {
    return KExtraColumnsProxyModel_QBaseClearItemData((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_extracolumnsproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnClearItemData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_can_fetch_more(void* self, void* parent) {
    return KExtraColumnsProxyModel_CanFetchMore((KExtraColumnsProxyModel*)self, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_qbase_can_fetch_more(void* self, void* parent) {
    return KExtraColumnsProxyModel_QBaseCanFetchMore((KExtraColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnCanFetchMore((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_fetch_more(void* self, void* parent) {
    KExtraColumnsProxyModel_FetchMore((KExtraColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_qbase_fetch_more(void* self, void* parent) {
    KExtraColumnsProxyModel_QBaseFetchMore((KExtraColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnFetchMore((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_sort(void* self, int column, int32_t order) {
    KExtraColumnsProxyModel_Sort((KExtraColumnsProxyModel*)self, column, order);
}

void k_extracolumnsproxymodel_qbase_sort(void* self, int column, int32_t order) {
    KExtraColumnsProxyModel_QBaseSort((KExtraColumnsProxyModel*)self, column, order);
}

void k_extracolumnsproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KExtraColumnsProxyModel_OnSort((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QSize* k_extracolumnsproxymodel_span(void* self, void* index) {
    return KExtraColumnsProxyModel_Span((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

QSize* k_extracolumnsproxymodel_qbase_span(void* self, void* index) {
    return KExtraColumnsProxyModel_QBaseSpan((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_extracolumnsproxymodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnSpan((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QMimeData* k_extracolumnsproxymodel_mime_data(void* self, libqt_list indexes) {
    return KExtraColumnsProxyModel_MimeData((KExtraColumnsProxyModel*)self, indexes);
}

QMimeData* k_extracolumnsproxymodel_qbase_mime_data(void* self, libqt_list indexes) {
    return KExtraColumnsProxyModel_QBaseMimeData((KExtraColumnsProxyModel*)self, indexes);
}

void k_extracolumnsproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    KExtraColumnsProxyModel_OnMimeData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KExtraColumnsProxyModel_CanDropMimeData((KExtraColumnsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KExtraColumnsProxyModel_QBaseCanDropMimeData((KExtraColumnsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KExtraColumnsProxyModel_OnCanDropMimeData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

const char** k_extracolumnsproxymodel_mime_types(void* self) {
    libqt_list _arr = KExtraColumnsProxyModel_MimeTypes((KExtraColumnsProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_extracolumnsproxymodel_mime_types");
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

const char** k_extracolumnsproxymodel_qbase_mime_types(void* self) {
    libqt_list _arr = KExtraColumnsProxyModel_QBaseMimeTypes((KExtraColumnsProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_extracolumnsproxymodel_mime_types");
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

void k_extracolumnsproxymodel_on_mime_types(void* self, const char** (*callback)()) {
    KExtraColumnsProxyModel_OnMimeTypes((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_extracolumnsproxymodel_supported_drag_actions(void* self) {
    return KExtraColumnsProxyModel_SupportedDragActions((KExtraColumnsProxyModel*)self);
}

int32_t k_extracolumnsproxymodel_qbase_supported_drag_actions(void* self) {
    return KExtraColumnsProxyModel_QBaseSupportedDragActions((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    KExtraColumnsProxyModel_OnSupportedDragActions((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_extracolumnsproxymodel_supported_drop_actions(void* self) {
    return KExtraColumnsProxyModel_SupportedDropActions((KExtraColumnsProxyModel*)self);
}

int32_t k_extracolumnsproxymodel_qbase_supported_drop_actions(void* self) {
    return KExtraColumnsProxyModel_QBaseSupportedDropActions((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KExtraColumnsProxyModel_OnSupportedDropActions((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_extracolumnsproxymodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KExtraColumnsProxyModel_RoleNames((KExtraColumnsProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Memory allocation failed in k_extracolumnsproxymodel_role_names");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (void*)_out_values[i].data;
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    free(_out_values);
    return _ret;
}

libqt_map /* of int to char* */ k_extracolumnsproxymodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KExtraColumnsProxyModel_QBaseRoleNames((KExtraColumnsProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Memory allocation failed in k_extracolumnsproxymodel_role_names");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (void*)_out_values[i].data;
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    free(_out_values);
    return _ret;
}

void k_extracolumnsproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    KExtraColumnsProxyModel_OnRoleNames((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    KExtraColumnsProxyModel_MultiData((KExtraColumnsProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_extracolumnsproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    KExtraColumnsProxyModel_QBaseMultiData((KExtraColumnsProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_extracolumnsproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    KExtraColumnsProxyModel_OnMultiData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_reset_internal_data(void* self) {
    KExtraColumnsProxyModel_ResetInternalData((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_qbase_reset_internal_data(void* self) {
    KExtraColumnsProxyModel_QBaseResetInternalData((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_reset_internal_data(void* self, void (*callback)()) {
    KExtraColumnsProxyModel_OnResetInternalData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_event(void* self, void* event) {
    return KExtraColumnsProxyModel_Event((KExtraColumnsProxyModel*)self, (QEvent*)event);
}

bool k_extracolumnsproxymodel_qbase_event(void* self, void* event) {
    return KExtraColumnsProxyModel_QBaseEvent((KExtraColumnsProxyModel*)self, (QEvent*)event);
}

void k_extracolumnsproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnEvent((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_event_filter(void* self, void* watched, void* event) {
    return KExtraColumnsProxyModel_EventFilter((KExtraColumnsProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_extracolumnsproxymodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KExtraColumnsProxyModel_QBaseEventFilter((KExtraColumnsProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_extracolumnsproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KExtraColumnsProxyModel_OnEventFilter((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_timer_event(void* self, void* event) {
    KExtraColumnsProxyModel_TimerEvent((KExtraColumnsProxyModel*)self, (QTimerEvent*)event);
}

void k_extracolumnsproxymodel_qbase_timer_event(void* self, void* event) {
    KExtraColumnsProxyModel_QBaseTimerEvent((KExtraColumnsProxyModel*)self, (QTimerEvent*)event);
}

void k_extracolumnsproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnTimerEvent((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_child_event(void* self, void* event) {
    KExtraColumnsProxyModel_ChildEvent((KExtraColumnsProxyModel*)self, (QChildEvent*)event);
}

void k_extracolumnsproxymodel_qbase_child_event(void* self, void* event) {
    KExtraColumnsProxyModel_QBaseChildEvent((KExtraColumnsProxyModel*)self, (QChildEvent*)event);
}

void k_extracolumnsproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnChildEvent((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_custom_event(void* self, void* event) {
    KExtraColumnsProxyModel_CustomEvent((KExtraColumnsProxyModel*)self, (QEvent*)event);
}

void k_extracolumnsproxymodel_qbase_custom_event(void* self, void* event) {
    KExtraColumnsProxyModel_QBaseCustomEvent((KExtraColumnsProxyModel*)self, (QEvent*)event);
}

void k_extracolumnsproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnCustomEvent((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_connect_notify(void* self, void* signal) {
    KExtraColumnsProxyModel_ConnectNotify((KExtraColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_extracolumnsproxymodel_qbase_connect_notify(void* self, void* signal) {
    KExtraColumnsProxyModel_QBaseConnectNotify((KExtraColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_extracolumnsproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnConnectNotify((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_disconnect_notify(void* self, void* signal) {
    KExtraColumnsProxyModel_DisconnectNotify((KExtraColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_extracolumnsproxymodel_qbase_disconnect_notify(void* self, void* signal) {
    KExtraColumnsProxyModel_QBaseDisconnectNotify((KExtraColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_extracolumnsproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnDisconnectNotify((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_set_handle_source_layout_changes(void* self, bool handleSourceLayoutChanges) {
    KExtraColumnsProxyModel_SetHandleSourceLayoutChanges((KExtraColumnsProxyModel*)self, handleSourceLayoutChanges);
}

void k_extracolumnsproxymodel_qbase_set_handle_source_layout_changes(void* self, bool handleSourceLayoutChanges) {
    KExtraColumnsProxyModel_QBaseSetHandleSourceLayoutChanges((KExtraColumnsProxyModel*)self, handleSourceLayoutChanges);
}

void k_extracolumnsproxymodel_on_set_handle_source_layout_changes(void* self, void (*callback)(void*, bool)) {
    KExtraColumnsProxyModel_OnSetHandleSourceLayoutChanges((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_set_handle_source_data_changes(void* self, bool handleSourceDataChanges) {
    KExtraColumnsProxyModel_SetHandleSourceDataChanges((KExtraColumnsProxyModel*)self, handleSourceDataChanges);
}

void k_extracolumnsproxymodel_qbase_set_handle_source_data_changes(void* self, bool handleSourceDataChanges) {
    KExtraColumnsProxyModel_QBaseSetHandleSourceDataChanges((KExtraColumnsProxyModel*)self, handleSourceDataChanges);
}

void k_extracolumnsproxymodel_on_set_handle_source_data_changes(void* self, void (*callback)(void*, bool)) {
    KExtraColumnsProxyModel_OnSetHandleSourceDataChanges((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_extracolumnsproxymodel_create_source_index(void* self, int row, int col, void* internalPtr) {
    return KExtraColumnsProxyModel_CreateSourceIndex((KExtraColumnsProxyModel*)self, row, col, internalPtr);
}

QModelIndex* k_extracolumnsproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr) {
    return KExtraColumnsProxyModel_QBaseCreateSourceIndex((KExtraColumnsProxyModel*)self, row, col, internalPtr);
}

void k_extracolumnsproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KExtraColumnsProxyModel_OnCreateSourceIndex((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_extracolumnsproxymodel_create_index(void* self, int row, int column) {
    return KExtraColumnsProxyModel_CreateIndex((KExtraColumnsProxyModel*)self, row, column);
}

QModelIndex* k_extracolumnsproxymodel_qbase_create_index(void* self, int row, int column) {
    return KExtraColumnsProxyModel_QBaseCreateIndex((KExtraColumnsProxyModel*)self, row, column);
}

void k_extracolumnsproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    KExtraColumnsProxyModel_OnCreateIndex((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_encode_data(void* self, libqt_list indexes, void* stream) {
    KExtraColumnsProxyModel_EncodeData((KExtraColumnsProxyModel*)self, indexes, (QDataStream*)stream);
}

void k_extracolumnsproxymodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    KExtraColumnsProxyModel_QBaseEncodeData((KExtraColumnsProxyModel*)self, indexes, (QDataStream*)stream);
}

void k_extracolumnsproxymodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    KExtraColumnsProxyModel_OnEncodeData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KExtraColumnsProxyModel_DecodeData((KExtraColumnsProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_extracolumnsproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KExtraColumnsProxyModel_QBaseDecodeData((KExtraColumnsProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_extracolumnsproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    KExtraColumnsProxyModel_OnDecodeData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    KExtraColumnsProxyModel_BeginInsertRows((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_extracolumnsproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    KExtraColumnsProxyModel_QBaseBeginInsertRows((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_extracolumnsproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KExtraColumnsProxyModel_OnBeginInsertRows((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_end_insert_rows(void* self) {
    KExtraColumnsProxyModel_EndInsertRows((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_qbase_end_insert_rows(void* self) {
    KExtraColumnsProxyModel_QBaseEndInsertRows((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_end_insert_rows(void* self, void (*callback)()) {
    KExtraColumnsProxyModel_OnEndInsertRows((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    KExtraColumnsProxyModel_BeginRemoveRows((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_extracolumnsproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    KExtraColumnsProxyModel_QBaseBeginRemoveRows((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_extracolumnsproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KExtraColumnsProxyModel_OnBeginRemoveRows((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_end_remove_rows(void* self) {
    KExtraColumnsProxyModel_EndRemoveRows((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_qbase_end_remove_rows(void* self) {
    KExtraColumnsProxyModel_QBaseEndRemoveRows((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_end_remove_rows(void* self, void (*callback)()) {
    KExtraColumnsProxyModel_OnEndRemoveRows((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KExtraColumnsProxyModel_BeginMoveRows((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_extracolumnsproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KExtraColumnsProxyModel_QBaseBeginMoveRows((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_extracolumnsproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KExtraColumnsProxyModel_OnBeginMoveRows((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_end_move_rows(void* self) {
    KExtraColumnsProxyModel_EndMoveRows((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_qbase_end_move_rows(void* self) {
    KExtraColumnsProxyModel_QBaseEndMoveRows((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_end_move_rows(void* self, void (*callback)()) {
    KExtraColumnsProxyModel_OnEndMoveRows((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    KExtraColumnsProxyModel_BeginInsertColumns((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_extracolumnsproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    KExtraColumnsProxyModel_QBaseBeginInsertColumns((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_extracolumnsproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KExtraColumnsProxyModel_OnBeginInsertColumns((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_end_insert_columns(void* self) {
    KExtraColumnsProxyModel_EndInsertColumns((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_qbase_end_insert_columns(void* self) {
    KExtraColumnsProxyModel_QBaseEndInsertColumns((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_end_insert_columns(void* self, void (*callback)()) {
    KExtraColumnsProxyModel_OnEndInsertColumns((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    KExtraColumnsProxyModel_BeginRemoveColumns((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_extracolumnsproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    KExtraColumnsProxyModel_QBaseBeginRemoveColumns((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_extracolumnsproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KExtraColumnsProxyModel_OnBeginRemoveColumns((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_end_remove_columns(void* self) {
    KExtraColumnsProxyModel_EndRemoveColumns((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_qbase_end_remove_columns(void* self) {
    KExtraColumnsProxyModel_QBaseEndRemoveColumns((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_end_remove_columns(void* self, void (*callback)()) {
    KExtraColumnsProxyModel_OnEndRemoveColumns((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KExtraColumnsProxyModel_BeginMoveColumns((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_extracolumnsproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KExtraColumnsProxyModel_QBaseBeginMoveColumns((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_extracolumnsproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KExtraColumnsProxyModel_OnBeginMoveColumns((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_end_move_columns(void* self) {
    KExtraColumnsProxyModel_EndMoveColumns((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_qbase_end_move_columns(void* self) {
    KExtraColumnsProxyModel_QBaseEndMoveColumns((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_end_move_columns(void* self, void (*callback)()) {
    KExtraColumnsProxyModel_OnEndMoveColumns((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_begin_reset_model(void* self) {
    KExtraColumnsProxyModel_BeginResetModel((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_qbase_begin_reset_model(void* self) {
    KExtraColumnsProxyModel_QBaseBeginResetModel((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_begin_reset_model(void* self, void (*callback)()) {
    KExtraColumnsProxyModel_OnBeginResetModel((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_end_reset_model(void* self) {
    KExtraColumnsProxyModel_EndResetModel((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_qbase_end_reset_model(void* self) {
    KExtraColumnsProxyModel_QBaseEndResetModel((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_end_reset_model(void* self, void (*callback)()) {
    KExtraColumnsProxyModel_OnEndResetModel((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_change_persistent_index(void* self, void* from, void* to) {
    KExtraColumnsProxyModel_ChangePersistentIndex((KExtraColumnsProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_extracolumnsproxymodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    KExtraColumnsProxyModel_QBaseChangePersistentIndex((KExtraColumnsProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_extracolumnsproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    KExtraColumnsProxyModel_OnChangePersistentIndex((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KExtraColumnsProxyModel_ChangePersistentIndexList((KExtraColumnsProxyModel*)self, from, to);
}

void k_extracolumnsproxymodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KExtraColumnsProxyModel_QBaseChangePersistentIndexList((KExtraColumnsProxyModel*)self, from, to);
}

void k_extracolumnsproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    KExtraColumnsProxyModel_OnChangePersistentIndexList((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_extracolumnsproxymodel_persistent_index_list(void* self) {
    libqt_list _arr = KExtraColumnsProxyModel_PersistentIndexList((KExtraColumnsProxyModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_extracolumnsproxymodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = KExtraColumnsProxyModel_QBasePersistentIndexList((KExtraColumnsProxyModel*)self);
    return _arr;
}

void k_extracolumnsproxymodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    KExtraColumnsProxyModel_OnPersistentIndexList((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QObject* k_extracolumnsproxymodel_sender(void* self) {
    return KExtraColumnsProxyModel_Sender((KExtraColumnsProxyModel*)self);
}

QObject* k_extracolumnsproxymodel_qbase_sender(void* self) {
    return KExtraColumnsProxyModel_QBaseSender((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_sender(void* self, QObject* (*callback)()) {
    KExtraColumnsProxyModel_OnSender((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_extracolumnsproxymodel_sender_signal_index(void* self) {
    return KExtraColumnsProxyModel_SenderSignalIndex((KExtraColumnsProxyModel*)self);
}

int32_t k_extracolumnsproxymodel_qbase_sender_signal_index(void* self) {
    return KExtraColumnsProxyModel_QBaseSenderSignalIndex((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KExtraColumnsProxyModel_OnSenderSignalIndex((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_extracolumnsproxymodel_receivers(void* self, const char* signal) {
    return KExtraColumnsProxyModel_Receivers((KExtraColumnsProxyModel*)self, signal);
}

int32_t k_extracolumnsproxymodel_qbase_receivers(void* self, const char* signal) {
    return KExtraColumnsProxyModel_QBaseReceivers((KExtraColumnsProxyModel*)self, signal);
}

void k_extracolumnsproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KExtraColumnsProxyModel_OnReceivers((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_is_signal_connected(void* self, void* signal) {
    return KExtraColumnsProxyModel_IsSignalConnected((KExtraColumnsProxyModel*)self, (QMetaMethod*)signal);
}

bool k_extracolumnsproxymodel_qbase_is_signal_connected(void* self, void* signal) {
    return KExtraColumnsProxyModel_QBaseIsSignalConnected((KExtraColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_extracolumnsproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnIsSignalConnected((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_Connect_SourceModelChanged((QAbstractProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_delete(void* self) {
    KExtraColumnsProxyModel_Delete((KExtraColumnsProxyModel*)(self));
}
