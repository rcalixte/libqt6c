#include "libqabstractitemmodel.hpp"
#include "libqcoreevent.hpp"
#include "libqdatastream.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqstringlistmodel.hpp"
#include "libqstringlistmodel.h"

QStringListModel* q_stringlistmodel_new() {
    return QStringListModel_new();
}

QStringListModel* q_stringlistmodel_new2(const char* strings[]) {
    size_t strings_len = libqt_strv_length(strings);
    libqt_string* strings_qstr = (libqt_string*)malloc(strings_len * sizeof(libqt_string));
    if (strings_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_stringlistmodel_new2");
        abort();
    }
    for (size_t i = 0; i < strings_len; ++i) {
        strings_qstr[i] = qstring(strings[i]);
    }
    libqt_list strings_list = qlist(strings_qstr, strings_len);

    QStringListModel* _out = QStringListModel_new2(strings_list);
    free(strings_qstr);
    return _out;
}

QStringListModel* q_stringlistmodel_new3(void* parent) {
    return QStringListModel_new3((QObject*)parent);
}

QStringListModel* q_stringlistmodel_new4(const char* strings[], void* parent) {
    size_t strings_len = libqt_strv_length(strings);
    libqt_string* strings_qstr = (libqt_string*)malloc(strings_len * sizeof(libqt_string));
    if (strings_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_stringlistmodel_new4");
        abort();
    }
    for (size_t i = 0; i < strings_len; ++i) {
        strings_qstr[i] = qstring(strings[i]);
    }
    libqt_list strings_list = qlist(strings_qstr, strings_len);

    QStringListModel* _out = QStringListModel_new4(strings_list, (QObject*)parent);
    free(strings_qstr);
    return _out;
}

const QMetaObject* q_stringlistmodel_meta_object(void* self) {
    return QStringListModel_MetaObject((QStringListModel*)self);
}

void* q_stringlistmodel_metacast(void* self, const char* param1) {
    return QStringListModel_Metacast((QStringListModel*)self, param1);
}

int32_t q_stringlistmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStringListModel_Metacall((QStringListModel*)self, param1, param2, param3);
}

void q_stringlistmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QStringListModel_OnMetacall((QStringListModel*)self, (intptr_t)callback);
}

int32_t q_stringlistmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStringListModel_QBaseMetacall((QStringListModel*)self, param1, param2, param3);
}

const char* q_stringlistmodel_tr(const char* s) {
    libqt_string _str = QStringListModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_stringlistmodel_row_count(void* self, void* parent) {
    return QStringListModel_RowCount((QStringListModel*)self, (QModelIndex*)parent);
}

void q_stringlistmodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    QStringListModel_OnRowCount((QStringListModel*)self, (intptr_t)callback);
}

int32_t q_stringlistmodel_qbase_row_count(void* self, void* parent) {
    return QStringListModel_QBaseRowCount((QStringListModel*)self, (QModelIndex*)parent);
}

QModelIndex* q_stringlistmodel_sibling(void* self, int row, int column, void* idx) {
    return QStringListModel_Sibling((QStringListModel*)self, row, column, (QModelIndex*)idx);
}

void q_stringlistmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QStringListModel_OnSibling((QStringListModel*)self, (intptr_t)callback);
}

QModelIndex* q_stringlistmodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QStringListModel_QBaseSibling((QStringListModel*)self, row, column, (QModelIndex*)idx);
}

QVariant* q_stringlistmodel_data(void* self, void* index, int role) {
    return QStringListModel_Data((QStringListModel*)self, (QModelIndex*)index, role);
}

void q_stringlistmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    QStringListModel_OnData((QStringListModel*)self, (intptr_t)callback);
}

QVariant* q_stringlistmodel_qbase_data(void* self, void* index, int role) {
    return QStringListModel_QBaseData((QStringListModel*)self, (QModelIndex*)index, role);
}

