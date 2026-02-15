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
    return KSelectionProxyModel_new((QItemSelectionModel*)selectionModel);
}

KSelectionProxyModel* k_selectionproxymodel_new2() {
    return KSelectionProxyModel_new2();
}

KSelectionProxyModel* k_selectionproxymodel_new3(void* selectionModel, void* parent) {
    return KSelectionProxyModel_new3((QItemSelectionModel*)selectionModel, (QObject*)parent);
}

const QMetaObject* k_selectionproxymodel_meta_object(void* self) {
    return KSelectionProxyModel_MetaObject((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KSelectionProxyModel_OnMetaObject((KSelectionProxyModel*)self, (intptr_t)callback);
}

const QMetaObject* k_selectionproxymodel_qbase_meta_object(void* self) {
    return KSelectionProxyModel_QBaseMetaObject((KSelectionProxyModel*)self);
}

void* k_selectionproxymodel_metacast(void* self, const char* param1) {
    return KSelectionProxyModel_Metacast((KSelectionProxyModel*)self, param1);
}

void k_selectionproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KSelectionProxyModel_OnMetacast((KSelectionProxyModel*)self, (intptr_t)callback);
}

void* k_selectionproxymodel_qbase_metacast(void* self, const char* param1) {
    return KSelectionProxyModel_QBaseMetacast((KSelectionProxyModel*)self, param1);
}

int32_t k_selectionproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSelectionProxyModel_Metacall((KSelectionProxyModel*)self, param1, param2, param3);
}

void k_selectionproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KSelectionProxyModel_OnMetacall((KSelectionProxyModel*)self, (intptr_t)callback);
}

int32_t k_selectionproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSelectionProxyModel_QBaseMetacall((KSelectionProxyModel*)self, param1, param2, param3);
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

