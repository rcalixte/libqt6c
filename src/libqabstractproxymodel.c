#include "libqabstractitemmodel.hpp"
#include "libqcoreevent.hpp"
#include "libqdatastream.hpp"
#include "libqitemselectionmodel.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqabstractproxymodel.hpp"
#include "libqabstractproxymodel.h"

QAbstractProxyModel* q_abstractproxymodel_new() {
    return QAbstractProxyModel_new();
}

QAbstractProxyModel* q_abstractproxymodel_new2(void* parent) {
    return QAbstractProxyModel_new2((QObject*)parent);
}

const QMetaObject* q_abstractproxymodel_meta_object(void* self) {
    return QAbstractProxyModel_MetaObject((QAbstractProxyModel*)self);
}

void* q_abstractproxymodel_metacast(void* self, const char* param1) {
    return QAbstractProxyModel_Metacast((QAbstractProxyModel*)self, param1);
}

int32_t q_abstractproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstractProxyModel_Metacall((QAbstractProxyModel*)self, param1, param2, param3);
}

void q_abstractproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAbstractProxyModel_OnMetacall((QAbstractProxyModel*)self, (intptr_t)callback);
}

int32_t q_abstractproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstractProxyModel_QBaseMetacall((QAbstractProxyModel*)self, param1, param2, param3);
}

