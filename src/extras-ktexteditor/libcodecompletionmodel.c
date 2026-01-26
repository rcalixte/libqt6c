#include "librange.hpp"
#include "libview.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libcodecompletionmodel.hpp"
#include "libcodecompletionmodel.h"

KTextEditor__CodeCompletionModel* k_texteditor__codecompletionmodel_new(void* parent) {
    return KTextEditor__CodeCompletionModel_new((QObject*)parent);
}

const QMetaObject* k_texteditor__codecompletionmodel_meta_object(void* self) {
    return KTextEditor__CodeCompletionModel_MetaObject((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KTextEditor__CodeCompletionModel_OnMetaObject((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

const QMetaObject* k_texteditor__codecompletionmodel_qbase_meta_object(void* self) {
    return KTextEditor__CodeCompletionModel_QBaseMetaObject((KTextEditor__CodeCompletionModel*)self);
}

void* k_texteditor__codecompletionmodel_metacast(void* self, const char* param1) {
    return KTextEditor__CodeCompletionModel_Metacast((KTextEditor__CodeCompletionModel*)self, param1);
}

void k_texteditor__codecompletionmodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KTextEditor__CodeCompletionModel_OnMetacast((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void* k_texteditor__codecompletionmodel_qbase_metacast(void* self, const char* param1) {
    return KTextEditor__CodeCompletionModel_QBaseMetacast((KTextEditor__CodeCompletionModel*)self, param1);
}

int32_t k_texteditor__codecompletionmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEditor__CodeCompletionModel_Metacall((KTextEditor__CodeCompletionModel*)self, param1, param2, param3);
}

void k_texteditor__codecompletionmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KTextEditor__CodeCompletionModel_OnMetacall((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

int32_t k_texteditor__codecompletionmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEditor__CodeCompletionModel_QBaseMetacall((KTextEditor__CodeCompletionModel*)self, param1, param2, param3);
}

const char* k_texteditor__codecompletionmodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__codecompletionmodel_set_row_count(void* self, int rowCount) {
    KTextEditor__CodeCompletionModel_SetRowCount((KTextEditor__CodeCompletionModel*)self, rowCount);
}

void k_texteditor__codecompletionmodel_completion_invoked(void* self, void* view, void* range, int32_t invocationType) {
    KTextEditor__CodeCompletionModel_CompletionInvoked((KTextEditor__CodeCompletionModel*)self, (KTextEditor__View*)view, (KTextEditor__Range*)range, invocationType);
}

void k_texteditor__codecompletionmodel_on_completion_invoked(void* self, void (*callback)(void*, void*, void*, int32_t)) {
    KTextEditor__CodeCompletionModel_OnCompletionInvoked((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_qbase_completion_invoked(void* self, void* view, void* range, int32_t invocationType) {
    KTextEditor__CodeCompletionModel_QBaseCompletionInvoked((KTextEditor__CodeCompletionModel*)self, (KTextEditor__View*)view, (KTextEditor__Range*)range, invocationType);
}

void k_texteditor__codecompletionmodel_execute_completion_item(void* self, void* view, void* word, void* index) {
    KTextEditor__CodeCompletionModel_ExecuteCompletionItem((KTextEditor__CodeCompletionModel*)self, (KTextEditor__View*)view, (KTextEditor__Range*)word, (QModelIndex*)index);
}

void k_texteditor__codecompletionmodel_on_execute_completion_item(void* self, void (*callback)(void*, void*, void*, void*)) {
    KTextEditor__CodeCompletionModel_OnExecuteCompletionItem((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_qbase_execute_completion_item(void* self, void* view, void* word, void* index) {
    KTextEditor__CodeCompletionModel_QBaseExecuteCompletionItem((KTextEditor__CodeCompletionModel*)self, (KTextEditor__View*)view, (KTextEditor__Range*)word, (QModelIndex*)index);
}

int32_t k_texteditor__codecompletionmodel_column_count(void* self, void* parent) {
    return KTextEditor__CodeCompletionModel_ColumnCount((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent);
}

void k_texteditor__codecompletionmodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnColumnCount((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

int32_t k_texteditor__codecompletionmodel_qbase_column_count(void* self, void* parent) {
    return KTextEditor__CodeCompletionModel_QBaseColumnCount((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent);
}

QModelIndex* k_texteditor__codecompletionmodel_index(void* self, int row, int column, void* parent) {
    return KTextEditor__CodeCompletionModel_Index((KTextEditor__CodeCompletionModel*)self, row, column, (QModelIndex*)parent);
}

void k_texteditor__codecompletionmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KTextEditor__CodeCompletionModel_OnIndex((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

QModelIndex* k_texteditor__codecompletionmodel_qbase_index(void* self, int row, int column, void* parent) {
    return KTextEditor__CodeCompletionModel_QBaseIndex((KTextEditor__CodeCompletionModel*)self, row, column, (QModelIndex*)parent);
}

libqt_map /* of int to QVariant* */ k_texteditor__codecompletionmodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KTextEditor__CodeCompletionModel_ItemData((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_texteditor__codecompletionmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnItemData((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_texteditor__codecompletionmodel_qbase_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KTextEditor__CodeCompletionModel_QBaseItemData((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

QModelIndex* k_texteditor__codecompletionmodel_parent(void* self, void* index) {
    return KTextEditor__CodeCompletionModel_Parent((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index);
}

void k_texteditor__codecompletionmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnParent((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

QModelIndex* k_texteditor__codecompletionmodel_qbase_parent(void* self, void* index) {
    return KTextEditor__CodeCompletionModel_QBaseParent((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index);
}

int32_t k_texteditor__codecompletionmodel_row_count(void* self, void* parent) {
    return KTextEditor__CodeCompletionModel_RowCount((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent);
}

void k_texteditor__codecompletionmodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnRowCount((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

int32_t k_texteditor__codecompletionmodel_qbase_row_count(void* self, void* parent) {
    return KTextEditor__CodeCompletionModel_QBaseRowCount((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent);
}

bool k_texteditor__codecompletionmodel_has_groups(void* self) {
    return KTextEditor__CodeCompletionModel_HasGroups((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_wait_for_reset(void* self) {
    KTextEditor__CodeCompletionModel_WaitForReset((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_wait_for_reset(void* self, void (*callback)(void*)) {
    KTextEditor__CodeCompletionModel_Connect_WaitForReset((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_has_groups_changed(void* self, void* model, bool hasGroups) {
    KTextEditor__CodeCompletionModel_HasGroupsChanged((KTextEditor__CodeCompletionModel*)self, (KTextEditor__CodeCompletionModel*)model, hasGroups);
}

void k_texteditor__codecompletionmodel_on_has_groups_changed(void* self, void (*callback)(void*, void*, bool)) {
    KTextEditor__CodeCompletionModel_Connect_HasGroupsChanged((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_set_has_groups(void* self, bool hasGroups) {
    KTextEditor__CodeCompletionModel_SetHasGroups((KTextEditor__CodeCompletionModel*)self, hasGroups);
}

void k_texteditor__codecompletionmodel_on_set_has_groups(void* self, void (*callback)(void*, bool)) {
    KTextEditor__CodeCompletionModel_OnSetHasGroups((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_qbase_set_has_groups(void* self, bool hasGroups) {
    KTextEditor__CodeCompletionModel_QBaseSetHasGroups((KTextEditor__CodeCompletionModel*)self, hasGroups);
}

const char* k_texteditor__codecompletionmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__codecompletionmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_texteditor__codecompletionmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool k_texteditor__codecompletionmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_texteditor__codecompletionmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_texteditor__codecompletionmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_texteditor__codecompletionmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_texteditor__codecompletionmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_texteditor__codecompletionmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_texteditor__codecompletionmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_texteditor__codecompletionmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_texteditor__codecompletionmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_texteditor__codecompletionmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_texteditor__codecompletionmodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_texteditor__codecompletionmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_texteditor__codecompletionmodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_texteditor__codecompletionmodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_texteditor__codecompletionmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_texteditor__codecompletionmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_texteditor__codecompletionmodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_texteditor__codecompletionmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_texteditor__codecompletionmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_texteditor__codecompletionmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_texteditor__codecompletionmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_texteditor__codecompletionmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_texteditor__codecompletionmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_texteditor__codecompletionmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__codecompletionmodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texteditor__codecompletionmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texteditor__codecompletionmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texteditor__codecompletionmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texteditor__codecompletionmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texteditor__codecompletionmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texteditor__codecompletionmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texteditor__codecompletionmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texteditor__codecompletionmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_texteditor__codecompletionmodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_texteditor__codecompletionmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texteditor__codecompletionmodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texteditor__codecompletionmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texteditor__codecompletionmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_texteditor__codecompletionmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texteditor__codecompletionmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texteditor__codecompletionmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texteditor__codecompletionmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texteditor__codecompletionmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texteditor__codecompletionmodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_texteditor__codecompletionmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texteditor__codecompletionmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texteditor__codecompletionmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texteditor__codecompletionmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texteditor__codecompletionmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__codecompletionmodel_dynamic_property_names\n");
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

QBindingStorage* k_texteditor__codecompletionmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texteditor__codecompletionmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texteditor__codecompletionmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texteditor__codecompletionmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texteditor__codecompletionmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_texteditor__codecompletionmodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_texteditor__codecompletionmodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_texteditor__codecompletionmodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_texteditor__codecompletionmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texteditor__codecompletionmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_texteditor__codecompletionmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texteditor__codecompletionmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* k_texteditor__codecompletionmodel_sibling(void* self, int row, int column, void* idx) {
    return KTextEditor__CodeCompletionModel_Sibling((KTextEditor__CodeCompletionModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_texteditor__codecompletionmodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return KTextEditor__CodeCompletionModel_QBaseSibling((KTextEditor__CodeCompletionModel*)self, row, column, (QModelIndex*)idx);
}

void k_texteditor__codecompletionmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KTextEditor__CodeCompletionModel_OnSibling((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_has_children(void* self, void* parent) {
    return KTextEditor__CodeCompletionModel_HasChildren((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent);
}

bool k_texteditor__codecompletionmodel_qbase_has_children(void* self, void* parent) {
    return KTextEditor__CodeCompletionModel_QBaseHasChildren((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent);
}

void k_texteditor__codecompletionmodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnHasChildren((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

QVariant* k_texteditor__codecompletionmodel_data(void* self, void* index, int role) {
    return KTextEditor__CodeCompletionModel_Data((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index, role);
}

QVariant* k_texteditor__codecompletionmodel_qbase_data(void* self, void* index, int role) {
    return KTextEditor__CodeCompletionModel_QBaseData((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index, role);
}

void k_texteditor__codecompletionmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    KTextEditor__CodeCompletionModel_OnData((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_set_data(void* self, void* index, void* value, int role) {
    return KTextEditor__CodeCompletionModel_SetData((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_texteditor__codecompletionmodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return KTextEditor__CodeCompletionModel_QBaseSetData((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_texteditor__codecompletionmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    KTextEditor__CodeCompletionModel_OnSetData((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

QVariant* k_texteditor__codecompletionmodel_header_data(void* self, int section, int32_t orientation, int role) {
    return KTextEditor__CodeCompletionModel_HeaderData((KTextEditor__CodeCompletionModel*)self, section, orientation, role);
}

QVariant* k_texteditor__codecompletionmodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return KTextEditor__CodeCompletionModel_QBaseHeaderData((KTextEditor__CodeCompletionModel*)self, section, orientation, role);
}

void k_texteditor__codecompletionmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    KTextEditor__CodeCompletionModel_OnHeaderData((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KTextEditor__CodeCompletionModel_SetHeaderData((KTextEditor__CodeCompletionModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_texteditor__codecompletionmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KTextEditor__CodeCompletionModel_QBaseSetHeaderData((KTextEditor__CodeCompletionModel*)self, section, orientation, (QVariant*)value, role);
}

void k_texteditor__codecompletionmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    KTextEditor__CodeCompletionModel_OnSetHeaderData((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_texteditor__codecompletionmodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_texteditor__codecompletionmodel_set_item_data\n");
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
    bool _out = KTextEditor__CodeCompletionModel_SetItemData((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool k_texteditor__codecompletionmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_texteditor__codecompletionmodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_texteditor__codecompletionmodel_set_item_data\n");
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
    bool _out = KTextEditor__CodeCompletionModel_QBaseSetItemData((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_texteditor__codecompletionmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    KTextEditor__CodeCompletionModel_OnSetItemData((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_clear_item_data(void* self, void* index) {
    return KTextEditor__CodeCompletionModel_ClearItemData((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index);
}

bool k_texteditor__codecompletionmodel_qbase_clear_item_data(void* self, void* index) {
    return KTextEditor__CodeCompletionModel_QBaseClearItemData((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index);
}

void k_texteditor__codecompletionmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnClearItemData((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

const char** k_texteditor__codecompletionmodel_mime_types(void* self) {
    libqt_list _arr = KTextEditor__CodeCompletionModel_MimeTypes((KTextEditor__CodeCompletionModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__codecompletionmodel_mime_types\n");
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

const char** k_texteditor__codecompletionmodel_qbase_mime_types(void* self) {
    libqt_list _arr = KTextEditor__CodeCompletionModel_QBaseMimeTypes((KTextEditor__CodeCompletionModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__codecompletionmodel_mime_types\n");
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

void k_texteditor__codecompletionmodel_on_mime_types(void* self, const char** (*callback)()) {
    KTextEditor__CodeCompletionModel_OnMimeTypes((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

QMimeData* k_texteditor__codecompletionmodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KTextEditor__CodeCompletionModel_MimeData((KTextEditor__CodeCompletionModel*)self, indexes);
}

QMimeData* k_texteditor__codecompletionmodel_qbase_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KTextEditor__CodeCompletionModel_QBaseMimeData((KTextEditor__CodeCompletionModel*)self, indexes);
}

void k_texteditor__codecompletionmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    KTextEditor__CodeCompletionModel_OnMimeData((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KTextEditor__CodeCompletionModel_CanDropMimeData((KTextEditor__CodeCompletionModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_texteditor__codecompletionmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KTextEditor__CodeCompletionModel_QBaseCanDropMimeData((KTextEditor__CodeCompletionModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_texteditor__codecompletionmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KTextEditor__CodeCompletionModel_OnCanDropMimeData((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KTextEditor__CodeCompletionModel_DropMimeData((KTextEditor__CodeCompletionModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_texteditor__codecompletionmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KTextEditor__CodeCompletionModel_QBaseDropMimeData((KTextEditor__CodeCompletionModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_texteditor__codecompletionmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KTextEditor__CodeCompletionModel_OnDropMimeData((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

int32_t k_texteditor__codecompletionmodel_supported_drop_actions(void* self) {
    return KTextEditor__CodeCompletionModel_SupportedDropActions((KTextEditor__CodeCompletionModel*)self);
}

int32_t k_texteditor__codecompletionmodel_qbase_supported_drop_actions(void* self) {
    return KTextEditor__CodeCompletionModel_QBaseSupportedDropActions((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KTextEditor__CodeCompletionModel_OnSupportedDropActions((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

int32_t k_texteditor__codecompletionmodel_supported_drag_actions(void* self) {
    return KTextEditor__CodeCompletionModel_SupportedDragActions((KTextEditor__CodeCompletionModel*)self);
}

int32_t k_texteditor__codecompletionmodel_qbase_supported_drag_actions(void* self) {
    return KTextEditor__CodeCompletionModel_QBaseSupportedDragActions((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    KTextEditor__CodeCompletionModel_OnSupportedDragActions((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_insert_rows(void* self, int row, int count, void* parent) {
    return KTextEditor__CodeCompletionModel_InsertRows((KTextEditor__CodeCompletionModel*)self, row, count, (QModelIndex*)parent);
}

bool k_texteditor__codecompletionmodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return KTextEditor__CodeCompletionModel_QBaseInsertRows((KTextEditor__CodeCompletionModel*)self, row, count, (QModelIndex*)parent);
}

void k_texteditor__codecompletionmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KTextEditor__CodeCompletionModel_OnInsertRows((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_insert_columns(void* self, int column, int count, void* parent) {
    return KTextEditor__CodeCompletionModel_InsertColumns((KTextEditor__CodeCompletionModel*)self, column, count, (QModelIndex*)parent);
}

bool k_texteditor__codecompletionmodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return KTextEditor__CodeCompletionModel_QBaseInsertColumns((KTextEditor__CodeCompletionModel*)self, column, count, (QModelIndex*)parent);
}

void k_texteditor__codecompletionmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KTextEditor__CodeCompletionModel_OnInsertColumns((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_remove_rows(void* self, int row, int count, void* parent) {
    return KTextEditor__CodeCompletionModel_RemoveRows((KTextEditor__CodeCompletionModel*)self, row, count, (QModelIndex*)parent);
}

bool k_texteditor__codecompletionmodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return KTextEditor__CodeCompletionModel_QBaseRemoveRows((KTextEditor__CodeCompletionModel*)self, row, count, (QModelIndex*)parent);
}

void k_texteditor__codecompletionmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KTextEditor__CodeCompletionModel_OnRemoveRows((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_remove_columns(void* self, int column, int count, void* parent) {
    return KTextEditor__CodeCompletionModel_RemoveColumns((KTextEditor__CodeCompletionModel*)self, column, count, (QModelIndex*)parent);
}

bool k_texteditor__codecompletionmodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return KTextEditor__CodeCompletionModel_QBaseRemoveColumns((KTextEditor__CodeCompletionModel*)self, column, count, (QModelIndex*)parent);
}

void k_texteditor__codecompletionmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KTextEditor__CodeCompletionModel_OnRemoveColumns((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KTextEditor__CodeCompletionModel_MoveRows((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_texteditor__codecompletionmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KTextEditor__CodeCompletionModel_QBaseMoveRows((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_texteditor__codecompletionmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KTextEditor__CodeCompletionModel_OnMoveRows((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KTextEditor__CodeCompletionModel_MoveColumns((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_texteditor__codecompletionmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KTextEditor__CodeCompletionModel_QBaseMoveColumns((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_texteditor__codecompletionmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KTextEditor__CodeCompletionModel_OnMoveColumns((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_fetch_more(void* self, void* parent) {
    KTextEditor__CodeCompletionModel_FetchMore((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent);
}

void k_texteditor__codecompletionmodel_qbase_fetch_more(void* self, void* parent) {
    KTextEditor__CodeCompletionModel_QBaseFetchMore((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent);
}

void k_texteditor__codecompletionmodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnFetchMore((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_can_fetch_more(void* self, void* parent) {
    return KTextEditor__CodeCompletionModel_CanFetchMore((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent);
}

bool k_texteditor__codecompletionmodel_qbase_can_fetch_more(void* self, void* parent) {
    return KTextEditor__CodeCompletionModel_QBaseCanFetchMore((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent);
}

void k_texteditor__codecompletionmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnCanFetchMore((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

int32_t k_texteditor__codecompletionmodel_flags(void* self, void* index) {
    return KTextEditor__CodeCompletionModel_Flags((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index);
}

int32_t k_texteditor__codecompletionmodel_qbase_flags(void* self, void* index) {
    return KTextEditor__CodeCompletionModel_QBaseFlags((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index);
}

void k_texteditor__codecompletionmodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnFlags((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_sort(void* self, int column, int32_t order) {
    KTextEditor__CodeCompletionModel_Sort((KTextEditor__CodeCompletionModel*)self, column, order);
}

void k_texteditor__codecompletionmodel_qbase_sort(void* self, int column, int32_t order) {
    KTextEditor__CodeCompletionModel_QBaseSort((KTextEditor__CodeCompletionModel*)self, column, order);
}

void k_texteditor__codecompletionmodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KTextEditor__CodeCompletionModel_OnSort((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

QModelIndex* k_texteditor__codecompletionmodel_buddy(void* self, void* index) {
    return KTextEditor__CodeCompletionModel_Buddy((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index);
}

QModelIndex* k_texteditor__codecompletionmodel_qbase_buddy(void* self, void* index) {
    return KTextEditor__CodeCompletionModel_QBaseBuddy((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index);
}

void k_texteditor__codecompletionmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnBuddy((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_texteditor__codecompletionmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KTextEditor__CodeCompletionModel_Match((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_texteditor__codecompletionmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KTextEditor__CodeCompletionModel_QBaseMatch((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_texteditor__codecompletionmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    KTextEditor__CodeCompletionModel_OnMatch((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

QSize* k_texteditor__codecompletionmodel_span(void* self, void* index) {
    return KTextEditor__CodeCompletionModel_Span((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index);
}

QSize* k_texteditor__codecompletionmodel_qbase_span(void* self, void* index) {
    return KTextEditor__CodeCompletionModel_QBaseSpan((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index);
}

void k_texteditor__codecompletionmodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnSpan((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_texteditor__codecompletionmodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KTextEditor__CodeCompletionModel_RoleNames((KTextEditor__CodeCompletionModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_texteditor__codecompletionmodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_texteditor__codecompletionmodel_role_names\n");
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

libqt_map /* of int to char* */ k_texteditor__codecompletionmodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KTextEditor__CodeCompletionModel_QBaseRoleNames((KTextEditor__CodeCompletionModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_texteditor__codecompletionmodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_texteditor__codecompletionmodel_role_names\n");
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

void k_texteditor__codecompletionmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    KTextEditor__CodeCompletionModel_OnRoleNames((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    KTextEditor__CodeCompletionModel_MultiData((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_texteditor__codecompletionmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    KTextEditor__CodeCompletionModel_QBaseMultiData((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_texteditor__codecompletionmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    KTextEditor__CodeCompletionModel_OnMultiData((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_submit(void* self) {
    return KTextEditor__CodeCompletionModel_Submit((KTextEditor__CodeCompletionModel*)self);
}

bool k_texteditor__codecompletionmodel_qbase_submit(void* self) {
    return KTextEditor__CodeCompletionModel_QBaseSubmit((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_submit(void* self, bool (*callback)()) {
    KTextEditor__CodeCompletionModel_OnSubmit((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_revert(void* self) {
    KTextEditor__CodeCompletionModel_Revert((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_qbase_revert(void* self) {
    KTextEditor__CodeCompletionModel_QBaseRevert((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_revert(void* self, void (*callback)()) {
    KTextEditor__CodeCompletionModel_OnRevert((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_reset_internal_data(void* self) {
    KTextEditor__CodeCompletionModel_ResetInternalData((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_qbase_reset_internal_data(void* self) {
    KTextEditor__CodeCompletionModel_QBaseResetInternalData((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_reset_internal_data(void* self, void (*callback)()) {
    KTextEditor__CodeCompletionModel_OnResetInternalData((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_event(void* self, void* event) {
    return KTextEditor__CodeCompletionModel_Event((KTextEditor__CodeCompletionModel*)self, (QEvent*)event);
}

bool k_texteditor__codecompletionmodel_qbase_event(void* self, void* event) {
    return KTextEditor__CodeCompletionModel_QBaseEvent((KTextEditor__CodeCompletionModel*)self, (QEvent*)event);
}

void k_texteditor__codecompletionmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnEvent((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_event_filter(void* self, void* watched, void* event) {
    return KTextEditor__CodeCompletionModel_EventFilter((KTextEditor__CodeCompletionModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_texteditor__codecompletionmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KTextEditor__CodeCompletionModel_QBaseEventFilter((KTextEditor__CodeCompletionModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_texteditor__codecompletionmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KTextEditor__CodeCompletionModel_OnEventFilter((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_timer_event(void* self, void* event) {
    KTextEditor__CodeCompletionModel_TimerEvent((KTextEditor__CodeCompletionModel*)self, (QTimerEvent*)event);
}

void k_texteditor__codecompletionmodel_qbase_timer_event(void* self, void* event) {
    KTextEditor__CodeCompletionModel_QBaseTimerEvent((KTextEditor__CodeCompletionModel*)self, (QTimerEvent*)event);
}

void k_texteditor__codecompletionmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnTimerEvent((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_child_event(void* self, void* event) {
    KTextEditor__CodeCompletionModel_ChildEvent((KTextEditor__CodeCompletionModel*)self, (QChildEvent*)event);
}

void k_texteditor__codecompletionmodel_qbase_child_event(void* self, void* event) {
    KTextEditor__CodeCompletionModel_QBaseChildEvent((KTextEditor__CodeCompletionModel*)self, (QChildEvent*)event);
}

void k_texteditor__codecompletionmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnChildEvent((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_custom_event(void* self, void* event) {
    KTextEditor__CodeCompletionModel_CustomEvent((KTextEditor__CodeCompletionModel*)self, (QEvent*)event);
}

void k_texteditor__codecompletionmodel_qbase_custom_event(void* self, void* event) {
    KTextEditor__CodeCompletionModel_QBaseCustomEvent((KTextEditor__CodeCompletionModel*)self, (QEvent*)event);
}

void k_texteditor__codecompletionmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnCustomEvent((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_connect_notify(void* self, void* signal) {
    KTextEditor__CodeCompletionModel_ConnectNotify((KTextEditor__CodeCompletionModel*)self, (QMetaMethod*)signal);
}

void k_texteditor__codecompletionmodel_qbase_connect_notify(void* self, void* signal) {
    KTextEditor__CodeCompletionModel_QBaseConnectNotify((KTextEditor__CodeCompletionModel*)self, (QMetaMethod*)signal);
}

void k_texteditor__codecompletionmodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnConnectNotify((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_disconnect_notify(void* self, void* signal) {
    KTextEditor__CodeCompletionModel_DisconnectNotify((KTextEditor__CodeCompletionModel*)self, (QMetaMethod*)signal);
}

void k_texteditor__codecompletionmodel_qbase_disconnect_notify(void* self, void* signal) {
    KTextEditor__CodeCompletionModel_QBaseDisconnectNotify((KTextEditor__CodeCompletionModel*)self, (QMetaMethod*)signal);
}

void k_texteditor__codecompletionmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnDisconnectNotify((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

QModelIndex* k_texteditor__codecompletionmodel_create_index(void* self, int row, int column) {
    return KTextEditor__CodeCompletionModel_CreateIndex((KTextEditor__CodeCompletionModel*)self, row, column);
}

QModelIndex* k_texteditor__codecompletionmodel_qbase_create_index(void* self, int row, int column) {
    return KTextEditor__CodeCompletionModel_QBaseCreateIndex((KTextEditor__CodeCompletionModel*)self, row, column);
}

void k_texteditor__codecompletionmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    KTextEditor__CodeCompletionModel_OnCreateIndex((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KTextEditor__CodeCompletionModel_EncodeData((KTextEditor__CodeCompletionModel*)self, indexes, (QDataStream*)stream);
}

void k_texteditor__codecompletionmodel_qbase_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KTextEditor__CodeCompletionModel_QBaseEncodeData((KTextEditor__CodeCompletionModel*)self, indexes, (QDataStream*)stream);
}

void k_texteditor__codecompletionmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    KTextEditor__CodeCompletionModel_OnEncodeData((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KTextEditor__CodeCompletionModel_DecodeData((KTextEditor__CodeCompletionModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_texteditor__codecompletionmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KTextEditor__CodeCompletionModel_QBaseDecodeData((KTextEditor__CodeCompletionModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_texteditor__codecompletionmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    KTextEditor__CodeCompletionModel_OnDecodeData((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    KTextEditor__CodeCompletionModel_BeginInsertRows((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent, first, last);
}

void k_texteditor__codecompletionmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    KTextEditor__CodeCompletionModel_QBaseBeginInsertRows((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent, first, last);
}

void k_texteditor__codecompletionmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KTextEditor__CodeCompletionModel_OnBeginInsertRows((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_end_insert_rows(void* self) {
    KTextEditor__CodeCompletionModel_EndInsertRows((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_qbase_end_insert_rows(void* self) {
    KTextEditor__CodeCompletionModel_QBaseEndInsertRows((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_end_insert_rows(void* self, void (*callback)()) {
    KTextEditor__CodeCompletionModel_OnEndInsertRows((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    KTextEditor__CodeCompletionModel_BeginRemoveRows((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent, first, last);
}

void k_texteditor__codecompletionmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    KTextEditor__CodeCompletionModel_QBaseBeginRemoveRows((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent, first, last);
}

void k_texteditor__codecompletionmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KTextEditor__CodeCompletionModel_OnBeginRemoveRows((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_end_remove_rows(void* self) {
    KTextEditor__CodeCompletionModel_EndRemoveRows((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_qbase_end_remove_rows(void* self) {
    KTextEditor__CodeCompletionModel_QBaseEndRemoveRows((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_end_remove_rows(void* self, void (*callback)()) {
    KTextEditor__CodeCompletionModel_OnEndRemoveRows((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KTextEditor__CodeCompletionModel_BeginMoveRows((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_texteditor__codecompletionmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KTextEditor__CodeCompletionModel_QBaseBeginMoveRows((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_texteditor__codecompletionmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KTextEditor__CodeCompletionModel_OnBeginMoveRows((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_end_move_rows(void* self) {
    KTextEditor__CodeCompletionModel_EndMoveRows((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_qbase_end_move_rows(void* self) {
    KTextEditor__CodeCompletionModel_QBaseEndMoveRows((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_end_move_rows(void* self, void (*callback)()) {
    KTextEditor__CodeCompletionModel_OnEndMoveRows((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    KTextEditor__CodeCompletionModel_BeginInsertColumns((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent, first, last);
}

void k_texteditor__codecompletionmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    KTextEditor__CodeCompletionModel_QBaseBeginInsertColumns((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent, first, last);
}

void k_texteditor__codecompletionmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KTextEditor__CodeCompletionModel_OnBeginInsertColumns((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_end_insert_columns(void* self) {
    KTextEditor__CodeCompletionModel_EndInsertColumns((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_qbase_end_insert_columns(void* self) {
    KTextEditor__CodeCompletionModel_QBaseEndInsertColumns((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_end_insert_columns(void* self, void (*callback)()) {
    KTextEditor__CodeCompletionModel_OnEndInsertColumns((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    KTextEditor__CodeCompletionModel_BeginRemoveColumns((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent, first, last);
}

void k_texteditor__codecompletionmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    KTextEditor__CodeCompletionModel_QBaseBeginRemoveColumns((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)parent, first, last);
}

void k_texteditor__codecompletionmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KTextEditor__CodeCompletionModel_OnBeginRemoveColumns((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_end_remove_columns(void* self) {
    KTextEditor__CodeCompletionModel_EndRemoveColumns((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_qbase_end_remove_columns(void* self) {
    KTextEditor__CodeCompletionModel_QBaseEndRemoveColumns((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_end_remove_columns(void* self, void (*callback)()) {
    KTextEditor__CodeCompletionModel_OnEndRemoveColumns((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KTextEditor__CodeCompletionModel_BeginMoveColumns((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_texteditor__codecompletionmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KTextEditor__CodeCompletionModel_QBaseBeginMoveColumns((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_texteditor__codecompletionmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KTextEditor__CodeCompletionModel_OnBeginMoveColumns((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_end_move_columns(void* self) {
    KTextEditor__CodeCompletionModel_EndMoveColumns((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_qbase_end_move_columns(void* self) {
    KTextEditor__CodeCompletionModel_QBaseEndMoveColumns((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_end_move_columns(void* self, void (*callback)()) {
    KTextEditor__CodeCompletionModel_OnEndMoveColumns((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_begin_reset_model(void* self) {
    KTextEditor__CodeCompletionModel_BeginResetModel((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_qbase_begin_reset_model(void* self) {
    KTextEditor__CodeCompletionModel_QBaseBeginResetModel((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_begin_reset_model(void* self, void (*callback)()) {
    KTextEditor__CodeCompletionModel_OnBeginResetModel((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_end_reset_model(void* self) {
    KTextEditor__CodeCompletionModel_EndResetModel((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_qbase_end_reset_model(void* self) {
    KTextEditor__CodeCompletionModel_QBaseEndResetModel((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_end_reset_model(void* self, void (*callback)()) {
    KTextEditor__CodeCompletionModel_OnEndResetModel((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_change_persistent_index(void* self, void* from, void* to) {
    KTextEditor__CodeCompletionModel_ChangePersistentIndex((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_texteditor__codecompletionmodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    KTextEditor__CodeCompletionModel_QBaseChangePersistentIndex((KTextEditor__CodeCompletionModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_texteditor__codecompletionmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    KTextEditor__CodeCompletionModel_OnChangePersistentIndex((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KTextEditor__CodeCompletionModel_ChangePersistentIndexList((KTextEditor__CodeCompletionModel*)self, from, to);
}

void k_texteditor__codecompletionmodel_qbase_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KTextEditor__CodeCompletionModel_QBaseChangePersistentIndexList((KTextEditor__CodeCompletionModel*)self, from, to);
}

void k_texteditor__codecompletionmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    KTextEditor__CodeCompletionModel_OnChangePersistentIndexList((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_texteditor__codecompletionmodel_persistent_index_list(void* self) {
    libqt_list _arr = KTextEditor__CodeCompletionModel_PersistentIndexList((KTextEditor__CodeCompletionModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_texteditor__codecompletionmodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = KTextEditor__CodeCompletionModel_QBasePersistentIndexList((KTextEditor__CodeCompletionModel*)self);
    return _arr;
}

void k_texteditor__codecompletionmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    KTextEditor__CodeCompletionModel_OnPersistentIndexList((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

QObject* k_texteditor__codecompletionmodel_sender(void* self) {
    return KTextEditor__CodeCompletionModel_Sender((KTextEditor__CodeCompletionModel*)self);
}

QObject* k_texteditor__codecompletionmodel_qbase_sender(void* self) {
    return KTextEditor__CodeCompletionModel_QBaseSender((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_sender(void* self, QObject* (*callback)()) {
    KTextEditor__CodeCompletionModel_OnSender((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

int32_t k_texteditor__codecompletionmodel_sender_signal_index(void* self) {
    return KTextEditor__CodeCompletionModel_SenderSignalIndex((KTextEditor__CodeCompletionModel*)self);
}

int32_t k_texteditor__codecompletionmodel_qbase_sender_signal_index(void* self) {
    return KTextEditor__CodeCompletionModel_QBaseSenderSignalIndex((KTextEditor__CodeCompletionModel*)self);
}

void k_texteditor__codecompletionmodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KTextEditor__CodeCompletionModel_OnSenderSignalIndex((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

int32_t k_texteditor__codecompletionmodel_receivers(void* self, const char* signal) {
    return KTextEditor__CodeCompletionModel_Receivers((KTextEditor__CodeCompletionModel*)self, signal);
}

int32_t k_texteditor__codecompletionmodel_qbase_receivers(void* self, const char* signal) {
    return KTextEditor__CodeCompletionModel_QBaseReceivers((KTextEditor__CodeCompletionModel*)self, signal);
}

void k_texteditor__codecompletionmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KTextEditor__CodeCompletionModel_OnReceivers((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodel_is_signal_connected(void* self, void* signal) {
    return KTextEditor__CodeCompletionModel_IsSignalConnected((KTextEditor__CodeCompletionModel*)self, (QMetaMethod*)signal);
}

bool k_texteditor__codecompletionmodel_qbase_is_signal_connected(void* self, void* signal) {
    return KTextEditor__CodeCompletionModel_QBaseIsSignalConnected((KTextEditor__CodeCompletionModel*)self, (QMetaMethod*)signal);
}

void k_texteditor__codecompletionmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModel_OnIsSignalConnected((KTextEditor__CodeCompletionModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodel_delete(void* self) {
    KTextEditor__CodeCompletionModel_Delete((KTextEditor__CodeCompletionModel*)(self));
}
