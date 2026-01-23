#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libkpagemodel.hpp"
#include "libkpagemodel.h"

KPageModel* k_pagemodel_new() {
    return KPageModel_new();
}

KPageModel* k_pagemodel_new2(void* parent) {
    return KPageModel_new2((QObject*)parent);
}

const QMetaObject* k_pagemodel_meta_object(void* self) {
    return KPageModel_MetaObject((KPageModel*)self);
}

void* k_pagemodel_metacast(void* self, const char* param1) {
    return KPageModel_Metacast((KPageModel*)self, param1);
}

int32_t k_pagemodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPageModel_Metacall((KPageModel*)self, param1, param2, param3);
}

void k_pagemodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPageModel_OnMetacall((KPageModel*)self, (intptr_t)callback);
}

int32_t k_pagemodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPageModel_QBaseMetacall((KPageModel*)self, param1, param2, param3);
}

const char* k_pagemodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pagemodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pagemodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_pagemodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool k_pagemodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_pagemodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_pagemodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_pagemodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_pagemodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_pagemodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_pagemodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_pagemodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_pagemodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_pagemodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_pagemodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_pagemodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_pagemodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_pagemodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_pagemodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_pagemodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_pagemodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_pagemodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_pagemodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_pagemodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_pagemodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_pagemodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_pagemodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_pagemodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_pagemodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagemodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_pagemodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_pagemodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_pagemodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_pagemodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_pagemodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_pagemodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_pagemodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_pagemodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_pagemodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_pagemodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_pagemodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_pagemodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_pagemodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_pagemodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_pagemodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_pagemodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_pagemodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_pagemodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_pagemodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_pagemodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_pagemodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_pagemodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_pagemodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_pagemodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_pagemodel_dynamic_property_names\n");
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

