#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libkcolorschememodel.hpp"
#include "libkcolorschememodel.h"

KColorSchemeModel* k_colorschememodel_new() {
    return KColorSchemeModel_New();
}

KColorSchemeModel* k_colorschememodel_new2(void* parent) {
    return KColorSchemeModel_New2((QObject*)parent);
}

const QMetaObject* k_colorschememodel_meta_object(const void* self) {
    return KColorSchemeModel_MetaObject((KColorSchemeModel*)self);
}

void k_colorschememodel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    KColorSchemeModel_OnMetaObject((KColorSchemeModel*)self, (intptr_t)callback);
}

const QMetaObject* k_colorschememodel_super_meta_object(const void* self) {
    return KColorSchemeModel_SuperMetaObject((KColorSchemeModel*)self);
}

void* k_colorschememodel_metacast(void* self, const char* param1) {
    return KColorSchemeModel_Metacast((KColorSchemeModel*)self, param1);
}

void k_colorschememodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KColorSchemeModel_OnMetacast((KColorSchemeModel*)self, (intptr_t)callback);
}

void* k_colorschememodel_super_metacast(void* self, const char* param1) {
    return KColorSchemeModel_SuperMetacast((KColorSchemeModel*)self, param1);
}

int32_t k_colorschememodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KColorSchemeModel_Metacall((KColorSchemeModel*)self, param1, param2, param3);
}

void k_colorschememodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KColorSchemeModel_OnMetacall((KColorSchemeModel*)self, (intptr_t)callback);
}

int32_t k_colorschememodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KColorSchemeModel_SuperMetacall((KColorSchemeModel*)self, param1, param2, param3);
}

const char* k_colorschememodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* k_colorschememodel_data(const void* self, const void* index, int role) {
    return KColorSchemeModel_Data((KColorSchemeModel*)self, (QModelIndex*)index, role);
}

void k_colorschememodel_on_data(void* self, QVariant* (*callback)(const void*, const void*, int)) {
    KColorSchemeModel_OnData((KColorSchemeModel*)self, (intptr_t)callback);
}

QVariant* k_colorschememodel_super_data(const void* self, const void* index, int role) {
    return KColorSchemeModel_SuperData((KColorSchemeModel*)self, (QModelIndex*)index, role);
}

int32_t k_colorschememodel_row_count(const void* self, const void* parent) {
    return KColorSchemeModel_RowCount((KColorSchemeModel*)self, (QModelIndex*)parent);
}

void k_colorschememodel_on_row_count(void* self, int32_t (*callback)(const void*, const void*)) {
    KColorSchemeModel_OnRowCount((KColorSchemeModel*)self, (intptr_t)callback);
}

int32_t k_colorschememodel_super_row_count(const void* self, const void* parent) {
    return KColorSchemeModel_SuperRowCount((KColorSchemeModel*)self, (QModelIndex*)parent);
}