void k_selectionproxymodel_qbase_set_source_model(void* self, void* sourceModel) {
    KSelectionProxyModel_QBaseSetSourceModel((KSelectionProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

QItemSelectionModel* k_selectionproxymodel_selection_model(void* self) {
    return KSelectionProxyModel_SelectionModel((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_set_selection_model(void* self, void* selectionModel) {
    KSelectionProxyModel_SetSelectionModel((KSelectionProxyModel*)self, (QItemSelectionModel*)selectionModel);
}

void k_selectionproxymodel_set_filter_behavior(void* self, int32_t behavior) {
    KSelectionProxyModel_SetFilterBehavior((KSelectionProxyModel*)self, behavior);
}

int32_t k_selectionproxymodel_filter_behavior(void* self) {
    return KSelectionProxyModel_FilterBehavior((KSelectionProxyModel*)self);
}

QModelIndex* k_selectionproxymodel_map_from_source(void* self, void* sourceIndex) {
    return KSelectionProxyModel_MapFromSource((KSelectionProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_selectionproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    KSelectionProxyModel_OnMapFromSource((KSelectionProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_selectionproxymodel_qbase_map_from_source(void* self, void* sourceIndex) {
    return KSelectionProxyModel_QBaseMapFromSource((KSelectionProxyModel*)self, (QModelIndex*)sourceIndex);
}

QModelIndex* k_selectionproxymodel_map_to_source(void* self, void* proxyIndex) {
    return KSelectionProxyModel_MapToSource((KSelectionProxyModel*)self, (QModelIndex*)proxyIndex);
}

void k_selectionproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    KSelectionProxyModel_OnMapToSource((KSelectionProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_selectionproxymodel_qbase_map_to_source(void* self, void* proxyIndex) {
    return KSelectionProxyModel_QBaseMapToSource((KSelectionProxyModel*)self, (QModelIndex*)proxyIndex);
}

QItemSelection* k_selectionproxymodel_map_selection_from_source(void* self, void* selection) {
    return KSelectionProxyModel_MapSelectionFromSource((KSelectionProxyModel*)self, (QItemSelection*)selection);
}

void k_selectionproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    KSelectionProxyModel_OnMapSelectionFromSource((KSelectionProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_selectionproxymodel_qbase_map_selection_from_source(void* self, void* selection) {
    return KSelectionProxyModel_QBaseMapSelectionFromSource((KSelectionProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* k_selectionproxymodel_map_selection_to_source(void* self, void* selection) {
    return KSelectionProxyModel_MapSelectionToSource((KSelectionProxyModel*)self, (QItemSelection*)selection);
}

void k_selectionproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    KSelectionProxyModel_OnMapSelectionToSource((KSelectionProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_selectionproxymodel_qbase_map_selection_to_source(void* self, void* selection) {
    return KSelectionProxyModel_QBaseMapSelectionToSource((KSelectionProxyModel*)self, (QItemSelection*)selection);
}

int32_t k_selectionproxymodel_flags(void* self, void* index) {
    return KSelectionProxyModel_Flags((KSelectionProxyModel*)self, (QModelIndex*)index);
}

void k_selectionproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    KSelectionProxyModel_OnFlags((KSelectionProxyModel*)self, (intptr_t)callback);
}

int32_t k_selectionproxymodel_qbase_flags(void* self, void* index) {
    return KSelectionProxyModel_QBaseFlags((KSelectionProxyModel*)self, (QModelIndex*)index);
}

QVariant* k_selectionproxymodel_data(void* self, void* index, int role) {
    return KSelectionProxyModel_Data((KSelectionProxyModel*)self, (QModelIndex*)index, role);
}

void k_selectionproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    KSelectionProxyModel_OnData((KSelectionProxyModel*)self, (intptr_t)callback);
}

QVariant* k_selectionproxymodel_qbase_data(void* self, void* index, int role) {
    return KSelectionProxyModel_QBaseData((KSelectionProxyModel*)self, (QModelIndex*)index, role);
}

int32_t k_selectionproxymodel_row_count(void* self, void* parent) {
    return KSelectionProxyModel_RowCount((KSelectionProxyModel*)self, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    KSelectionProxyModel_OnRowCount((KSelectionProxyModel*)self, (intptr_t)callback);
}

int32_t k_selectionproxymodel_qbase_row_count(void* self, void* parent) {
    return KSelectionProxyModel_QBaseRowCount((KSelectionProxyModel*)self, (QModelIndex*)parent);
}

QVariant* k_selectionproxymodel_header_data(void* self, int section, int32_t orientation, int role) {
    return KSelectionProxyModel_HeaderData((KSelectionProxyModel*)self, section, orientation, role);
}

void k_selectionproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    KSelectionProxyModel_OnHeaderData((KSelectionProxyModel*)self, (intptr_t)callback);
}

QVariant* k_selectionproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return KSelectionProxyModel_QBaseHeaderData((KSelectionProxyModel*)self, section, orientation, role);
}

QMimeData* k_selectionproxymodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KSelectionProxyModel_MimeData((KSelectionProxyModel*)self, indexes);
}

void k_selectionproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list /* of QModelIndex* */)) {
    KSelectionProxyModel_OnMimeData((KSelectionProxyModel*)self, (intptr_t)callback);
}

QMimeData* k_selectionproxymodel_qbase_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KSelectionProxyModel_QBaseMimeData((KSelectionProxyModel*)self, indexes);
}

const char** k_selectionproxymodel_mime_types(void* self) {
    libqt_list _arr = KSelectionProxyModel_MimeTypes((KSelectionProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_selectionproxymodel_mime_types\n");
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

void k_selectionproxymodel_on_mime_types(void* self, const char** (*callback)()) {
    KSelectionProxyModel_OnMimeTypes((KSelectionProxyModel*)self, (intptr_t)callback);
}

const char** k_selectionproxymodel_qbase_mime_types(void* self) {
    libqt_list _arr = KSelectionProxyModel_QBaseMimeTypes((KSelectionProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_selectionproxymodel_mime_types\n");
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

int32_t k_selectionproxymodel_supported_drop_actions(void* self) {
    return KSelectionProxyModel_SupportedDropActions((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KSelectionProxyModel_OnSupportedDropActions((KSelectionProxyModel*)self, (intptr_t)callback);
}

int32_t k_selectionproxymodel_qbase_supported_drop_actions(void* self) {
    return KSelectionProxyModel_QBaseSupportedDropActions((KSelectionProxyModel*)self);
}

bool k_selectionproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KSelectionProxyModel_DropMimeData((KSelectionProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KSelectionProxyModel_OnDropMimeData((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KSelectionProxyModel_QBaseDropMimeData((KSelectionProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_selectionproxymodel_has_children(void* self, void* parent) {
    return KSelectionProxyModel_HasChildren((KSelectionProxyModel*)self, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    KSelectionProxyModel_OnHasChildren((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_qbase_has_children(void* self, void* parent) {
    return KSelectionProxyModel_QBaseHasChildren((KSelectionProxyModel*)self, (QModelIndex*)parent);
}

QModelIndex* k_selectionproxymodel_index(void* self, int param1, int param2, void* param3) {
    return KSelectionProxyModel_Index((KSelectionProxyModel*)self, param1, param2, (QModelIndex*)param3);
}

void k_selectionproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KSelectionProxyModel_OnIndex((KSelectionProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_selectionproxymodel_qbase_index(void* self, int param1, int param2, void* param3) {
    return KSelectionProxyModel_QBaseIndex((KSelectionProxyModel*)self, param1, param2, (QModelIndex*)param3);
}

QModelIndex* k_selectionproxymodel_parent(void* self, void* param1) {
    return KSelectionProxyModel_Parent((KSelectionProxyModel*)self, (QModelIndex*)param1);
}

void k_selectionproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    KSelectionProxyModel_OnParent((KSelectionProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_selectionproxymodel_qbase_parent(void* self, void* param1) {
    return KSelectionProxyModel_QBaseParent((KSelectionProxyModel*)self, (QModelIndex*)param1);
}

int32_t k_selectionproxymodel_column_count(void* self, void* param1) {
    return KSelectionProxyModel_ColumnCount((KSelectionProxyModel*)self, (QModelIndex*)param1);
}

void k_selectionproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    KSelectionProxyModel_OnColumnCount((KSelectionProxyModel*)self, (intptr_t)callback);
}

int32_t k_selectionproxymodel_qbase_column_count(void* self, void* param1) {
    return KSelectionProxyModel_QBaseColumnCount((KSelectionProxyModel*)self, (QModelIndex*)param1);
}

libqt_list /* of QModelIndex* */ k_selectionproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KSelectionProxyModel_Match((KSelectionProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_selectionproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(void*, void*, int, void*, int, int32_t)) {
    KSelectionProxyModel_OnMatch((KSelectionProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_selectionproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KSelectionProxyModel_QBaseMatch((KSelectionProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QPersistentModelIndex* */ k_selectionproxymodel_source_root_indexes(void* self) {
    libqt_list _arr = KSelectionProxyModel_SourceRootIndexes((KSelectionProxyModel*)self);
    return _arr;
}

void k_selectionproxymodel_on_source_root_indexes(void* self, libqt_list /* of QPersistentModelIndex* */ (*callback)()) {
    KSelectionProxyModel_OnSourceRootIndexes((KSelectionProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QPersistentModelIndex* */ k_selectionproxymodel_qbase_source_root_indexes(void* self) {
    libqt_list _arr = KSelectionProxyModel_QBaseSourceRootIndexes((KSelectionProxyModel*)self);
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

QAbstractItemModel* k_selectionproxymodel_source_model(void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

bool k_selectionproxymodel_has_index(void* self, int row, int column) {
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

bool k_selectionproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_selectionproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_selectionproxymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_selectionproxymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_selectionproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
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

bool k_selectionproxymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_selectionproxymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_selectionproxymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_selectionproxymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_selectionproxymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_selectionproxymodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_selectionproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_selectionproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
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

const char* k_selectionproxymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selectionproxymodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_selectionproxymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_selectionproxymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_selectionproxymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_selectionproxymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_selectionproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_selectionproxymodel_thread(void* self) {
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

libqt_list /* of QObject* */ k_selectionproxymodel_children(void* self) {
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

QMetaObject__Connection* k_selectionproxymodel_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_selectionproxymodel_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_selectionproxymodel_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_selectionproxymodel_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_selectionproxymodel_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_selectionproxymodel_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_selectionproxymodel_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_selectionproxymodel_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_selectionproxymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_selectionproxymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_selectionproxymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_selectionproxymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_selectionproxymodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_selectionproxymodel_dynamic_property_names\n");
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

QBindingStorage* k_selectionproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_selectionproxymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_selectionproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_selectionproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_inherits(void* self, const char* classname) {
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

QMetaObject__Connection* k_selectionproxymodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_selectionproxymodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_selectionproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_selectionproxymodel_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_selectionproxymodel_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_selectionproxymodel_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_selectionproxymodel_disconnect23(void* self, void* receiver, const char* member) {
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

bool k_selectionproxymodel_qbase_submit(void* self) {
    return KSelectionProxyModel_QBaseSubmit((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_submit(void* self, bool (*callback)()) {
    KSelectionProxyModel_OnSubmit((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_revert(void* self) {
    KSelectionProxyModel_Revert((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_qbase_revert(void* self) {
    KSelectionProxyModel_QBaseRevert((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_revert(void* self, void (*callback)()) {
    KSelectionProxyModel_OnRevert((KSelectionProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_selectionproxymodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KSelectionProxyModel_ItemData((KSelectionProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_selectionproxymodel_qbase_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KSelectionProxyModel_QBaseItemData((KSelectionProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_selectionproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    KSelectionProxyModel_OnItemData((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_set_data(void* self, void* index, void* value, int role) {
    return KSelectionProxyModel_SetData((KSelectionProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_selectionproxymodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return KSelectionProxyModel_QBaseSetData((KSelectionProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_selectionproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    KSelectionProxyModel_OnSetData((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
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

bool k_selectionproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
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
    bool _out = KSelectionProxyModel_QBaseSetItemData((KSelectionProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_selectionproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    KSelectionProxyModel_OnSetItemData((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KSelectionProxyModel_SetHeaderData((KSelectionProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_selectionproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KSelectionProxyModel_QBaseSetHeaderData((KSelectionProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void k_selectionproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    KSelectionProxyModel_OnSetHeaderData((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_clear_item_data(void* self, void* index) {
    return KSelectionProxyModel_ClearItemData((KSelectionProxyModel*)self, (QModelIndex*)index);
}

bool k_selectionproxymodel_qbase_clear_item_data(void* self, void* index) {
    return KSelectionProxyModel_QBaseClearItemData((KSelectionProxyModel*)self, (QModelIndex*)index);
}

void k_selectionproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    KSelectionProxyModel_OnClearItemData((KSelectionProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_selectionproxymodel_buddy(void* self, void* index) {
    return KSelectionProxyModel_Buddy((KSelectionProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* k_selectionproxymodel_qbase_buddy(void* self, void* index) {
    return KSelectionProxyModel_QBaseBuddy((KSelectionProxyModel*)self, (QModelIndex*)index);
}

void k_selectionproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    KSelectionProxyModel_OnBuddy((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_can_fetch_more(void* self, void* parent) {
    return KSelectionProxyModel_CanFetchMore((KSelectionProxyModel*)self, (QModelIndex*)parent);
}

bool k_selectionproxymodel_qbase_can_fetch_more(void* self, void* parent) {
    return KSelectionProxyModel_QBaseCanFetchMore((KSelectionProxyModel*)self, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    KSelectionProxyModel_OnCanFetchMore((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_fetch_more(void* self, void* parent) {
    KSelectionProxyModel_FetchMore((KSelectionProxyModel*)self, (QModelIndex*)parent);
}

void k_selectionproxymodel_qbase_fetch_more(void* self, void* parent) {
    KSelectionProxyModel_QBaseFetchMore((KSelectionProxyModel*)self, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    KSelectionProxyModel_OnFetchMore((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_sort(void* self, int column, int32_t order) {
    KSelectionProxyModel_Sort((KSelectionProxyModel*)self, column, order);
}

void k_selectionproxymodel_qbase_sort(void* self, int column, int32_t order) {
    KSelectionProxyModel_QBaseSort((KSelectionProxyModel*)self, column, order);
}

void k_selectionproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KSelectionProxyModel_OnSort((KSelectionProxyModel*)self, (intptr_t)callback);
}

QSize* k_selectionproxymodel_span(void* self, void* index) {
    return KSelectionProxyModel_Span((KSelectionProxyModel*)self, (QModelIndex*)index);
}

QSize* k_selectionproxymodel_qbase_span(void* self, void* index) {
    return KSelectionProxyModel_QBaseSpan((KSelectionProxyModel*)self, (QModelIndex*)index);
}

void k_selectionproxymodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    KSelectionProxyModel_OnSpan((KSelectionProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_selectionproxymodel_sibling(void* self, int row, int column, void* idx) {
    return KSelectionProxyModel_Sibling((KSelectionProxyModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_selectionproxymodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return KSelectionProxyModel_QBaseSibling((KSelectionProxyModel*)self, row, column, (QModelIndex*)idx);
}

void k_selectionproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KSelectionProxyModel_OnSibling((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KSelectionProxyModel_CanDropMimeData((KSelectionProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_selectionproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KSelectionProxyModel_QBaseCanDropMimeData((KSelectionProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KSelectionProxyModel_OnCanDropMimeData((KSelectionProxyModel*)self, (intptr_t)callback);
}

int32_t k_selectionproxymodel_supported_drag_actions(void* self) {
    return KSelectionProxyModel_SupportedDragActions((KSelectionProxyModel*)self);
}

int32_t k_selectionproxymodel_qbase_supported_drag_actions(void* self) {
    return KSelectionProxyModel_QBaseSupportedDragActions((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    KSelectionProxyModel_OnSupportedDragActions((KSelectionProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_selectionproxymodel_role_names(void* self) {
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

libqt_map /* of int to char* */ k_selectionproxymodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KSelectionProxyModel_QBaseRoleNames((KSelectionProxyModel*)self);
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

void k_selectionproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    KSelectionProxyModel_OnRoleNames((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_insert_rows(void* self, int row, int count, void* parent) {
    return KSelectionProxyModel_InsertRows((KSelectionProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_selectionproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return KSelectionProxyModel_QBaseInsertRows((KSelectionProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KSelectionProxyModel_OnInsertRows((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_insert_columns(void* self, int column, int count, void* parent) {
    return KSelectionProxyModel_InsertColumns((KSelectionProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_selectionproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return KSelectionProxyModel_QBaseInsertColumns((KSelectionProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KSelectionProxyModel_OnInsertColumns((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_remove_rows(void* self, int row, int count, void* parent) {
    return KSelectionProxyModel_RemoveRows((KSelectionProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_selectionproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return KSelectionProxyModel_QBaseRemoveRows((KSelectionProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KSelectionProxyModel_OnRemoveRows((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_remove_columns(void* self, int column, int count, void* parent) {
    return KSelectionProxyModel_RemoveColumns((KSelectionProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_selectionproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return KSelectionProxyModel_QBaseRemoveColumns((KSelectionProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_selectionproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KSelectionProxyModel_OnRemoveColumns((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KSelectionProxyModel_MoveRows((KSelectionProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_selectionproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KSelectionProxyModel_QBaseMoveRows((KSelectionProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_selectionproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KSelectionProxyModel_OnMoveRows((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KSelectionProxyModel_MoveColumns((KSelectionProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_selectionproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KSelectionProxyModel_QBaseMoveColumns((KSelectionProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_selectionproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KSelectionProxyModel_OnMoveColumns((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    KSelectionProxyModel_MultiData((KSelectionProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_selectionproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    KSelectionProxyModel_QBaseMultiData((KSelectionProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_selectionproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    KSelectionProxyModel_OnMultiData((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_reset_internal_data(void* self) {
    KSelectionProxyModel_ResetInternalData((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_qbase_reset_internal_data(void* self) {
    KSelectionProxyModel_QBaseResetInternalData((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_reset_internal_data(void* self, void (*callback)()) {
    KSelectionProxyModel_OnResetInternalData((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_event(void* self, void* event) {
    return KSelectionProxyModel_Event((KSelectionProxyModel*)self, (QEvent*)event);
}

bool k_selectionproxymodel_qbase_event(void* self, void* event) {
    return KSelectionProxyModel_QBaseEvent((KSelectionProxyModel*)self, (QEvent*)event);
}

void k_selectionproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KSelectionProxyModel_OnEvent((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_event_filter(void* self, void* watched, void* event) {
    return KSelectionProxyModel_EventFilter((KSelectionProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_selectionproxymodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KSelectionProxyModel_QBaseEventFilter((KSelectionProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_selectionproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KSelectionProxyModel_OnEventFilter((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_timer_event(void* self, void* event) {
    KSelectionProxyModel_TimerEvent((KSelectionProxyModel*)self, (QTimerEvent*)event);
}

void k_selectionproxymodel_qbase_timer_event(void* self, void* event) {
    KSelectionProxyModel_QBaseTimerEvent((KSelectionProxyModel*)self, (QTimerEvent*)event);
}

void k_selectionproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KSelectionProxyModel_OnTimerEvent((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_child_event(void* self, void* event) {
    KSelectionProxyModel_ChildEvent((KSelectionProxyModel*)self, (QChildEvent*)event);
}

void k_selectionproxymodel_qbase_child_event(void* self, void* event) {
    KSelectionProxyModel_QBaseChildEvent((KSelectionProxyModel*)self, (QChildEvent*)event);
}

void k_selectionproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KSelectionProxyModel_OnChildEvent((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_custom_event(void* self, void* event) {
    KSelectionProxyModel_CustomEvent((KSelectionProxyModel*)self, (QEvent*)event);
}

void k_selectionproxymodel_qbase_custom_event(void* self, void* event) {
    KSelectionProxyModel_QBaseCustomEvent((KSelectionProxyModel*)self, (QEvent*)event);
}

void k_selectionproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KSelectionProxyModel_OnCustomEvent((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_connect_notify(void* self, void* signal) {
    KSelectionProxyModel_ConnectNotify((KSelectionProxyModel*)self, (QMetaMethod*)signal);
}

void k_selectionproxymodel_qbase_connect_notify(void* self, void* signal) {
    KSelectionProxyModel_QBaseConnectNotify((KSelectionProxyModel*)self, (QMetaMethod*)signal);
}

void k_selectionproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KSelectionProxyModel_OnConnectNotify((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_disconnect_notify(void* self, void* signal) {
    KSelectionProxyModel_DisconnectNotify((KSelectionProxyModel*)self, (QMetaMethod*)signal);
}

void k_selectionproxymodel_qbase_disconnect_notify(void* self, void* signal) {
    KSelectionProxyModel_QBaseDisconnectNotify((KSelectionProxyModel*)self, (QMetaMethod*)signal);
}

void k_selectionproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KSelectionProxyModel_OnDisconnectNotify((KSelectionProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_selectionproxymodel_create_source_index(void* self, int row, int col, void* internalPtr) {
    return KSelectionProxyModel_CreateSourceIndex((KSelectionProxyModel*)self, row, col, internalPtr);
}

QModelIndex* k_selectionproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr) {
    return KSelectionProxyModel_QBaseCreateSourceIndex((KSelectionProxyModel*)self, row, col, internalPtr);
}

void k_selectionproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KSelectionProxyModel_OnCreateSourceIndex((KSelectionProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_selectionproxymodel_create_index(void* self, int row, int column) {
    return KSelectionProxyModel_CreateIndex((KSelectionProxyModel*)self, row, column);
}

QModelIndex* k_selectionproxymodel_qbase_create_index(void* self, int row, int column) {
    return KSelectionProxyModel_QBaseCreateIndex((KSelectionProxyModel*)self, row, column);
}

void k_selectionproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    KSelectionProxyModel_OnCreateIndex((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KSelectionProxyModel_EncodeData((KSelectionProxyModel*)self, indexes, (QDataStream*)stream);
}

void k_selectionproxymodel_qbase_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KSelectionProxyModel_QBaseEncodeData((KSelectionProxyModel*)self, indexes, (QDataStream*)stream);
}

void k_selectionproxymodel_on_encode_data(void* self, void (*callback)(void*, libqt_list /* of QModelIndex* */, void*)) {
    KSelectionProxyModel_OnEncodeData((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KSelectionProxyModel_DecodeData((KSelectionProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_selectionproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KSelectionProxyModel_QBaseDecodeData((KSelectionProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_selectionproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    KSelectionProxyModel_OnDecodeData((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    KSelectionProxyModel_BeginInsertRows((KSelectionProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_selectionproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    KSelectionProxyModel_QBaseBeginInsertRows((KSelectionProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_selectionproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KSelectionProxyModel_OnBeginInsertRows((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_end_insert_rows(void* self) {
    KSelectionProxyModel_EndInsertRows((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_qbase_end_insert_rows(void* self) {
    KSelectionProxyModel_QBaseEndInsertRows((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_end_insert_rows(void* self, void (*callback)()) {
    KSelectionProxyModel_OnEndInsertRows((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    KSelectionProxyModel_BeginRemoveRows((KSelectionProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_selectionproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    KSelectionProxyModel_QBaseBeginRemoveRows((KSelectionProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_selectionproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KSelectionProxyModel_OnBeginRemoveRows((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_end_remove_rows(void* self) {
    KSelectionProxyModel_EndRemoveRows((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_qbase_end_remove_rows(void* self) {
    KSelectionProxyModel_QBaseEndRemoveRows((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_end_remove_rows(void* self, void (*callback)()) {
    KSelectionProxyModel_OnEndRemoveRows((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KSelectionProxyModel_BeginMoveRows((KSelectionProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_selectionproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KSelectionProxyModel_QBaseBeginMoveRows((KSelectionProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_selectionproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KSelectionProxyModel_OnBeginMoveRows((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_end_move_rows(void* self) {
    KSelectionProxyModel_EndMoveRows((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_qbase_end_move_rows(void* self) {
    KSelectionProxyModel_QBaseEndMoveRows((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_end_move_rows(void* self, void (*callback)()) {
    KSelectionProxyModel_OnEndMoveRows((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    KSelectionProxyModel_BeginInsertColumns((KSelectionProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_selectionproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    KSelectionProxyModel_QBaseBeginInsertColumns((KSelectionProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_selectionproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KSelectionProxyModel_OnBeginInsertColumns((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_end_insert_columns(void* self) {
    KSelectionProxyModel_EndInsertColumns((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_qbase_end_insert_columns(void* self) {
    KSelectionProxyModel_QBaseEndInsertColumns((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_end_insert_columns(void* self, void (*callback)()) {
    KSelectionProxyModel_OnEndInsertColumns((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    KSelectionProxyModel_BeginRemoveColumns((KSelectionProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_selectionproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    KSelectionProxyModel_QBaseBeginRemoveColumns((KSelectionProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_selectionproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KSelectionProxyModel_OnBeginRemoveColumns((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_end_remove_columns(void* self) {
    KSelectionProxyModel_EndRemoveColumns((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_qbase_end_remove_columns(void* self) {
    KSelectionProxyModel_QBaseEndRemoveColumns((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_end_remove_columns(void* self, void (*callback)()) {
    KSelectionProxyModel_OnEndRemoveColumns((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KSelectionProxyModel_BeginMoveColumns((KSelectionProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_selectionproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KSelectionProxyModel_QBaseBeginMoveColumns((KSelectionProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_selectionproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KSelectionProxyModel_OnBeginMoveColumns((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_end_move_columns(void* self) {
    KSelectionProxyModel_EndMoveColumns((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_qbase_end_move_columns(void* self) {
    KSelectionProxyModel_QBaseEndMoveColumns((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_end_move_columns(void* self, void (*callback)()) {
    KSelectionProxyModel_OnEndMoveColumns((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_begin_reset_model(void* self) {
    KSelectionProxyModel_BeginResetModel((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_qbase_begin_reset_model(void* self) {
    KSelectionProxyModel_QBaseBeginResetModel((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_begin_reset_model(void* self, void (*callback)()) {
    KSelectionProxyModel_OnBeginResetModel((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_end_reset_model(void* self) {
    KSelectionProxyModel_EndResetModel((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_qbase_end_reset_model(void* self) {
    KSelectionProxyModel_QBaseEndResetModel((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_end_reset_model(void* self, void (*callback)()) {
    KSelectionProxyModel_OnEndResetModel((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_change_persistent_index(void* self, void* from, void* to) {
    KSelectionProxyModel_ChangePersistentIndex((KSelectionProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_selectionproxymodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    KSelectionProxyModel_QBaseChangePersistentIndex((KSelectionProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_selectionproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    KSelectionProxyModel_OnChangePersistentIndex((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KSelectionProxyModel_ChangePersistentIndexList((KSelectionProxyModel*)self, from, to);
}

void k_selectionproxymodel_qbase_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KSelectionProxyModel_QBaseChangePersistentIndexList((KSelectionProxyModel*)self, from, to);
}

void k_selectionproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */)) {
    KSelectionProxyModel_OnChangePersistentIndexList((KSelectionProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_selectionproxymodel_persistent_index_list(void* self) {
    libqt_list _arr = KSelectionProxyModel_PersistentIndexList((KSelectionProxyModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_selectionproxymodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = KSelectionProxyModel_QBasePersistentIndexList((KSelectionProxyModel*)self);
    return _arr;
}

void k_selectionproxymodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*callback)()) {
    KSelectionProxyModel_OnPersistentIndexList((KSelectionProxyModel*)self, (intptr_t)callback);
}

QObject* k_selectionproxymodel_sender(void* self) {
    return KSelectionProxyModel_Sender((KSelectionProxyModel*)self);
}

QObject* k_selectionproxymodel_qbase_sender(void* self) {
    return KSelectionProxyModel_QBaseSender((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_sender(void* self, QObject* (*callback)()) {
    KSelectionProxyModel_OnSender((KSelectionProxyModel*)self, (intptr_t)callback);
}

int32_t k_selectionproxymodel_sender_signal_index(void* self) {
    return KSelectionProxyModel_SenderSignalIndex((KSelectionProxyModel*)self);
}

int32_t k_selectionproxymodel_qbase_sender_signal_index(void* self) {
    return KSelectionProxyModel_QBaseSenderSignalIndex((KSelectionProxyModel*)self);
}

void k_selectionproxymodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KSelectionProxyModel_OnSenderSignalIndex((KSelectionProxyModel*)self, (intptr_t)callback);
}

int32_t k_selectionproxymodel_receivers(void* self, const char* signal) {
    return KSelectionProxyModel_Receivers((KSelectionProxyModel*)self, signal);
}

int32_t k_selectionproxymodel_qbase_receivers(void* self, const char* signal) {
    return KSelectionProxyModel_QBaseReceivers((KSelectionProxyModel*)self, signal);
}

void k_selectionproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KSelectionProxyModel_OnReceivers((KSelectionProxyModel*)self, (intptr_t)callback);
}

bool k_selectionproxymodel_is_signal_connected(void* self, void* signal) {
    return KSelectionProxyModel_IsSignalConnected((KSelectionProxyModel*)self, (QMetaMethod*)signal);
}

bool k_selectionproxymodel_qbase_is_signal_connected(void* self, void* signal) {
    return KSelectionProxyModel_QBaseIsSignalConnected((KSelectionProxyModel*)self, (QMetaMethod*)signal);
}

void k_selectionproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KSelectionProxyModel_OnIsSignalConnected((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_root_index_about_to_be_removed(void* self, void (*callback)(void*, void*)) {
    KSelectionProxyModel_Connect_RootIndexAboutToBeRemoved((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_root_index_added(void* self, void (*callback)(void*, void*)) {
    KSelectionProxyModel_Connect_RootIndexAdded((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_root_selection_about_to_be_removed(void* self, void (*callback)(void*, void*)) {
    KSelectionProxyModel_Connect_RootSelectionAboutToBeRemoved((KSelectionProxyModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_root_selection_added(void* self, void (*callback)(void*, void*)) {
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

void k_selectionproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_selectionproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_selectionproxymodel_delete(void* self) {
    KSelectionProxyModel_Delete((KSelectionProxyModel*)(self));
}
