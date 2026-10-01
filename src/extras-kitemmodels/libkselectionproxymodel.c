#include "../libqabstractitemmodel.hpp"
#include "../libqabstractproxymodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqitemselectionmodel.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libkselectionproxymodel.hpp"
#include "libkselectionproxymodel.h"

KSelectionProxyModel* k_selectionproxymodel_new(void* selectionModel) {
    return KSelectionProxyModel_New((QItemSelectionModel*)selectionModel);
}

KSelectionProxyModel* k_selectionproxymodel_new2() {
    return KSelectionProxyModel_New2();
}

KSelectionProxyModel* k_selectionproxymodel_new3(void* selectionModel, void* parent) {
    return KSelectionProxyModel_New3((QItemSelectionModel*)selectionModel, (QObject*)parent);
}

const QMetaObject* k_selectionproxymodel_meta_object(const void* self) {
    return KSelectionProxyModel_MetaObject((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    KSelectionProxyModel_OnMetaObject((KSelectionProxyModel*)self, (intptr_t)callback);
}

const QMetaObject* k_selectionproxymodel_super_meta_object(const void* self) {
    return KSelectionProxyModel_SuperMetaObject((KSelectionProxyModel*)self);
}

void* k_selectionproxymodel_metacast(void* self, const char* param1) {
    return KSelectionProxyModel_Metacast((KSelectionProxyModel*)self, param1);
}

void k_selectionproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KSelectionProxyModel_OnMetacast((KSelectionProxyModel*)self, (intptr_t)callback);
}

void* k_selectionproxymodel_super_metacast(void* self, const char* param1) {
    return KSelectionProxyModel_SuperMetacast((KSelectionProxyModel*)self, param1);
}

int32_t k_selectionproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSelectionProxyModel_Metacall((KSelectionProxyModel*)self, param1, param2, param3);
}

void k_selectionproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KSelectionProxyModel_OnMetacall((KSelectionProxyModel*)self, (intptr_t)callback);
}

int32_t k_selectionproxymodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSelectionProxyModel_SuperMetacall((KSelectionProxyModel*)self, param1, param2, param3);
}