const char* q_abstractproxymodel_tr(const char* s) {
    libqt_string _str = QAbstractProxyModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractproxymodel_set_source_model(void* self, void* sourceModel) {
    QAbstractProxyModel_SetSourceModel((QAbstractProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void q_abstractproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*)) {
    QAbstractProxyModel_OnSetSourceModel((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_qbase_set_source_model(void* self, void* sourceModel) {
    QAbstractProxyModel_QBaseSetSourceModel((QAbstractProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

QAbstractItemModel* q_abstractproxymodel_source_model(void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

QModelIndex* q_abstractproxymodel_map_to_source(void* self, void* proxyIndex) {
    return QAbstractProxyModel_MapToSource((QAbstractProxyModel*)self, (QModelIndex*)proxyIndex);
}

void q_abstractproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractProxyModel_OnMapToSource((QAbstractProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractproxymodel_qbase_map_to_source(void* self, void* proxyIndex) {
    return QAbstractProxyModel_QBaseMapToSource((QAbstractProxyModel*)self, (QModelIndex*)proxyIndex);
}

QModelIndex* q_abstractproxymodel_map_from_source(void* self, void* sourceIndex) {
    return QAbstractProxyModel_MapFromSource((QAbstractProxyModel*)self, (QModelIndex*)sourceIndex);
}

void q_abstractproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractProxyModel_OnMapFromSource((QAbstractProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractproxymodel_qbase_map_from_source(void* self, void* sourceIndex) {
    return QAbstractProxyModel_QBaseMapFromSource((QAbstractProxyModel*)self, (QModelIndex*)sourceIndex);
}

QItemSelection* q_abstractproxymodel_map_selection_to_source(void* self, void* selection) {
    return QAbstractProxyModel_MapSelectionToSource((QAbstractProxyModel*)self, (QItemSelection*)selection);
}

void q_abstractproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    QAbstractProxyModel_OnMapSelectionToSource((QAbstractProxyModel*)self, (intptr_t)callback);
}

QItemSelection* q_abstractproxymodel_qbase_map_selection_to_source(void* self, void* selection) {
    return QAbstractProxyModel_QBaseMapSelectionToSource((QAbstractProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* q_abstractproxymodel_map_selection_from_source(void* self, void* selection) {
    return QAbstractProxyModel_MapSelectionFromSource((QAbstractProxyModel*)self, (QItemSelection*)selection);
}

void q_abstractproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    QAbstractProxyModel_OnMapSelectionFromSource((QAbstractProxyModel*)self, (intptr_t)callback);
}

QItemSelection* q_abstractproxymodel_qbase_map_selection_from_source(void* self, void* selection) {
    return QAbstractProxyModel_QBaseMapSelectionFromSource((QAbstractProxyModel*)self, (QItemSelection*)selection);
}

bool q_abstractproxymodel_submit(void* self) {
    return QAbstractProxyModel_Submit((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_submit(void* self, bool (*callback)()) {
    QAbstractProxyModel_OnSubmit((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_qbase_submit(void* self) {
    return QAbstractProxyModel_QBaseSubmit((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_revert(void* self) {
    QAbstractProxyModel_Revert((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_revert(void* self, void (*callback)()) {
    QAbstractProxyModel_OnRevert((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_qbase_revert(void* self) {
    QAbstractProxyModel_QBaseRevert((QAbstractProxyModel*)self);
}

QVariant* q_abstractproxymodel_data(void* self, void* proxyIndex, int role) {
    return QAbstractProxyModel_Data((QAbstractProxyModel*)self, (QModelIndex*)proxyIndex, role);
}

void q_abstractproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    QAbstractProxyModel_OnData((QAbstractProxyModel*)self, (intptr_t)callback);
}

QVariant* q_abstractproxymodel_qbase_data(void* self, void* proxyIndex, int role) {
    return QAbstractProxyModel_QBaseData((QAbstractProxyModel*)self, (QModelIndex*)proxyIndex, role);
}

QVariant* q_abstractproxymodel_header_data(void* self, int section, int32_t orientation, int role) {
    return QAbstractProxyModel_HeaderData((QAbstractProxyModel*)self, section, orientation, role);
}

void q_abstractproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    QAbstractProxyModel_OnHeaderData((QAbstractProxyModel*)self, (intptr_t)callback);
}

QVariant* q_abstractproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return QAbstractProxyModel_QBaseHeaderData((QAbstractProxyModel*)self, section, orientation, role);
}

libqt_map /* of int to QVariant* */ q_abstractproxymodel_item_data(void* self, void* index) {
    return QAbstractProxyModel_ItemData((QAbstractProxyModel*)self, (QModelIndex*)index);
}

void q_abstractproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    QAbstractProxyModel_OnItemData((QAbstractProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_abstractproxymodel_qbase_item_data(void* self, void* index) {
    return QAbstractProxyModel_QBaseItemData((QAbstractProxyModel*)self, (QModelIndex*)index);
}

int64_t q_abstractproxymodel_flags(void* self, void* index) {
    return QAbstractProxyModel_Flags((QAbstractProxyModel*)self, (QModelIndex*)index);
}

void q_abstractproxymodel_on_flags(void* self, int64_t (*callback)(void*, void*)) {
    QAbstractProxyModel_OnFlags((QAbstractProxyModel*)self, (intptr_t)callback);
}

int64_t q_abstractproxymodel_qbase_flags(void* self, void* index) {
    return QAbstractProxyModel_QBaseFlags((QAbstractProxyModel*)self, (QModelIndex*)index);
}

bool q_abstractproxymodel_set_data(void* self, void* index, void* value, int role) {
    return QAbstractProxyModel_SetData((QAbstractProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_abstractproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    QAbstractProxyModel_OnSetData((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QAbstractProxyModel_QBaseSetData((QAbstractProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool q_abstractproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QAbstractProxyModel_SetItemData((QAbstractProxyModel*)self, (QModelIndex*)index, roles);
}

void q_abstractproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QAbstractProxyModel_OnSetItemData((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QAbstractProxyModel_QBaseSetItemData((QAbstractProxyModel*)self, (QModelIndex*)index, roles);
}

bool q_abstractproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QAbstractProxyModel_SetHeaderData((QAbstractProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void q_abstractproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    QAbstractProxyModel_OnSetHeaderData((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QAbstractProxyModel_QBaseSetHeaderData((QAbstractProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_abstractproxymodel_clear_item_data(void* self, void* index) {
    return QAbstractProxyModel_ClearItemData((QAbstractProxyModel*)self, (QModelIndex*)index);
}

void q_abstractproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    QAbstractProxyModel_OnClearItemData((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_qbase_clear_item_data(void* self, void* index) {
    return QAbstractProxyModel_QBaseClearItemData((QAbstractProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* q_abstractproxymodel_buddy(void* self, void* index) {
    return QAbstractProxyModel_Buddy((QAbstractProxyModel*)self, (QModelIndex*)index);
}

void q_abstractproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractProxyModel_OnBuddy((QAbstractProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractproxymodel_qbase_buddy(void* self, void* index) {
    return QAbstractProxyModel_QBaseBuddy((QAbstractProxyModel*)self, (QModelIndex*)index);
}

bool q_abstractproxymodel_can_fetch_more(void* self, void* parent) {
    return QAbstractProxyModel_CanFetchMore((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    QAbstractProxyModel_OnCanFetchMore((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_qbase_can_fetch_more(void* self, void* parent) {
    return QAbstractProxyModel_QBaseCanFetchMore((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

void q_abstractproxymodel_fetch_more(void* self, void* parent) {
    QAbstractProxyModel_FetchMore((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    QAbstractProxyModel_OnFetchMore((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_qbase_fetch_more(void* self, void* parent) {
    QAbstractProxyModel_QBaseFetchMore((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

void q_abstractproxymodel_sort(void* self, int column, int32_t order) {
    QAbstractProxyModel_Sort((QAbstractProxyModel*)self, column, order);
}

void q_abstractproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QAbstractProxyModel_OnSort((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_qbase_sort(void* self, int column, int32_t order) {
    QAbstractProxyModel_QBaseSort((QAbstractProxyModel*)self, column, order);
}

QSize* q_abstractproxymodel_span(void* self, void* index) {
    return QAbstractProxyModel_Span((QAbstractProxyModel*)self, (QModelIndex*)index);
}

void q_abstractproxymodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    QAbstractProxyModel_OnSpan((QAbstractProxyModel*)self, (intptr_t)callback);
}

QSize* q_abstractproxymodel_qbase_span(void* self, void* index) {
    return QAbstractProxyModel_QBaseSpan((QAbstractProxyModel*)self, (QModelIndex*)index);
}

bool q_abstractproxymodel_has_children(void* self, void* parent) {
    return QAbstractProxyModel_HasChildren((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QAbstractProxyModel_OnHasChildren((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_qbase_has_children(void* self, void* parent) {
    return QAbstractProxyModel_QBaseHasChildren((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

QModelIndex* q_abstractproxymodel_sibling(void* self, int row, int column, void* idx) {
    return QAbstractProxyModel_Sibling((QAbstractProxyModel*)self, row, column, (QModelIndex*)idx);
}

void q_abstractproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QAbstractProxyModel_OnSibling((QAbstractProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractproxymodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QAbstractProxyModel_QBaseSibling((QAbstractProxyModel*)self, row, column, (QModelIndex*)idx);
}

QMimeData* q_abstractproxymodel_mime_data(void* self, libqt_list indexes) {
    return QAbstractProxyModel_MimeData((QAbstractProxyModel*)self, indexes);
}

void q_abstractproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list)) {
    QAbstractProxyModel_OnMimeData((QAbstractProxyModel*)self, (intptr_t)callback);
}

QMimeData* q_abstractproxymodel_qbase_mime_data(void* self, libqt_list indexes) {
    return QAbstractProxyModel_QBaseMimeData((QAbstractProxyModel*)self, indexes);
}

bool q_abstractproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QAbstractProxyModel_CanDropMimeData((QAbstractProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QAbstractProxyModel_OnCanDropMimeData((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QAbstractProxyModel_QBaseCanDropMimeData((QAbstractProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_abstractproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QAbstractProxyModel_DropMimeData((QAbstractProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QAbstractProxyModel_OnDropMimeData((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QAbstractProxyModel_QBaseDropMimeData((QAbstractProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

const char** q_abstractproxymodel_mime_types(void* self) {
    libqt_list _arr = QAbstractProxyModel_MimeTypes((QAbstractProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_abstractproxymodel_mime_types");
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

void q_abstractproxymodel_on_mime_types(void* self, const char** (*callback)()) {
    QAbstractProxyModel_OnMimeTypes((QAbstractProxyModel*)self, (intptr_t)callback);
}

const char** q_abstractproxymodel_qbase_mime_types(void* self) {
    libqt_list _arr = QAbstractProxyModel_QBaseMimeTypes((QAbstractProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_abstractproxymodel_mime_types");
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

int64_t q_abstractproxymodel_supported_drag_actions(void* self) {
    return QAbstractProxyModel_SupportedDragActions((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_supported_drag_actions(void* self, int64_t (*callback)()) {
    QAbstractProxyModel_OnSupportedDragActions((QAbstractProxyModel*)self, (intptr_t)callback);
}

int64_t q_abstractproxymodel_qbase_supported_drag_actions(void* self) {
    return QAbstractProxyModel_QBaseSupportedDragActions((QAbstractProxyModel*)self);
}

int64_t q_abstractproxymodel_supported_drop_actions(void* self) {
    return QAbstractProxyModel_SupportedDropActions((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_supported_drop_actions(void* self, int64_t (*callback)()) {
    QAbstractProxyModel_OnSupportedDropActions((QAbstractProxyModel*)self, (intptr_t)callback);
}

int64_t q_abstractproxymodel_qbase_supported_drop_actions(void* self) {
    return QAbstractProxyModel_QBaseSupportedDropActions((QAbstractProxyModel*)self);
}

libqt_map /* of int to char* */ q_abstractproxymodel_role_names(void* self) {
    return QAbstractProxyModel_RoleNames((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    QAbstractProxyModel_OnRoleNames((QAbstractProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_abstractproxymodel_qbase_role_names(void* self) {
    return QAbstractProxyModel_QBaseRoleNames((QAbstractProxyModel*)self);
}

QModelIndex* q_abstractproxymodel_create_source_index(void* self, int row, int col, void* internalPtr) {
    return QAbstractProxyModel_CreateSourceIndex((QAbstractProxyModel*)self, row, col, internalPtr);
}

void q_abstractproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QAbstractProxyModel_OnCreateSourceIndex((QAbstractProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr) {
    return QAbstractProxyModel_QBaseCreateSourceIndex((QAbstractProxyModel*)self, row, col, internalPtr);
}

const char* q_abstractproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractProxyModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractProxyModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_abstractproxymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool q_abstractproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_abstractproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_abstractproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_abstractproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_abstractproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstractproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstractproxymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_abstractproxymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_abstractproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_abstractproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_abstractproxymodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_abstractproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_abstractproxymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_abstractproxymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_abstractproxymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_abstractproxymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_abstractproxymodel_check_index2(void* self, void* index, int64_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_abstractproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_abstractproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_abstractproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_abstractproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_abstractproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_abstractproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_abstractproxymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractproxymodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstractproxymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstractproxymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstractproxymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstractproxymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstractproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstractproxymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstractproxymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstractproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_abstractproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstractproxymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstractproxymodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstractproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_abstractproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstractproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstractproxymodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstractproxymodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstractproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstractproxymodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_abstractproxymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstractproxymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstractproxymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstractproxymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstractproxymodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_abstractproxymodel_dynamic_property_names");
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

QBindingStorage* q_abstractproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstractproxymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstractproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstractproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstractproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_abstractproxymodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_abstractproxymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_abstractproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_abstractproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_abstractproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstractproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* q_abstractproxymodel_index(void* self, int row, int column, void* parent) {
    return QAbstractProxyModel_Index((QAbstractProxyModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_abstractproxymodel_qbase_index(void* self, int row, int column, void* parent) {
    return QAbstractProxyModel_QBaseIndex((QAbstractProxyModel*)self, row, column, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QAbstractProxyModel_OnIndex((QAbstractProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractproxymodel_parent(void* self, void* child) {
    return QAbstractProxyModel_Parent((QAbstractProxyModel*)self, (QModelIndex*)child);
}

QModelIndex* q_abstractproxymodel_qbase_parent(void* self, void* child) {
    return QAbstractProxyModel_QBaseParent((QAbstractProxyModel*)self, (QModelIndex*)child);
}

void q_abstractproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractProxyModel_OnParent((QAbstractProxyModel*)self, (intptr_t)callback);
}

int32_t q_abstractproxymodel_row_count(void* self, void* parent) {
    return QAbstractProxyModel_RowCount((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

int32_t q_abstractproxymodel_qbase_row_count(void* self, void* parent) {
    return QAbstractProxyModel_QBaseRowCount((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    QAbstractProxyModel_OnRowCount((QAbstractProxyModel*)self, (intptr_t)callback);
}

int32_t q_abstractproxymodel_column_count(void* self, void* parent) {
    return QAbstractProxyModel_ColumnCount((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

int32_t q_abstractproxymodel_qbase_column_count(void* self, void* parent) {
    return QAbstractProxyModel_QBaseColumnCount((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QAbstractProxyModel_OnColumnCount((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractProxyModel_InsertRows((QAbstractProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool q_abstractproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractProxyModel_QBaseInsertRows((QAbstractProxyModel*)self, row, count, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractProxyModel_OnInsertRows((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractProxyModel_InsertColumns((QAbstractProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool q_abstractproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractProxyModel_QBaseInsertColumns((QAbstractProxyModel*)self, column, count, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractProxyModel_OnInsertColumns((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractProxyModel_RemoveRows((QAbstractProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool q_abstractproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractProxyModel_QBaseRemoveRows((QAbstractProxyModel*)self, row, count, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractProxyModel_OnRemoveRows((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractProxyModel_RemoveColumns((QAbstractProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool q_abstractproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractProxyModel_QBaseRemoveColumns((QAbstractProxyModel*)self, column, count, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractProxyModel_OnRemoveColumns((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QAbstractProxyModel_MoveRows((QAbstractProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstractproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QAbstractProxyModel_QBaseMoveRows((QAbstractProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_abstractproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractProxyModel_OnMoveRows((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QAbstractProxyModel_MoveColumns((QAbstractProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstractproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QAbstractProxyModel_QBaseMoveColumns((QAbstractProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_abstractproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractProxyModel_OnMoveColumns((QAbstractProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_abstractproxymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QAbstractProxyModel_Match((QAbstractProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_abstractproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QAbstractProxyModel_QBaseMatch((QAbstractProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_abstractproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(void*, void*, int, void*, int, int64_t)) {
    QAbstractProxyModel_OnMatch((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QAbstractProxyModel_MultiData((QAbstractProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_abstractproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QAbstractProxyModel_QBaseMultiData((QAbstractProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_abstractproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractProxyModel_OnMultiData((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_reset_internal_data(void* self) {
    QAbstractProxyModel_ResetInternalData((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_qbase_reset_internal_data(void* self) {
    QAbstractProxyModel_QBaseResetInternalData((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_reset_internal_data(void* self, void (*callback)()) {
    QAbstractProxyModel_OnResetInternalData((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_event(void* self, void* event) {
    return QAbstractProxyModel_Event((QAbstractProxyModel*)self, (QEvent*)event);
}

bool q_abstractproxymodel_qbase_event(void* self, void* event) {
    return QAbstractProxyModel_QBaseEvent((QAbstractProxyModel*)self, (QEvent*)event);
}

void q_abstractproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QAbstractProxyModel_OnEvent((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_event_filter(void* self, void* watched, void* event) {
    return QAbstractProxyModel_EventFilter((QAbstractProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_abstractproxymodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractProxyModel_QBaseEventFilter((QAbstractProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_abstractproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAbstractProxyModel_OnEventFilter((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_timer_event(void* self, void* event) {
    QAbstractProxyModel_TimerEvent((QAbstractProxyModel*)self, (QTimerEvent*)event);
}

void q_abstractproxymodel_qbase_timer_event(void* self, void* event) {
    QAbstractProxyModel_QBaseTimerEvent((QAbstractProxyModel*)self, (QTimerEvent*)event);
}

void q_abstractproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAbstractProxyModel_OnTimerEvent((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_child_event(void* self, void* event) {
    QAbstractProxyModel_ChildEvent((QAbstractProxyModel*)self, (QChildEvent*)event);
}

void q_abstractproxymodel_qbase_child_event(void* self, void* event) {
    QAbstractProxyModel_QBaseChildEvent((QAbstractProxyModel*)self, (QChildEvent*)event);
}

void q_abstractproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAbstractProxyModel_OnChildEvent((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_custom_event(void* self, void* event) {
    QAbstractProxyModel_CustomEvent((QAbstractProxyModel*)self, (QEvent*)event);
}

void q_abstractproxymodel_qbase_custom_event(void* self, void* event) {
    QAbstractProxyModel_QBaseCustomEvent((QAbstractProxyModel*)self, (QEvent*)event);
}

void q_abstractproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAbstractProxyModel_OnCustomEvent((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_connect_notify(void* self, void* signal) {
    QAbstractProxyModel_ConnectNotify((QAbstractProxyModel*)self, (QMetaMethod*)signal);
}

void q_abstractproxymodel_qbase_connect_notify(void* self, void* signal) {
    QAbstractProxyModel_QBaseConnectNotify((QAbstractProxyModel*)self, (QMetaMethod*)signal);
}

void q_abstractproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractProxyModel_OnConnectNotify((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_disconnect_notify(void* self, void* signal) {
    QAbstractProxyModel_DisconnectNotify((QAbstractProxyModel*)self, (QMetaMethod*)signal);
}

void q_abstractproxymodel_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractProxyModel_QBaseDisconnectNotify((QAbstractProxyModel*)self, (QMetaMethod*)signal);
}

void q_abstractproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractProxyModel_OnDisconnectNotify((QAbstractProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractproxymodel_create_index(void* self, int row, int column) {
    return QAbstractProxyModel_CreateIndex((QAbstractProxyModel*)self, row, column);
}

QModelIndex* q_abstractproxymodel_qbase_create_index(void* self, int row, int column) {
    return QAbstractProxyModel_QBaseCreateIndex((QAbstractProxyModel*)self, row, column);
}

void q_abstractproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    QAbstractProxyModel_OnCreateIndex((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_encode_data(void* self, libqt_list indexes, void* stream) {
    QAbstractProxyModel_EncodeData((QAbstractProxyModel*)self, indexes, (QDataStream*)stream);
}

void q_abstractproxymodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    QAbstractProxyModel_QBaseEncodeData((QAbstractProxyModel*)self, indexes, (QDataStream*)stream);
}

void q_abstractproxymodel_on_encode_data(void* self, void (*callback)(void*, libqt_list, void*)) {
    QAbstractProxyModel_OnEncodeData((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QAbstractProxyModel_DecodeData((QAbstractProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_abstractproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QAbstractProxyModel_QBaseDecodeData((QAbstractProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_abstractproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    QAbstractProxyModel_OnDecodeData((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QAbstractProxyModel_BeginInsertRows((QAbstractProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QAbstractProxyModel_QBaseBeginInsertRows((QAbstractProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractProxyModel_OnBeginInsertRows((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_end_insert_rows(void* self) {
    QAbstractProxyModel_EndInsertRows((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_qbase_end_insert_rows(void* self) {
    QAbstractProxyModel_QBaseEndInsertRows((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_end_insert_rows(void* self, void (*callback)()) {
    QAbstractProxyModel_OnEndInsertRows((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QAbstractProxyModel_BeginRemoveRows((QAbstractProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QAbstractProxyModel_QBaseBeginRemoveRows((QAbstractProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractProxyModel_OnBeginRemoveRows((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_end_remove_rows(void* self) {
    QAbstractProxyModel_EndRemoveRows((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_qbase_end_remove_rows(void* self) {
    QAbstractProxyModel_QBaseEndRemoveRows((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_end_remove_rows(void* self, void (*callback)()) {
    QAbstractProxyModel_OnEndRemoveRows((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QAbstractProxyModel_BeginMoveRows((QAbstractProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool q_abstractproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QAbstractProxyModel_QBaseBeginMoveRows((QAbstractProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_abstractproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractProxyModel_OnBeginMoveRows((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_end_move_rows(void* self) {
    QAbstractProxyModel_EndMoveRows((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_qbase_end_move_rows(void* self) {
    QAbstractProxyModel_QBaseEndMoveRows((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_end_move_rows(void* self, void (*callback)()) {
    QAbstractProxyModel_OnEndMoveRows((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QAbstractProxyModel_BeginInsertColumns((QAbstractProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QAbstractProxyModel_QBaseBeginInsertColumns((QAbstractProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractProxyModel_OnBeginInsertColumns((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_end_insert_columns(void* self) {
    QAbstractProxyModel_EndInsertColumns((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_qbase_end_insert_columns(void* self) {
    QAbstractProxyModel_QBaseEndInsertColumns((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_end_insert_columns(void* self, void (*callback)()) {
    QAbstractProxyModel_OnEndInsertColumns((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QAbstractProxyModel_BeginRemoveColumns((QAbstractProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QAbstractProxyModel_QBaseBeginRemoveColumns((QAbstractProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractProxyModel_OnBeginRemoveColumns((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_end_remove_columns(void* self) {
    QAbstractProxyModel_EndRemoveColumns((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_qbase_end_remove_columns(void* self) {
    QAbstractProxyModel_QBaseEndRemoveColumns((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_end_remove_columns(void* self, void (*callback)()) {
    QAbstractProxyModel_OnEndRemoveColumns((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QAbstractProxyModel_BeginMoveColumns((QAbstractProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool q_abstractproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QAbstractProxyModel_QBaseBeginMoveColumns((QAbstractProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_abstractproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractProxyModel_OnBeginMoveColumns((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_end_move_columns(void* self) {
    QAbstractProxyModel_EndMoveColumns((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_qbase_end_move_columns(void* self) {
    QAbstractProxyModel_QBaseEndMoveColumns((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_end_move_columns(void* self, void (*callback)()) {
    QAbstractProxyModel_OnEndMoveColumns((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_begin_reset_model(void* self) {
    QAbstractProxyModel_BeginResetModel((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_qbase_begin_reset_model(void* self) {
    QAbstractProxyModel_QBaseBeginResetModel((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_begin_reset_model(void* self, void (*callback)()) {
    QAbstractProxyModel_OnBeginResetModel((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_end_reset_model(void* self) {
    QAbstractProxyModel_EndResetModel((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_qbase_end_reset_model(void* self) {
    QAbstractProxyModel_QBaseEndResetModel((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_end_reset_model(void* self, void (*callback)()) {
    QAbstractProxyModel_OnEndResetModel((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_change_persistent_index(void* self, void* from, void* to) {
    QAbstractProxyModel_ChangePersistentIndex((QAbstractProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_abstractproxymodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QAbstractProxyModel_QBaseChangePersistentIndex((QAbstractProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_abstractproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractProxyModel_OnChangePersistentIndex((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QAbstractProxyModel_ChangePersistentIndexList((QAbstractProxyModel*)self, from, to);
}

void q_abstractproxymodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QAbstractProxyModel_QBaseChangePersistentIndexList((QAbstractProxyModel*)self, from, to);
}

void q_abstractproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list)) {
    QAbstractProxyModel_OnChangePersistentIndexList((QAbstractProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_abstractproxymodel_persistent_index_list(void* self) {
    libqt_list _arr = QAbstractProxyModel_PersistentIndexList((QAbstractProxyModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_abstractproxymodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QAbstractProxyModel_QBasePersistentIndexList((QAbstractProxyModel*)self);
    return _arr;
}

void q_abstractproxymodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*callback)()) {
    QAbstractProxyModel_OnPersistentIndexList((QAbstractProxyModel*)self, (intptr_t)callback);
}

QObject* q_abstractproxymodel_sender(void* self) {
    return QAbstractProxyModel_Sender((QAbstractProxyModel*)self);
}

QObject* q_abstractproxymodel_qbase_sender(void* self) {
    return QAbstractProxyModel_QBaseSender((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_sender(void* self, QObject* (*callback)()) {
    QAbstractProxyModel_OnSender((QAbstractProxyModel*)self, (intptr_t)callback);
}

int32_t q_abstractproxymodel_sender_signal_index(void* self) {
    return QAbstractProxyModel_SenderSignalIndex((QAbstractProxyModel*)self);
}

int32_t q_abstractproxymodel_qbase_sender_signal_index(void* self) {
    return QAbstractProxyModel_QBaseSenderSignalIndex((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAbstractProxyModel_OnSenderSignalIndex((QAbstractProxyModel*)self, (intptr_t)callback);
}

int32_t q_abstractproxymodel_receivers(void* self, const char* signal) {
    return QAbstractProxyModel_Receivers((QAbstractProxyModel*)self, signal);
}

int32_t q_abstractproxymodel_qbase_receivers(void* self, const char* signal) {
    return QAbstractProxyModel_QBaseReceivers((QAbstractProxyModel*)self, signal);
}

void q_abstractproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAbstractProxyModel_OnReceivers((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_is_signal_connected(void* self, void* signal) {
    return QAbstractProxyModel_IsSignalConnected((QAbstractProxyModel*)self, (QMetaMethod*)signal);
}

bool q_abstractproxymodel_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractProxyModel_QBaseIsSignalConnected((QAbstractProxyModel*)self, (QMetaMethod*)signal);
}

void q_abstractproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAbstractProxyModel_OnIsSignalConnected((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_Connect_SourceModelChanged((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_abstractproxymodel_delete(void* self) {
    QAbstractProxyModel_Delete((QAbstractProxyModel*)(self));
}
