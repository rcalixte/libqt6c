#include "libkdirlister.hpp"
#include "libkfileitem.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libkdirmodel.hpp"
#include "libkdirmodel.h"

KDirModel* k_dirmodel_new() {
    return KDirModel_new();
}

KDirModel* k_dirmodel_new2(void* parent) {
    return KDirModel_new2((QObject*)parent);
}

const QMetaObject* k_dirmodel_meta_object(void* self) {
    return KDirModel_MetaObject((KDirModel*)self);
}

void* k_dirmodel_metacast(void* self, const char* param1) {
    return KDirModel_Metacast((KDirModel*)self, param1);
}

int32_t k_dirmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDirModel_Metacall((KDirModel*)self, param1, param2, param3);
}

void k_dirmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KDirModel_OnMetacall((KDirModel*)self, (intptr_t)callback);
}

int32_t k_dirmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDirModel_QBaseMetacall((KDirModel*)self, param1, param2, param3);
}

const char* k_dirmodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dirmodel_open_url(void* self, void* url) {
    KDirModel_OpenUrl((KDirModel*)self, (QUrl*)url);
}

void k_dirmodel_set_dir_lister(void* self, void* dirLister) {
    KDirModel_SetDirLister((KDirModel*)self, (KDirLister*)dirLister);
}

KDirLister* k_dirmodel_dir_lister(void* self) {
    return KDirModel_DirLister((KDirModel*)self);
}

KFileItem* k_dirmodel_item_for_index(void* self, void* index) {
    return KDirModel_ItemForIndex((KDirModel*)self, (QModelIndex*)index);
}

QModelIndex* k_dirmodel_index_for_item(void* self, void* param1) {
    return KDirModel_IndexForItem((KDirModel*)self, (KFileItem*)param1);
}

QModelIndex* k_dirmodel_index_for_url(void* self, void* url) {
    return KDirModel_IndexForUrl((KDirModel*)self, (QUrl*)url);
}

void k_dirmodel_expand_to_url(void* self, void* url) {
    KDirModel_ExpandToUrl((KDirModel*)self, (QUrl*)url);
}

void k_dirmodel_item_changed(void* self, void* index) {
    KDirModel_ItemChanged((KDirModel*)self, (QModelIndex*)index);
}

void k_dirmodel_clear_all_previews(void* self) {
    KDirModel_ClearAllPreviews((KDirModel*)self);
}

void k_dirmodel_set_drops_allowed(void* self, int32_t dropsAllowed) {
    KDirModel_SetDropsAllowed((KDirModel*)self, dropsAllowed);
}

bool k_dirmodel_can_fetch_more(void* self, void* parent) {
    return KDirModel_CanFetchMore((KDirModel*)self, (QModelIndex*)parent);
}

void k_dirmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    KDirModel_OnCanFetchMore((KDirModel*)self, (intptr_t)callback);
}

bool k_dirmodel_qbase_can_fetch_more(void* self, void* parent) {
    return KDirModel_QBaseCanFetchMore((KDirModel*)self, (QModelIndex*)parent);
}

int32_t k_dirmodel_column_count(void* self, void* parent) {
    return KDirModel_ColumnCount((KDirModel*)self, (QModelIndex*)parent);
}

void k_dirmodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    KDirModel_OnColumnCount((KDirModel*)self, (intptr_t)callback);
}

int32_t k_dirmodel_qbase_column_count(void* self, void* parent) {
    return KDirModel_QBaseColumnCount((KDirModel*)self, (QModelIndex*)parent);
}

QVariant* k_dirmodel_data(void* self, void* index, int role) {
    return KDirModel_Data((KDirModel*)self, (QModelIndex*)index, role);
}

void k_dirmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    KDirModel_OnData((KDirModel*)self, (intptr_t)callback);
}

QVariant* k_dirmodel_qbase_data(void* self, void* index, int role) {
    return KDirModel_QBaseData((KDirModel*)self, (QModelIndex*)index, role);
}

