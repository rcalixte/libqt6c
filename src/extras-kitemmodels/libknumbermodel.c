#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libknumbermodel.hpp"
#include "libknumbermodel.h"

KNumberModel* k_numbermodel_new() {
    return KNumberModel_new();
}

KNumberModel* k_numbermodel_new2(void* parent) {
    return KNumberModel_new2((QObject*)parent);
}

const QMetaObject* k_numbermodel_meta_object(void* self) {
    return KNumberModel_MetaObject((KNumberModel*)self);
}

void k_numbermodel_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KNumberModel_OnMetaObject((KNumberModel*)self, (intptr_t)callback);
}

const QMetaObject* k_numbermodel_super_meta_object(void* self) {
    return KNumberModel_SuperMetaObject((KNumberModel*)self);
}

void* k_numbermodel_metacast(void* self, const char* param1) {
    return KNumberModel_Metacast((KNumberModel*)self, param1);
}

void k_numbermodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KNumberModel_OnMetacast((KNumberModel*)self, (intptr_t)callback);
}

void* k_numbermodel_super_metacast(void* self, const char* param1) {
    return KNumberModel_SuperMetacast((KNumberModel*)self, param1);
}

int32_t k_numbermodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNumberModel_Metacall((KNumberModel*)self, param1, param2, param3);
}

void k_numbermodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KNumberModel_OnMetacall((KNumberModel*)self, (intptr_t)callback);
}

int32_t k_numbermodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNumberModel_SuperMetacall((KNumberModel*)self, param1, param2, param3);
}

const char* k_numbermodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_numbermodel_set_minimum_value(void* self, double minimumValue) {
    KNumberModel_SetMinimumValue((KNumberModel*)self, minimumValue);
}

double k_numbermodel_minimum_value(void* self) {
    return KNumberModel_MinimumValue((KNumberModel*)self);
}

void k_numbermodel_set_maximum_value(void* self, double maximumValue) {
    KNumberModel_SetMaximumValue((KNumberModel*)self, maximumValue);
}

double k_numbermodel_maximum_value(void* self) {
    return KNumberModel_MaximumValue((KNumberModel*)self);
}

void k_numbermodel_set_step_size(void* self, double stepSize) {
    KNumberModel_SetStepSize((KNumberModel*)self, stepSize);
}

double k_numbermodel_step_size(void* self) {
    return KNumberModel_StepSize((KNumberModel*)self);
}

void k_numbermodel_set_formatting_options(void* self, int32_t options) {
    KNumberModel_SetFormattingOptions((KNumberModel*)self, options);
}

int32_t k_numbermodel_formatting_options(void* self) {
    return KNumberModel_FormattingOptions((KNumberModel*)self);
}

double k_numbermodel_value(void* self, void* index) {
    return KNumberModel_Value((KNumberModel*)self, (QModelIndex*)index);
}

int32_t k_numbermodel_row_count(void* self, void* index) {
    return KNumberModel_RowCount((KNumberModel*)self, (QModelIndex*)index);
}

void k_numbermodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    KNumberModel_OnRowCount((KNumberModel*)self, (intptr_t)callback);
}

int32_t k_numbermodel_super_row_count(void* self, void* index) {
    return KNumberModel_SuperRowCount((KNumberModel*)self, (QModelIndex*)index);
}

QVariant* k_numbermodel_data(void* self, void* index, int role) {
    return KNumberModel_Data((KNumberModel*)self, (QModelIndex*)index, role);
}

void k_numbermodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    KNumberModel_OnData((KNumberModel*)self, (intptr_t)callback);
}

QVariant* k_numbermodel_super_data(void* self, void* index, int role) {
    return KNumberModel_SuperData((KNumberModel*)self, (QModelIndex*)index, role);
}

