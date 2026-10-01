#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "libqpdfdocument.hpp"
#include "libqpdflink.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libqpdfsearchmodel.hpp"
#include "libqpdfsearchmodel.h"

QPdfSearchModel* q_pdfsearchmodel_new() {
    return QPdfSearchModel_New();
}

QPdfSearchModel* q_pdfsearchmodel_new2(void* parent) {
    return QPdfSearchModel_New2((QObject*)parent);
}

const QMetaObject* q_pdfsearchmodel_meta_object(const void* self) {
    return QPdfSearchModel_MetaObject((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QPdfSearchModel_OnMetaObject((QPdfSearchModel*)self, (intptr_t)callback);
}

const QMetaObject* q_pdfsearchmodel_super_meta_object(const void* self) {
    return QPdfSearchModel_SuperMetaObject((QPdfSearchModel*)self);
}

void* q_pdfsearchmodel_metacast(void* self, const char* param1) {
    return QPdfSearchModel_Metacast((QPdfSearchModel*)self, param1);
}

void q_pdfsearchmodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QPdfSearchModel_OnMetacast((QPdfSearchModel*)self, (intptr_t)callback);
}

void* q_pdfsearchmodel_super_metacast(void* self, const char* param1) {
    return QPdfSearchModel_SuperMetacast((QPdfSearchModel*)self, param1);
}

int32_t q_pdfsearchmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPdfSearchModel_Metacall((QPdfSearchModel*)self, param1, param2, param3);
}

void q_pdfsearchmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPdfSearchModel_OnMetacall((QPdfSearchModel*)self, (intptr_t)callback);
}

int32_t q_pdfsearchmodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPdfSearchModel_SuperMetacall((QPdfSearchModel*)self, param1, param2, param3);
}

const char* q_pdfsearchmodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QPdfLink* */ q_pdfsearchmodel_results_on_page(const void* self, int page) {
    libqt_list _arr = QPdfSearchModel_ResultsOnPage((QPdfSearchModel*)self, page);
    return _arr;
}

QPdfLink* q_pdfsearchmodel_result_at_index(const void* self, int index) {
    return QPdfSearchModel_ResultAtIndex((QPdfSearchModel*)self, index);
}

QPdfDocument* q_pdfsearchmodel_document(const void* self) {
    return QPdfSearchModel_Document((QPdfSearchModel*)self);
}