bool k_dirmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KDirModel_DropMimeData((KDirModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_dirmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KDirModel_OnDropMimeData((KDirModel*)self, (intptr_t)callback);
}

bool k_dirmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KDirModel_QBaseDropMimeData((KDirModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_dirmodel_fetch_more(void* self, void* parent) {
    KDirModel_FetchMore((KDirModel*)self, (QModelIndex*)parent);
}

void k_dirmodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    KDirModel_OnFetchMore((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_qbase_fetch_more(void* self, void* parent) {
    KDirModel_QBaseFetchMore((KDirModel*)self, (QModelIndex*)parent);
}

int32_t k_dirmodel_flags(void* self, void* index) {
    return KDirModel_Flags((KDirModel*)self, (QModelIndex*)index);
}

void k_dirmodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    KDirModel_OnFlags((KDirModel*)self, (intptr_t)callback);
}

int32_t k_dirmodel_qbase_flags(void* self, void* index) {
    return KDirModel_QBaseFlags((KDirModel*)self, (QModelIndex*)index);
}

bool k_dirmodel_has_children(void* self, void* parent) {
    return KDirModel_HasChildren((KDirModel*)self, (QModelIndex*)parent);
}

void k_dirmodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    KDirModel_OnHasChildren((KDirModel*)self, (intptr_t)callback);
}

bool k_dirmodel_qbase_has_children(void* self, void* parent) {
    return KDirModel_QBaseHasChildren((KDirModel*)self, (QModelIndex*)parent);
}

QVariant* k_dirmodel_header_data(void* self, int section, int32_t orientation, int role) {
    return KDirModel_HeaderData((KDirModel*)self, section, orientation, role);
}

void k_dirmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    KDirModel_OnHeaderData((KDirModel*)self, (intptr_t)callback);
}

QVariant* k_dirmodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return KDirModel_QBaseHeaderData((KDirModel*)self, section, orientation, role);
}

QModelIndex* k_dirmodel_index(void* self, int row, int column, void* parent) {
    return KDirModel_Index((KDirModel*)self, row, column, (QModelIndex*)parent);
}

void k_dirmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KDirModel_OnIndex((KDirModel*)self, (intptr_t)callback);
}

QModelIndex* k_dirmodel_qbase_index(void* self, int row, int column, void* parent) {
    return KDirModel_QBaseIndex((KDirModel*)self, row, column, (QModelIndex*)parent);
}

QMimeData* k_dirmodel_mime_data(void* self, libqt_list indexes) {
    return KDirModel_MimeData((KDirModel*)self, indexes);
}

void k_dirmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    KDirModel_OnMimeData((KDirModel*)self, (intptr_t)callback);
}

QMimeData* k_dirmodel_qbase_mime_data(void* self, libqt_list indexes) {
    return KDirModel_QBaseMimeData((KDirModel*)self, indexes);
}

