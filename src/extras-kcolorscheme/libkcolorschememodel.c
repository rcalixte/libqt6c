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
    return KColorSchemeModel_new();
}

KColorSchemeModel* k_colorschememodel_new2(void* parent) {
    return KColorSchemeModel_new2((QObject*)parent);
}

const QMetaObject* k_colorschememodel_meta_object(void* self) {
    return KColorSchemeModel_MetaObject((KColorSchemeModel*)self);
}

void* k_colorschememodel_metacast(void* self, const char* param1) {
    return KColorSchemeModel_Metacast((KColorSchemeModel*)self, param1);
}

int32_t k_colorschememodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KColorSchemeModel_Metacall((KColorSchemeModel*)self, param1, param2, param3);
}

void k_colorschememodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KColorSchemeModel_OnMetacall((KColorSchemeModel*)self, (intptr_t)callback);
}

int32_t k_colorschememodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KColorSchemeModel_QBaseMetacall((KColorSchemeModel*)self, param1, param2, param3);
}

const char* k_colorschememodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* k_colorschememodel_data(void* self, void* index, int role) {
    return KColorSchemeModel_Data((KColorSchemeModel*)self, (QModelIndex*)index, role);
}

void k_colorschememodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    KColorSchemeModel_OnData((KColorSchemeModel*)self, (intptr_t)callback);
}

QVariant* k_colorschememodel_qbase_data(void* self, void* index, int role) {
    return KColorSchemeModel_QBaseData((KColorSchemeModel*)self, (QModelIndex*)index, role);
}

int32_t k_colorschememodel_row_count(void* self, void* parent) {
    return KColorSchemeModel_RowCount((KColorSchemeModel*)self, (QModelIndex*)parent);
}

void k_colorschememodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    KColorSchemeModel_OnRowCount((KColorSchemeModel*)self, (intptr_t)callback);
}

