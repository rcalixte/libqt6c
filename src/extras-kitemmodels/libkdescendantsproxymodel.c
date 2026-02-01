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
#include "libkdescendantsproxymodel.hpp"
#include "libkdescendantsproxymodel.h"

KDescendantsProxyModel* k_descendantsproxymodel_new() {
    return KDescendantsProxyModel_new();
}

KDescendantsProxyModel* k_descendantsproxymodel_new2(void* parent) {
    return KDescendantsProxyModel_new2((QObject*)parent);
}

const QMetaObject* k_descendantsproxymodel_meta_object(void* self) {
    return KDescendantsProxyModel_MetaObject((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KDescendantsProxyModel_OnMetaObject((KDescendantsProxyModel*)self, (intptr_t)callback);
}

const QMetaObject* k_descendantsproxymodel_qbase_meta_object(void* self) {
    return KDescendantsProxyModel_QBaseMetaObject((KDescendantsProxyModel*)self);
}

void* k_descendantsproxymodel_metacast(void* self, const char* param1) {
    return KDescendantsProxyModel_Metacast((KDescendantsProxyModel*)self, param1);
}

void k_descendantsproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KDescendantsProxyModel_OnMetacast((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void* k_descendantsproxymodel_qbase_metacast(void* self, const char* param1) {
    return KDescendantsProxyModel_QBaseMetacast((KDescendantsProxyModel*)self, param1);
}

int32_t k_descendantsproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDescendantsProxyModel_Metacall((KDescendantsProxyModel*)self, param1, param2, param3);
}

void k_descendantsproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KDescendantsProxyModel_OnMetacall((KDescendantsProxyModel*)self, (intptr_t)callback);
}

int32_t k_descendantsproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDescendantsProxyModel_QBaseMetacall((KDescendantsProxyModel*)self, param1, param2, param3);
}

const char* k_descendantsproxymodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_descendantsproxymodel_set_source_model(void* self, void* model) {
    KDescendantsProxyModel_SetSourceModel((KDescendantsProxyModel*)self, (QAbstractItemModel*)model);
}

void k_descendantsproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnSetSourceModel((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_qbase_set_source_model(void* self, void* model) {
    KDescendantsProxyModel_QBaseSetSourceModel((KDescendantsProxyModel*)self, (QAbstractItemModel*)model);
}

void k_descendantsproxymodel_set_display_ancestor_data(void* self, bool display) {
    KDescendantsProxyModel_SetDisplayAncestorData((KDescendantsProxyModel*)self, display);
}

bool k_descendantsproxymodel_display_ancestor_data(void* self) {
    return KDescendantsProxyModel_DisplayAncestorData((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_set_ancestor_separator(void* self, const char* separator) {
    KDescendantsProxyModel_SetAncestorSeparator((KDescendantsProxyModel*)self, qstring(separator));
}

const char* k_descendantsproxymodel_ancestor_separator(void* self) {
    libqt_string _str = KDescendantsProxyModel_AncestorSeparator((KDescendantsProxyModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QModelIndex* k_descendantsproxymodel_map_from_source(void* self, void* sourceIndex) {
    return KDescendantsProxyModel_MapFromSource((KDescendantsProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_descendantsproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnMapFromSource((KDescendantsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_descendantsproxymodel_qbase_map_from_source(void* self, void* sourceIndex) {
    return KDescendantsProxyModel_QBaseMapFromSource((KDescendantsProxyModel*)self, (QModelIndex*)sourceIndex);
}

QModelIndex* k_descendantsproxymodel_map_to_source(void* self, void* proxyIndex) {
    return KDescendantsProxyModel_MapToSource((KDescendantsProxyModel*)self, (QModelIndex*)proxyIndex);
}

void k_descendantsproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnMapToSource((KDescendantsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_descendantsproxymodel_qbase_map_to_source(void* self, void* proxyIndex) {
    return KDescendantsProxyModel_QBaseMapToSource((KDescendantsProxyModel*)self, (QModelIndex*)proxyIndex);
}

int32_t k_descendantsproxymodel_flags(void* self, void* index) {
    return KDescendantsProxyModel_Flags((KDescendantsProxyModel*)self, (QModelIndex*)index);
}

void k_descendantsproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnFlags((KDescendantsProxyModel*)self, (intptr_t)callback);
}

int32_t k_descendantsproxymodel_qbase_flags(void* self, void* index) {
    return KDescendantsProxyModel_QBaseFlags((KDescendantsProxyModel*)self, (QModelIndex*)index);
}

QVariant* k_descendantsproxymodel_data(void* self, void* index, int role) {
    return KDescendantsProxyModel_Data((KDescendantsProxyModel*)self, (QModelIndex*)index, role);
}

void k_descendantsproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    KDescendantsProxyModel_OnData((KDescendantsProxyModel*)self, (intptr_t)callback);
}

QVariant* k_descendantsproxymodel_qbase_data(void* self, void* index, int role) {
    return KDescendantsProxyModel_QBaseData((KDescendantsProxyModel*)self, (QModelIndex*)index, role);
}

int32_t k_descendantsproxymodel_row_count(void* self, void* parent) {
    return KDescendantsProxyModel_RowCount((KDescendantsProxyModel*)self, (QModelIndex*)parent);
}

void k_descendantsproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnRowCount((KDescendantsProxyModel*)self, (intptr_t)callback);
}

int32_t k_descendantsproxymodel_qbase_row_count(void* self, void* parent) {
    return KDescendantsProxyModel_QBaseRowCount((KDescendantsProxyModel*)self, (QModelIndex*)parent);
}

QVariant* k_descendantsproxymodel_header_data(void* self, int section, int32_t orientation, int role) {
    return KDescendantsProxyModel_HeaderData((KDescendantsProxyModel*)self, section, orientation, role);
}

void k_descendantsproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    KDescendantsProxyModel_OnHeaderData((KDescendantsProxyModel*)self, (intptr_t)callback);
}

QVariant* k_descendantsproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return KDescendantsProxyModel_QBaseHeaderData((KDescendantsProxyModel*)self, section, orientation, role);
}

QMimeData* k_descendantsproxymodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KDescendantsProxyModel_MimeData((KDescendantsProxyModel*)self, indexes);
}

void k_descendantsproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    KDescendantsProxyModel_OnMimeData((KDescendantsProxyModel*)self, (intptr_t)callback);
}

QMimeData* k_descendantsproxymodel_qbase_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KDescendantsProxyModel_QBaseMimeData((KDescendantsProxyModel*)self, indexes);
}

const char** k_descendantsproxymodel_mime_types(void* self) {
    libqt_list _arr = KDescendantsProxyModel_MimeTypes((KDescendantsProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_descendantsproxymodel_mime_types\n");
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

void k_descendantsproxymodel_on_mime_types(void* self, const char** (*callback)()) {
    KDescendantsProxyModel_OnMimeTypes((KDescendantsProxyModel*)self, (intptr_t)callback);
}

const char** k_descendantsproxymodel_qbase_mime_types(void* self) {
    libqt_list _arr = KDescendantsProxyModel_QBaseMimeTypes((KDescendantsProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_descendantsproxymodel_mime_types\n");
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

bool k_descendantsproxymodel_has_children(void* self, void* parent) {
    return KDescendantsProxyModel_HasChildren((KDescendantsProxyModel*)self, (QModelIndex*)parent);
}

void k_descendantsproxymodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnHasChildren((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_qbase_has_children(void* self, void* parent) {
    return KDescendantsProxyModel_QBaseHasChildren((KDescendantsProxyModel*)self, (QModelIndex*)parent);
}

QModelIndex* k_descendantsproxymodel_index(void* self, int param1, int param2, void* parent) {
    return KDescendantsProxyModel_Index((KDescendantsProxyModel*)self, param1, param2, (QModelIndex*)parent);
}

void k_descendantsproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KDescendantsProxyModel_OnIndex((KDescendantsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_descendantsproxymodel_qbase_index(void* self, int param1, int param2, void* parent) {
    return KDescendantsProxyModel_QBaseIndex((KDescendantsProxyModel*)self, param1, param2, (QModelIndex*)parent);
}

QModelIndex* k_descendantsproxymodel_parent(void* self, void* param1) {
    return KDescendantsProxyModel_Parent((KDescendantsProxyModel*)self, (QModelIndex*)param1);
}

void k_descendantsproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnParent((KDescendantsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_descendantsproxymodel_qbase_parent(void* self, void* param1) {
    return KDescendantsProxyModel_QBaseParent((KDescendantsProxyModel*)self, (QModelIndex*)param1);
}

int32_t k_descendantsproxymodel_column_count(void* self, void* index) {
    return KDescendantsProxyModel_ColumnCount((KDescendantsProxyModel*)self, (QModelIndex*)index);
}

void k_descendantsproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnColumnCount((KDescendantsProxyModel*)self, (intptr_t)callback);
}

int32_t k_descendantsproxymodel_qbase_column_count(void* self, void* index) {
    return KDescendantsProxyModel_QBaseColumnCount((KDescendantsProxyModel*)self, (QModelIndex*)index);
}

libqt_map /* of int to char* */ k_descendantsproxymodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KDescendantsProxyModel_RoleNames((KDescendantsProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_descendantsproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_descendantsproxymodel_role_names\n");
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

void k_descendantsproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    KDescendantsProxyModel_OnRoleNames((KDescendantsProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_descendantsproxymodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KDescendantsProxyModel_QBaseRoleNames((KDescendantsProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_descendantsproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_descendantsproxymodel_role_names\n");
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

void k_descendantsproxymodel_set_expands_by_default(void* self, bool expand) {
    KDescendantsProxyModel_SetExpandsByDefault((KDescendantsProxyModel*)self, expand);
}

bool k_descendantsproxymodel_expands_by_default(void* self) {
    return KDescendantsProxyModel_ExpandsByDefault((KDescendantsProxyModel*)self);
}

bool k_descendantsproxymodel_is_source_index_expanded(void* self, void* sourceIndex) {
    return KDescendantsProxyModel_IsSourceIndexExpanded((KDescendantsProxyModel*)self, (QModelIndex*)sourceIndex);
}

bool k_descendantsproxymodel_is_source_index_visible(void* self, void* sourceIndex) {
    return KDescendantsProxyModel_IsSourceIndexVisible((KDescendantsProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_descendantsproxymodel_expand_source_index(void* self, void* sourceIndex) {
    KDescendantsProxyModel_ExpandSourceIndex((KDescendantsProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_descendantsproxymodel_collapse_source_index(void* self, void* sourceIndex) {
    KDescendantsProxyModel_CollapseSourceIndex((KDescendantsProxyModel*)self, (QModelIndex*)sourceIndex);
}

int32_t k_descendantsproxymodel_supported_drop_actions(void* self) {
    return KDescendantsProxyModel_SupportedDropActions((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KDescendantsProxyModel_OnSupportedDropActions((KDescendantsProxyModel*)self, (intptr_t)callback);
}

int32_t k_descendantsproxymodel_qbase_supported_drop_actions(void* self) {
    return KDescendantsProxyModel_QBaseSupportedDropActions((KDescendantsProxyModel*)self);
}

libqt_list /* of QModelIndex* */ k_descendantsproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KDescendantsProxyModel_Match((KDescendantsProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_descendantsproxymodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    KDescendantsProxyModel_OnMatch((KDescendantsProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_descendantsproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KDescendantsProxyModel_QBaseMatch((KDescendantsProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_descendantsproxymodel_source_model_changed(void* self) {
    KDescendantsProxyModel_SourceModelChanged((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    KDescendantsProxyModel_Connect_SourceModelChanged((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_display_ancestor_data_changed(void* self) {
    KDescendantsProxyModel_DisplayAncestorDataChanged((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_display_ancestor_data_changed(void* self, void (*callback)(void*)) {
    KDescendantsProxyModel_Connect_DisplayAncestorDataChanged((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_ancestor_separator_changed(void* self) {
    KDescendantsProxyModel_AncestorSeparatorChanged((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_ancestor_separator_changed(void* self, void (*callback)(void*)) {
    KDescendantsProxyModel_Connect_AncestorSeparatorChanged((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_expands_by_default_changed(void* self, bool expands) {
    KDescendantsProxyModel_ExpandsByDefaultChanged((KDescendantsProxyModel*)self, expands);
}

void k_descendantsproxymodel_on_expands_by_default_changed(void* self, void (*callback)(void*, bool)) {
    KDescendantsProxyModel_Connect_ExpandsByDefaultChanged((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_source_index_expanded(void* self, void* sourceIndex) {
    KDescendantsProxyModel_SourceIndexExpanded((KDescendantsProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_descendantsproxymodel_on_source_index_expanded(void* self, void (*callback)(void*, void*)) {
    KDescendantsProxyModel_Connect_SourceIndexExpanded((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_source_index_collapsed(void* self, void* sourceIndex) {
    KDescendantsProxyModel_SourceIndexCollapsed((KDescendantsProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_descendantsproxymodel_on_source_index_collapsed(void* self, void (*callback)(void*, void*)) {
    KDescendantsProxyModel_Connect_SourceIndexCollapsed((KDescendantsProxyModel*)self, (intptr_t)callback);
}

const char* k_descendantsproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_descendantsproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* k_descendantsproxymodel_source_model(void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

bool k_descendantsproxymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool k_descendantsproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_descendantsproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_descendantsproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_descendantsproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_descendantsproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_descendantsproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_descendantsproxymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_descendantsproxymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_descendantsproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_descendantsproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_descendantsproxymodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_descendantsproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_descendantsproxymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_descendantsproxymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_descendantsproxymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_descendantsproxymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_descendantsproxymodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_descendantsproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_descendantsproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_descendantsproxymodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_descendantsproxymodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_descendantsproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_descendantsproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_descendantsproxymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_descendantsproxymodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_descendantsproxymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_descendantsproxymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_descendantsproxymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_descendantsproxymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_descendantsproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_descendantsproxymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_descendantsproxymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_descendantsproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_descendantsproxymodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_descendantsproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_descendantsproxymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_descendantsproxymodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_descendantsproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_descendantsproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_descendantsproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_descendantsproxymodel_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_descendantsproxymodel_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_descendantsproxymodel_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_descendantsproxymodel_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_descendantsproxymodel_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_descendantsproxymodel_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_descendantsproxymodel_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_descendantsproxymodel_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_descendantsproxymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_descendantsproxymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_descendantsproxymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_descendantsproxymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_descendantsproxymodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_descendantsproxymodel_dynamic_property_names\n");
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

QBindingStorage* k_descendantsproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_descendantsproxymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_descendantsproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_descendantsproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_descendantsproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_descendantsproxymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_descendantsproxymodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_descendantsproxymodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_descendantsproxymodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_descendantsproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_descendantsproxymodel_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_descendantsproxymodel_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_descendantsproxymodel_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_descendantsproxymodel_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_descendantsproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_descendantsproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QItemSelection* k_descendantsproxymodel_map_selection_to_source(void* self, void* selection) {
    return KDescendantsProxyModel_MapSelectionToSource((KDescendantsProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* k_descendantsproxymodel_qbase_map_selection_to_source(void* self, void* selection) {
    return KDescendantsProxyModel_QBaseMapSelectionToSource((KDescendantsProxyModel*)self, (QItemSelection*)selection);
}

void k_descendantsproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnMapSelectionToSource((KDescendantsProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_descendantsproxymodel_map_selection_from_source(void* self, void* selection) {
    return KDescendantsProxyModel_MapSelectionFromSource((KDescendantsProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* k_descendantsproxymodel_qbase_map_selection_from_source(void* self, void* selection) {
    return KDescendantsProxyModel_QBaseMapSelectionFromSource((KDescendantsProxyModel*)self, (QItemSelection*)selection);
}

void k_descendantsproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnMapSelectionFromSource((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_submit(void* self) {
    return KDescendantsProxyModel_Submit((KDescendantsProxyModel*)self);
}

bool k_descendantsproxymodel_qbase_submit(void* self) {
    return KDescendantsProxyModel_QBaseSubmit((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_submit(void* self, bool (*callback)()) {
    KDescendantsProxyModel_OnSubmit((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_revert(void* self) {
    KDescendantsProxyModel_Revert((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_qbase_revert(void* self) {
    KDescendantsProxyModel_QBaseRevert((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_revert(void* self, void (*callback)()) {
    KDescendantsProxyModel_OnRevert((KDescendantsProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_descendantsproxymodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KDescendantsProxyModel_ItemData((KDescendantsProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_descendantsproxymodel_qbase_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KDescendantsProxyModel_QBaseItemData((KDescendantsProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_descendantsproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnItemData((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_set_data(void* self, void* index, void* value, int role) {
    return KDescendantsProxyModel_SetData((KDescendantsProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_descendantsproxymodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return KDescendantsProxyModel_QBaseSetData((KDescendantsProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_descendantsproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    KDescendantsProxyModel_OnSetData((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_descendantsproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_descendantsproxymodel_set_item_data\n");
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
    bool _out = KDescendantsProxyModel_SetItemData((KDescendantsProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool k_descendantsproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_descendantsproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_descendantsproxymodel_set_item_data\n");
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
    bool _out = KDescendantsProxyModel_QBaseSetItemData((KDescendantsProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_descendantsproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    KDescendantsProxyModel_OnSetItemData((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KDescendantsProxyModel_SetHeaderData((KDescendantsProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_descendantsproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KDescendantsProxyModel_QBaseSetHeaderData((KDescendantsProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void k_descendantsproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    KDescendantsProxyModel_OnSetHeaderData((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_clear_item_data(void* self, void* index) {
    return KDescendantsProxyModel_ClearItemData((KDescendantsProxyModel*)self, (QModelIndex*)index);
}

bool k_descendantsproxymodel_qbase_clear_item_data(void* self, void* index) {
    return KDescendantsProxyModel_QBaseClearItemData((KDescendantsProxyModel*)self, (QModelIndex*)index);
}

void k_descendantsproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnClearItemData((KDescendantsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_descendantsproxymodel_buddy(void* self, void* index) {
    return KDescendantsProxyModel_Buddy((KDescendantsProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* k_descendantsproxymodel_qbase_buddy(void* self, void* index) {
    return KDescendantsProxyModel_QBaseBuddy((KDescendantsProxyModel*)self, (QModelIndex*)index);
}

void k_descendantsproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnBuddy((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_can_fetch_more(void* self, void* parent) {
    return KDescendantsProxyModel_CanFetchMore((KDescendantsProxyModel*)self, (QModelIndex*)parent);
}

bool k_descendantsproxymodel_qbase_can_fetch_more(void* self, void* parent) {
    return KDescendantsProxyModel_QBaseCanFetchMore((KDescendantsProxyModel*)self, (QModelIndex*)parent);
}

void k_descendantsproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnCanFetchMore((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_fetch_more(void* self, void* parent) {
    KDescendantsProxyModel_FetchMore((KDescendantsProxyModel*)self, (QModelIndex*)parent);
}

void k_descendantsproxymodel_qbase_fetch_more(void* self, void* parent) {
    KDescendantsProxyModel_QBaseFetchMore((KDescendantsProxyModel*)self, (QModelIndex*)parent);
}

void k_descendantsproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnFetchMore((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_sort(void* self, int column, int32_t order) {
    KDescendantsProxyModel_Sort((KDescendantsProxyModel*)self, column, order);
}

void k_descendantsproxymodel_qbase_sort(void* self, int column, int32_t order) {
    KDescendantsProxyModel_QBaseSort((KDescendantsProxyModel*)self, column, order);
}

void k_descendantsproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KDescendantsProxyModel_OnSort((KDescendantsProxyModel*)self, (intptr_t)callback);
}

QSize* k_descendantsproxymodel_span(void* self, void* index) {
    return KDescendantsProxyModel_Span((KDescendantsProxyModel*)self, (QModelIndex*)index);
}

QSize* k_descendantsproxymodel_qbase_span(void* self, void* index) {
    return KDescendantsProxyModel_QBaseSpan((KDescendantsProxyModel*)self, (QModelIndex*)index);
}

void k_descendantsproxymodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnSpan((KDescendantsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_descendantsproxymodel_sibling(void* self, int row, int column, void* idx) {
    return KDescendantsProxyModel_Sibling((KDescendantsProxyModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_descendantsproxymodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return KDescendantsProxyModel_QBaseSibling((KDescendantsProxyModel*)self, row, column, (QModelIndex*)idx);
}

void k_descendantsproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KDescendantsProxyModel_OnSibling((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KDescendantsProxyModel_CanDropMimeData((KDescendantsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_descendantsproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KDescendantsProxyModel_QBaseCanDropMimeData((KDescendantsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_descendantsproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KDescendantsProxyModel_OnCanDropMimeData((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KDescendantsProxyModel_DropMimeData((KDescendantsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_descendantsproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KDescendantsProxyModel_QBaseDropMimeData((KDescendantsProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_descendantsproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KDescendantsProxyModel_OnDropMimeData((KDescendantsProxyModel*)self, (intptr_t)callback);
}

int32_t k_descendantsproxymodel_supported_drag_actions(void* self) {
    return KDescendantsProxyModel_SupportedDragActions((KDescendantsProxyModel*)self);
}

int32_t k_descendantsproxymodel_qbase_supported_drag_actions(void* self) {
    return KDescendantsProxyModel_QBaseSupportedDragActions((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    KDescendantsProxyModel_OnSupportedDragActions((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_insert_rows(void* self, int row, int count, void* parent) {
    return KDescendantsProxyModel_InsertRows((KDescendantsProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_descendantsproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return KDescendantsProxyModel_QBaseInsertRows((KDescendantsProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_descendantsproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KDescendantsProxyModel_OnInsertRows((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_insert_columns(void* self, int column, int count, void* parent) {
    return KDescendantsProxyModel_InsertColumns((KDescendantsProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_descendantsproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return KDescendantsProxyModel_QBaseInsertColumns((KDescendantsProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_descendantsproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KDescendantsProxyModel_OnInsertColumns((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_remove_rows(void* self, int row, int count, void* parent) {
    return KDescendantsProxyModel_RemoveRows((KDescendantsProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_descendantsproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return KDescendantsProxyModel_QBaseRemoveRows((KDescendantsProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_descendantsproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KDescendantsProxyModel_OnRemoveRows((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_remove_columns(void* self, int column, int count, void* parent) {
    return KDescendantsProxyModel_RemoveColumns((KDescendantsProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_descendantsproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return KDescendantsProxyModel_QBaseRemoveColumns((KDescendantsProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_descendantsproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KDescendantsProxyModel_OnRemoveColumns((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KDescendantsProxyModel_MoveRows((KDescendantsProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_descendantsproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KDescendantsProxyModel_QBaseMoveRows((KDescendantsProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_descendantsproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KDescendantsProxyModel_OnMoveRows((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KDescendantsProxyModel_MoveColumns((KDescendantsProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_descendantsproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KDescendantsProxyModel_QBaseMoveColumns((KDescendantsProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_descendantsproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KDescendantsProxyModel_OnMoveColumns((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    KDescendantsProxyModel_MultiData((KDescendantsProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_descendantsproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    KDescendantsProxyModel_QBaseMultiData((KDescendantsProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_descendantsproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    KDescendantsProxyModel_OnMultiData((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_reset_internal_data(void* self) {
    KDescendantsProxyModel_ResetInternalData((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_qbase_reset_internal_data(void* self) {
    KDescendantsProxyModel_QBaseResetInternalData((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_reset_internal_data(void* self, void (*callback)()) {
    KDescendantsProxyModel_OnResetInternalData((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_event(void* self, void* event) {
    return KDescendantsProxyModel_Event((KDescendantsProxyModel*)self, (QEvent*)event);
}

bool k_descendantsproxymodel_qbase_event(void* self, void* event) {
    return KDescendantsProxyModel_QBaseEvent((KDescendantsProxyModel*)self, (QEvent*)event);
}

void k_descendantsproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnEvent((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_event_filter(void* self, void* watched, void* event) {
    return KDescendantsProxyModel_EventFilter((KDescendantsProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_descendantsproxymodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KDescendantsProxyModel_QBaseEventFilter((KDescendantsProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_descendantsproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KDescendantsProxyModel_OnEventFilter((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_timer_event(void* self, void* event) {
    KDescendantsProxyModel_TimerEvent((KDescendantsProxyModel*)self, (QTimerEvent*)event);
}

void k_descendantsproxymodel_qbase_timer_event(void* self, void* event) {
    KDescendantsProxyModel_QBaseTimerEvent((KDescendantsProxyModel*)self, (QTimerEvent*)event);
}

void k_descendantsproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnTimerEvent((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_child_event(void* self, void* event) {
    KDescendantsProxyModel_ChildEvent((KDescendantsProxyModel*)self, (QChildEvent*)event);
}

void k_descendantsproxymodel_qbase_child_event(void* self, void* event) {
    KDescendantsProxyModel_QBaseChildEvent((KDescendantsProxyModel*)self, (QChildEvent*)event);
}

void k_descendantsproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnChildEvent((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_custom_event(void* self, void* event) {
    KDescendantsProxyModel_CustomEvent((KDescendantsProxyModel*)self, (QEvent*)event);
}

void k_descendantsproxymodel_qbase_custom_event(void* self, void* event) {
    KDescendantsProxyModel_QBaseCustomEvent((KDescendantsProxyModel*)self, (QEvent*)event);
}

void k_descendantsproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnCustomEvent((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_connect_notify(void* self, void* signal) {
    KDescendantsProxyModel_ConnectNotify((KDescendantsProxyModel*)self, (QMetaMethod*)signal);
}

void k_descendantsproxymodel_qbase_connect_notify(void* self, void* signal) {
    KDescendantsProxyModel_QBaseConnectNotify((KDescendantsProxyModel*)self, (QMetaMethod*)signal);
}

void k_descendantsproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnConnectNotify((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_disconnect_notify(void* self, void* signal) {
    KDescendantsProxyModel_DisconnectNotify((KDescendantsProxyModel*)self, (QMetaMethod*)signal);
}

void k_descendantsproxymodel_qbase_disconnect_notify(void* self, void* signal) {
    KDescendantsProxyModel_QBaseDisconnectNotify((KDescendantsProxyModel*)self, (QMetaMethod*)signal);
}

void k_descendantsproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnDisconnectNotify((KDescendantsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_descendantsproxymodel_create_source_index(void* self, int row, int col, void* internalPtr) {
    return KDescendantsProxyModel_CreateSourceIndex((KDescendantsProxyModel*)self, row, col, internalPtr);
}

QModelIndex* k_descendantsproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr) {
    return KDescendantsProxyModel_QBaseCreateSourceIndex((KDescendantsProxyModel*)self, row, col, internalPtr);
}

void k_descendantsproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KDescendantsProxyModel_OnCreateSourceIndex((KDescendantsProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_descendantsproxymodel_create_index(void* self, int row, int column) {
    return KDescendantsProxyModel_CreateIndex((KDescendantsProxyModel*)self, row, column);
}

QModelIndex* k_descendantsproxymodel_qbase_create_index(void* self, int row, int column) {
    return KDescendantsProxyModel_QBaseCreateIndex((KDescendantsProxyModel*)self, row, column);
}

void k_descendantsproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    KDescendantsProxyModel_OnCreateIndex((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KDescendantsProxyModel_EncodeData((KDescendantsProxyModel*)self, indexes, (QDataStream*)stream);
}

void k_descendantsproxymodel_qbase_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KDescendantsProxyModel_QBaseEncodeData((KDescendantsProxyModel*)self, indexes, (QDataStream*)stream);
}

void k_descendantsproxymodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    KDescendantsProxyModel_OnEncodeData((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KDescendantsProxyModel_DecodeData((KDescendantsProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_descendantsproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KDescendantsProxyModel_QBaseDecodeData((KDescendantsProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_descendantsproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    KDescendantsProxyModel_OnDecodeData((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    KDescendantsProxyModel_BeginInsertRows((KDescendantsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_descendantsproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    KDescendantsProxyModel_QBaseBeginInsertRows((KDescendantsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_descendantsproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KDescendantsProxyModel_OnBeginInsertRows((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_end_insert_rows(void* self) {
    KDescendantsProxyModel_EndInsertRows((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_qbase_end_insert_rows(void* self) {
    KDescendantsProxyModel_QBaseEndInsertRows((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_end_insert_rows(void* self, void (*callback)()) {
    KDescendantsProxyModel_OnEndInsertRows((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    KDescendantsProxyModel_BeginRemoveRows((KDescendantsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_descendantsproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    KDescendantsProxyModel_QBaseBeginRemoveRows((KDescendantsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_descendantsproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KDescendantsProxyModel_OnBeginRemoveRows((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_end_remove_rows(void* self) {
    KDescendantsProxyModel_EndRemoveRows((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_qbase_end_remove_rows(void* self) {
    KDescendantsProxyModel_QBaseEndRemoveRows((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_end_remove_rows(void* self, void (*callback)()) {
    KDescendantsProxyModel_OnEndRemoveRows((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KDescendantsProxyModel_BeginMoveRows((KDescendantsProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_descendantsproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KDescendantsProxyModel_QBaseBeginMoveRows((KDescendantsProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_descendantsproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KDescendantsProxyModel_OnBeginMoveRows((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_end_move_rows(void* self) {
    KDescendantsProxyModel_EndMoveRows((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_qbase_end_move_rows(void* self) {
    KDescendantsProxyModel_QBaseEndMoveRows((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_end_move_rows(void* self, void (*callback)()) {
    KDescendantsProxyModel_OnEndMoveRows((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    KDescendantsProxyModel_BeginInsertColumns((KDescendantsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_descendantsproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    KDescendantsProxyModel_QBaseBeginInsertColumns((KDescendantsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_descendantsproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KDescendantsProxyModel_OnBeginInsertColumns((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_end_insert_columns(void* self) {
    KDescendantsProxyModel_EndInsertColumns((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_qbase_end_insert_columns(void* self) {
    KDescendantsProxyModel_QBaseEndInsertColumns((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_end_insert_columns(void* self, void (*callback)()) {
    KDescendantsProxyModel_OnEndInsertColumns((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    KDescendantsProxyModel_BeginRemoveColumns((KDescendantsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_descendantsproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    KDescendantsProxyModel_QBaseBeginRemoveColumns((KDescendantsProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_descendantsproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KDescendantsProxyModel_OnBeginRemoveColumns((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_end_remove_columns(void* self) {
    KDescendantsProxyModel_EndRemoveColumns((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_qbase_end_remove_columns(void* self) {
    KDescendantsProxyModel_QBaseEndRemoveColumns((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_end_remove_columns(void* self, void (*callback)()) {
    KDescendantsProxyModel_OnEndRemoveColumns((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KDescendantsProxyModel_BeginMoveColumns((KDescendantsProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_descendantsproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KDescendantsProxyModel_QBaseBeginMoveColumns((KDescendantsProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_descendantsproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KDescendantsProxyModel_OnBeginMoveColumns((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_end_move_columns(void* self) {
    KDescendantsProxyModel_EndMoveColumns((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_qbase_end_move_columns(void* self) {
    KDescendantsProxyModel_QBaseEndMoveColumns((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_end_move_columns(void* self, void (*callback)()) {
    KDescendantsProxyModel_OnEndMoveColumns((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_begin_reset_model(void* self) {
    KDescendantsProxyModel_BeginResetModel((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_qbase_begin_reset_model(void* self) {
    KDescendantsProxyModel_QBaseBeginResetModel((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_begin_reset_model(void* self, void (*callback)()) {
    KDescendantsProxyModel_OnBeginResetModel((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_end_reset_model(void* self) {
    KDescendantsProxyModel_EndResetModel((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_qbase_end_reset_model(void* self) {
    KDescendantsProxyModel_QBaseEndResetModel((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_end_reset_model(void* self, void (*callback)()) {
    KDescendantsProxyModel_OnEndResetModel((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_change_persistent_index(void* self, void* from, void* to) {
    KDescendantsProxyModel_ChangePersistentIndex((KDescendantsProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_descendantsproxymodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    KDescendantsProxyModel_QBaseChangePersistentIndex((KDescendantsProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_descendantsproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    KDescendantsProxyModel_OnChangePersistentIndex((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KDescendantsProxyModel_ChangePersistentIndexList((KDescendantsProxyModel*)self, from, to);
}

void k_descendantsproxymodel_qbase_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KDescendantsProxyModel_QBaseChangePersistentIndexList((KDescendantsProxyModel*)self, from, to);
}

void k_descendantsproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    KDescendantsProxyModel_OnChangePersistentIndexList((KDescendantsProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_descendantsproxymodel_persistent_index_list(void* self) {
    libqt_list _arr = KDescendantsProxyModel_PersistentIndexList((KDescendantsProxyModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_descendantsproxymodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = KDescendantsProxyModel_QBasePersistentIndexList((KDescendantsProxyModel*)self);
    return _arr;
}

void k_descendantsproxymodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    KDescendantsProxyModel_OnPersistentIndexList((KDescendantsProxyModel*)self, (intptr_t)callback);
}

QObject* k_descendantsproxymodel_sender(void* self) {
    return KDescendantsProxyModel_Sender((KDescendantsProxyModel*)self);
}

QObject* k_descendantsproxymodel_qbase_sender(void* self) {
    return KDescendantsProxyModel_QBaseSender((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_sender(void* self, QObject* (*callback)()) {
    KDescendantsProxyModel_OnSender((KDescendantsProxyModel*)self, (intptr_t)callback);
}

int32_t k_descendantsproxymodel_sender_signal_index(void* self) {
    return KDescendantsProxyModel_SenderSignalIndex((KDescendantsProxyModel*)self);
}

int32_t k_descendantsproxymodel_qbase_sender_signal_index(void* self) {
    return KDescendantsProxyModel_QBaseSenderSignalIndex((KDescendantsProxyModel*)self);
}

void k_descendantsproxymodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KDescendantsProxyModel_OnSenderSignalIndex((KDescendantsProxyModel*)self, (intptr_t)callback);
}

int32_t k_descendantsproxymodel_receivers(void* self, const char* signal) {
    return KDescendantsProxyModel_Receivers((KDescendantsProxyModel*)self, signal);
}

int32_t k_descendantsproxymodel_qbase_receivers(void* self, const char* signal) {
    return KDescendantsProxyModel_QBaseReceivers((KDescendantsProxyModel*)self, signal);
}

void k_descendantsproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KDescendantsProxyModel_OnReceivers((KDescendantsProxyModel*)self, (intptr_t)callback);
}

bool k_descendantsproxymodel_is_signal_connected(void* self, void* signal) {
    return KDescendantsProxyModel_IsSignalConnected((KDescendantsProxyModel*)self, (QMetaMethod*)signal);
}

bool k_descendantsproxymodel_qbase_is_signal_connected(void* self, void* signal) {
    return KDescendantsProxyModel_QBaseIsSignalConnected((KDescendantsProxyModel*)self, (QMetaMethod*)signal);
}

void k_descendantsproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KDescendantsProxyModel_OnIsSignalConnected((KDescendantsProxyModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_descendantsproxymodel_delete(void* self) {
    KDescendantsProxyModel_Delete((KDescendantsProxyModel*)(self));
}
