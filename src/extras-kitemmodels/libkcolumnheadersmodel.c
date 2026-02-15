#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libkcolumnheadersmodel.hpp"
#include "libkcolumnheadersmodel.h"

KColumnHeadersModel* k_columnheadersmodel_new() {
    return KColumnHeadersModel_new();
}

KColumnHeadersModel* k_columnheadersmodel_new2(void* parent) {
    return KColumnHeadersModel_new2((QObject*)parent);
}

const QMetaObject* k_columnheadersmodel_meta_object(void* self) {
    return KColumnHeadersModel_MetaObject((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KColumnHeadersModel_OnMetaObject((KColumnHeadersModel*)self, (intptr_t)callback);
}

const QMetaObject* k_columnheadersmodel_qbase_meta_object(void* self) {
    return KColumnHeadersModel_QBaseMetaObject((KColumnHeadersModel*)self);
}

void* k_columnheadersmodel_metacast(void* self, const char* param1) {
    return KColumnHeadersModel_Metacast((KColumnHeadersModel*)self, param1);
}

void k_columnheadersmodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KColumnHeadersModel_OnMetacast((KColumnHeadersModel*)self, (intptr_t)callback);
}

void* k_columnheadersmodel_qbase_metacast(void* self, const char* param1) {
    return KColumnHeadersModel_QBaseMetacast((KColumnHeadersModel*)self, param1);
}

int32_t k_columnheadersmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KColumnHeadersModel_Metacall((KColumnHeadersModel*)self, param1, param2, param3);
}

void k_columnheadersmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KColumnHeadersModel_OnMetacall((KColumnHeadersModel*)self, (intptr_t)callback);
}

int32_t k_columnheadersmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KColumnHeadersModel_QBaseMetacall((KColumnHeadersModel*)self, param1, param2, param3);
}

const char* k_columnheadersmodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_columnheadersmodel_row_count(void* self, void* parent) {
    return KColumnHeadersModel_RowCount((KColumnHeadersModel*)self, (QModelIndex*)parent);
}

void k_columnheadersmodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    KColumnHeadersModel_OnRowCount((KColumnHeadersModel*)self, (intptr_t)callback);
}

int32_t k_columnheadersmodel_qbase_row_count(void* self, void* parent) {
    return KColumnHeadersModel_QBaseRowCount((KColumnHeadersModel*)self, (QModelIndex*)parent);
}

QVariant* k_columnheadersmodel_data(void* self, void* index, int role) {
    return KColumnHeadersModel_Data((KColumnHeadersModel*)self, (QModelIndex*)index, role);
}

void k_columnheadersmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    KColumnHeadersModel_OnData((KColumnHeadersModel*)self, (intptr_t)callback);
}

QVariant* k_columnheadersmodel_qbase_data(void* self, void* index, int role) {
    return KColumnHeadersModel_QBaseData((KColumnHeadersModel*)self, (QModelIndex*)index, role);
}