const char* q_pdfsearchmodel_search_string(const void* self) {
    libqt_string _str = QPdfSearchModel_SearchString((QPdfSearchModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_map /* of int to char* */ q_pdfsearchmodel_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QPdfSearchModel_RoleNames((QPdfSearchModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_pdfsearchmodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_pdfsearchmodel_role_names\n");
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

void q_pdfsearchmodel_on_role_names(const void* self, libqt_map /* of int to char* */ (*callback)(const void*)) {
    QPdfSearchModel_OnRoleNames((QPdfSearchModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_pdfsearchmodel_super_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QPdfSearchModel_SuperRoleNames((QPdfSearchModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_pdfsearchmodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_pdfsearchmodel_role_names\n");
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

int32_t q_pdfsearchmodel_row_count(const void* self, const void* parent) {
    return QPdfSearchModel_RowCount((QPdfSearchModel*)self, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_row_count(const void* self, int32_t (*callback)(const void*, const void*)) {
    QPdfSearchModel_OnRowCount((QPdfSearchModel*)self, (intptr_t)callback);
}

int32_t q_pdfsearchmodel_super_row_count(const void* self, const void* parent) {
    return QPdfSearchModel_SuperRowCount((QPdfSearchModel*)self, (QModelIndex*)parent);
}

QVariant* q_pdfsearchmodel_data(const void* self, const void* index, int role) {
    return QPdfSearchModel_Data((QPdfSearchModel*)self, (QModelIndex*)index, role);
}

void q_pdfsearchmodel_on_data(const void* self, QVariant* (*callback)(const void*, const void*, int)) {
    QPdfSearchModel_OnData((QPdfSearchModel*)self, (intptr_t)callback);
}

QVariant* q_pdfsearchmodel_super_data(const void* self, const void* index, int role) {
    return QPdfSearchModel_SuperData((QPdfSearchModel*)self, (QModelIndex*)index, role);
}

int32_t q_pdfsearchmodel_count(const void* self) {
    return QPdfSearchModel_Count((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_set_search_string(void* self, const char* searchString) {
    QPdfSearchModel_SetSearchString((QPdfSearchModel*)self, qstring(searchString));
}

void q_pdfsearchmodel_set_document(void* self, void* document) {
    QPdfSearchModel_SetDocument((QPdfSearchModel*)self, (QPdfDocument*)document);
}

void q_pdfsearchmodel_document_changed(void* self) {
    QPdfSearchModel_DocumentChanged((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_document_changed(void* self, void (*callback)(void*)) {
    QPdfSearchModel_Connect_DocumentChanged((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_search_string_changed(void* self) {
    QPdfSearchModel_SearchStringChanged((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_search_string_changed(void* self, void (*callback)(void*)) {
    QPdfSearchModel_Connect_SearchStringChanged((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_count_changed(void* self) {
    QPdfSearchModel_CountChanged((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_count_changed(void* self, void (*callback)(void*)) {
    QPdfSearchModel_Connect_CountChanged((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_update_page(void* self, int page) {
    QPdfSearchModel_UpdatePage((QPdfSearchModel*)self, page);
}

void q_pdfsearchmodel_timer_event(void* self, void* event) {
    QPdfSearchModel_TimerEvent((QPdfSearchModel*)self, (QTimerEvent*)event);
}

void q_pdfsearchmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPdfSearchModel_OnTimerEvent((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_super_timer_event(void* self, void* event) {
    QPdfSearchModel_SuperTimerEvent((QPdfSearchModel*)self, (QTimerEvent*)event);
}

const char* q_pdfsearchmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pdfsearchmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_pdfsearchmodel_has_index(const void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* q_pdfsearchmodel_parent(const void* self, const void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void q_pdfsearchmodel_on_parent(const void* self, QModelIndex* (*callback)(const void*, const void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t q_pdfsearchmodel_column_count(const void* self, const void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_column_count(const void* self, int32_t (*callback)(const void*, const void*)) {
    QAbstractItemModel_OnColumnCount((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_has_children(const void* self, const void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_has_children(const void* self, bool (*callback)(const void*, const void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_super_has_children(const void* self, const void* parent) {
    return QAbstractItemModel_SuperHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_pdfsearchmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_pdfsearchmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_pdfsearchmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_pdfsearchmodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_pdfsearchmodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_pdfsearchmodel_check_index(const void* self, const void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_pdfsearchmodel_data_changed(void* self, const void* topLeft, const void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_pdfsearchmodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_pdfsearchmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_pdfsearchmodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_pdfsearchmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_has_index3(const void* self, int row, int column, const void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_insert_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_insert_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_remove_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_remove_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_check_index2(const void* self, const void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_pdfsearchmodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_pdfsearchmodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_pdfsearchmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_pdfsearchmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_pdfsearchmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_pdfsearchmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_pdfsearchmodel_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfsearchmodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pdfsearchmodel_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pdfsearchmodel_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pdfsearchmodel_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pdfsearchmodel_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pdfsearchmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pdfsearchmodel_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pdfsearchmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pdfsearchmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_pdfsearchmodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_pdfsearchmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pdfsearchmodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pdfsearchmodel_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pdfsearchmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_pdfsearchmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pdfsearchmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pdfsearchmodel_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_pdfsearchmodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pdfsearchmodel_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pdfsearchmodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_pdfsearchmodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pdfsearchmodel_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_pdfsearchmodel_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_pdfsearchmodel_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_pdfsearchmodel_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pdfsearchmodel_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pdfsearchmodel_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pdfsearchmodel_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pdfsearchmodel_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_pdfsearchmodel_dynamic_property_names\n");
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

QBindingStorage* q_pdfsearchmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pdfsearchmodel_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pdfsearchmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pdfsearchmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pdfsearchmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_pdfsearchmodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_pdfsearchmodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_pdfsearchmodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_pdfsearchmodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_pdfsearchmodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_pdfsearchmodel_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_pdfsearchmodel_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_pdfsearchmodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_pdfsearchmodel_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_pdfsearchmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pdfsearchmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* q_pdfsearchmodel_index(const void* self, int row, int column, const void* parent) {
    return QPdfSearchModel_Index((QPdfSearchModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_pdfsearchmodel_super_index(const void* self, int row, int column, const void* parent) {
    return QPdfSearchModel_SuperIndex((QPdfSearchModel*)self, row, column, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_index(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    QPdfSearchModel_OnIndex((const QPdfSearchModel*)self, (intptr_t)callback);
}

QModelIndex* q_pdfsearchmodel_sibling(const void* self, int row, int column, const void* idx) {
    return QPdfSearchModel_Sibling((QPdfSearchModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* q_pdfsearchmodel_super_sibling(const void* self, int row, int column, const void* idx) {
    return QPdfSearchModel_SuperSibling((QPdfSearchModel*)self, row, column, (QModelIndex*)idx);
}

void q_pdfsearchmodel_on_sibling(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    QPdfSearchModel_OnSibling((const QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return QPdfSearchModel_DropMimeData((QPdfSearchModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return QPdfSearchModel_SuperDropMimeData((QPdfSearchModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*)) {
    QPdfSearchModel_OnDropMimeData((QPdfSearchModel*)self, (intptr_t)callback);
}

int32_t q_pdfsearchmodel_flags(const void* self, const void* index) {
    return QPdfSearchModel_Flags((QPdfSearchModel*)self, (QModelIndex*)index);
}

int32_t q_pdfsearchmodel_super_flags(const void* self, const void* index) {
    return QPdfSearchModel_SuperFlags((QPdfSearchModel*)self, (QModelIndex*)index);
}

void q_pdfsearchmodel_on_flags(const void* self, int32_t (*callback)(const void*, const void*)) {
    QPdfSearchModel_OnFlags((const QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_set_data(void* self, const void* index, const void* value, int role) {
    return QPdfSearchModel_SetData((QPdfSearchModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool q_pdfsearchmodel_super_set_data(void* self, const void* index, const void* value, int role) {
    return QPdfSearchModel_SuperSetData((QPdfSearchModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_pdfsearchmodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int)) {
    QPdfSearchModel_OnSetData((QPdfSearchModel*)self, (intptr_t)callback);
}

QVariant* q_pdfsearchmodel_header_data(const void* self, int section, int32_t orientation, int role) {
    return QPdfSearchModel_HeaderData((QPdfSearchModel*)self, section, orientation, role);
}

QVariant* q_pdfsearchmodel_super_header_data(const void* self, int section, int32_t orientation, int role) {
    return QPdfSearchModel_SuperHeaderData((QPdfSearchModel*)self, section, orientation, role);
}

void q_pdfsearchmodel_on_header_data(const void* self, QVariant* (*callback)(const void*, int, int32_t, int)) {
    QPdfSearchModel_OnHeaderData((const QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return QPdfSearchModel_SetHeaderData((QPdfSearchModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_pdfsearchmodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return QPdfSearchModel_SuperSetHeaderData((QPdfSearchModel*)self, section, orientation, (QVariant*)value, role);
}

void q_pdfsearchmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int)) {
    QPdfSearchModel_OnSetHeaderData((QPdfSearchModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_pdfsearchmodel_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QPdfSearchModel_ItemData((QPdfSearchModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ q_pdfsearchmodel_super_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QPdfSearchModel_SuperItemData((QPdfSearchModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void q_pdfsearchmodel_on_item_data(const void* self, libqt_map /* of int to QVariant* */ (*callback)(const void*, const void*)) {
    QPdfSearchModel_OnItemData((const QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_pdfsearchmodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_pdfsearchmodel_set_item_data\n");
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
    bool _out = QPdfSearchModel_SetItemData((QPdfSearchModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool q_pdfsearchmodel_super_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_pdfsearchmodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_pdfsearchmodel_set_item_data\n");
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
    bool _out = QPdfSearchModel_SuperSetItemData((QPdfSearchModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void q_pdfsearchmodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map /* of int to QVariant* */)) {
    QPdfSearchModel_OnSetItemData((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_clear_item_data(void* self, const void* index) {
    return QPdfSearchModel_ClearItemData((QPdfSearchModel*)self, (QModelIndex*)index);
}

bool q_pdfsearchmodel_super_clear_item_data(void* self, const void* index) {
    return QPdfSearchModel_SuperClearItemData((QPdfSearchModel*)self, (QModelIndex*)index);
}

void q_pdfsearchmodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*)) {
    QPdfSearchModel_OnClearItemData((QPdfSearchModel*)self, (intptr_t)callback);
}

const char** q_pdfsearchmodel_mime_types(const void* self) {
    libqt_list _arr = QPdfSearchModel_MimeTypes((QPdfSearchModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_pdfsearchmodel_mime_types\n");
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

const char** q_pdfsearchmodel_super_mime_types(const void* self) {
    libqt_list _arr = QPdfSearchModel_SuperMimeTypes((QPdfSearchModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_pdfsearchmodel_mime_types\n");
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

void q_pdfsearchmodel_on_mime_types(const void* self, const char** (*callback)(const void*)) {
    QPdfSearchModel_OnMimeTypes((const QPdfSearchModel*)self, (intptr_t)callback);
}

QMimeData* q_pdfsearchmodel_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QPdfSearchModel_MimeData((QPdfSearchModel*)self, indexes);
}

QMimeData* q_pdfsearchmodel_super_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QPdfSearchModel_SuperMimeData((QPdfSearchModel*)self, indexes);
}

void q_pdfsearchmodel_on_mime_data(const void* self, QMimeData* (*callback)(const void*, libqt_list /* of QModelIndex* */)) {
    QPdfSearchModel_OnMimeData((const QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return QPdfSearchModel_CanDropMimeData((QPdfSearchModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return QPdfSearchModel_SuperCanDropMimeData((QPdfSearchModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_can_drop_mime_data(const void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*)) {
    QPdfSearchModel_OnCanDropMimeData((const QPdfSearchModel*)self, (intptr_t)callback);
}

int32_t q_pdfsearchmodel_supported_drop_actions(const void* self) {
    return QPdfSearchModel_SupportedDropActions((QPdfSearchModel*)self);
}

int32_t q_pdfsearchmodel_super_supported_drop_actions(const void* self) {
    return QPdfSearchModel_SuperSupportedDropActions((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_supported_drop_actions(const void* self, int32_t (*callback)(const void*)) {
    QPdfSearchModel_OnSupportedDropActions((const QPdfSearchModel*)self, (intptr_t)callback);
}

int32_t q_pdfsearchmodel_supported_drag_actions(const void* self) {
    return QPdfSearchModel_SupportedDragActions((QPdfSearchModel*)self);
}

int32_t q_pdfsearchmodel_super_supported_drag_actions(const void* self) {
    return QPdfSearchModel_SuperSupportedDragActions((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_supported_drag_actions(const void* self, int32_t (*callback)(const void*)) {
    QPdfSearchModel_OnSupportedDragActions((const QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_insert_rows(void* self, int row, int count, const void* parent) {
    return QPdfSearchModel_InsertRows((QPdfSearchModel*)self, row, count, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_super_insert_rows(void* self, int row, int count, const void* parent) {
    return QPdfSearchModel_SuperInsertRows((QPdfSearchModel*)self, row, count, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    QPdfSearchModel_OnInsertRows((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_insert_columns(void* self, int column, int count, const void* parent) {
    return QPdfSearchModel_InsertColumns((QPdfSearchModel*)self, column, count, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_super_insert_columns(void* self, int column, int count, const void* parent) {
    return QPdfSearchModel_SuperInsertColumns((QPdfSearchModel*)self, column, count, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    QPdfSearchModel_OnInsertColumns((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_remove_rows(void* self, int row, int count, const void* parent) {
    return QPdfSearchModel_RemoveRows((QPdfSearchModel*)self, row, count, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_super_remove_rows(void* self, int row, int count, const void* parent) {
    return QPdfSearchModel_SuperRemoveRows((QPdfSearchModel*)self, row, count, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    QPdfSearchModel_OnRemoveRows((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_remove_columns(void* self, int column, int count, const void* parent) {
    return QPdfSearchModel_RemoveColumns((QPdfSearchModel*)self, column, count, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_super_remove_columns(void* self, int column, int count, const void* parent) {
    return QPdfSearchModel_SuperRemoveColumns((QPdfSearchModel*)self, column, count, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    QPdfSearchModel_OnRemoveColumns((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return QPdfSearchModel_MoveRows((QPdfSearchModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_pdfsearchmodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return QPdfSearchModel_SuperMoveRows((QPdfSearchModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_pdfsearchmodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    QPdfSearchModel_OnMoveRows((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return QPdfSearchModel_MoveColumns((QPdfSearchModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_pdfsearchmodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return QPdfSearchModel_SuperMoveColumns((QPdfSearchModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_pdfsearchmodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    QPdfSearchModel_OnMoveColumns((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_fetch_more(void* self, const void* parent) {
    QPdfSearchModel_FetchMore((QPdfSearchModel*)self, (QModelIndex*)parent);
}

void q_pdfsearchmodel_super_fetch_more(void* self, const void* parent) {
    QPdfSearchModel_SuperFetchMore((QPdfSearchModel*)self, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_fetch_more(void* self, void (*callback)(void*, const void*)) {
    QPdfSearchModel_OnFetchMore((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_can_fetch_more(const void* self, const void* parent) {
    return QPdfSearchModel_CanFetchMore((QPdfSearchModel*)self, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_super_can_fetch_more(const void* self, const void* parent) {
    return QPdfSearchModel_SuperCanFetchMore((QPdfSearchModel*)self, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_can_fetch_more(const void* self, bool (*callback)(const void*, const void*)) {
    QPdfSearchModel_OnCanFetchMore((const QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_sort(void* self, int column, int32_t order) {
    QPdfSearchModel_Sort((QPdfSearchModel*)self, column, order);
}

void q_pdfsearchmodel_super_sort(void* self, int column, int32_t order) {
    QPdfSearchModel_SuperSort((QPdfSearchModel*)self, column, order);
}

void q_pdfsearchmodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QPdfSearchModel_OnSort((QPdfSearchModel*)self, (intptr_t)callback);
}

QModelIndex* q_pdfsearchmodel_buddy(const void* self, const void* index) {
    return QPdfSearchModel_Buddy((QPdfSearchModel*)self, (QModelIndex*)index);
}

QModelIndex* q_pdfsearchmodel_super_buddy(const void* self, const void* index) {
    return QPdfSearchModel_SuperBuddy((QPdfSearchModel*)self, (QModelIndex*)index);
}

void q_pdfsearchmodel_on_buddy(const void* self, QModelIndex* (*callback)(const void*, const void*)) {
    QPdfSearchModel_OnBuddy((const QPdfSearchModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_pdfsearchmodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = QPdfSearchModel_Match((QPdfSearchModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_pdfsearchmodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = QPdfSearchModel_SuperMatch((QPdfSearchModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_pdfsearchmodel_on_match(const void* self, libqt_list /* of QModelIndex* */ (*callback)(const void*, const void*, int, const void*, int, int32_t)) {
    QPdfSearchModel_OnMatch((const QPdfSearchModel*)self, (intptr_t)callback);
}

QSize* q_pdfsearchmodel_span(const void* self, const void* index) {
    return QPdfSearchModel_Span((QPdfSearchModel*)self, (QModelIndex*)index);
}

QSize* q_pdfsearchmodel_super_span(const void* self, const void* index) {
    return QPdfSearchModel_SuperSpan((QPdfSearchModel*)self, (QModelIndex*)index);
}

void q_pdfsearchmodel_on_span(const void* self, QSize* (*callback)(const void*, const void*)) {
    QPdfSearchModel_OnSpan((const QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_multi_data(const void* self, const void* index, void* roleDataSpan) {
    QPdfSearchModel_MultiData((QPdfSearchModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_pdfsearchmodel_super_multi_data(const void* self, const void* index, void* roleDataSpan) {
    QPdfSearchModel_SuperMultiData((QPdfSearchModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_pdfsearchmodel_on_multi_data(const void* self, void (*callback)(const void*, const void*, void*)) {
    QPdfSearchModel_OnMultiData((const QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_submit(void* self) {
    return QPdfSearchModel_Submit((QPdfSearchModel*)self);
}

bool q_pdfsearchmodel_super_submit(void* self) {
    return QPdfSearchModel_SuperSubmit((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_submit(void* self, bool (*callback)(void*)) {
    QPdfSearchModel_OnSubmit((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_revert(void* self) {
    QPdfSearchModel_Revert((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_super_revert(void* self) {
    QPdfSearchModel_SuperRevert((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_revert(void* self, void (*callback)(void*)) {
    QPdfSearchModel_OnRevert((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_reset_internal_data(void* self) {
    QPdfSearchModel_ResetInternalData((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_super_reset_internal_data(void* self) {
    QPdfSearchModel_SuperResetInternalData((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_reset_internal_data(void* self, void (*callback)(void*)) {
    QPdfSearchModel_OnResetInternalData((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_event(void* self, void* event) {
    return QPdfSearchModel_Event((QPdfSearchModel*)self, (QEvent*)event);
}

bool q_pdfsearchmodel_super_event(void* self, void* event) {
    return QPdfSearchModel_SuperEvent((QPdfSearchModel*)self, (QEvent*)event);
}

void q_pdfsearchmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QPdfSearchModel_OnEvent((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_event_filter(void* self, void* watched, void* event) {
    return QPdfSearchModel_EventFilter((QPdfSearchModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pdfsearchmodel_super_event_filter(void* self, void* watched, void* event) {
    return QPdfSearchModel_SuperEventFilter((QPdfSearchModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_pdfsearchmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPdfSearchModel_OnEventFilter((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_child_event(void* self, void* event) {
    QPdfSearchModel_ChildEvent((QPdfSearchModel*)self, (QChildEvent*)event);
}

void q_pdfsearchmodel_super_child_event(void* self, void* event) {
    QPdfSearchModel_SuperChildEvent((QPdfSearchModel*)self, (QChildEvent*)event);
}

void q_pdfsearchmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPdfSearchModel_OnChildEvent((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_custom_event(void* self, void* event) {
    QPdfSearchModel_CustomEvent((QPdfSearchModel*)self, (QEvent*)event);
}

void q_pdfsearchmodel_super_custom_event(void* self, void* event) {
    QPdfSearchModel_SuperCustomEvent((QPdfSearchModel*)self, (QEvent*)event);
}

void q_pdfsearchmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPdfSearchModel_OnCustomEvent((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_connect_notify(void* self, const void* signal) {
    QPdfSearchModel_ConnectNotify((QPdfSearchModel*)self, (QMetaMethod*)signal);
}

void q_pdfsearchmodel_super_connect_notify(void* self, const void* signal) {
    QPdfSearchModel_SuperConnectNotify((QPdfSearchModel*)self, (QMetaMethod*)signal);
}

void q_pdfsearchmodel_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QPdfSearchModel_OnConnectNotify((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_disconnect_notify(void* self, const void* signal) {
    QPdfSearchModel_DisconnectNotify((QPdfSearchModel*)self, (QMetaMethod*)signal);
}

void q_pdfsearchmodel_super_disconnect_notify(void* self, const void* signal) {
    QPdfSearchModel_SuperDisconnectNotify((QPdfSearchModel*)self, (QMetaMethod*)signal);
}

void q_pdfsearchmodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QPdfSearchModel_OnDisconnectNotify((QPdfSearchModel*)self, (intptr_t)callback);
}

QModelIndex* q_pdfsearchmodel_create_index(const void* self, int row, int column) {
    return QPdfSearchModel_CreateIndex((QPdfSearchModel*)self, row, column);
}

void q_pdfsearchmodel_encode_data(const void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QPdfSearchModel_EncodeData((QPdfSearchModel*)self, indexes, (QDataStream*)stream);
}

bool q_pdfsearchmodel_decode_data(void* self, int row, int column, const void* parent, void* stream) {
    return QPdfSearchModel_DecodeData((QPdfSearchModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_pdfsearchmodel_begin_insert_rows(void* self, const void* parent, int first, int last) {
    QPdfSearchModel_BeginInsertRows((QPdfSearchModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfsearchmodel_end_insert_rows(void* self) {
    QPdfSearchModel_EndInsertRows((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_begin_remove_rows(void* self, const void* parent, int first, int last) {
    QPdfSearchModel_BeginRemoveRows((QPdfSearchModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfsearchmodel_end_remove_rows(void* self) {
    QPdfSearchModel_EndRemoveRows((QPdfSearchModel*)self);
}

bool q_pdfsearchmodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow) {
    return QPdfSearchModel_BeginMoveRows((QPdfSearchModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_pdfsearchmodel_end_move_rows(void* self) {
    QPdfSearchModel_EndMoveRows((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_begin_insert_columns(void* self, const void* parent, int first, int last) {
    QPdfSearchModel_BeginInsertColumns((QPdfSearchModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfsearchmodel_end_insert_columns(void* self) {
    QPdfSearchModel_EndInsertColumns((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_begin_remove_columns(void* self, const void* parent, int first, int last) {
    QPdfSearchModel_BeginRemoveColumns((QPdfSearchModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfsearchmodel_end_remove_columns(void* self) {
    QPdfSearchModel_EndRemoveColumns((QPdfSearchModel*)self);
}

bool q_pdfsearchmodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn) {
    return QPdfSearchModel_BeginMoveColumns((QPdfSearchModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_pdfsearchmodel_end_move_columns(void* self) {
    QPdfSearchModel_EndMoveColumns((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_begin_reset_model(void* self) {
    QPdfSearchModel_BeginResetModel((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_end_reset_model(void* self) {
    QPdfSearchModel_EndResetModel((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_change_persistent_index(void* self, const void* from, const void* to) {
    QPdfSearchModel_ChangePersistentIndex((QPdfSearchModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_pdfsearchmodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QPdfSearchModel_ChangePersistentIndexList((QPdfSearchModel*)self, from, to);
}

libqt_list /* of QModelIndex* */ q_pdfsearchmodel_persistent_index_list(const void* self) {
    libqt_list _arr = QPdfSearchModel_PersistentIndexList((QPdfSearchModel*)self);
    return _arr;
}

QObject* q_pdfsearchmodel_sender(const void* self) {
    return QPdfSearchModel_Sender((QPdfSearchModel*)self);
}

int32_t q_pdfsearchmodel_sender_signal_index(const void* self) {
    return QPdfSearchModel_SenderSignalIndex((QPdfSearchModel*)self);
}

int32_t q_pdfsearchmodel_receivers(const void* self, const char* signal) {
    return QPdfSearchModel_Receivers((QPdfSearchModel*)self, signal);
}

bool q_pdfsearchmodel_is_signal_connected(const void* self, const void* signal) {
    return QPdfSearchModel_IsSignalConnected((QPdfSearchModel*)self, (QMetaMethod*)signal);
}

void q_pdfsearchmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_delete(void* self) {
    QPdfSearchModel_Delete((QPdfSearchModel*)(self));
}