libqt_map /* of int to char* */ k_numbermodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KNumberModel_RoleNames((KNumberModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_numbermodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_numbermodel_role_names\n");
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

void k_numbermodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    KNumberModel_OnRoleNames((KNumberModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_numbermodel_super_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KNumberModel_SuperRoleNames((KNumberModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_numbermodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_numbermodel_role_names\n");
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

void k_numbermodel_minimum_value_changed(void* self) {
    KNumberModel_MinimumValueChanged((KNumberModel*)self);
}

void k_numbermodel_on_minimum_value_changed(void* self, void (*callback)(void*)) {
    KNumberModel_Connect_MinimumValueChanged((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_maximum_value_changed(void* self) {
    KNumberModel_MaximumValueChanged((KNumberModel*)self);
}

void k_numbermodel_on_maximum_value_changed(void* self, void (*callback)(void*)) {
    KNumberModel_Connect_MaximumValueChanged((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_step_size_changed(void* self) {
    KNumberModel_StepSizeChanged((KNumberModel*)self);
}

void k_numbermodel_on_step_size_changed(void* self, void (*callback)(void*)) {
    KNumberModel_Connect_StepSizeChanged((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_formatting_options_changed(void* self) {
    KNumberModel_FormattingOptionsChanged((KNumberModel*)self);
}

void k_numbermodel_on_formatting_options_changed(void* self, void (*callback)(void*)) {
    KNumberModel_Connect_FormattingOptionsChanged((KNumberModel*)self, (intptr_t)callback);
}

const char* k_numbermodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_numbermodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_numbermodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* k_numbermodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void k_numbermodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* k_numbermodel_super_parent(void* self, void* child) {
    return QAbstractItemModel_SuperParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

int32_t k_numbermodel_column_count(void* self, void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void k_numbermodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QAbstractItemModel_OnColumnCount((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t k_numbermodel_super_column_count(void* self, void* parent) {
    return QAbstractItemModel_SuperColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool k_numbermodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void k_numbermodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_numbermodel_super_has_children(void* self, void* parent) {
    return QAbstractItemModel_SuperHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool k_numbermodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_numbermodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_numbermodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_numbermodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_numbermodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_numbermodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_numbermodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_numbermodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_numbermodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_numbermodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_numbermodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_numbermodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_numbermodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_numbermodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_numbermodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_numbermodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_numbermodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_numbermodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_numbermodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_numbermodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_numbermodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_numbermodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_numbermodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_numbermodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_numbermodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_numbermodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_numbermodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_numbermodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_numbermodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_numbermodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_numbermodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_numbermodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_numbermodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_numbermodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_numbermodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_numbermodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_numbermodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_numbermodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_numbermodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_numbermodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_numbermodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_numbermodel_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_numbermodel_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_numbermodel_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_numbermodel_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_numbermodel_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_numbermodel_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_numbermodel_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_numbermodel_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_numbermodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_numbermodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_numbermodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_numbermodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_numbermodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_numbermodel_dynamic_property_names\n");
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

QBindingStorage* k_numbermodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_numbermodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_numbermodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_numbermodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_numbermodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_numbermodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_numbermodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_numbermodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_numbermodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_numbermodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_numbermodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_numbermodel_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_numbermodel_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_numbermodel_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_numbermodel_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_numbermodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_numbermodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* k_numbermodel_index(void* self, int row, int column, void* parent) {
    return KNumberModel_Index((KNumberModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_numbermodel_super_index(void* self, int row, int column, void* parent) {
    return KNumberModel_SuperIndex((KNumberModel*)self, row, column, (QModelIndex*)parent);
}

void k_numbermodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KNumberModel_OnIndex((KNumberModel*)self, (intptr_t)callback);
}

QModelIndex* k_numbermodel_sibling(void* self, int row, int column, void* idx) {
    return KNumberModel_Sibling((KNumberModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_numbermodel_super_sibling(void* self, int row, int column, void* idx) {
    return KNumberModel_SuperSibling((KNumberModel*)self, row, column, (QModelIndex*)idx);
}

void k_numbermodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KNumberModel_OnSibling((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KNumberModel_DropMimeData((KNumberModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_numbermodel_super_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KNumberModel_SuperDropMimeData((KNumberModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_numbermodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KNumberModel_OnDropMimeData((KNumberModel*)self, (intptr_t)callback);
}

int32_t k_numbermodel_flags(void* self, void* index) {
    return KNumberModel_Flags((KNumberModel*)self, (QModelIndex*)index);
}

int32_t k_numbermodel_super_flags(void* self, void* index) {
    return KNumberModel_SuperFlags((KNumberModel*)self, (QModelIndex*)index);
}

void k_numbermodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    KNumberModel_OnFlags((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_set_data(void* self, void* index, void* value, int role) {
    return KNumberModel_SetData((KNumberModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_numbermodel_super_set_data(void* self, void* index, void* value, int role) {
    return KNumberModel_SuperSetData((KNumberModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_numbermodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    KNumberModel_OnSetData((KNumberModel*)self, (intptr_t)callback);
}

QVariant* k_numbermodel_header_data(void* self, int section, int32_t orientation, int role) {
    return KNumberModel_HeaderData((KNumberModel*)self, section, orientation, role);
}

QVariant* k_numbermodel_super_header_data(void* self, int section, int32_t orientation, int role) {
    return KNumberModel_SuperHeaderData((KNumberModel*)self, section, orientation, role);
}

void k_numbermodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    KNumberModel_OnHeaderData((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KNumberModel_SetHeaderData((KNumberModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_numbermodel_super_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KNumberModel_SuperSetHeaderData((KNumberModel*)self, section, orientation, (QVariant*)value, role);
}

void k_numbermodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    KNumberModel_OnSetHeaderData((KNumberModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_numbermodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KNumberModel_ItemData((KNumberModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_numbermodel_super_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KNumberModel_SuperItemData((KNumberModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_numbermodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    KNumberModel_OnItemData((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_numbermodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_numbermodel_set_item_data\n");
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
    bool _out = KNumberModel_SetItemData((KNumberModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool k_numbermodel_super_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_numbermodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_numbermodel_set_item_data\n");
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
    bool _out = KNumberModel_SuperSetItemData((KNumberModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_numbermodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    KNumberModel_OnSetItemData((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_clear_item_data(void* self, void* index) {
    return KNumberModel_ClearItemData((KNumberModel*)self, (QModelIndex*)index);
}

bool k_numbermodel_super_clear_item_data(void* self, void* index) {
    return KNumberModel_SuperClearItemData((KNumberModel*)self, (QModelIndex*)index);
}

void k_numbermodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    KNumberModel_OnClearItemData((KNumberModel*)self, (intptr_t)callback);
}

const char** k_numbermodel_mime_types(void* self) {
    libqt_list _arr = KNumberModel_MimeTypes((KNumberModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_numbermodel_mime_types\n");
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

const char** k_numbermodel_super_mime_types(void* self) {
    libqt_list _arr = KNumberModel_SuperMimeTypes((KNumberModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_numbermodel_mime_types\n");
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

void k_numbermodel_on_mime_types(void* self, const char** (*callback)()) {
    KNumberModel_OnMimeTypes((KNumberModel*)self, (intptr_t)callback);
}

QMimeData* k_numbermodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KNumberModel_MimeData((KNumberModel*)self, indexes);
}

QMimeData* k_numbermodel_super_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KNumberModel_SuperMimeData((KNumberModel*)self, indexes);
}

void k_numbermodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list /* of QModelIndex* */)) {
    KNumberModel_OnMimeData((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KNumberModel_CanDropMimeData((KNumberModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_numbermodel_super_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KNumberModel_SuperCanDropMimeData((KNumberModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_numbermodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KNumberModel_OnCanDropMimeData((KNumberModel*)self, (intptr_t)callback);
}

int32_t k_numbermodel_supported_drop_actions(void* self) {
    return KNumberModel_SupportedDropActions((KNumberModel*)self);
}

int32_t k_numbermodel_super_supported_drop_actions(void* self) {
    return KNumberModel_SuperSupportedDropActions((KNumberModel*)self);
}

void k_numbermodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KNumberModel_OnSupportedDropActions((KNumberModel*)self, (intptr_t)callback);
}

int32_t k_numbermodel_supported_drag_actions(void* self) {
    return KNumberModel_SupportedDragActions((KNumberModel*)self);
}

int32_t k_numbermodel_super_supported_drag_actions(void* self) {
    return KNumberModel_SuperSupportedDragActions((KNumberModel*)self);
}

void k_numbermodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    KNumberModel_OnSupportedDragActions((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_insert_rows(void* self, int row, int count, void* parent) {
    return KNumberModel_InsertRows((KNumberModel*)self, row, count, (QModelIndex*)parent);
}

bool k_numbermodel_super_insert_rows(void* self, int row, int count, void* parent) {
    return KNumberModel_SuperInsertRows((KNumberModel*)self, row, count, (QModelIndex*)parent);
}

void k_numbermodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KNumberModel_OnInsertRows((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_insert_columns(void* self, int column, int count, void* parent) {
    return KNumberModel_InsertColumns((KNumberModel*)self, column, count, (QModelIndex*)parent);
}

bool k_numbermodel_super_insert_columns(void* self, int column, int count, void* parent) {
    return KNumberModel_SuperInsertColumns((KNumberModel*)self, column, count, (QModelIndex*)parent);
}

void k_numbermodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KNumberModel_OnInsertColumns((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_remove_rows(void* self, int row, int count, void* parent) {
    return KNumberModel_RemoveRows((KNumberModel*)self, row, count, (QModelIndex*)parent);
}

bool k_numbermodel_super_remove_rows(void* self, int row, int count, void* parent) {
    return KNumberModel_SuperRemoveRows((KNumberModel*)self, row, count, (QModelIndex*)parent);
}

void k_numbermodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KNumberModel_OnRemoveRows((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_remove_columns(void* self, int column, int count, void* parent) {
    return KNumberModel_RemoveColumns((KNumberModel*)self, column, count, (QModelIndex*)parent);
}

bool k_numbermodel_super_remove_columns(void* self, int column, int count, void* parent) {
    return KNumberModel_SuperRemoveColumns((KNumberModel*)self, column, count, (QModelIndex*)parent);
}

void k_numbermodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KNumberModel_OnRemoveColumns((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KNumberModel_MoveRows((KNumberModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_numbermodel_super_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KNumberModel_SuperMoveRows((KNumberModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_numbermodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KNumberModel_OnMoveRows((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KNumberModel_MoveColumns((KNumberModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_numbermodel_super_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KNumberModel_SuperMoveColumns((KNumberModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_numbermodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KNumberModel_OnMoveColumns((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_fetch_more(void* self, void* parent) {
    KNumberModel_FetchMore((KNumberModel*)self, (QModelIndex*)parent);
}

void k_numbermodel_super_fetch_more(void* self, void* parent) {
    KNumberModel_SuperFetchMore((KNumberModel*)self, (QModelIndex*)parent);
}

void k_numbermodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    KNumberModel_OnFetchMore((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_can_fetch_more(void* self, void* parent) {
    return KNumberModel_CanFetchMore((KNumberModel*)self, (QModelIndex*)parent);
}

bool k_numbermodel_super_can_fetch_more(void* self, void* parent) {
    return KNumberModel_SuperCanFetchMore((KNumberModel*)self, (QModelIndex*)parent);
}

void k_numbermodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    KNumberModel_OnCanFetchMore((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_sort(void* self, int column, int32_t order) {
    KNumberModel_Sort((KNumberModel*)self, column, order);
}

void k_numbermodel_super_sort(void* self, int column, int32_t order) {
    KNumberModel_SuperSort((KNumberModel*)self, column, order);
}

void k_numbermodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KNumberModel_OnSort((KNumberModel*)self, (intptr_t)callback);
}

QModelIndex* k_numbermodel_buddy(void* self, void* index) {
    return KNumberModel_Buddy((KNumberModel*)self, (QModelIndex*)index);
}

QModelIndex* k_numbermodel_super_buddy(void* self, void* index) {
    return KNumberModel_SuperBuddy((KNumberModel*)self, (QModelIndex*)index);
}

void k_numbermodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    KNumberModel_OnBuddy((KNumberModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_numbermodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KNumberModel_Match((KNumberModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_numbermodel_super_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KNumberModel_SuperMatch((KNumberModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_numbermodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(void*, void*, int, void*, int, int32_t)) {
    KNumberModel_OnMatch((KNumberModel*)self, (intptr_t)callback);
}

QSize* k_numbermodel_span(void* self, void* index) {
    return KNumberModel_Span((KNumberModel*)self, (QModelIndex*)index);
}

QSize* k_numbermodel_super_span(void* self, void* index) {
    return KNumberModel_SuperSpan((KNumberModel*)self, (QModelIndex*)index);
}

void k_numbermodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    KNumberModel_OnSpan((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_multi_data(void* self, void* index, void* roleDataSpan) {
    KNumberModel_MultiData((KNumberModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_numbermodel_super_multi_data(void* self, void* index, void* roleDataSpan) {
    KNumberModel_SuperMultiData((KNumberModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_numbermodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    KNumberModel_OnMultiData((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_submit(void* self) {
    return KNumberModel_Submit((KNumberModel*)self);
}

bool k_numbermodel_super_submit(void* self) {
    return KNumberModel_SuperSubmit((KNumberModel*)self);
}

void k_numbermodel_on_submit(void* self, bool (*callback)()) {
    KNumberModel_OnSubmit((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_revert(void* self) {
    KNumberModel_Revert((KNumberModel*)self);
}

void k_numbermodel_super_revert(void* self) {
    KNumberModel_SuperRevert((KNumberModel*)self);
}

void k_numbermodel_on_revert(void* self, void (*callback)()) {
    KNumberModel_OnRevert((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_reset_internal_data(void* self) {
    KNumberModel_ResetInternalData((KNumberModel*)self);
}

void k_numbermodel_super_reset_internal_data(void* self) {
    KNumberModel_SuperResetInternalData((KNumberModel*)self);
}

void k_numbermodel_on_reset_internal_data(void* self, void (*callback)()) {
    KNumberModel_OnResetInternalData((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_event(void* self, void* event) {
    return KNumberModel_Event((KNumberModel*)self, (QEvent*)event);
}

bool k_numbermodel_super_event(void* self, void* event) {
    return KNumberModel_SuperEvent((KNumberModel*)self, (QEvent*)event);
}

void k_numbermodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KNumberModel_OnEvent((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_event_filter(void* self, void* watched, void* event) {
    return KNumberModel_EventFilter((KNumberModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_numbermodel_super_event_filter(void* self, void* watched, void* event) {
    return KNumberModel_SuperEventFilter((KNumberModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_numbermodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KNumberModel_OnEventFilter((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_timer_event(void* self, void* event) {
    KNumberModel_TimerEvent((KNumberModel*)self, (QTimerEvent*)event);
}

void k_numbermodel_super_timer_event(void* self, void* event) {
    KNumberModel_SuperTimerEvent((KNumberModel*)self, (QTimerEvent*)event);
}

void k_numbermodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KNumberModel_OnTimerEvent((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_child_event(void* self, void* event) {
    KNumberModel_ChildEvent((KNumberModel*)self, (QChildEvent*)event);
}

void k_numbermodel_super_child_event(void* self, void* event) {
    KNumberModel_SuperChildEvent((KNumberModel*)self, (QChildEvent*)event);
}

void k_numbermodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KNumberModel_OnChildEvent((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_custom_event(void* self, void* event) {
    KNumberModel_CustomEvent((KNumberModel*)self, (QEvent*)event);
}

void k_numbermodel_super_custom_event(void* self, void* event) {
    KNumberModel_SuperCustomEvent((KNumberModel*)self, (QEvent*)event);
}

void k_numbermodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KNumberModel_OnCustomEvent((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_connect_notify(void* self, void* signal) {
    KNumberModel_ConnectNotify((KNumberModel*)self, (QMetaMethod*)signal);
}

void k_numbermodel_super_connect_notify(void* self, void* signal) {
    KNumberModel_SuperConnectNotify((KNumberModel*)self, (QMetaMethod*)signal);
}

void k_numbermodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KNumberModel_OnConnectNotify((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_disconnect_notify(void* self, void* signal) {
    KNumberModel_DisconnectNotify((KNumberModel*)self, (QMetaMethod*)signal);
}

void k_numbermodel_super_disconnect_notify(void* self, void* signal) {
    KNumberModel_SuperDisconnectNotify((KNumberModel*)self, (QMetaMethod*)signal);
}

void k_numbermodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KNumberModel_OnDisconnectNotify((KNumberModel*)self, (intptr_t)callback);
}

QModelIndex* k_numbermodel_create_index(void* self, int row, int column) {
    return KNumberModel_CreateIndex((KNumberModel*)self, row, column);
}

QModelIndex* k_numbermodel_super_create_index(void* self, int row, int column) {
    return KNumberModel_SuperCreateIndex((KNumberModel*)self, row, column);
}

void k_numbermodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    KNumberModel_OnCreateIndex((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KNumberModel_EncodeData((KNumberModel*)self, indexes, (QDataStream*)stream);
}

void k_numbermodel_super_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KNumberModel_SuperEncodeData((KNumberModel*)self, indexes, (QDataStream*)stream);
}

void k_numbermodel_on_encode_data(void* self, void (*callback)(void*, libqt_list /* of QModelIndex* */, void*)) {
    KNumberModel_OnEncodeData((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KNumberModel_DecodeData((KNumberModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_numbermodel_super_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KNumberModel_SuperDecodeData((KNumberModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_numbermodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    KNumberModel_OnDecodeData((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    KNumberModel_BeginInsertRows((KNumberModel*)self, (QModelIndex*)parent, first, last);
}

void k_numbermodel_super_begin_insert_rows(void* self, void* parent, int first, int last) {
    KNumberModel_SuperBeginInsertRows((KNumberModel*)self, (QModelIndex*)parent, first, last);
}

void k_numbermodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KNumberModel_OnBeginInsertRows((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_end_insert_rows(void* self) {
    KNumberModel_EndInsertRows((KNumberModel*)self);
}

void k_numbermodel_super_end_insert_rows(void* self) {
    KNumberModel_SuperEndInsertRows((KNumberModel*)self);
}

void k_numbermodel_on_end_insert_rows(void* self, void (*callback)()) {
    KNumberModel_OnEndInsertRows((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    KNumberModel_BeginRemoveRows((KNumberModel*)self, (QModelIndex*)parent, first, last);
}

void k_numbermodel_super_begin_remove_rows(void* self, void* parent, int first, int last) {
    KNumberModel_SuperBeginRemoveRows((KNumberModel*)self, (QModelIndex*)parent, first, last);
}

void k_numbermodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KNumberModel_OnBeginRemoveRows((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_end_remove_rows(void* self) {
    KNumberModel_EndRemoveRows((KNumberModel*)self);
}

void k_numbermodel_super_end_remove_rows(void* self) {
    KNumberModel_SuperEndRemoveRows((KNumberModel*)self);
}

void k_numbermodel_on_end_remove_rows(void* self, void (*callback)()) {
    KNumberModel_OnEndRemoveRows((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KNumberModel_BeginMoveRows((KNumberModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_numbermodel_super_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KNumberModel_SuperBeginMoveRows((KNumberModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_numbermodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KNumberModel_OnBeginMoveRows((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_end_move_rows(void* self) {
    KNumberModel_EndMoveRows((KNumberModel*)self);
}

void k_numbermodel_super_end_move_rows(void* self) {
    KNumberModel_SuperEndMoveRows((KNumberModel*)self);
}

void k_numbermodel_on_end_move_rows(void* self, void (*callback)()) {
    KNumberModel_OnEndMoveRows((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    KNumberModel_BeginInsertColumns((KNumberModel*)self, (QModelIndex*)parent, first, last);
}

void k_numbermodel_super_begin_insert_columns(void* self, void* parent, int first, int last) {
    KNumberModel_SuperBeginInsertColumns((KNumberModel*)self, (QModelIndex*)parent, first, last);
}

void k_numbermodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KNumberModel_OnBeginInsertColumns((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_end_insert_columns(void* self) {
    KNumberModel_EndInsertColumns((KNumberModel*)self);
}

void k_numbermodel_super_end_insert_columns(void* self) {
    KNumberModel_SuperEndInsertColumns((KNumberModel*)self);
}

void k_numbermodel_on_end_insert_columns(void* self, void (*callback)()) {
    KNumberModel_OnEndInsertColumns((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    KNumberModel_BeginRemoveColumns((KNumberModel*)self, (QModelIndex*)parent, first, last);
}

void k_numbermodel_super_begin_remove_columns(void* self, void* parent, int first, int last) {
    KNumberModel_SuperBeginRemoveColumns((KNumberModel*)self, (QModelIndex*)parent, first, last);
}

void k_numbermodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KNumberModel_OnBeginRemoveColumns((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_end_remove_columns(void* self) {
    KNumberModel_EndRemoveColumns((KNumberModel*)self);
}

void k_numbermodel_super_end_remove_columns(void* self) {
    KNumberModel_SuperEndRemoveColumns((KNumberModel*)self);
}

void k_numbermodel_on_end_remove_columns(void* self, void (*callback)()) {
    KNumberModel_OnEndRemoveColumns((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KNumberModel_BeginMoveColumns((KNumberModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_numbermodel_super_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KNumberModel_SuperBeginMoveColumns((KNumberModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_numbermodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KNumberModel_OnBeginMoveColumns((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_end_move_columns(void* self) {
    KNumberModel_EndMoveColumns((KNumberModel*)self);
}

void k_numbermodel_super_end_move_columns(void* self) {
    KNumberModel_SuperEndMoveColumns((KNumberModel*)self);
}

void k_numbermodel_on_end_move_columns(void* self, void (*callback)()) {
    KNumberModel_OnEndMoveColumns((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_begin_reset_model(void* self) {
    KNumberModel_BeginResetModel((KNumberModel*)self);
}

void k_numbermodel_super_begin_reset_model(void* self) {
    KNumberModel_SuperBeginResetModel((KNumberModel*)self);
}

void k_numbermodel_on_begin_reset_model(void* self, void (*callback)()) {
    KNumberModel_OnBeginResetModel((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_end_reset_model(void* self) {
    KNumberModel_EndResetModel((KNumberModel*)self);
}

void k_numbermodel_super_end_reset_model(void* self) {
    KNumberModel_SuperEndResetModel((KNumberModel*)self);
}

void k_numbermodel_on_end_reset_model(void* self, void (*callback)()) {
    KNumberModel_OnEndResetModel((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_change_persistent_index(void* self, void* from, void* to) {
    KNumberModel_ChangePersistentIndex((KNumberModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_numbermodel_super_change_persistent_index(void* self, void* from, void* to) {
    KNumberModel_SuperChangePersistentIndex((KNumberModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_numbermodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    KNumberModel_OnChangePersistentIndex((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KNumberModel_ChangePersistentIndexList((KNumberModel*)self, from, to);
}

void k_numbermodel_super_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KNumberModel_SuperChangePersistentIndexList((KNumberModel*)self, from, to);
}

void k_numbermodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */)) {
    KNumberModel_OnChangePersistentIndexList((KNumberModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_numbermodel_persistent_index_list(void* self) {
    libqt_list _arr = KNumberModel_PersistentIndexList((KNumberModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_numbermodel_super_persistent_index_list(void* self) {
    libqt_list _arr = KNumberModel_SuperPersistentIndexList((KNumberModel*)self);
    return _arr;
}

void k_numbermodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*callback)()) {
    KNumberModel_OnPersistentIndexList((KNumberModel*)self, (intptr_t)callback);
}

QObject* k_numbermodel_sender(void* self) {
    return KNumberModel_Sender((KNumberModel*)self);
}

QObject* k_numbermodel_super_sender(void* self) {
    return KNumberModel_SuperSender((KNumberModel*)self);
}

void k_numbermodel_on_sender(void* self, QObject* (*callback)()) {
    KNumberModel_OnSender((KNumberModel*)self, (intptr_t)callback);
}

int32_t k_numbermodel_sender_signal_index(void* self) {
    return KNumberModel_SenderSignalIndex((KNumberModel*)self);
}

int32_t k_numbermodel_super_sender_signal_index(void* self) {
    return KNumberModel_SuperSenderSignalIndex((KNumberModel*)self);
}

void k_numbermodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KNumberModel_OnSenderSignalIndex((KNumberModel*)self, (intptr_t)callback);
}

int32_t k_numbermodel_receivers(void* self, const char* signal) {
    return KNumberModel_Receivers((KNumberModel*)self, signal);
}

int32_t k_numbermodel_super_receivers(void* self, const char* signal) {
    return KNumberModel_SuperReceivers((KNumberModel*)self, signal);
}

void k_numbermodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KNumberModel_OnReceivers((KNumberModel*)self, (intptr_t)callback);
}

bool k_numbermodel_is_signal_connected(void* self, void* signal) {
    return KNumberModel_IsSignalConnected((KNumberModel*)self, (QMetaMethod*)signal);
}

bool k_numbermodel_super_is_signal_connected(void* self, void* signal) {
    return KNumberModel_SuperIsSignalConnected((KNumberModel*)self, (QMetaMethod*)signal);
}

void k_numbermodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KNumberModel_OnIsSignalConnected((KNumberModel*)self, (intptr_t)callback);
}

void k_numbermodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_numbermodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_numbermodel_delete(void* self) {
    KNumberModel_Delete((KNumberModel*)(self));
}