const char* k_colorschememodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_colorschememodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_colorschememodel_has_index(const void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* k_colorschememodel_parent(const void* self, const void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void k_colorschememodel_on_parent(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t k_colorschememodel_column_count(const void* self, const void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void k_colorschememodel_on_column_count(void* self, int32_t (*callback)(const void*, const void*)) {
    QAbstractItemModel_OnColumnCount((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_has_children(const void* self, const void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void k_colorschememodel_on_has_children(void* self, bool (*callback)(const void*, const void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_super_has_children(const void* self, const void* parent) {
    return QAbstractItemModel_SuperHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool k_colorschememodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_colorschememodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_colorschememodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_colorschememodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_colorschememodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_colorschememodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_colorschememodel_check_index(const void* self, const void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_colorschememodel_data_changed(void* self, const void* topLeft, const void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_colorschememodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_colorschememodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_colorschememodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_colorschememodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_has_index3(const void* self, int row, int column, const void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_colorschememodel_insert_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_colorschememodel_insert_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_colorschememodel_remove_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_colorschememodel_remove_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_colorschememodel_check_index2(const void* self, const void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_colorschememodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_colorschememodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_colorschememodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_colorschememodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_colorschememodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_colorschememodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_colorschememodel_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorschememodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_colorschememodel_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_colorschememodel_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_colorschememodel_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_colorschememodel_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_colorschememodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_colorschememodel_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_colorschememodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_colorschememodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_colorschememodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_colorschememodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_colorschememodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_colorschememodel_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_colorschememodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_colorschememodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_colorschememodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_colorschememodel_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_colorschememodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_colorschememodel_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_colorschememodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_colorschememodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_colorschememodel_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_colorschememodel_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_colorschememodel_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_colorschememodel_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_colorschememodel_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_colorschememodel_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_colorschememodel_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_colorschememodel_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_colorschememodel_dynamic_property_names\n");
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

QBindingStorage* k_colorschememodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_colorschememodel_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_colorschememodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_colorschememodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_colorschememodel_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_colorschememodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_colorschememodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_colorschememodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_colorschememodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_colorschememodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_colorschememodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_colorschememodel_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_colorschememodel_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_colorschememodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_colorschememodel_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_colorschememodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_colorschememodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* k_colorschememodel_index(const void* self, int row, int column, const void* parent) {
    return KColorSchemeModel_Index((KColorSchemeModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_colorschememodel_super_index(const void* self, int row, int column, const void* parent) {
    return KColorSchemeModel_SuperIndex((KColorSchemeModel*)self, row, column, (QModelIndex*)parent);
}

void k_colorschememodel_on_index(void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    KColorSchemeModel_OnIndex((KColorSchemeModel*)self, (intptr_t)callback);
}

QModelIndex* k_colorschememodel_sibling(const void* self, int row, int column, const void* idx) {
    return KColorSchemeModel_Sibling((KColorSchemeModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_colorschememodel_super_sibling(const void* self, int row, int column, const void* idx) {
    return KColorSchemeModel_SuperSibling((KColorSchemeModel*)self, row, column, (QModelIndex*)idx);
}

void k_colorschememodel_on_sibling(void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    KColorSchemeModel_OnSibling((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KColorSchemeModel_DropMimeData((KColorSchemeModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_colorschememodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KColorSchemeModel_SuperDropMimeData((KColorSchemeModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_colorschememodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*)) {
    KColorSchemeModel_OnDropMimeData((KColorSchemeModel*)self, (intptr_t)callback);
}

int32_t k_colorschememodel_flags(const void* self, const void* index) {
    return KColorSchemeModel_Flags((KColorSchemeModel*)self, (QModelIndex*)index);
}

int32_t k_colorschememodel_super_flags(const void* self, const void* index) {
    return KColorSchemeModel_SuperFlags((KColorSchemeModel*)self, (QModelIndex*)index);
}

void k_colorschememodel_on_flags(void* self, int32_t (*callback)(const void*, const void*)) {
    KColorSchemeModel_OnFlags((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_set_data(void* self, const void* index, const void* value, int role) {
    return KColorSchemeModel_SetData((KColorSchemeModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_colorschememodel_super_set_data(void* self, const void* index, const void* value, int role) {
    return KColorSchemeModel_SuperSetData((KColorSchemeModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_colorschememodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int)) {
    KColorSchemeModel_OnSetData((KColorSchemeModel*)self, (intptr_t)callback);
}

QVariant* k_colorschememodel_header_data(const void* self, int section, int32_t orientation, int role) {
    return KColorSchemeModel_HeaderData((KColorSchemeModel*)self, section, orientation, role);
}

QVariant* k_colorschememodel_super_header_data(const void* self, int section, int32_t orientation, int role) {
    return KColorSchemeModel_SuperHeaderData((KColorSchemeModel*)self, section, orientation, role);
}

void k_colorschememodel_on_header_data(void* self, QVariant* (*callback)(const void*, int, int32_t, int)) {
    KColorSchemeModel_OnHeaderData((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return KColorSchemeModel_SetHeaderData((KColorSchemeModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_colorschememodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return KColorSchemeModel_SuperSetHeaderData((KColorSchemeModel*)self, section, orientation, (QVariant*)value, role);
}

void k_colorschememodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int)) {
    KColorSchemeModel_OnSetHeaderData((KColorSchemeModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_colorschememodel_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KColorSchemeModel_ItemData((KColorSchemeModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_colorschememodel_super_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KColorSchemeModel_SuperItemData((KColorSchemeModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_colorschememodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(const void*, const void*)) {
    KColorSchemeModel_OnItemData((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_colorschememodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_colorschememodel_set_item_data\n");
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
    bool _out = KColorSchemeModel_SetItemData((KColorSchemeModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool k_colorschememodel_super_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_colorschememodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_colorschememodel_set_item_data\n");
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
    bool _out = KColorSchemeModel_SuperSetItemData((KColorSchemeModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_colorschememodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map /* of int to QVariant* */)) {
    KColorSchemeModel_OnSetItemData((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_clear_item_data(void* self, const void* index) {
    return KColorSchemeModel_ClearItemData((KColorSchemeModel*)self, (QModelIndex*)index);
}

bool k_colorschememodel_super_clear_item_data(void* self, const void* index) {
    return KColorSchemeModel_SuperClearItemData((KColorSchemeModel*)self, (QModelIndex*)index);
}

void k_colorschememodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*)) {
    KColorSchemeModel_OnClearItemData((KColorSchemeModel*)self, (intptr_t)callback);
}

const char** k_colorschememodel_mime_types(const void* self) {
    libqt_list _arr = KColorSchemeModel_MimeTypes((KColorSchemeModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_colorschememodel_mime_types\n");
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

const char** k_colorschememodel_super_mime_types(const void* self) {
    libqt_list _arr = KColorSchemeModel_SuperMimeTypes((KColorSchemeModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_colorschememodel_mime_types\n");
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

void k_colorschememodel_on_mime_types(void* self, const char** (*callback)(const void*)) {
    KColorSchemeModel_OnMimeTypes((KColorSchemeModel*)self, (intptr_t)callback);
}

QMimeData* k_colorschememodel_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KColorSchemeModel_MimeData((KColorSchemeModel*)self, indexes);
}

QMimeData* k_colorschememodel_super_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KColorSchemeModel_SuperMimeData((KColorSchemeModel*)self, indexes);
}

void k_colorschememodel_on_mime_data(void* self, QMimeData* (*callback)(const void*, libqt_list /* of QModelIndex* */)) {
    KColorSchemeModel_OnMimeData((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KColorSchemeModel_CanDropMimeData((KColorSchemeModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_colorschememodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KColorSchemeModel_SuperCanDropMimeData((KColorSchemeModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_colorschememodel_on_can_drop_mime_data(void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*)) {
    KColorSchemeModel_OnCanDropMimeData((KColorSchemeModel*)self, (intptr_t)callback);
}

int32_t k_colorschememodel_supported_drop_actions(const void* self) {
    return KColorSchemeModel_SupportedDropActions((KColorSchemeModel*)self);
}

int32_t k_colorschememodel_super_supported_drop_actions(const void* self) {
    return KColorSchemeModel_SuperSupportedDropActions((KColorSchemeModel*)self);
}

void k_colorschememodel_on_supported_drop_actions(void* self, int32_t (*callback)(const void*)) {
    KColorSchemeModel_OnSupportedDropActions((KColorSchemeModel*)self, (intptr_t)callback);
}

int32_t k_colorschememodel_supported_drag_actions(const void* self) {
    return KColorSchemeModel_SupportedDragActions((KColorSchemeModel*)self);
}

int32_t k_colorschememodel_super_supported_drag_actions(const void* self) {
    return KColorSchemeModel_SuperSupportedDragActions((KColorSchemeModel*)self);
}

void k_colorschememodel_on_supported_drag_actions(void* self, int32_t (*callback)(const void*)) {
    KColorSchemeModel_OnSupportedDragActions((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_insert_rows(void* self, int row, int count, const void* parent) {
    return KColorSchemeModel_InsertRows((KColorSchemeModel*)self, row, count, (QModelIndex*)parent);
}

bool k_colorschememodel_super_insert_rows(void* self, int row, int count, const void* parent) {
    return KColorSchemeModel_SuperInsertRows((KColorSchemeModel*)self, row, count, (QModelIndex*)parent);
}

void k_colorschememodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    KColorSchemeModel_OnInsertRows((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_insert_columns(void* self, int column, int count, const void* parent) {
    return KColorSchemeModel_InsertColumns((KColorSchemeModel*)self, column, count, (QModelIndex*)parent);
}

bool k_colorschememodel_super_insert_columns(void* self, int column, int count, const void* parent) {
    return KColorSchemeModel_SuperInsertColumns((KColorSchemeModel*)self, column, count, (QModelIndex*)parent);
}

void k_colorschememodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    KColorSchemeModel_OnInsertColumns((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_remove_rows(void* self, int row, int count, const void* parent) {
    return KColorSchemeModel_RemoveRows((KColorSchemeModel*)self, row, count, (QModelIndex*)parent);
}

bool k_colorschememodel_super_remove_rows(void* self, int row, int count, const void* parent) {
    return KColorSchemeModel_SuperRemoveRows((KColorSchemeModel*)self, row, count, (QModelIndex*)parent);
}

void k_colorschememodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    KColorSchemeModel_OnRemoveRows((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_remove_columns(void* self, int column, int count, const void* parent) {
    return KColorSchemeModel_RemoveColumns((KColorSchemeModel*)self, column, count, (QModelIndex*)parent);
}

bool k_colorschememodel_super_remove_columns(void* self, int column, int count, const void* parent) {
    return KColorSchemeModel_SuperRemoveColumns((KColorSchemeModel*)self, column, count, (QModelIndex*)parent);
}

void k_colorschememodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    KColorSchemeModel_OnRemoveColumns((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return KColorSchemeModel_MoveRows((KColorSchemeModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_colorschememodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return KColorSchemeModel_SuperMoveRows((KColorSchemeModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_colorschememodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    KColorSchemeModel_OnMoveRows((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return KColorSchemeModel_MoveColumns((KColorSchemeModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_colorschememodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return KColorSchemeModel_SuperMoveColumns((KColorSchemeModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_colorschememodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    KColorSchemeModel_OnMoveColumns((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_fetch_more(void* self, const void* parent) {
    KColorSchemeModel_FetchMore((KColorSchemeModel*)self, (QModelIndex*)parent);
}

void k_colorschememodel_super_fetch_more(void* self, const void* parent) {
    KColorSchemeModel_SuperFetchMore((KColorSchemeModel*)self, (QModelIndex*)parent);
}

void k_colorschememodel_on_fetch_more(void* self, void (*callback)(void*, const void*)) {
    KColorSchemeModel_OnFetchMore((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_can_fetch_more(const void* self, const void* parent) {
    return KColorSchemeModel_CanFetchMore((KColorSchemeModel*)self, (QModelIndex*)parent);
}

bool k_colorschememodel_super_can_fetch_more(const void* self, const void* parent) {
    return KColorSchemeModel_SuperCanFetchMore((KColorSchemeModel*)self, (QModelIndex*)parent);
}

void k_colorschememodel_on_can_fetch_more(void* self, bool (*callback)(const void*, const void*)) {
    KColorSchemeModel_OnCanFetchMore((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_sort(void* self, int column, int32_t order) {
    KColorSchemeModel_Sort((KColorSchemeModel*)self, column, order);
}

void k_colorschememodel_super_sort(void* self, int column, int32_t order) {
    KColorSchemeModel_SuperSort((KColorSchemeModel*)self, column, order);
}

void k_colorschememodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KColorSchemeModel_OnSort((KColorSchemeModel*)self, (intptr_t)callback);
}

QModelIndex* k_colorschememodel_buddy(const void* self, const void* index) {
    return KColorSchemeModel_Buddy((KColorSchemeModel*)self, (QModelIndex*)index);
}

QModelIndex* k_colorschememodel_super_buddy(const void* self, const void* index) {
    return KColorSchemeModel_SuperBuddy((KColorSchemeModel*)self, (QModelIndex*)index);
}

void k_colorschememodel_on_buddy(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KColorSchemeModel_OnBuddy((KColorSchemeModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_colorschememodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = KColorSchemeModel_Match((KColorSchemeModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_colorschememodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = KColorSchemeModel_SuperMatch((KColorSchemeModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_colorschememodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(const void*, const void*, int, const void*, int, int32_t)) {
    KColorSchemeModel_OnMatch((KColorSchemeModel*)self, (intptr_t)callback);
}

QSize* k_colorschememodel_span(const void* self, const void* index) {
    return KColorSchemeModel_Span((KColorSchemeModel*)self, (QModelIndex*)index);
}

QSize* k_colorschememodel_super_span(const void* self, const void* index) {
    return KColorSchemeModel_SuperSpan((KColorSchemeModel*)self, (QModelIndex*)index);
}

void k_colorschememodel_on_span(void* self, QSize* (*callback)(const void*, const void*)) {
    KColorSchemeModel_OnSpan((KColorSchemeModel*)self, (intptr_t)callback);
}

libqt_map /* of int to const char* */ k_colorschememodel_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KColorSchemeModel_RoleNames((KColorSchemeModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_colorschememodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_colorschememodel_role_names\n");
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

libqt_map /* of int to const char* */ k_colorschememodel_super_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KColorSchemeModel_SuperRoleNames((KColorSchemeModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_colorschememodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_colorschememodel_role_names\n");
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

void k_colorschememodel_on_role_names(void* self, libqt_map /* of int to const char* */ (*callback)(const void*)) {
    KColorSchemeModel_OnRoleNames((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_multi_data(const void* self, const void* index, void* roleDataSpan) {
    KColorSchemeModel_MultiData((KColorSchemeModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_colorschememodel_super_multi_data(const void* self, const void* index, void* roleDataSpan) {
    KColorSchemeModel_SuperMultiData((KColorSchemeModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_colorschememodel_on_multi_data(void* self, void (*callback)(const void*, const void*, void*)) {
    KColorSchemeModel_OnMultiData((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_submit(void* self) {
    return KColorSchemeModel_Submit((KColorSchemeModel*)self);
}

bool k_colorschememodel_super_submit(void* self) {
    return KColorSchemeModel_SuperSubmit((KColorSchemeModel*)self);
}

void k_colorschememodel_on_submit(void* self, bool (*callback)(void*)) {
    KColorSchemeModel_OnSubmit((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_revert(void* self) {
    KColorSchemeModel_Revert((KColorSchemeModel*)self);
}

void k_colorschememodel_super_revert(void* self) {
    KColorSchemeModel_SuperRevert((KColorSchemeModel*)self);
}

void k_colorschememodel_on_revert(void* self, void (*callback)(void*)) {
    KColorSchemeModel_OnRevert((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_reset_internal_data(void* self) {
    KColorSchemeModel_ResetInternalData((KColorSchemeModel*)self);
}

void k_colorschememodel_super_reset_internal_data(void* self) {
    KColorSchemeModel_SuperResetInternalData((KColorSchemeModel*)self);
}

void k_colorschememodel_on_reset_internal_data(void* self, void (*callback)(void*)) {
    KColorSchemeModel_OnResetInternalData((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_event(void* self, void* event) {
    return KColorSchemeModel_Event((KColorSchemeModel*)self, (QEvent*)event);
}

bool k_colorschememodel_super_event(void* self, void* event) {
    return KColorSchemeModel_SuperEvent((KColorSchemeModel*)self, (QEvent*)event);
}

void k_colorschememodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KColorSchemeModel_OnEvent((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_event_filter(void* self, void* watched, void* event) {
    return KColorSchemeModel_EventFilter((KColorSchemeModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_colorschememodel_super_event_filter(void* self, void* watched, void* event) {
    return KColorSchemeModel_SuperEventFilter((KColorSchemeModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_colorschememodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KColorSchemeModel_OnEventFilter((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_timer_event(void* self, void* event) {
    KColorSchemeModel_TimerEvent((KColorSchemeModel*)self, (QTimerEvent*)event);
}

void k_colorschememodel_super_timer_event(void* self, void* event) {
    KColorSchemeModel_SuperTimerEvent((KColorSchemeModel*)self, (QTimerEvent*)event);
}

void k_colorschememodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KColorSchemeModel_OnTimerEvent((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_child_event(void* self, void* event) {
    KColorSchemeModel_ChildEvent((KColorSchemeModel*)self, (QChildEvent*)event);
}

void k_colorschememodel_super_child_event(void* self, void* event) {
    KColorSchemeModel_SuperChildEvent((KColorSchemeModel*)self, (QChildEvent*)event);
}

void k_colorschememodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KColorSchemeModel_OnChildEvent((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_custom_event(void* self, void* event) {
    KColorSchemeModel_CustomEvent((KColorSchemeModel*)self, (QEvent*)event);
}

void k_colorschememodel_super_custom_event(void* self, void* event) {
    KColorSchemeModel_SuperCustomEvent((KColorSchemeModel*)self, (QEvent*)event);
}

void k_colorschememodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KColorSchemeModel_OnCustomEvent((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_connect_notify(void* self, const void* signal) {
    KColorSchemeModel_ConnectNotify((KColorSchemeModel*)self, (QMetaMethod*)signal);
}

void k_colorschememodel_super_connect_notify(void* self, const void* signal) {
    KColorSchemeModel_SuperConnectNotify((KColorSchemeModel*)self, (QMetaMethod*)signal);
}

void k_colorschememodel_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    KColorSchemeModel_OnConnectNotify((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_disconnect_notify(void* self, const void* signal) {
    KColorSchemeModel_DisconnectNotify((KColorSchemeModel*)self, (QMetaMethod*)signal);
}

void k_colorschememodel_super_disconnect_notify(void* self, const void* signal) {
    KColorSchemeModel_SuperDisconnectNotify((KColorSchemeModel*)self, (QMetaMethod*)signal);
}

void k_colorschememodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    KColorSchemeModel_OnDisconnectNotify((KColorSchemeModel*)self, (intptr_t)callback);
}

QModelIndex* k_colorschememodel_create_index(const void* self, int row, int column) {
    return KColorSchemeModel_CreateIndex((KColorSchemeModel*)self, row, column);
}

void k_colorschememodel_encode_data(const void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KColorSchemeModel_EncodeData((KColorSchemeModel*)self, indexes, (QDataStream*)stream);
}

bool k_colorschememodel_decode_data(void* self, int row, int column, const void* parent, void* stream) {
    return KColorSchemeModel_DecodeData((KColorSchemeModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_colorschememodel_begin_insert_rows(void* self, const void* parent, int first, int last) {
    KColorSchemeModel_BeginInsertRows((KColorSchemeModel*)self, (QModelIndex*)parent, first, last);
}

void k_colorschememodel_end_insert_rows(void* self) {
    KColorSchemeModel_EndInsertRows((KColorSchemeModel*)self);
}

void k_colorschememodel_begin_remove_rows(void* self, const void* parent, int first, int last) {
    KColorSchemeModel_BeginRemoveRows((KColorSchemeModel*)self, (QModelIndex*)parent, first, last);
}

void k_colorschememodel_end_remove_rows(void* self) {
    KColorSchemeModel_EndRemoveRows((KColorSchemeModel*)self);
}

bool k_colorschememodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow) {
    return KColorSchemeModel_BeginMoveRows((KColorSchemeModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_colorschememodel_end_move_rows(void* self) {
    KColorSchemeModel_EndMoveRows((KColorSchemeModel*)self);
}

void k_colorschememodel_begin_insert_columns(void* self, const void* parent, int first, int last) {
    KColorSchemeModel_BeginInsertColumns((KColorSchemeModel*)self, (QModelIndex*)parent, first, last);
}

void k_colorschememodel_end_insert_columns(void* self) {
    KColorSchemeModel_EndInsertColumns((KColorSchemeModel*)self);
}

void k_colorschememodel_begin_remove_columns(void* self, const void* parent, int first, int last) {
    KColorSchemeModel_BeginRemoveColumns((KColorSchemeModel*)self, (QModelIndex*)parent, first, last);
}

void k_colorschememodel_end_remove_columns(void* self) {
    KColorSchemeModel_EndRemoveColumns((KColorSchemeModel*)self);
}

bool k_colorschememodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn) {
    return KColorSchemeModel_BeginMoveColumns((KColorSchemeModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_colorschememodel_end_move_columns(void* self) {
    KColorSchemeModel_EndMoveColumns((KColorSchemeModel*)self);
}

void k_colorschememodel_begin_reset_model(void* self) {
    KColorSchemeModel_BeginResetModel((KColorSchemeModel*)self);
}

void k_colorschememodel_end_reset_model(void* self) {
    KColorSchemeModel_EndResetModel((KColorSchemeModel*)self);
}

void k_colorschememodel_change_persistent_index(void* self, const void* from, const void* to) {
    KColorSchemeModel_ChangePersistentIndex((KColorSchemeModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_colorschememodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KColorSchemeModel_ChangePersistentIndexList((KColorSchemeModel*)self, from, to);
}

libqt_list /* of QModelIndex* */ k_colorschememodel_persistent_index_list(const void* self) {
    libqt_list _arr = KColorSchemeModel_PersistentIndexList((KColorSchemeModel*)self);
    return _arr;
}

QObject* k_colorschememodel_sender(const void* self) {
    return KColorSchemeModel_Sender((KColorSchemeModel*)self);
}

int32_t k_colorschememodel_sender_signal_index(const void* self) {
    return KColorSchemeModel_SenderSignalIndex((KColorSchemeModel*)self);
}

int32_t k_colorschememodel_receivers(const void* self, const char* signal) {
    return KColorSchemeModel_Receivers((KColorSchemeModel*)self, signal);
}

bool k_colorschememodel_is_signal_connected(const void* self, const void* signal) {
    return KColorSchemeModel_IsSignalConnected((KColorSchemeModel*)self, (QMetaMethod*)signal);
}

void k_colorschememodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_colorschememodel_delete(void* self) {
    KColorSchemeModel_Delete((KColorSchemeModel*)(self));
}
