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
#include "libkcheckableproxymodel.hpp"
#include "libkcheckableproxymodel.h"

KCheckableProxyModel* k_checkableproxymodel_new() {
    return KCheckableProxyModel_new();
}

KCheckableProxyModel* k_checkableproxymodel_new2(void* parent) {
    return KCheckableProxyModel_new2((QObject*)parent);
}

const QMetaObject* k_checkableproxymodel_meta_object(void* self) {
    return KCheckableProxyModel_MetaObject((KCheckableProxyModel*)self);
}

void* k_checkableproxymodel_metacast(void* self, const char* param1) {
    return KCheckableProxyModel_Metacast((KCheckableProxyModel*)self, param1);
}

int32_t k_checkableproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCheckableProxyModel_Metacall((KCheckableProxyModel*)self, param1, param2, param3);
}

void k_checkableproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KCheckableProxyModel_OnMetacall((KCheckableProxyModel*)self, (intptr_t)callback);
}

int32_t k_checkableproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCheckableProxyModel_QBaseMetacall((KCheckableProxyModel*)self, param1, param2, param3);
}

const char* k_checkableproxymodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_checkableproxymodel_set_selection_model(void* self, void* itemSelectionModel) {
    KCheckableProxyModel_SetSelectionModel((KCheckableProxyModel*)self, (QItemSelectionModel*)itemSelectionModel);
}

QItemSelectionModel* k_checkableproxymodel_selection_model(void* self) {
    return KCheckableProxyModel_SelectionModel((KCheckableProxyModel*)self);
}

int32_t k_checkableproxymodel_flags(void* self, void* index) {
    return KCheckableProxyModel_Flags((KCheckableProxyModel*)self, (QModelIndex*)index);
}

void k_checkableproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    KCheckableProxyModel_OnFlags((KCheckableProxyModel*)self, (intptr_t)callback);
}

int32_t k_checkableproxymodel_qbase_flags(void* self, void* index) {
    return KCheckableProxyModel_QBaseFlags((KCheckableProxyModel*)self, (QModelIndex*)index);
}

QVariant* k_checkableproxymodel_data(void* self, void* index, int role) {
    return KCheckableProxyModel_Data((KCheckableProxyModel*)self, (QModelIndex*)index, role);
}

void k_checkableproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    KCheckableProxyModel_OnData((KCheckableProxyModel*)self, (intptr_t)callback);
}

QVariant* k_checkableproxymodel_qbase_data(void* self, void* index, int role) {
    return KCheckableProxyModel_QBaseData((KCheckableProxyModel*)self, (QModelIndex*)index, role);
}