const char* k_selectionproxymodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selectionproxymodel_set_source_model(void* self, void* sourceModel) {
    KSelectionProxyModel_SetSourceModel((KSelectionProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void k_selectionproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*)) {
    KSelectionProxyModel_OnSetSourceModel((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_super_set_source_model(void* self, void* sourceModel) {
    KSelectionProxyModel_SuperSetSourceModel((KSelectionProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

QItemSelectionModel* k_selectionproxymodel_selection_model(const void* self) {
    return KSelectionProxyModel_SelectionModel((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_set_selection_model(void* self, void* selectionModel) {
    KSelectionProxyModel_SetSelectionModel((KSelectionProxyModel*)self, (QItemSelectionModel*)selectionModel);
}

void k_selectionproxymodel_set_filter_behavior(void* self, int32_t behavior) {
    KSelectionProxyModel_SetFilterBehavior((KSelectionProxyModel*)self, behavior);
}

int32_t k_selectionproxymodel_filter_behavior(const void* self) {
    return KSelectionProxyModel_FilterBehavior((KSelectionProxyModel*)self);
}

QModelIndex* k_selectionproxymodel_map_from_source(const void* self, const void* sourceIndex) {
    return KSelectionProxyModel_MapFromSource((KSelectionProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_selectionproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KSelectionProxyModel_OnMapFromSource((KSelectionProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_selectionproxymodel_super_map_from_source(const void* self, const void* sourceIndex) {
    return KSelectionProxyModel_SuperMapFromSource((KSelectionProxyModel*)self, (QModelIndex*)sourceIndex);
}

QModelIndex* k_selectionproxymodel_map_to_source(const void* self, const void* proxyIndex) {
    return KSelectionProxyModel_MapToSource((KSelectionProxyModel*)self, (QModelIndex*)proxyIndex);
}

void k_selectionproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KSelectionProxyModel_OnMapToSource((KSelectionProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_selectionproxymodel_super_map_to_source(const void* self, const void* proxyIndex) {
    return KSelectionProxyModel_SuperMapToSource((KSelectionProxyModel*)self, (QModelIndex*)proxyIndex);
}

QItemSelection* k_selectionproxymodel_map_selection_from_source(const void* self, const void* selection) {
    return KSelectionProxyModel_MapSelectionFromSource((KSelectionProxyModel*)self, (QItemSelection*)selection);
}

void k_selectionproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(const void*, const void*)) {
    KSelectionProxyModel_OnMapSelectionFromSource((KSelectionProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_selectionproxymodel_super_map_selection_from_source(const void* self, const void* selection) {
    return KSelectionProxyModel_SuperMapSelectionFromSource((KSelectionProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* k_selectionproxymodel_map_selection_to_source(const void* self, const void* selection) {
    return KSelectionProxyModel_MapSelectionToSource((KSelectionProxyModel*)self, (QItemSelection*)selection);
}

void k_selectionproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(const void*, const void*)) {
    KSelectionProxyModel_OnMapSelectionToSource((KSelectionProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_selectionproxymodel_super_map_selection_to_source(const void* self, const void* selection) {
    return KSelectionProxyModel_SuperMapSelectionToSource((KSelectionProxyModel*)self, (QItemSelection*)selection);
}

int32_t k_selectionproxymodel_flags(const void* self, const void* index) {
    return KSelectionProxyModel_Flags((KSelectionProxyModel*)self, (QModelIndex*)index);
}

void k_selectionproxymodel_on_flags(void* self, int32_t (*callback)(const void*, const void*)) {
    KSelectionProxyModel_OnFlags((KSelectionProxyModel*)self, (intptr_t)callback);
}

int32_t k_selectionproxymodel_super_flags(const void* self, const void* index) {
    return KSelectionProxyModel_SuperFlags((KSelectionProxyModel*)self, (QModelIndex*)index);
}

QVariant* k_selectionproxymodel_data(const void* self, const void* index, int role) {
    return KSelectionProxyModel_Data((KSelectionProxyModel*)self, (QModelIndex*)index, role);
}

void k_selectionproxymodel_on_data(void* self, QVariant* (*callback)(const void*, const void*, int)) {
    KSelectionProxyModel_OnData((KSelectionProxyModel*)self, (intptr_t)callback);
}

QVariant* k_selectionproxymodel_super_data(const void* self, const void* index, int role) {
    return KSelectionProxyModel_SuperData((KSelectionProxyModel*)self, (QModelIndex*)index, role);
}

int32_t k_selectionproxymodel_row_count(const void* self, const void* parent) {
    return KSelectionProxyModel_RowCount((KSelectionProxyModel*)self, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_row_count(void* self, int32_t (*callback)(const void*, const void*)) {
    KSelectionProxyModel_OnRowCount((KSelectionProxyModel*)self, (intptr_t)callback);
}

int32_t k_selectionproxymodel_super_row_count(const void* self, const void* parent) {
    return KSelectionProxyModel_SuperRowCount((KSelectionProxyModel*)self, (QModelIndex*)parent);
}

QVariant* k_selectionproxymodel_header_data(const void* self, int section, int32_t orientation, int role) {
    return KSelectionProxyModel_HeaderData((KSelectionProxyModel*)self, section, orientation, role);
}

void k_selectionproxymodel_on_header_data(void* self, QVariant* (*callback)(const void*, int, int32_t, int)) {
    KSelectionProxyModel_OnHeaderData((KSelectionProxyModel*)self, (intptr_t)callback);
}

QVariant* k_selectionproxymodel_super_header_data(const void* self, int section, int32_t orientation, int role) {
    return KSelectionProxyModel_SuperHeaderData((KSelectionProxyModel*)self, section, orientation, role);
}

QMimeData* k_selectionproxymodel_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KSelectionProxyModel_MimeData((KSelectionProxyModel*)self, indexes);
}

void k_selectionproxymodel_on_mime_data(void* self, QMimeData* (*callback)(const void*, libqt_list /* of QModelIndex* */)) {
    KSelectionProxyModel_OnMimeData((KSelectionProxyModel*)self, (intptr_t)callback);
}

QMimeData* k_selectionproxymodel_super_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KSelectionProxyModel_SuperMimeData((KSelectionProxyModel*)self, indexes);
}

const char** k_selectionproxymodel_mime_types(const void* self) {
    libqt_list _arr = KSelectionProxyModel_MimeTypes((KSelectionProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_selectionproxymodel_mime_types\n");
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

void k_selectionproxymodel_on_mime_types(void* self, const char** (*callback)(const void*)) {
    KSelectionProxyModel_OnMimeTypes((KSelectionProxyModel*)self, (intptr_t)callback);
}

const char** k_selectionproxymodel_super_mime_types(const void* self) {
    libqt_list _arr = KSelectionProxyModel_SuperMimeTypes((KSelectionProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_selectionproxymodel_mime_types\n");
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

int32_t k_selectionproxymodel_supported_drop_actions(const void* self) {
    return KSelectionProxyModel_SupportedDropActions((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)(const void*)) {
    KSelectionProxyModel_OnSupportedDropActions((KSelectionProxyModel*)self, (intptr_t)callback);
}

int32_t k_selectionproxymodel_super_supported_drop_actions(const void* self) {
    return KSelectionProxyModel_SuperSupportedDropActions((KSelectionProxyModel*)self);
}

bool k_selectionproxymodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KSelectionProxyModel_DropMimeData((KSelectionProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*)) {
    KSelectionProxyModel_OnDropMimeData((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KSelectionProxyModel_SuperDropMimeData((KSelectionProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_selectionproxymodel_has_children(const void* self, const void* parent) {
    return KSelectionProxyModel_HasChildren((KSelectionProxyModel*)self, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_has_children(void* self, bool (*callback)(const void*, const void*)) {
    KSelectionProxyModel_OnHasChildren((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_super_has_children(const void* self, const void* parent) {
    return KSelectionProxyModel_SuperHasChildren((KSelectionProxyModel*)self, (QModelIndex*)parent);
}

QModelIndex* k_selectionproxymodel_index(const void* self, int param1, int param2, const void* param3) {
    return KSelectionProxyModel_Index((KSelectionProxyModel*)self, param1, param2, (QModelIndex*)param3);
}

void k_selectionproxymodel_on_index(void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    KSelectionProxyModel_OnIndex((KSelectionProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_selectionproxymodel_super_index(const void* self, int param1, int param2, const void* param3) {
    return KSelectionProxyModel_SuperIndex((KSelectionProxyModel*)self, param1, param2, (QModelIndex*)param3);
}

QModelIndex* k_selectionproxymodel_parent(const void* self, const void* param1) {
    return KSelectionProxyModel_Parent((KSelectionProxyModel*)self, (QModelIndex*)param1);
}

void k_selectionproxymodel_on_parent(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KSelectionProxyModel_OnParent((KSelectionProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_selectionproxymodel_super_parent(const void* self, const void* param1) {
    return KSelectionProxyModel_SuperParent((KSelectionProxyModel*)self, (QModelIndex*)param1);
}

int32_t k_selectionproxymodel_column_count(const void* self, const void* param1) {
    return KSelectionProxyModel_ColumnCount((KSelectionProxyModel*)self, (QModelIndex*)param1);
}

void k_selectionproxymodel_on_column_count(void* self, int32_t (*callback)(const void*, const void*)) {
    KSelectionProxyModel_OnColumnCount((KSelectionProxyModel*)self, (intptr_t)callback);
}

int32_t k_selectionproxymodel_super_column_count(const void* self, const void* param1) {
    return KSelectionProxyModel_SuperColumnCount((KSelectionProxyModel*)self, (QModelIndex*)param1);
}

libqt_list /* of QModelIndex* */ k_selectionproxymodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = KSelectionProxyModel_Match((KSelectionProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_selectionproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(const void*, const void*, int, const void*, int, int32_t)) {
    KSelectionProxyModel_OnMatch((KSelectionProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_selectionproxymodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = KSelectionProxyModel_SuperMatch((KSelectionProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QPersistentModelIndex* */ k_selectionproxymodel_source_root_indexes(const void* self) {
    libqt_list _arr = KSelectionProxyModel_SourceRootIndexes((KSelectionProxyModel*)self);
    return _arr;
}

const char* k_selectionproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_selectionproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* k_selectionproxymodel_source_model(const void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

bool k_selectionproxymodel_has_index(const void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool k_selectionproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_selectionproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_selectionproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_selectionproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_selectionproxymodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_selectionproxymodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_selectionproxymodel_check_index(const void* self, const void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_selectionproxymodel_data_changed(void* self, const void* topLeft, const void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_selectionproxymodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_selectionproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_selectionproxymodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_selectionproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_has_index3(const void* self, int row, int column, const void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_selectionproxymodel_insert_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_selectionproxymodel_insert_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_selectionproxymodel_remove_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_selectionproxymodel_remove_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_selectionproxymodel_check_index2(const void* self, const void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_selectionproxymodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_selectionproxymodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_selectionproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_selectionproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_selectionproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_selectionproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_selectionproxymodel_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selectionproxymodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_selectionproxymodel_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_selectionproxymodel_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_selectionproxymodel_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_selectionproxymodel_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_selectionproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_selectionproxymodel_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_selectionproxymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_selectionproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_selectionproxymodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_selectionproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_selectionproxymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_selectionproxymodel_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_selectionproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_selectionproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_selectionproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_selectionproxymodel_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_selectionproxymodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_selectionproxymodel_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_selectionproxymodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_selectionproxymodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_selectionproxymodel_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_selectionproxymodel_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_selectionproxymodel_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_selectionproxymodel_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_selectionproxymodel_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_selectionproxymodel_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_selectionproxymodel_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_selectionproxymodel_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_selectionproxymodel_dynamic_property_names\n");
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

QBindingStorage* k_selectionproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_selectionproxymodel_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_selectionproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_selectionproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_selectionproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_selectionproxymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_selectionproxymodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_selectionproxymodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_selectionproxymodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_selectionproxymodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_selectionproxymodel_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_selectionproxymodel_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_selectionproxymodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_selectionproxymodel_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_selectionproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_selectionproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_submit(void* self) {
    return KSelectionProxyModel_Submit((KSelectionProxyModel*)self);
}

bool k_selectionproxymodel_super_submit(void* self) {
    return KSelectionProxyModel_SuperSubmit((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_submit(void* self, bool (*callback)(void*)) {
    KSelectionProxyModel_OnSubmit((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_revert(void* self) {
    KSelectionProxyModel_Revert((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_super_revert(void* self) {
    KSelectionProxyModel_SuperRevert((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_revert(void* self, void (*callback)(void*)) {
    KSelectionProxyModel_OnRevert((KSelectionProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_selectionproxymodel_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KSelectionProxyModel_ItemData((KSelectionProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_selectionproxymodel_super_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KSelectionProxyModel_SuperItemData((KSelectionProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_selectionproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(const void*, const void*)) {
    KSelectionProxyModel_OnItemData((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_set_data(void* self, const void* index, const void* value, int role) {
    return KSelectionProxyModel_SetData((KSelectionProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_selectionproxymodel_super_set_data(void* self, const void* index, const void* value, int role) {
    return KSelectionProxyModel_SuperSetData((KSelectionProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_selectionproxymodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int)) {
    KSelectionProxyModel_OnSetData((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_selectionproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_selectionproxymodel_set_item_data\n");
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
    bool _out = KSelectionProxyModel_SetItemData((KSelectionProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool k_selectionproxymodel_super_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_selectionproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_selectionproxymodel_set_item_data\n");
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
    bool _out = KSelectionProxyModel_SuperSetItemData((KSelectionProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_selectionproxymodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map /* of int to QVariant* */)) {
    KSelectionProxyModel_OnSetItemData((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return KSelectionProxyModel_SetHeaderData((KSelectionProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_selectionproxymodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return KSelectionProxyModel_SuperSetHeaderData((KSelectionProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void k_selectionproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int)) {
    KSelectionProxyModel_OnSetHeaderData((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_clear_item_data(void* self, const void* index) {
    return KSelectionProxyModel_ClearItemData((KSelectionProxyModel*)self, (QModelIndex*)index);
}

bool k_selectionproxymodel_super_clear_item_data(void* self, const void* index) {
    return KSelectionProxyModel_SuperClearItemData((KSelectionProxyModel*)self, (QModelIndex*)index);
}

void k_selectionproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*)) {
    KSelectionProxyModel_OnClearItemData((KSelectionProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_selectionproxymodel_buddy(const void* self, const void* index) {
    return KSelectionProxyModel_Buddy((KSelectionProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* k_selectionproxymodel_super_buddy(const void* self, const void* index) {
    return KSelectionProxyModel_SuperBuddy((KSelectionProxyModel*)self, (QModelIndex*)index);
}

void k_selectionproxymodel_on_buddy(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KSelectionProxyModel_OnBuddy((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_can_fetch_more(const void* self, const void* parent) {
    return KSelectionProxyModel_CanFetchMore((KSelectionProxyModel*)self, (QModelIndex*)parent);
}

bool k_selectionproxymodel_super_can_fetch_more(const void* self, const void* parent) {
    return KSelectionProxyModel_SuperCanFetchMore((KSelectionProxyModel*)self, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_can_fetch_more(void* self, bool (*callback)(const void*, const void*)) {
    KSelectionProxyModel_OnCanFetchMore((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_fetch_more(void* self, const void* parent) {
    KSelectionProxyModel_FetchMore((KSelectionProxyModel*)self, (QModelIndex*)parent);
}

void k_selectionproxymodel_super_fetch_more(void* self, const void* parent) {
    KSelectionProxyModel_SuperFetchMore((KSelectionProxyModel*)self, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_fetch_more(void* self, void (*callback)(void*, const void*)) {
    KSelectionProxyModel_OnFetchMore((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_sort(void* self, int column, int32_t order) {
    KSelectionProxyModel_Sort((KSelectionProxyModel*)self, column, order);
}

void k_selectionproxymodel_super_sort(void* self, int column, int32_t order) {
    KSelectionProxyModel_SuperSort((KSelectionProxyModel*)self, column, order);
}

void k_selectionproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KSelectionProxyModel_OnSort((KSelectionProxyModel*)self, (intptr_t)callback);
}

QSize* k_selectionproxymodel_span(const void* self, const void* index) {
    return KSelectionProxyModel_Span((KSelectionProxyModel*)self, (QModelIndex*)index);
}

QSize* k_selectionproxymodel_super_span(const void* self, const void* index) {
    return KSelectionProxyModel_SuperSpan((KSelectionProxyModel*)self, (QModelIndex*)index);
}

void k_selectionproxymodel_on_span(void* self, QSize* (*callback)(const void*, const void*)) {
    KSelectionProxyModel_OnSpan((KSelectionProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_selectionproxymodel_sibling(const void* self, int row, int column, const void* idx) {
    return KSelectionProxyModel_Sibling((KSelectionProxyModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_selectionproxymodel_super_sibling(const void* self, int row, int column, const void* idx) {
    return KSelectionProxyModel_SuperSibling((KSelectionProxyModel*)self, row, column, (QModelIndex*)idx);
}

void k_selectionproxymodel_on_sibling(void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    KSelectionProxyModel_OnSibling((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KSelectionProxyModel_CanDropMimeData((KSelectionProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_selectionproxymodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KSelectionProxyModel_SuperCanDropMimeData((KSelectionProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*)) {
    KSelectionProxyModel_OnCanDropMimeData((KSelectionProxyModel*)self, (intptr_t)callback);
}

int32_t k_selectionproxymodel_supported_drag_actions(const void* self) {
    return KSelectionProxyModel_SupportedDragActions((KSelectionProxyModel*)self);
}

int32_t k_selectionproxymodel_super_supported_drag_actions(const void* self) {
    return KSelectionProxyModel_SuperSupportedDragActions((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)(const void*)) {
    KSelectionProxyModel_OnSupportedDragActions((KSelectionProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_selectionproxymodel_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KSelectionProxyModel_RoleNames((KSelectionProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_selectionproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_selectionproxymodel_role_names\n");
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

libqt_map /* of int to char* */ k_selectionproxymodel_super_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KSelectionProxyModel_SuperRoleNames((KSelectionProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_selectionproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_selectionproxymodel_role_names\n");
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

void k_selectionproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)(const void*)) {
    KSelectionProxyModel_OnRoleNames((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_insert_rows(void* self, int row, int count, const void* parent) {
    return KSelectionProxyModel_InsertRows((KSelectionProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_selectionproxymodel_super_insert_rows(void* self, int row, int count, const void* parent) {
    return KSelectionProxyModel_SuperInsertRows((KSelectionProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    KSelectionProxyModel_OnInsertRows((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_insert_columns(void* self, int column, int count, const void* parent) {
    return KSelectionProxyModel_InsertColumns((KSelectionProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_selectionproxymodel_super_insert_columns(void* self, int column, int count, const void* parent) {
    return KSelectionProxyModel_SuperInsertColumns((KSelectionProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    KSelectionProxyModel_OnInsertColumns((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_remove_rows(void* self, int row, int count, const void* parent) {
    return KSelectionProxyModel_RemoveRows((KSelectionProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_selectionproxymodel_super_remove_rows(void* self, int row, int count, const void* parent) {
    return KSelectionProxyModel_SuperRemoveRows((KSelectionProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    KSelectionProxyModel_OnRemoveRows((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_remove_columns(void* self, int column, int count, const void* parent) {
    return KSelectionProxyModel_RemoveColumns((KSelectionProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_selectionproxymodel_super_remove_columns(void* self, int column, int count, const void* parent) {
    return KSelectionProxyModel_SuperRemoveColumns((KSelectionProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    KSelectionProxyModel_OnRemoveColumns((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return KSelectionProxyModel_MoveRows((KSelectionProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_selectionproxymodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return KSelectionProxyModel_SuperMoveRows((KSelectionProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_selectionproxymodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    KSelectionProxyModel_OnMoveRows((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return KSelectionProxyModel_MoveColumns((KSelectionProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_selectionproxymodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return KSelectionProxyModel_SuperMoveColumns((KSelectionProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_selectionproxymodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    KSelectionProxyModel_OnMoveColumns((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_multi_data(const void* self, const void* index, void* roleDataSpan) {
    KSelectionProxyModel_MultiData((KSelectionProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_selectionproxymodel_super_multi_data(const void* self, const void* index, void* roleDataSpan) {
    KSelectionProxyModel_SuperMultiData((KSelectionProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_selectionproxymodel_on_multi_data(void* self, void (*callback)(const void*, const void*, void*)) {
    KSelectionProxyModel_OnMultiData((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_reset_internal_data(void* self) {
    KSelectionProxyModel_ResetInternalData((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_super_reset_internal_data(void* self) {
    KSelectionProxyModel_SuperResetInternalData((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_reset_internal_data(void* self, void (*callback)(void*)) {
    KSelectionProxyModel_OnResetInternalData((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_event(void* self, void* event) {
    return KSelectionProxyModel_Event((KSelectionProxyModel*)self, (QEvent*)event);
}

bool k_selectionproxymodel_super_event(void* self, void* event) {
    return KSelectionProxyModel_SuperEvent((KSelectionProxyModel*)self, (QEvent*)event);
}

void k_selectionproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KSelectionProxyModel_OnEvent((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_event_filter(void* self, void* watched, void* event) {
    return KSelectionProxyModel_EventFilter((KSelectionProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_selectionproxymodel_super_event_filter(void* self, void* watched, void* event) {
    return KSelectionProxyModel_SuperEventFilter((KSelectionProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_selectionproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KSelectionProxyModel_OnEventFilter((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_timer_event(void* self, void* event) {
    KSelectionProxyModel_TimerEvent((KSelectionProxyModel*)self, (QTimerEvent*)event);
}

void k_selectionproxymodel_super_timer_event(void* self, void* event) {
    KSelectionProxyModel_SuperTimerEvent((KSelectionProxyModel*)self, (QTimerEvent*)event);
}

void k_selectionproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KSelectionProxyModel_OnTimerEvent((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_child_event(void* self, void* event) {
    KSelectionProxyModel_ChildEvent((KSelectionProxyModel*)self, (QChildEvent*)event);
}

void k_selectionproxymodel_super_child_event(void* self, void* event) {
    KSelectionProxyModel_SuperChildEvent((KSelectionProxyModel*)self, (QChildEvent*)event);
}

void k_selectionproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KSelectionProxyModel_OnChildEvent((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_custom_event(void* self, void* event) {
    KSelectionProxyModel_CustomEvent((KSelectionProxyModel*)self, (QEvent*)event);
}

void k_selectionproxymodel_super_custom_event(void* self, void* event) {
    KSelectionProxyModel_SuperCustomEvent((KSelectionProxyModel*)self, (QEvent*)event);
}

void k_selectionproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KSelectionProxyModel_OnCustomEvent((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_connect_notify(void* self, const void* signal) {
    KSelectionProxyModel_ConnectNotify((KSelectionProxyModel*)self, (QMetaMethod*)signal);
}

void k_selectionproxymodel_super_connect_notify(void* self, const void* signal) {
    KSelectionProxyModel_SuperConnectNotify((KSelectionProxyModel*)self, (QMetaMethod*)signal);
}

void k_selectionproxymodel_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    KSelectionProxyModel_OnConnectNotify((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_disconnect_notify(void* self, const void* signal) {
    KSelectionProxyModel_DisconnectNotify((KSelectionProxyModel*)self, (QMetaMethod*)signal);
}

void k_selectionproxymodel_super_disconnect_notify(void* self, const void* signal) {
    KSelectionProxyModel_SuperDisconnectNotify((KSelectionProxyModel*)self, (QMetaMethod*)signal);
}

void k_selectionproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    KSelectionProxyModel_OnDisconnectNotify((KSelectionProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_selectionproxymodel_create_source_index(const void* self, int row, int col, void* internalPtr) {
    return KSelectionProxyModel_CreateSourceIndex((KSelectionProxyModel*)self, row, col, internalPtr);
}

QModelIndex* k_selectionproxymodel_create_index(const void* self, int row, int column) {
    return KSelectionProxyModel_CreateIndex((KSelectionProxyModel*)self, row, column);
}

void k_selectionproxymodel_encode_data(const void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KSelectionProxyModel_EncodeData((KSelectionProxyModel*)self, indexes, (QDataStream*)stream);
}

bool k_selectionproxymodel_decode_data(void* self, int row, int column, const void* parent, void* stream) {
    return KSelectionProxyModel_DecodeData((KSelectionProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_selectionproxymodel_begin_insert_rows(void* self, const void* parent, int first, int last) {
    KSelectionProxyModel_BeginInsertRows((KSelectionProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_selectionproxymodel_end_insert_rows(void* self) {
    KSelectionProxyModel_EndInsertRows((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_begin_remove_rows(void* self, const void* parent, int first, int last) {
    KSelectionProxyModel_BeginRemoveRows((KSelectionProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_selectionproxymodel_end_remove_rows(void* self) {
    KSelectionProxyModel_EndRemoveRows((KSelectionProxyModel*)self);
}

bool k_selectionproxymodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow) {
    return KSelectionProxyModel_BeginMoveRows((KSelectionProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_selectionproxymodel_end_move_rows(void* self) {
    KSelectionProxyModel_EndMoveRows((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_begin_insert_columns(void* self, const void* parent, int first, int last) {
    KSelectionProxyModel_BeginInsertColumns((KSelectionProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_selectionproxymodel_end_insert_columns(void* self) {
    KSelectionProxyModel_EndInsertColumns((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_begin_remove_columns(void* self, const void* parent, int first, int last) {
    KSelectionProxyModel_BeginRemoveColumns((KSelectionProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_selectionproxymodel_end_remove_columns(void* self) {
    KSelectionProxyModel_EndRemoveColumns((KSelectionProxyModel*)self);
}

bool k_selectionproxymodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn) {
    return KSelectionProxyModel_BeginMoveColumns((KSelectionProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_selectionproxymodel_end_move_columns(void* self) {
    KSelectionProxyModel_EndMoveColumns((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_begin_reset_model(void* self) {
    KSelectionProxyModel_BeginResetModel((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_end_reset_model(void* self) {
    KSelectionProxyModel_EndResetModel((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_change_persistent_index(void* self, const void* from, const void* to) {
    KSelectionProxyModel_ChangePersistentIndex((KSelectionProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_selectionproxymodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KSelectionProxyModel_ChangePersistentIndexList((KSelectionProxyModel*)self, from, to);
}

libqt_list /* of QModelIndex* */ k_selectionproxymodel_persistent_index_list(const void* self) {
    libqt_list _arr = KSelectionProxyModel_PersistentIndexList((KSelectionProxyModel*)self);
    return _arr;
}

QObject* k_selectionproxymodel_sender(const void* self) {
    return KSelectionProxyModel_Sender((KSelectionProxyModel*)self);
}

int32_t k_selectionproxymodel_sender_signal_index(const void* self) {
    return KSelectionProxyModel_SenderSignalIndex((KSelectionProxyModel*)self);
}

int32_t k_selectionproxymodel_receivers(const void* self, const char* signal) {
    return KSelectionProxyModel_Receivers((KSelectionProxyModel*)self, signal);
}

bool k_selectionproxymodel_is_signal_connected(const void* self, const void* signal) {
    return KSelectionProxyModel_IsSignalConnected((KSelectionProxyModel*)self, (QMetaMethod*)signal);
}

void k_selectionproxymodel_on_root_index_about_to_be_removed(void* self, void (*callback)(void*, const void*)) {
    KSelectionProxyModel_Connect_RootIndexAboutToBeRemoved((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_root_index_added(void* self, void (*callback)(void*, const void*)) {
    KSelectionProxyModel_Connect_RootIndexAdded((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_root_selection_about_to_be_removed(void* self, void (*callback)(void*, const void*)) {
    KSelectionProxyModel_Connect_RootSelectionAboutToBeRemoved((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_root_selection_added(void* self, void (*callback)(void*, const void*)) {
    KSelectionProxyModel_Connect_RootSelectionAdded((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_selection_model_changed(void* self, void (*callback)(void*)) {
    KSelectionProxyModel_Connect_SelectionModelChanged((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_filter_behavior_changed(void* self, void (*callback)(void*)) {
    KSelectionProxyModel_Connect_FilterBehaviorChanged((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_Connect_SourceModelChanged((QAbstractProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_selectionproxymodel_delete(void* self) {
    KSelectionProxyModel_Delete((KSelectionProxyModel*)(self));
}
