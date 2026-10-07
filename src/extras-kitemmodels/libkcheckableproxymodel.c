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
    return KCheckableProxyModel_New();
}

KCheckableProxyModel* k_checkableproxymodel_new2(void* parent) {
    return KCheckableProxyModel_New2((QObject*)parent);
}

const QMetaObject* k_checkableproxymodel_meta_object(const void* self) {
    return KCheckableProxyModel_MetaObject((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    KCheckableProxyModel_OnMetaObject((KCheckableProxyModel*)self, (intptr_t)callback);
}

const QMetaObject* k_checkableproxymodel_super_meta_object(const void* self) {
    return KCheckableProxyModel_SuperMetaObject((KCheckableProxyModel*)self);
}

void* k_checkableproxymodel_metacast(void* self, const char* param1) {
    return KCheckableProxyModel_Metacast((KCheckableProxyModel*)self, param1);
}

void k_checkableproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KCheckableProxyModel_OnMetacast((KCheckableProxyModel*)self, (intptr_t)callback);
}

void* k_checkableproxymodel_super_metacast(void* self, const char* param1) {
    return KCheckableProxyModel_SuperMetacast((KCheckableProxyModel*)self, param1);
}

int32_t k_checkableproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCheckableProxyModel_Metacall((KCheckableProxyModel*)self, param1, param2, param3);
}

void k_checkableproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KCheckableProxyModel_OnMetacall((KCheckableProxyModel*)self, (intptr_t)callback);
}

int32_t k_checkableproxymodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCheckableProxyModel_SuperMetacall((KCheckableProxyModel*)self, param1, param2, param3);
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

QItemSelectionModel* k_checkableproxymodel_selection_model(const void* self) {
    return KCheckableProxyModel_SelectionModel((KCheckableProxyModel*)self);
}

int32_t k_checkableproxymodel_flags(const void* self, const void* index) {
    return KCheckableProxyModel_Flags((KCheckableProxyModel*)self, (QModelIndex*)index);
}

void k_checkableproxymodel_on_flags(void* self, int32_t (*callback)(const void*, const void*)) {
    KCheckableProxyModel_OnFlags((KCheckableProxyModel*)self, (intptr_t)callback);
}

int32_t k_checkableproxymodel_super_flags(const void* self, const void* index) {
    return KCheckableProxyModel_SuperFlags((KCheckableProxyModel*)self, (QModelIndex*)index);
}

QVariant* k_checkableproxymodel_data(const void* self, const void* index, int role) {
    return KCheckableProxyModel_Data((KCheckableProxyModel*)self, (QModelIndex*)index, role);
}

void k_checkableproxymodel_on_data(void* self, QVariant* (*callback)(const void*, const void*, int)) {
    KCheckableProxyModel_OnData((KCheckableProxyModel*)self, (intptr_t)callback);
}

QVariant* k_checkableproxymodel_super_data(const void* self, const void* index, int role) {
    return KCheckableProxyModel_SuperData((KCheckableProxyModel*)self, (QModelIndex*)index, role);
}

