#include "libqabstractitemmodel.hpp"
#include "libqcoreevent.hpp"
#include "libqdatastream.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqconcatenatetablesproxymodel.hpp"
#include "libqconcatenatetablesproxymodel.h"

QConcatenateTablesProxyModel* q_concatenatetablesproxymodel_new() {
    return QConcatenateTablesProxyModel_new();
}

QConcatenateTablesProxyModel* q_concatenatetablesproxymodel_new2(void* parent) {
    return QConcatenateTablesProxyModel_new2((QObject*)parent);
}

const QMetaObject* q_concatenatetablesproxymodel_meta_object(void* self) {
    return QConcatenateTablesProxyModel_MetaObject((QConcatenateTablesProxyModel*)self);
}

void* q_concatenatetablesproxymodel_metacast(void* self, const char* param1) {
    return QConcatenateTablesProxyModel_Metacast((QConcatenateTablesProxyModel*)self, param1);
}

int32_t q_concatenatetablesproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QConcatenateTablesProxyModel_Metacall((QConcatenateTablesProxyModel*)self, param1, param2, param3);
}

void q_concatenatetablesproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QConcatenateTablesProxyModel_OnMetacall((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

int32_t q_concatenatetablesproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QConcatenateTablesProxyModel_QBaseMetacall((QConcatenateTablesProxyModel*)self, param1, param2, param3);
}

const char* q_concatenatetablesproxymodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QAbstractItemModel* */ q_concatenatetablesproxymodel_source_models(void* self) {
    libqt_list _arr = QConcatenateTablesProxyModel_SourceModels((QConcatenateTablesProxyModel*)self);
    return _arr;
}

void q_concatenatetablesproxymodel_add_source_model(void* self, void* sourceModel) {
    QConcatenateTablesProxyModel_AddSourceModel((QConcatenateTablesProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void q_concatenatetablesproxymodel_remove_source_model(void* self, void* sourceModel) {
    QConcatenateTablesProxyModel_RemoveSourceModel((QConcatenateTablesProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

QModelIndex* q_concatenatetablesproxymodel_map_from_source(void* self, void* sourceIndex) {
    return QConcatenateTablesProxyModel_MapFromSource((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceIndex);
}

QModelIndex* q_concatenatetablesproxymodel_map_to_source(void* self, void* proxyIndex) {
    return QConcatenateTablesProxyModel_MapToSource((QConcatenateTablesProxyModel*)self, (QModelIndex*)proxyIndex);
}

QVariant* q_concatenatetablesproxymodel_data(void* self, void* index, int role) {
    return QConcatenateTablesProxyModel_Data((QConcatenateTablesProxyModel*)self, (QModelIndex*)index, role);
}

void q_concatenatetablesproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    QConcatenateTablesProxyModel_OnData((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

QVariant* q_concatenatetablesproxymodel_qbase_data(void* self, void* index, int role) {
    return QConcatenateTablesProxyModel_QBaseData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index, role);
}

bool q_concatenatetablesproxymodel_set_data(void* self, void* index, void* value, int role) {
    return QConcatenateTablesProxyModel_SetData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_concatenatetablesproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    QConcatenateTablesProxyModel_OnSetData((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QConcatenateTablesProxyModel_QBaseSetData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

libqt_map /* of int to QVariant* */ q_concatenatetablesproxymodel_item_data(void* self, void* proxyIndex) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QConcatenateTablesProxyModel_ItemData((QConcatenateTablesProxyModel*)self, (QModelIndex*)proxyIndex);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void q_concatenatetablesproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnItemData((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_concatenatetablesproxymodel_qbase_item_data(void* self, void* proxyIndex) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QConcatenateTablesProxyModel_QBaseItemData((QConcatenateTablesProxyModel*)self, (QModelIndex*)proxyIndex);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

bool q_concatenatetablesproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
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
    bool _out = QConcatenateTablesProxyModel_SetItemData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index, roles_ret);
    libqt_free(roles_ret.keys);
    libqt_free(roles_ret.values);
    return _out;
}

void q_concatenatetablesproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QConcatenateTablesProxyModel_OnSetItemData((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
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
    return QConcatenateTablesProxyModel_QBaseSetItemData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index, roles_ret);
}

int32_t q_concatenatetablesproxymodel_flags(void* self, void* index) {
    return QConcatenateTablesProxyModel_Flags((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

void q_concatenatetablesproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnFlags((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

int32_t q_concatenatetablesproxymodel_qbase_flags(void* self, void* index) {
    return QConcatenateTablesProxyModel_QBaseFlags((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* q_concatenatetablesproxymodel_index(void* self, int row, int column, void* parent) {
    return QConcatenateTablesProxyModel_Index((QConcatenateTablesProxyModel*)self, row, column, (QModelIndex*)parent);
}

void q_concatenatetablesproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QConcatenateTablesProxyModel_OnIndex((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_concatenatetablesproxymodel_qbase_index(void* self, int row, int column, void* parent) {
    return QConcatenateTablesProxyModel_QBaseIndex((QConcatenateTablesProxyModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_concatenatetablesproxymodel_parent(void* self, void* index) {
    return QConcatenateTablesProxyModel_Parent((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

void q_concatenatetablesproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnParent((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_concatenatetablesproxymodel_qbase_parent(void* self, void* index) {
    return QConcatenateTablesProxyModel_QBaseParent((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

int32_t q_concatenatetablesproxymodel_row_count(void* self, void* parent) {
    return QConcatenateTablesProxyModel_RowCount((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

void q_concatenatetablesproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnRowCount((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

int32_t q_concatenatetablesproxymodel_qbase_row_count(void* self, void* parent) {
    return QConcatenateTablesProxyModel_QBaseRowCount((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

QVariant* q_concatenatetablesproxymodel_header_data(void* self, int section, int32_t orientation, int role) {
    return QConcatenateTablesProxyModel_HeaderData((QConcatenateTablesProxyModel*)self, section, orientation, role);
}

void q_concatenatetablesproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    QConcatenateTablesProxyModel_OnHeaderData((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

QVariant* q_concatenatetablesproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return QConcatenateTablesProxyModel_QBaseHeaderData((QConcatenateTablesProxyModel*)self, section, orientation, role);
}

int32_t q_concatenatetablesproxymodel_column_count(void* self, void* parent) {
    return QConcatenateTablesProxyModel_ColumnCount((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

void q_concatenatetablesproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnColumnCount((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

int32_t q_concatenatetablesproxymodel_qbase_column_count(void* self, void* parent) {
    return QConcatenateTablesProxyModel_QBaseColumnCount((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

const char** q_concatenatetablesproxymodel_mime_types(void* self) {
    libqt_list _arr = QConcatenateTablesProxyModel_MimeTypes((QConcatenateTablesProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_concatenatetablesproxymodel_mime_types");
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

void q_concatenatetablesproxymodel_on_mime_types(void* self, const char** (*callback)()) {
    QConcatenateTablesProxyModel_OnMimeTypes((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

const char** q_concatenatetablesproxymodel_qbase_mime_types(void* self) {
    libqt_list _arr = QConcatenateTablesProxyModel_QBaseMimeTypes((QConcatenateTablesProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_concatenatetablesproxymodel_mime_types");
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

QMimeData* q_concatenatetablesproxymodel_mime_data(void* self, libqt_list indexes) {
    return QConcatenateTablesProxyModel_MimeData((QConcatenateTablesProxyModel*)self, indexes);
}

void q_concatenatetablesproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    QConcatenateTablesProxyModel_OnMimeData((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

QMimeData* q_concatenatetablesproxymodel_qbase_mime_data(void* self, libqt_list indexes) {
    return QConcatenateTablesProxyModel_QBaseMimeData((QConcatenateTablesProxyModel*)self, indexes);
}

bool q_concatenatetablesproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QConcatenateTablesProxyModel_CanDropMimeData((QConcatenateTablesProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_concatenatetablesproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QConcatenateTablesProxyModel_OnCanDropMimeData((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QConcatenateTablesProxyModel_QBaseCanDropMimeData((QConcatenateTablesProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_concatenatetablesproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QConcatenateTablesProxyModel_DropMimeData((QConcatenateTablesProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_concatenatetablesproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QConcatenateTablesProxyModel_OnDropMimeData((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QConcatenateTablesProxyModel_QBaseDropMimeData((QConcatenateTablesProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

QSize* q_concatenatetablesproxymodel_span(void* self, void* index) {
    return QConcatenateTablesProxyModel_Span((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

void q_concatenatetablesproxymodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnSpan((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

QSize* q_concatenatetablesproxymodel_qbase_span(void* self, void* index) {
    return QConcatenateTablesProxyModel_QBaseSpan((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

const char* q_concatenatetablesproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_concatenatetablesproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_concatenatetablesproxymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool q_concatenatetablesproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_concatenatetablesproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_concatenatetablesproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_concatenatetablesproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_concatenatetablesproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_concatenatetablesproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_concatenatetablesproxymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_concatenatetablesproxymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_concatenatetablesproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_concatenatetablesproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_concatenatetablesproxymodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_concatenatetablesproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_concatenatetablesproxymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_concatenatetablesproxymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_concatenatetablesproxymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_concatenatetablesproxymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_concatenatetablesproxymodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_concatenatetablesproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_concatenatetablesproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_concatenatetablesproxymodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_concatenatetablesproxymodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_concatenatetablesproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_concatenatetablesproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_concatenatetablesproxymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_concatenatetablesproxymodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_concatenatetablesproxymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_concatenatetablesproxymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_concatenatetablesproxymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_concatenatetablesproxymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_concatenatetablesproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_concatenatetablesproxymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_concatenatetablesproxymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_concatenatetablesproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_concatenatetablesproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_concatenatetablesproxymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_concatenatetablesproxymodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_concatenatetablesproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_concatenatetablesproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_concatenatetablesproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_concatenatetablesproxymodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_concatenatetablesproxymodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_concatenatetablesproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_concatenatetablesproxymodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_concatenatetablesproxymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_concatenatetablesproxymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_concatenatetablesproxymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_concatenatetablesproxymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_concatenatetablesproxymodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_concatenatetablesproxymodel_dynamic_property_names");
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

QBindingStorage* q_concatenatetablesproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_concatenatetablesproxymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_concatenatetablesproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_concatenatetablesproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_concatenatetablesproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_concatenatetablesproxymodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_concatenatetablesproxymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_concatenatetablesproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_concatenatetablesproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_concatenatetablesproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_concatenatetablesproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* q_concatenatetablesproxymodel_sibling(void* self, int row, int column, void* idx) {
    return QConcatenateTablesProxyModel_Sibling((QConcatenateTablesProxyModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* q_concatenatetablesproxymodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QConcatenateTablesProxyModel_QBaseSibling((QConcatenateTablesProxyModel*)self, row, column, (QModelIndex*)idx);
}

void q_concatenatetablesproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QConcatenateTablesProxyModel_OnSibling((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_has_children(void* self, void* parent) {
    return QConcatenateTablesProxyModel_HasChildren((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

bool q_concatenatetablesproxymodel_qbase_has_children(void* self, void* parent) {
    return QConcatenateTablesProxyModel_QBaseHasChildren((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

void q_concatenatetablesproxymodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnHasChildren((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QConcatenateTablesProxyModel_SetHeaderData((QConcatenateTablesProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_concatenatetablesproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QConcatenateTablesProxyModel_QBaseSetHeaderData((QConcatenateTablesProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void q_concatenatetablesproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    QConcatenateTablesProxyModel_OnSetHeaderData((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_clear_item_data(void* self, void* index) {
    return QConcatenateTablesProxyModel_ClearItemData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

bool q_concatenatetablesproxymodel_qbase_clear_item_data(void* self, void* index) {
    return QConcatenateTablesProxyModel_QBaseClearItemData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

void q_concatenatetablesproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnClearItemData((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

int32_t q_concatenatetablesproxymodel_supported_drop_actions(void* self) {
    return QConcatenateTablesProxyModel_SupportedDropActions((QConcatenateTablesProxyModel*)self);
}

int32_t q_concatenatetablesproxymodel_qbase_supported_drop_actions(void* self) {
    return QConcatenateTablesProxyModel_QBaseSupportedDropActions((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    QConcatenateTablesProxyModel_OnSupportedDropActions((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

int32_t q_concatenatetablesproxymodel_supported_drag_actions(void* self) {
    return QConcatenateTablesProxyModel_SupportedDragActions((QConcatenateTablesProxyModel*)self);
}

int32_t q_concatenatetablesproxymodel_qbase_supported_drag_actions(void* self) {
    return QConcatenateTablesProxyModel_QBaseSupportedDragActions((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    QConcatenateTablesProxyModel_OnSupportedDragActions((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_insert_rows(void* self, int row, int count, void* parent) {
    return QConcatenateTablesProxyModel_InsertRows((QConcatenateTablesProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool q_concatenatetablesproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QConcatenateTablesProxyModel_QBaseInsertRows((QConcatenateTablesProxyModel*)self, row, count, (QModelIndex*)parent);
}

void q_concatenatetablesproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QConcatenateTablesProxyModel_OnInsertRows((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_insert_columns(void* self, int column, int count, void* parent) {
    return QConcatenateTablesProxyModel_InsertColumns((QConcatenateTablesProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool q_concatenatetablesproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QConcatenateTablesProxyModel_QBaseInsertColumns((QConcatenateTablesProxyModel*)self, column, count, (QModelIndex*)parent);
}

void q_concatenatetablesproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QConcatenateTablesProxyModel_OnInsertColumns((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_remove_rows(void* self, int row, int count, void* parent) {
    return QConcatenateTablesProxyModel_RemoveRows((QConcatenateTablesProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool q_concatenatetablesproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QConcatenateTablesProxyModel_QBaseRemoveRows((QConcatenateTablesProxyModel*)self, row, count, (QModelIndex*)parent);
}

void q_concatenatetablesproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QConcatenateTablesProxyModel_OnRemoveRows((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_remove_columns(void* self, int column, int count, void* parent) {
    return QConcatenateTablesProxyModel_RemoveColumns((QConcatenateTablesProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool q_concatenatetablesproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QConcatenateTablesProxyModel_QBaseRemoveColumns((QConcatenateTablesProxyModel*)self, column, count, (QModelIndex*)parent);
}

void q_concatenatetablesproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QConcatenateTablesProxyModel_OnRemoveColumns((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QConcatenateTablesProxyModel_MoveRows((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_concatenatetablesproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QConcatenateTablesProxyModel_QBaseMoveRows((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_concatenatetablesproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QConcatenateTablesProxyModel_OnMoveRows((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QConcatenateTablesProxyModel_MoveColumns((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_concatenatetablesproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QConcatenateTablesProxyModel_QBaseMoveColumns((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_concatenatetablesproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QConcatenateTablesProxyModel_OnMoveColumns((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_fetch_more(void* self, void* parent) {
    QConcatenateTablesProxyModel_FetchMore((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

void q_concatenatetablesproxymodel_qbase_fetch_more(void* self, void* parent) {
    QConcatenateTablesProxyModel_QBaseFetchMore((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

void q_concatenatetablesproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnFetchMore((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_can_fetch_more(void* self, void* parent) {
    return QConcatenateTablesProxyModel_CanFetchMore((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

bool q_concatenatetablesproxymodel_qbase_can_fetch_more(void* self, void* parent) {
    return QConcatenateTablesProxyModel_QBaseCanFetchMore((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

void q_concatenatetablesproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnCanFetchMore((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_sort(void* self, int column, int32_t order) {
    QConcatenateTablesProxyModel_Sort((QConcatenateTablesProxyModel*)self, column, order);
}

void q_concatenatetablesproxymodel_qbase_sort(void* self, int column, int32_t order) {
    QConcatenateTablesProxyModel_QBaseSort((QConcatenateTablesProxyModel*)self, column, order);
}

void q_concatenatetablesproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QConcatenateTablesProxyModel_OnSort((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_concatenatetablesproxymodel_buddy(void* self, void* index) {
    return QConcatenateTablesProxyModel_Buddy((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* q_concatenatetablesproxymodel_qbase_buddy(void* self, void* index) {
    return QConcatenateTablesProxyModel_QBaseBuddy((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

void q_concatenatetablesproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnBuddy((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QConcatenateTablesProxyModel_Match((QConcatenateTablesProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QConcatenateTablesProxyModel_QBaseMatch((QConcatenateTablesProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_concatenatetablesproxymodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    QConcatenateTablesProxyModel_OnMatch((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_concatenatetablesproxymodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QConcatenateTablesProxyModel_RoleNames((QConcatenateTablesProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Memory allocation failed in q_concatenatetablesproxymodel_role_names");
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

libqt_map /* of int to char* */ q_concatenatetablesproxymodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QConcatenateTablesProxyModel_QBaseRoleNames((QConcatenateTablesProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Memory allocation failed in q_concatenatetablesproxymodel_role_names");
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

void q_concatenatetablesproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    QConcatenateTablesProxyModel_OnRoleNames((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QConcatenateTablesProxyModel_MultiData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_concatenatetablesproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QConcatenateTablesProxyModel_QBaseMultiData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_concatenatetablesproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    QConcatenateTablesProxyModel_OnMultiData((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_submit(void* self) {
    return QConcatenateTablesProxyModel_Submit((QConcatenateTablesProxyModel*)self);
}

bool q_concatenatetablesproxymodel_qbase_submit(void* self) {
    return QConcatenateTablesProxyModel_QBaseSubmit((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_on_submit(void* self, bool (*callback)()) {
    QConcatenateTablesProxyModel_OnSubmit((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_revert(void* self) {
    QConcatenateTablesProxyModel_Revert((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_qbase_revert(void* self) {
    QConcatenateTablesProxyModel_QBaseRevert((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_on_revert(void* self, void (*callback)()) {
    QConcatenateTablesProxyModel_OnRevert((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_reset_internal_data(void* self) {
    QConcatenateTablesProxyModel_ResetInternalData((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_qbase_reset_internal_data(void* self) {
    QConcatenateTablesProxyModel_QBaseResetInternalData((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_on_reset_internal_data(void* self, void (*callback)()) {
    QConcatenateTablesProxyModel_OnResetInternalData((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_event(void* self, void* event) {
    return QConcatenateTablesProxyModel_Event((QConcatenateTablesProxyModel*)self, (QEvent*)event);
}

bool q_concatenatetablesproxymodel_qbase_event(void* self, void* event) {
    return QConcatenateTablesProxyModel_QBaseEvent((QConcatenateTablesProxyModel*)self, (QEvent*)event);
}

void q_concatenatetablesproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnEvent((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_event_filter(void* self, void* watched, void* event) {
    return QConcatenateTablesProxyModel_EventFilter((QConcatenateTablesProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_concatenatetablesproxymodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QConcatenateTablesProxyModel_QBaseEventFilter((QConcatenateTablesProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_concatenatetablesproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QConcatenateTablesProxyModel_OnEventFilter((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_timer_event(void* self, void* event) {
    QConcatenateTablesProxyModel_TimerEvent((QConcatenateTablesProxyModel*)self, (QTimerEvent*)event);
}

void q_concatenatetablesproxymodel_qbase_timer_event(void* self, void* event) {
    QConcatenateTablesProxyModel_QBaseTimerEvent((QConcatenateTablesProxyModel*)self, (QTimerEvent*)event);
}

void q_concatenatetablesproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnTimerEvent((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_child_event(void* self, void* event) {
    QConcatenateTablesProxyModel_ChildEvent((QConcatenateTablesProxyModel*)self, (QChildEvent*)event);
}

void q_concatenatetablesproxymodel_qbase_child_event(void* self, void* event) {
    QConcatenateTablesProxyModel_QBaseChildEvent((QConcatenateTablesProxyModel*)self, (QChildEvent*)event);
}

void q_concatenatetablesproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnChildEvent((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_custom_event(void* self, void* event) {
    QConcatenateTablesProxyModel_CustomEvent((QConcatenateTablesProxyModel*)self, (QEvent*)event);
}

void q_concatenatetablesproxymodel_qbase_custom_event(void* self, void* event) {
    QConcatenateTablesProxyModel_QBaseCustomEvent((QConcatenateTablesProxyModel*)self, (QEvent*)event);
}

void q_concatenatetablesproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnCustomEvent((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_connect_notify(void* self, void* signal) {
    QConcatenateTablesProxyModel_ConnectNotify((QConcatenateTablesProxyModel*)self, (QMetaMethod*)signal);
}

void q_concatenatetablesproxymodel_qbase_connect_notify(void* self, void* signal) {
    QConcatenateTablesProxyModel_QBaseConnectNotify((QConcatenateTablesProxyModel*)self, (QMetaMethod*)signal);
}

void q_concatenatetablesproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnConnectNotify((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_disconnect_notify(void* self, void* signal) {
    QConcatenateTablesProxyModel_DisconnectNotify((QConcatenateTablesProxyModel*)self, (QMetaMethod*)signal);
}

void q_concatenatetablesproxymodel_qbase_disconnect_notify(void* self, void* signal) {
    QConcatenateTablesProxyModel_QBaseDisconnectNotify((QConcatenateTablesProxyModel*)self, (QMetaMethod*)signal);
}

void q_concatenatetablesproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnDisconnectNotify((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_concatenatetablesproxymodel_create_index(void* self, int row, int column) {
    return QConcatenateTablesProxyModel_CreateIndex((QConcatenateTablesProxyModel*)self, row, column);
}

QModelIndex* q_concatenatetablesproxymodel_qbase_create_index(void* self, int row, int column) {
    return QConcatenateTablesProxyModel_QBaseCreateIndex((QConcatenateTablesProxyModel*)self, row, column);
}

void q_concatenatetablesproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    QConcatenateTablesProxyModel_OnCreateIndex((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_encode_data(void* self, libqt_list indexes, void* stream) {
    QConcatenateTablesProxyModel_EncodeData((QConcatenateTablesProxyModel*)self, indexes, (QDataStream*)stream);
}

void q_concatenatetablesproxymodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    QConcatenateTablesProxyModel_QBaseEncodeData((QConcatenateTablesProxyModel*)self, indexes, (QDataStream*)stream);
}

void q_concatenatetablesproxymodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    QConcatenateTablesProxyModel_OnEncodeData((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QConcatenateTablesProxyModel_DecodeData((QConcatenateTablesProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_concatenatetablesproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QConcatenateTablesProxyModel_QBaseDecodeData((QConcatenateTablesProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_concatenatetablesproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    QConcatenateTablesProxyModel_OnDecodeData((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QConcatenateTablesProxyModel_BeginInsertRows((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_concatenatetablesproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QConcatenateTablesProxyModel_QBaseBeginInsertRows((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_concatenatetablesproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QConcatenateTablesProxyModel_OnBeginInsertRows((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_end_insert_rows(void* self) {
    QConcatenateTablesProxyModel_EndInsertRows((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_qbase_end_insert_rows(void* self) {
    QConcatenateTablesProxyModel_QBaseEndInsertRows((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_on_end_insert_rows(void* self, void (*callback)()) {
    QConcatenateTablesProxyModel_OnEndInsertRows((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QConcatenateTablesProxyModel_BeginRemoveRows((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_concatenatetablesproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QConcatenateTablesProxyModel_QBaseBeginRemoveRows((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_concatenatetablesproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QConcatenateTablesProxyModel_OnBeginRemoveRows((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_end_remove_rows(void* self) {
    QConcatenateTablesProxyModel_EndRemoveRows((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_qbase_end_remove_rows(void* self) {
    QConcatenateTablesProxyModel_QBaseEndRemoveRows((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_on_end_remove_rows(void* self, void (*callback)()) {
    QConcatenateTablesProxyModel_OnEndRemoveRows((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QConcatenateTablesProxyModel_BeginMoveRows((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool q_concatenatetablesproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QConcatenateTablesProxyModel_QBaseBeginMoveRows((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_concatenatetablesproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QConcatenateTablesProxyModel_OnBeginMoveRows((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_end_move_rows(void* self) {
    QConcatenateTablesProxyModel_EndMoveRows((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_qbase_end_move_rows(void* self) {
    QConcatenateTablesProxyModel_QBaseEndMoveRows((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_on_end_move_rows(void* self, void (*callback)()) {
    QConcatenateTablesProxyModel_OnEndMoveRows((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QConcatenateTablesProxyModel_BeginInsertColumns((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_concatenatetablesproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QConcatenateTablesProxyModel_QBaseBeginInsertColumns((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_concatenatetablesproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QConcatenateTablesProxyModel_OnBeginInsertColumns((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_end_insert_columns(void* self) {
    QConcatenateTablesProxyModel_EndInsertColumns((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_qbase_end_insert_columns(void* self) {
    QConcatenateTablesProxyModel_QBaseEndInsertColumns((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_on_end_insert_columns(void* self, void (*callback)()) {
    QConcatenateTablesProxyModel_OnEndInsertColumns((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QConcatenateTablesProxyModel_BeginRemoveColumns((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_concatenatetablesproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QConcatenateTablesProxyModel_QBaseBeginRemoveColumns((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_concatenatetablesproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QConcatenateTablesProxyModel_OnBeginRemoveColumns((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_end_remove_columns(void* self) {
    QConcatenateTablesProxyModel_EndRemoveColumns((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_qbase_end_remove_columns(void* self) {
    QConcatenateTablesProxyModel_QBaseEndRemoveColumns((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_on_end_remove_columns(void* self, void (*callback)()) {
    QConcatenateTablesProxyModel_OnEndRemoveColumns((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QConcatenateTablesProxyModel_BeginMoveColumns((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool q_concatenatetablesproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QConcatenateTablesProxyModel_QBaseBeginMoveColumns((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_concatenatetablesproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QConcatenateTablesProxyModel_OnBeginMoveColumns((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_end_move_columns(void* self) {
    QConcatenateTablesProxyModel_EndMoveColumns((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_qbase_end_move_columns(void* self) {
    QConcatenateTablesProxyModel_QBaseEndMoveColumns((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_on_end_move_columns(void* self, void (*callback)()) {
    QConcatenateTablesProxyModel_OnEndMoveColumns((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_begin_reset_model(void* self) {
    QConcatenateTablesProxyModel_BeginResetModel((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_qbase_begin_reset_model(void* self) {
    QConcatenateTablesProxyModel_QBaseBeginResetModel((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_on_begin_reset_model(void* self, void (*callback)()) {
    QConcatenateTablesProxyModel_OnBeginResetModel((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_end_reset_model(void* self) {
    QConcatenateTablesProxyModel_EndResetModel((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_qbase_end_reset_model(void* self) {
    QConcatenateTablesProxyModel_QBaseEndResetModel((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_on_end_reset_model(void* self, void (*callback)()) {
    QConcatenateTablesProxyModel_OnEndResetModel((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_change_persistent_index(void* self, void* from, void* to) {
    QConcatenateTablesProxyModel_ChangePersistentIndex((QConcatenateTablesProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_concatenatetablesproxymodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QConcatenateTablesProxyModel_QBaseChangePersistentIndex((QConcatenateTablesProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_concatenatetablesproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    QConcatenateTablesProxyModel_OnChangePersistentIndex((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QConcatenateTablesProxyModel_ChangePersistentIndexList((QConcatenateTablesProxyModel*)self, from, to);
}

void q_concatenatetablesproxymodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QConcatenateTablesProxyModel_QBaseChangePersistentIndexList((QConcatenateTablesProxyModel*)self, from, to);
}

void q_concatenatetablesproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    QConcatenateTablesProxyModel_OnChangePersistentIndexList((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_persistent_index_list(void* self) {
    libqt_list _arr = QConcatenateTablesProxyModel_PersistentIndexList((QConcatenateTablesProxyModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QConcatenateTablesProxyModel_QBasePersistentIndexList((QConcatenateTablesProxyModel*)self);
    return _arr;
}

void q_concatenatetablesproxymodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    QConcatenateTablesProxyModel_OnPersistentIndexList((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

QObject* q_concatenatetablesproxymodel_sender(void* self) {
    return QConcatenateTablesProxyModel_Sender((QConcatenateTablesProxyModel*)self);
}

QObject* q_concatenatetablesproxymodel_qbase_sender(void* self) {
    return QConcatenateTablesProxyModel_QBaseSender((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_on_sender(void* self, QObject* (*callback)()) {
    QConcatenateTablesProxyModel_OnSender((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

int32_t q_concatenatetablesproxymodel_sender_signal_index(void* self) {
    return QConcatenateTablesProxyModel_SenderSignalIndex((QConcatenateTablesProxyModel*)self);
}

int32_t q_concatenatetablesproxymodel_qbase_sender_signal_index(void* self) {
    return QConcatenateTablesProxyModel_QBaseSenderSignalIndex((QConcatenateTablesProxyModel*)self);
}

void q_concatenatetablesproxymodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QConcatenateTablesProxyModel_OnSenderSignalIndex((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

int32_t q_concatenatetablesproxymodel_receivers(void* self, const char* signal) {
    return QConcatenateTablesProxyModel_Receivers((QConcatenateTablesProxyModel*)self, signal);
}

int32_t q_concatenatetablesproxymodel_qbase_receivers(void* self, const char* signal) {
    return QConcatenateTablesProxyModel_QBaseReceivers((QConcatenateTablesProxyModel*)self, signal);
}

void q_concatenatetablesproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QConcatenateTablesProxyModel_OnReceivers((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

bool q_concatenatetablesproxymodel_is_signal_connected(void* self, void* signal) {
    return QConcatenateTablesProxyModel_IsSignalConnected((QConcatenateTablesProxyModel*)self, (QMetaMethod*)signal);
}

bool q_concatenatetablesproxymodel_qbase_is_signal_connected(void* self, void* signal) {
    return QConcatenateTablesProxyModel_QBaseIsSignalConnected((QConcatenateTablesProxyModel*)self, (QMetaMethod*)signal);
}

void q_concatenatetablesproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QConcatenateTablesProxyModel_OnIsSignalConnected((QConcatenateTablesProxyModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_concatenatetablesproxymodel_delete(void* self) {
    QConcatenateTablesProxyModel_Delete((QConcatenateTablesProxyModel*)(self));
}
