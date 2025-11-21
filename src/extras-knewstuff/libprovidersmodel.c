#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libprovidersmodel.hpp"
#include "libprovidersmodel.h"

KNSCore__ProvidersModel* k_nscore__providersmodel_new() {
    return KNSCore__ProvidersModel_new();
}

KNSCore__ProvidersModel* k_nscore__providersmodel_new2(void* parent) {
    return KNSCore__ProvidersModel_new2((QObject*)parent);
}

const QMetaObject* k_nscore__providersmodel_meta_object(void* self) {
    return KNSCore__ProvidersModel_MetaObject((KNSCore__ProvidersModel*)self);
}

void* k_nscore__providersmodel_metacast(void* self, const char* param1) {
    return KNSCore__ProvidersModel_Metacast((KNSCore__ProvidersModel*)self, param1);
}

int32_t k_nscore__providersmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNSCore__ProvidersModel_Metacall((KNSCore__ProvidersModel*)self, param1, param2, param3);
}

void k_nscore__providersmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KNSCore__ProvidersModel_OnMetacall((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

int32_t k_nscore__providersmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNSCore__ProvidersModel_QBaseMetacall((KNSCore__ProvidersModel*)self, param1, param2, param3);
}

const char* k_nscore__providersmodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_map /* of int to char* */ k_nscore__providersmodel_role_names(void* self) {
    return KNSCore__ProvidersModel_RoleNames((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    KNSCore__ProvidersModel_OnRoleNames((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_nscore__providersmodel_qbase_role_names(void* self) {
    return KNSCore__ProvidersModel_QBaseRoleNames((KNSCore__ProvidersModel*)self);
}

QVariant* k_nscore__providersmodel_data(void* self, void* index, int role) {
    return KNSCore__ProvidersModel_Data((KNSCore__ProvidersModel*)self, (QModelIndex*)index, role);
}

void k_nscore__providersmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    KNSCore__ProvidersModel_OnData((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

QVariant* k_nscore__providersmodel_qbase_data(void* self, void* index, int role) {
    return KNSCore__ProvidersModel_QBaseData((KNSCore__ProvidersModel*)self, (QModelIndex*)index, role);
}

int32_t k_nscore__providersmodel_row_count(void* self, void* parent) {
    return KNSCore__ProvidersModel_RowCount((KNSCore__ProvidersModel*)self, (QModelIndex*)parent);
}

void k_nscore__providersmodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    KNSCore__ProvidersModel_OnRowCount((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

int32_t k_nscore__providersmodel_qbase_row_count(void* self, void* parent) {
    return KNSCore__ProvidersModel_QBaseRowCount((KNSCore__ProvidersModel*)self, (QModelIndex*)parent);
}

QObject* k_nscore__providersmodel_engine(void* self) {
    return KNSCore__ProvidersModel_Engine((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_set_engine(void* self, void* engine) {
    KNSCore__ProvidersModel_SetEngine((KNSCore__ProvidersModel*)self, (QObject*)engine);
}

void k_nscore__providersmodel_engine_changed(void* self) {
    KNSCore__ProvidersModel_EngineChanged((KNSCore__ProvidersModel*)self);
}

const char* k_nscore__providersmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_nscore__providersmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_nscore__providersmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* k_nscore__providersmodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void k_nscore__providersmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* k_nscore__providersmodel_qbase_parent(void* self, void* child) {
    return QAbstractItemModel_QBaseParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

int32_t k_nscore__providersmodel_column_count(void* self, void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void k_nscore__providersmodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QAbstractItemModel_OnColumnCount((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t k_nscore__providersmodel_qbase_column_count(void* self, void* parent) {
    return QAbstractItemModel_QBaseColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool k_nscore__providersmodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void k_nscore__providersmodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_qbase_has_children(void* self, void* parent) {
    return QAbstractItemModel_QBaseHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool k_nscore__providersmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_nscore__providersmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_nscore__providersmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_nscore__providersmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_nscore__providersmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_nscore__providersmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_nscore__providersmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_nscore__providersmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_nscore__providersmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_nscore__providersmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_nscore__providersmodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_nscore__providersmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_nscore__providersmodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_nscore__providersmodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_nscore__providersmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_nscore__providersmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_nscore__providersmodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_nscore__providersmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_nscore__providersmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_nscore__providersmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_layout_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_nscore__providersmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_nscore__providersmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_nscore__providersmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_nscore__providersmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__providersmodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_nscore__providersmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_nscore__providersmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_nscore__providersmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_nscore__providersmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_nscore__providersmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_nscore__providersmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_nscore__providersmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_nscore__providersmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_nscore__providersmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_nscore__providersmodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_nscore__providersmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_nscore__providersmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_nscore__providersmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_nscore__providersmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_nscore__providersmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_nscore__providersmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_nscore__providersmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_nscore__providersmodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_nscore__providersmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_nscore__providersmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_nscore__providersmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_nscore__providersmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_nscore__providersmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_nscore__providersmodel_dynamic_property_names");
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

QBindingStorage* k_nscore__providersmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_nscore__providersmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_nscore__providersmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_nscore__providersmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_nscore__providersmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_nscore__providersmodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_nscore__providersmodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_nscore__providersmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_nscore__providersmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_nscore__providersmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_nscore__providersmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* k_nscore__providersmodel_index(void* self, int row, int column, void* parent) {
    return KNSCore__ProvidersModel_Index((KNSCore__ProvidersModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_nscore__providersmodel_qbase_index(void* self, int row, int column, void* parent) {
    return KNSCore__ProvidersModel_QBaseIndex((KNSCore__ProvidersModel*)self, row, column, (QModelIndex*)parent);
}

void k_nscore__providersmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KNSCore__ProvidersModel_OnIndex((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

QModelIndex* k_nscore__providersmodel_sibling(void* self, int row, int column, void* idx) {
    return KNSCore__ProvidersModel_Sibling((KNSCore__ProvidersModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_nscore__providersmodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return KNSCore__ProvidersModel_QBaseSibling((KNSCore__ProvidersModel*)self, row, column, (QModelIndex*)idx);
}

void k_nscore__providersmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KNSCore__ProvidersModel_OnSibling((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KNSCore__ProvidersModel_DropMimeData((KNSCore__ProvidersModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_nscore__providersmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KNSCore__ProvidersModel_QBaseDropMimeData((KNSCore__ProvidersModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_nscore__providersmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KNSCore__ProvidersModel_OnDropMimeData((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

int32_t k_nscore__providersmodel_flags(void* self, void* index) {
    return KNSCore__ProvidersModel_Flags((KNSCore__ProvidersModel*)self, (QModelIndex*)index);
}

int32_t k_nscore__providersmodel_qbase_flags(void* self, void* index) {
    return KNSCore__ProvidersModel_QBaseFlags((KNSCore__ProvidersModel*)self, (QModelIndex*)index);
}

void k_nscore__providersmodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    KNSCore__ProvidersModel_OnFlags((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_set_data(void* self, void* index, void* value, int role) {
    return KNSCore__ProvidersModel_SetData((KNSCore__ProvidersModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_nscore__providersmodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return KNSCore__ProvidersModel_QBaseSetData((KNSCore__ProvidersModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_nscore__providersmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    KNSCore__ProvidersModel_OnSetData((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

QVariant* k_nscore__providersmodel_header_data(void* self, int section, int32_t orientation, int role) {
    return KNSCore__ProvidersModel_HeaderData((KNSCore__ProvidersModel*)self, section, orientation, role);
}

QVariant* k_nscore__providersmodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return KNSCore__ProvidersModel_QBaseHeaderData((KNSCore__ProvidersModel*)self, section, orientation, role);
}

void k_nscore__providersmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    KNSCore__ProvidersModel_OnHeaderData((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KNSCore__ProvidersModel_SetHeaderData((KNSCore__ProvidersModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_nscore__providersmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KNSCore__ProvidersModel_QBaseSetHeaderData((KNSCore__ProvidersModel*)self, section, orientation, (QVariant*)value, role);
}

void k_nscore__providersmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    KNSCore__ProvidersModel_OnSetHeaderData((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_nscore__providersmodel_item_data(void* self, void* index) {
    return KNSCore__ProvidersModel_ItemData((KNSCore__ProvidersModel*)self, (QModelIndex*)index);
}

libqt_map /* of int to QVariant* */ k_nscore__providersmodel_qbase_item_data(void* self, void* index) {
    return KNSCore__ProvidersModel_QBaseItemData((KNSCore__ProvidersModel*)self, (QModelIndex*)index);
}

void k_nscore__providersmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    KNSCore__ProvidersModel_OnItemData((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return KNSCore__ProvidersModel_SetItemData((KNSCore__ProvidersModel*)self, (QModelIndex*)index, roles);
}

bool k_nscore__providersmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return KNSCore__ProvidersModel_QBaseSetItemData((KNSCore__ProvidersModel*)self, (QModelIndex*)index, roles);
}

void k_nscore__providersmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    KNSCore__ProvidersModel_OnSetItemData((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_clear_item_data(void* self, void* index) {
    return KNSCore__ProvidersModel_ClearItemData((KNSCore__ProvidersModel*)self, (QModelIndex*)index);
}

bool k_nscore__providersmodel_qbase_clear_item_data(void* self, void* index) {
    return KNSCore__ProvidersModel_QBaseClearItemData((KNSCore__ProvidersModel*)self, (QModelIndex*)index);
}

void k_nscore__providersmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    KNSCore__ProvidersModel_OnClearItemData((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

const char** k_nscore__providersmodel_mime_types(void* self) {
    libqt_list _arr = KNSCore__ProvidersModel_MimeTypes((KNSCore__ProvidersModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_nscore__providersmodel_mime_types");
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

const char** k_nscore__providersmodel_qbase_mime_types(void* self) {
    libqt_list _arr = KNSCore__ProvidersModel_QBaseMimeTypes((KNSCore__ProvidersModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_nscore__providersmodel_mime_types");
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

void k_nscore__providersmodel_on_mime_types(void* self, const char** (*callback)()) {
    KNSCore__ProvidersModel_OnMimeTypes((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

QMimeData* k_nscore__providersmodel_mime_data(void* self, libqt_list indexes) {
    return KNSCore__ProvidersModel_MimeData((KNSCore__ProvidersModel*)self, indexes);
}

QMimeData* k_nscore__providersmodel_qbase_mime_data(void* self, libqt_list indexes) {
    return KNSCore__ProvidersModel_QBaseMimeData((KNSCore__ProvidersModel*)self, indexes);
}

void k_nscore__providersmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    KNSCore__ProvidersModel_OnMimeData((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KNSCore__ProvidersModel_CanDropMimeData((KNSCore__ProvidersModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_nscore__providersmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KNSCore__ProvidersModel_QBaseCanDropMimeData((KNSCore__ProvidersModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_nscore__providersmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KNSCore__ProvidersModel_OnCanDropMimeData((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

int32_t k_nscore__providersmodel_supported_drop_actions(void* self) {
    return KNSCore__ProvidersModel_SupportedDropActions((KNSCore__ProvidersModel*)self);
}

int32_t k_nscore__providersmodel_qbase_supported_drop_actions(void* self) {
    return KNSCore__ProvidersModel_QBaseSupportedDropActions((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KNSCore__ProvidersModel_OnSupportedDropActions((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

int32_t k_nscore__providersmodel_supported_drag_actions(void* self) {
    return KNSCore__ProvidersModel_SupportedDragActions((KNSCore__ProvidersModel*)self);
}

int32_t k_nscore__providersmodel_qbase_supported_drag_actions(void* self) {
    return KNSCore__ProvidersModel_QBaseSupportedDragActions((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    KNSCore__ProvidersModel_OnSupportedDragActions((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_insert_rows(void* self, int row, int count, void* parent) {
    return KNSCore__ProvidersModel_InsertRows((KNSCore__ProvidersModel*)self, row, count, (QModelIndex*)parent);
}

bool k_nscore__providersmodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return KNSCore__ProvidersModel_QBaseInsertRows((KNSCore__ProvidersModel*)self, row, count, (QModelIndex*)parent);
}

void k_nscore__providersmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KNSCore__ProvidersModel_OnInsertRows((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_insert_columns(void* self, int column, int count, void* parent) {
    return KNSCore__ProvidersModel_InsertColumns((KNSCore__ProvidersModel*)self, column, count, (QModelIndex*)parent);
}

bool k_nscore__providersmodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return KNSCore__ProvidersModel_QBaseInsertColumns((KNSCore__ProvidersModel*)self, column, count, (QModelIndex*)parent);
}

void k_nscore__providersmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KNSCore__ProvidersModel_OnInsertColumns((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_remove_rows(void* self, int row, int count, void* parent) {
    return KNSCore__ProvidersModel_RemoveRows((KNSCore__ProvidersModel*)self, row, count, (QModelIndex*)parent);
}

bool k_nscore__providersmodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return KNSCore__ProvidersModel_QBaseRemoveRows((KNSCore__ProvidersModel*)self, row, count, (QModelIndex*)parent);
}

void k_nscore__providersmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KNSCore__ProvidersModel_OnRemoveRows((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_remove_columns(void* self, int column, int count, void* parent) {
    return KNSCore__ProvidersModel_RemoveColumns((KNSCore__ProvidersModel*)self, column, count, (QModelIndex*)parent);
}

bool k_nscore__providersmodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return KNSCore__ProvidersModel_QBaseRemoveColumns((KNSCore__ProvidersModel*)self, column, count, (QModelIndex*)parent);
}

void k_nscore__providersmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KNSCore__ProvidersModel_OnRemoveColumns((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KNSCore__ProvidersModel_MoveRows((KNSCore__ProvidersModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_nscore__providersmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KNSCore__ProvidersModel_QBaseMoveRows((KNSCore__ProvidersModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_nscore__providersmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KNSCore__ProvidersModel_OnMoveRows((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KNSCore__ProvidersModel_MoveColumns((KNSCore__ProvidersModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_nscore__providersmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KNSCore__ProvidersModel_QBaseMoveColumns((KNSCore__ProvidersModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_nscore__providersmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KNSCore__ProvidersModel_OnMoveColumns((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_fetch_more(void* self, void* parent) {
    KNSCore__ProvidersModel_FetchMore((KNSCore__ProvidersModel*)self, (QModelIndex*)parent);
}

void k_nscore__providersmodel_qbase_fetch_more(void* self, void* parent) {
    KNSCore__ProvidersModel_QBaseFetchMore((KNSCore__ProvidersModel*)self, (QModelIndex*)parent);
}

void k_nscore__providersmodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    KNSCore__ProvidersModel_OnFetchMore((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_can_fetch_more(void* self, void* parent) {
    return KNSCore__ProvidersModel_CanFetchMore((KNSCore__ProvidersModel*)self, (QModelIndex*)parent);
}

bool k_nscore__providersmodel_qbase_can_fetch_more(void* self, void* parent) {
    return KNSCore__ProvidersModel_QBaseCanFetchMore((KNSCore__ProvidersModel*)self, (QModelIndex*)parent);
}

void k_nscore__providersmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    KNSCore__ProvidersModel_OnCanFetchMore((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_sort(void* self, int column, int32_t order) {
    KNSCore__ProvidersModel_Sort((KNSCore__ProvidersModel*)self, column, order);
}

void k_nscore__providersmodel_qbase_sort(void* self, int column, int32_t order) {
    KNSCore__ProvidersModel_QBaseSort((KNSCore__ProvidersModel*)self, column, order);
}

void k_nscore__providersmodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KNSCore__ProvidersModel_OnSort((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

QModelIndex* k_nscore__providersmodel_buddy(void* self, void* index) {
    return KNSCore__ProvidersModel_Buddy((KNSCore__ProvidersModel*)self, (QModelIndex*)index);
}

QModelIndex* k_nscore__providersmodel_qbase_buddy(void* self, void* index) {
    return KNSCore__ProvidersModel_QBaseBuddy((KNSCore__ProvidersModel*)self, (QModelIndex*)index);
}

void k_nscore__providersmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    KNSCore__ProvidersModel_OnBuddy((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_nscore__providersmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KNSCore__ProvidersModel_Match((KNSCore__ProvidersModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_nscore__providersmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KNSCore__ProvidersModel_QBaseMatch((KNSCore__ProvidersModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_nscore__providersmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    KNSCore__ProvidersModel_OnMatch((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

QSize* k_nscore__providersmodel_span(void* self, void* index) {
    return KNSCore__ProvidersModel_Span((KNSCore__ProvidersModel*)self, (QModelIndex*)index);
}

QSize* k_nscore__providersmodel_qbase_span(void* self, void* index) {
    return KNSCore__ProvidersModel_QBaseSpan((KNSCore__ProvidersModel*)self, (QModelIndex*)index);
}

void k_nscore__providersmodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    KNSCore__ProvidersModel_OnSpan((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    KNSCore__ProvidersModel_MultiData((KNSCore__ProvidersModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_nscore__providersmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    KNSCore__ProvidersModel_QBaseMultiData((KNSCore__ProvidersModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_nscore__providersmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    KNSCore__ProvidersModel_OnMultiData((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_submit(void* self) {
    return KNSCore__ProvidersModel_Submit((KNSCore__ProvidersModel*)self);
}

bool k_nscore__providersmodel_qbase_submit(void* self) {
    return KNSCore__ProvidersModel_QBaseSubmit((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_on_submit(void* self, bool (*callback)()) {
    KNSCore__ProvidersModel_OnSubmit((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_revert(void* self) {
    KNSCore__ProvidersModel_Revert((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_qbase_revert(void* self) {
    KNSCore__ProvidersModel_QBaseRevert((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_on_revert(void* self, void (*callback)()) {
    KNSCore__ProvidersModel_OnRevert((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_reset_internal_data(void* self) {
    KNSCore__ProvidersModel_ResetInternalData((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_qbase_reset_internal_data(void* self) {
    KNSCore__ProvidersModel_QBaseResetInternalData((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_on_reset_internal_data(void* self, void (*callback)()) {
    KNSCore__ProvidersModel_OnResetInternalData((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_event(void* self, void* event) {
    return KNSCore__ProvidersModel_Event((KNSCore__ProvidersModel*)self, (QEvent*)event);
}

bool k_nscore__providersmodel_qbase_event(void* self, void* event) {
    return KNSCore__ProvidersModel_QBaseEvent((KNSCore__ProvidersModel*)self, (QEvent*)event);
}

void k_nscore__providersmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KNSCore__ProvidersModel_OnEvent((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_event_filter(void* self, void* watched, void* event) {
    return KNSCore__ProvidersModel_EventFilter((KNSCore__ProvidersModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_nscore__providersmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KNSCore__ProvidersModel_QBaseEventFilter((KNSCore__ProvidersModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_nscore__providersmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KNSCore__ProvidersModel_OnEventFilter((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_timer_event(void* self, void* event) {
    KNSCore__ProvidersModel_TimerEvent((KNSCore__ProvidersModel*)self, (QTimerEvent*)event);
}

void k_nscore__providersmodel_qbase_timer_event(void* self, void* event) {
    KNSCore__ProvidersModel_QBaseTimerEvent((KNSCore__ProvidersModel*)self, (QTimerEvent*)event);
}

void k_nscore__providersmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KNSCore__ProvidersModel_OnTimerEvent((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_child_event(void* self, void* event) {
    KNSCore__ProvidersModel_ChildEvent((KNSCore__ProvidersModel*)self, (QChildEvent*)event);
}

void k_nscore__providersmodel_qbase_child_event(void* self, void* event) {
    KNSCore__ProvidersModel_QBaseChildEvent((KNSCore__ProvidersModel*)self, (QChildEvent*)event);
}

void k_nscore__providersmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KNSCore__ProvidersModel_OnChildEvent((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_custom_event(void* self, void* event) {
    KNSCore__ProvidersModel_CustomEvent((KNSCore__ProvidersModel*)self, (QEvent*)event);
}

void k_nscore__providersmodel_qbase_custom_event(void* self, void* event) {
    KNSCore__ProvidersModel_QBaseCustomEvent((KNSCore__ProvidersModel*)self, (QEvent*)event);
}

void k_nscore__providersmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KNSCore__ProvidersModel_OnCustomEvent((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_connect_notify(void* self, void* signal) {
    KNSCore__ProvidersModel_ConnectNotify((KNSCore__ProvidersModel*)self, (QMetaMethod*)signal);
}

void k_nscore__providersmodel_qbase_connect_notify(void* self, void* signal) {
    KNSCore__ProvidersModel_QBaseConnectNotify((KNSCore__ProvidersModel*)self, (QMetaMethod*)signal);
}

void k_nscore__providersmodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KNSCore__ProvidersModel_OnConnectNotify((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_disconnect_notify(void* self, void* signal) {
    KNSCore__ProvidersModel_DisconnectNotify((KNSCore__ProvidersModel*)self, (QMetaMethod*)signal);
}

void k_nscore__providersmodel_qbase_disconnect_notify(void* self, void* signal) {
    KNSCore__ProvidersModel_QBaseDisconnectNotify((KNSCore__ProvidersModel*)self, (QMetaMethod*)signal);
}

void k_nscore__providersmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KNSCore__ProvidersModel_OnDisconnectNotify((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

QModelIndex* k_nscore__providersmodel_create_index(void* self, int row, int column) {
    return KNSCore__ProvidersModel_CreateIndex((KNSCore__ProvidersModel*)self, row, column);
}

QModelIndex* k_nscore__providersmodel_qbase_create_index(void* self, int row, int column) {
    return KNSCore__ProvidersModel_QBaseCreateIndex((KNSCore__ProvidersModel*)self, row, column);
}

void k_nscore__providersmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    KNSCore__ProvidersModel_OnCreateIndex((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_encode_data(void* self, libqt_list indexes, void* stream) {
    KNSCore__ProvidersModel_EncodeData((KNSCore__ProvidersModel*)self, indexes, (QDataStream*)stream);
}

void k_nscore__providersmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    KNSCore__ProvidersModel_QBaseEncodeData((KNSCore__ProvidersModel*)self, indexes, (QDataStream*)stream);
}

void k_nscore__providersmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    KNSCore__ProvidersModel_OnEncodeData((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KNSCore__ProvidersModel_DecodeData((KNSCore__ProvidersModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_nscore__providersmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KNSCore__ProvidersModel_QBaseDecodeData((KNSCore__ProvidersModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_nscore__providersmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    KNSCore__ProvidersModel_OnDecodeData((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    KNSCore__ProvidersModel_BeginInsertRows((KNSCore__ProvidersModel*)self, (QModelIndex*)parent, first, last);
}

void k_nscore__providersmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    KNSCore__ProvidersModel_QBaseBeginInsertRows((KNSCore__ProvidersModel*)self, (QModelIndex*)parent, first, last);
}

void k_nscore__providersmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KNSCore__ProvidersModel_OnBeginInsertRows((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_end_insert_rows(void* self) {
    KNSCore__ProvidersModel_EndInsertRows((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_qbase_end_insert_rows(void* self) {
    KNSCore__ProvidersModel_QBaseEndInsertRows((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_on_end_insert_rows(void* self, void (*callback)()) {
    KNSCore__ProvidersModel_OnEndInsertRows((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    KNSCore__ProvidersModel_BeginRemoveRows((KNSCore__ProvidersModel*)self, (QModelIndex*)parent, first, last);
}

void k_nscore__providersmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    KNSCore__ProvidersModel_QBaseBeginRemoveRows((KNSCore__ProvidersModel*)self, (QModelIndex*)parent, first, last);
}

void k_nscore__providersmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KNSCore__ProvidersModel_OnBeginRemoveRows((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_end_remove_rows(void* self) {
    KNSCore__ProvidersModel_EndRemoveRows((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_qbase_end_remove_rows(void* self) {
    KNSCore__ProvidersModel_QBaseEndRemoveRows((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_on_end_remove_rows(void* self, void (*callback)()) {
    KNSCore__ProvidersModel_OnEndRemoveRows((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KNSCore__ProvidersModel_BeginMoveRows((KNSCore__ProvidersModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_nscore__providersmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KNSCore__ProvidersModel_QBaseBeginMoveRows((KNSCore__ProvidersModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_nscore__providersmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KNSCore__ProvidersModel_OnBeginMoveRows((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_end_move_rows(void* self) {
    KNSCore__ProvidersModel_EndMoveRows((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_qbase_end_move_rows(void* self) {
    KNSCore__ProvidersModel_QBaseEndMoveRows((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_on_end_move_rows(void* self, void (*callback)()) {
    KNSCore__ProvidersModel_OnEndMoveRows((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    KNSCore__ProvidersModel_BeginInsertColumns((KNSCore__ProvidersModel*)self, (QModelIndex*)parent, first, last);
}

void k_nscore__providersmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    KNSCore__ProvidersModel_QBaseBeginInsertColumns((KNSCore__ProvidersModel*)self, (QModelIndex*)parent, first, last);
}

void k_nscore__providersmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KNSCore__ProvidersModel_OnBeginInsertColumns((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_end_insert_columns(void* self) {
    KNSCore__ProvidersModel_EndInsertColumns((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_qbase_end_insert_columns(void* self) {
    KNSCore__ProvidersModel_QBaseEndInsertColumns((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_on_end_insert_columns(void* self, void (*callback)()) {
    KNSCore__ProvidersModel_OnEndInsertColumns((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    KNSCore__ProvidersModel_BeginRemoveColumns((KNSCore__ProvidersModel*)self, (QModelIndex*)parent, first, last);
}

void k_nscore__providersmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    KNSCore__ProvidersModel_QBaseBeginRemoveColumns((KNSCore__ProvidersModel*)self, (QModelIndex*)parent, first, last);
}

void k_nscore__providersmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KNSCore__ProvidersModel_OnBeginRemoveColumns((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_end_remove_columns(void* self) {
    KNSCore__ProvidersModel_EndRemoveColumns((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_qbase_end_remove_columns(void* self) {
    KNSCore__ProvidersModel_QBaseEndRemoveColumns((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_on_end_remove_columns(void* self, void (*callback)()) {
    KNSCore__ProvidersModel_OnEndRemoveColumns((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KNSCore__ProvidersModel_BeginMoveColumns((KNSCore__ProvidersModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_nscore__providersmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KNSCore__ProvidersModel_QBaseBeginMoveColumns((KNSCore__ProvidersModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_nscore__providersmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KNSCore__ProvidersModel_OnBeginMoveColumns((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_end_move_columns(void* self) {
    KNSCore__ProvidersModel_EndMoveColumns((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_qbase_end_move_columns(void* self) {
    KNSCore__ProvidersModel_QBaseEndMoveColumns((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_on_end_move_columns(void* self, void (*callback)()) {
    KNSCore__ProvidersModel_OnEndMoveColumns((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_begin_reset_model(void* self) {
    KNSCore__ProvidersModel_BeginResetModel((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_qbase_begin_reset_model(void* self) {
    KNSCore__ProvidersModel_QBaseBeginResetModel((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_on_begin_reset_model(void* self, void (*callback)()) {
    KNSCore__ProvidersModel_OnBeginResetModel((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_end_reset_model(void* self) {
    KNSCore__ProvidersModel_EndResetModel((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_qbase_end_reset_model(void* self) {
    KNSCore__ProvidersModel_QBaseEndResetModel((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_on_end_reset_model(void* self, void (*callback)()) {
    KNSCore__ProvidersModel_OnEndResetModel((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_change_persistent_index(void* self, void* from, void* to) {
    KNSCore__ProvidersModel_ChangePersistentIndex((KNSCore__ProvidersModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_nscore__providersmodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    KNSCore__ProvidersModel_QBaseChangePersistentIndex((KNSCore__ProvidersModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_nscore__providersmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    KNSCore__ProvidersModel_OnChangePersistentIndex((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KNSCore__ProvidersModel_ChangePersistentIndexList((KNSCore__ProvidersModel*)self, from, to);
}

void k_nscore__providersmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KNSCore__ProvidersModel_QBaseChangePersistentIndexList((KNSCore__ProvidersModel*)self, from, to);
}

void k_nscore__providersmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    KNSCore__ProvidersModel_OnChangePersistentIndexList((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_nscore__providersmodel_persistent_index_list(void* self) {
    libqt_list _arr = KNSCore__ProvidersModel_PersistentIndexList((KNSCore__ProvidersModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_nscore__providersmodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = KNSCore__ProvidersModel_QBasePersistentIndexList((KNSCore__ProvidersModel*)self);
    return _arr;
}

void k_nscore__providersmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    KNSCore__ProvidersModel_OnPersistentIndexList((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

QObject* k_nscore__providersmodel_sender(void* self) {
    return KNSCore__ProvidersModel_Sender((KNSCore__ProvidersModel*)self);
}

QObject* k_nscore__providersmodel_qbase_sender(void* self) {
    return KNSCore__ProvidersModel_QBaseSender((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_on_sender(void* self, QObject* (*callback)()) {
    KNSCore__ProvidersModel_OnSender((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

int32_t k_nscore__providersmodel_sender_signal_index(void* self) {
    return KNSCore__ProvidersModel_SenderSignalIndex((KNSCore__ProvidersModel*)self);
}

int32_t k_nscore__providersmodel_qbase_sender_signal_index(void* self) {
    return KNSCore__ProvidersModel_QBaseSenderSignalIndex((KNSCore__ProvidersModel*)self);
}

void k_nscore__providersmodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KNSCore__ProvidersModel_OnSenderSignalIndex((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

int32_t k_nscore__providersmodel_receivers(void* self, const char* signal) {
    return KNSCore__ProvidersModel_Receivers((KNSCore__ProvidersModel*)self, signal);
}

int32_t k_nscore__providersmodel_qbase_receivers(void* self, const char* signal) {
    return KNSCore__ProvidersModel_QBaseReceivers((KNSCore__ProvidersModel*)self, signal);
}

void k_nscore__providersmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KNSCore__ProvidersModel_OnReceivers((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

bool k_nscore__providersmodel_is_signal_connected(void* self, void* signal) {
    return KNSCore__ProvidersModel_IsSignalConnected((KNSCore__ProvidersModel*)self, (QMetaMethod*)signal);
}

bool k_nscore__providersmodel_qbase_is_signal_connected(void* self, void* signal) {
    return KNSCore__ProvidersModel_QBaseIsSignalConnected((KNSCore__ProvidersModel*)self, (QMetaMethod*)signal);
}

void k_nscore__providersmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KNSCore__ProvidersModel_OnIsSignalConnected((KNSCore__ProvidersModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_nscore__providersmodel_delete(void* self) {
    KNSCore__ProvidersModel_Delete((KNSCore__ProvidersModel*)(self));
}