bool k_checkableproxymodel_set_data(void* self, const void* index, const void* value, int role) {
    return KCheckableProxyModel_SetData((KCheckableProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_checkableproxymodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int)) {
    KCheckableProxyModel_OnSetData((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_super_set_data(void* self, const void* index, const void* value, int role) {
    return KCheckableProxyModel_SuperSetData((KCheckableProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_checkableproxymodel_set_source_model(void* self, void* sourceModel) {
    KCheckableProxyModel_SetSourceModel((KCheckableProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void k_checkableproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*)) {
    KCheckableProxyModel_OnSetSourceModel((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_super_set_source_model(void* self, void* sourceModel) {
    KCheckableProxyModel_SuperSetSourceModel((KCheckableProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

libqt_map /* of int to const char* */ k_checkableproxymodel_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KCheckableProxyModel_RoleNames((KCheckableProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_checkableproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_checkableproxymodel_role_names\n");
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

void k_checkableproxymodel_on_role_names(void* self, libqt_map /* of int to const char* */ (*callback)(const void*)) {
    KCheckableProxyModel_OnRoleNames((KCheckableProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to const char* */ k_checkableproxymodel_super_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KCheckableProxyModel_SuperRoleNames((KCheckableProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_checkableproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_checkableproxymodel_role_names\n");
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

bool k_checkableproxymodel_select(void* self, const void* selection, int32_t command) {
    return KCheckableProxyModel_Select((KCheckableProxyModel*)self, (QItemSelection*)selection, command);
}

void k_checkableproxymodel_on_select(void* self, bool (*callback)(void*, const void*, int32_t)) {
    KCheckableProxyModel_OnSelect((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_super_select(void* self, const void* selection, int32_t command) {
    return KCheckableProxyModel_SuperSelect((KCheckableProxyModel*)self, (QItemSelection*)selection, command);
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

bool k_checkableproxymodel_handle_source_layout_changes(const void* self) {
    return QIdentityProxyModel_HandleSourceLayoutChanges((QIdentityProxyModel*)self);
}

bool k_checkableproxymodel_handle_source_data_changes(const void* self) {
    return QIdentityProxyModel_HandleSourceDataChanges((QIdentityProxyModel*)self);
}

QAbstractItemModel* k_checkableproxymodel_source_model(const void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

bool k_checkableproxymodel_has_index(const void* self, int row, int column) {
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

bool k_checkableproxymodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_checkableproxymodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_checkableproxymodel_check_index(const void* self, const void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_checkableproxymodel_data_changed(void* self, const void* topLeft, const void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_checkableproxymodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*)) {
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

bool k_checkableproxymodel_has_index3(const void* self, int row, int column, const void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_checkableproxymodel_insert_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_checkableproxymodel_insert_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_checkableproxymodel_remove_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_checkableproxymodel_remove_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_checkableproxymodel_check_index2(const void* self, const void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_checkableproxymodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_checkableproxymodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_checkableproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_checkableproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_checkableproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_checkableproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_checkableproxymodel_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_checkableproxymodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_checkableproxymodel_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_checkableproxymodel_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_checkableproxymodel_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_checkableproxymodel_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_checkableproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_checkableproxymodel_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_checkableproxymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_checkableproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_checkableproxymodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_checkableproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_checkableproxymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_checkableproxymodel_children(const void* self) {
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

QMetaObject__Connection* k_checkableproxymodel_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_checkableproxymodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_checkableproxymodel_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_checkableproxymodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_checkableproxymodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_checkableproxymodel_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_checkableproxymodel_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_checkableproxymodel_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_checkableproxymodel_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_checkableproxymodel_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_checkableproxymodel_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_checkableproxymodel_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_checkableproxymodel_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_checkableproxymodel_dynamic_property_names\n");
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

QBindingStorage* k_checkableproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_checkableproxymodel_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_checkableproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_checkableproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_checkableproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_checkableproxymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_checkableproxymodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_checkableproxymodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_checkableproxymodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_checkableproxymodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_checkableproxymodel_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_checkableproxymodel_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_checkableproxymodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_checkableproxymodel_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_checkableproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_checkableproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t k_checkableproxymodel_column_count(const void* self, const void* parent) {
    return KCheckableProxyModel_ColumnCount((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_checkableproxymodel_super_column_count(const void* self, const void* parent) {
    return KCheckableProxyModel_SuperColumnCount((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_column_count(void* self, int32_t (*callback)(const void*, const void*)) {
    KCheckableProxyModel_OnColumnCount((KCheckableProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_checkableproxymodel_index(const void* self, int row, int column, const void* parent) {
    return KCheckableProxyModel_Index((KCheckableProxyModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_checkableproxymodel_super_index(const void* self, int row, int column, const void* parent) {
    return KCheckableProxyModel_SuperIndex((KCheckableProxyModel*)self, row, column, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_index(void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    KCheckableProxyModel_OnIndex((KCheckableProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_checkableproxymodel_map_from_source(const void* self, const void* sourceIndex) {
    return KCheckableProxyModel_MapFromSource((KCheckableProxyModel*)self, (QModelIndex*)sourceIndex);
}

QModelIndex* k_checkableproxymodel_super_map_from_source(const void* self, const void* sourceIndex) {
    return KCheckableProxyModel_SuperMapFromSource((KCheckableProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_checkableproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KCheckableProxyModel_OnMapFromSource((KCheckableProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_checkableproxymodel_map_to_source(const void* self, const void* proxyIndex) {
    return KCheckableProxyModel_MapToSource((KCheckableProxyModel*)self, (QModelIndex*)proxyIndex);
}

QModelIndex* k_checkableproxymodel_super_map_to_source(const void* self, const void* proxyIndex) {
    return KCheckableProxyModel_SuperMapToSource((KCheckableProxyModel*)self, (QModelIndex*)proxyIndex);
}

void k_checkableproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KCheckableProxyModel_OnMapToSource((KCheckableProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_checkableproxymodel_parent(const void* self, const void* child) {
    return KCheckableProxyModel_Parent((KCheckableProxyModel*)self, (QModelIndex*)child);
}

QModelIndex* k_checkableproxymodel_super_parent(const void* self, const void* child) {
    return KCheckableProxyModel_SuperParent((KCheckableProxyModel*)self, (QModelIndex*)child);
}

void k_checkableproxymodel_on_parent(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KCheckableProxyModel_OnParent((KCheckableProxyModel*)self, (intptr_t)callback);
}

int32_t k_checkableproxymodel_row_count(const void* self, const void* parent) {
    return KCheckableProxyModel_RowCount((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_checkableproxymodel_super_row_count(const void* self, const void* parent) {
    return KCheckableProxyModel_SuperRowCount((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_row_count(void* self, int32_t (*callback)(const void*, const void*)) {
    KCheckableProxyModel_OnRowCount((KCheckableProxyModel*)self, (intptr_t)callback);
}

QVariant* k_checkableproxymodel_header_data(const void* self, int section, int32_t orientation, int role) {
    return KCheckableProxyModel_HeaderData((KCheckableProxyModel*)self, section, orientation, role);
}

QVariant* k_checkableproxymodel_super_header_data(const void* self, int section, int32_t orientation, int role) {
    return KCheckableProxyModel_SuperHeaderData((KCheckableProxyModel*)self, section, orientation, role);
}

void k_checkableproxymodel_on_header_data(void* self, QVariant* (*callback)(const void*, int, int32_t, int)) {
    KCheckableProxyModel_OnHeaderData((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KCheckableProxyModel_DropMimeData((KCheckableProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_checkableproxymodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KCheckableProxyModel_SuperDropMimeData((KCheckableProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*)) {
    KCheckableProxyModel_OnDropMimeData((KCheckableProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_checkableproxymodel_sibling(const void* self, int row, int column, const void* idx) {
    return KCheckableProxyModel_Sibling((KCheckableProxyModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_checkableproxymodel_super_sibling(const void* self, int row, int column, const void* idx) {
    return KCheckableProxyModel_SuperSibling((KCheckableProxyModel*)self, row, column, (QModelIndex*)idx);
}

void k_checkableproxymodel_on_sibling(void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    KCheckableProxyModel_OnSibling((KCheckableProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_checkableproxymodel_map_selection_from_source(const void* self, const void* selection) {
    return KCheckableProxyModel_MapSelectionFromSource((KCheckableProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* k_checkableproxymodel_super_map_selection_from_source(const void* self, const void* selection) {
    return KCheckableProxyModel_SuperMapSelectionFromSource((KCheckableProxyModel*)self, (QItemSelection*)selection);
}

void k_checkableproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(const void*, const void*)) {
    KCheckableProxyModel_OnMapSelectionFromSource((KCheckableProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_checkableproxymodel_map_selection_to_source(const void* self, const void* selection) {
    return KCheckableProxyModel_MapSelectionToSource((KCheckableProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* k_checkableproxymodel_super_map_selection_to_source(const void* self, const void* selection) {
    return KCheckableProxyModel_SuperMapSelectionToSource((KCheckableProxyModel*)self, (QItemSelection*)selection);
}

void k_checkableproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(const void*, const void*)) {
    KCheckableProxyModel_OnMapSelectionToSource((KCheckableProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_checkableproxymodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = KCheckableProxyModel_Match((KCheckableProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_checkableproxymodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = KCheckableProxyModel_SuperMatch((KCheckableProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_checkableproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(const void*, const void*, int, const void*, int, int32_t)) {
    KCheckableProxyModel_OnMatch((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_insert_columns(void* self, int column, int count, const void* parent) {
    return KCheckableProxyModel_InsertColumns((KCheckableProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_checkableproxymodel_super_insert_columns(void* self, int column, int count, const void* parent) {
    return KCheckableProxyModel_SuperInsertColumns((KCheckableProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    KCheckableProxyModel_OnInsertColumns((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_insert_rows(void* self, int row, int count, const void* parent) {
    return KCheckableProxyModel_InsertRows((KCheckableProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_checkableproxymodel_super_insert_rows(void* self, int row, int count, const void* parent) {
    return KCheckableProxyModel_SuperInsertRows((KCheckableProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    KCheckableProxyModel_OnInsertRows((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_remove_columns(void* self, int column, int count, const void* parent) {
    return KCheckableProxyModel_RemoveColumns((KCheckableProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_checkableproxymodel_super_remove_columns(void* self, int column, int count, const void* parent) {
    return KCheckableProxyModel_SuperRemoveColumns((KCheckableProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    KCheckableProxyModel_OnRemoveColumns((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_remove_rows(void* self, int row, int count, const void* parent) {
    return KCheckableProxyModel_RemoveRows((KCheckableProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_checkableproxymodel_super_remove_rows(void* self, int row, int count, const void* parent) {
    return KCheckableProxyModel_SuperRemoveRows((KCheckableProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    KCheckableProxyModel_OnRemoveRows((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return KCheckableProxyModel_MoveRows((KCheckableProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_checkableproxymodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return KCheckableProxyModel_SuperMoveRows((KCheckableProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_checkableproxymodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    KCheckableProxyModel_OnMoveRows((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return KCheckableProxyModel_MoveColumns((KCheckableProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_checkableproxymodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return KCheckableProxyModel_SuperMoveColumns((KCheckableProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_checkableproxymodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    KCheckableProxyModel_OnMoveColumns((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_submit(void* self) {
    return KCheckableProxyModel_Submit((KCheckableProxyModel*)self);
}

bool k_checkableproxymodel_super_submit(void* self) {
    return KCheckableProxyModel_SuperSubmit((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_submit(void* self, bool (*callback)(void*)) {
    KCheckableProxyModel_OnSubmit((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_revert(void* self) {
    KCheckableProxyModel_Revert((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_super_revert(void* self) {
    KCheckableProxyModel_SuperRevert((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_revert(void* self, void (*callback)(void*)) {
    KCheckableProxyModel_OnRevert((KCheckableProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_checkableproxymodel_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KCheckableProxyModel_ItemData((KCheckableProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_checkableproxymodel_super_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KCheckableProxyModel_SuperItemData((KCheckableProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_checkableproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(const void*, const void*)) {
    KCheckableProxyModel_OnItemData((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
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

bool k_checkableproxymodel_super_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
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
    bool _out = KCheckableProxyModel_SuperSetItemData((KCheckableProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_checkableproxymodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map /* of int to QVariant* */)) {
    KCheckableProxyModel_OnSetItemData((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return KCheckableProxyModel_SetHeaderData((KCheckableProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_checkableproxymodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return KCheckableProxyModel_SuperSetHeaderData((KCheckableProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void k_checkableproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int)) {
    KCheckableProxyModel_OnSetHeaderData((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_clear_item_data(void* self, const void* index) {
    return KCheckableProxyModel_ClearItemData((KCheckableProxyModel*)self, (QModelIndex*)index);
}

bool k_checkableproxymodel_super_clear_item_data(void* self, const void* index) {
    return KCheckableProxyModel_SuperClearItemData((KCheckableProxyModel*)self, (QModelIndex*)index);
}

void k_checkableproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*)) {
    KCheckableProxyModel_OnClearItemData((KCheckableProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_checkableproxymodel_buddy(const void* self, const void* index) {
    return KCheckableProxyModel_Buddy((KCheckableProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* k_checkableproxymodel_super_buddy(const void* self, const void* index) {
    return KCheckableProxyModel_SuperBuddy((KCheckableProxyModel*)self, (QModelIndex*)index);
}

void k_checkableproxymodel_on_buddy(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KCheckableProxyModel_OnBuddy((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_can_fetch_more(const void* self, const void* parent) {
    return KCheckableProxyModel_CanFetchMore((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

bool k_checkableproxymodel_super_can_fetch_more(const void* self, const void* parent) {
    return KCheckableProxyModel_SuperCanFetchMore((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_can_fetch_more(void* self, bool (*callback)(const void*, const void*)) {
    KCheckableProxyModel_OnCanFetchMore((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_fetch_more(void* self, const void* parent) {
    KCheckableProxyModel_FetchMore((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

void k_checkableproxymodel_super_fetch_more(void* self, const void* parent) {
    KCheckableProxyModel_SuperFetchMore((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_fetch_more(void* self, void (*callback)(void*, const void*)) {
    KCheckableProxyModel_OnFetchMore((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_sort(void* self, int column, int32_t order) {
    KCheckableProxyModel_Sort((KCheckableProxyModel*)self, column, order);
}

void k_checkableproxymodel_super_sort(void* self, int column, int32_t order) {
    KCheckableProxyModel_SuperSort((KCheckableProxyModel*)self, column, order);
}

void k_checkableproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KCheckableProxyModel_OnSort((KCheckableProxyModel*)self, (intptr_t)callback);
}

QSize* k_checkableproxymodel_span(const void* self, const void* index) {
    return KCheckableProxyModel_Span((KCheckableProxyModel*)self, (QModelIndex*)index);
}

QSize* k_checkableproxymodel_super_span(const void* self, const void* index) {
    return KCheckableProxyModel_SuperSpan((KCheckableProxyModel*)self, (QModelIndex*)index);
}

void k_checkableproxymodel_on_span(void* self, QSize* (*callback)(const void*, const void*)) {
    KCheckableProxyModel_OnSpan((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_has_children(const void* self, const void* parent) {
    return KCheckableProxyModel_HasChildren((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

bool k_checkableproxymodel_super_has_children(const void* self, const void* parent) {
    return KCheckableProxyModel_SuperHasChildren((KCheckableProxyModel*)self, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_has_children(void* self, bool (*callback)(const void*, const void*)) {
    KCheckableProxyModel_OnHasChildren((KCheckableProxyModel*)self, (intptr_t)callback);
}

QMimeData* k_checkableproxymodel_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KCheckableProxyModel_MimeData((KCheckableProxyModel*)self, indexes);
}

QMimeData* k_checkableproxymodel_super_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KCheckableProxyModel_SuperMimeData((KCheckableProxyModel*)self, indexes);
}

void k_checkableproxymodel_on_mime_data(void* self, QMimeData* (*callback)(const void*, libqt_list /* of QModelIndex* */)) {
    KCheckableProxyModel_OnMimeData((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KCheckableProxyModel_CanDropMimeData((KCheckableProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_checkableproxymodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KCheckableProxyModel_SuperCanDropMimeData((KCheckableProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_checkableproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*)) {
    KCheckableProxyModel_OnCanDropMimeData((KCheckableProxyModel*)self, (intptr_t)callback);
}

const char** k_checkableproxymodel_mime_types(const void* self) {
    libqt_list _arr = KCheckableProxyModel_MimeTypes((KCheckableProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_checkableproxymodel_mime_types\n");
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

const char** k_checkableproxymodel_super_mime_types(const void* self) {
    libqt_list _arr = KCheckableProxyModel_SuperMimeTypes((KCheckableProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_checkableproxymodel_mime_types\n");
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

void k_checkableproxymodel_on_mime_types(void* self, const char** (*callback)(const void*)) {
    KCheckableProxyModel_OnMimeTypes((KCheckableProxyModel*)self, (intptr_t)callback);
}

int32_t k_checkableproxymodel_supported_drag_actions(const void* self) {
    return KCheckableProxyModel_SupportedDragActions((KCheckableProxyModel*)self);
}

int32_t k_checkableproxymodel_super_supported_drag_actions(const void* self) {
    return KCheckableProxyModel_SuperSupportedDragActions((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)(const void*)) {
    KCheckableProxyModel_OnSupportedDragActions((KCheckableProxyModel*)self, (intptr_t)callback);
}

int32_t k_checkableproxymodel_supported_drop_actions(const void* self) {
    return KCheckableProxyModel_SupportedDropActions((KCheckableProxyModel*)self);
}

int32_t k_checkableproxymodel_super_supported_drop_actions(const void* self) {
    return KCheckableProxyModel_SuperSupportedDropActions((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)(const void*)) {
    KCheckableProxyModel_OnSupportedDropActions((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_multi_data(const void* self, const void* index, void* roleDataSpan) {
    KCheckableProxyModel_MultiData((KCheckableProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_checkableproxymodel_super_multi_data(const void* self, const void* index, void* roleDataSpan) {
    KCheckableProxyModel_SuperMultiData((KCheckableProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_checkableproxymodel_on_multi_data(void* self, void (*callback)(const void*, const void*, void*)) {
    KCheckableProxyModel_OnMultiData((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_reset_internal_data(void* self) {
    KCheckableProxyModel_ResetInternalData((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_super_reset_internal_data(void* self) {
    KCheckableProxyModel_SuperResetInternalData((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_on_reset_internal_data(void* self, void (*callback)(void*)) {
    KCheckableProxyModel_OnResetInternalData((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_event(void* self, void* event) {
    return KCheckableProxyModel_Event((KCheckableProxyModel*)self, (QEvent*)event);
}

bool k_checkableproxymodel_super_event(void* self, void* event) {
    return KCheckableProxyModel_SuperEvent((KCheckableProxyModel*)self, (QEvent*)event);
}

void k_checkableproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KCheckableProxyModel_OnEvent((KCheckableProxyModel*)self, (intptr_t)callback);
}

bool k_checkableproxymodel_event_filter(void* self, void* watched, void* event) {
    return KCheckableProxyModel_EventFilter((KCheckableProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_checkableproxymodel_super_event_filter(void* self, void* watched, void* event) {
    return KCheckableProxyModel_SuperEventFilter((KCheckableProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_checkableproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KCheckableProxyModel_OnEventFilter((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_timer_event(void* self, void* event) {
    KCheckableProxyModel_TimerEvent((KCheckableProxyModel*)self, (QTimerEvent*)event);
}

void k_checkableproxymodel_super_timer_event(void* self, void* event) {
    KCheckableProxyModel_SuperTimerEvent((KCheckableProxyModel*)self, (QTimerEvent*)event);
}

void k_checkableproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KCheckableProxyModel_OnTimerEvent((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_child_event(void* self, void* event) {
    KCheckableProxyModel_ChildEvent((KCheckableProxyModel*)self, (QChildEvent*)event);
}

void k_checkableproxymodel_super_child_event(void* self, void* event) {
    KCheckableProxyModel_SuperChildEvent((KCheckableProxyModel*)self, (QChildEvent*)event);
}

void k_checkableproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KCheckableProxyModel_OnChildEvent((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_custom_event(void* self, void* event) {
    KCheckableProxyModel_CustomEvent((KCheckableProxyModel*)self, (QEvent*)event);
}

void k_checkableproxymodel_super_custom_event(void* self, void* event) {
    KCheckableProxyModel_SuperCustomEvent((KCheckableProxyModel*)self, (QEvent*)event);
}

void k_checkableproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KCheckableProxyModel_OnCustomEvent((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_connect_notify(void* self, const void* signal) {
    KCheckableProxyModel_ConnectNotify((KCheckableProxyModel*)self, (QMetaMethod*)signal);
}

void k_checkableproxymodel_super_connect_notify(void* self, const void* signal) {
    KCheckableProxyModel_SuperConnectNotify((KCheckableProxyModel*)self, (QMetaMethod*)signal);
}

void k_checkableproxymodel_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    KCheckableProxyModel_OnConnectNotify((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_disconnect_notify(void* self, const void* signal) {
    KCheckableProxyModel_DisconnectNotify((KCheckableProxyModel*)self, (QMetaMethod*)signal);
}

void k_checkableproxymodel_super_disconnect_notify(void* self, const void* signal) {
    KCheckableProxyModel_SuperDisconnectNotify((KCheckableProxyModel*)self, (QMetaMethod*)signal);
}

void k_checkableproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    KCheckableProxyModel_OnDisconnectNotify((KCheckableProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_set_handle_source_layout_changes(void* self, bool handleSourceLayoutChanges) {
    KCheckableProxyModel_SetHandleSourceLayoutChanges((KCheckableProxyModel*)self, handleSourceLayoutChanges);
}

void k_checkableproxymodel_set_handle_source_data_changes(void* self, bool handleSourceDataChanges) {
    KCheckableProxyModel_SetHandleSourceDataChanges((KCheckableProxyModel*)self, handleSourceDataChanges);
}

QModelIndex* k_checkableproxymodel_create_source_index(const void* self, int row, int col, void* internalPtr) {
    return KCheckableProxyModel_CreateSourceIndex((KCheckableProxyModel*)self, row, col, internalPtr);
}

QModelIndex* k_checkableproxymodel_create_index(const void* self, int row, int column) {
    return KCheckableProxyModel_CreateIndex((KCheckableProxyModel*)self, row, column);
}

void k_checkableproxymodel_encode_data(const void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KCheckableProxyModel_EncodeData((KCheckableProxyModel*)self, indexes, (QDataStream*)stream);
}

bool k_checkableproxymodel_decode_data(void* self, int row, int column, const void* parent, void* stream) {
    return KCheckableProxyModel_DecodeData((KCheckableProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_checkableproxymodel_begin_insert_rows(void* self, const void* parent, int first, int last) {
    KCheckableProxyModel_BeginInsertRows((KCheckableProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_checkableproxymodel_end_insert_rows(void* self) {
    KCheckableProxyModel_EndInsertRows((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_begin_remove_rows(void* self, const void* parent, int first, int last) {
    KCheckableProxyModel_BeginRemoveRows((KCheckableProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_checkableproxymodel_end_remove_rows(void* self) {
    KCheckableProxyModel_EndRemoveRows((KCheckableProxyModel*)self);
}

bool k_checkableproxymodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow) {
    return KCheckableProxyModel_BeginMoveRows((KCheckableProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_checkableproxymodel_end_move_rows(void* self) {
    KCheckableProxyModel_EndMoveRows((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_begin_insert_columns(void* self, const void* parent, int first, int last) {
    KCheckableProxyModel_BeginInsertColumns((KCheckableProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_checkableproxymodel_end_insert_columns(void* self) {
    KCheckableProxyModel_EndInsertColumns((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_begin_remove_columns(void* self, const void* parent, int first, int last) {
    KCheckableProxyModel_BeginRemoveColumns((KCheckableProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_checkableproxymodel_end_remove_columns(void* self) {
    KCheckableProxyModel_EndRemoveColumns((KCheckableProxyModel*)self);
}

bool k_checkableproxymodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn) {
    return KCheckableProxyModel_BeginMoveColumns((KCheckableProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_checkableproxymodel_end_move_columns(void* self) {
    KCheckableProxyModel_EndMoveColumns((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_begin_reset_model(void* self) {
    KCheckableProxyModel_BeginResetModel((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_end_reset_model(void* self) {
    KCheckableProxyModel_EndResetModel((KCheckableProxyModel*)self);
}

void k_checkableproxymodel_change_persistent_index(void* self, const void* from, const void* to) {
    KCheckableProxyModel_ChangePersistentIndex((KCheckableProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_checkableproxymodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KCheckableProxyModel_ChangePersistentIndexList((KCheckableProxyModel*)self, from, to);
}

libqt_list /* of QModelIndex* */ k_checkableproxymodel_persistent_index_list(const void* self) {
    libqt_list _arr = KCheckableProxyModel_PersistentIndexList((KCheckableProxyModel*)self);
    return _arr;
}

QObject* k_checkableproxymodel_sender(const void* self) {
    return KCheckableProxyModel_Sender((KCheckableProxyModel*)self);
}

int32_t k_checkableproxymodel_sender_signal_index(const void* self) {
    return KCheckableProxyModel_SenderSignalIndex((KCheckableProxyModel*)self);
}

int32_t k_checkableproxymodel_receivers(const void* self, const char* signal) {
    return KCheckableProxyModel_Receivers((KCheckableProxyModel*)self, signal);
}

bool k_checkableproxymodel_is_signal_connected(const void* self, const void* signal) {
    return KCheckableProxyModel_IsSignalConnected((KCheckableProxyModel*)self, (QMetaMethod*)signal);
}

void k_checkableproxymodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_Connect_SourceModelChanged((QAbstractProxyModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_checkableproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_checkableproxymodel_delete(void* self) {
    KCheckableProxyModel_Delete((KCheckableProxyModel*)(self));
}
