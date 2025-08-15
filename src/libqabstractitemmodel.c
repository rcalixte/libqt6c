#include "libqcoreevent.hpp"
#include "libqdatastream.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqabstractitemmodel.h"

QModelRoleData* q_modelroledata_new(int role) {
    return QModelRoleData_new(role);
}

int32_t q_modelroledata_role(void* self) {
    return QModelRoleData_Role((QModelRoleData*)self);
}

QVariant* q_modelroledata_data(void* self) {
    return QModelRoleData_Data((QModelRoleData*)self);
}

const QVariant* q_modelroledata_data2(void* self) {
    return QModelRoleData_Data2((QModelRoleData*)self);
}

void q_modelroledata_clear_data(void* self) {
    QModelRoleData_ClearData((QModelRoleData*)self);
}

void q_modelroledata_operator_assign(void* self, void* param1) {
    QModelRoleData_OperatorAssign((QModelRoleData*)self, (QModelRoleData*)param1);
}

void q_modelroledata_delete(void* self) {
    QModelRoleData_Delete((QModelRoleData*)(self));
}

QModelRoleDataSpan* q_modelroledataspan_new(void* other) {
    return QModelRoleDataSpan_new((QModelRoleDataSpan*)other);
}

QModelRoleDataSpan* q_modelroledataspan_new2(void* other) {
    return QModelRoleDataSpan_new2((QModelRoleDataSpan*)other);
}

QModelRoleDataSpan* q_modelroledataspan_new3() {
    return QModelRoleDataSpan_new3();
}

QModelRoleDataSpan* q_modelroledataspan_new4(void* modelRoleData) {
    return QModelRoleDataSpan_new4((QModelRoleData*)modelRoleData);
}

QModelRoleDataSpan* q_modelroledataspan_new5(void* modelRoleData, int64_t lenVal) {
    return QModelRoleDataSpan_new5((QModelRoleData*)modelRoleData, lenVal);
}

QModelRoleDataSpan* q_modelroledataspan_new6(void* param1) {
    return QModelRoleDataSpan_new6((QModelRoleDataSpan*)param1);
}

void q_modelroledataspan_copy_assign(void* self, void* other) {
    QModelRoleDataSpan_CopyAssign((QModelRoleDataSpan*)self, (QModelRoleDataSpan*)other);
}

void q_modelroledataspan_move_assign(void* self, void* other) {
    QModelRoleDataSpan_MoveAssign((QModelRoleDataSpan*)self, (QModelRoleDataSpan*)other);
}

int64_t q_modelroledataspan_size(void* self) {
    return QModelRoleDataSpan_Size((QModelRoleDataSpan*)self);
}

int64_t q_modelroledataspan_length(void* self) {
    return QModelRoleDataSpan_Length((QModelRoleDataSpan*)self);
}

QModelRoleData* q_modelroledataspan_data(void* self) {
    return QModelRoleDataSpan_Data((QModelRoleDataSpan*)self);
}

QModelRoleData* q_modelroledataspan_begin(void* self) {
    return QModelRoleDataSpan_Begin((QModelRoleDataSpan*)self);
}

QModelRoleData* q_modelroledataspan_end(void* self) {
    return QModelRoleDataSpan_End((QModelRoleDataSpan*)self);
}

QModelRoleData* q_modelroledataspan_operator_subscript(void* self, int64_t index) {
    return QModelRoleDataSpan_OperatorSubscript((QModelRoleDataSpan*)self, index);
}

QVariant* q_modelroledataspan_data_for_role(void* self, int role) {
    return QModelRoleDataSpan_DataForRole((QModelRoleDataSpan*)self, role);
}

void q_modelroledataspan_delete(void* self) {
    QModelRoleDataSpan_Delete((QModelRoleDataSpan*)(self));
}

QModelIndex* q_modelindex_new(void* other) {
    return QModelIndex_new((QModelIndex*)other);
}

QModelIndex* q_modelindex_new2(void* other) {
    return QModelIndex_new2((QModelIndex*)other);
}

QModelIndex* q_modelindex_new3() {
    return QModelIndex_new3();
}

QModelIndex* q_modelindex_new4(void* param1) {
    return QModelIndex_new4((QModelIndex*)param1);
}

void q_modelindex_copy_assign(void* self, void* other) {
    QModelIndex_CopyAssign((QModelIndex*)self, (QModelIndex*)other);
}

void q_modelindex_move_assign(void* self, void* other) {
    QModelIndex_MoveAssign((QModelIndex*)self, (QModelIndex*)other);
}

int32_t q_modelindex_row(void* self) {
    return QModelIndex_Row((QModelIndex*)self);
}

int32_t q_modelindex_column(void* self) {
    return QModelIndex_Column((QModelIndex*)self);
}

uintptr_t q_modelindex_internal_id(void* self) {
    return QModelIndex_InternalId((QModelIndex*)self);
}

void* q_modelindex_internal_pointer(void* self) {
    return QModelIndex_InternalPointer((QModelIndex*)self);
}

const void* q_modelindex_const_internal_pointer(void* self) {
    return QModelIndex_ConstInternalPointer((QModelIndex*)self);
}

QModelIndex* q_modelindex_parent(void* self) {
    return QModelIndex_Parent((QModelIndex*)self);
}

QModelIndex* q_modelindex_sibling(void* self, int row, int column) {
    return QModelIndex_Sibling((QModelIndex*)self, row, column);
}

QModelIndex* q_modelindex_sibling_at_column(void* self, int column) {
    return QModelIndex_SiblingAtColumn((QModelIndex*)self, column);
}

QModelIndex* q_modelindex_sibling_at_row(void* self, int row) {
    return QModelIndex_SiblingAtRow((QModelIndex*)self, row);
}

QVariant* q_modelindex_data(void* self) {
    return QModelIndex_Data((QModelIndex*)self);
}

void q_modelindex_multi_data(void* self, void* roleDataSpan) {
    QModelIndex_MultiData((QModelIndex*)self, (QModelRoleDataSpan*)roleDataSpan);
}

int64_t q_modelindex_flags(void* self) {
    return QModelIndex_Flags((QModelIndex*)self);
}

const QAbstractItemModel* q_modelindex_model(void* self) {
    return QModelIndex_Model((QModelIndex*)self);
}

bool q_modelindex_is_valid(void* self) {
    return QModelIndex_IsValid((QModelIndex*)self);
}

QVariant* q_modelindex_data1(void* self, int role) {
    return QModelIndex_Data1((QModelIndex*)self, role);
}

void q_modelindex_delete(void* self) {
    QModelIndex_Delete((QModelIndex*)(self));
}

QPersistentModelIndex* q_persistentmodelindex_new() {
    return QPersistentModelIndex_new();
}

QPersistentModelIndex* q_persistentmodelindex_new2(void* index) {
    return QPersistentModelIndex_new2((QModelIndex*)index);
}

QPersistentModelIndex* q_persistentmodelindex_new3(void* other) {
    return QPersistentModelIndex_new3((QPersistentModelIndex*)other);
}

void q_persistentmodelindex_operator_assign(void* self, void* other) {
    QPersistentModelIndex_OperatorAssign((QPersistentModelIndex*)self, (QPersistentModelIndex*)other);
}

void q_persistentmodelindex_swap(void* self, void* other) {
    QPersistentModelIndex_Swap((QPersistentModelIndex*)self, (QPersistentModelIndex*)other);
}

void q_persistentmodelindex_operator_assign2(void* self, void* other) {
    QPersistentModelIndex_OperatorAssign2((QPersistentModelIndex*)self, (QModelIndex*)other);
}

QModelIndex* q_persistentmodelindex_to_q_model_index(void* self) {
    return QPersistentModelIndex_ToQModelIndex((QPersistentModelIndex*)self);
}

int32_t q_persistentmodelindex_row(void* self) {
    return QPersistentModelIndex_Row((QPersistentModelIndex*)self);
}

int32_t q_persistentmodelindex_column(void* self) {
    return QPersistentModelIndex_Column((QPersistentModelIndex*)self);
}

void* q_persistentmodelindex_internal_pointer(void* self) {
    return QPersistentModelIndex_InternalPointer((QPersistentModelIndex*)self);
}

const void* q_persistentmodelindex_const_internal_pointer(void* self) {
    return QPersistentModelIndex_ConstInternalPointer((QPersistentModelIndex*)self);
}

uintptr_t q_persistentmodelindex_internal_id(void* self) {
    return QPersistentModelIndex_InternalId((QPersistentModelIndex*)self);
}

QModelIndex* q_persistentmodelindex_parent(void* self) {
    return QPersistentModelIndex_Parent((QPersistentModelIndex*)self);
}

QModelIndex* q_persistentmodelindex_sibling(void* self, int row, int column) {
    return QPersistentModelIndex_Sibling((QPersistentModelIndex*)self, row, column);
}

QVariant* q_persistentmodelindex_data(void* self) {
    return QPersistentModelIndex_Data((QPersistentModelIndex*)self);
}

void q_persistentmodelindex_multi_data(void* self, void* roleDataSpan) {
    QPersistentModelIndex_MultiData((QPersistentModelIndex*)self, (QModelRoleDataSpan*)roleDataSpan);
}

int64_t q_persistentmodelindex_flags(void* self) {
    return QPersistentModelIndex_Flags((QPersistentModelIndex*)self);
}

const QAbstractItemModel* q_persistentmodelindex_model(void* self) {
    return QPersistentModelIndex_Model((QPersistentModelIndex*)self);
}

bool q_persistentmodelindex_is_valid(void* self) {
    return QPersistentModelIndex_IsValid((QPersistentModelIndex*)self);
}

QVariant* q_persistentmodelindex_data1(void* self, int role) {
    return QPersistentModelIndex_Data1((QPersistentModelIndex*)self, role);
}

void q_persistentmodelindex_delete(void* self) {
    QPersistentModelIndex_Delete((QPersistentModelIndex*)(self));
}

QAbstractItemModel* q_abstractitemmodel_new() {
    return QAbstractItemModel_new();
}

QAbstractItemModel* q_abstractitemmodel_new2(void* parent) {
    return QAbstractItemModel_new2((QObject*)parent);
}

const QMetaObject* q_abstractitemmodel_meta_object(void* self) {
    return QAbstractItemModel_MetaObject((QAbstractItemModel*)self);
}

void* q_abstractitemmodel_metacast(void* self, const char* param1) {
    return QAbstractItemModel_Metacast((QAbstractItemModel*)self, param1);
}

int32_t q_abstractitemmodel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractItemModel_Metacall((QAbstractItemModel*)self, param1, param2, param3);
}