QBindingStorage* k_pagemodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_pagemodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_pagemodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_pagemodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_pagemodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_pagemodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_pagemodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_pagemodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_pagemodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_pagemodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_pagemodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_pagemodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_pagemodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* k_pagemodel_index(void* self, int row, int column, void* parent) {
    return KPageModel_Index((KPageModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_pagemodel_qbase_index(void* self, int row, int column, void* parent) {
    return KPageModel_QBaseIndex((KPageModel*)self, row, column, (QModelIndex*)parent);
}

void k_pagemodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KPageModel_OnIndex((KPageModel*)self, (intptr_t)callback);
}

QModelIndex* k_pagemodel_parent(void* self, void* child) {
    return KPageModel_Parent((KPageModel*)self, (QModelIndex*)child);
}

QModelIndex* k_pagemodel_qbase_parent(void* self, void* child) {
    return KPageModel_QBaseParent((KPageModel*)self, (QModelIndex*)child);
}

void k_pagemodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    KPageModel_OnParent((KPageModel*)self, (intptr_t)callback);
}

QModelIndex* k_pagemodel_sibling(void* self, int row, int column, void* idx) {
    return KPageModel_Sibling((KPageModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_pagemodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return KPageModel_QBaseSibling((KPageModel*)self, row, column, (QModelIndex*)idx);
}

void k_pagemodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KPageModel_OnSibling((KPageModel*)self, (intptr_t)callback);
}

int32_t k_pagemodel_row_count(void* self, void* parent) {
    return KPageModel_RowCount((KPageModel*)self, (QModelIndex*)parent);
}

int32_t k_pagemodel_qbase_row_count(void* self, void* parent) {
    return KPageModel_QBaseRowCount((KPageModel*)self, (QModelIndex*)parent);
}

void k_pagemodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    KPageModel_OnRowCount((KPageModel*)self, (intptr_t)callback);
}

int32_t k_pagemodel_column_count(void* self, void* parent) {
    return KPageModel_ColumnCount((KPageModel*)self, (QModelIndex*)parent);
}

int32_t k_pagemodel_qbase_column_count(void* self, void* parent) {
    return KPageModel_QBaseColumnCount((KPageModel*)self, (QModelIndex*)parent);
}

void k_pagemodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    KPageModel_OnColumnCount((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_has_children(void* self, void* parent) {
    return KPageModel_HasChildren((KPageModel*)self, (QModelIndex*)parent);
}

bool k_pagemodel_qbase_has_children(void* self, void* parent) {
    return KPageModel_QBaseHasChildren((KPageModel*)self, (QModelIndex*)parent);
}

void k_pagemodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    KPageModel_OnHasChildren((KPageModel*)self, (intptr_t)callback);
}

QVariant* k_pagemodel_data(void* self, void* index, int role) {
    return KPageModel_Data((KPageModel*)self, (QModelIndex*)index, role);
}

QVariant* k_pagemodel_qbase_data(void* self, void* index, int role) {
    return KPageModel_QBaseData((KPageModel*)self, (QModelIndex*)index, role);
}

void k_pagemodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    KPageModel_OnData((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_set_data(void* self, void* index, void* value, int role) {
    return KPageModel_SetData((KPageModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_pagemodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return KPageModel_QBaseSetData((KPageModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_pagemodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    KPageModel_OnSetData((KPageModel*)self, (intptr_t)callback);
}

QVariant* k_pagemodel_header_data(void* self, int section, int32_t orientation, int role) {
    return KPageModel_HeaderData((KPageModel*)self, section, orientation, role);
}

QVariant* k_pagemodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return KPageModel_QBaseHeaderData((KPageModel*)self, section, orientation, role);
}

void k_pagemodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    KPageModel_OnHeaderData((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KPageModel_SetHeaderData((KPageModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_pagemodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KPageModel_QBaseSetHeaderData((KPageModel*)self, section, orientation, (QVariant*)value, role);
}

void k_pagemodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    KPageModel_OnSetHeaderData((KPageModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_pagemodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KPageModel_ItemData((KPageModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_pagemodel_qbase_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KPageModel_QBaseItemData((KPageModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_pagemodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    KPageModel_OnItemData((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_pagemodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_pagemodel_set_item_data\n");
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
    bool _out = KPageModel_SetItemData((KPageModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool k_pagemodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_pagemodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_pagemodel_set_item_data\n");
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
    bool _out = KPageModel_QBaseSetItemData((KPageModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_pagemodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    KPageModel_OnSetItemData((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_clear_item_data(void* self, void* index) {
    return KPageModel_ClearItemData((KPageModel*)self, (QModelIndex*)index);
}

bool k_pagemodel_qbase_clear_item_data(void* self, void* index) {
    return KPageModel_QBaseClearItemData((KPageModel*)self, (QModelIndex*)index);
}

void k_pagemodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    KPageModel_OnClearItemData((KPageModel*)self, (intptr_t)callback);
}

const char** k_pagemodel_mime_types(void* self) {
    libqt_list _arr = KPageModel_MimeTypes((KPageModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_pagemodel_mime_types\n");
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

const char** k_pagemodel_qbase_mime_types(void* self) {
    libqt_list _arr = KPageModel_QBaseMimeTypes((KPageModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_pagemodel_mime_types\n");
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

void k_pagemodel_on_mime_types(void* self, const char** (*callback)()) {
    KPageModel_OnMimeTypes((KPageModel*)self, (intptr_t)callback);
}

QMimeData* k_pagemodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KPageModel_MimeData((KPageModel*)self, indexes);
}

QMimeData* k_pagemodel_qbase_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KPageModel_QBaseMimeData((KPageModel*)self, indexes);
}

void k_pagemodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    KPageModel_OnMimeData((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KPageModel_CanDropMimeData((KPageModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_pagemodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KPageModel_QBaseCanDropMimeData((KPageModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_pagemodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KPageModel_OnCanDropMimeData((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KPageModel_DropMimeData((KPageModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_pagemodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KPageModel_QBaseDropMimeData((KPageModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_pagemodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KPageModel_OnDropMimeData((KPageModel*)self, (intptr_t)callback);
}

int32_t k_pagemodel_supported_drop_actions(void* self) {
    return KPageModel_SupportedDropActions((KPageModel*)self);
}

int32_t k_pagemodel_qbase_supported_drop_actions(void* self) {
    return KPageModel_QBaseSupportedDropActions((KPageModel*)self);
}

void k_pagemodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KPageModel_OnSupportedDropActions((KPageModel*)self, (intptr_t)callback);
}

int32_t k_pagemodel_supported_drag_actions(void* self) {
    return KPageModel_SupportedDragActions((KPageModel*)self);
}

int32_t k_pagemodel_qbase_supported_drag_actions(void* self) {
    return KPageModel_QBaseSupportedDragActions((KPageModel*)self);
}

void k_pagemodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    KPageModel_OnSupportedDragActions((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_insert_rows(void* self, int row, int count, void* parent) {
    return KPageModel_InsertRows((KPageModel*)self, row, count, (QModelIndex*)parent);
}

bool k_pagemodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return KPageModel_QBaseInsertRows((KPageModel*)self, row, count, (QModelIndex*)parent);
}

void k_pagemodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KPageModel_OnInsertRows((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_insert_columns(void* self, int column, int count, void* parent) {
    return KPageModel_InsertColumns((KPageModel*)self, column, count, (QModelIndex*)parent);
}

bool k_pagemodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return KPageModel_QBaseInsertColumns((KPageModel*)self, column, count, (QModelIndex*)parent);
}

void k_pagemodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KPageModel_OnInsertColumns((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_remove_rows(void* self, int row, int count, void* parent) {
    return KPageModel_RemoveRows((KPageModel*)self, row, count, (QModelIndex*)parent);
}

bool k_pagemodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return KPageModel_QBaseRemoveRows((KPageModel*)self, row, count, (QModelIndex*)parent);
}

void k_pagemodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KPageModel_OnRemoveRows((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_remove_columns(void* self, int column, int count, void* parent) {
    return KPageModel_RemoveColumns((KPageModel*)self, column, count, (QModelIndex*)parent);
}

bool k_pagemodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return KPageModel_QBaseRemoveColumns((KPageModel*)self, column, count, (QModelIndex*)parent);
}

void k_pagemodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KPageModel_OnRemoveColumns((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KPageModel_MoveRows((KPageModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_pagemodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KPageModel_QBaseMoveRows((KPageModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_pagemodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KPageModel_OnMoveRows((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KPageModel_MoveColumns((KPageModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_pagemodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KPageModel_QBaseMoveColumns((KPageModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_pagemodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KPageModel_OnMoveColumns((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_fetch_more(void* self, void* parent) {
    KPageModel_FetchMore((KPageModel*)self, (QModelIndex*)parent);
}

void k_pagemodel_qbase_fetch_more(void* self, void* parent) {
    KPageModel_QBaseFetchMore((KPageModel*)self, (QModelIndex*)parent);
}

void k_pagemodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    KPageModel_OnFetchMore((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_can_fetch_more(void* self, void* parent) {
    return KPageModel_CanFetchMore((KPageModel*)self, (QModelIndex*)parent);
}

bool k_pagemodel_qbase_can_fetch_more(void* self, void* parent) {
    return KPageModel_QBaseCanFetchMore((KPageModel*)self, (QModelIndex*)parent);
}

void k_pagemodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    KPageModel_OnCanFetchMore((KPageModel*)self, (intptr_t)callback);
}

int32_t k_pagemodel_flags(void* self, void* index) {
    return KPageModel_Flags((KPageModel*)self, (QModelIndex*)index);
}

int32_t k_pagemodel_qbase_flags(void* self, void* index) {
    return KPageModel_QBaseFlags((KPageModel*)self, (QModelIndex*)index);
}

void k_pagemodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    KPageModel_OnFlags((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_sort(void* self, int column, int32_t order) {
    KPageModel_Sort((KPageModel*)self, column, order);
}

void k_pagemodel_qbase_sort(void* self, int column, int32_t order) {
    KPageModel_QBaseSort((KPageModel*)self, column, order);
}

void k_pagemodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KPageModel_OnSort((KPageModel*)self, (intptr_t)callback);
}

QModelIndex* k_pagemodel_buddy(void* self, void* index) {
    return KPageModel_Buddy((KPageModel*)self, (QModelIndex*)index);
}

QModelIndex* k_pagemodel_qbase_buddy(void* self, void* index) {
    return KPageModel_QBaseBuddy((KPageModel*)self, (QModelIndex*)index);
}

void k_pagemodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    KPageModel_OnBuddy((KPageModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_pagemodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KPageModel_Match((KPageModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_pagemodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KPageModel_QBaseMatch((KPageModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_pagemodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    KPageModel_OnMatch((KPageModel*)self, (intptr_t)callback);
}

QSize* k_pagemodel_span(void* self, void* index) {
    return KPageModel_Span((KPageModel*)self, (QModelIndex*)index);
}

QSize* k_pagemodel_qbase_span(void* self, void* index) {
    return KPageModel_QBaseSpan((KPageModel*)self, (QModelIndex*)index);
}

void k_pagemodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    KPageModel_OnSpan((KPageModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_pagemodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KPageModel_RoleNames((KPageModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_pagemodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_pagemodel_role_names\n");
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

libqt_map /* of int to char* */ k_pagemodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KPageModel_QBaseRoleNames((KPageModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_pagemodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_pagemodel_role_names\n");
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

void k_pagemodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    KPageModel_OnRoleNames((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_multi_data(void* self, void* index, void* roleDataSpan) {
    KPageModel_MultiData((KPageModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_pagemodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    KPageModel_QBaseMultiData((KPageModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_pagemodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    KPageModel_OnMultiData((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_submit(void* self) {
    return KPageModel_Submit((KPageModel*)self);
}

bool k_pagemodel_qbase_submit(void* self) {
    return KPageModel_QBaseSubmit((KPageModel*)self);
}

void k_pagemodel_on_submit(void* self, bool (*callback)()) {
    KPageModel_OnSubmit((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_revert(void* self) {
    KPageModel_Revert((KPageModel*)self);
}

void k_pagemodel_qbase_revert(void* self) {
    KPageModel_QBaseRevert((KPageModel*)self);
}

void k_pagemodel_on_revert(void* self, void (*callback)()) {
    KPageModel_OnRevert((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_reset_internal_data(void* self) {
    KPageModel_ResetInternalData((KPageModel*)self);
}

void k_pagemodel_qbase_reset_internal_data(void* self) {
    KPageModel_QBaseResetInternalData((KPageModel*)self);
}

void k_pagemodel_on_reset_internal_data(void* self, void (*callback)()) {
    KPageModel_OnResetInternalData((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_event(void* self, void* event) {
    return KPageModel_Event((KPageModel*)self, (QEvent*)event);
}

bool k_pagemodel_qbase_event(void* self, void* event) {
    return KPageModel_QBaseEvent((KPageModel*)self, (QEvent*)event);
}

void k_pagemodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KPageModel_OnEvent((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_event_filter(void* self, void* watched, void* event) {
    return KPageModel_EventFilter((KPageModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_pagemodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KPageModel_QBaseEventFilter((KPageModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_pagemodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPageModel_OnEventFilter((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_timer_event(void* self, void* event) {
    KPageModel_TimerEvent((KPageModel*)self, (QTimerEvent*)event);
}

void k_pagemodel_qbase_timer_event(void* self, void* event) {
    KPageModel_QBaseTimerEvent((KPageModel*)self, (QTimerEvent*)event);
}

void k_pagemodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPageModel_OnTimerEvent((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_child_event(void* self, void* event) {
    KPageModel_ChildEvent((KPageModel*)self, (QChildEvent*)event);
}

void k_pagemodel_qbase_child_event(void* self, void* event) {
    KPageModel_QBaseChildEvent((KPageModel*)self, (QChildEvent*)event);
}

void k_pagemodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPageModel_OnChildEvent((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_custom_event(void* self, void* event) {
    KPageModel_CustomEvent((KPageModel*)self, (QEvent*)event);
}

void k_pagemodel_qbase_custom_event(void* self, void* event) {
    KPageModel_QBaseCustomEvent((KPageModel*)self, (QEvent*)event);
}

void k_pagemodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPageModel_OnCustomEvent((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_connect_notify(void* self, void* signal) {
    KPageModel_ConnectNotify((KPageModel*)self, (QMetaMethod*)signal);
}

void k_pagemodel_qbase_connect_notify(void* self, void* signal) {
    KPageModel_QBaseConnectNotify((KPageModel*)self, (QMetaMethod*)signal);
}

void k_pagemodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KPageModel_OnConnectNotify((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_disconnect_notify(void* self, void* signal) {
    KPageModel_DisconnectNotify((KPageModel*)self, (QMetaMethod*)signal);
}

void k_pagemodel_qbase_disconnect_notify(void* self, void* signal) {
    KPageModel_QBaseDisconnectNotify((KPageModel*)self, (QMetaMethod*)signal);
}

void k_pagemodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KPageModel_OnDisconnectNotify((KPageModel*)self, (intptr_t)callback);
}

QModelIndex* k_pagemodel_create_index(void* self, int row, int column) {
    return KPageModel_CreateIndex((KPageModel*)self, row, column);
}

QModelIndex* k_pagemodel_qbase_create_index(void* self, int row, int column) {
    return KPageModel_QBaseCreateIndex((KPageModel*)self, row, column);
}

void k_pagemodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    KPageModel_OnCreateIndex((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KPageModel_EncodeData((KPageModel*)self, indexes, (QDataStream*)stream);
}

void k_pagemodel_qbase_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KPageModel_QBaseEncodeData((KPageModel*)self, indexes, (QDataStream*)stream);
}

void k_pagemodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    KPageModel_OnEncodeData((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KPageModel_DecodeData((KPageModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_pagemodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KPageModel_QBaseDecodeData((KPageModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_pagemodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    KPageModel_OnDecodeData((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    KPageModel_BeginInsertRows((KPageModel*)self, (QModelIndex*)parent, first, last);
}

void k_pagemodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    KPageModel_QBaseBeginInsertRows((KPageModel*)self, (QModelIndex*)parent, first, last);
}

void k_pagemodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KPageModel_OnBeginInsertRows((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_end_insert_rows(void* self) {
    KPageModel_EndInsertRows((KPageModel*)self);
}

void k_pagemodel_qbase_end_insert_rows(void* self) {
    KPageModel_QBaseEndInsertRows((KPageModel*)self);
}

void k_pagemodel_on_end_insert_rows(void* self, void (*callback)()) {
    KPageModel_OnEndInsertRows((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    KPageModel_BeginRemoveRows((KPageModel*)self, (QModelIndex*)parent, first, last);
}

void k_pagemodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    KPageModel_QBaseBeginRemoveRows((KPageModel*)self, (QModelIndex*)parent, first, last);
}

void k_pagemodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KPageModel_OnBeginRemoveRows((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_end_remove_rows(void* self) {
    KPageModel_EndRemoveRows((KPageModel*)self);
}

void k_pagemodel_qbase_end_remove_rows(void* self) {
    KPageModel_QBaseEndRemoveRows((KPageModel*)self);
}

void k_pagemodel_on_end_remove_rows(void* self, void (*callback)()) {
    KPageModel_OnEndRemoveRows((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KPageModel_BeginMoveRows((KPageModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_pagemodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KPageModel_QBaseBeginMoveRows((KPageModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_pagemodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KPageModel_OnBeginMoveRows((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_end_move_rows(void* self) {
    KPageModel_EndMoveRows((KPageModel*)self);
}

void k_pagemodel_qbase_end_move_rows(void* self) {
    KPageModel_QBaseEndMoveRows((KPageModel*)self);
}

void k_pagemodel_on_end_move_rows(void* self, void (*callback)()) {
    KPageModel_OnEndMoveRows((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    KPageModel_BeginInsertColumns((KPageModel*)self, (QModelIndex*)parent, first, last);
}

void k_pagemodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    KPageModel_QBaseBeginInsertColumns((KPageModel*)self, (QModelIndex*)parent, first, last);
}

void k_pagemodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KPageModel_OnBeginInsertColumns((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_end_insert_columns(void* self) {
    KPageModel_EndInsertColumns((KPageModel*)self);
}

void k_pagemodel_qbase_end_insert_columns(void* self) {
    KPageModel_QBaseEndInsertColumns((KPageModel*)self);
}

void k_pagemodel_on_end_insert_columns(void* self, void (*callback)()) {
    KPageModel_OnEndInsertColumns((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    KPageModel_BeginRemoveColumns((KPageModel*)self, (QModelIndex*)parent, first, last);
}

void k_pagemodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    KPageModel_QBaseBeginRemoveColumns((KPageModel*)self, (QModelIndex*)parent, first, last);
}

void k_pagemodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KPageModel_OnBeginRemoveColumns((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_end_remove_columns(void* self) {
    KPageModel_EndRemoveColumns((KPageModel*)self);
}

void k_pagemodel_qbase_end_remove_columns(void* self) {
    KPageModel_QBaseEndRemoveColumns((KPageModel*)self);
}

void k_pagemodel_on_end_remove_columns(void* self, void (*callback)()) {
    KPageModel_OnEndRemoveColumns((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KPageModel_BeginMoveColumns((KPageModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_pagemodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KPageModel_QBaseBeginMoveColumns((KPageModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_pagemodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KPageModel_OnBeginMoveColumns((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_end_move_columns(void* self) {
    KPageModel_EndMoveColumns((KPageModel*)self);
}

void k_pagemodel_qbase_end_move_columns(void* self) {
    KPageModel_QBaseEndMoveColumns((KPageModel*)self);
}

void k_pagemodel_on_end_move_columns(void* self, void (*callback)()) {
    KPageModel_OnEndMoveColumns((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_begin_reset_model(void* self) {
    KPageModel_BeginResetModel((KPageModel*)self);
}

void k_pagemodel_qbase_begin_reset_model(void* self) {
    KPageModel_QBaseBeginResetModel((KPageModel*)self);
}

void k_pagemodel_on_begin_reset_model(void* self, void (*callback)()) {
    KPageModel_OnBeginResetModel((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_end_reset_model(void* self) {
    KPageModel_EndResetModel((KPageModel*)self);
}

void k_pagemodel_qbase_end_reset_model(void* self) {
    KPageModel_QBaseEndResetModel((KPageModel*)self);
}

void k_pagemodel_on_end_reset_model(void* self, void (*callback)()) {
    KPageModel_OnEndResetModel((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_change_persistent_index(void* self, void* from, void* to) {
    KPageModel_ChangePersistentIndex((KPageModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_pagemodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    KPageModel_QBaseChangePersistentIndex((KPageModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_pagemodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    KPageModel_OnChangePersistentIndex((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KPageModel_ChangePersistentIndexList((KPageModel*)self, from, to);
}

void k_pagemodel_qbase_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KPageModel_QBaseChangePersistentIndexList((KPageModel*)self, from, to);
}

void k_pagemodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    KPageModel_OnChangePersistentIndexList((KPageModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_pagemodel_persistent_index_list(void* self) {
    libqt_list _arr = KPageModel_PersistentIndexList((KPageModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_pagemodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = KPageModel_QBasePersistentIndexList((KPageModel*)self);
    return _arr;
}

void k_pagemodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    KPageModel_OnPersistentIndexList((KPageModel*)self, (intptr_t)callback);
}

QObject* k_pagemodel_sender(void* self) {
    return KPageModel_Sender((KPageModel*)self);
}

QObject* k_pagemodel_qbase_sender(void* self) {
    return KPageModel_QBaseSender((KPageModel*)self);
}

void k_pagemodel_on_sender(void* self, QObject* (*callback)()) {
    KPageModel_OnSender((KPageModel*)self, (intptr_t)callback);
}

int32_t k_pagemodel_sender_signal_index(void* self) {
    return KPageModel_SenderSignalIndex((KPageModel*)self);
}

int32_t k_pagemodel_qbase_sender_signal_index(void* self) {
    return KPageModel_QBaseSenderSignalIndex((KPageModel*)self);
}

void k_pagemodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KPageModel_OnSenderSignalIndex((KPageModel*)self, (intptr_t)callback);
}

int32_t k_pagemodel_receivers(void* self, const char* signal) {
    return KPageModel_Receivers((KPageModel*)self, signal);
}

int32_t k_pagemodel_qbase_receivers(void* self, const char* signal) {
    return KPageModel_QBaseReceivers((KPageModel*)self, signal);
}

void k_pagemodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KPageModel_OnReceivers((KPageModel*)self, (intptr_t)callback);
}

bool k_pagemodel_is_signal_connected(void* self, void* signal) {
    return KPageModel_IsSignalConnected((KPageModel*)self, (QMetaMethod*)signal);
}

bool k_pagemodel_qbase_is_signal_connected(void* self, void* signal) {
    return KPageModel_QBaseIsSignalConnected((KPageModel*)self, (QMetaMethod*)signal);
}

void k_pagemodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KPageModel_OnIsSignalConnected((KPageModel*)self, (intptr_t)callback);
}

void k_pagemodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagemodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_pagemodel_delete(void* self) {
    KPageModel_Delete((KPageModel*)(self));
}