int32_t k_colorschememodel_qbase_row_count(void* self, void* parent) {
    return KColorSchemeModel_QBaseRowCount((KColorSchemeModel*)self, (QModelIndex*)parent);
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

bool k_colorschememodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* k_colorschememodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void k_colorschememodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* k_colorschememodel_qbase_parent(void* self, void* child) {
    return QAbstractItemModel_QBaseParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

int32_t k_colorschememodel_column_count(void* self, void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void k_colorschememodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QAbstractItemModel_OnColumnCount((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t k_colorschememodel_qbase_column_count(void* self, void* parent) {
    return QAbstractItemModel_QBaseColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool k_colorschememodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void k_colorschememodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_qbase_has_children(void* self, void* parent) {
    return QAbstractItemModel_QBaseHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
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

bool k_colorschememodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_colorschememodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_colorschememodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_colorschememodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_colorschememodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
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

bool k_colorschememodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_colorschememodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_colorschememodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_colorschememodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_colorschememodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_colorschememodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_colorschememodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_colorschememodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_colorschememodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_layout_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_colorschememodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_colorschememodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_colorschememodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_colorschememodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorschememodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_colorschememodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_colorschememodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_colorschememodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_colorschememodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_colorschememodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_colorschememodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_colorschememodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_colorschememodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_colorschememodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_colorschememodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_colorschememodel_children(void* self) {
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

QMetaObject__Connection* k_colorschememodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_colorschememodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_colorschememodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_colorschememodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_colorschememodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_colorschememodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_colorschememodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_colorschememodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_colorschememodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_colorschememodel_dynamic_property_names");
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

QBindingStorage* k_colorschememodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_colorschememodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_colorschememodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_colorschememodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_colorschememodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_colorschememodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_colorschememodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_colorschememodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_colorschememodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_colorschememodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_colorschememodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_colorschememodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* k_colorschememodel_index(void* self, int row, int column, void* parent) {
    return KColorSchemeModel_Index((KColorSchemeModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_colorschememodel_qbase_index(void* self, int row, int column, void* parent) {
    return KColorSchemeModel_QBaseIndex((KColorSchemeModel*)self, row, column, (QModelIndex*)parent);
}

void k_colorschememodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KColorSchemeModel_OnIndex((KColorSchemeModel*)self, (intptr_t)callback);
}

QModelIndex* k_colorschememodel_sibling(void* self, int row, int column, void* idx) {
    return KColorSchemeModel_Sibling((KColorSchemeModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_colorschememodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return KColorSchemeModel_QBaseSibling((KColorSchemeModel*)self, row, column, (QModelIndex*)idx);
}

void k_colorschememodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KColorSchemeModel_OnSibling((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KColorSchemeModel_DropMimeData((KColorSchemeModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_colorschememodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KColorSchemeModel_QBaseDropMimeData((KColorSchemeModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_colorschememodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KColorSchemeModel_OnDropMimeData((KColorSchemeModel*)self, (intptr_t)callback);
}

int32_t k_colorschememodel_flags(void* self, void* index) {
    return KColorSchemeModel_Flags((KColorSchemeModel*)self, (QModelIndex*)index);
}

int32_t k_colorschememodel_qbase_flags(void* self, void* index) {
    return KColorSchemeModel_QBaseFlags((KColorSchemeModel*)self, (QModelIndex*)index);
}

void k_colorschememodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    KColorSchemeModel_OnFlags((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_set_data(void* self, void* index, void* value, int role) {
    return KColorSchemeModel_SetData((KColorSchemeModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_colorschememodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return KColorSchemeModel_QBaseSetData((KColorSchemeModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_colorschememodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    KColorSchemeModel_OnSetData((KColorSchemeModel*)self, (intptr_t)callback);
}

QVariant* k_colorschememodel_header_data(void* self, int section, int32_t orientation, int role) {
    return KColorSchemeModel_HeaderData((KColorSchemeModel*)self, section, orientation, role);
}

QVariant* k_colorschememodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return KColorSchemeModel_QBaseHeaderData((KColorSchemeModel*)self, section, orientation, role);
}

void k_colorschememodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    KColorSchemeModel_OnHeaderData((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KColorSchemeModel_SetHeaderData((KColorSchemeModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_colorschememodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KColorSchemeModel_QBaseSetHeaderData((KColorSchemeModel*)self, section, orientation, (QVariant*)value, role);
}

void k_colorschememodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    KColorSchemeModel_OnSetHeaderData((KColorSchemeModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_colorschememodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KColorSchemeModel_ItemData((KColorSchemeModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_colorschememodel_qbase_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KColorSchemeModel_QBaseItemData((KColorSchemeModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_colorschememodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    KColorSchemeModel_OnItemData((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
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

bool k_colorschememodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
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
    bool _out = KColorSchemeModel_QBaseSetItemData((KColorSchemeModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_colorschememodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    KColorSchemeModel_OnSetItemData((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_clear_item_data(void* self, void* index) {
    return KColorSchemeModel_ClearItemData((KColorSchemeModel*)self, (QModelIndex*)index);
}

bool k_colorschememodel_qbase_clear_item_data(void* self, void* index) {
    return KColorSchemeModel_QBaseClearItemData((KColorSchemeModel*)self, (QModelIndex*)index);
}

void k_colorschememodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    KColorSchemeModel_OnClearItemData((KColorSchemeModel*)self, (intptr_t)callback);
}

const char** k_colorschememodel_mime_types(void* self) {
    libqt_list _arr = KColorSchemeModel_MimeTypes((KColorSchemeModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_colorschememodel_mime_types");
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

const char** k_colorschememodel_qbase_mime_types(void* self) {
    libqt_list _arr = KColorSchemeModel_QBaseMimeTypes((KColorSchemeModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_colorschememodel_mime_types");
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

void k_colorschememodel_on_mime_types(void* self, const char** (*callback)()) {
    KColorSchemeModel_OnMimeTypes((KColorSchemeModel*)self, (intptr_t)callback);
}

QMimeData* k_colorschememodel_mime_data(void* self, libqt_list indexes) {
    return KColorSchemeModel_MimeData((KColorSchemeModel*)self, indexes);
}

QMimeData* k_colorschememodel_qbase_mime_data(void* self, libqt_list indexes) {
    return KColorSchemeModel_QBaseMimeData((KColorSchemeModel*)self, indexes);
}

void k_colorschememodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    KColorSchemeModel_OnMimeData((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KColorSchemeModel_CanDropMimeData((KColorSchemeModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_colorschememodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KColorSchemeModel_QBaseCanDropMimeData((KColorSchemeModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_colorschememodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KColorSchemeModel_OnCanDropMimeData((KColorSchemeModel*)self, (intptr_t)callback);
}

int32_t k_colorschememodel_supported_drop_actions(void* self) {
    return KColorSchemeModel_SupportedDropActions((KColorSchemeModel*)self);
}

int32_t k_colorschememodel_qbase_supported_drop_actions(void* self) {
    return KColorSchemeModel_QBaseSupportedDropActions((KColorSchemeModel*)self);
}

void k_colorschememodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KColorSchemeModel_OnSupportedDropActions((KColorSchemeModel*)self, (intptr_t)callback);
}

int32_t k_colorschememodel_supported_drag_actions(void* self) {
    return KColorSchemeModel_SupportedDragActions((KColorSchemeModel*)self);
}

int32_t k_colorschememodel_qbase_supported_drag_actions(void* self) {
    return KColorSchemeModel_QBaseSupportedDragActions((KColorSchemeModel*)self);
}

void k_colorschememodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    KColorSchemeModel_OnSupportedDragActions((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_insert_rows(void* self, int row, int count, void* parent) {
    return KColorSchemeModel_InsertRows((KColorSchemeModel*)self, row, count, (QModelIndex*)parent);
}

bool k_colorschememodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return KColorSchemeModel_QBaseInsertRows((KColorSchemeModel*)self, row, count, (QModelIndex*)parent);
}

void k_colorschememodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KColorSchemeModel_OnInsertRows((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_insert_columns(void* self, int column, int count, void* parent) {
    return KColorSchemeModel_InsertColumns((KColorSchemeModel*)self, column, count, (QModelIndex*)parent);
}

bool k_colorschememodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return KColorSchemeModel_QBaseInsertColumns((KColorSchemeModel*)self, column, count, (QModelIndex*)parent);
}

void k_colorschememodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KColorSchemeModel_OnInsertColumns((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_remove_rows(void* self, int row, int count, void* parent) {
    return KColorSchemeModel_RemoveRows((KColorSchemeModel*)self, row, count, (QModelIndex*)parent);
}

bool k_colorschememodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return KColorSchemeModel_QBaseRemoveRows((KColorSchemeModel*)self, row, count, (QModelIndex*)parent);
}

void k_colorschememodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KColorSchemeModel_OnRemoveRows((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_remove_columns(void* self, int column, int count, void* parent) {
    return KColorSchemeModel_RemoveColumns((KColorSchemeModel*)self, column, count, (QModelIndex*)parent);
}

bool k_colorschememodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return KColorSchemeModel_QBaseRemoveColumns((KColorSchemeModel*)self, column, count, (QModelIndex*)parent);
}

void k_colorschememodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KColorSchemeModel_OnRemoveColumns((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KColorSchemeModel_MoveRows((KColorSchemeModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_colorschememodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KColorSchemeModel_QBaseMoveRows((KColorSchemeModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_colorschememodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KColorSchemeModel_OnMoveRows((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KColorSchemeModel_MoveColumns((KColorSchemeModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_colorschememodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KColorSchemeModel_QBaseMoveColumns((KColorSchemeModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_colorschememodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KColorSchemeModel_OnMoveColumns((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_fetch_more(void* self, void* parent) {
    KColorSchemeModel_FetchMore((KColorSchemeModel*)self, (QModelIndex*)parent);
}

void k_colorschememodel_qbase_fetch_more(void* self, void* parent) {
    KColorSchemeModel_QBaseFetchMore((KColorSchemeModel*)self, (QModelIndex*)parent);
}

void k_colorschememodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    KColorSchemeModel_OnFetchMore((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_can_fetch_more(void* self, void* parent) {
    return KColorSchemeModel_CanFetchMore((KColorSchemeModel*)self, (QModelIndex*)parent);
}

bool k_colorschememodel_qbase_can_fetch_more(void* self, void* parent) {
    return KColorSchemeModel_QBaseCanFetchMore((KColorSchemeModel*)self, (QModelIndex*)parent);
}

void k_colorschememodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    KColorSchemeModel_OnCanFetchMore((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_sort(void* self, int column, int32_t order) {
    KColorSchemeModel_Sort((KColorSchemeModel*)self, column, order);
}

void k_colorschememodel_qbase_sort(void* self, int column, int32_t order) {
    KColorSchemeModel_QBaseSort((KColorSchemeModel*)self, column, order);
}

void k_colorschememodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KColorSchemeModel_OnSort((KColorSchemeModel*)self, (intptr_t)callback);
}

QModelIndex* k_colorschememodel_buddy(void* self, void* index) {
    return KColorSchemeModel_Buddy((KColorSchemeModel*)self, (QModelIndex*)index);
}

QModelIndex* k_colorschememodel_qbase_buddy(void* self, void* index) {
    return KColorSchemeModel_QBaseBuddy((KColorSchemeModel*)self, (QModelIndex*)index);
}

void k_colorschememodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    KColorSchemeModel_OnBuddy((KColorSchemeModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_colorschememodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KColorSchemeModel_Match((KColorSchemeModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_colorschememodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KColorSchemeModel_QBaseMatch((KColorSchemeModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_colorschememodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    KColorSchemeModel_OnMatch((KColorSchemeModel*)self, (intptr_t)callback);
}

QSize* k_colorschememodel_span(void* self, void* index) {
    return KColorSchemeModel_Span((KColorSchemeModel*)self, (QModelIndex*)index);
}

QSize* k_colorschememodel_qbase_span(void* self, void* index) {
    return KColorSchemeModel_QBaseSpan((KColorSchemeModel*)self, (QModelIndex*)index);
}

void k_colorschememodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    KColorSchemeModel_OnSpan((KColorSchemeModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_colorschememodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KColorSchemeModel_RoleNames((KColorSchemeModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_colorschememodel_role_names");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_colorschememodel_role_names");
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

libqt_map /* of int to char* */ k_colorschememodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KColorSchemeModel_QBaseRoleNames((KColorSchemeModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_colorschememodel_role_names");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_colorschememodel_role_names");
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

void k_colorschememodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    KColorSchemeModel_OnRoleNames((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_multi_data(void* self, void* index, void* roleDataSpan) {
    KColorSchemeModel_MultiData((KColorSchemeModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_colorschememodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    KColorSchemeModel_QBaseMultiData((KColorSchemeModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_colorschememodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    KColorSchemeModel_OnMultiData((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_submit(void* self) {
    return KColorSchemeModel_Submit((KColorSchemeModel*)self);
}

bool k_colorschememodel_qbase_submit(void* self) {
    return KColorSchemeModel_QBaseSubmit((KColorSchemeModel*)self);
}

void k_colorschememodel_on_submit(void* self, bool (*callback)()) {
    KColorSchemeModel_OnSubmit((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_revert(void* self) {
    KColorSchemeModel_Revert((KColorSchemeModel*)self);
}

void k_colorschememodel_qbase_revert(void* self) {
    KColorSchemeModel_QBaseRevert((KColorSchemeModel*)self);
}

void k_colorschememodel_on_revert(void* self, void (*callback)()) {
    KColorSchemeModel_OnRevert((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_reset_internal_data(void* self) {
    KColorSchemeModel_ResetInternalData((KColorSchemeModel*)self);
}

void k_colorschememodel_qbase_reset_internal_data(void* self) {
    KColorSchemeModel_QBaseResetInternalData((KColorSchemeModel*)self);
}

void k_colorschememodel_on_reset_internal_data(void* self, void (*callback)()) {
    KColorSchemeModel_OnResetInternalData((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_event(void* self, void* event) {
    return KColorSchemeModel_Event((KColorSchemeModel*)self, (QEvent*)event);
}

bool k_colorschememodel_qbase_event(void* self, void* event) {
    return KColorSchemeModel_QBaseEvent((KColorSchemeModel*)self, (QEvent*)event);
}

void k_colorschememodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KColorSchemeModel_OnEvent((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_event_filter(void* self, void* watched, void* event) {
    return KColorSchemeModel_EventFilter((KColorSchemeModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_colorschememodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KColorSchemeModel_QBaseEventFilter((KColorSchemeModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_colorschememodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KColorSchemeModel_OnEventFilter((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_timer_event(void* self, void* event) {
    KColorSchemeModel_TimerEvent((KColorSchemeModel*)self, (QTimerEvent*)event);
}

void k_colorschememodel_qbase_timer_event(void* self, void* event) {
    KColorSchemeModel_QBaseTimerEvent((KColorSchemeModel*)self, (QTimerEvent*)event);
}

void k_colorschememodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KColorSchemeModel_OnTimerEvent((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_child_event(void* self, void* event) {
    KColorSchemeModel_ChildEvent((KColorSchemeModel*)self, (QChildEvent*)event);
}

void k_colorschememodel_qbase_child_event(void* self, void* event) {
    KColorSchemeModel_QBaseChildEvent((KColorSchemeModel*)self, (QChildEvent*)event);
}

void k_colorschememodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KColorSchemeModel_OnChildEvent((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_custom_event(void* self, void* event) {
    KColorSchemeModel_CustomEvent((KColorSchemeModel*)self, (QEvent*)event);
}

void k_colorschememodel_qbase_custom_event(void* self, void* event) {
    KColorSchemeModel_QBaseCustomEvent((KColorSchemeModel*)self, (QEvent*)event);
}

void k_colorschememodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KColorSchemeModel_OnCustomEvent((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_connect_notify(void* self, void* signal) {
    KColorSchemeModel_ConnectNotify((KColorSchemeModel*)self, (QMetaMethod*)signal);
}

void k_colorschememodel_qbase_connect_notify(void* self, void* signal) {
    KColorSchemeModel_QBaseConnectNotify((KColorSchemeModel*)self, (QMetaMethod*)signal);
}

void k_colorschememodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KColorSchemeModel_OnConnectNotify((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_disconnect_notify(void* self, void* signal) {
    KColorSchemeModel_DisconnectNotify((KColorSchemeModel*)self, (QMetaMethod*)signal);
}

void k_colorschememodel_qbase_disconnect_notify(void* self, void* signal) {
    KColorSchemeModel_QBaseDisconnectNotify((KColorSchemeModel*)self, (QMetaMethod*)signal);
}

void k_colorschememodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KColorSchemeModel_OnDisconnectNotify((KColorSchemeModel*)self, (intptr_t)callback);
}

QModelIndex* k_colorschememodel_create_index(void* self, int row, int column) {
    return KColorSchemeModel_CreateIndex((KColorSchemeModel*)self, row, column);
}

QModelIndex* k_colorschememodel_qbase_create_index(void* self, int row, int column) {
    return KColorSchemeModel_QBaseCreateIndex((KColorSchemeModel*)self, row, column);
}

void k_colorschememodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    KColorSchemeModel_OnCreateIndex((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_encode_data(void* self, libqt_list indexes, void* stream) {
    KColorSchemeModel_EncodeData((KColorSchemeModel*)self, indexes, (QDataStream*)stream);
}

void k_colorschememodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    KColorSchemeModel_QBaseEncodeData((KColorSchemeModel*)self, indexes, (QDataStream*)stream);
}

void k_colorschememodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    KColorSchemeModel_OnEncodeData((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KColorSchemeModel_DecodeData((KColorSchemeModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_colorschememodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KColorSchemeModel_QBaseDecodeData((KColorSchemeModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_colorschememodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    KColorSchemeModel_OnDecodeData((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    KColorSchemeModel_BeginInsertRows((KColorSchemeModel*)self, (QModelIndex*)parent, first, last);
}

void k_colorschememodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    KColorSchemeModel_QBaseBeginInsertRows((KColorSchemeModel*)self, (QModelIndex*)parent, first, last);
}

void k_colorschememodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KColorSchemeModel_OnBeginInsertRows((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_end_insert_rows(void* self) {
    KColorSchemeModel_EndInsertRows((KColorSchemeModel*)self);
}

void k_colorschememodel_qbase_end_insert_rows(void* self) {
    KColorSchemeModel_QBaseEndInsertRows((KColorSchemeModel*)self);
}

void k_colorschememodel_on_end_insert_rows(void* self, void (*callback)()) {
    KColorSchemeModel_OnEndInsertRows((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    KColorSchemeModel_BeginRemoveRows((KColorSchemeModel*)self, (QModelIndex*)parent, first, last);
}

void k_colorschememodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    KColorSchemeModel_QBaseBeginRemoveRows((KColorSchemeModel*)self, (QModelIndex*)parent, first, last);
}

void k_colorschememodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KColorSchemeModel_OnBeginRemoveRows((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_end_remove_rows(void* self) {
    KColorSchemeModel_EndRemoveRows((KColorSchemeModel*)self);
}

void k_colorschememodel_qbase_end_remove_rows(void* self) {
    KColorSchemeModel_QBaseEndRemoveRows((KColorSchemeModel*)self);
}

void k_colorschememodel_on_end_remove_rows(void* self, void (*callback)()) {
    KColorSchemeModel_OnEndRemoveRows((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KColorSchemeModel_BeginMoveRows((KColorSchemeModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_colorschememodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KColorSchemeModel_QBaseBeginMoveRows((KColorSchemeModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_colorschememodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KColorSchemeModel_OnBeginMoveRows((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_end_move_rows(void* self) {
    KColorSchemeModel_EndMoveRows((KColorSchemeModel*)self);
}

void k_colorschememodel_qbase_end_move_rows(void* self) {
    KColorSchemeModel_QBaseEndMoveRows((KColorSchemeModel*)self);
}

void k_colorschememodel_on_end_move_rows(void* self, void (*callback)()) {
    KColorSchemeModel_OnEndMoveRows((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    KColorSchemeModel_BeginInsertColumns((KColorSchemeModel*)self, (QModelIndex*)parent, first, last);
}

void k_colorschememodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    KColorSchemeModel_QBaseBeginInsertColumns((KColorSchemeModel*)self, (QModelIndex*)parent, first, last);
}

void k_colorschememodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KColorSchemeModel_OnBeginInsertColumns((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_end_insert_columns(void* self) {
    KColorSchemeModel_EndInsertColumns((KColorSchemeModel*)self);
}

void k_colorschememodel_qbase_end_insert_columns(void* self) {
    KColorSchemeModel_QBaseEndInsertColumns((KColorSchemeModel*)self);
}

void k_colorschememodel_on_end_insert_columns(void* self, void (*callback)()) {
    KColorSchemeModel_OnEndInsertColumns((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    KColorSchemeModel_BeginRemoveColumns((KColorSchemeModel*)self, (QModelIndex*)parent, first, last);
}

void k_colorschememodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    KColorSchemeModel_QBaseBeginRemoveColumns((KColorSchemeModel*)self, (QModelIndex*)parent, first, last);
}

void k_colorschememodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KColorSchemeModel_OnBeginRemoveColumns((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_end_remove_columns(void* self) {
    KColorSchemeModel_EndRemoveColumns((KColorSchemeModel*)self);
}

void k_colorschememodel_qbase_end_remove_columns(void* self) {
    KColorSchemeModel_QBaseEndRemoveColumns((KColorSchemeModel*)self);
}

void k_colorschememodel_on_end_remove_columns(void* self, void (*callback)()) {
    KColorSchemeModel_OnEndRemoveColumns((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KColorSchemeModel_BeginMoveColumns((KColorSchemeModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_colorschememodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KColorSchemeModel_QBaseBeginMoveColumns((KColorSchemeModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_colorschememodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KColorSchemeModel_OnBeginMoveColumns((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_end_move_columns(void* self) {
    KColorSchemeModel_EndMoveColumns((KColorSchemeModel*)self);
}

void k_colorschememodel_qbase_end_move_columns(void* self) {
    KColorSchemeModel_QBaseEndMoveColumns((KColorSchemeModel*)self);
}

void k_colorschememodel_on_end_move_columns(void* self, void (*callback)()) {
    KColorSchemeModel_OnEndMoveColumns((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_begin_reset_model(void* self) {
    KColorSchemeModel_BeginResetModel((KColorSchemeModel*)self);
}

void k_colorschememodel_qbase_begin_reset_model(void* self) {
    KColorSchemeModel_QBaseBeginResetModel((KColorSchemeModel*)self);
}

void k_colorschememodel_on_begin_reset_model(void* self, void (*callback)()) {
    KColorSchemeModel_OnBeginResetModel((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_end_reset_model(void* self) {
    KColorSchemeModel_EndResetModel((KColorSchemeModel*)self);
}

void k_colorschememodel_qbase_end_reset_model(void* self) {
    KColorSchemeModel_QBaseEndResetModel((KColorSchemeModel*)self);
}

void k_colorschememodel_on_end_reset_model(void* self, void (*callback)()) {
    KColorSchemeModel_OnEndResetModel((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_change_persistent_index(void* self, void* from, void* to) {
    KColorSchemeModel_ChangePersistentIndex((KColorSchemeModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_colorschememodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    KColorSchemeModel_QBaseChangePersistentIndex((KColorSchemeModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_colorschememodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    KColorSchemeModel_OnChangePersistentIndex((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KColorSchemeModel_ChangePersistentIndexList((KColorSchemeModel*)self, from, to);
}

void k_colorschememodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KColorSchemeModel_QBaseChangePersistentIndexList((KColorSchemeModel*)self, from, to);
}

void k_colorschememodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    KColorSchemeModel_OnChangePersistentIndexList((KColorSchemeModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_colorschememodel_persistent_index_list(void* self) {
    libqt_list _arr = KColorSchemeModel_PersistentIndexList((KColorSchemeModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_colorschememodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = KColorSchemeModel_QBasePersistentIndexList((KColorSchemeModel*)self);
    return _arr;
}

void k_colorschememodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    KColorSchemeModel_OnPersistentIndexList((KColorSchemeModel*)self, (intptr_t)callback);
}

QObject* k_colorschememodel_sender(void* self) {
    return KColorSchemeModel_Sender((KColorSchemeModel*)self);
}

QObject* k_colorschememodel_qbase_sender(void* self) {
    return KColorSchemeModel_QBaseSender((KColorSchemeModel*)self);
}

void k_colorschememodel_on_sender(void* self, QObject* (*callback)()) {
    KColorSchemeModel_OnSender((KColorSchemeModel*)self, (intptr_t)callback);
}

int32_t k_colorschememodel_sender_signal_index(void* self) {
    return KColorSchemeModel_SenderSignalIndex((KColorSchemeModel*)self);
}

int32_t k_colorschememodel_qbase_sender_signal_index(void* self) {
    return KColorSchemeModel_QBaseSenderSignalIndex((KColorSchemeModel*)self);
}

void k_colorschememodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KColorSchemeModel_OnSenderSignalIndex((KColorSchemeModel*)self, (intptr_t)callback);
}

int32_t k_colorschememodel_receivers(void* self, const char* signal) {
    return KColorSchemeModel_Receivers((KColorSchemeModel*)self, signal);
}

int32_t k_colorschememodel_qbase_receivers(void* self, const char* signal) {
    return KColorSchemeModel_QBaseReceivers((KColorSchemeModel*)self, signal);
}

void k_colorschememodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KColorSchemeModel_OnReceivers((KColorSchemeModel*)self, (intptr_t)callback);
}

bool k_colorschememodel_is_signal_connected(void* self, void* signal) {
    return KColorSchemeModel_IsSignalConnected((KColorSchemeModel*)self, (QMetaMethod*)signal);
}

bool k_colorschememodel_qbase_is_signal_connected(void* self, void* signal) {
    return KColorSchemeModel_QBaseIsSignalConnected((KColorSchemeModel*)self, (QMetaMethod*)signal);
}

void k_colorschememodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KColorSchemeModel_OnIsSignalConnected((KColorSchemeModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_colorschememodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_colorschememodel_delete(void* self) {
    KColorSchemeModel_Delete((KColorSchemeModel*)(self));
}