void q_abstractitemmodel_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QAbstractItemModel_OnMetacall((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t q_abstractitemmodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractItemModel_QBaseMetacall((QAbstractItemModel*)self, param1, param2, param3);
}

const char* q_abstractitemmodel_tr(const char* s) {
    libqt_string _str = QAbstractItemModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_abstractitemmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* q_abstractitemmodel_index(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_Index((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

void q_abstractitemmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QAbstractItemModel_OnIndex((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractitemmodel_qbase_index(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_QBaseIndex((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_abstractitemmodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void q_abstractitemmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractitemmodel_qbase_parent(void* self, void* child) {
    return QAbstractItemModel_QBaseParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

QModelIndex* q_abstractitemmodel_sibling(void* self, int row, int column, void* idx) {
    return QAbstractItemModel_Sibling((QAbstractItemModel*)self, row, column, (QModelIndex*)idx);
}

void q_abstractitemmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QAbstractItemModel_OnSibling((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractitemmodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QAbstractItemModel_QBaseSibling((QAbstractItemModel*)self, row, column, (QModelIndex*)idx);
}

int32_t q_abstractitemmodel_row_count(void* self, void* parent) {
    return QAbstractItemModel_RowCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_abstractitemmodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    QAbstractItemModel_OnRowCount((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t q_abstractitemmodel_qbase_row_count(void* self, void* parent) {
    return QAbstractItemModel_QBaseRowCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

int32_t q_abstractitemmodel_column_count(void* self, void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_abstractitemmodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QAbstractItemModel_OnColumnCount((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t q_abstractitemmodel_qbase_column_count(void* self, void* parent) {
    return QAbstractItemModel_QBaseColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_abstractitemmodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_abstractitemmodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_has_children(void* self, void* parent) {
    return QAbstractItemModel_QBaseHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

QVariant* q_abstractitemmodel_data(void* self, void* index, int role) {
    return QAbstractItemModel_Data((QAbstractItemModel*)self, (QModelIndex*)index, role);
}

void q_abstractitemmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    QAbstractItemModel_OnData((QAbstractItemModel*)self, (intptr_t)callback);
}

QVariant* q_abstractitemmodel_qbase_data(void* self, void* index, int role) {
    return QAbstractItemModel_QBaseData((QAbstractItemModel*)self, (QModelIndex*)index, role);
}

bool q_abstractitemmodel_set_data(void* self, void* index, void* value, int role) {
    return QAbstractItemModel_SetData((QAbstractItemModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_abstractitemmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    QAbstractItemModel_OnSetData((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QAbstractItemModel_QBaseSetData((QAbstractItemModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

QVariant* q_abstractitemmodel_header_data(void* self, int section, int64_t orientation, int role) {
    return QAbstractItemModel_HeaderData((QAbstractItemModel*)self, section, orientation, role);
}

void q_abstractitemmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int64_t, int)) {
    QAbstractItemModel_OnHeaderData((QAbstractItemModel*)self, (intptr_t)callback);
}

QVariant* q_abstractitemmodel_qbase_header_data(void* self, int section, int64_t orientation, int role) {
    return QAbstractItemModel_QBaseHeaderData((QAbstractItemModel*)self, section, orientation, role);
}

bool q_abstractitemmodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QAbstractItemModel_SetHeaderData((QAbstractItemModel*)self, section, orientation, (QVariant*)value, role);
}

void q_abstractitemmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int64_t, void*, int)) {
    QAbstractItemModel_OnSetHeaderData((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QAbstractItemModel_QBaseSetHeaderData((QAbstractItemModel*)self, section, orientation, (QVariant*)value, role);
}

libqt_map /* of int to QVariant* */ q_abstractitemmodel_item_data(void* self, void* index) {
    return QAbstractItemModel_ItemData((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_abstractitemmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    QAbstractItemModel_OnItemData((QAbstractItemModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_abstractitemmodel_qbase_item_data(void* self, void* index) {
    return QAbstractItemModel_QBaseItemData((QAbstractItemModel*)self, (QModelIndex*)index);
}

bool q_abstractitemmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QAbstractItemModel_SetItemData((QAbstractItemModel*)self, (QModelIndex*)index, roles);
}

void q_abstractitemmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QAbstractItemModel_OnSetItemData((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QAbstractItemModel_QBaseSetItemData((QAbstractItemModel*)self, (QModelIndex*)index, roles);
}

bool q_abstractitemmodel_clear_item_data(void* self, void* index) {
    return QAbstractItemModel_ClearItemData((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_abstractitemmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnClearItemData((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_clear_item_data(void* self, void* index) {
    return QAbstractItemModel_QBaseClearItemData((QAbstractItemModel*)self, (QModelIndex*)index);
}

const char** q_abstractitemmodel_mime_types(void* self) {
    libqt_list _arr = QAbstractItemModel_MimeTypes((QAbstractItemModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_abstractitemmodel_mime_types");
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

void q_abstractitemmodel_on_mime_types(void* self, const char** (*callback)()) {
    QAbstractItemModel_OnMimeTypes((QAbstractItemModel*)self, (intptr_t)callback);
}

const char** q_abstractitemmodel_qbase_mime_types(void* self) {
    libqt_list _arr = QAbstractItemModel_QBaseMimeTypes((QAbstractItemModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_abstractitemmodel_mime_types");
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

QMimeData* q_abstractitemmodel_mime_data(void* self, libqt_list indexes) {
    return QAbstractItemModel_MimeData((QAbstractItemModel*)self, indexes);
}

void q_abstractitemmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list)) {
    QAbstractItemModel_OnMimeData((QAbstractItemModel*)self, (intptr_t)callback);
}

QMimeData* q_abstractitemmodel_qbase_mime_data(void* self, libqt_list indexes) {
    return QAbstractItemModel_QBaseMimeData((QAbstractItemModel*)self, indexes);
}

bool q_abstractitemmodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractItemModel_CanDropMimeData((QAbstractItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_abstractitemmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int64_t, int, int, void*)) {
    QAbstractItemModel_OnCanDropMimeData((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractItemModel_QBaseCanDropMimeData((QAbstractItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_abstractitemmodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractItemModel_DropMimeData((QAbstractItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_abstractitemmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int64_t, int, int, void*)) {
    QAbstractItemModel_OnDropMimeData((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractItemModel_QBaseDropMimeData((QAbstractItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

int64_t q_abstractitemmodel_supported_drop_actions(void* self) {
    return QAbstractItemModel_SupportedDropActions((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_supported_drop_actions(void* self, int64_t (*callback)()) {
    QAbstractItemModel_OnSupportedDropActions((QAbstractItemModel*)self, (intptr_t)callback);
}

int64_t q_abstractitemmodel_qbase_supported_drop_actions(void* self) {
    return QAbstractItemModel_QBaseSupportedDropActions((QAbstractItemModel*)self);
}

int64_t q_abstractitemmodel_supported_drag_actions(void* self) {
    return QAbstractItemModel_SupportedDragActions((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_supported_drag_actions(void* self, int64_t (*callback)()) {
    QAbstractItemModel_OnSupportedDragActions((QAbstractItemModel*)self, (intptr_t)callback);
}

int64_t q_abstractitemmodel_qbase_supported_drag_actions(void* self) {
    return QAbstractItemModel_QBaseSupportedDragActions((QAbstractItemModel*)self);
}

bool q_abstractitemmodel_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractItemModel_InsertRows((QAbstractItemModel*)self, row, count, (QModelIndex*)parent);
}

void q_abstractitemmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractItemModel_OnInsertRows((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractItemModel_QBaseInsertRows((QAbstractItemModel*)self, row, count, (QModelIndex*)parent);
}

bool q_abstractitemmodel_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractItemModel_InsertColumns((QAbstractItemModel*)self, column, count, (QModelIndex*)parent);
}

void q_abstractitemmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractItemModel_OnInsertColumns((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractItemModel_QBaseInsertColumns((QAbstractItemModel*)self, column, count, (QModelIndex*)parent);
}

bool q_abstractitemmodel_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractItemModel_RemoveRows((QAbstractItemModel*)self, row, count, (QModelIndex*)parent);
}

void q_abstractitemmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractItemModel_OnRemoveRows((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractItemModel_QBaseRemoveRows((QAbstractItemModel*)self, row, count, (QModelIndex*)parent);
}

bool q_abstractitemmodel_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractItemModel_RemoveColumns((QAbstractItemModel*)self, column, count, (QModelIndex*)parent);
}

void q_abstractitemmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractItemModel_OnRemoveColumns((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractItemModel_QBaseRemoveColumns((QAbstractItemModel*)self, column, count, (QModelIndex*)parent);
}

bool q_abstractitemmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRows((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_abstractitemmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_OnMoveRows((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_QBaseMoveRows((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstractitemmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumns((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_abstractitemmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_OnMoveColumns((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_QBaseMoveColumns((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstractitemmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_abstractitemmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_abstractitemmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_abstractitemmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_abstractitemmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstractitemmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

void q_abstractitemmodel_fetch_more(void* self, void* parent) {
    QAbstractItemModel_FetchMore((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_abstractitemmodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    QAbstractItemModel_OnFetchMore((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_fetch_more(void* self, void* parent) {
    QAbstractItemModel_QBaseFetchMore((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_abstractitemmodel_can_fetch_more(void* self, void* parent) {
    return QAbstractItemModel_CanFetchMore((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_abstractitemmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnCanFetchMore((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_can_fetch_more(void* self, void* parent) {
    return QAbstractItemModel_QBaseCanFetchMore((QAbstractItemModel*)self, (QModelIndex*)parent);
}

int64_t q_abstractitemmodel_flags(void* self, void* index) {
    return QAbstractItemModel_Flags((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_abstractitemmodel_on_flags(void* self, int64_t (*callback)(void*, void*)) {
    QAbstractItemModel_OnFlags((QAbstractItemModel*)self, (intptr_t)callback);
}

int64_t q_abstractitemmodel_qbase_flags(void* self, void* index) {
    return QAbstractItemModel_QBaseFlags((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_abstractitemmodel_sort(void* self, int column, int64_t order) {
    QAbstractItemModel_Sort((QAbstractItemModel*)self, column, order);
}

void q_abstractitemmodel_on_sort(void* self, void (*callback)(void*, int, int64_t)) {
    QAbstractItemModel_OnSort((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_sort(void* self, int column, int64_t order) {
    QAbstractItemModel_QBaseSort((QAbstractItemModel*)self, column, order);
}

QModelIndex* q_abstractitemmodel_buddy(void* self, void* index) {
    return QAbstractItemModel_Buddy((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_abstractitemmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractItemModel_OnBuddy((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractitemmodel_qbase_buddy(void* self, void* index) {
    return QAbstractItemModel_QBaseBuddy((QAbstractItemModel*)self, (QModelIndex*)index);
}

libqt_list /* of QModelIndex* */ q_abstractitemmodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QAbstractItemModel_Match((QAbstractItemModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_abstractitemmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(void*, void*, int, void*, int, int64_t)) {
    QAbstractItemModel_OnMatch((QAbstractItemModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_abstractitemmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QAbstractItemModel_QBaseMatch((QAbstractItemModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

QSize* q_abstractitemmodel_span(void* self, void* index) {
    return QAbstractItemModel_Span((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_abstractitemmodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    QAbstractItemModel_OnSpan((QAbstractItemModel*)self, (intptr_t)callback);
}

QSize* q_abstractitemmodel_qbase_span(void* self, void* index) {
    return QAbstractItemModel_QBaseSpan((QAbstractItemModel*)self, (QModelIndex*)index);
}

libqt_map /* of int to char* */ q_abstractitemmodel_role_names(void* self) {
    return QAbstractItemModel_RoleNames((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    QAbstractItemModel_OnRoleNames((QAbstractItemModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_abstractitemmodel_qbase_role_names(void* self) {
    return QAbstractItemModel_QBaseRoleNames((QAbstractItemModel*)self);
}

bool q_abstractitemmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_abstractitemmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QAbstractItemModel_MultiData((QAbstractItemModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_abstractitemmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_OnMultiData((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QAbstractItemModel_QBaseMultiData((QAbstractItemModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_abstractitemmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_abstractitemmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_header_data_changed(void* self, int64_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_abstractitemmodel_on_header_data_changed(void* self, void (*callback)(void*, int64_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_submit(void* self) {
    return QAbstractItemModel_Submit((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_submit(void* self, bool (*callback)()) {
    QAbstractItemModel_OnSubmit((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_submit(void* self) {
    return QAbstractItemModel_QBaseSubmit((QAbstractItemModel*)self);
}

void q_abstractitemmodel_revert(void* self) {
    QAbstractItemModel_Revert((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_revert(void* self, void (*callback)()) {
    QAbstractItemModel_OnRevert((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_revert(void* self) {
    QAbstractItemModel_QBaseRevert((QAbstractItemModel*)self);
}

void q_abstractitemmodel_reset_internal_data(void* self) {
    QAbstractItemModel_ResetInternalData((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_reset_internal_data(void* self, void (*callback)()) {
    QAbstractItemModel_OnResetInternalData((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_reset_internal_data(void* self) {
    QAbstractItemModel_QBaseResetInternalData((QAbstractItemModel*)self);
}

QModelIndex* q_abstractitemmodel_create_index(void* self, int row, int column) {
    return QAbstractItemModel_CreateIndex((QAbstractItemModel*)self, row, column);
}

void q_abstractitemmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    QAbstractItemModel_OnCreateIndex((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractitemmodel_qbase_create_index(void* self, int row, int column) {
    return QAbstractItemModel_QBaseCreateIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* q_abstractitemmodel_create_index2(void* self, int row, int column, uintptr_t id) {
    return QAbstractItemModel_CreateIndex2((QAbstractItemModel*)self, row, column, id);
}

void q_abstractitemmodel_on_create_index2(void* self, QModelIndex* (*callback)(void*, int, int, uintptr_t)) {
    QAbstractItemModel_OnCreateIndex2((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractitemmodel_qbase_create_index2(void* self, int row, int column, uintptr_t id) {
    return QAbstractItemModel_QBaseCreateIndex2((QAbstractItemModel*)self, row, column, id);
}

void q_abstractitemmodel_encode_data(void* self, libqt_list indexes, void* stream) {
    QAbstractItemModel_EncodeData((QAbstractItemModel*)self, indexes, (QDataStream*)stream);
}

void q_abstractitemmodel_on_encode_data(void* self, void (*callback)(void*, libqt_list, void*)) {
    QAbstractItemModel_OnEncodeData((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    QAbstractItemModel_QBaseEncodeData((QAbstractItemModel*)self, indexes, (QDataStream*)stream);
}

bool q_abstractitemmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QAbstractItemModel_DecodeData((QAbstractItemModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_abstractitemmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    QAbstractItemModel_OnDecodeData((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QAbstractItemModel_QBaseDecodeData((QAbstractItemModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_abstractitemmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QAbstractItemModel_BeginInsertRows((QAbstractItemModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractitemmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_OnBeginInsertRows((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QAbstractItemModel_QBaseBeginInsertRows((QAbstractItemModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractitemmodel_end_insert_rows(void* self) {
    QAbstractItemModel_EndInsertRows((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_end_insert_rows(void* self, void (*callback)()) {
    QAbstractItemModel_OnEndInsertRows((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_end_insert_rows(void* self) {
    QAbstractItemModel_QBaseEndInsertRows((QAbstractItemModel*)self);
}

void q_abstractitemmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QAbstractItemModel_BeginRemoveRows((QAbstractItemModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractitemmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_OnBeginRemoveRows((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QAbstractItemModel_QBaseBeginRemoveRows((QAbstractItemModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractitemmodel_end_remove_rows(void* self) {
    QAbstractItemModel_EndRemoveRows((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_end_remove_rows(void* self, void (*callback)()) {
    QAbstractItemModel_OnEndRemoveRows((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_end_remove_rows(void* self) {
    QAbstractItemModel_QBaseEndRemoveRows((QAbstractItemModel*)self);
}

bool q_abstractitemmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QAbstractItemModel_BeginMoveRows((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_abstractitemmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_OnBeginMoveRows((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QAbstractItemModel_QBaseBeginMoveRows((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_abstractitemmodel_end_move_rows(void* self) {
    QAbstractItemModel_EndMoveRows((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_end_move_rows(void* self, void (*callback)()) {
    QAbstractItemModel_OnEndMoveRows((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_end_move_rows(void* self) {
    QAbstractItemModel_QBaseEndMoveRows((QAbstractItemModel*)self);
}

void q_abstractitemmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QAbstractItemModel_BeginInsertColumns((QAbstractItemModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractitemmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_OnBeginInsertColumns((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QAbstractItemModel_QBaseBeginInsertColumns((QAbstractItemModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractitemmodel_end_insert_columns(void* self) {
    QAbstractItemModel_EndInsertColumns((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_end_insert_columns(void* self, void (*callback)()) {
    QAbstractItemModel_OnEndInsertColumns((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_end_insert_columns(void* self) {
    QAbstractItemModel_QBaseEndInsertColumns((QAbstractItemModel*)self);
}

void q_abstractitemmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QAbstractItemModel_BeginRemoveColumns((QAbstractItemModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractitemmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_OnBeginRemoveColumns((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QAbstractItemModel_QBaseBeginRemoveColumns((QAbstractItemModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractitemmodel_end_remove_columns(void* self) {
    QAbstractItemModel_EndRemoveColumns((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_end_remove_columns(void* self, void (*callback)()) {
    QAbstractItemModel_OnEndRemoveColumns((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_end_remove_columns(void* self) {
    QAbstractItemModel_QBaseEndRemoveColumns((QAbstractItemModel*)self);
}

bool q_abstractitemmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QAbstractItemModel_BeginMoveColumns((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_abstractitemmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_OnBeginMoveColumns((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QAbstractItemModel_QBaseBeginMoveColumns((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_abstractitemmodel_end_move_columns(void* self) {
    QAbstractItemModel_EndMoveColumns((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_end_move_columns(void* self, void (*callback)()) {
    QAbstractItemModel_OnEndMoveColumns((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_end_move_columns(void* self) {
    QAbstractItemModel_QBaseEndMoveColumns((QAbstractItemModel*)self);
}

void q_abstractitemmodel_begin_reset_model(void* self) {
    QAbstractItemModel_BeginResetModel((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_begin_reset_model(void* self, void (*callback)()) {
    QAbstractItemModel_OnBeginResetModel((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_begin_reset_model(void* self) {
    QAbstractItemModel_QBaseBeginResetModel((QAbstractItemModel*)self);
}

void q_abstractitemmodel_end_reset_model(void* self) {
    QAbstractItemModel_EndResetModel((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_end_reset_model(void* self, void (*callback)()) {
    QAbstractItemModel_OnEndResetModel((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_end_reset_model(void* self) {
    QAbstractItemModel_QBaseEndResetModel((QAbstractItemModel*)self);
}

void q_abstractitemmodel_change_persistent_index(void* self, void* from, void* to) {
    QAbstractItemModel_ChangePersistentIndex((QAbstractItemModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_abstractitemmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_OnChangePersistentIndex((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QAbstractItemModel_QBaseChangePersistentIndex((QAbstractItemModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_abstractitemmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QAbstractItemModel_ChangePersistentIndexList((QAbstractItemModel*)self, from, to);
}

void q_abstractitemmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list)) {
    QAbstractItemModel_OnChangePersistentIndexList((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QAbstractItemModel_QBaseChangePersistentIndexList((QAbstractItemModel*)self, from, to);
}

libqt_list /* of QModelIndex* */ q_abstractitemmodel_persistent_index_list(void* self) {
    libqt_list _arr = QAbstractItemModel_PersistentIndexList((QAbstractItemModel*)self);
    return _arr;
}

void q_abstractitemmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*callback)()) {
    QAbstractItemModel_OnPersistentIndexList((QAbstractItemModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_abstractitemmodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QAbstractItemModel_QBasePersistentIndexList((QAbstractItemModel*)self);
    return _arr;
}

const char* q_abstractitemmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractItemModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractitemmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractItemModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_abstractitemmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_abstractitemmodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_abstractitemmodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_abstractitemmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_abstractitemmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_abstractitemmodel_check_index2(void* self, void* index, int64_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_abstractitemmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_abstractitemmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_abstractitemmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_layout_changed2(void* self, libqt_list parents, int64_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_abstractitemmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int64_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_abstractitemmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int64_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_abstractitemmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int64_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractitemmodel_create_index3(void* self, int row, int column, void* data) {
    return QAbstractItemModel_CreateIndex3((QAbstractItemModel*)self, row, column, data);
}

void q_abstractitemmodel_on_create_index3(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QAbstractItemModel_OnCreateIndex3((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractitemmodel_qbase_create_index3(void* self, int row, int column, void* data) {
    return QAbstractItemModel_QBaseCreateIndex3((QAbstractItemModel*)self, row, column, data);
}

const char* q_abstractitemmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractitemmodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstractitemmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstractitemmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstractitemmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstractitemmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstractitemmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstractitemmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstractitemmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstractitemmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_abstractitemmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstractitemmodel_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstractitemmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstractitemmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_abstractitemmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstractitemmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstractitemmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstractitemmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstractitemmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstractitemmodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_abstractitemmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstractitemmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstractitemmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstractitemmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstractitemmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_abstractitemmodel_dynamic_property_names");
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

QBindingStorage* q_abstractitemmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstractitemmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstractitemmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstractitemmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstractitemmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_abstractitemmodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_abstractitemmodel_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_abstractitemmodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_abstractitemmodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_abstractitemmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstractitemmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_event(void* self, void* event) {
    return QAbstractItemModel_Event((QAbstractItemModel*)self, (QEvent*)event);
}

bool q_abstractitemmodel_qbase_event(void* self, void* event) {
    return QAbstractItemModel_QBaseEvent((QAbstractItemModel*)self, (QEvent*)event);
}

void q_abstractitemmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnEvent((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_event_filter(void* self, void* watched, void* event) {
    return QAbstractItemModel_EventFilter((QAbstractItemModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_abstractitemmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractItemModel_QBaseEventFilter((QAbstractItemModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_abstractitemmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAbstractItemModel_OnEventFilter((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_timer_event(void* self, void* event) {
    QAbstractItemModel_TimerEvent((QAbstractItemModel*)self, (QTimerEvent*)event);
}

void q_abstractitemmodel_qbase_timer_event(void* self, void* event) {
    QAbstractItemModel_QBaseTimerEvent((QAbstractItemModel*)self, (QTimerEvent*)event);
}

void q_abstractitemmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAbstractItemModel_OnTimerEvent((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_child_event(void* self, void* event) {
    QAbstractItemModel_ChildEvent((QAbstractItemModel*)self, (QChildEvent*)event);
}

void q_abstractitemmodel_qbase_child_event(void* self, void* event) {
    QAbstractItemModel_QBaseChildEvent((QAbstractItemModel*)self, (QChildEvent*)event);
}

void q_abstractitemmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAbstractItemModel_OnChildEvent((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_custom_event(void* self, void* event) {
    QAbstractItemModel_CustomEvent((QAbstractItemModel*)self, (QEvent*)event);
}

void q_abstractitemmodel_qbase_custom_event(void* self, void* event) {
    QAbstractItemModel_QBaseCustomEvent((QAbstractItemModel*)self, (QEvent*)event);
}

void q_abstractitemmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAbstractItemModel_OnCustomEvent((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_connect_notify(void* self, void* signal) {
    QAbstractItemModel_ConnectNotify((QAbstractItemModel*)self, (QMetaMethod*)signal);
}

void q_abstractitemmodel_qbase_connect_notify(void* self, void* signal) {
    QAbstractItemModel_QBaseConnectNotify((QAbstractItemModel*)self, (QMetaMethod*)signal);
}

void q_abstractitemmodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractItemModel_OnConnectNotify((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_disconnect_notify(void* self, void* signal) {
    QAbstractItemModel_DisconnectNotify((QAbstractItemModel*)self, (QMetaMethod*)signal);
}

void q_abstractitemmodel_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractItemModel_QBaseDisconnectNotify((QAbstractItemModel*)self, (QMetaMethod*)signal);
}

void q_abstractitemmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractItemModel_OnDisconnectNotify((QAbstractItemModel*)self, (intptr_t)callback);
}

QObject* q_abstractitemmodel_sender(void* self) {
    return QAbstractItemModel_Sender((QAbstractItemModel*)self);
}

QObject* q_abstractitemmodel_qbase_sender(void* self) {
    return QAbstractItemModel_QBaseSender((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_sender(void* self, QObject* (*callback)()) {
    QAbstractItemModel_OnSender((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t q_abstractitemmodel_sender_signal_index(void* self) {
    return QAbstractItemModel_SenderSignalIndex((QAbstractItemModel*)self);
}

int32_t q_abstractitemmodel_qbase_sender_signal_index(void* self) {
    return QAbstractItemModel_QBaseSenderSignalIndex((QAbstractItemModel*)self);
}

void q_abstractitemmodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAbstractItemModel_OnSenderSignalIndex((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t q_abstractitemmodel_receivers(void* self, const char* signal) {
    return QAbstractItemModel_Receivers((QAbstractItemModel*)self, signal);
}

int32_t q_abstractitemmodel_qbase_receivers(void* self, const char* signal) {
    return QAbstractItemModel_QBaseReceivers((QAbstractItemModel*)self, signal);
}

void q_abstractitemmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAbstractItemModel_OnReceivers((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractitemmodel_is_signal_connected(void* self, void* signal) {
    return QAbstractItemModel_IsSignalConnected((QAbstractItemModel*)self, (QMetaMethod*)signal);
}

bool q_abstractitemmodel_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractItemModel_QBaseIsSignalConnected((QAbstractItemModel*)self, (QMetaMethod*)signal);
}

void q_abstractitemmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnIsSignalConnected((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractitemmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_abstractitemmodel_delete(void* self) {
    QAbstractItemModel_Delete((QAbstractItemModel*)(self));
}

QAbstractTableModel* q_abstracttablemodel_new() {
    return QAbstractTableModel_new();
}

QAbstractTableModel* q_abstracttablemodel_new2(void* parent) {
    return QAbstractTableModel_new2((QObject*)parent);
}

const QMetaObject* q_abstracttablemodel_meta_object(void* self) {
    return QAbstractTableModel_MetaObject((QAbstractTableModel*)self);
}

void* q_abstracttablemodel_metacast(void* self, const char* param1) {
    return QAbstractTableModel_Metacast((QAbstractTableModel*)self, param1);
}

int32_t q_abstracttablemodel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractTableModel_Metacall((QAbstractTableModel*)self, param1, param2, param3);
}

void q_abstracttablemodel_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QAbstractTableModel_OnMetacall((QAbstractTableModel*)self, (intptr_t)callback);
}

int32_t q_abstracttablemodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractTableModel_QBaseMetacall((QAbstractTableModel*)self, param1, param2, param3);
}

const char* q_abstracttablemodel_tr(const char* s) {
    libqt_string _str = QAbstractTableModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QModelIndex* q_abstracttablemodel_index(void* self, int row, int column, void* parent) {
    return QAbstractTableModel_Index((QAbstractTableModel*)self, row, column, (QModelIndex*)parent);
}

void q_abstracttablemodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QAbstractTableModel_OnIndex((QAbstractTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstracttablemodel_qbase_index(void* self, int row, int column, void* parent) {
    return QAbstractTableModel_QBaseIndex((QAbstractTableModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_abstracttablemodel_sibling(void* self, int row, int column, void* idx) {
    return QAbstractTableModel_Sibling((QAbstractTableModel*)self, row, column, (QModelIndex*)idx);
}

void q_abstracttablemodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QAbstractTableModel_OnSibling((QAbstractTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstracttablemodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QAbstractTableModel_QBaseSibling((QAbstractTableModel*)self, row, column, (QModelIndex*)idx);
}

bool q_abstracttablemodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractTableModel_DropMimeData((QAbstractTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_abstracttablemodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int64_t, int, int, void*)) {
    QAbstractTableModel_OnDropMimeData((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractTableModel_QBaseDropMimeData((QAbstractTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

int64_t q_abstracttablemodel_flags(void* self, void* index) {
    return QAbstractTableModel_Flags((QAbstractTableModel*)self, (QModelIndex*)index);
}

void q_abstracttablemodel_on_flags(void* self, int64_t (*callback)(void*, void*)) {
    QAbstractTableModel_OnFlags((QAbstractTableModel*)self, (intptr_t)callback);
}

int64_t q_abstracttablemodel_qbase_flags(void* self, void* index) {
    return QAbstractTableModel_QBaseFlags((QAbstractTableModel*)self, (QModelIndex*)index);
}

const char* q_abstracttablemodel_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractTableModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstracttablemodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractTableModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_abstracttablemodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* q_abstracttablemodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void q_abstracttablemodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstracttablemodel_qbase_parent(void* self, void* child) {
    return QAbstractItemModel_QBaseParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

bool q_abstracttablemodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_abstracttablemodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_qbase_has_children(void* self, void* parent) {
    return QAbstractItemModel_QBaseHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_abstracttablemodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_abstracttablemodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_abstracttablemodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_abstracttablemodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_abstracttablemodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstracttablemodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstracttablemodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_abstracttablemodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_abstracttablemodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_header_data_changed(void* self, int64_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_abstracttablemodel_on_header_data_changed(void* self, void (*callback)(void*, int64_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_abstracttablemodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_abstracttablemodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_abstracttablemodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_abstracttablemodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_abstracttablemodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_abstracttablemodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_abstracttablemodel_check_index2(void* self, void* index, int64_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_abstracttablemodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_abstracttablemodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_abstracttablemodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_layout_changed2(void* self, libqt_list parents, int64_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_abstracttablemodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int64_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_abstracttablemodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_layout_about_to_be_changed2(void* self, libqt_list parents, int64_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_abstracttablemodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int64_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_abstracttablemodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstracttablemodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstracttablemodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstracttablemodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstracttablemodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstracttablemodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstracttablemodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstracttablemodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstracttablemodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstracttablemodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_abstracttablemodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstracttablemodel_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstracttablemodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstracttablemodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_abstracttablemodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstracttablemodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstracttablemodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstracttablemodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstracttablemodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstracttablemodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_abstracttablemodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstracttablemodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstracttablemodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstracttablemodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstracttablemodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_abstracttablemodel_dynamic_property_names");
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

QBindingStorage* q_abstracttablemodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstracttablemodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstracttablemodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstracttablemodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstracttablemodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_abstracttablemodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_abstracttablemodel_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_abstracttablemodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_abstracttablemodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_abstracttablemodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstracttablemodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_abstracttablemodel_row_count(void* self, void* parent) {
    return QAbstractTableModel_RowCount((QAbstractTableModel*)self, (QModelIndex*)parent);
}

int32_t q_abstracttablemodel_qbase_row_count(void* self, void* parent) {
    return QAbstractTableModel_QBaseRowCount((QAbstractTableModel*)self, (QModelIndex*)parent);
}

void q_abstracttablemodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    QAbstractTableModel_OnRowCount((QAbstractTableModel*)self, (intptr_t)callback);
}

int32_t q_abstracttablemodel_column_count(void* self, void* parent) {
    return QAbstractTableModel_ColumnCount((QAbstractTableModel*)self, (QModelIndex*)parent);
}

int32_t q_abstracttablemodel_qbase_column_count(void* self, void* parent) {
    return QAbstractTableModel_QBaseColumnCount((QAbstractTableModel*)self, (QModelIndex*)parent);
}

void q_abstracttablemodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QAbstractTableModel_OnColumnCount((QAbstractTableModel*)self, (intptr_t)callback);
}

QVariant* q_abstracttablemodel_data(void* self, void* index, int role) {
    return QAbstractTableModel_Data((QAbstractTableModel*)self, (QModelIndex*)index, role);
}

QVariant* q_abstracttablemodel_qbase_data(void* self, void* index, int role) {
    return QAbstractTableModel_QBaseData((QAbstractTableModel*)self, (QModelIndex*)index, role);
}

void q_abstracttablemodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    QAbstractTableModel_OnData((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_set_data(void* self, void* index, void* value, int role) {
    return QAbstractTableModel_SetData((QAbstractTableModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool q_abstracttablemodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QAbstractTableModel_QBaseSetData((QAbstractTableModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_abstracttablemodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    QAbstractTableModel_OnSetData((QAbstractTableModel*)self, (intptr_t)callback);
}

QVariant* q_abstracttablemodel_header_data(void* self, int section, int64_t orientation, int role) {
    return QAbstractTableModel_HeaderData((QAbstractTableModel*)self, section, orientation, role);
}

QVariant* q_abstracttablemodel_qbase_header_data(void* self, int section, int64_t orientation, int role) {
    return QAbstractTableModel_QBaseHeaderData((QAbstractTableModel*)self, section, orientation, role);
}

void q_abstracttablemodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int64_t, int)) {
    QAbstractTableModel_OnHeaderData((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QAbstractTableModel_SetHeaderData((QAbstractTableModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_abstracttablemodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QAbstractTableModel_QBaseSetHeaderData((QAbstractTableModel*)self, section, orientation, (QVariant*)value, role);
}

void q_abstracttablemodel_on_set_header_data(void* self, bool (*callback)(void*, int, int64_t, void*, int)) {
    QAbstractTableModel_OnSetHeaderData((QAbstractTableModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_abstracttablemodel_item_data(void* self, void* index) {
    return QAbstractTableModel_ItemData((QAbstractTableModel*)self, (QModelIndex*)index);
}

libqt_map /* of int to QVariant* */ q_abstracttablemodel_qbase_item_data(void* self, void* index) {
    return QAbstractTableModel_QBaseItemData((QAbstractTableModel*)self, (QModelIndex*)index);
}

void q_abstracttablemodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    QAbstractTableModel_OnItemData((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QAbstractTableModel_SetItemData((QAbstractTableModel*)self, (QModelIndex*)index, roles);
}

bool q_abstracttablemodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QAbstractTableModel_QBaseSetItemData((QAbstractTableModel*)self, (QModelIndex*)index, roles);
}

void q_abstracttablemodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QAbstractTableModel_OnSetItemData((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_clear_item_data(void* self, void* index) {
    return QAbstractTableModel_ClearItemData((QAbstractTableModel*)self, (QModelIndex*)index);
}

bool q_abstracttablemodel_qbase_clear_item_data(void* self, void* index) {
    return QAbstractTableModel_QBaseClearItemData((QAbstractTableModel*)self, (QModelIndex*)index);
}

void q_abstracttablemodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    QAbstractTableModel_OnClearItemData((QAbstractTableModel*)self, (intptr_t)callback);
}

const char** q_abstracttablemodel_mime_types(void* self) {
    libqt_list _arr = QAbstractTableModel_MimeTypes((QAbstractTableModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_abstracttablemodel_mime_types");
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

const char** q_abstracttablemodel_qbase_mime_types(void* self) {
    libqt_list _arr = QAbstractTableModel_QBaseMimeTypes((QAbstractTableModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_abstracttablemodel_mime_types");
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

void q_abstracttablemodel_on_mime_types(void* self, const char** (*callback)()) {
    QAbstractTableModel_OnMimeTypes((QAbstractTableModel*)self, (intptr_t)callback);
}

QMimeData* q_abstracttablemodel_mime_data(void* self, libqt_list indexes) {
    return QAbstractTableModel_MimeData((QAbstractTableModel*)self, indexes);
}

QMimeData* q_abstracttablemodel_qbase_mime_data(void* self, libqt_list indexes) {
    return QAbstractTableModel_QBaseMimeData((QAbstractTableModel*)self, indexes);
}

void q_abstracttablemodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list)) {
    QAbstractTableModel_OnMimeData((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractTableModel_CanDropMimeData((QAbstractTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_abstracttablemodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractTableModel_QBaseCanDropMimeData((QAbstractTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_abstracttablemodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int64_t, int, int, void*)) {
    QAbstractTableModel_OnCanDropMimeData((QAbstractTableModel*)self, (intptr_t)callback);
}

int64_t q_abstracttablemodel_supported_drop_actions(void* self) {
    return QAbstractTableModel_SupportedDropActions((QAbstractTableModel*)self);
}

int64_t q_abstracttablemodel_qbase_supported_drop_actions(void* self) {
    return QAbstractTableModel_QBaseSupportedDropActions((QAbstractTableModel*)self);
}

void q_abstracttablemodel_on_supported_drop_actions(void* self, int64_t (*callback)()) {
    QAbstractTableModel_OnSupportedDropActions((QAbstractTableModel*)self, (intptr_t)callback);
}

int64_t q_abstracttablemodel_supported_drag_actions(void* self) {
    return QAbstractTableModel_SupportedDragActions((QAbstractTableModel*)self);
}

int64_t q_abstracttablemodel_qbase_supported_drag_actions(void* self) {
    return QAbstractTableModel_QBaseSupportedDragActions((QAbstractTableModel*)self);
}

void q_abstracttablemodel_on_supported_drag_actions(void* self, int64_t (*callback)()) {
    QAbstractTableModel_OnSupportedDragActions((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractTableModel_InsertRows((QAbstractTableModel*)self, row, count, (QModelIndex*)parent);
}

bool q_abstracttablemodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractTableModel_QBaseInsertRows((QAbstractTableModel*)self, row, count, (QModelIndex*)parent);
}

void q_abstracttablemodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractTableModel_OnInsertRows((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractTableModel_InsertColumns((QAbstractTableModel*)self, column, count, (QModelIndex*)parent);
}

bool q_abstracttablemodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractTableModel_QBaseInsertColumns((QAbstractTableModel*)self, column, count, (QModelIndex*)parent);
}

void q_abstracttablemodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractTableModel_OnInsertColumns((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractTableModel_RemoveRows((QAbstractTableModel*)self, row, count, (QModelIndex*)parent);
}

bool q_abstracttablemodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractTableModel_QBaseRemoveRows((QAbstractTableModel*)self, row, count, (QModelIndex*)parent);
}

void q_abstracttablemodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractTableModel_OnRemoveRows((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractTableModel_RemoveColumns((QAbstractTableModel*)self, column, count, (QModelIndex*)parent);
}

bool q_abstracttablemodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractTableModel_QBaseRemoveColumns((QAbstractTableModel*)self, column, count, (QModelIndex*)parent);
}

void q_abstracttablemodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractTableModel_OnRemoveColumns((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QAbstractTableModel_MoveRows((QAbstractTableModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstracttablemodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QAbstractTableModel_QBaseMoveRows((QAbstractTableModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_abstracttablemodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractTableModel_OnMoveRows((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QAbstractTableModel_MoveColumns((QAbstractTableModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstracttablemodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QAbstractTableModel_QBaseMoveColumns((QAbstractTableModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_abstracttablemodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractTableModel_OnMoveColumns((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_fetch_more(void* self, void* parent) {
    QAbstractTableModel_FetchMore((QAbstractTableModel*)self, (QModelIndex*)parent);
}

void q_abstracttablemodel_qbase_fetch_more(void* self, void* parent) {
    QAbstractTableModel_QBaseFetchMore((QAbstractTableModel*)self, (QModelIndex*)parent);
}

void q_abstracttablemodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    QAbstractTableModel_OnFetchMore((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_can_fetch_more(void* self, void* parent) {
    return QAbstractTableModel_CanFetchMore((QAbstractTableModel*)self, (QModelIndex*)parent);
}

bool q_abstracttablemodel_qbase_can_fetch_more(void* self, void* parent) {
    return QAbstractTableModel_QBaseCanFetchMore((QAbstractTableModel*)self, (QModelIndex*)parent);
}

void q_abstracttablemodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    QAbstractTableModel_OnCanFetchMore((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_sort(void* self, int column, int64_t order) {
    QAbstractTableModel_Sort((QAbstractTableModel*)self, column, order);
}

void q_abstracttablemodel_qbase_sort(void* self, int column, int64_t order) {
    QAbstractTableModel_QBaseSort((QAbstractTableModel*)self, column, order);
}

void q_abstracttablemodel_on_sort(void* self, void (*callback)(void*, int, int64_t)) {
    QAbstractTableModel_OnSort((QAbstractTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstracttablemodel_buddy(void* self, void* index) {
    return QAbstractTableModel_Buddy((QAbstractTableModel*)self, (QModelIndex*)index);
}

QModelIndex* q_abstracttablemodel_qbase_buddy(void* self, void* index) {
    return QAbstractTableModel_QBaseBuddy((QAbstractTableModel*)self, (QModelIndex*)index);
}

void q_abstracttablemodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractTableModel_OnBuddy((QAbstractTableModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_abstracttablemodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QAbstractTableModel_Match((QAbstractTableModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_abstracttablemodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QAbstractTableModel_QBaseMatch((QAbstractTableModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_abstracttablemodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(void*, void*, int, void*, int, int64_t)) {
    QAbstractTableModel_OnMatch((QAbstractTableModel*)self, (intptr_t)callback);
}

QSize* q_abstracttablemodel_span(void* self, void* index) {
    return QAbstractTableModel_Span((QAbstractTableModel*)self, (QModelIndex*)index);
}

QSize* q_abstracttablemodel_qbase_span(void* self, void* index) {
    return QAbstractTableModel_QBaseSpan((QAbstractTableModel*)self, (QModelIndex*)index);
}

void q_abstracttablemodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    QAbstractTableModel_OnSpan((QAbstractTableModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_abstracttablemodel_role_names(void* self) {
    return QAbstractTableModel_RoleNames((QAbstractTableModel*)self);
}

libqt_map /* of int to char* */ q_abstracttablemodel_qbase_role_names(void* self) {
    return QAbstractTableModel_QBaseRoleNames((QAbstractTableModel*)self);
}

void q_abstracttablemodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    QAbstractTableModel_OnRoleNames((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QAbstractTableModel_MultiData((QAbstractTableModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_abstracttablemodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QAbstractTableModel_QBaseMultiData((QAbstractTableModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_abstracttablemodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractTableModel_OnMultiData((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_submit(void* self) {
    return QAbstractTableModel_Submit((QAbstractTableModel*)self);
}

bool q_abstracttablemodel_qbase_submit(void* self) {
    return QAbstractTableModel_QBaseSubmit((QAbstractTableModel*)self);
}

void q_abstracttablemodel_on_submit(void* self, bool (*callback)()) {
    QAbstractTableModel_OnSubmit((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_revert(void* self) {
    QAbstractTableModel_Revert((QAbstractTableModel*)self);
}

void q_abstracttablemodel_qbase_revert(void* self) {
    QAbstractTableModel_QBaseRevert((QAbstractTableModel*)self);
}

void q_abstracttablemodel_on_revert(void* self, void (*callback)()) {
    QAbstractTableModel_OnRevert((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_reset_internal_data(void* self) {
    QAbstractTableModel_ResetInternalData((QAbstractTableModel*)self);
}

void q_abstracttablemodel_qbase_reset_internal_data(void* self) {
    QAbstractTableModel_QBaseResetInternalData((QAbstractTableModel*)self);
}

void q_abstracttablemodel_on_reset_internal_data(void* self, void (*callback)()) {
    QAbstractTableModel_OnResetInternalData((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_event(void* self, void* event) {
    return QAbstractTableModel_Event((QAbstractTableModel*)self, (QEvent*)event);
}

bool q_abstracttablemodel_qbase_event(void* self, void* event) {
    return QAbstractTableModel_QBaseEvent((QAbstractTableModel*)self, (QEvent*)event);
}

void q_abstracttablemodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QAbstractTableModel_OnEvent((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_event_filter(void* self, void* watched, void* event) {
    return QAbstractTableModel_EventFilter((QAbstractTableModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_abstracttablemodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractTableModel_QBaseEventFilter((QAbstractTableModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_abstracttablemodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAbstractTableModel_OnEventFilter((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_timer_event(void* self, void* event) {
    QAbstractTableModel_TimerEvent((QAbstractTableModel*)self, (QTimerEvent*)event);
}

void q_abstracttablemodel_qbase_timer_event(void* self, void* event) {
    QAbstractTableModel_QBaseTimerEvent((QAbstractTableModel*)self, (QTimerEvent*)event);
}

void q_abstracttablemodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAbstractTableModel_OnTimerEvent((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_child_event(void* self, void* event) {
    QAbstractTableModel_ChildEvent((QAbstractTableModel*)self, (QChildEvent*)event);
}

void q_abstracttablemodel_qbase_child_event(void* self, void* event) {
    QAbstractTableModel_QBaseChildEvent((QAbstractTableModel*)self, (QChildEvent*)event);
}

void q_abstracttablemodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAbstractTableModel_OnChildEvent((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_custom_event(void* self, void* event) {
    QAbstractTableModel_CustomEvent((QAbstractTableModel*)self, (QEvent*)event);
}

void q_abstracttablemodel_qbase_custom_event(void* self, void* event) {
    QAbstractTableModel_QBaseCustomEvent((QAbstractTableModel*)self, (QEvent*)event);
}

void q_abstracttablemodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAbstractTableModel_OnCustomEvent((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_connect_notify(void* self, void* signal) {
    QAbstractTableModel_ConnectNotify((QAbstractTableModel*)self, (QMetaMethod*)signal);
}

void q_abstracttablemodel_qbase_connect_notify(void* self, void* signal) {
    QAbstractTableModel_QBaseConnectNotify((QAbstractTableModel*)self, (QMetaMethod*)signal);
}

void q_abstracttablemodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractTableModel_OnConnectNotify((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_disconnect_notify(void* self, void* signal) {
    QAbstractTableModel_DisconnectNotify((QAbstractTableModel*)self, (QMetaMethod*)signal);
}

void q_abstracttablemodel_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractTableModel_QBaseDisconnectNotify((QAbstractTableModel*)self, (QMetaMethod*)signal);
}

void q_abstracttablemodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractTableModel_OnDisconnectNotify((QAbstractTableModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstracttablemodel_create_index(void* self, int row, int column) {
    return QAbstractTableModel_CreateIndex((QAbstractTableModel*)self, row, column);
}

QModelIndex* q_abstracttablemodel_qbase_create_index(void* self, int row, int column) {
    return QAbstractTableModel_QBaseCreateIndex((QAbstractTableModel*)self, row, column);
}

void q_abstracttablemodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    QAbstractTableModel_OnCreateIndex((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_encode_data(void* self, libqt_list indexes, void* stream) {
    QAbstractTableModel_EncodeData((QAbstractTableModel*)self, indexes, (QDataStream*)stream);
}

void q_abstracttablemodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    QAbstractTableModel_QBaseEncodeData((QAbstractTableModel*)self, indexes, (QDataStream*)stream);
}

void q_abstracttablemodel_on_encode_data(void* self, void (*callback)(void*, libqt_list, void*)) {
    QAbstractTableModel_OnEncodeData((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QAbstractTableModel_DecodeData((QAbstractTableModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_abstracttablemodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QAbstractTableModel_QBaseDecodeData((QAbstractTableModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_abstracttablemodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    QAbstractTableModel_OnDecodeData((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QAbstractTableModel_BeginInsertRows((QAbstractTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstracttablemodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QAbstractTableModel_QBaseBeginInsertRows((QAbstractTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstracttablemodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractTableModel_OnBeginInsertRows((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_end_insert_rows(void* self) {
    QAbstractTableModel_EndInsertRows((QAbstractTableModel*)self);
}

void q_abstracttablemodel_qbase_end_insert_rows(void* self) {
    QAbstractTableModel_QBaseEndInsertRows((QAbstractTableModel*)self);
}

void q_abstracttablemodel_on_end_insert_rows(void* self, void (*callback)()) {
    QAbstractTableModel_OnEndInsertRows((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QAbstractTableModel_BeginRemoveRows((QAbstractTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstracttablemodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QAbstractTableModel_QBaseBeginRemoveRows((QAbstractTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstracttablemodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractTableModel_OnBeginRemoveRows((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_end_remove_rows(void* self) {
    QAbstractTableModel_EndRemoveRows((QAbstractTableModel*)self);
}

void q_abstracttablemodel_qbase_end_remove_rows(void* self) {
    QAbstractTableModel_QBaseEndRemoveRows((QAbstractTableModel*)self);
}

void q_abstracttablemodel_on_end_remove_rows(void* self, void (*callback)()) {
    QAbstractTableModel_OnEndRemoveRows((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QAbstractTableModel_BeginMoveRows((QAbstractTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool q_abstracttablemodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QAbstractTableModel_QBaseBeginMoveRows((QAbstractTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_abstracttablemodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractTableModel_OnBeginMoveRows((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_end_move_rows(void* self) {
    QAbstractTableModel_EndMoveRows((QAbstractTableModel*)self);
}

void q_abstracttablemodel_qbase_end_move_rows(void* self) {
    QAbstractTableModel_QBaseEndMoveRows((QAbstractTableModel*)self);
}

void q_abstracttablemodel_on_end_move_rows(void* self, void (*callback)()) {
    QAbstractTableModel_OnEndMoveRows((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QAbstractTableModel_BeginInsertColumns((QAbstractTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstracttablemodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QAbstractTableModel_QBaseBeginInsertColumns((QAbstractTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstracttablemodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractTableModel_OnBeginInsertColumns((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_end_insert_columns(void* self) {
    QAbstractTableModel_EndInsertColumns((QAbstractTableModel*)self);
}

void q_abstracttablemodel_qbase_end_insert_columns(void* self) {
    QAbstractTableModel_QBaseEndInsertColumns((QAbstractTableModel*)self);
}

void q_abstracttablemodel_on_end_insert_columns(void* self, void (*callback)()) {
    QAbstractTableModel_OnEndInsertColumns((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QAbstractTableModel_BeginRemoveColumns((QAbstractTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstracttablemodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QAbstractTableModel_QBaseBeginRemoveColumns((QAbstractTableModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstracttablemodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractTableModel_OnBeginRemoveColumns((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_end_remove_columns(void* self) {
    QAbstractTableModel_EndRemoveColumns((QAbstractTableModel*)self);
}

void q_abstracttablemodel_qbase_end_remove_columns(void* self) {
    QAbstractTableModel_QBaseEndRemoveColumns((QAbstractTableModel*)self);
}

void q_abstracttablemodel_on_end_remove_columns(void* self, void (*callback)()) {
    QAbstractTableModel_OnEndRemoveColumns((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QAbstractTableModel_BeginMoveColumns((QAbstractTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool q_abstracttablemodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QAbstractTableModel_QBaseBeginMoveColumns((QAbstractTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_abstracttablemodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractTableModel_OnBeginMoveColumns((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_end_move_columns(void* self) {
    QAbstractTableModel_EndMoveColumns((QAbstractTableModel*)self);
}

void q_abstracttablemodel_qbase_end_move_columns(void* self) {
    QAbstractTableModel_QBaseEndMoveColumns((QAbstractTableModel*)self);
}

void q_abstracttablemodel_on_end_move_columns(void* self, void (*callback)()) {
    QAbstractTableModel_OnEndMoveColumns((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_begin_reset_model(void* self) {
    QAbstractTableModel_BeginResetModel((QAbstractTableModel*)self);
}

void q_abstracttablemodel_qbase_begin_reset_model(void* self) {
    QAbstractTableModel_QBaseBeginResetModel((QAbstractTableModel*)self);
}

void q_abstracttablemodel_on_begin_reset_model(void* self, void (*callback)()) {
    QAbstractTableModel_OnBeginResetModel((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_end_reset_model(void* self) {
    QAbstractTableModel_EndResetModel((QAbstractTableModel*)self);
}

void q_abstracttablemodel_qbase_end_reset_model(void* self) {
    QAbstractTableModel_QBaseEndResetModel((QAbstractTableModel*)self);
}

void q_abstracttablemodel_on_end_reset_model(void* self, void (*callback)()) {
    QAbstractTableModel_OnEndResetModel((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_change_persistent_index(void* self, void* from, void* to) {
    QAbstractTableModel_ChangePersistentIndex((QAbstractTableModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_abstracttablemodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QAbstractTableModel_QBaseChangePersistentIndex((QAbstractTableModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_abstracttablemodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractTableModel_OnChangePersistentIndex((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QAbstractTableModel_ChangePersistentIndexList((QAbstractTableModel*)self, from, to);
}

void q_abstracttablemodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QAbstractTableModel_QBaseChangePersistentIndexList((QAbstractTableModel*)self, from, to);
}

void q_abstracttablemodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list)) {
    QAbstractTableModel_OnChangePersistentIndexList((QAbstractTableModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_abstracttablemodel_persistent_index_list(void* self) {
    libqt_list _arr = QAbstractTableModel_PersistentIndexList((QAbstractTableModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_abstracttablemodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QAbstractTableModel_QBasePersistentIndexList((QAbstractTableModel*)self);
    return _arr;
}

void q_abstracttablemodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*callback)()) {
    QAbstractTableModel_OnPersistentIndexList((QAbstractTableModel*)self, (intptr_t)callback);
}

QObject* q_abstracttablemodel_sender(void* self) {
    return QAbstractTableModel_Sender((QAbstractTableModel*)self);
}

QObject* q_abstracttablemodel_qbase_sender(void* self) {
    return QAbstractTableModel_QBaseSender((QAbstractTableModel*)self);
}

void q_abstracttablemodel_on_sender(void* self, QObject* (*callback)()) {
    QAbstractTableModel_OnSender((QAbstractTableModel*)self, (intptr_t)callback);
}

int32_t q_abstracttablemodel_sender_signal_index(void* self) {
    return QAbstractTableModel_SenderSignalIndex((QAbstractTableModel*)self);
}

int32_t q_abstracttablemodel_qbase_sender_signal_index(void* self) {
    return QAbstractTableModel_QBaseSenderSignalIndex((QAbstractTableModel*)self);
}

void q_abstracttablemodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAbstractTableModel_OnSenderSignalIndex((QAbstractTableModel*)self, (intptr_t)callback);
}

int32_t q_abstracttablemodel_receivers(void* self, const char* signal) {
    return QAbstractTableModel_Receivers((QAbstractTableModel*)self, signal);
}

int32_t q_abstracttablemodel_qbase_receivers(void* self, const char* signal) {
    return QAbstractTableModel_QBaseReceivers((QAbstractTableModel*)self, signal);
}

void q_abstracttablemodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAbstractTableModel_OnReceivers((QAbstractTableModel*)self, (intptr_t)callback);
}

bool q_abstracttablemodel_is_signal_connected(void* self, void* signal) {
    return QAbstractTableModel_IsSignalConnected((QAbstractTableModel*)self, (QMetaMethod*)signal);
}

bool q_abstracttablemodel_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractTableModel_QBaseIsSignalConnected((QAbstractTableModel*)self, (QMetaMethod*)signal);
}

void q_abstracttablemodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAbstractTableModel_OnIsSignalConnected((QAbstractTableModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstracttablemodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_abstracttablemodel_delete(void* self) {
    QAbstractTableModel_Delete((QAbstractTableModel*)(self));
}

QAbstractListModel* q_abstractlistmodel_new() {
    return QAbstractListModel_new();
}

QAbstractListModel* q_abstractlistmodel_new2(void* parent) {
    return QAbstractListModel_new2((QObject*)parent);
}

const QMetaObject* q_abstractlistmodel_meta_object(void* self) {
    return QAbstractListModel_MetaObject((QAbstractListModel*)self);
}

void* q_abstractlistmodel_metacast(void* self, const char* param1) {
    return QAbstractListModel_Metacast((QAbstractListModel*)self, param1);
}

int32_t q_abstractlistmodel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractListModel_Metacall((QAbstractListModel*)self, param1, param2, param3);
}

void q_abstractlistmodel_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QAbstractListModel_OnMetacall((QAbstractListModel*)self, (intptr_t)callback);
}

int32_t q_abstractlistmodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractListModel_QBaseMetacall((QAbstractListModel*)self, param1, param2, param3);
}

const char* q_abstractlistmodel_tr(const char* s) {
    libqt_string _str = QAbstractListModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QModelIndex* q_abstractlistmodel_index(void* self, int row, int column, void* parent) {
    return QAbstractListModel_Index((QAbstractListModel*)self, row, column, (QModelIndex*)parent);
}

void q_abstractlistmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QAbstractListModel_OnIndex((QAbstractListModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractlistmodel_qbase_index(void* self, int row, int column, void* parent) {
    return QAbstractListModel_QBaseIndex((QAbstractListModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_abstractlistmodel_sibling(void* self, int row, int column, void* idx) {
    return QAbstractListModel_Sibling((QAbstractListModel*)self, row, column, (QModelIndex*)idx);
}

void q_abstractlistmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QAbstractListModel_OnSibling((QAbstractListModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractlistmodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QAbstractListModel_QBaseSibling((QAbstractListModel*)self, row, column, (QModelIndex*)idx);
}

bool q_abstractlistmodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractListModel_DropMimeData((QAbstractListModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_abstractlistmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int64_t, int, int, void*)) {
    QAbstractListModel_OnDropMimeData((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractListModel_QBaseDropMimeData((QAbstractListModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

int64_t q_abstractlistmodel_flags(void* self, void* index) {
    return QAbstractListModel_Flags((QAbstractListModel*)self, (QModelIndex*)index);
}

void q_abstractlistmodel_on_flags(void* self, int64_t (*callback)(void*, void*)) {
    QAbstractListModel_OnFlags((QAbstractListModel*)self, (intptr_t)callback);
}

int64_t q_abstractlistmodel_qbase_flags(void* self, void* index) {
    return QAbstractListModel_QBaseFlags((QAbstractListModel*)self, (QModelIndex*)index);
}

const char* q_abstractlistmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractListModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractlistmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractListModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_abstractlistmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* q_abstractlistmodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void q_abstractlistmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractlistmodel_qbase_parent(void* self, void* child) {
    return QAbstractItemModel_QBaseParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

int32_t q_abstractlistmodel_column_count(void* self, void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_abstractlistmodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QAbstractItemModel_OnColumnCount((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t q_abstractlistmodel_qbase_column_count(void* self, void* parent) {
    return QAbstractItemModel_QBaseColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_abstractlistmodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_abstractlistmodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_qbase_has_children(void* self, void* parent) {
    return QAbstractItemModel_QBaseHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_abstractlistmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_abstractlistmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_abstractlistmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_abstractlistmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_abstractlistmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstractlistmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstractlistmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_abstractlistmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_abstractlistmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_header_data_changed(void* self, int64_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_abstractlistmodel_on_header_data_changed(void* self, void (*callback)(void*, int64_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_abstractlistmodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_abstractlistmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_abstractlistmodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_abstractlistmodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_abstractlistmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_abstractlistmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_abstractlistmodel_check_index2(void* self, void* index, int64_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_abstractlistmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_abstractlistmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_abstractlistmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_layout_changed2(void* self, libqt_list parents, int64_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_abstractlistmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int64_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_abstractlistmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int64_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_abstractlistmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int64_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_abstractlistmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractlistmodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstractlistmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstractlistmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstractlistmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstractlistmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstractlistmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstractlistmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstractlistmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstractlistmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_abstractlistmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstractlistmodel_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstractlistmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstractlistmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_abstractlistmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstractlistmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstractlistmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstractlistmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstractlistmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstractlistmodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_abstractlistmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstractlistmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstractlistmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstractlistmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstractlistmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_abstractlistmodel_dynamic_property_names");
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

QBindingStorage* q_abstractlistmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstractlistmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstractlistmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstractlistmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstractlistmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_abstractlistmodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_abstractlistmodel_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_abstractlistmodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_abstractlistmodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_abstractlistmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstractlistmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_abstractlistmodel_row_count(void* self, void* parent) {
    return QAbstractListModel_RowCount((QAbstractListModel*)self, (QModelIndex*)parent);
}

int32_t q_abstractlistmodel_qbase_row_count(void* self, void* parent) {
    return QAbstractListModel_QBaseRowCount((QAbstractListModel*)self, (QModelIndex*)parent);
}

void q_abstractlistmodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    QAbstractListModel_OnRowCount((QAbstractListModel*)self, (intptr_t)callback);
}

QVariant* q_abstractlistmodel_data(void* self, void* index, int role) {
    return QAbstractListModel_Data((QAbstractListModel*)self, (QModelIndex*)index, role);
}

QVariant* q_abstractlistmodel_qbase_data(void* self, void* index, int role) {
    return QAbstractListModel_QBaseData((QAbstractListModel*)self, (QModelIndex*)index, role);
}

void q_abstractlistmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    QAbstractListModel_OnData((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_set_data(void* self, void* index, void* value, int role) {
    return QAbstractListModel_SetData((QAbstractListModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool q_abstractlistmodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QAbstractListModel_QBaseSetData((QAbstractListModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_abstractlistmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    QAbstractListModel_OnSetData((QAbstractListModel*)self, (intptr_t)callback);
}

QVariant* q_abstractlistmodel_header_data(void* self, int section, int64_t orientation, int role) {
    return QAbstractListModel_HeaderData((QAbstractListModel*)self, section, orientation, role);
}

QVariant* q_abstractlistmodel_qbase_header_data(void* self, int section, int64_t orientation, int role) {
    return QAbstractListModel_QBaseHeaderData((QAbstractListModel*)self, section, orientation, role);
}

void q_abstractlistmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int64_t, int)) {
    QAbstractListModel_OnHeaderData((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QAbstractListModel_SetHeaderData((QAbstractListModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_abstractlistmodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QAbstractListModel_QBaseSetHeaderData((QAbstractListModel*)self, section, orientation, (QVariant*)value, role);
}

void q_abstractlistmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int64_t, void*, int)) {
    QAbstractListModel_OnSetHeaderData((QAbstractListModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_abstractlistmodel_item_data(void* self, void* index) {
    return QAbstractListModel_ItemData((QAbstractListModel*)self, (QModelIndex*)index);
}

libqt_map /* of int to QVariant* */ q_abstractlistmodel_qbase_item_data(void* self, void* index) {
    return QAbstractListModel_QBaseItemData((QAbstractListModel*)self, (QModelIndex*)index);
}

void q_abstractlistmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    QAbstractListModel_OnItemData((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QAbstractListModel_SetItemData((QAbstractListModel*)self, (QModelIndex*)index, roles);
}

bool q_abstractlistmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QAbstractListModel_QBaseSetItemData((QAbstractListModel*)self, (QModelIndex*)index, roles);
}

void q_abstractlistmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QAbstractListModel_OnSetItemData((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_clear_item_data(void* self, void* index) {
    return QAbstractListModel_ClearItemData((QAbstractListModel*)self, (QModelIndex*)index);
}

bool q_abstractlistmodel_qbase_clear_item_data(void* self, void* index) {
    return QAbstractListModel_QBaseClearItemData((QAbstractListModel*)self, (QModelIndex*)index);
}

void q_abstractlistmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    QAbstractListModel_OnClearItemData((QAbstractListModel*)self, (intptr_t)callback);
}

const char** q_abstractlistmodel_mime_types(void* self) {
    libqt_list _arr = QAbstractListModel_MimeTypes((QAbstractListModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_abstractlistmodel_mime_types");
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

const char** q_abstractlistmodel_qbase_mime_types(void* self) {
    libqt_list _arr = QAbstractListModel_QBaseMimeTypes((QAbstractListModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_abstractlistmodel_mime_types");
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

void q_abstractlistmodel_on_mime_types(void* self, const char** (*callback)()) {
    QAbstractListModel_OnMimeTypes((QAbstractListModel*)self, (intptr_t)callback);
}

QMimeData* q_abstractlistmodel_mime_data(void* self, libqt_list indexes) {
    return QAbstractListModel_MimeData((QAbstractListModel*)self, indexes);
}

QMimeData* q_abstractlistmodel_qbase_mime_data(void* self, libqt_list indexes) {
    return QAbstractListModel_QBaseMimeData((QAbstractListModel*)self, indexes);
}

void q_abstractlistmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list)) {
    QAbstractListModel_OnMimeData((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractListModel_CanDropMimeData((QAbstractListModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_abstractlistmodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractListModel_QBaseCanDropMimeData((QAbstractListModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_abstractlistmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int64_t, int, int, void*)) {
    QAbstractListModel_OnCanDropMimeData((QAbstractListModel*)self, (intptr_t)callback);
}

int64_t q_abstractlistmodel_supported_drop_actions(void* self) {
    return QAbstractListModel_SupportedDropActions((QAbstractListModel*)self);
}

int64_t q_abstractlistmodel_qbase_supported_drop_actions(void* self) {
    return QAbstractListModel_QBaseSupportedDropActions((QAbstractListModel*)self);
}

void q_abstractlistmodel_on_supported_drop_actions(void* self, int64_t (*callback)()) {
    QAbstractListModel_OnSupportedDropActions((QAbstractListModel*)self, (intptr_t)callback);
}

int64_t q_abstractlistmodel_supported_drag_actions(void* self) {
    return QAbstractListModel_SupportedDragActions((QAbstractListModel*)self);
}

int64_t q_abstractlistmodel_qbase_supported_drag_actions(void* self) {
    return QAbstractListModel_QBaseSupportedDragActions((QAbstractListModel*)self);
}

void q_abstractlistmodel_on_supported_drag_actions(void* self, int64_t (*callback)()) {
    QAbstractListModel_OnSupportedDragActions((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractListModel_InsertRows((QAbstractListModel*)self, row, count, (QModelIndex*)parent);
}

bool q_abstractlistmodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractListModel_QBaseInsertRows((QAbstractListModel*)self, row, count, (QModelIndex*)parent);
}

void q_abstractlistmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractListModel_OnInsertRows((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractListModel_InsertColumns((QAbstractListModel*)self, column, count, (QModelIndex*)parent);
}

bool q_abstractlistmodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractListModel_QBaseInsertColumns((QAbstractListModel*)self, column, count, (QModelIndex*)parent);
}

void q_abstractlistmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractListModel_OnInsertColumns((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractListModel_RemoveRows((QAbstractListModel*)self, row, count, (QModelIndex*)parent);
}

bool q_abstractlistmodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractListModel_QBaseRemoveRows((QAbstractListModel*)self, row, count, (QModelIndex*)parent);
}

void q_abstractlistmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractListModel_OnRemoveRows((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractListModel_RemoveColumns((QAbstractListModel*)self, column, count, (QModelIndex*)parent);
}

bool q_abstractlistmodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractListModel_QBaseRemoveColumns((QAbstractListModel*)self, column, count, (QModelIndex*)parent);
}

void q_abstractlistmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QAbstractListModel_OnRemoveColumns((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QAbstractListModel_MoveRows((QAbstractListModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstractlistmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QAbstractListModel_QBaseMoveRows((QAbstractListModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_abstractlistmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractListModel_OnMoveRows((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QAbstractListModel_MoveColumns((QAbstractListModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstractlistmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QAbstractListModel_QBaseMoveColumns((QAbstractListModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_abstractlistmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractListModel_OnMoveColumns((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_fetch_more(void* self, void* parent) {
    QAbstractListModel_FetchMore((QAbstractListModel*)self, (QModelIndex*)parent);
}

void q_abstractlistmodel_qbase_fetch_more(void* self, void* parent) {
    QAbstractListModel_QBaseFetchMore((QAbstractListModel*)self, (QModelIndex*)parent);
}

void q_abstractlistmodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    QAbstractListModel_OnFetchMore((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_can_fetch_more(void* self, void* parent) {
    return QAbstractListModel_CanFetchMore((QAbstractListModel*)self, (QModelIndex*)parent);
}

bool q_abstractlistmodel_qbase_can_fetch_more(void* self, void* parent) {
    return QAbstractListModel_QBaseCanFetchMore((QAbstractListModel*)self, (QModelIndex*)parent);
}

void q_abstractlistmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    QAbstractListModel_OnCanFetchMore((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_sort(void* self, int column, int64_t order) {
    QAbstractListModel_Sort((QAbstractListModel*)self, column, order);
}

void q_abstractlistmodel_qbase_sort(void* self, int column, int64_t order) {
    QAbstractListModel_QBaseSort((QAbstractListModel*)self, column, order);
}

void q_abstractlistmodel_on_sort(void* self, void (*callback)(void*, int, int64_t)) {
    QAbstractListModel_OnSort((QAbstractListModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractlistmodel_buddy(void* self, void* index) {
    return QAbstractListModel_Buddy((QAbstractListModel*)self, (QModelIndex*)index);
}

QModelIndex* q_abstractlistmodel_qbase_buddy(void* self, void* index) {
    return QAbstractListModel_QBaseBuddy((QAbstractListModel*)self, (QModelIndex*)index);
}

void q_abstractlistmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractListModel_OnBuddy((QAbstractListModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_abstractlistmodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QAbstractListModel_Match((QAbstractListModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_abstractlistmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QAbstractListModel_QBaseMatch((QAbstractListModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_abstractlistmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(void*, void*, int, void*, int, int64_t)) {
    QAbstractListModel_OnMatch((QAbstractListModel*)self, (intptr_t)callback);
}

QSize* q_abstractlistmodel_span(void* self, void* index) {
    return QAbstractListModel_Span((QAbstractListModel*)self, (QModelIndex*)index);
}

QSize* q_abstractlistmodel_qbase_span(void* self, void* index) {
    return QAbstractListModel_QBaseSpan((QAbstractListModel*)self, (QModelIndex*)index);
}

void q_abstractlistmodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    QAbstractListModel_OnSpan((QAbstractListModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_abstractlistmodel_role_names(void* self) {
    return QAbstractListModel_RoleNames((QAbstractListModel*)self);
}

libqt_map /* of int to char* */ q_abstractlistmodel_qbase_role_names(void* self) {
    return QAbstractListModel_QBaseRoleNames((QAbstractListModel*)self);
}

void q_abstractlistmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    QAbstractListModel_OnRoleNames((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QAbstractListModel_MultiData((QAbstractListModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_abstractlistmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QAbstractListModel_QBaseMultiData((QAbstractListModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_abstractlistmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractListModel_OnMultiData((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_submit(void* self) {
    return QAbstractListModel_Submit((QAbstractListModel*)self);
}

bool q_abstractlistmodel_qbase_submit(void* self) {
    return QAbstractListModel_QBaseSubmit((QAbstractListModel*)self);
}

void q_abstractlistmodel_on_submit(void* self, bool (*callback)()) {
    QAbstractListModel_OnSubmit((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_revert(void* self) {
    QAbstractListModel_Revert((QAbstractListModel*)self);
}

void q_abstractlistmodel_qbase_revert(void* self) {
    QAbstractListModel_QBaseRevert((QAbstractListModel*)self);
}

void q_abstractlistmodel_on_revert(void* self, void (*callback)()) {
    QAbstractListModel_OnRevert((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_reset_internal_data(void* self) {
    QAbstractListModel_ResetInternalData((QAbstractListModel*)self);
}

void q_abstractlistmodel_qbase_reset_internal_data(void* self) {
    QAbstractListModel_QBaseResetInternalData((QAbstractListModel*)self);
}

void q_abstractlistmodel_on_reset_internal_data(void* self, void (*callback)()) {
    QAbstractListModel_OnResetInternalData((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_event(void* self, void* event) {
    return QAbstractListModel_Event((QAbstractListModel*)self, (QEvent*)event);
}

bool q_abstractlistmodel_qbase_event(void* self, void* event) {
    return QAbstractListModel_QBaseEvent((QAbstractListModel*)self, (QEvent*)event);
}

void q_abstractlistmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QAbstractListModel_OnEvent((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_event_filter(void* self, void* watched, void* event) {
    return QAbstractListModel_EventFilter((QAbstractListModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_abstractlistmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractListModel_QBaseEventFilter((QAbstractListModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_abstractlistmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAbstractListModel_OnEventFilter((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_timer_event(void* self, void* event) {
    QAbstractListModel_TimerEvent((QAbstractListModel*)self, (QTimerEvent*)event);
}

void q_abstractlistmodel_qbase_timer_event(void* self, void* event) {
    QAbstractListModel_QBaseTimerEvent((QAbstractListModel*)self, (QTimerEvent*)event);
}

void q_abstractlistmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAbstractListModel_OnTimerEvent((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_child_event(void* self, void* event) {
    QAbstractListModel_ChildEvent((QAbstractListModel*)self, (QChildEvent*)event);
}

void q_abstractlistmodel_qbase_child_event(void* self, void* event) {
    QAbstractListModel_QBaseChildEvent((QAbstractListModel*)self, (QChildEvent*)event);
}

void q_abstractlistmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAbstractListModel_OnChildEvent((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_custom_event(void* self, void* event) {
    QAbstractListModel_CustomEvent((QAbstractListModel*)self, (QEvent*)event);
}

void q_abstractlistmodel_qbase_custom_event(void* self, void* event) {
    QAbstractListModel_QBaseCustomEvent((QAbstractListModel*)self, (QEvent*)event);
}

void q_abstractlistmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAbstractListModel_OnCustomEvent((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_connect_notify(void* self, void* signal) {
    QAbstractListModel_ConnectNotify((QAbstractListModel*)self, (QMetaMethod*)signal);
}

void q_abstractlistmodel_qbase_connect_notify(void* self, void* signal) {
    QAbstractListModel_QBaseConnectNotify((QAbstractListModel*)self, (QMetaMethod*)signal);
}

void q_abstractlistmodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractListModel_OnConnectNotify((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_disconnect_notify(void* self, void* signal) {
    QAbstractListModel_DisconnectNotify((QAbstractListModel*)self, (QMetaMethod*)signal);
}

void q_abstractlistmodel_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractListModel_QBaseDisconnectNotify((QAbstractListModel*)self, (QMetaMethod*)signal);
}

void q_abstractlistmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractListModel_OnDisconnectNotify((QAbstractListModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractlistmodel_create_index(void* self, int row, int column) {
    return QAbstractListModel_CreateIndex((QAbstractListModel*)self, row, column);
}

QModelIndex* q_abstractlistmodel_qbase_create_index(void* self, int row, int column) {
    return QAbstractListModel_QBaseCreateIndex((QAbstractListModel*)self, row, column);
}

void q_abstractlistmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    QAbstractListModel_OnCreateIndex((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_encode_data(void* self, libqt_list indexes, void* stream) {
    QAbstractListModel_EncodeData((QAbstractListModel*)self, indexes, (QDataStream*)stream);
}

void q_abstractlistmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    QAbstractListModel_QBaseEncodeData((QAbstractListModel*)self, indexes, (QDataStream*)stream);
}

void q_abstractlistmodel_on_encode_data(void* self, void (*callback)(void*, libqt_list, void*)) {
    QAbstractListModel_OnEncodeData((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QAbstractListModel_DecodeData((QAbstractListModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_abstractlistmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QAbstractListModel_QBaseDecodeData((QAbstractListModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_abstractlistmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    QAbstractListModel_OnDecodeData((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QAbstractListModel_BeginInsertRows((QAbstractListModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractlistmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QAbstractListModel_QBaseBeginInsertRows((QAbstractListModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractlistmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractListModel_OnBeginInsertRows((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_end_insert_rows(void* self) {
    QAbstractListModel_EndInsertRows((QAbstractListModel*)self);
}

void q_abstractlistmodel_qbase_end_insert_rows(void* self) {
    QAbstractListModel_QBaseEndInsertRows((QAbstractListModel*)self);
}

void q_abstractlistmodel_on_end_insert_rows(void* self, void (*callback)()) {
    QAbstractListModel_OnEndInsertRows((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QAbstractListModel_BeginRemoveRows((QAbstractListModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractlistmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QAbstractListModel_QBaseBeginRemoveRows((QAbstractListModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractlistmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractListModel_OnBeginRemoveRows((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_end_remove_rows(void* self) {
    QAbstractListModel_EndRemoveRows((QAbstractListModel*)self);
}

void q_abstractlistmodel_qbase_end_remove_rows(void* self) {
    QAbstractListModel_QBaseEndRemoveRows((QAbstractListModel*)self);
}

void q_abstractlistmodel_on_end_remove_rows(void* self, void (*callback)()) {
    QAbstractListModel_OnEndRemoveRows((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QAbstractListModel_BeginMoveRows((QAbstractListModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool q_abstractlistmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QAbstractListModel_QBaseBeginMoveRows((QAbstractListModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_abstractlistmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractListModel_OnBeginMoveRows((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_end_move_rows(void* self) {
    QAbstractListModel_EndMoveRows((QAbstractListModel*)self);
}

void q_abstractlistmodel_qbase_end_move_rows(void* self) {
    QAbstractListModel_QBaseEndMoveRows((QAbstractListModel*)self);
}

void q_abstractlistmodel_on_end_move_rows(void* self, void (*callback)()) {
    QAbstractListModel_OnEndMoveRows((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QAbstractListModel_BeginInsertColumns((QAbstractListModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractlistmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QAbstractListModel_QBaseBeginInsertColumns((QAbstractListModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractlistmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractListModel_OnBeginInsertColumns((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_end_insert_columns(void* self) {
    QAbstractListModel_EndInsertColumns((QAbstractListModel*)self);
}

void q_abstractlistmodel_qbase_end_insert_columns(void* self) {
    QAbstractListModel_QBaseEndInsertColumns((QAbstractListModel*)self);
}

void q_abstractlistmodel_on_end_insert_columns(void* self, void (*callback)()) {
    QAbstractListModel_OnEndInsertColumns((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QAbstractListModel_BeginRemoveColumns((QAbstractListModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractlistmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QAbstractListModel_QBaseBeginRemoveColumns((QAbstractListModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractlistmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractListModel_OnBeginRemoveColumns((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_end_remove_columns(void* self) {
    QAbstractListModel_EndRemoveColumns((QAbstractListModel*)self);
}

void q_abstractlistmodel_qbase_end_remove_columns(void* self) {
    QAbstractListModel_QBaseEndRemoveColumns((QAbstractListModel*)self);
}

void q_abstractlistmodel_on_end_remove_columns(void* self, void (*callback)()) {
    QAbstractListModel_OnEndRemoveColumns((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QAbstractListModel_BeginMoveColumns((QAbstractListModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool q_abstractlistmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QAbstractListModel_QBaseBeginMoveColumns((QAbstractListModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_abstractlistmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractListModel_OnBeginMoveColumns((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_end_move_columns(void* self) {
    QAbstractListModel_EndMoveColumns((QAbstractListModel*)self);
}

void q_abstractlistmodel_qbase_end_move_columns(void* self) {
    QAbstractListModel_QBaseEndMoveColumns((QAbstractListModel*)self);
}

void q_abstractlistmodel_on_end_move_columns(void* self, void (*callback)()) {
    QAbstractListModel_OnEndMoveColumns((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_begin_reset_model(void* self) {
    QAbstractListModel_BeginResetModel((QAbstractListModel*)self);
}

void q_abstractlistmodel_qbase_begin_reset_model(void* self) {
    QAbstractListModel_QBaseBeginResetModel((QAbstractListModel*)self);
}

void q_abstractlistmodel_on_begin_reset_model(void* self, void (*callback)()) {
    QAbstractListModel_OnBeginResetModel((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_end_reset_model(void* self) {
    QAbstractListModel_EndResetModel((QAbstractListModel*)self);
}

void q_abstractlistmodel_qbase_end_reset_model(void* self) {
    QAbstractListModel_QBaseEndResetModel((QAbstractListModel*)self);
}

void q_abstractlistmodel_on_end_reset_model(void* self, void (*callback)()) {
    QAbstractListModel_OnEndResetModel((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_change_persistent_index(void* self, void* from, void* to) {
    QAbstractListModel_ChangePersistentIndex((QAbstractListModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_abstractlistmodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QAbstractListModel_QBaseChangePersistentIndex((QAbstractListModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_abstractlistmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractListModel_OnChangePersistentIndex((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QAbstractListModel_ChangePersistentIndexList((QAbstractListModel*)self, from, to);
}

void q_abstractlistmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QAbstractListModel_QBaseChangePersistentIndexList((QAbstractListModel*)self, from, to);
}

void q_abstractlistmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list)) {
    QAbstractListModel_OnChangePersistentIndexList((QAbstractListModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_abstractlistmodel_persistent_index_list(void* self) {
    libqt_list _arr = QAbstractListModel_PersistentIndexList((QAbstractListModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_abstractlistmodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QAbstractListModel_QBasePersistentIndexList((QAbstractListModel*)self);
    return _arr;
}

void q_abstractlistmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*callback)()) {
    QAbstractListModel_OnPersistentIndexList((QAbstractListModel*)self, (intptr_t)callback);
}

QObject* q_abstractlistmodel_sender(void* self) {
    return QAbstractListModel_Sender((QAbstractListModel*)self);
}

QObject* q_abstractlistmodel_qbase_sender(void* self) {
    return QAbstractListModel_QBaseSender((QAbstractListModel*)self);
}

void q_abstractlistmodel_on_sender(void* self, QObject* (*callback)()) {
    QAbstractListModel_OnSender((QAbstractListModel*)self, (intptr_t)callback);
}

int32_t q_abstractlistmodel_sender_signal_index(void* self) {
    return QAbstractListModel_SenderSignalIndex((QAbstractListModel*)self);
}

int32_t q_abstractlistmodel_qbase_sender_signal_index(void* self) {
    return QAbstractListModel_QBaseSenderSignalIndex((QAbstractListModel*)self);
}

void q_abstractlistmodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAbstractListModel_OnSenderSignalIndex((QAbstractListModel*)self, (intptr_t)callback);
}

int32_t q_abstractlistmodel_receivers(void* self, const char* signal) {
    return QAbstractListModel_Receivers((QAbstractListModel*)self, signal);
}

int32_t q_abstractlistmodel_qbase_receivers(void* self, const char* signal) {
    return QAbstractListModel_QBaseReceivers((QAbstractListModel*)self, signal);
}

void q_abstractlistmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAbstractListModel_OnReceivers((QAbstractListModel*)self, (intptr_t)callback);
}

bool q_abstractlistmodel_is_signal_connected(void* self, void* signal) {
    return QAbstractListModel_IsSignalConnected((QAbstractListModel*)self, (QMetaMethod*)signal);
}

bool q_abstractlistmodel_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractListModel_QBaseIsSignalConnected((QAbstractListModel*)self, (QMetaMethod*)signal);
}

void q_abstractlistmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAbstractListModel_OnIsSignalConnected((QAbstractListModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractlistmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_abstractlistmodel_delete(void* self) {
    QAbstractListModel_Delete((QAbstractListModel*)(self));
}