const char** k_dirmodel_mime_types(void* self) {
    libqt_list _arr = KDirModel_MimeTypes((KDirModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_dirmodel_mime_types");
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

void k_dirmodel_on_mime_types(void* self, const char** (*callback)()) {
    KDirModel_OnMimeTypes((KDirModel*)self, (intptr_t)callback);
}

const char** k_dirmodel_qbase_mime_types(void* self) {
    libqt_list _arr = KDirModel_QBaseMimeTypes((KDirModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_dirmodel_mime_types");
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

QModelIndex* k_dirmodel_parent(void* self, void* index) {
    return KDirModel_Parent((KDirModel*)self, (QModelIndex*)index);
}

void k_dirmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    KDirModel_OnParent((KDirModel*)self, (intptr_t)callback);
}

QModelIndex* k_dirmodel_qbase_parent(void* self, void* index) {
    return KDirModel_QBaseParent((KDirModel*)self, (QModelIndex*)index);
}

QModelIndex* k_dirmodel_sibling(void* self, int row, int column, void* index) {
    return KDirModel_Sibling((KDirModel*)self, row, column, (QModelIndex*)index);
}

void k_dirmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KDirModel_OnSibling((KDirModel*)self, (intptr_t)callback);
}

QModelIndex* k_dirmodel_qbase_sibling(void* self, int row, int column, void* index) {
    return KDirModel_QBaseSibling((KDirModel*)self, row, column, (QModelIndex*)index);
}

int32_t k_dirmodel_row_count(void* self, void* parent) {
    return KDirModel_RowCount((KDirModel*)self, (QModelIndex*)parent);
}

void k_dirmodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    KDirModel_OnRowCount((KDirModel*)self, (intptr_t)callback);
}

int32_t k_dirmodel_qbase_row_count(void* self, void* parent) {
    return KDirModel_QBaseRowCount((KDirModel*)self, (QModelIndex*)parent);
}

bool k_dirmodel_set_data(void* self, void* index, void* value, int role) {
    return KDirModel_SetData((KDirModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_dirmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    KDirModel_OnSetData((KDirModel*)self, (intptr_t)callback);
}

bool k_dirmodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return KDirModel_QBaseSetData((KDirModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_dirmodel_sort(void* self, int column, int32_t order) {
    KDirModel_Sort((KDirModel*)self, column, order);
}

void k_dirmodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KDirModel_OnSort((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_qbase_sort(void* self, int column, int32_t order) {
    KDirModel_QBaseSort((KDirModel*)self, column, order);
}

libqt_map /* of int to char* */ k_dirmodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KDirModel_RoleNames((KDirModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Memory allocation failed in k_dirmodel_role_names");
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

void k_dirmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    KDirModel_OnRoleNames((KDirModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_dirmodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KDirModel_QBaseRoleNames((KDirModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Memory allocation failed in k_dirmodel_role_names");
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

libqt_list /* of QUrl* */ k_dirmodel_simplified_url_list(libqt_list urls) {
    libqt_list _arr = KDirModel_SimplifiedUrlList(urls);
    return _arr;
}

void k_dirmodel_request_sequence_icon(void* self, void* index, int sequenceIndex) {
    KDirModel_RequestSequenceIcon((KDirModel*)self, (QModelIndex*)index, sequenceIndex);
}

void k_dirmodel_set_job_transfers_visible(void* self, bool show) {
    KDirModel_SetJobTransfersVisible((KDirModel*)self, show);
}

bool k_dirmodel_job_transfers_visible(void* self) {
    return KDirModel_JobTransfersVisible((KDirModel*)self);
}

int32_t k_dirmodel_supported_drop_actions(void* self) {
    return KDirModel_SupportedDropActions((KDirModel*)self);
}

void k_dirmodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KDirModel_OnSupportedDropActions((KDirModel*)self, (intptr_t)callback);
}

int32_t k_dirmodel_qbase_supported_drop_actions(void* self) {
    return KDirModel_QBaseSupportedDropActions((KDirModel*)self);
}

void k_dirmodel_expand(void* self, void* index) {
    KDirModel_Expand((KDirModel*)self, (QModelIndex*)index);
}

void k_dirmodel_on_expand(void* self, void (*callback)(void*, void*)) {
    KDirModel_Connect_Expand((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_need_sequence_icon(void* self, void* index, int sequenceIndex) {
    KDirModel_NeedSequenceIcon((KDirModel*)self, (QModelIndex*)index, sequenceIndex);
}

void k_dirmodel_on_need_sequence_icon(void* self, void (*callback)(void*, void*, int)) {
    KDirModel_Connect_NeedSequenceIcon((KDirModel*)self, (intptr_t)callback);
}

const char* k_dirmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_dirmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dirmodel_open_url2(void* self, void* url, int32_t flags) {
    KDirModel_OpenUrl2((KDirModel*)self, (QUrl*)url, flags);
}

bool k_dirmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool k_dirmodel_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractItemModel_InsertRows((QAbstractItemModel*)self, row, count, (QModelIndex*)parent);
}

void k_dirmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractItemModel_OnInsertRows((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_dirmodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractItemModel_QBaseInsertRows((QAbstractItemModel*)self, row, count, (QModelIndex*)parent);
}

bool k_dirmodel_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractItemModel_InsertColumns((QAbstractItemModel*)self, column, count, (QModelIndex*)parent);
}

void k_dirmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractItemModel_OnInsertColumns((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_dirmodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractItemModel_QBaseInsertColumns((QAbstractItemModel*)self, column, count, (QModelIndex*)parent);
}

bool k_dirmodel_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractItemModel_RemoveRows((QAbstractItemModel*)self, row, count, (QModelIndex*)parent);
}

void k_dirmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractItemModel_OnRemoveRows((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_dirmodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractItemModel_QBaseRemoveRows((QAbstractItemModel*)self, row, count, (QModelIndex*)parent);
}

bool k_dirmodel_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractItemModel_RemoveColumns((QAbstractItemModel*)self, column, count, (QModelIndex*)parent);
}

void k_dirmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractItemModel_OnRemoveColumns((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_dirmodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractItemModel_QBaseRemoveColumns((QAbstractItemModel*)self, column, count, (QModelIndex*)parent);
}

bool k_dirmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_dirmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_dirmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_dirmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_dirmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_dirmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_dirmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_dirmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_dirmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_dirmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_dirmodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_dirmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_dirmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_dirmodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_dirmodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_dirmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_dirmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_dirmodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_dirmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_dirmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_dirmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_layout_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_dirmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_dirmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_dirmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_dirmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dirmodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_dirmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_dirmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_dirmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_dirmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_dirmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_dirmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_dirmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_dirmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_dirmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_dirmodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_dirmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_dirmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_dirmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_dirmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_dirmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_dirmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_dirmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_dirmodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_dirmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_dirmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_dirmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_dirmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_dirmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_dirmodel_dynamic_property_names");
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

QBindingStorage* k_dirmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_dirmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_dirmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_dirmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_dirmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_dirmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_dirmodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_dirmodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_dirmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_dirmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_dirmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_dirmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_dirmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KDirModel_SetHeaderData((KDirModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_dirmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KDirModel_QBaseSetHeaderData((KDirModel*)self, section, orientation, (QVariant*)value, role);
}

void k_dirmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    KDirModel_OnSetHeaderData((KDirModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_dirmodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KDirModel_ItemData((KDirModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_dirmodel_qbase_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KDirModel_QBaseItemData((KDirModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_dirmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    KDirModel_OnItemData((KDirModel*)self, (intptr_t)callback);
}

bool k_dirmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
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
    bool _out = KDirModel_SetItemData((KDirModel*)self, (QModelIndex*)index, roles_ret);
    libqt_free(roles_ret.keys);
    libqt_free(roles_ret.values);
    return _out;
}

bool k_dirmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
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
    bool _out = KDirModel_QBaseSetItemData((KDirModel*)self, (QModelIndex*)index, roles_ret);
    libqt_free(roles_ret.keys);
    libqt_free(roles_ret.values);
    return _out;
}

void k_dirmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    KDirModel_OnSetItemData((KDirModel*)self, (intptr_t)callback);
}

bool k_dirmodel_clear_item_data(void* self, void* index) {
    return KDirModel_ClearItemData((KDirModel*)self, (QModelIndex*)index);
}

bool k_dirmodel_qbase_clear_item_data(void* self, void* index) {
    return KDirModel_QBaseClearItemData((KDirModel*)self, (QModelIndex*)index);
}

void k_dirmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    KDirModel_OnClearItemData((KDirModel*)self, (intptr_t)callback);
}

bool k_dirmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KDirModel_CanDropMimeData((KDirModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_dirmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KDirModel_QBaseCanDropMimeData((KDirModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_dirmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KDirModel_OnCanDropMimeData((KDirModel*)self, (intptr_t)callback);
}

int32_t k_dirmodel_supported_drag_actions(void* self) {
    return KDirModel_SupportedDragActions((KDirModel*)self);
}

int32_t k_dirmodel_qbase_supported_drag_actions(void* self) {
    return KDirModel_QBaseSupportedDragActions((KDirModel*)self);
}

void k_dirmodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    KDirModel_OnSupportedDragActions((KDirModel*)self, (intptr_t)callback);
}

bool k_dirmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KDirModel_MoveRows((KDirModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_dirmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KDirModel_QBaseMoveRows((KDirModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_dirmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KDirModel_OnMoveRows((KDirModel*)self, (intptr_t)callback);
}

bool k_dirmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KDirModel_MoveColumns((KDirModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_dirmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KDirModel_QBaseMoveColumns((KDirModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_dirmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KDirModel_OnMoveColumns((KDirModel*)self, (intptr_t)callback);
}

QModelIndex* k_dirmodel_buddy(void* self, void* index) {
    return KDirModel_Buddy((KDirModel*)self, (QModelIndex*)index);
}

QModelIndex* k_dirmodel_qbase_buddy(void* self, void* index) {
    return KDirModel_QBaseBuddy((KDirModel*)self, (QModelIndex*)index);
}

void k_dirmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    KDirModel_OnBuddy((KDirModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_dirmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KDirModel_Match((KDirModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_dirmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KDirModel_QBaseMatch((KDirModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_dirmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    KDirModel_OnMatch((KDirModel*)self, (intptr_t)callback);
}

QSize* k_dirmodel_span(void* self, void* index) {
    return KDirModel_Span((KDirModel*)self, (QModelIndex*)index);
}

QSize* k_dirmodel_qbase_span(void* self, void* index) {
    return KDirModel_QBaseSpan((KDirModel*)self, (QModelIndex*)index);
}

void k_dirmodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    KDirModel_OnSpan((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    KDirModel_MultiData((KDirModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_dirmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    KDirModel_QBaseMultiData((KDirModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_dirmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    KDirModel_OnMultiData((KDirModel*)self, (intptr_t)callback);
}

bool k_dirmodel_submit(void* self) {
    return KDirModel_Submit((KDirModel*)self);
}

bool k_dirmodel_qbase_submit(void* self) {
    return KDirModel_QBaseSubmit((KDirModel*)self);
}

void k_dirmodel_on_submit(void* self, bool (*callback)()) {
    KDirModel_OnSubmit((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_revert(void* self) {
    KDirModel_Revert((KDirModel*)self);
}

void k_dirmodel_qbase_revert(void* self) {
    KDirModel_QBaseRevert((KDirModel*)self);
}

void k_dirmodel_on_revert(void* self, void (*callback)()) {
    KDirModel_OnRevert((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_reset_internal_data(void* self) {
    KDirModel_ResetInternalData((KDirModel*)self);
}

void k_dirmodel_qbase_reset_internal_data(void* self) {
    KDirModel_QBaseResetInternalData((KDirModel*)self);
}

void k_dirmodel_on_reset_internal_data(void* self, void (*callback)()) {
    KDirModel_OnResetInternalData((KDirModel*)self, (intptr_t)callback);
}

bool k_dirmodel_event(void* self, void* event) {
    return KDirModel_Event((KDirModel*)self, (QEvent*)event);
}

bool k_dirmodel_qbase_event(void* self, void* event) {
    return KDirModel_QBaseEvent((KDirModel*)self, (QEvent*)event);
}

void k_dirmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KDirModel_OnEvent((KDirModel*)self, (intptr_t)callback);
}

bool k_dirmodel_event_filter(void* self, void* watched, void* event) {
    return KDirModel_EventFilter((KDirModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_dirmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KDirModel_QBaseEventFilter((KDirModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_dirmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KDirModel_OnEventFilter((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_timer_event(void* self, void* event) {
    KDirModel_TimerEvent((KDirModel*)self, (QTimerEvent*)event);
}

void k_dirmodel_qbase_timer_event(void* self, void* event) {
    KDirModel_QBaseTimerEvent((KDirModel*)self, (QTimerEvent*)event);
}

void k_dirmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KDirModel_OnTimerEvent((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_child_event(void* self, void* event) {
    KDirModel_ChildEvent((KDirModel*)self, (QChildEvent*)event);
}

void k_dirmodel_qbase_child_event(void* self, void* event) {
    KDirModel_QBaseChildEvent((KDirModel*)self, (QChildEvent*)event);
}

void k_dirmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KDirModel_OnChildEvent((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_custom_event(void* self, void* event) {
    KDirModel_CustomEvent((KDirModel*)self, (QEvent*)event);
}

void k_dirmodel_qbase_custom_event(void* self, void* event) {
    KDirModel_QBaseCustomEvent((KDirModel*)self, (QEvent*)event);
}

void k_dirmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KDirModel_OnCustomEvent((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_connect_notify(void* self, void* signal) {
    KDirModel_ConnectNotify((KDirModel*)self, (QMetaMethod*)signal);
}

void k_dirmodel_qbase_connect_notify(void* self, void* signal) {
    KDirModel_QBaseConnectNotify((KDirModel*)self, (QMetaMethod*)signal);
}

void k_dirmodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KDirModel_OnConnectNotify((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_disconnect_notify(void* self, void* signal) {
    KDirModel_DisconnectNotify((KDirModel*)self, (QMetaMethod*)signal);
}

void k_dirmodel_qbase_disconnect_notify(void* self, void* signal) {
    KDirModel_QBaseDisconnectNotify((KDirModel*)self, (QMetaMethod*)signal);
}

void k_dirmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KDirModel_OnDisconnectNotify((KDirModel*)self, (intptr_t)callback);
}

QModelIndex* k_dirmodel_create_index(void* self, int row, int column) {
    return KDirModel_CreateIndex((KDirModel*)self, row, column);
}

QModelIndex* k_dirmodel_qbase_create_index(void* self, int row, int column) {
    return KDirModel_QBaseCreateIndex((KDirModel*)self, row, column);
}

void k_dirmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    KDirModel_OnCreateIndex((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_encode_data(void* self, libqt_list indexes, void* stream) {
    KDirModel_EncodeData((KDirModel*)self, indexes, (QDataStream*)stream);
}

void k_dirmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    KDirModel_QBaseEncodeData((KDirModel*)self, indexes, (QDataStream*)stream);
}

void k_dirmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    KDirModel_OnEncodeData((KDirModel*)self, (intptr_t)callback);
}

bool k_dirmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KDirModel_DecodeData((KDirModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_dirmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KDirModel_QBaseDecodeData((KDirModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_dirmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    KDirModel_OnDecodeData((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    KDirModel_BeginInsertRows((KDirModel*)self, (QModelIndex*)parent, first, last);
}

void k_dirmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    KDirModel_QBaseBeginInsertRows((KDirModel*)self, (QModelIndex*)parent, first, last);
}

void k_dirmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KDirModel_OnBeginInsertRows((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_end_insert_rows(void* self) {
    KDirModel_EndInsertRows((KDirModel*)self);
}

void k_dirmodel_qbase_end_insert_rows(void* self) {
    KDirModel_QBaseEndInsertRows((KDirModel*)self);
}

void k_dirmodel_on_end_insert_rows(void* self, void (*callback)()) {
    KDirModel_OnEndInsertRows((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    KDirModel_BeginRemoveRows((KDirModel*)self, (QModelIndex*)parent, first, last);
}

void k_dirmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    KDirModel_QBaseBeginRemoveRows((KDirModel*)self, (QModelIndex*)parent, first, last);
}

void k_dirmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KDirModel_OnBeginRemoveRows((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_end_remove_rows(void* self) {
    KDirModel_EndRemoveRows((KDirModel*)self);
}

void k_dirmodel_qbase_end_remove_rows(void* self) {
    KDirModel_QBaseEndRemoveRows((KDirModel*)self);
}

void k_dirmodel_on_end_remove_rows(void* self, void (*callback)()) {
    KDirModel_OnEndRemoveRows((KDirModel*)self, (intptr_t)callback);
}

bool k_dirmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KDirModel_BeginMoveRows((KDirModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_dirmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KDirModel_QBaseBeginMoveRows((KDirModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_dirmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KDirModel_OnBeginMoveRows((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_end_move_rows(void* self) {
    KDirModel_EndMoveRows((KDirModel*)self);
}

void k_dirmodel_qbase_end_move_rows(void* self) {
    KDirModel_QBaseEndMoveRows((KDirModel*)self);
}

void k_dirmodel_on_end_move_rows(void* self, void (*callback)()) {
    KDirModel_OnEndMoveRows((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    KDirModel_BeginInsertColumns((KDirModel*)self, (QModelIndex*)parent, first, last);
}

void k_dirmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    KDirModel_QBaseBeginInsertColumns((KDirModel*)self, (QModelIndex*)parent, first, last);
}

void k_dirmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KDirModel_OnBeginInsertColumns((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_end_insert_columns(void* self) {
    KDirModel_EndInsertColumns((KDirModel*)self);
}

void k_dirmodel_qbase_end_insert_columns(void* self) {
    KDirModel_QBaseEndInsertColumns((KDirModel*)self);
}

void k_dirmodel_on_end_insert_columns(void* self, void (*callback)()) {
    KDirModel_OnEndInsertColumns((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    KDirModel_BeginRemoveColumns((KDirModel*)self, (QModelIndex*)parent, first, last);
}

void k_dirmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    KDirModel_QBaseBeginRemoveColumns((KDirModel*)self, (QModelIndex*)parent, first, last);
}

void k_dirmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KDirModel_OnBeginRemoveColumns((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_end_remove_columns(void* self) {
    KDirModel_EndRemoveColumns((KDirModel*)self);
}

void k_dirmodel_qbase_end_remove_columns(void* self) {
    KDirModel_QBaseEndRemoveColumns((KDirModel*)self);
}

void k_dirmodel_on_end_remove_columns(void* self, void (*callback)()) {
    KDirModel_OnEndRemoveColumns((KDirModel*)self, (intptr_t)callback);
}

bool k_dirmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KDirModel_BeginMoveColumns((KDirModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_dirmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KDirModel_QBaseBeginMoveColumns((KDirModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_dirmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KDirModel_OnBeginMoveColumns((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_end_move_columns(void* self) {
    KDirModel_EndMoveColumns((KDirModel*)self);
}

void k_dirmodel_qbase_end_move_columns(void* self) {
    KDirModel_QBaseEndMoveColumns((KDirModel*)self);
}

void k_dirmodel_on_end_move_columns(void* self, void (*callback)()) {
    KDirModel_OnEndMoveColumns((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_begin_reset_model(void* self) {
    KDirModel_BeginResetModel((KDirModel*)self);
}

void k_dirmodel_qbase_begin_reset_model(void* self) {
    KDirModel_QBaseBeginResetModel((KDirModel*)self);
}

void k_dirmodel_on_begin_reset_model(void* self, void (*callback)()) {
    KDirModel_OnBeginResetModel((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_end_reset_model(void* self) {
    KDirModel_EndResetModel((KDirModel*)self);
}

void k_dirmodel_qbase_end_reset_model(void* self) {
    KDirModel_QBaseEndResetModel((KDirModel*)self);
}

void k_dirmodel_on_end_reset_model(void* self, void (*callback)()) {
    KDirModel_OnEndResetModel((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_change_persistent_index(void* self, void* from, void* to) {
    KDirModel_ChangePersistentIndex((KDirModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_dirmodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    KDirModel_QBaseChangePersistentIndex((KDirModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_dirmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    KDirModel_OnChangePersistentIndex((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KDirModel_ChangePersistentIndexList((KDirModel*)self, from, to);
}

void k_dirmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KDirModel_QBaseChangePersistentIndexList((KDirModel*)self, from, to);
}

void k_dirmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    KDirModel_OnChangePersistentIndexList((KDirModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_dirmodel_persistent_index_list(void* self) {
    libqt_list _arr = KDirModel_PersistentIndexList((KDirModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_dirmodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = KDirModel_QBasePersistentIndexList((KDirModel*)self);
    return _arr;
}

void k_dirmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    KDirModel_OnPersistentIndexList((KDirModel*)self, (intptr_t)callback);
}

QObject* k_dirmodel_sender(void* self) {
    return KDirModel_Sender((KDirModel*)self);
}

QObject* k_dirmodel_qbase_sender(void* self) {
    return KDirModel_QBaseSender((KDirModel*)self);
}

void k_dirmodel_on_sender(void* self, QObject* (*callback)()) {
    KDirModel_OnSender((KDirModel*)self, (intptr_t)callback);
}

int32_t k_dirmodel_sender_signal_index(void* self) {
    return KDirModel_SenderSignalIndex((KDirModel*)self);
}

int32_t k_dirmodel_qbase_sender_signal_index(void* self) {
    return KDirModel_QBaseSenderSignalIndex((KDirModel*)self);
}

void k_dirmodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KDirModel_OnSenderSignalIndex((KDirModel*)self, (intptr_t)callback);
}

int32_t k_dirmodel_receivers(void* self, const char* signal) {
    return KDirModel_Receivers((KDirModel*)self, signal);
}

int32_t k_dirmodel_qbase_receivers(void* self, const char* signal) {
    return KDirModel_QBaseReceivers((KDirModel*)self, signal);
}

void k_dirmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KDirModel_OnReceivers((KDirModel*)self, (intptr_t)callback);
}

bool k_dirmodel_is_signal_connected(void* self, void* signal) {
    return KDirModel_IsSignalConnected((KDirModel*)self, (QMetaMethod*)signal);
}

bool k_dirmodel_qbase_is_signal_connected(void* self, void* signal) {
    return KDirModel_QBaseIsSignalConnected((KDirModel*)self, (QMetaMethod*)signal);
}

void k_dirmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KDirModel_OnIsSignalConnected((KDirModel*)self, (intptr_t)callback);
}

void k_dirmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_dirmodel_delete(void* self) {
    KDirModel_Delete((KDirModel*)(self));
}