bool q_stringlistmodel_set_data(void* self, void* index, void* value, int role) {
    return QStringListModel_SetData((QStringListModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_stringlistmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    QStringListModel_OnSetData((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QStringListModel_QBaseSetData((QStringListModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool q_stringlistmodel_clear_item_data(void* self, void* index) {
    return QStringListModel_ClearItemData((QStringListModel*)self, (QModelIndex*)index);
}

void q_stringlistmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    QStringListModel_OnClearItemData((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_qbase_clear_item_data(void* self, void* index) {
    return QStringListModel_QBaseClearItemData((QStringListModel*)self, (QModelIndex*)index);
}

int32_t q_stringlistmodel_flags(void* self, void* index) {
    return QStringListModel_Flags((QStringListModel*)self, (QModelIndex*)index);
}

void q_stringlistmodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    QStringListModel_OnFlags((QStringListModel*)self, (intptr_t)callback);
}

int32_t q_stringlistmodel_qbase_flags(void* self, void* index) {
    return QStringListModel_QBaseFlags((QStringListModel*)self, (QModelIndex*)index);
}

bool q_stringlistmodel_insert_rows(void* self, int row, int count, void* parent) {
    return QStringListModel_InsertRows((QStringListModel*)self, row, count, (QModelIndex*)parent);
}

void q_stringlistmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QStringListModel_OnInsertRows((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QStringListModel_QBaseInsertRows((QStringListModel*)self, row, count, (QModelIndex*)parent);
}

bool q_stringlistmodel_remove_rows(void* self, int row, int count, void* parent) {
    return QStringListModel_RemoveRows((QStringListModel*)self, row, count, (QModelIndex*)parent);
}

void q_stringlistmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QStringListModel_OnRemoveRows((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QStringListModel_QBaseRemoveRows((QStringListModel*)self, row, count, (QModelIndex*)parent);
}

bool q_stringlistmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QStringListModel_MoveRows((QStringListModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_stringlistmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QStringListModel_OnMoveRows((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QStringListModel_QBaseMoveRows((QStringListModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

libqt_map /* of int to QVariant* */ q_stringlistmodel_item_data(void* self, void* index) {
    return QStringListModel_ItemData((QStringListModel*)self, (QModelIndex*)index);
}

void q_stringlistmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    QStringListModel_OnItemData((QStringListModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_stringlistmodel_qbase_item_data(void* self, void* index) {
    return QStringListModel_QBaseItemData((QStringListModel*)self, (QModelIndex*)index);
}

bool q_stringlistmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QStringListModel_SetItemData((QStringListModel*)self, (QModelIndex*)index, roles);
}

void q_stringlistmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QStringListModel_OnSetItemData((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QStringListModel_QBaseSetItemData((QStringListModel*)self, (QModelIndex*)index, roles);
}

void q_stringlistmodel_sort(void* self, int column, int32_t order) {
    QStringListModel_Sort((QStringListModel*)self, column, order);
}

void q_stringlistmodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QStringListModel_OnSort((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_qbase_sort(void* self, int column, int32_t order) {
    QStringListModel_QBaseSort((QStringListModel*)self, column, order);
}

const char** q_stringlistmodel_string_list(void* self) {
    libqt_list _arr = QStringListModel_StringList((QStringListModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_stringlistmodel_string_list");
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

void q_stringlistmodel_set_string_list(void* self, const char* strings[]) {
    size_t strings_len = libqt_strv_length(strings);
    libqt_string* strings_qstr = (libqt_string*)malloc(strings_len * sizeof(libqt_string));
    if (strings_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_stringlistmodel_set_string_list");
        abort();
    }
    for (size_t i = 0; i < strings_len; ++i) {
        strings_qstr[i] = qstring(strings[i]);
    }
    libqt_list strings_list = qlist(strings_qstr, strings_len);
    QStringListModel_SetStringList((QStringListModel*)self, strings_list);
    free(strings_qstr);
}

int32_t q_stringlistmodel_supported_drop_actions(void* self) {
    return QStringListModel_SupportedDropActions((QStringListModel*)self);
}

void q_stringlistmodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    QStringListModel_OnSupportedDropActions((QStringListModel*)self, (intptr_t)callback);
}

int32_t q_stringlistmodel_qbase_supported_drop_actions(void* self) {
    return QStringListModel_QBaseSupportedDropActions((QStringListModel*)self);
}

const char* q_stringlistmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QStringListModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_stringlistmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QStringListModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_stringlistmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* q_stringlistmodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void q_stringlistmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_stringlistmodel_qbase_parent(void* self, void* child) {
    return QAbstractItemModel_QBaseParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

int32_t q_stringlistmodel_column_count(void* self, void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_stringlistmodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QAbstractItemModel_OnColumnCount((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t q_stringlistmodel_qbase_column_count(void* self, void* parent) {
    return QAbstractItemModel_QBaseColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_stringlistmodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_stringlistmodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_qbase_has_children(void* self, void* parent) {
    return QAbstractItemModel_QBaseHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_stringlistmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_stringlistmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_stringlistmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_stringlistmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_stringlistmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_stringlistmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_stringlistmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_stringlistmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_stringlistmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_stringlistmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_stringlistmodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_stringlistmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_stringlistmodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_stringlistmodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_stringlistmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_stringlistmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_stringlistmodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_stringlistmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_stringlistmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_stringlistmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_layout_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_stringlistmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_stringlistmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_stringlistmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_stringlistmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stringlistmodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_stringlistmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_stringlistmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_stringlistmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_stringlistmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_stringlistmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_stringlistmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_stringlistmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_stringlistmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_stringlistmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_stringlistmodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_stringlistmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_stringlistmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_stringlistmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_stringlistmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_stringlistmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_stringlistmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_stringlistmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_stringlistmodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_stringlistmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_stringlistmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_stringlistmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_stringlistmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_stringlistmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_stringlistmodel_dynamic_property_names");
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

QBindingStorage* q_stringlistmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_stringlistmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_stringlistmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_stringlistmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_stringlistmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_stringlistmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_stringlistmodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_stringlistmodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_stringlistmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_stringlistmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_stringlistmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_stringlistmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* q_stringlistmodel_index(void* self, int row, int column, void* parent) {
    return QStringListModel_Index((QStringListModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_stringlistmodel_qbase_index(void* self, int row, int column, void* parent) {
    return QStringListModel_QBaseIndex((QStringListModel*)self, row, column, (QModelIndex*)parent);
}

void q_stringlistmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QStringListModel_OnIndex((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QStringListModel_DropMimeData((QStringListModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_stringlistmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QStringListModel_QBaseDropMimeData((QStringListModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_stringlistmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QStringListModel_OnDropMimeData((QStringListModel*)self, (intptr_t)callback);
}

QVariant* q_stringlistmodel_header_data(void* self, int section, int32_t orientation, int role) {
    return QStringListModel_HeaderData((QStringListModel*)self, section, orientation, role);
}

QVariant* q_stringlistmodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return QStringListModel_QBaseHeaderData((QStringListModel*)self, section, orientation, role);
}

void q_stringlistmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    QStringListModel_OnHeaderData((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QStringListModel_SetHeaderData((QStringListModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_stringlistmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QStringListModel_QBaseSetHeaderData((QStringListModel*)self, section, orientation, (QVariant*)value, role);
}

void q_stringlistmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    QStringListModel_OnSetHeaderData((QStringListModel*)self, (intptr_t)callback);
}

const char** q_stringlistmodel_mime_types(void* self) {
    libqt_list _arr = QStringListModel_MimeTypes((QStringListModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_stringlistmodel_mime_types");
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

const char** q_stringlistmodel_qbase_mime_types(void* self) {
    libqt_list _arr = QStringListModel_QBaseMimeTypes((QStringListModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_stringlistmodel_mime_types");
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

void q_stringlistmodel_on_mime_types(void* self, const char** (*callback)()) {
    QStringListModel_OnMimeTypes((QStringListModel*)self, (intptr_t)callback);
}

QMimeData* q_stringlistmodel_mime_data(void* self, libqt_list indexes) {
    return QStringListModel_MimeData((QStringListModel*)self, indexes);
}

QMimeData* q_stringlistmodel_qbase_mime_data(void* self, libqt_list indexes) {
    return QStringListModel_QBaseMimeData((QStringListModel*)self, indexes);
}

void q_stringlistmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    QStringListModel_OnMimeData((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QStringListModel_CanDropMimeData((QStringListModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_stringlistmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QStringListModel_QBaseCanDropMimeData((QStringListModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_stringlistmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QStringListModel_OnCanDropMimeData((QStringListModel*)self, (intptr_t)callback);
}

int32_t q_stringlistmodel_supported_drag_actions(void* self) {
    return QStringListModel_SupportedDragActions((QStringListModel*)self);
}

int32_t q_stringlistmodel_qbase_supported_drag_actions(void* self) {
    return QStringListModel_QBaseSupportedDragActions((QStringListModel*)self);
}

void q_stringlistmodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    QStringListModel_OnSupportedDragActions((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_insert_columns(void* self, int column, int count, void* parent) {
    return QStringListModel_InsertColumns((QStringListModel*)self, column, count, (QModelIndex*)parent);
}

bool q_stringlistmodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QStringListModel_QBaseInsertColumns((QStringListModel*)self, column, count, (QModelIndex*)parent);
}

void q_stringlistmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QStringListModel_OnInsertColumns((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_remove_columns(void* self, int column, int count, void* parent) {
    return QStringListModel_RemoveColumns((QStringListModel*)self, column, count, (QModelIndex*)parent);
}

bool q_stringlistmodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QStringListModel_QBaseRemoveColumns((QStringListModel*)self, column, count, (QModelIndex*)parent);
}

void q_stringlistmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QStringListModel_OnRemoveColumns((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QStringListModel_MoveColumns((QStringListModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_stringlistmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QStringListModel_QBaseMoveColumns((QStringListModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_stringlistmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QStringListModel_OnMoveColumns((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_fetch_more(void* self, void* parent) {
    QStringListModel_FetchMore((QStringListModel*)self, (QModelIndex*)parent);
}

void q_stringlistmodel_qbase_fetch_more(void* self, void* parent) {
    QStringListModel_QBaseFetchMore((QStringListModel*)self, (QModelIndex*)parent);
}

void q_stringlistmodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    QStringListModel_OnFetchMore((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_can_fetch_more(void* self, void* parent) {
    return QStringListModel_CanFetchMore((QStringListModel*)self, (QModelIndex*)parent);
}

bool q_stringlistmodel_qbase_can_fetch_more(void* self, void* parent) {
    return QStringListModel_QBaseCanFetchMore((QStringListModel*)self, (QModelIndex*)parent);
}

void q_stringlistmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    QStringListModel_OnCanFetchMore((QStringListModel*)self, (intptr_t)callback);
}

QModelIndex* q_stringlistmodel_buddy(void* self, void* index) {
    return QStringListModel_Buddy((QStringListModel*)self, (QModelIndex*)index);
}

QModelIndex* q_stringlistmodel_qbase_buddy(void* self, void* index) {
    return QStringListModel_QBaseBuddy((QStringListModel*)self, (QModelIndex*)index);
}

void q_stringlistmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    QStringListModel_OnBuddy((QStringListModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_stringlistmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QStringListModel_Match((QStringListModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_stringlistmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QStringListModel_QBaseMatch((QStringListModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_stringlistmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    QStringListModel_OnMatch((QStringListModel*)self, (intptr_t)callback);
}

QSize* q_stringlistmodel_span(void* self, void* index) {
    return QStringListModel_Span((QStringListModel*)self, (QModelIndex*)index);
}

QSize* q_stringlistmodel_qbase_span(void* self, void* index) {
    return QStringListModel_QBaseSpan((QStringListModel*)self, (QModelIndex*)index);
}

void q_stringlistmodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    QStringListModel_OnSpan((QStringListModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_stringlistmodel_role_names(void* self) {
    return QStringListModel_RoleNames((QStringListModel*)self);
}

libqt_map /* of int to char* */ q_stringlistmodel_qbase_role_names(void* self) {
    return QStringListModel_QBaseRoleNames((QStringListModel*)self);
}

void q_stringlistmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    QStringListModel_OnRoleNames((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QStringListModel_MultiData((QStringListModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_stringlistmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QStringListModel_QBaseMultiData((QStringListModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_stringlistmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    QStringListModel_OnMultiData((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_submit(void* self) {
    return QStringListModel_Submit((QStringListModel*)self);
}

bool q_stringlistmodel_qbase_submit(void* self) {
    return QStringListModel_QBaseSubmit((QStringListModel*)self);
}

void q_stringlistmodel_on_submit(void* self, bool (*callback)()) {
    QStringListModel_OnSubmit((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_revert(void* self) {
    QStringListModel_Revert((QStringListModel*)self);
}

void q_stringlistmodel_qbase_revert(void* self) {
    QStringListModel_QBaseRevert((QStringListModel*)self);
}

void q_stringlistmodel_on_revert(void* self, void (*callback)()) {
    QStringListModel_OnRevert((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_reset_internal_data(void* self) {
    QStringListModel_ResetInternalData((QStringListModel*)self);
}

void q_stringlistmodel_qbase_reset_internal_data(void* self) {
    QStringListModel_QBaseResetInternalData((QStringListModel*)self);
}

void q_stringlistmodel_on_reset_internal_data(void* self, void (*callback)()) {
    QStringListModel_OnResetInternalData((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_event(void* self, void* event) {
    return QStringListModel_Event((QStringListModel*)self, (QEvent*)event);
}

bool q_stringlistmodel_qbase_event(void* self, void* event) {
    return QStringListModel_QBaseEvent((QStringListModel*)self, (QEvent*)event);
}

void q_stringlistmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QStringListModel_OnEvent((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_event_filter(void* self, void* watched, void* event) {
    return QStringListModel_EventFilter((QStringListModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_stringlistmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QStringListModel_QBaseEventFilter((QStringListModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_stringlistmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QStringListModel_OnEventFilter((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_timer_event(void* self, void* event) {
    QStringListModel_TimerEvent((QStringListModel*)self, (QTimerEvent*)event);
}

void q_stringlistmodel_qbase_timer_event(void* self, void* event) {
    QStringListModel_QBaseTimerEvent((QStringListModel*)self, (QTimerEvent*)event);
}

void q_stringlistmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QStringListModel_OnTimerEvent((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_child_event(void* self, void* event) {
    QStringListModel_ChildEvent((QStringListModel*)self, (QChildEvent*)event);
}

void q_stringlistmodel_qbase_child_event(void* self, void* event) {
    QStringListModel_QBaseChildEvent((QStringListModel*)self, (QChildEvent*)event);
}

void q_stringlistmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QStringListModel_OnChildEvent((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_custom_event(void* self, void* event) {
    QStringListModel_CustomEvent((QStringListModel*)self, (QEvent*)event);
}

void q_stringlistmodel_qbase_custom_event(void* self, void* event) {
    QStringListModel_QBaseCustomEvent((QStringListModel*)self, (QEvent*)event);
}

void q_stringlistmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QStringListModel_OnCustomEvent((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_connect_notify(void* self, void* signal) {
    QStringListModel_ConnectNotify((QStringListModel*)self, (QMetaMethod*)signal);
}

void q_stringlistmodel_qbase_connect_notify(void* self, void* signal) {
    QStringListModel_QBaseConnectNotify((QStringListModel*)self, (QMetaMethod*)signal);
}

void q_stringlistmodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QStringListModel_OnConnectNotify((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_disconnect_notify(void* self, void* signal) {
    QStringListModel_DisconnectNotify((QStringListModel*)self, (QMetaMethod*)signal);
}

void q_stringlistmodel_qbase_disconnect_notify(void* self, void* signal) {
    QStringListModel_QBaseDisconnectNotify((QStringListModel*)self, (QMetaMethod*)signal);
}

void q_stringlistmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QStringListModel_OnDisconnectNotify((QStringListModel*)self, (intptr_t)callback);
}

QModelIndex* q_stringlistmodel_create_index(void* self, int row, int column) {
    return QStringListModel_CreateIndex((QStringListModel*)self, row, column);
}

QModelIndex* q_stringlistmodel_qbase_create_index(void* self, int row, int column) {
    return QStringListModel_QBaseCreateIndex((QStringListModel*)self, row, column);
}

void q_stringlistmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    QStringListModel_OnCreateIndex((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_encode_data(void* self, libqt_list indexes, void* stream) {
    QStringListModel_EncodeData((QStringListModel*)self, indexes, (QDataStream*)stream);
}

void q_stringlistmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    QStringListModel_QBaseEncodeData((QStringListModel*)self, indexes, (QDataStream*)stream);
}

void q_stringlistmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    QStringListModel_OnEncodeData((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QStringListModel_DecodeData((QStringListModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_stringlistmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QStringListModel_QBaseDecodeData((QStringListModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_stringlistmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    QStringListModel_OnDecodeData((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QStringListModel_BeginInsertRows((QStringListModel*)self, (QModelIndex*)parent, first, last);
}

void q_stringlistmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QStringListModel_QBaseBeginInsertRows((QStringListModel*)self, (QModelIndex*)parent, first, last);
}

void q_stringlistmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QStringListModel_OnBeginInsertRows((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_end_insert_rows(void* self) {
    QStringListModel_EndInsertRows((QStringListModel*)self);
}

void q_stringlistmodel_qbase_end_insert_rows(void* self) {
    QStringListModel_QBaseEndInsertRows((QStringListModel*)self);
}

void q_stringlistmodel_on_end_insert_rows(void* self, void (*callback)()) {
    QStringListModel_OnEndInsertRows((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QStringListModel_BeginRemoveRows((QStringListModel*)self, (QModelIndex*)parent, first, last);
}

void q_stringlistmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QStringListModel_QBaseBeginRemoveRows((QStringListModel*)self, (QModelIndex*)parent, first, last);
}

void q_stringlistmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QStringListModel_OnBeginRemoveRows((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_end_remove_rows(void* self) {
    QStringListModel_EndRemoveRows((QStringListModel*)self);
}

void q_stringlistmodel_qbase_end_remove_rows(void* self) {
    QStringListModel_QBaseEndRemoveRows((QStringListModel*)self);
}

void q_stringlistmodel_on_end_remove_rows(void* self, void (*callback)()) {
    QStringListModel_OnEndRemoveRows((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QStringListModel_BeginMoveRows((QStringListModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool q_stringlistmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QStringListModel_QBaseBeginMoveRows((QStringListModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_stringlistmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QStringListModel_OnBeginMoveRows((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_end_move_rows(void* self) {
    QStringListModel_EndMoveRows((QStringListModel*)self);
}

void q_stringlistmodel_qbase_end_move_rows(void* self) {
    QStringListModel_QBaseEndMoveRows((QStringListModel*)self);
}

void q_stringlistmodel_on_end_move_rows(void* self, void (*callback)()) {
    QStringListModel_OnEndMoveRows((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QStringListModel_BeginInsertColumns((QStringListModel*)self, (QModelIndex*)parent, first, last);
}

void q_stringlistmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QStringListModel_QBaseBeginInsertColumns((QStringListModel*)self, (QModelIndex*)parent, first, last);
}

void q_stringlistmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QStringListModel_OnBeginInsertColumns((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_end_insert_columns(void* self) {
    QStringListModel_EndInsertColumns((QStringListModel*)self);
}

void q_stringlistmodel_qbase_end_insert_columns(void* self) {
    QStringListModel_QBaseEndInsertColumns((QStringListModel*)self);
}

void q_stringlistmodel_on_end_insert_columns(void* self, void (*callback)()) {
    QStringListModel_OnEndInsertColumns((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QStringListModel_BeginRemoveColumns((QStringListModel*)self, (QModelIndex*)parent, first, last);
}

void q_stringlistmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QStringListModel_QBaseBeginRemoveColumns((QStringListModel*)self, (QModelIndex*)parent, first, last);
}

void q_stringlistmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QStringListModel_OnBeginRemoveColumns((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_end_remove_columns(void* self) {
    QStringListModel_EndRemoveColumns((QStringListModel*)self);
}

void q_stringlistmodel_qbase_end_remove_columns(void* self) {
    QStringListModel_QBaseEndRemoveColumns((QStringListModel*)self);
}

void q_stringlistmodel_on_end_remove_columns(void* self, void (*callback)()) {
    QStringListModel_OnEndRemoveColumns((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QStringListModel_BeginMoveColumns((QStringListModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool q_stringlistmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QStringListModel_QBaseBeginMoveColumns((QStringListModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_stringlistmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QStringListModel_OnBeginMoveColumns((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_end_move_columns(void* self) {
    QStringListModel_EndMoveColumns((QStringListModel*)self);
}

void q_stringlistmodel_qbase_end_move_columns(void* self) {
    QStringListModel_QBaseEndMoveColumns((QStringListModel*)self);
}

void q_stringlistmodel_on_end_move_columns(void* self, void (*callback)()) {
    QStringListModel_OnEndMoveColumns((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_begin_reset_model(void* self) {
    QStringListModel_BeginResetModel((QStringListModel*)self);
}

void q_stringlistmodel_qbase_begin_reset_model(void* self) {
    QStringListModel_QBaseBeginResetModel((QStringListModel*)self);
}

void q_stringlistmodel_on_begin_reset_model(void* self, void (*callback)()) {
    QStringListModel_OnBeginResetModel((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_end_reset_model(void* self) {
    QStringListModel_EndResetModel((QStringListModel*)self);
}

void q_stringlistmodel_qbase_end_reset_model(void* self) {
    QStringListModel_QBaseEndResetModel((QStringListModel*)self);
}

void q_stringlistmodel_on_end_reset_model(void* self, void (*callback)()) {
    QStringListModel_OnEndResetModel((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_change_persistent_index(void* self, void* from, void* to) {
    QStringListModel_ChangePersistentIndex((QStringListModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_stringlistmodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QStringListModel_QBaseChangePersistentIndex((QStringListModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_stringlistmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    QStringListModel_OnChangePersistentIndex((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QStringListModel_ChangePersistentIndexList((QStringListModel*)self, from, to);
}

void q_stringlistmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QStringListModel_QBaseChangePersistentIndexList((QStringListModel*)self, from, to);
}

void q_stringlistmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    QStringListModel_OnChangePersistentIndexList((QStringListModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_stringlistmodel_persistent_index_list(void* self) {
    libqt_list _arr = QStringListModel_PersistentIndexList((QStringListModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_stringlistmodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QStringListModel_QBasePersistentIndexList((QStringListModel*)self);
    return _arr;
}

void q_stringlistmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    QStringListModel_OnPersistentIndexList((QStringListModel*)self, (intptr_t)callback);
}

QObject* q_stringlistmodel_sender(void* self) {
    return QStringListModel_Sender((QStringListModel*)self);
}

QObject* q_stringlistmodel_qbase_sender(void* self) {
    return QStringListModel_QBaseSender((QStringListModel*)self);
}

void q_stringlistmodel_on_sender(void* self, QObject* (*callback)()) {
    QStringListModel_OnSender((QStringListModel*)self, (intptr_t)callback);
}

int32_t q_stringlistmodel_sender_signal_index(void* self) {
    return QStringListModel_SenderSignalIndex((QStringListModel*)self);
}

int32_t q_stringlistmodel_qbase_sender_signal_index(void* self) {
    return QStringListModel_QBaseSenderSignalIndex((QStringListModel*)self);
}

void q_stringlistmodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QStringListModel_OnSenderSignalIndex((QStringListModel*)self, (intptr_t)callback);
}

int32_t q_stringlistmodel_receivers(void* self, const char* signal) {
    return QStringListModel_Receivers((QStringListModel*)self, signal);
}

int32_t q_stringlistmodel_qbase_receivers(void* self, const char* signal) {
    return QStringListModel_QBaseReceivers((QStringListModel*)self, signal);
}

void q_stringlistmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QStringListModel_OnReceivers((QStringListModel*)self, (intptr_t)callback);
}

bool q_stringlistmodel_is_signal_connected(void* self, void* signal) {
    return QStringListModel_IsSignalConnected((QStringListModel*)self, (QMetaMethod*)signal);
}

bool q_stringlistmodel_qbase_is_signal_connected(void* self, void* signal) {
    return QStringListModel_QBaseIsSignalConnected((QStringListModel*)self, (QMetaMethod*)signal);
}

void q_stringlistmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QStringListModel_OnIsSignalConnected((QStringListModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_stringlistmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_stringlistmodel_delete(void* self) {
    QStringListModel_Delete((QStringListModel*)(self));
}
