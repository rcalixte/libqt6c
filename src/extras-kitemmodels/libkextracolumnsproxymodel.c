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
    return KExtraColumnsProxyModel_New();
}

KExtraColumnsProxyModel* k_extracolumnsproxymodel_new2(void* parent) {
    return KExtraColumnsProxyModel_New2((QObject*)parent);
}

const QMetaObject* k_extracolumnsproxymodel_meta_object(const void* self) {
    return KExtraColumnsProxyModel_MetaObject((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    KExtraColumnsProxyModel_OnMetaObject((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

const QMetaObject* k_extracolumnsproxymodel_super_meta_object(const void* self) {
    return KExtraColumnsProxyModel_SuperMetaObject((KExtraColumnsProxyModel*)self);
}

void* k_extracolumnsproxymodel_metacast(void* self, const char* param1) {
    return KExtraColumnsProxyModel_Metacast((KExtraColumnsProxyModel*)self, param1);
}

void k_extracolumnsproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KExtraColumnsProxyModel_OnMetacast((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void* k_extracolumnsproxymodel_super_metacast(void* self, const char* param1) {
    return KExtraColumnsProxyModel_SuperMetacast((KExtraColumnsProxyModel*)self, param1);
}

int32_t k_extracolumnsproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KExtraColumnsProxyModel_Metacall((KExtraColumnsProxyModel*)self, param1, param2, param3);
}

void k_extracolumnsproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KExtraColumnsProxyModel_OnMetacall((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_extracolumnsproxymodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KExtraColumnsProxyModel_SuperMetacall((KExtraColumnsProxyModel*)self, param1, param2, param3);
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

QVariant* k_extracolumnsproxymodel_extra_column_data(const void* self, const void* parent, int row, int extraColumn, int role) {
    return KExtraColumnsProxyModel_ExtraColumnData((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, row, extraColumn, role);
}

void k_extracolumnsproxymodel_on_extra_column_data(void* self, QVariant* (*callback)(const void*, const void*, int, int, int)) {
    KExtraColumnsProxyModel_OnExtraColumnData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_set_extra_column_data(void* self, const void* parent, int row, int extraColumn, const void* data, int role) {
    return KExtraColumnsProxyModel_SetExtraColumnData((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, row, extraColumn, (QVariant*)data, role);
}

void k_extracolumnsproxymodel_on_set_extra_column_data(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    KExtraColumnsProxyModel_OnSetExtraColumnData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_super_set_extra_column_data(void* self, const void* parent, int row, int extraColumn, const void* data, int role) {
    return KExtraColumnsProxyModel_SuperSetExtraColumnData((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, row, extraColumn, (QVariant*)data, role);
}

void k_extracolumnsproxymodel_extra_column_data_changed(void* self, const void* parent, int row, int extraColumn, libqt_list /* of int */ roles) {
    KExtraColumnsProxyModel_ExtraColumnDataChanged((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, row, extraColumn, roles);
}

int32_t k_extracolumnsproxymodel_extra_column_for_proxy_column(const void* self, int proxyColumn) {
    return KExtraColumnsProxyModel_ExtraColumnForProxyColumn((KExtraColumnsProxyModel*)self, proxyColumn);
}

int32_t k_extracolumnsproxymodel_proxy_column_for_extra_column(const void* self, int extraColumn) {
    return KExtraColumnsProxyModel_ProxyColumnForExtraColumn((KExtraColumnsProxyModel*)self, extraColumn);
}

void k_extracolumnsproxymodel_set_source_model(void* self, void* model) {
    KExtraColumnsProxyModel_SetSourceModel((KExtraColumnsProxyModel*)self, (QAbstractItemModel*)model);
}

void k_extracolumnsproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnSetSourceModel((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_super_set_source_model(void* self, void* model) {
    KExtraColumnsProxyModel_SuperSetSourceModel((KExtraColumnsProxyModel*)self, (QAbstractItemModel*)model);
}

QModelIndex* k_extracolumnsproxymodel_map_to_source(const void* self, const void* proxyIndex) {
    return KExtraColumnsProxyModel_MapToSource((KExtraColumnsProxyModel*)self, (QModelIndex*)proxyIndex);
}

void k_extracolumnsproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KExtraColumnsProxyModel_OnMapToSource((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_extracolumnsproxymodel_super_map_to_source(const void* self, const void* proxyIndex) {
    return KExtraColumnsProxyModel_SuperMapToSource((KExtraColumnsProxyModel*)self, (QModelIndex*)proxyIndex);
}

QItemSelection* k_extracolumnsproxymodel_map_selection_to_source(const void* self, const void* selection) {
    return KExtraColumnsProxyModel_MapSelectionToSource((KExtraColumnsProxyModel*)self, (QItemSelection*)selection);
}

void k_extracolumnsproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(const void*, const void*)) {
    KExtraColumnsProxyModel_OnMapSelectionToSource((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_extracolumnsproxymodel_super_map_selection_to_source(const void* self, const void* selection) {
    return KExtraColumnsProxyModel_SuperMapSelectionToSource((KExtraColumnsProxyModel*)self, (QItemSelection*)selection);
}

int32_t k_extracolumnsproxymodel_column_count(const void* self, const void* parent) {
    return KExtraColumnsProxyModel_ColumnCount((KExtraColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_column_count(void* self, int32_t (*callback)(const void*, const void*)) {
    KExtraColumnsProxyModel_OnColumnCount((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_extracolumnsproxymodel_super_column_count(const void* self, const void* parent) {
    return KExtraColumnsProxyModel_SuperColumnCount((KExtraColumnsProxyModel*)self, (QModelIndex*)parent);
}

QVariant* k_extracolumnsproxymodel_data(const void* self, const void* index, int role) {
    return KExtraColumnsProxyModel_Data((KExtraColumnsProxyModel*)self, (QModelIndex*)index, role);
}

void k_extracolumnsproxymodel_on_data(void* self, QVariant* (*callback)(const void*, const void*, int)) {
    KExtraColumnsProxyModel_OnData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QVariant* k_extracolumnsproxymodel_super_data(const void* self, const void* index, int role) {
    return KExtraColumnsProxyModel_SuperData((KExtraColumnsProxyModel*)self, (QModelIndex*)index, role);
}

bool k_extracolumnsproxymodel_set_data(void* self, const void* index, const void* value, int role) {
    return KExtraColumnsProxyModel_SetData((KExtraColumnsProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_extracolumnsproxymodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int)) {
    KExtraColumnsProxyModel_OnSetData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_super_set_data(void* self, const void* index, const void* value, int role) {
    return KExtraColumnsProxyModel_SuperSetData((KExtraColumnsProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

QModelIndex* k_extracolumnsproxymodel_sibling(const void* self, int row, int column, const void* idx) {
    return KExtraColumnsProxyModel_Sibling((KExtraColumnsProxyModel*)self, row, column, (QModelIndex*)idx);
}

void k_extracolumnsproxymodel_on_sibling(void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    KExtraColumnsProxyModel_OnSibling((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_extracolumnsproxymodel_super_sibling(const void* self, int row, int column, const void* idx) {
    return KExtraColumnsProxyModel_SuperSibling((KExtraColumnsProxyModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_extracolumnsproxymodel_buddy(const void* self, const void* index) {
    return KExtraColumnsProxyModel_Buddy((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_extracolumnsproxymodel_on_buddy(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KExtraColumnsProxyModel_OnBuddy((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_extracolumnsproxymodel_super_buddy(const void* self, const void* index) {
    return KExtraColumnsProxyModel_SuperBuddy((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

int32_t k_extracolumnsproxymodel_flags(const void* self, const void* index) {
    return KExtraColumnsProxyModel_Flags((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_extracolumnsproxymodel_on_flags(void* self, int32_t (*callback)(const void*, const void*)) {
    KExtraColumnsProxyModel_OnFlags((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_extracolumnsproxymodel_super_flags(const void* self, const void* index) {
    return KExtraColumnsProxyModel_SuperFlags((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

bool k_extracolumnsproxymodel_has_children(const void* self, const void* index) {
    return KExtraColumnsProxyModel_HasChildren((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_extracolumnsproxymodel_on_has_children(void* self, bool (*callback)(const void*, const void*)) {
    KExtraColumnsProxyModel_OnHasChildren((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_super_has_children(const void* self, const void* index) {
    return KExtraColumnsProxyModel_SuperHasChildren((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

QVariant* k_extracolumnsproxymodel_header_data(const void* self, int section, int32_t orientation, int role) {
    return KExtraColumnsProxyModel_HeaderData((KExtraColumnsProxyModel*)self, section, orientation, role);
}

void k_extracolumnsproxymodel_on_header_data(void* self, QVariant* (*callback)(const void*, int, int32_t, int)) {
    KExtraColumnsProxyModel_OnHeaderData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QVariant* k_extracolumnsproxymodel_super_header_data(const void* self, int section, int32_t orientation, int role) {
    return KExtraColumnsProxyModel_SuperHeaderData((KExtraColumnsProxyModel*)self, section, orientation, role);
}

QModelIndex* k_extracolumnsproxymodel_index(const void* self, int row, int column, const void* parent) {
    return KExtraColumnsProxyModel_Index((KExtraColumnsProxyModel*)self, row, column, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_index(void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    KExtraColumnsProxyModel_OnIndex((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_extracolumnsproxymodel_super_index(const void* self, int row, int column, const void* parent) {
    return KExtraColumnsProxyModel_SuperIndex((KExtraColumnsProxyModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_extracolumnsproxymodel_parent(const void* self, const void* child) {
    return KExtraColumnsProxyModel_Parent((KExtraColumnsProxyModel*)self, (QModelIndex*)child);
}

void k_extracolumnsproxymodel_on_parent(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KExtraColumnsProxyModel_OnParent((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_extracolumnsproxymodel_super_parent(const void* self, const void* child) {
    return KExtraColumnsProxyModel_SuperParent((KExtraColumnsProxyModel*)self, (QModelIndex*)child);
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

bool k_extracolumnsproxymodel_handle_source_layout_changes(const void* self) {
    return QIdentityProxyModel_HandleSourceLayoutChanges((QIdentityProxyModel*)self);
}

bool k_extracolumnsproxymodel_handle_source_data_changes(const void* self) {
    return QIdentityProxyModel_HandleSourceDataChanges((QIdentityProxyModel*)self);
}

QAbstractItemModel* k_extracolumnsproxymodel_source_model(const void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

bool k_extracolumnsproxymodel_has_index(const void* self, int row, int column) {
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

bool k_extracolumnsproxymodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_extracolumnsproxymodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_extracolumnsproxymodel_check_index(const void* self, const void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_extracolumnsproxymodel_data_changed(void* self, const void* topLeft, const void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_extracolumnsproxymodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*)) {
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

bool k_extracolumnsproxymodel_has_index3(const void* self, int row, int column, const void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_insert_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_insert_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_remove_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_remove_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_check_index2(const void* self, const void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_extracolumnsproxymodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_extracolumnsproxymodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_extracolumnsproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_extracolumnsproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_extracolumnsproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_extracolumnsproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_extracolumnsproxymodel_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_extracolumnsproxymodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_extracolumnsproxymodel_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_extracolumnsproxymodel_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_extracolumnsproxymodel_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_extracolumnsproxymodel_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_extracolumnsproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_extracolumnsproxymodel_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_extracolumnsproxymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_extracolumnsproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_extracolumnsproxymodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_extracolumnsproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_extracolumnsproxymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_extracolumnsproxymodel_children(const void* self) {
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

QMetaObject__Connection* k_extracolumnsproxymodel_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_extracolumnsproxymodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_extracolumnsproxymodel_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_extracolumnsproxymodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_extracolumnsproxymodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_extracolumnsproxymodel_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_extracolumnsproxymodel_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_extracolumnsproxymodel_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_extracolumnsproxymodel_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_extracolumnsproxymodel_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_extracolumnsproxymodel_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_extracolumnsproxymodel_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_extracolumnsproxymodel_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_extracolumnsproxymodel_dynamic_property_names\n");
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

QBindingStorage* k_extracolumnsproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_extracolumnsproxymodel_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_extracolumnsproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_extracolumnsproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_extracolumnsproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_extracolumnsproxymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_extracolumnsproxymodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_extracolumnsproxymodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_extracolumnsproxymodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_extracolumnsproxymodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_extracolumnsproxymodel_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_extracolumnsproxymodel_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_extracolumnsproxymodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_extracolumnsproxymodel_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_extracolumnsproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_extracolumnsproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* k_extracolumnsproxymodel_map_from_source(const void* self, const void* sourceIndex) {
    return KExtraColumnsProxyModel_MapFromSource((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceIndex);
}

QModelIndex* k_extracolumnsproxymodel_super_map_from_source(const void* self, const void* sourceIndex) {
    return KExtraColumnsProxyModel_SuperMapFromSource((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_extracolumnsproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KExtraColumnsProxyModel_OnMapFromSource((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_extracolumnsproxymodel_row_count(const void* self, const void* parent) {
    return KExtraColumnsProxyModel_RowCount((KExtraColumnsProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_extracolumnsproxymodel_super_row_count(const void* self, const void* parent) {
    return KExtraColumnsProxyModel_SuperRowCount((KExtraColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_row_count(void* self, int32_t (*callback)(const void*, const void*)) {
    KExtraColumnsProxyModel_OnRowCount((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KExtraColumnsProxyModel_DropMimeData((KExtraColumnsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KExtraColumnsProxyModel_SuperDropMimeData((KExtraColumnsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*)) {
    KExtraColumnsProxyModel_OnDropMimeData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_extracolumnsproxymodel_map_selection_from_source(const void* self, const void* selection) {
    return KExtraColumnsProxyModel_MapSelectionFromSource((KExtraColumnsProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* k_extracolumnsproxymodel_super_map_selection_from_source(const void* self, const void* selection) {
    return KExtraColumnsProxyModel_SuperMapSelectionFromSource((KExtraColumnsProxyModel*)self, (QItemSelection*)selection);
}

void k_extracolumnsproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(const void*, const void*)) {
    KExtraColumnsProxyModel_OnMapSelectionFromSource((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_extracolumnsproxymodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = KExtraColumnsProxyModel_Match((KExtraColumnsProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_extracolumnsproxymodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = KExtraColumnsProxyModel_SuperMatch((KExtraColumnsProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_extracolumnsproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(const void*, const void*, int, const void*, int, int32_t)) {
    KExtraColumnsProxyModel_OnMatch((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_insert_columns(void* self, int column, int count, const void* parent) {
    return KExtraColumnsProxyModel_InsertColumns((KExtraColumnsProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_super_insert_columns(void* self, int column, int count, const void* parent) {
    return KExtraColumnsProxyModel_SuperInsertColumns((KExtraColumnsProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    KExtraColumnsProxyModel_OnInsertColumns((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_insert_rows(void* self, int row, int count, const void* parent) {
    return KExtraColumnsProxyModel_InsertRows((KExtraColumnsProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_super_insert_rows(void* self, int row, int count, const void* parent) {
    return KExtraColumnsProxyModel_SuperInsertRows((KExtraColumnsProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    KExtraColumnsProxyModel_OnInsertRows((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_remove_columns(void* self, int column, int count, const void* parent) {
    return KExtraColumnsProxyModel_RemoveColumns((KExtraColumnsProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_super_remove_columns(void* self, int column, int count, const void* parent) {
    return KExtraColumnsProxyModel_SuperRemoveColumns((KExtraColumnsProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    KExtraColumnsProxyModel_OnRemoveColumns((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_remove_rows(void* self, int row, int count, const void* parent) {
    return KExtraColumnsProxyModel_RemoveRows((KExtraColumnsProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_super_remove_rows(void* self, int row, int count, const void* parent) {
    return KExtraColumnsProxyModel_SuperRemoveRows((KExtraColumnsProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    KExtraColumnsProxyModel_OnRemoveRows((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return KExtraColumnsProxyModel_MoveRows((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_extracolumnsproxymodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return KExtraColumnsProxyModel_SuperMoveRows((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_extracolumnsproxymodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    KExtraColumnsProxyModel_OnMoveRows((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return KExtraColumnsProxyModel_MoveColumns((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_extracolumnsproxymodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return KExtraColumnsProxyModel_SuperMoveColumns((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_extracolumnsproxymodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    KExtraColumnsProxyModel_OnMoveColumns((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_submit(void* self) {
    return KExtraColumnsProxyModel_Submit((KExtraColumnsProxyModel*)self);
}

bool k_extracolumnsproxymodel_super_submit(void* self) {
    return KExtraColumnsProxyModel_SuperSubmit((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_submit(void* self, bool (*callback)(void*)) {
    KExtraColumnsProxyModel_OnSubmit((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_revert(void* self) {
    KExtraColumnsProxyModel_Revert((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_super_revert(void* self) {
    KExtraColumnsProxyModel_SuperRevert((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_revert(void* self, void (*callback)(void*)) {
    KExtraColumnsProxyModel_OnRevert((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_extracolumnsproxymodel_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KExtraColumnsProxyModel_ItemData((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_extracolumnsproxymodel_super_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KExtraColumnsProxyModel_SuperItemData((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_extracolumnsproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(const void*, const void*)) {
    KExtraColumnsProxyModel_OnItemData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_extracolumnsproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_extracolumnsproxymodel_set_item_data\n");
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
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool k_extracolumnsproxymodel_super_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_extracolumnsproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_extracolumnsproxymodel_set_item_data\n");
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
    bool _out = KExtraColumnsProxyModel_SuperSetItemData((KExtraColumnsProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_extracolumnsproxymodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map /* of int to QVariant* */)) {
    KExtraColumnsProxyModel_OnSetItemData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return KExtraColumnsProxyModel_SetHeaderData((KExtraColumnsProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_extracolumnsproxymodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return KExtraColumnsProxyModel_SuperSetHeaderData((KExtraColumnsProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void k_extracolumnsproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int)) {
    KExtraColumnsProxyModel_OnSetHeaderData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_clear_item_data(void* self, const void* index) {
    return KExtraColumnsProxyModel_ClearItemData((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

bool k_extracolumnsproxymodel_super_clear_item_data(void* self, const void* index) {
    return KExtraColumnsProxyModel_SuperClearItemData((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_extracolumnsproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*)) {
    KExtraColumnsProxyModel_OnClearItemData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_can_fetch_more(const void* self, const void* parent) {
    return KExtraColumnsProxyModel_CanFetchMore((KExtraColumnsProxyModel*)self, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_super_can_fetch_more(const void* self, const void* parent) {
    return KExtraColumnsProxyModel_SuperCanFetchMore((KExtraColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_can_fetch_more(void* self, bool (*callback)(const void*, const void*)) {
    KExtraColumnsProxyModel_OnCanFetchMore((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_fetch_more(void* self, const void* parent) {
    KExtraColumnsProxyModel_FetchMore((KExtraColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_super_fetch_more(void* self, const void* parent) {
    KExtraColumnsProxyModel_SuperFetchMore((KExtraColumnsProxyModel*)self, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_fetch_more(void* self, void (*callback)(void*, const void*)) {
    KExtraColumnsProxyModel_OnFetchMore((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_sort(void* self, int column, int32_t order) {
    KExtraColumnsProxyModel_Sort((KExtraColumnsProxyModel*)self, column, order);
}

void k_extracolumnsproxymodel_super_sort(void* self, int column, int32_t order) {
    KExtraColumnsProxyModel_SuperSort((KExtraColumnsProxyModel*)self, column, order);
}

void k_extracolumnsproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KExtraColumnsProxyModel_OnSort((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QSize* k_extracolumnsproxymodel_span(const void* self, const void* index) {
    return KExtraColumnsProxyModel_Span((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

QSize* k_extracolumnsproxymodel_super_span(const void* self, const void* index) {
    return KExtraColumnsProxyModel_SuperSpan((KExtraColumnsProxyModel*)self, (QModelIndex*)index);
}

void k_extracolumnsproxymodel_on_span(void* self, QSize* (*callback)(const void*, const void*)) {
    KExtraColumnsProxyModel_OnSpan((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

QMimeData* k_extracolumnsproxymodel_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KExtraColumnsProxyModel_MimeData((KExtraColumnsProxyModel*)self, indexes);
}

QMimeData* k_extracolumnsproxymodel_super_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KExtraColumnsProxyModel_SuperMimeData((KExtraColumnsProxyModel*)self, indexes);
}

void k_extracolumnsproxymodel_on_mime_data(void* self, QMimeData* (*callback)(const void*, libqt_list /* of QModelIndex* */)) {
    KExtraColumnsProxyModel_OnMimeData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KExtraColumnsProxyModel_CanDropMimeData((KExtraColumnsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_extracolumnsproxymodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KExtraColumnsProxyModel_SuperCanDropMimeData((KExtraColumnsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_extracolumnsproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*)) {
    KExtraColumnsProxyModel_OnCanDropMimeData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

const char** k_extracolumnsproxymodel_mime_types(const void* self) {
    libqt_list _arr = KExtraColumnsProxyModel_MimeTypes((KExtraColumnsProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_extracolumnsproxymodel_mime_types\n");
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

const char** k_extracolumnsproxymodel_super_mime_types(const void* self) {
    libqt_list _arr = KExtraColumnsProxyModel_SuperMimeTypes((KExtraColumnsProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_extracolumnsproxymodel_mime_types\n");
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

void k_extracolumnsproxymodel_on_mime_types(void* self, const char** (*callback)(const void*)) {
    KExtraColumnsProxyModel_OnMimeTypes((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_extracolumnsproxymodel_supported_drag_actions(const void* self) {
    return KExtraColumnsProxyModel_SupportedDragActions((KExtraColumnsProxyModel*)self);
}

int32_t k_extracolumnsproxymodel_super_supported_drag_actions(const void* self) {
    return KExtraColumnsProxyModel_SuperSupportedDragActions((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)(const void*)) {
    KExtraColumnsProxyModel_OnSupportedDragActions((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

int32_t k_extracolumnsproxymodel_supported_drop_actions(const void* self) {
    return KExtraColumnsProxyModel_SupportedDropActions((KExtraColumnsProxyModel*)self);
}

int32_t k_extracolumnsproxymodel_super_supported_drop_actions(const void* self) {
    return KExtraColumnsProxyModel_SuperSupportedDropActions((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)(const void*)) {
    KExtraColumnsProxyModel_OnSupportedDropActions((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to const char* */ k_extracolumnsproxymodel_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KExtraColumnsProxyModel_RoleNames((KExtraColumnsProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_extracolumnsproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_extracolumnsproxymodel_role_names\n");
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

libqt_map /* of int to const char* */ k_extracolumnsproxymodel_super_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KExtraColumnsProxyModel_SuperRoleNames((KExtraColumnsProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_extracolumnsproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_extracolumnsproxymodel_role_names\n");
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

void k_extracolumnsproxymodel_on_role_names(void* self, libqt_map /* of int to const char* */ (*callback)(const void*)) {
    KExtraColumnsProxyModel_OnRoleNames((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_multi_data(const void* self, const void* index, void* roleDataSpan) {
    KExtraColumnsProxyModel_MultiData((KExtraColumnsProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_extracolumnsproxymodel_super_multi_data(const void* self, const void* index, void* roleDataSpan) {
    KExtraColumnsProxyModel_SuperMultiData((KExtraColumnsProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_extracolumnsproxymodel_on_multi_data(void* self, void (*callback)(const void*, const void*, void*)) {
    KExtraColumnsProxyModel_OnMultiData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_reset_internal_data(void* self) {
    KExtraColumnsProxyModel_ResetInternalData((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_super_reset_internal_data(void* self) {
    KExtraColumnsProxyModel_SuperResetInternalData((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_on_reset_internal_data(void* self, void (*callback)(void*)) {
    KExtraColumnsProxyModel_OnResetInternalData((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_event(void* self, void* event) {
    return KExtraColumnsProxyModel_Event((KExtraColumnsProxyModel*)self, (QEvent*)event);
}

bool k_extracolumnsproxymodel_super_event(void* self, void* event) {
    return KExtraColumnsProxyModel_SuperEvent((KExtraColumnsProxyModel*)self, (QEvent*)event);
}

void k_extracolumnsproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnEvent((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

bool k_extracolumnsproxymodel_event_filter(void* self, void* watched, void* event) {
    return KExtraColumnsProxyModel_EventFilter((KExtraColumnsProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_extracolumnsproxymodel_super_event_filter(void* self, void* watched, void* event) {
    return KExtraColumnsProxyModel_SuperEventFilter((KExtraColumnsProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_extracolumnsproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KExtraColumnsProxyModel_OnEventFilter((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_timer_event(void* self, void* event) {
    KExtraColumnsProxyModel_TimerEvent((KExtraColumnsProxyModel*)self, (QTimerEvent*)event);
}

void k_extracolumnsproxymodel_super_timer_event(void* self, void* event) {
    KExtraColumnsProxyModel_SuperTimerEvent((KExtraColumnsProxyModel*)self, (QTimerEvent*)event);
}

void k_extracolumnsproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnTimerEvent((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_child_event(void* self, void* event) {
    KExtraColumnsProxyModel_ChildEvent((KExtraColumnsProxyModel*)self, (QChildEvent*)event);
}

void k_extracolumnsproxymodel_super_child_event(void* self, void* event) {
    KExtraColumnsProxyModel_SuperChildEvent((KExtraColumnsProxyModel*)self, (QChildEvent*)event);
}

void k_extracolumnsproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnChildEvent((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_custom_event(void* self, void* event) {
    KExtraColumnsProxyModel_CustomEvent((KExtraColumnsProxyModel*)self, (QEvent*)event);
}

void k_extracolumnsproxymodel_super_custom_event(void* self, void* event) {
    KExtraColumnsProxyModel_SuperCustomEvent((KExtraColumnsProxyModel*)self, (QEvent*)event);
}

void k_extracolumnsproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KExtraColumnsProxyModel_OnCustomEvent((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_connect_notify(void* self, const void* signal) {
    KExtraColumnsProxyModel_ConnectNotify((KExtraColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_extracolumnsproxymodel_super_connect_notify(void* self, const void* signal) {
    KExtraColumnsProxyModel_SuperConnectNotify((KExtraColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_extracolumnsproxymodel_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    KExtraColumnsProxyModel_OnConnectNotify((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_disconnect_notify(void* self, const void* signal) {
    KExtraColumnsProxyModel_DisconnectNotify((KExtraColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_extracolumnsproxymodel_super_disconnect_notify(void* self, const void* signal) {
    KExtraColumnsProxyModel_SuperDisconnectNotify((KExtraColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_extracolumnsproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    KExtraColumnsProxyModel_OnDisconnectNotify((KExtraColumnsProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_set_handle_source_layout_changes(void* self, bool handleSourceLayoutChanges) {
    KExtraColumnsProxyModel_SetHandleSourceLayoutChanges((KExtraColumnsProxyModel*)self, handleSourceLayoutChanges);
}

void k_extracolumnsproxymodel_set_handle_source_data_changes(void* self, bool handleSourceDataChanges) {
    KExtraColumnsProxyModel_SetHandleSourceDataChanges((KExtraColumnsProxyModel*)self, handleSourceDataChanges);
}

QModelIndex* k_extracolumnsproxymodel_create_source_index(const void* self, int row, int col, void* internalPtr) {
    return KExtraColumnsProxyModel_CreateSourceIndex((KExtraColumnsProxyModel*)self, row, col, internalPtr);
}

QModelIndex* k_extracolumnsproxymodel_create_index(const void* self, int row, int column) {
    return KExtraColumnsProxyModel_CreateIndex((KExtraColumnsProxyModel*)self, row, column);
}

void k_extracolumnsproxymodel_encode_data(const void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KExtraColumnsProxyModel_EncodeData((KExtraColumnsProxyModel*)self, indexes, (QDataStream*)stream);
}

bool k_extracolumnsproxymodel_decode_data(void* self, int row, int column, const void* parent, void* stream) {
    return KExtraColumnsProxyModel_DecodeData((KExtraColumnsProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_extracolumnsproxymodel_begin_insert_rows(void* self, const void* parent, int first, int last) {
    KExtraColumnsProxyModel_BeginInsertRows((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_extracolumnsproxymodel_end_insert_rows(void* self) {
    KExtraColumnsProxyModel_EndInsertRows((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_begin_remove_rows(void* self, const void* parent, int first, int last) {
    KExtraColumnsProxyModel_BeginRemoveRows((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_extracolumnsproxymodel_end_remove_rows(void* self) {
    KExtraColumnsProxyModel_EndRemoveRows((KExtraColumnsProxyModel*)self);
}

bool k_extracolumnsproxymodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow) {
    return KExtraColumnsProxyModel_BeginMoveRows((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_extracolumnsproxymodel_end_move_rows(void* self) {
    KExtraColumnsProxyModel_EndMoveRows((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_begin_insert_columns(void* self, const void* parent, int first, int last) {
    KExtraColumnsProxyModel_BeginInsertColumns((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_extracolumnsproxymodel_end_insert_columns(void* self) {
    KExtraColumnsProxyModel_EndInsertColumns((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_begin_remove_columns(void* self, const void* parent, int first, int last) {
    KExtraColumnsProxyModel_BeginRemoveColumns((KExtraColumnsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_extracolumnsproxymodel_end_remove_columns(void* self) {
    KExtraColumnsProxyModel_EndRemoveColumns((KExtraColumnsProxyModel*)self);
}

bool k_extracolumnsproxymodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn) {
    return KExtraColumnsProxyModel_BeginMoveColumns((KExtraColumnsProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_extracolumnsproxymodel_end_move_columns(void* self) {
    KExtraColumnsProxyModel_EndMoveColumns((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_begin_reset_model(void* self) {
    KExtraColumnsProxyModel_BeginResetModel((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_end_reset_model(void* self) {
    KExtraColumnsProxyModel_EndResetModel((KExtraColumnsProxyModel*)self);
}

void k_extracolumnsproxymodel_change_persistent_index(void* self, const void* from, const void* to) {
    KExtraColumnsProxyModel_ChangePersistentIndex((KExtraColumnsProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_extracolumnsproxymodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KExtraColumnsProxyModel_ChangePersistentIndexList((KExtraColumnsProxyModel*)self, from, to);
}

libqt_list /* of QModelIndex* */ k_extracolumnsproxymodel_persistent_index_list(const void* self) {
    libqt_list _arr = KExtraColumnsProxyModel_PersistentIndexList((KExtraColumnsProxyModel*)self);
    return _arr;
}

QObject* k_extracolumnsproxymodel_sender(const void* self) {
    return KExtraColumnsProxyModel_Sender((KExtraColumnsProxyModel*)self);
}

int32_t k_extracolumnsproxymodel_sender_signal_index(const void* self) {
    return KExtraColumnsProxyModel_SenderSignalIndex((KExtraColumnsProxyModel*)self);
}

int32_t k_extracolumnsproxymodel_receivers(const void* self, const char* signal) {
    return KExtraColumnsProxyModel_Receivers((KExtraColumnsProxyModel*)self, signal);
}

bool k_extracolumnsproxymodel_is_signal_connected(const void* self, const void* signal) {
    return KExtraColumnsProxyModel_IsSignalConnected((KExtraColumnsProxyModel*)self, (QMetaMethod*)signal);
}

void k_extracolumnsproxymodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_Connect_SourceModelChanged((QAbstractProxyModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_extracolumnsproxymodel_delete(void* self) {
    KExtraColumnsProxyModel_Delete((KExtraColumnsProxyModel*)(self));
}