bool k_checkableproxymodel_set_data(void* self, void* index, void* value, int role) {
    return KCheckableProxyModel_SetData((KCheckableProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_checkableproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    KCheckableProxyModel_OnSetData((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return KCheckableProxyModel_QBaseSetData((KCheckableProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_checkableproxymodel_set_source_model(void* self, void* sourceModel) {
    KCheckableProxyModel_SetSourceModel((KCheckableProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void k_checkableproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*)) {
    KCheckableProxyModel_OnSetSourceModel((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_qbase_set_source_model(void* self, void* sourceModel) {
    KCheckableProxyModel_QBaseSetSourceModel((KCheckableProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

libqt_map /* of int to char* */ k_checkableproxymodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KCheckableProxyModel_RoleNames((KCheckableProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_checkableproxymodel_role_names");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_checkableproxymodel_role_names");
            abort();
        }
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

void k_checkableproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    KCheckableProxyModel_OnRoleNames((KCheckableProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_checkableproxymodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KCheckableProxyModel_QBaseRoleNames((KCheckableProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_checkableproxymodel_role_names");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_checkableproxymodel_role_names");
            abort();
        }
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

bool k_checkableproxymodel_select(void* self, void* selection, int32_t command) {
    return KCheckableProxyModel_Select((KCheckableProxyModel*)self, (QItemSelection*)selection, command);
}

void k_checkableproxymodel_on_select(void* self, bool (*callback)(void*, void*, int32_t)) {
    KCheckableProxyModel_OnSelect((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_qbase_select(void* self, void* selection, int32_t command) {
    return KCheckableProxyModel_QBaseSelect((KCheckableProxyModel*)self, (QItemSelection*)selection, command);
}

const char* k_checkableproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_checkableproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_checkableproxymodel_handle_source_layout_changes(void* self) {
    return QIdentityProxyModel_HandleSourceLayoutChanges((QIdentityProxyModel*)self);
}

bool k_checkableproxymodel_handle_source_data_changes(void* self) {
    return QIdentityProxyModel_HandleSourceDataChanges((QIdentityProxyModel*)self);
}

QAbstractItemModel* k_checkableproxymodel_source_model(void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

bool k_checkableproxymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool k_checkableproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_checkableproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_checkableproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_checkableproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_checkableproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_checkableproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_checkableproxymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_checkableproxymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_checkableproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_checkableproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_checkableproxymodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_checkableproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_checkableproxymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_checkableproxymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_checkableproxymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_checkableproxymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_checkableproxymodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_checkableproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_checkableproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_checkableproxymodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_checkableproxymodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_checkableproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_checkableproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_checkableproxymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_checkableproxymodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_checkableproxymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_checkableproxymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_checkableproxymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_checkableproxymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_checkableproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_checkableproxymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_checkableproxymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_checkableproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_checkableproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_checkableproxymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_checkableproxymodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_checkableproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_checkableproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_checkableproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_checkableproxymodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_checkableproxymodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_checkableproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_checkableproxymodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_checkableproxymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_checkableproxymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_checkableproxymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_checkableproxymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_checkableproxymodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_checkableproxymodel_dynamic_property_names");
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

QBindingStorage* k_checkableproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_checkableproxymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_checkableproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_checkableproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_checkableproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_checkableproxymodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_checkableproxymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_checkableproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_checkableproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_checkableproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_checkableproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t k_checkableproxymodel_column_count(void* self, void* parent) {
    return KCheckableProxyModel_ColumnCount((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_checkableproxymodel_qbase_column_count(void* self, void* parent) {
    return KCheckableProxyModel_QBaseColumnCount((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    KCheckableProxyModel_OnColumnCount((KCheckableProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_checkableproxymodel_index(void* self, int row, int column, void* parent) {
    return KCheckableProxyModel_Index((KCheckableProxyModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_checkableproxymodel_qbase_index(void* self, int row, int column, void* parent) {
    return KCheckableProxyModel_QBaseIndex((KCheckableProxyModel*)self, row, column, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KCheckableProxyModel_OnIndex((KCheckableProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_checkableproxymodel_map_from_source(void* self, void* sourceIndex) {
    return KCheckableProxyModel_MapFromSource((KCheckableProxyModel*)self, (QModelIndex*)sourceIndex);
}

QModelIndex* k_checkableproxymodel_qbase_map_from_source(void* self, void* sourceIndex) {
    return KCheckableProxyModel_QBaseMapFromSource((KCheckableProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_checkableproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    KCheckableProxyModel_OnMapFromSource((KCheckableProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_checkableproxymodel_map_to_source(void* self, void* proxyIndex) {
    return KCheckableProxyModel_MapToSource((KCheckableProxyModel*)self, (QModelIndex*)proxyIndex);
}

QModelIndex* k_checkableproxymodel_qbase_map_to_source(void* self, void* proxyIndex) {
    return KCheckableProxyModel_QBaseMapToSource((KCheckableProxyModel*)self, (QModelIndex*)proxyIndex);
}

void k_checkableproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    KCheckableProxyModel_OnMapToSource((KCheckableProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_checkableproxymodel_parent(void* self, void* child) {
    return KCheckableProxyModel_Parent((KCheckableProxyModel*)self, (QModelIndex*)child);
}

QModelIndex* k_checkableproxymodel_qbase_parent(void* self, void* child) {
    return KCheckableProxyModel_QBaseParent((KCheckableProxyModel*)self, (QModelIndex*)child);
}

void k_checkableproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    KCheckableProxyModel_OnParent((KCheckableProxyModel*)self, (intptr_t)callback);
}

int32_t k_checkableproxymodel_row_count(void* self, void* parent) {
    return KCheckableProxyModel_RowCount((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_checkableproxymodel_qbase_row_count(void* self, void* parent) {
    return KCheckableProxyModel_QBaseRowCount((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    KCheckableProxyModel_OnRowCount((KCheckableProxyModel*)self, (intptr_t)callback);
}

QVariant* k_checkableproxymodel_header_data(void* self, int section, int32_t orientation, int role) {
    return KCheckableProxyModel_HeaderData((KCheckableProxyModel*)self, section, orientation, role);
}

QVariant* k_checkableproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return KCheckableProxyModel_QBaseHeaderData((KCheckableProxyModel*)self, section, orientation, role);
}

void k_checkableproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    KCheckableProxyModel_OnHeaderData((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KCheckableProxyModel_DropMimeData((KCheckableProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_checkableproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KCheckableProxyModel_QBaseDropMimeData((KCheckableProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KCheckableProxyModel_OnDropMimeData((KCheckableProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_checkableproxymodel_sibling(void* self, int row, int column, void* idx) {
    return KCheckableProxyModel_Sibling((KCheckableProxyModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_checkableproxymodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return KCheckableProxyModel_QBaseSibling((KCheckableProxyModel*)self, row, column, (QModelIndex*)idx);
}

void k_checkableproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KCheckableProxyModel_OnSibling((KCheckableProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_checkableproxymodel_map_selection_from_source(void* self, void* selection) {
    return KCheckableProxyModel_MapSelectionFromSource((KCheckableProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* k_checkableproxymodel_qbase_map_selection_from_source(void* self, void* selection) {
    return KCheckableProxyModel_QBaseMapSelectionFromSource((KCheckableProxyModel*)self, (QItemSelection*)selection);
}

void k_checkableproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    KCheckableProxyModel_OnMapSelectionFromSource((KCheckableProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_checkableproxymodel_map_selection_to_source(void* self, void* selection) {
    return KCheckableProxyModel_MapSelectionToSource((KCheckableProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* k_checkableproxymodel_qbase_map_selection_to_source(void* self, void* selection) {
    return KCheckableProxyModel_QBaseMapSelectionToSource((KCheckableProxyModel*)self, (QItemSelection*)selection);
}

void k_checkableproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    KCheckableProxyModel_OnMapSelectionToSource((KCheckableProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_checkableproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KCheckableProxyModel_Match((KCheckableProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_checkableproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KCheckableProxyModel_QBaseMatch((KCheckableProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_checkableproxymodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    KCheckableProxyModel_OnMatch((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_insert_columns(void* self, int column, int count, void* parent) {
    return KCheckableProxyModel_InsertColumns((KCheckableProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_checkableproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return KCheckableProxyModel_QBaseInsertColumns((KCheckableProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KCheckableProxyModel_OnInsertColumns((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_insert_rows(void* self, int row, int count, void* parent) {
    return KCheckableProxyModel_InsertRows((KCheckableProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_checkableproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return KCheckableProxyModel_QBaseInsertRows((KCheckableProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KCheckableProxyModel_OnInsertRows((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_remove_columns(void* self, int column, int count, void* parent) {
    return KCheckableProxyModel_RemoveColumns((KCheckableProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_checkableproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return KCheckableProxyModel_QBaseRemoveColumns((KCheckableProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KCheckableProxyModel_OnRemoveColumns((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_remove_rows(void* self, int row, int count, void* parent) {
    return KCheckableProxyModel_RemoveRows((KCheckableProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_checkableproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return KCheckableProxyModel_QBaseRemoveRows((KCheckableProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KCheckableProxyModel_OnRemoveRows((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KCheckableProxyModel_MoveRows((KCheckableProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_checkableproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KCheckableProxyModel_QBaseMoveRows((KCheckableProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_checkableproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KCheckableProxyModel_OnMoveRows((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KCheckableProxyModel_MoveColumns((KCheckableProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_checkableproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KCheckableProxyModel_QBaseMoveColumns((KCheckableProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_checkableproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KCheckableProxyModel_OnMoveColumns((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_submit(void* self) {
    return KCheckableProxyModel_Submit((KCheckableProxyModel*)self);
}

bool k_checkableproxymodel_qbase_submit(void* self) {
    return KCheckableProxyModel_QBaseSubmit((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_submit(void* self, bool (*callback)()) {
    KCheckableProxyModel_OnSubmit((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_revert(void* self) {
    KCheckableProxyModel_Revert((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_qbase_revert(void* self) {
    KCheckableProxyModel_QBaseRevert((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_revert(void* self, void (*callback)()) {
    KCheckableProxyModel_OnRevert((KCheckableProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_checkableproxymodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KCheckableProxyModel_ItemData((KCheckableProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_checkableproxymodel_qbase_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KCheckableProxyModel_QBaseItemData((KCheckableProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_checkableproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    KCheckableProxyModel_OnItemData((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_checkableproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_checkableproxymodel_set_item_data\n");
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
    bool _out = KCheckableProxyModel_SetItemData((KCheckableProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool k_checkableproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_checkableproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_checkableproxymodel_set_item_data\n");
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
    bool _out = KCheckableProxyModel_QBaseSetItemData((KCheckableProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_checkableproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    KCheckableProxyModel_OnSetItemData((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KCheckableProxyModel_SetHeaderData((KCheckableProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_checkableproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KCheckableProxyModel_QBaseSetHeaderData((KCheckableProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void k_checkableproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    KCheckableProxyModel_OnSetHeaderData((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_clear_item_data(void* self, void* index) {
    return KCheckableProxyModel_ClearItemData((KCheckableProxyModel*)self, (QModelIndex*)index);
}

bool k_checkableproxymodel_qbase_clear_item_data(void* self, void* index) {
    return KCheckableProxyModel_QBaseClearItemData((KCheckableProxyModel*)self, (QModelIndex*)index);
}

void k_checkableproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    KCheckableProxyModel_OnClearItemData((KCheckableProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_checkableproxymodel_buddy(void* self, void* index) {
    return KCheckableProxyModel_Buddy((KCheckableProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* k_checkableproxymodel_qbase_buddy(void* self, void* index) {
    return KCheckableProxyModel_QBaseBuddy((KCheckableProxyModel*)self, (QModelIndex*)index);
}

void k_checkableproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    KCheckableProxyModel_OnBuddy((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_can_fetch_more(void* self, void* parent) {
    return KCheckableProxyModel_CanFetchMore((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

bool k_checkableproxymodel_qbase_can_fetch_more(void* self, void* parent) {
    return KCheckableProxyModel_QBaseCanFetchMore((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    KCheckableProxyModel_OnCanFetchMore((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_fetch_more(void* self, void* parent) {
    KCheckableProxyModel_FetchMore((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

void k_checkableproxymodel_qbase_fetch_more(void* self, void* parent) {
    KCheckableProxyModel_QBaseFetchMore((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    KCheckableProxyModel_OnFetchMore((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_sort(void* self, int column, int32_t order) {
    KCheckableProxyModel_Sort((KCheckableProxyModel*)self, column, order);
}

void k_checkableproxymodel_qbase_sort(void* self, int column, int32_t order) {
    KCheckableProxyModel_QBaseSort((KCheckableProxyModel*)self, column, order);
}

void k_checkableproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KCheckableProxyModel_OnSort((KCheckableProxyModel*)self, (intptr_t)callback);
}

QSize* k_checkableproxymodel_span(void* self, void* index) {
    return KCheckableProxyModel_Span((KCheckableProxyModel*)self, (QModelIndex*)index);
}

QSize* k_checkableproxymodel_qbase_span(void* self, void* index) {
    return KCheckableProxyModel_QBaseSpan((KCheckableProxyModel*)self, (QModelIndex*)index);
}

void k_checkableproxymodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    KCheckableProxyModel_OnSpan((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_has_children(void* self, void* parent) {
    return KCheckableProxyModel_HasChildren((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

bool k_checkableproxymodel_qbase_has_children(void* self, void* parent) {
    return KCheckableProxyModel_QBaseHasChildren((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    KCheckableProxyModel_OnHasChildren((KCheckableProxyModel*)self, (intptr_t)callback);
}

QMimeData* k_checkableproxymodel_mime_data(void* self, libqt_list indexes) {
    return KCheckableProxyModel_MimeData((KCheckableProxyModel*)self, indexes);
}

QMimeData* k_checkableproxymodel_qbase_mime_data(void* self, libqt_list indexes) {
    return KCheckableProxyModel_QBaseMimeData((KCheckableProxyModel*)self, indexes);
}

void k_checkableproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    KCheckableProxyModel_OnMimeData((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KCheckableProxyModel_CanDropMimeData((KCheckableProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_checkableproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KCheckableProxyModel_QBaseCanDropMimeData((KCheckableProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KCheckableProxyModel_OnCanDropMimeData((KCheckableProxyModel*)self, (intptr_t)callback);
}

const char** k_checkableproxymodel_mime_types(void* self) {
    libqt_list _arr = KCheckableProxyModel_MimeTypes((KCheckableProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_checkableproxymodel_mime_types");
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

const char** k_checkableproxymodel_qbase_mime_types(void* self) {
    libqt_list _arr = KCheckableProxyModel_QBaseMimeTypes((KCheckableProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_checkableproxymodel_mime_types");
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

void k_checkableproxymodel_on_mime_types(void* self, const char** (*callback)()) {
    KCheckableProxyModel_OnMimeTypes((KCheckableProxyModel*)self, (intptr_t)callback);
}

int32_t k_checkableproxymodel_supported_drag_actions(void* self) {
    return KCheckableProxyModel_SupportedDragActions((KCheckableProxyModel*)self);
}

int32_t k_checkableproxymodel_qbase_supported_drag_actions(void* self) {
    return KCheckableProxyModel_QBaseSupportedDragActions((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    KCheckableProxyModel_OnSupportedDragActions((KCheckableProxyModel*)self, (intptr_t)callback);
}

int32_t k_checkableproxymodel_supported_drop_actions(void* self) {
    return KCheckableProxyModel_SupportedDropActions((KCheckableProxyModel*)self);
}

int32_t k_checkableproxymodel_qbase_supported_drop_actions(void* self) {
    return KCheckableProxyModel_QBaseSupportedDropActions((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KCheckableProxyModel_OnSupportedDropActions((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    KCheckableProxyModel_MultiData((KCheckableProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_checkableproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    KCheckableProxyModel_QBaseMultiData((KCheckableProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_checkableproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    KCheckableProxyModel_OnMultiData((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_reset_internal_data(void* self) {
    KCheckableProxyModel_ResetInternalData((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_qbase_reset_internal_data(void* self) {
    KCheckableProxyModel_QBaseResetInternalData((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_reset_internal_data(void* self, void (*callback)()) {
    KCheckableProxyModel_OnResetInternalData((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_event(void* self, void* event) {
    return KCheckableProxyModel_Event((KCheckableProxyModel*)self, (QEvent*)event);
}

bool k_checkableproxymodel_qbase_event(void* self, void* event) {
    return KCheckableProxyModel_QBaseEvent((KCheckableProxyModel*)self, (QEvent*)event);
}

void k_checkableproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KCheckableProxyModel_OnEvent((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_event_filter(void* self, void* watched, void* event) {
    return KCheckableProxyModel_EventFilter((KCheckableProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_checkableproxymodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KCheckableProxyModel_QBaseEventFilter((KCheckableProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_checkableproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KCheckableProxyModel_OnEventFilter((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_timer_event(void* self, void* event) {
    KCheckableProxyModel_TimerEvent((KCheckableProxyModel*)self, (QTimerEvent*)event);
}

void k_checkableproxymodel_qbase_timer_event(void* self, void* event) {
    KCheckableProxyModel_QBaseTimerEvent((KCheckableProxyModel*)self, (QTimerEvent*)event);
}

void k_checkableproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KCheckableProxyModel_OnTimerEvent((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_child_event(void* self, void* event) {
    KCheckableProxyModel_ChildEvent((KCheckableProxyModel*)self, (QChildEvent*)event);
}

void k_checkableproxymodel_qbase_child_event(void* self, void* event) {
    KCheckableProxyModel_QBaseChildEvent((KCheckableProxyModel*)self, (QChildEvent*)event);
}

void k_checkableproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KCheckableProxyModel_OnChildEvent((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_custom_event(void* self, void* event) {
    KCheckableProxyModel_CustomEvent((KCheckableProxyModel*)self, (QEvent*)event);
}

void k_checkableproxymodel_qbase_custom_event(void* self, void* event) {
    KCheckableProxyModel_QBaseCustomEvent((KCheckableProxyModel*)self, (QEvent*)event);
}

void k_checkableproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KCheckableProxyModel_OnCustomEvent((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_connect_notify(void* self, void* signal) {
    KCheckableProxyModel_ConnectNotify((KCheckableProxyModel*)self, (QMetaMethod*)signal);
}

void k_checkableproxymodel_qbase_connect_notify(void* self, void* signal) {
    KCheckableProxyModel_QBaseConnectNotify((KCheckableProxyModel*)self, (QMetaMethod*)signal);
}

void k_checkableproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KCheckableProxyModel_OnConnectNotify((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_disconnect_notify(void* self, void* signal) {
    KCheckableProxyModel_DisconnectNotify((KCheckableProxyModel*)self, (QMetaMethod*)signal);
}

void k_checkableproxymodel_qbase_disconnect_notify(void* self, void* signal) {
    KCheckableProxyModel_QBaseDisconnectNotify((KCheckableProxyModel*)self, (QMetaMethod*)signal);
}

void k_checkableproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KCheckableProxyModel_OnDisconnectNotify((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_set_handle_source_layout_changes(void* self, bool handleSourceLayoutChanges) {
    KCheckableProxyModel_SetHandleSourceLayoutChanges((KCheckableProxyModel*)self, handleSourceLayoutChanges);
}

void k_checkableproxymodel_qbase_set_handle_source_layout_changes(void* self, bool handleSourceLayoutChanges) {
    KCheckableProxyModel_QBaseSetHandleSourceLayoutChanges((KCheckableProxyModel*)self, handleSourceLayoutChanges);
}

void k_checkableproxymodel_on_set_handle_source_layout_changes(void* self, void (*callback)(void*, bool)) {
    KCheckableProxyModel_OnSetHandleSourceLayoutChanges((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_set_handle_source_data_changes(void* self, bool handleSourceDataChanges) {
    KCheckableProxyModel_SetHandleSourceDataChanges((KCheckableProxyModel*)self, handleSourceDataChanges);
}

void k_checkableproxymodel_qbase_set_handle_source_data_changes(void* self, bool handleSourceDataChanges) {
    KCheckableProxyModel_QBaseSetHandleSourceDataChanges((KCheckableProxyModel*)self, handleSourceDataChanges);
}

void k_checkableproxymodel_on_set_handle_source_data_changes(void* self, void (*callback)(void*, bool)) {
    KCheckableProxyModel_OnSetHandleSourceDataChanges((KCheckableProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_checkableproxymodel_create_source_index(void* self, int row, int col, void* internalPtr) {
    return KCheckableProxyModel_CreateSourceIndex((KCheckableProxyModel*)self, row, col, internalPtr);
}

QModelIndex* k_checkableproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr) {
    return KCheckableProxyModel_QBaseCreateSourceIndex((KCheckableProxyModel*)self, row, col, internalPtr);
}

void k_checkableproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KCheckableProxyModel_OnCreateSourceIndex((KCheckableProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_checkableproxymodel_create_index(void* self, int row, int column) {
    return KCheckableProxyModel_CreateIndex((KCheckableProxyModel*)self, row, column);
}

QModelIndex* k_checkableproxymodel_qbase_create_index(void* self, int row, int column) {
    return KCheckableProxyModel_QBaseCreateIndex((KCheckableProxyModel*)self, row, column);
}

void k_checkableproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    KCheckableProxyModel_OnCreateIndex((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_encode_data(void* self, libqt_list indexes, void* stream) {
    KCheckableProxyModel_EncodeData((KCheckableProxyModel*)self, indexes, (QDataStream*)stream);
}

void k_checkableproxymodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    KCheckableProxyModel_QBaseEncodeData((KCheckableProxyModel*)self, indexes, (QDataStream*)stream);
}

void k_checkableproxymodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    KCheckableProxyModel_OnEncodeData((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KCheckableProxyModel_DecodeData((KCheckableProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_checkableproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KCheckableProxyModel_QBaseDecodeData((KCheckableProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_checkableproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    KCheckableProxyModel_OnDecodeData((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    KCheckableProxyModel_BeginInsertRows((KCheckableProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_checkableproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    KCheckableProxyModel_QBaseBeginInsertRows((KCheckableProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_checkableproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KCheckableProxyModel_OnBeginInsertRows((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_end_insert_rows(void* self) {
    KCheckableProxyModel_EndInsertRows((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_qbase_end_insert_rows(void* self) {
    KCheckableProxyModel_QBaseEndInsertRows((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_end_insert_rows(void* self, void (*callback)()) {
    KCheckableProxyModel_OnEndInsertRows((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    KCheckableProxyModel_BeginRemoveRows((KCheckableProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_checkableproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    KCheckableProxyModel_QBaseBeginRemoveRows((KCheckableProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_checkableproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KCheckableProxyModel_OnBeginRemoveRows((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_end_remove_rows(void* self) {
    KCheckableProxyModel_EndRemoveRows((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_qbase_end_remove_rows(void* self) {
    KCheckableProxyModel_QBaseEndRemoveRows((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_end_remove_rows(void* self, void (*callback)()) {
    KCheckableProxyModel_OnEndRemoveRows((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KCheckableProxyModel_BeginMoveRows((KCheckableProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_checkableproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KCheckableProxyModel_QBaseBeginMoveRows((KCheckableProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_checkableproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KCheckableProxyModel_OnBeginMoveRows((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_end_move_rows(void* self) {
    KCheckableProxyModel_EndMoveRows((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_qbase_end_move_rows(void* self) {
    KCheckableProxyModel_QBaseEndMoveRows((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_end_move_rows(void* self, void (*callback)()) {
    KCheckableProxyModel_OnEndMoveRows((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    KCheckableProxyModel_BeginInsertColumns((KCheckableProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_checkableproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    KCheckableProxyModel_QBaseBeginInsertColumns((KCheckableProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_checkableproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KCheckableProxyModel_OnBeginInsertColumns((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_end_insert_columns(void* self) {
    KCheckableProxyModel_EndInsertColumns((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_qbase_end_insert_columns(void* self) {
    KCheckableProxyModel_QBaseEndInsertColumns((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_end_insert_columns(void* self, void (*callback)()) {
    KCheckableProxyModel_OnEndInsertColumns((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    KCheckableProxyModel_BeginRemoveColumns((KCheckableProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_checkableproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    KCheckableProxyModel_QBaseBeginRemoveColumns((KCheckableProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_checkableproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KCheckableProxyModel_OnBeginRemoveColumns((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_end_remove_columns(void* self) {
    KCheckableProxyModel_EndRemoveColumns((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_qbase_end_remove_columns(void* self) {
    KCheckableProxyModel_QBaseEndRemoveColumns((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_end_remove_columns(void* self, void (*callback)()) {
    KCheckableProxyModel_OnEndRemoveColumns((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KCheckableProxyModel_BeginMoveColumns((KCheckableProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_checkableproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KCheckableProxyModel_QBaseBeginMoveColumns((KCheckableProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_checkableproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KCheckableProxyModel_OnBeginMoveColumns((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_end_move_columns(void* self) {
    KCheckableProxyModel_EndMoveColumns((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_qbase_end_move_columns(void* self) {
    KCheckableProxyModel_QBaseEndMoveColumns((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_end_move_columns(void* self, void (*callback)()) {
    KCheckableProxyModel_OnEndMoveColumns((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_begin_reset_model(void* self) {
    KCheckableProxyModel_BeginResetModel((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_qbase_begin_reset_model(void* self) {
    KCheckableProxyModel_QBaseBeginResetModel((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_begin_reset_model(void* self, void (*callback)()) {
    KCheckableProxyModel_OnBeginResetModel((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_end_reset_model(void* self) {
    KCheckableProxyModel_EndResetModel((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_qbase_end_reset_model(void* self) {
    KCheckableProxyModel_QBaseEndResetModel((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_end_reset_model(void* self, void (*callback)()) {
    KCheckableProxyModel_OnEndResetModel((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_change_persistent_index(void* self, void* from, void* to) {
    KCheckableProxyModel_ChangePersistentIndex((KCheckableProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_checkableproxymodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    KCheckableProxyModel_QBaseChangePersistentIndex((KCheckableProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_checkableproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    KCheckableProxyModel_OnChangePersistentIndex((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KCheckableProxyModel_ChangePersistentIndexList((KCheckableProxyModel*)self, from, to);
}

void k_checkableproxymodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KCheckableProxyModel_QBaseChangePersistentIndexList((KCheckableProxyModel*)self, from, to);
}

void k_checkableproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    KCheckableProxyModel_OnChangePersistentIndexList((KCheckableProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_checkableproxymodel_persistent_index_list(void* self) {
    libqt_list _arr = KCheckableProxyModel_PersistentIndexList((KCheckableProxyModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_checkableproxymodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = KCheckableProxyModel_QBasePersistentIndexList((KCheckableProxyModel*)self);
    return _arr;
}

void k_checkableproxymodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    KCheckableProxyModel_OnPersistentIndexList((KCheckableProxyModel*)self, (intptr_t)callback);
}

QObject* k_checkableproxymodel_sender(void* self) {
    return KCheckableProxyModel_Sender((KCheckableProxyModel*)self);
}

QObject* k_checkableproxymodel_qbase_sender(void* self) {
    return KCheckableProxyModel_QBaseSender((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_sender(void* self, QObject* (*callback)()) {
    KCheckableProxyModel_OnSender((KCheckableProxyModel*)self, (intptr_t)callback);
}

int32_t k_checkableproxymodel_sender_signal_index(void* self) {
    return KCheckableProxyModel_SenderSignalIndex((KCheckableProxyModel*)self);
}

int32_t k_checkableproxymodel_qbase_sender_signal_index(void* self) {
    return KCheckableProxyModel_QBaseSenderSignalIndex((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KCheckableProxyModel_OnSenderSignalIndex((KCheckableProxyModel*)self, (intptr_t)callback);
}

int32_t k_checkableproxymodel_receivers(void* self, const char* signal) {
    return KCheckableProxyModel_Receivers((KCheckableProxyModel*)self, signal);
}

int32_t k_checkableproxymodel_qbase_receivers(void* self, const char* signal) {
    return KCheckableProxyModel_QBaseReceivers((KCheckableProxyModel*)self, signal);
}

void k_checkableproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KCheckableProxyModel_OnReceivers((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_is_signal_connected(void* self, void* signal) {
    return KCheckableProxyModel_IsSignalConnected((KCheckableProxyModel*)self, (QMetaMethod*)signal);
}

bool k_checkableproxymodel_qbase_is_signal_connected(void* self, void* signal) {
    return KCheckableProxyModel_QBaseIsSignalConnected((KCheckableProxyModel*)self, (QMetaMethod*)signal);
}

void k_checkableproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KCheckableProxyModel_OnIsSignalConnected((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_Connect_SourceModelChanged((QAbstractProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_checkableproxymodel_delete(void* self) {
    KCheckableProxyModel_Delete((KCheckableProxyModel*)(self));
}