libqt_map /* of int to char* */ k_columnheadersmodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KColumnHeadersModel_RoleNames((KColumnHeadersModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_columnheadersmodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_columnheadersmodel_role_names\n");
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

void k_columnheadersmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    KColumnHeadersModel_OnRoleNames((KColumnHeadersModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_columnheadersmodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KColumnHeadersModel_QBaseRoleNames((KColumnHeadersModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_columnheadersmodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_columnheadersmodel_role_names\n");
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

QAbstractItemModel* k_columnheadersmodel_source_model(void* self) {
    return KColumnHeadersModel_SourceModel((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_set_source_model(void* self, void* newSourceModel) {
    KColumnHeadersModel_SetSourceModel((KColumnHeadersModel*)self, (QAbstractItemModel*)newSourceModel);
}

int32_t k_columnheadersmodel_sort_column(void* self) {
    return KColumnHeadersModel_SortColumn((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_set_sort_column(void* self, int newSortColumn) {
    KColumnHeadersModel_SetSortColumn((KColumnHeadersModel*)self, newSortColumn);
}

int32_t k_columnheadersmodel_sort_order(void* self) {
    return KColumnHeadersModel_SortOrder((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_set_sort_order(void* self, int32_t newSortOrder) {
    KColumnHeadersModel_SetSortOrder((KColumnHeadersModel*)self, newSortOrder);
}

void k_columnheadersmodel_source_model_changed(void* self) {
    KColumnHeadersModel_SourceModelChanged((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    KColumnHeadersModel_Connect_SourceModelChanged((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_sort_column_changed(void* self) {
    KColumnHeadersModel_SortColumnChanged((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_sort_column_changed(void* self, void (*callback)(void*)) {
    KColumnHeadersModel_Connect_SortColumnChanged((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_sort_order_changed(void* self) {
    KColumnHeadersModel_SortOrderChanged((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_sort_order_changed(void* self, void (*callback)(void*)) {
    KColumnHeadersModel_Connect_SortOrderChanged((KColumnHeadersModel*)self, (intptr_t)callback);
}

const char* k_columnheadersmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_columnheadersmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_columnheadersmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* k_columnheadersmodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void k_columnheadersmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* k_columnheadersmodel_qbase_parent(void* self, void* child) {
    return QAbstractItemModel_QBaseParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

int32_t k_columnheadersmodel_column_count(void* self, void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void k_columnheadersmodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QAbstractItemModel_OnColumnCount((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t k_columnheadersmodel_qbase_column_count(void* self, void* parent) {
    return QAbstractItemModel_QBaseColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool k_columnheadersmodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void k_columnheadersmodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_qbase_has_children(void* self, void* parent) {
    return QAbstractItemModel_QBaseHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool k_columnheadersmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_columnheadersmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_columnheadersmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_columnheadersmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_columnheadersmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_columnheadersmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_columnheadersmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_columnheadersmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_columnheadersmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_columnheadersmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_columnheadersmodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_columnheadersmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_columnheadersmodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_columnheadersmodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_columnheadersmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_columnheadersmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_columnheadersmodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_columnheadersmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_columnheadersmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_columnheadersmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_columnheadersmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_columnheadersmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_columnheadersmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_columnheadersmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_columnheadersmodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_columnheadersmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_columnheadersmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_columnheadersmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_columnheadersmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_columnheadersmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_columnheadersmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_columnheadersmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_columnheadersmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_columnheadersmodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_columnheadersmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_columnheadersmodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_columnheadersmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_columnheadersmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_columnheadersmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_columnheadersmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_columnheadersmodel_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_columnheadersmodel_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_columnheadersmodel_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_columnheadersmodel_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_columnheadersmodel_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_columnheadersmodel_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_columnheadersmodel_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_columnheadersmodel_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_columnheadersmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_columnheadersmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_columnheadersmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_columnheadersmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_columnheadersmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_columnheadersmodel_dynamic_property_names\n");
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

QBindingStorage* k_columnheadersmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_columnheadersmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_columnheadersmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_columnheadersmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_columnheadersmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_columnheadersmodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_columnheadersmodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_columnheadersmodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_columnheadersmodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_columnheadersmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_columnheadersmodel_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_columnheadersmodel_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_columnheadersmodel_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_columnheadersmodel_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_columnheadersmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_columnheadersmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* k_columnheadersmodel_index(void* self, int row, int column, void* parent) {
    return KColumnHeadersModel_Index((KColumnHeadersModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_columnheadersmodel_qbase_index(void* self, int row, int column, void* parent) {
    return KColumnHeadersModel_QBaseIndex((KColumnHeadersModel*)self, row, column, (QModelIndex*)parent);
}

void k_columnheadersmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KColumnHeadersModel_OnIndex((KColumnHeadersModel*)self, (intptr_t)callback);
}

QModelIndex* k_columnheadersmodel_sibling(void* self, int row, int column, void* idx) {
    return KColumnHeadersModel_Sibling((KColumnHeadersModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_columnheadersmodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return KColumnHeadersModel_QBaseSibling((KColumnHeadersModel*)self, row, column, (QModelIndex*)idx);
}

void k_columnheadersmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KColumnHeadersModel_OnSibling((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KColumnHeadersModel_DropMimeData((KColumnHeadersModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_columnheadersmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KColumnHeadersModel_QBaseDropMimeData((KColumnHeadersModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_columnheadersmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KColumnHeadersModel_OnDropMimeData((KColumnHeadersModel*)self, (intptr_t)callback);
}

int32_t k_columnheadersmodel_flags(void* self, void* index) {
    return KColumnHeadersModel_Flags((KColumnHeadersModel*)self, (QModelIndex*)index);
}

int32_t k_columnheadersmodel_qbase_flags(void* self, void* index) {
    return KColumnHeadersModel_QBaseFlags((KColumnHeadersModel*)self, (QModelIndex*)index);
}

void k_columnheadersmodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    KColumnHeadersModel_OnFlags((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_set_data(void* self, void* index, void* value, int role) {
    return KColumnHeadersModel_SetData((KColumnHeadersModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_columnheadersmodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return KColumnHeadersModel_QBaseSetData((KColumnHeadersModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_columnheadersmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    KColumnHeadersModel_OnSetData((KColumnHeadersModel*)self, (intptr_t)callback);
}

QVariant* k_columnheadersmodel_header_data(void* self, int section, int32_t orientation, int role) {
    return KColumnHeadersModel_HeaderData((KColumnHeadersModel*)self, section, orientation, role);
}

QVariant* k_columnheadersmodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return KColumnHeadersModel_QBaseHeaderData((KColumnHeadersModel*)self, section, orientation, role);
}

void k_columnheadersmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    KColumnHeadersModel_OnHeaderData((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KColumnHeadersModel_SetHeaderData((KColumnHeadersModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_columnheadersmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KColumnHeadersModel_QBaseSetHeaderData((KColumnHeadersModel*)self, section, orientation, (QVariant*)value, role);
}

void k_columnheadersmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    KColumnHeadersModel_OnSetHeaderData((KColumnHeadersModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_columnheadersmodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KColumnHeadersModel_ItemData((KColumnHeadersModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_columnheadersmodel_qbase_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KColumnHeadersModel_QBaseItemData((KColumnHeadersModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_columnheadersmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    KColumnHeadersModel_OnItemData((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_columnheadersmodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_columnheadersmodel_set_item_data\n");
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
    bool _out = KColumnHeadersModel_SetItemData((KColumnHeadersModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool k_columnheadersmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_columnheadersmodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_columnheadersmodel_set_item_data\n");
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
    bool _out = KColumnHeadersModel_QBaseSetItemData((KColumnHeadersModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_columnheadersmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    KColumnHeadersModel_OnSetItemData((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_clear_item_data(void* self, void* index) {
    return KColumnHeadersModel_ClearItemData((KColumnHeadersModel*)self, (QModelIndex*)index);
}

bool k_columnheadersmodel_qbase_clear_item_data(void* self, void* index) {
    return KColumnHeadersModel_QBaseClearItemData((KColumnHeadersModel*)self, (QModelIndex*)index);
}

void k_columnheadersmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    KColumnHeadersModel_OnClearItemData((KColumnHeadersModel*)self, (intptr_t)callback);
}

const char** k_columnheadersmodel_mime_types(void* self) {
    libqt_list _arr = KColumnHeadersModel_MimeTypes((KColumnHeadersModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_columnheadersmodel_mime_types\n");
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

const char** k_columnheadersmodel_qbase_mime_types(void* self) {
    libqt_list _arr = KColumnHeadersModel_QBaseMimeTypes((KColumnHeadersModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_columnheadersmodel_mime_types\n");
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

void k_columnheadersmodel_on_mime_types(void* self, const char** (*callback)()) {
    KColumnHeadersModel_OnMimeTypes((KColumnHeadersModel*)self, (intptr_t)callback);
}

QMimeData* k_columnheadersmodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KColumnHeadersModel_MimeData((KColumnHeadersModel*)self, indexes);
}

QMimeData* k_columnheadersmodel_qbase_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KColumnHeadersModel_QBaseMimeData((KColumnHeadersModel*)self, indexes);
}

void k_columnheadersmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list /* of QModelIndex* */)) {
    KColumnHeadersModel_OnMimeData((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KColumnHeadersModel_CanDropMimeData((KColumnHeadersModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_columnheadersmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KColumnHeadersModel_QBaseCanDropMimeData((KColumnHeadersModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_columnheadersmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KColumnHeadersModel_OnCanDropMimeData((KColumnHeadersModel*)self, (intptr_t)callback);
}

int32_t k_columnheadersmodel_supported_drop_actions(void* self) {
    return KColumnHeadersModel_SupportedDropActions((KColumnHeadersModel*)self);
}

int32_t k_columnheadersmodel_qbase_supported_drop_actions(void* self) {
    return KColumnHeadersModel_QBaseSupportedDropActions((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KColumnHeadersModel_OnSupportedDropActions((KColumnHeadersModel*)self, (intptr_t)callback);
}

int32_t k_columnheadersmodel_supported_drag_actions(void* self) {
    return KColumnHeadersModel_SupportedDragActions((KColumnHeadersModel*)self);
}

int32_t k_columnheadersmodel_qbase_supported_drag_actions(void* self) {
    return KColumnHeadersModel_QBaseSupportedDragActions((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    KColumnHeadersModel_OnSupportedDragActions((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_insert_rows(void* self, int row, int count, void* parent) {
    return KColumnHeadersModel_InsertRows((KColumnHeadersModel*)self, row, count, (QModelIndex*)parent);
}

bool k_columnheadersmodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return KColumnHeadersModel_QBaseInsertRows((KColumnHeadersModel*)self, row, count, (QModelIndex*)parent);
}

void k_columnheadersmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KColumnHeadersModel_OnInsertRows((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_insert_columns(void* self, int column, int count, void* parent) {
    return KColumnHeadersModel_InsertColumns((KColumnHeadersModel*)self, column, count, (QModelIndex*)parent);
}

bool k_columnheadersmodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return KColumnHeadersModel_QBaseInsertColumns((KColumnHeadersModel*)self, column, count, (QModelIndex*)parent);
}

void k_columnheadersmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KColumnHeadersModel_OnInsertColumns((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_remove_rows(void* self, int row, int count, void* parent) {
    return KColumnHeadersModel_RemoveRows((KColumnHeadersModel*)self, row, count, (QModelIndex*)parent);
}

bool k_columnheadersmodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return KColumnHeadersModel_QBaseRemoveRows((KColumnHeadersModel*)self, row, count, (QModelIndex*)parent);
}

void k_columnheadersmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KColumnHeadersModel_OnRemoveRows((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_remove_columns(void* self, int column, int count, void* parent) {
    return KColumnHeadersModel_RemoveColumns((KColumnHeadersModel*)self, column, count, (QModelIndex*)parent);
}

bool k_columnheadersmodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return KColumnHeadersModel_QBaseRemoveColumns((KColumnHeadersModel*)self, column, count, (QModelIndex*)parent);
}

void k_columnheadersmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KColumnHeadersModel_OnRemoveColumns((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KColumnHeadersModel_MoveRows((KColumnHeadersModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_columnheadersmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KColumnHeadersModel_QBaseMoveRows((KColumnHeadersModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_columnheadersmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KColumnHeadersModel_OnMoveRows((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KColumnHeadersModel_MoveColumns((KColumnHeadersModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_columnheadersmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KColumnHeadersModel_QBaseMoveColumns((KColumnHeadersModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_columnheadersmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KColumnHeadersModel_OnMoveColumns((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_fetch_more(void* self, void* parent) {
    KColumnHeadersModel_FetchMore((KColumnHeadersModel*)self, (QModelIndex*)parent);
}

void k_columnheadersmodel_qbase_fetch_more(void* self, void* parent) {
    KColumnHeadersModel_QBaseFetchMore((KColumnHeadersModel*)self, (QModelIndex*)parent);
}

void k_columnheadersmodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    KColumnHeadersModel_OnFetchMore((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_can_fetch_more(void* self, void* parent) {
    return KColumnHeadersModel_CanFetchMore((KColumnHeadersModel*)self, (QModelIndex*)parent);
}

bool k_columnheadersmodel_qbase_can_fetch_more(void* self, void* parent) {
    return KColumnHeadersModel_QBaseCanFetchMore((KColumnHeadersModel*)self, (QModelIndex*)parent);
}

void k_columnheadersmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    KColumnHeadersModel_OnCanFetchMore((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_sort(void* self, int column, int32_t order) {
    KColumnHeadersModel_Sort((KColumnHeadersModel*)self, column, order);
}

void k_columnheadersmodel_qbase_sort(void* self, int column, int32_t order) {
    KColumnHeadersModel_QBaseSort((KColumnHeadersModel*)self, column, order);
}

void k_columnheadersmodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KColumnHeadersModel_OnSort((KColumnHeadersModel*)self, (intptr_t)callback);
}

QModelIndex* k_columnheadersmodel_buddy(void* self, void* index) {
    return KColumnHeadersModel_Buddy((KColumnHeadersModel*)self, (QModelIndex*)index);
}

QModelIndex* k_columnheadersmodel_qbase_buddy(void* self, void* index) {
    return KColumnHeadersModel_QBaseBuddy((KColumnHeadersModel*)self, (QModelIndex*)index);
}

void k_columnheadersmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    KColumnHeadersModel_OnBuddy((KColumnHeadersModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_columnheadersmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KColumnHeadersModel_Match((KColumnHeadersModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_columnheadersmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KColumnHeadersModel_QBaseMatch((KColumnHeadersModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_columnheadersmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(void*, void*, int, void*, int, int32_t)) {
    KColumnHeadersModel_OnMatch((KColumnHeadersModel*)self, (intptr_t)callback);
}

QSize* k_columnheadersmodel_span(void* self, void* index) {
    return KColumnHeadersModel_Span((KColumnHeadersModel*)self, (QModelIndex*)index);
}

QSize* k_columnheadersmodel_qbase_span(void* self, void* index) {
    return KColumnHeadersModel_QBaseSpan((KColumnHeadersModel*)self, (QModelIndex*)index);
}

void k_columnheadersmodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    KColumnHeadersModel_OnSpan((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    KColumnHeadersModel_MultiData((KColumnHeadersModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_columnheadersmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    KColumnHeadersModel_QBaseMultiData((KColumnHeadersModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_columnheadersmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    KColumnHeadersModel_OnMultiData((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_submit(void* self) {
    return KColumnHeadersModel_Submit((KColumnHeadersModel*)self);
}

bool k_columnheadersmodel_qbase_submit(void* self) {
    return KColumnHeadersModel_QBaseSubmit((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_submit(void* self, bool (*callback)()) {
    KColumnHeadersModel_OnSubmit((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_revert(void* self) {
    KColumnHeadersModel_Revert((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_qbase_revert(void* self) {
    KColumnHeadersModel_QBaseRevert((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_revert(void* self, void (*callback)()) {
    KColumnHeadersModel_OnRevert((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_reset_internal_data(void* self) {
    KColumnHeadersModel_ResetInternalData((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_qbase_reset_internal_data(void* self) {
    KColumnHeadersModel_QBaseResetInternalData((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_reset_internal_data(void* self, void (*callback)()) {
    KColumnHeadersModel_OnResetInternalData((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_event(void* self, void* event) {
    return KColumnHeadersModel_Event((KColumnHeadersModel*)self, (QEvent*)event);
}

bool k_columnheadersmodel_qbase_event(void* self, void* event) {
    return KColumnHeadersModel_QBaseEvent((KColumnHeadersModel*)self, (QEvent*)event);
}

void k_columnheadersmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KColumnHeadersModel_OnEvent((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_event_filter(void* self, void* watched, void* event) {
    return KColumnHeadersModel_EventFilter((KColumnHeadersModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_columnheadersmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KColumnHeadersModel_QBaseEventFilter((KColumnHeadersModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_columnheadersmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KColumnHeadersModel_OnEventFilter((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_timer_event(void* self, void* event) {
    KColumnHeadersModel_TimerEvent((KColumnHeadersModel*)self, (QTimerEvent*)event);
}

void k_columnheadersmodel_qbase_timer_event(void* self, void* event) {
    KColumnHeadersModel_QBaseTimerEvent((KColumnHeadersModel*)self, (QTimerEvent*)event);
}

void k_columnheadersmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KColumnHeadersModel_OnTimerEvent((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_child_event(void* self, void* event) {
    KColumnHeadersModel_ChildEvent((KColumnHeadersModel*)self, (QChildEvent*)event);
}

void k_columnheadersmodel_qbase_child_event(void* self, void* event) {
    KColumnHeadersModel_QBaseChildEvent((KColumnHeadersModel*)self, (QChildEvent*)event);
}

void k_columnheadersmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KColumnHeadersModel_OnChildEvent((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_custom_event(void* self, void* event) {
    KColumnHeadersModel_CustomEvent((KColumnHeadersModel*)self, (QEvent*)event);
}

void k_columnheadersmodel_qbase_custom_event(void* self, void* event) {
    KColumnHeadersModel_QBaseCustomEvent((KColumnHeadersModel*)self, (QEvent*)event);
}

void k_columnheadersmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KColumnHeadersModel_OnCustomEvent((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_connect_notify(void* self, void* signal) {
    KColumnHeadersModel_ConnectNotify((KColumnHeadersModel*)self, (QMetaMethod*)signal);
}

void k_columnheadersmodel_qbase_connect_notify(void* self, void* signal) {
    KColumnHeadersModel_QBaseConnectNotify((KColumnHeadersModel*)self, (QMetaMethod*)signal);
}

void k_columnheadersmodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KColumnHeadersModel_OnConnectNotify((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_disconnect_notify(void* self, void* signal) {
    KColumnHeadersModel_DisconnectNotify((KColumnHeadersModel*)self, (QMetaMethod*)signal);
}

void k_columnheadersmodel_qbase_disconnect_notify(void* self, void* signal) {
    KColumnHeadersModel_QBaseDisconnectNotify((KColumnHeadersModel*)self, (QMetaMethod*)signal);
}

void k_columnheadersmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KColumnHeadersModel_OnDisconnectNotify((KColumnHeadersModel*)self, (intptr_t)callback);
}

QModelIndex* k_columnheadersmodel_create_index(void* self, int row, int column) {
    return KColumnHeadersModel_CreateIndex((KColumnHeadersModel*)self, row, column);
}

QModelIndex* k_columnheadersmodel_qbase_create_index(void* self, int row, int column) {
    return KColumnHeadersModel_QBaseCreateIndex((KColumnHeadersModel*)self, row, column);
}

void k_columnheadersmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    KColumnHeadersModel_OnCreateIndex((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KColumnHeadersModel_EncodeData((KColumnHeadersModel*)self, indexes, (QDataStream*)stream);
}

void k_columnheadersmodel_qbase_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KColumnHeadersModel_QBaseEncodeData((KColumnHeadersModel*)self, indexes, (QDataStream*)stream);
}

void k_columnheadersmodel_on_encode_data(void* self, void (*callback)(void*, libqt_list /* of QModelIndex* */, void*)) {
    KColumnHeadersModel_OnEncodeData((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KColumnHeadersModel_DecodeData((KColumnHeadersModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_columnheadersmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KColumnHeadersModel_QBaseDecodeData((KColumnHeadersModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_columnheadersmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    KColumnHeadersModel_OnDecodeData((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    KColumnHeadersModel_BeginInsertRows((KColumnHeadersModel*)self, (QModelIndex*)parent, first, last);
}

void k_columnheadersmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    KColumnHeadersModel_QBaseBeginInsertRows((KColumnHeadersModel*)self, (QModelIndex*)parent, first, last);
}

void k_columnheadersmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KColumnHeadersModel_OnBeginInsertRows((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_end_insert_rows(void* self) {
    KColumnHeadersModel_EndInsertRows((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_qbase_end_insert_rows(void* self) {
    KColumnHeadersModel_QBaseEndInsertRows((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_end_insert_rows(void* self, void (*callback)()) {
    KColumnHeadersModel_OnEndInsertRows((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    KColumnHeadersModel_BeginRemoveRows((KColumnHeadersModel*)self, (QModelIndex*)parent, first, last);
}

void k_columnheadersmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    KColumnHeadersModel_QBaseBeginRemoveRows((KColumnHeadersModel*)self, (QModelIndex*)parent, first, last);
}

void k_columnheadersmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KColumnHeadersModel_OnBeginRemoveRows((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_end_remove_rows(void* self) {
    KColumnHeadersModel_EndRemoveRows((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_qbase_end_remove_rows(void* self) {
    KColumnHeadersModel_QBaseEndRemoveRows((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_end_remove_rows(void* self, void (*callback)()) {
    KColumnHeadersModel_OnEndRemoveRows((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KColumnHeadersModel_BeginMoveRows((KColumnHeadersModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_columnheadersmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KColumnHeadersModel_QBaseBeginMoveRows((KColumnHeadersModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_columnheadersmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KColumnHeadersModel_OnBeginMoveRows((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_end_move_rows(void* self) {
    KColumnHeadersModel_EndMoveRows((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_qbase_end_move_rows(void* self) {
    KColumnHeadersModel_QBaseEndMoveRows((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_end_move_rows(void* self, void (*callback)()) {
    KColumnHeadersModel_OnEndMoveRows((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    KColumnHeadersModel_BeginInsertColumns((KColumnHeadersModel*)self, (QModelIndex*)parent, first, last);
}

void k_columnheadersmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    KColumnHeadersModel_QBaseBeginInsertColumns((KColumnHeadersModel*)self, (QModelIndex*)parent, first, last);
}

void k_columnheadersmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KColumnHeadersModel_OnBeginInsertColumns((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_end_insert_columns(void* self) {
    KColumnHeadersModel_EndInsertColumns((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_qbase_end_insert_columns(void* self) {
    KColumnHeadersModel_QBaseEndInsertColumns((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_end_insert_columns(void* self, void (*callback)()) {
    KColumnHeadersModel_OnEndInsertColumns((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    KColumnHeadersModel_BeginRemoveColumns((KColumnHeadersModel*)self, (QModelIndex*)parent, first, last);
}

void k_columnheadersmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    KColumnHeadersModel_QBaseBeginRemoveColumns((KColumnHeadersModel*)self, (QModelIndex*)parent, first, last);
}

void k_columnheadersmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KColumnHeadersModel_OnBeginRemoveColumns((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_end_remove_columns(void* self) {
    KColumnHeadersModel_EndRemoveColumns((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_qbase_end_remove_columns(void* self) {
    KColumnHeadersModel_QBaseEndRemoveColumns((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_end_remove_columns(void* self, void (*callback)()) {
    KColumnHeadersModel_OnEndRemoveColumns((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KColumnHeadersModel_BeginMoveColumns((KColumnHeadersModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_columnheadersmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KColumnHeadersModel_QBaseBeginMoveColumns((KColumnHeadersModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_columnheadersmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KColumnHeadersModel_OnBeginMoveColumns((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_end_move_columns(void* self) {
    KColumnHeadersModel_EndMoveColumns((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_qbase_end_move_columns(void* self) {
    KColumnHeadersModel_QBaseEndMoveColumns((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_end_move_columns(void* self, void (*callback)()) {
    KColumnHeadersModel_OnEndMoveColumns((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_begin_reset_model(void* self) {
    KColumnHeadersModel_BeginResetModel((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_qbase_begin_reset_model(void* self) {
    KColumnHeadersModel_QBaseBeginResetModel((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_begin_reset_model(void* self, void (*callback)()) {
    KColumnHeadersModel_OnBeginResetModel((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_end_reset_model(void* self) {
    KColumnHeadersModel_EndResetModel((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_qbase_end_reset_model(void* self) {
    KColumnHeadersModel_QBaseEndResetModel((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_end_reset_model(void* self, void (*callback)()) {
    KColumnHeadersModel_OnEndResetModel((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_change_persistent_index(void* self, void* from, void* to) {
    KColumnHeadersModel_ChangePersistentIndex((KColumnHeadersModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_columnheadersmodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    KColumnHeadersModel_QBaseChangePersistentIndex((KColumnHeadersModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_columnheadersmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    KColumnHeadersModel_OnChangePersistentIndex((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KColumnHeadersModel_ChangePersistentIndexList((KColumnHeadersModel*)self, from, to);
}

void k_columnheadersmodel_qbase_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KColumnHeadersModel_QBaseChangePersistentIndexList((KColumnHeadersModel*)self, from, to);
}

void k_columnheadersmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */)) {
    KColumnHeadersModel_OnChangePersistentIndexList((KColumnHeadersModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_columnheadersmodel_persistent_index_list(void* self) {
    libqt_list _arr = KColumnHeadersModel_PersistentIndexList((KColumnHeadersModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_columnheadersmodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = KColumnHeadersModel_QBasePersistentIndexList((KColumnHeadersModel*)self);
    return _arr;
}

void k_columnheadersmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*callback)()) {
    KColumnHeadersModel_OnPersistentIndexList((KColumnHeadersModel*)self, (intptr_t)callback);
}

QObject* k_columnheadersmodel_sender(void* self) {
    return KColumnHeadersModel_Sender((KColumnHeadersModel*)self);
}

QObject* k_columnheadersmodel_qbase_sender(void* self) {
    return KColumnHeadersModel_QBaseSender((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_sender(void* self, QObject* (*callback)()) {
    KColumnHeadersModel_OnSender((KColumnHeadersModel*)self, (intptr_t)callback);
}

int32_t k_columnheadersmodel_sender_signal_index(void* self) {
    return KColumnHeadersModel_SenderSignalIndex((KColumnHeadersModel*)self);
}

int32_t k_columnheadersmodel_qbase_sender_signal_index(void* self) {
    return KColumnHeadersModel_QBaseSenderSignalIndex((KColumnHeadersModel*)self);
}

void k_columnheadersmodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KColumnHeadersModel_OnSenderSignalIndex((KColumnHeadersModel*)self, (intptr_t)callback);
}

int32_t k_columnheadersmodel_receivers(void* self, const char* signal) {
    return KColumnHeadersModel_Receivers((KColumnHeadersModel*)self, signal);
}

int32_t k_columnheadersmodel_qbase_receivers(void* self, const char* signal) {
    return KColumnHeadersModel_QBaseReceivers((KColumnHeadersModel*)self, signal);
}

void k_columnheadersmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KColumnHeadersModel_OnReceivers((KColumnHeadersModel*)self, (intptr_t)callback);
}

bool k_columnheadersmodel_is_signal_connected(void* self, void* signal) {
    return KColumnHeadersModel_IsSignalConnected((KColumnHeadersModel*)self, (QMetaMethod*)signal);
}

bool k_columnheadersmodel_qbase_is_signal_connected(void* self, void* signal) {
    return KColumnHeadersModel_QBaseIsSignalConnected((KColumnHeadersModel*)self, (QMetaMethod*)signal);
}

void k_columnheadersmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KColumnHeadersModel_OnIsSignalConnected((KColumnHeadersModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_columnheadersmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_columnheadersmodel_delete(void* self) {
    KColumnHeadersModel_Delete((KColumnHeadersModel*)(self));
}
