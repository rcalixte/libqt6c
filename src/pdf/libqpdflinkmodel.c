#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "libqpdfdocument.hpp"
#include "libqpdflink.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libqpdflinkmodel.hpp"
#include "libqpdflinkmodel.h"

QPdfLinkModel* q_pdflinkmodel_new() {
    return QPdfLinkModel_new();
}

QPdfLinkModel* q_pdflinkmodel_new2(void* parent) {
    return QPdfLinkModel_new2((QObject*)parent);
}

const QMetaObject* q_pdflinkmodel_meta_object(void* self) {
    return QPdfLinkModel_MetaObject((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QPdfLinkModel_OnMetaObject((QPdfLinkModel*)self, (intptr_t)callback);
}

const QMetaObject* q_pdflinkmodel_super_meta_object(void* self) {
    return QPdfLinkModel_SuperMetaObject((QPdfLinkModel*)self);
}

void* q_pdflinkmodel_metacast(void* self, const char* param1) {
    return QPdfLinkModel_Metacast((QPdfLinkModel*)self, param1);
}

void q_pdflinkmodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QPdfLinkModel_OnMetacast((QPdfLinkModel*)self, (intptr_t)callback);
}

void* q_pdflinkmodel_super_metacast(void* self, const char* param1) {
    return QPdfLinkModel_SuperMetacast((QPdfLinkModel*)self, param1);
}

int32_t q_pdflinkmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPdfLinkModel_Metacall((QPdfLinkModel*)self, param1, param2, param3);
}

void q_pdflinkmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPdfLinkModel_OnMetacall((QPdfLinkModel*)self, (intptr_t)callback);
}

int32_t q_pdflinkmodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPdfLinkModel_SuperMetacall((QPdfLinkModel*)self, param1, param2, param3);
}

const char* q_pdflinkmodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPdfDocument* q_pdflinkmodel_document(void* self) {
    return QPdfLinkModel_Document((QPdfLinkModel*)self);
}

libqt_map /* of int to char* */ q_pdflinkmodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QPdfLinkModel_RoleNames((QPdfLinkModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_pdflinkmodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_pdflinkmodel_role_names\n");
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

void q_pdflinkmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    QPdfLinkModel_OnRoleNames((QPdfLinkModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_pdflinkmodel_super_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QPdfLinkModel_SuperRoleNames((QPdfLinkModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_pdflinkmodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_pdflinkmodel_role_names\n");
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

int32_t q_pdflinkmodel_row_count(void* self, void* parent) {
    return QPdfLinkModel_RowCount((QPdfLinkModel*)self, (QModelIndex*)parent);
}

void q_pdflinkmodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    QPdfLinkModel_OnRowCount((QPdfLinkModel*)self, (intptr_t)callback);
}

int32_t q_pdflinkmodel_super_row_count(void* self, void* parent) {
    return QPdfLinkModel_SuperRowCount((QPdfLinkModel*)self, (QModelIndex*)parent);
}

QVariant* q_pdflinkmodel_data(void* self, void* index, int role) {
    return QPdfLinkModel_Data((QPdfLinkModel*)self, (QModelIndex*)index, role);
}

void q_pdflinkmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    QPdfLinkModel_OnData((QPdfLinkModel*)self, (intptr_t)callback);
}

QVariant* q_pdflinkmodel_super_data(void* self, void* index, int role) {
    return QPdfLinkModel_SuperData((QPdfLinkModel*)self, (QModelIndex*)index, role);
}

int32_t q_pdflinkmodel_page(void* self) {
    return QPdfLinkModel_Page((QPdfLinkModel*)self);
}

QPdfLink* q_pdflinkmodel_link_at(void* self, void* point) {
    return QPdfLinkModel_LinkAt((QPdfLinkModel*)self, (QPointF*)point);
}

void q_pdflinkmodel_set_document(void* self, void* document) {
    QPdfLinkModel_SetDocument((QPdfLinkModel*)self, (QPdfDocument*)document);
}

void q_pdflinkmodel_set_page(void* self, int page) {
    QPdfLinkModel_SetPage((QPdfLinkModel*)self, page);
}

void q_pdflinkmodel_document_changed(void* self) {
    QPdfLinkModel_DocumentChanged((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_document_changed(void* self, void (*callback)(void*)) {
    QPdfLinkModel_Connect_DocumentChanged((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_page_changed(void* self, int page) {
    QPdfLinkModel_PageChanged((QPdfLinkModel*)self, page);
}

void q_pdflinkmodel_on_page_changed(void* self, void (*callback)(void*, int)) {
    QPdfLinkModel_Connect_PageChanged((QPdfLinkModel*)self, (intptr_t)callback);
}

const char* q_pdflinkmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pdflinkmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_pdflinkmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* q_pdflinkmodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void q_pdflinkmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_pdflinkmodel_super_parent(void* self, void* child) {
    return QAbstractItemModel_SuperParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

int32_t q_pdflinkmodel_column_count(void* self, void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_pdflinkmodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QAbstractItemModel_OnColumnCount((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t q_pdflinkmodel_super_column_count(void* self, void* parent) {
    return QAbstractItemModel_SuperColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_pdflinkmodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_pdflinkmodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_super_has_children(void* self, void* parent) {
    return QAbstractItemModel_SuperHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_pdflinkmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_pdflinkmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_pdflinkmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_pdflinkmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_pdflinkmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_pdflinkmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_pdflinkmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_pdflinkmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_pdflinkmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_pdflinkmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_pdflinkmodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_pdflinkmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_pdflinkmodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_pdflinkmodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_pdflinkmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_pdflinkmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_pdflinkmodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_pdflinkmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_pdflinkmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_pdflinkmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_pdflinkmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_pdflinkmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_pdflinkmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_pdflinkmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdflinkmodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pdflinkmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pdflinkmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pdflinkmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pdflinkmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pdflinkmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pdflinkmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pdflinkmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pdflinkmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_pdflinkmodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_pdflinkmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pdflinkmodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pdflinkmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pdflinkmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_pdflinkmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pdflinkmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pdflinkmodel_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_pdflinkmodel_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pdflinkmodel_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pdflinkmodel_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_pdflinkmodel_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pdflinkmodel_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_pdflinkmodel_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_pdflinkmodel_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_pdflinkmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pdflinkmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pdflinkmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pdflinkmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pdflinkmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_pdflinkmodel_dynamic_property_names\n");
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

QBindingStorage* q_pdflinkmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pdflinkmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pdflinkmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pdflinkmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pdflinkmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_pdflinkmodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_pdflinkmodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_pdflinkmodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_pdflinkmodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_pdflinkmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_pdflinkmodel_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_pdflinkmodel_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_pdflinkmodel_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_pdflinkmodel_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_pdflinkmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pdflinkmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* q_pdflinkmodel_index(void* self, int row, int column, void* parent) {
    return QPdfLinkModel_Index((QPdfLinkModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_pdflinkmodel_super_index(void* self, int row, int column, void* parent) {
    return QPdfLinkModel_SuperIndex((QPdfLinkModel*)self, row, column, (QModelIndex*)parent);
}

void q_pdflinkmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QPdfLinkModel_OnIndex((QPdfLinkModel*)self, (intptr_t)callback);
}

QModelIndex* q_pdflinkmodel_sibling(void* self, int row, int column, void* idx) {
    return QPdfLinkModel_Sibling((QPdfLinkModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* q_pdflinkmodel_super_sibling(void* self, int row, int column, void* idx) {
    return QPdfLinkModel_SuperSibling((QPdfLinkModel*)self, row, column, (QModelIndex*)idx);
}

void q_pdflinkmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QPdfLinkModel_OnSibling((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QPdfLinkModel_DropMimeData((QPdfLinkModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_pdflinkmodel_super_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QPdfLinkModel_SuperDropMimeData((QPdfLinkModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_pdflinkmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QPdfLinkModel_OnDropMimeData((QPdfLinkModel*)self, (intptr_t)callback);
}

int32_t q_pdflinkmodel_flags(void* self, void* index) {
    return QPdfLinkModel_Flags((QPdfLinkModel*)self, (QModelIndex*)index);
}

int32_t q_pdflinkmodel_super_flags(void* self, void* index) {
    return QPdfLinkModel_SuperFlags((QPdfLinkModel*)self, (QModelIndex*)index);
}

void q_pdflinkmodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    QPdfLinkModel_OnFlags((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_set_data(void* self, void* index, void* value, int role) {
    return QPdfLinkModel_SetData((QPdfLinkModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool q_pdflinkmodel_super_set_data(void* self, void* index, void* value, int role) {
    return QPdfLinkModel_SuperSetData((QPdfLinkModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_pdflinkmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    QPdfLinkModel_OnSetData((QPdfLinkModel*)self, (intptr_t)callback);
}

QVariant* q_pdflinkmodel_header_data(void* self, int section, int32_t orientation, int role) {
    return QPdfLinkModel_HeaderData((QPdfLinkModel*)self, section, orientation, role);
}

QVariant* q_pdflinkmodel_super_header_data(void* self, int section, int32_t orientation, int role) {
    return QPdfLinkModel_SuperHeaderData((QPdfLinkModel*)self, section, orientation, role);
}

void q_pdflinkmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    QPdfLinkModel_OnHeaderData((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QPdfLinkModel_SetHeaderData((QPdfLinkModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_pdflinkmodel_super_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QPdfLinkModel_SuperSetHeaderData((QPdfLinkModel*)self, section, orientation, (QVariant*)value, role);
}

void q_pdflinkmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    QPdfLinkModel_OnSetHeaderData((QPdfLinkModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_pdflinkmodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QPdfLinkModel_ItemData((QPdfLinkModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ q_pdflinkmodel_super_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QPdfLinkModel_SuperItemData((QPdfLinkModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void q_pdflinkmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    QPdfLinkModel_OnItemData((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_pdflinkmodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_pdflinkmodel_set_item_data\n");
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
    bool _out = QPdfLinkModel_SetItemData((QPdfLinkModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool q_pdflinkmodel_super_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_pdflinkmodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_pdflinkmodel_set_item_data\n");
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
    bool _out = QPdfLinkModel_SuperSetItemData((QPdfLinkModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void q_pdflinkmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QPdfLinkModel_OnSetItemData((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_clear_item_data(void* self, void* index) {
    return QPdfLinkModel_ClearItemData((QPdfLinkModel*)self, (QModelIndex*)index);
}

bool q_pdflinkmodel_super_clear_item_data(void* self, void* index) {
    return QPdfLinkModel_SuperClearItemData((QPdfLinkModel*)self, (QModelIndex*)index);
}

void q_pdflinkmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    QPdfLinkModel_OnClearItemData((QPdfLinkModel*)self, (intptr_t)callback);
}

const char** q_pdflinkmodel_mime_types(void* self) {
    libqt_list _arr = QPdfLinkModel_MimeTypes((QPdfLinkModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_pdflinkmodel_mime_types\n");
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

const char** q_pdflinkmodel_super_mime_types(void* self) {
    libqt_list _arr = QPdfLinkModel_SuperMimeTypes((QPdfLinkModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_pdflinkmodel_mime_types\n");
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

void q_pdflinkmodel_on_mime_types(void* self, const char** (*callback)()) {
    QPdfLinkModel_OnMimeTypes((QPdfLinkModel*)self, (intptr_t)callback);
}

QMimeData* q_pdflinkmodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QPdfLinkModel_MimeData((QPdfLinkModel*)self, indexes);
}

QMimeData* q_pdflinkmodel_super_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QPdfLinkModel_SuperMimeData((QPdfLinkModel*)self, indexes);
}

void q_pdflinkmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list /* of QModelIndex* */)) {
    QPdfLinkModel_OnMimeData((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QPdfLinkModel_CanDropMimeData((QPdfLinkModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_pdflinkmodel_super_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QPdfLinkModel_SuperCanDropMimeData((QPdfLinkModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_pdflinkmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QPdfLinkModel_OnCanDropMimeData((QPdfLinkModel*)self, (intptr_t)callback);
}

int32_t q_pdflinkmodel_supported_drop_actions(void* self) {
    return QPdfLinkModel_SupportedDropActions((QPdfLinkModel*)self);
}

int32_t q_pdflinkmodel_super_supported_drop_actions(void* self) {
    return QPdfLinkModel_SuperSupportedDropActions((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    QPdfLinkModel_OnSupportedDropActions((QPdfLinkModel*)self, (intptr_t)callback);
}

int32_t q_pdflinkmodel_supported_drag_actions(void* self) {
    return QPdfLinkModel_SupportedDragActions((QPdfLinkModel*)self);
}

int32_t q_pdflinkmodel_super_supported_drag_actions(void* self) {
    return QPdfLinkModel_SuperSupportedDragActions((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    QPdfLinkModel_OnSupportedDragActions((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_insert_rows(void* self, int row, int count, void* parent) {
    return QPdfLinkModel_InsertRows((QPdfLinkModel*)self, row, count, (QModelIndex*)parent);
}

bool q_pdflinkmodel_super_insert_rows(void* self, int row, int count, void* parent) {
    return QPdfLinkModel_SuperInsertRows((QPdfLinkModel*)self, row, count, (QModelIndex*)parent);
}

void q_pdflinkmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QPdfLinkModel_OnInsertRows((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_insert_columns(void* self, int column, int count, void* parent) {
    return QPdfLinkModel_InsertColumns((QPdfLinkModel*)self, column, count, (QModelIndex*)parent);
}

bool q_pdflinkmodel_super_insert_columns(void* self, int column, int count, void* parent) {
    return QPdfLinkModel_SuperInsertColumns((QPdfLinkModel*)self, column, count, (QModelIndex*)parent);
}

void q_pdflinkmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QPdfLinkModel_OnInsertColumns((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_remove_rows(void* self, int row, int count, void* parent) {
    return QPdfLinkModel_RemoveRows((QPdfLinkModel*)self, row, count, (QModelIndex*)parent);
}

bool q_pdflinkmodel_super_remove_rows(void* self, int row, int count, void* parent) {
    return QPdfLinkModel_SuperRemoveRows((QPdfLinkModel*)self, row, count, (QModelIndex*)parent);
}

void q_pdflinkmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QPdfLinkModel_OnRemoveRows((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_remove_columns(void* self, int column, int count, void* parent) {
    return QPdfLinkModel_RemoveColumns((QPdfLinkModel*)self, column, count, (QModelIndex*)parent);
}

bool q_pdflinkmodel_super_remove_columns(void* self, int column, int count, void* parent) {
    return QPdfLinkModel_SuperRemoveColumns((QPdfLinkModel*)self, column, count, (QModelIndex*)parent);
}

void q_pdflinkmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QPdfLinkModel_OnRemoveColumns((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QPdfLinkModel_MoveRows((QPdfLinkModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_pdflinkmodel_super_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QPdfLinkModel_SuperMoveRows((QPdfLinkModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_pdflinkmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QPdfLinkModel_OnMoveRows((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QPdfLinkModel_MoveColumns((QPdfLinkModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_pdflinkmodel_super_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QPdfLinkModel_SuperMoveColumns((QPdfLinkModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_pdflinkmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QPdfLinkModel_OnMoveColumns((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_fetch_more(void* self, void* parent) {
    QPdfLinkModel_FetchMore((QPdfLinkModel*)self, (QModelIndex*)parent);
}

void q_pdflinkmodel_super_fetch_more(void* self, void* parent) {
    QPdfLinkModel_SuperFetchMore((QPdfLinkModel*)self, (QModelIndex*)parent);
}

void q_pdflinkmodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    QPdfLinkModel_OnFetchMore((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_can_fetch_more(void* self, void* parent) {
    return QPdfLinkModel_CanFetchMore((QPdfLinkModel*)self, (QModelIndex*)parent);
}

bool q_pdflinkmodel_super_can_fetch_more(void* self, void* parent) {
    return QPdfLinkModel_SuperCanFetchMore((QPdfLinkModel*)self, (QModelIndex*)parent);
}

void q_pdflinkmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    QPdfLinkModel_OnCanFetchMore((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_sort(void* self, int column, int32_t order) {
    QPdfLinkModel_Sort((QPdfLinkModel*)self, column, order);
}

void q_pdflinkmodel_super_sort(void* self, int column, int32_t order) {
    QPdfLinkModel_SuperSort((QPdfLinkModel*)self, column, order);
}

void q_pdflinkmodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QPdfLinkModel_OnSort((QPdfLinkModel*)self, (intptr_t)callback);
}

QModelIndex* q_pdflinkmodel_buddy(void* self, void* index) {
    return QPdfLinkModel_Buddy((QPdfLinkModel*)self, (QModelIndex*)index);
}

QModelIndex* q_pdflinkmodel_super_buddy(void* self, void* index) {
    return QPdfLinkModel_SuperBuddy((QPdfLinkModel*)self, (QModelIndex*)index);
}

void q_pdflinkmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    QPdfLinkModel_OnBuddy((QPdfLinkModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_pdflinkmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QPdfLinkModel_Match((QPdfLinkModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_pdflinkmodel_super_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QPdfLinkModel_SuperMatch((QPdfLinkModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_pdflinkmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(void*, void*, int, void*, int, int32_t)) {
    QPdfLinkModel_OnMatch((QPdfLinkModel*)self, (intptr_t)callback);
}

QSize* q_pdflinkmodel_span(void* self, void* index) {
    return QPdfLinkModel_Span((QPdfLinkModel*)self, (QModelIndex*)index);
}

QSize* q_pdflinkmodel_super_span(void* self, void* index) {
    return QPdfLinkModel_SuperSpan((QPdfLinkModel*)self, (QModelIndex*)index);
}

void q_pdflinkmodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    QPdfLinkModel_OnSpan((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QPdfLinkModel_MultiData((QPdfLinkModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_pdflinkmodel_super_multi_data(void* self, void* index, void* roleDataSpan) {
    QPdfLinkModel_SuperMultiData((QPdfLinkModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_pdflinkmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    QPdfLinkModel_OnMultiData((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_submit(void* self) {
    return QPdfLinkModel_Submit((QPdfLinkModel*)self);
}

bool q_pdflinkmodel_super_submit(void* self) {
    return QPdfLinkModel_SuperSubmit((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_submit(void* self, bool (*callback)()) {
    QPdfLinkModel_OnSubmit((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_revert(void* self) {
    QPdfLinkModel_Revert((QPdfLinkModel*)self);
}

void q_pdflinkmodel_super_revert(void* self) {
    QPdfLinkModel_SuperRevert((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_revert(void* self, void (*callback)()) {
    QPdfLinkModel_OnRevert((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_reset_internal_data(void* self) {
    QPdfLinkModel_ResetInternalData((QPdfLinkModel*)self);
}

void q_pdflinkmodel_super_reset_internal_data(void* self) {
    QPdfLinkModel_SuperResetInternalData((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_reset_internal_data(void* self, void (*callback)()) {
    QPdfLinkModel_OnResetInternalData((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_event(void* self, void* event) {
    return QPdfLinkModel_Event((QPdfLinkModel*)self, (QEvent*)event);
}

bool q_pdflinkmodel_super_event(void* self, void* event) {
    return QPdfLinkModel_SuperEvent((QPdfLinkModel*)self, (QEvent*)event);
}

void q_pdflinkmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QPdfLinkModel_OnEvent((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_event_filter(void* self, void* watched, void* event) {
    return QPdfLinkModel_EventFilter((QPdfLinkModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pdflinkmodel_super_event_filter(void* self, void* watched, void* event) {
    return QPdfLinkModel_SuperEventFilter((QPdfLinkModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_pdflinkmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPdfLinkModel_OnEventFilter((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_timer_event(void* self, void* event) {
    QPdfLinkModel_TimerEvent((QPdfLinkModel*)self, (QTimerEvent*)event);
}

void q_pdflinkmodel_super_timer_event(void* self, void* event) {
    QPdfLinkModel_SuperTimerEvent((QPdfLinkModel*)self, (QTimerEvent*)event);
}

void q_pdflinkmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPdfLinkModel_OnTimerEvent((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_child_event(void* self, void* event) {
    QPdfLinkModel_ChildEvent((QPdfLinkModel*)self, (QChildEvent*)event);
}

void q_pdflinkmodel_super_child_event(void* self, void* event) {
    QPdfLinkModel_SuperChildEvent((QPdfLinkModel*)self, (QChildEvent*)event);
}

void q_pdflinkmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPdfLinkModel_OnChildEvent((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_custom_event(void* self, void* event) {
    QPdfLinkModel_CustomEvent((QPdfLinkModel*)self, (QEvent*)event);
}

void q_pdflinkmodel_super_custom_event(void* self, void* event) {
    QPdfLinkModel_SuperCustomEvent((QPdfLinkModel*)self, (QEvent*)event);
}

void q_pdflinkmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPdfLinkModel_OnCustomEvent((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_connect_notify(void* self, void* signal) {
    QPdfLinkModel_ConnectNotify((QPdfLinkModel*)self, (QMetaMethod*)signal);
}

void q_pdflinkmodel_super_connect_notify(void* self, void* signal) {
    QPdfLinkModel_SuperConnectNotify((QPdfLinkModel*)self, (QMetaMethod*)signal);
}

void q_pdflinkmodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPdfLinkModel_OnConnectNotify((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_disconnect_notify(void* self, void* signal) {
    QPdfLinkModel_DisconnectNotify((QPdfLinkModel*)self, (QMetaMethod*)signal);
}

void q_pdflinkmodel_super_disconnect_notify(void* self, void* signal) {
    QPdfLinkModel_SuperDisconnectNotify((QPdfLinkModel*)self, (QMetaMethod*)signal);
}

void q_pdflinkmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPdfLinkModel_OnDisconnectNotify((QPdfLinkModel*)self, (intptr_t)callback);
}

QModelIndex* q_pdflinkmodel_create_index(void* self, int row, int column) {
    return QPdfLinkModel_CreateIndex((QPdfLinkModel*)self, row, column);
}

QModelIndex* q_pdflinkmodel_super_create_index(void* self, int row, int column) {
    return QPdfLinkModel_SuperCreateIndex((QPdfLinkModel*)self, row, column);
}

void q_pdflinkmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    QPdfLinkModel_OnCreateIndex((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QPdfLinkModel_EncodeData((QPdfLinkModel*)self, indexes, (QDataStream*)stream);
}

void q_pdflinkmodel_super_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QPdfLinkModel_SuperEncodeData((QPdfLinkModel*)self, indexes, (QDataStream*)stream);
}

void q_pdflinkmodel_on_encode_data(void* self, void (*callback)(void*, libqt_list /* of QModelIndex* */, void*)) {
    QPdfLinkModel_OnEncodeData((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QPdfLinkModel_DecodeData((QPdfLinkModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_pdflinkmodel_super_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QPdfLinkModel_SuperDecodeData((QPdfLinkModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_pdflinkmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    QPdfLinkModel_OnDecodeData((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QPdfLinkModel_BeginInsertRows((QPdfLinkModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdflinkmodel_super_begin_insert_rows(void* self, void* parent, int first, int last) {
    QPdfLinkModel_SuperBeginInsertRows((QPdfLinkModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdflinkmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QPdfLinkModel_OnBeginInsertRows((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_end_insert_rows(void* self) {
    QPdfLinkModel_EndInsertRows((QPdfLinkModel*)self);
}

void q_pdflinkmodel_super_end_insert_rows(void* self) {
    QPdfLinkModel_SuperEndInsertRows((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_end_insert_rows(void* self, void (*callback)()) {
    QPdfLinkModel_OnEndInsertRows((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QPdfLinkModel_BeginRemoveRows((QPdfLinkModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdflinkmodel_super_begin_remove_rows(void* self, void* parent, int first, int last) {
    QPdfLinkModel_SuperBeginRemoveRows((QPdfLinkModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdflinkmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QPdfLinkModel_OnBeginRemoveRows((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_end_remove_rows(void* self) {
    QPdfLinkModel_EndRemoveRows((QPdfLinkModel*)self);
}

void q_pdflinkmodel_super_end_remove_rows(void* self) {
    QPdfLinkModel_SuperEndRemoveRows((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_end_remove_rows(void* self, void (*callback)()) {
    QPdfLinkModel_OnEndRemoveRows((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QPdfLinkModel_BeginMoveRows((QPdfLinkModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool q_pdflinkmodel_super_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QPdfLinkModel_SuperBeginMoveRows((QPdfLinkModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_pdflinkmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QPdfLinkModel_OnBeginMoveRows((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_end_move_rows(void* self) {
    QPdfLinkModel_EndMoveRows((QPdfLinkModel*)self);
}

void q_pdflinkmodel_super_end_move_rows(void* self) {
    QPdfLinkModel_SuperEndMoveRows((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_end_move_rows(void* self, void (*callback)()) {
    QPdfLinkModel_OnEndMoveRows((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QPdfLinkModel_BeginInsertColumns((QPdfLinkModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdflinkmodel_super_begin_insert_columns(void* self, void* parent, int first, int last) {
    QPdfLinkModel_SuperBeginInsertColumns((QPdfLinkModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdflinkmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QPdfLinkModel_OnBeginInsertColumns((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_end_insert_columns(void* self) {
    QPdfLinkModel_EndInsertColumns((QPdfLinkModel*)self);
}

void q_pdflinkmodel_super_end_insert_columns(void* self) {
    QPdfLinkModel_SuperEndInsertColumns((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_end_insert_columns(void* self, void (*callback)()) {
    QPdfLinkModel_OnEndInsertColumns((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QPdfLinkModel_BeginRemoveColumns((QPdfLinkModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdflinkmodel_super_begin_remove_columns(void* self, void* parent, int first, int last) {
    QPdfLinkModel_SuperBeginRemoveColumns((QPdfLinkModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdflinkmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QPdfLinkModel_OnBeginRemoveColumns((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_end_remove_columns(void* self) {
    QPdfLinkModel_EndRemoveColumns((QPdfLinkModel*)self);
}

void q_pdflinkmodel_super_end_remove_columns(void* self) {
    QPdfLinkModel_SuperEndRemoveColumns((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_end_remove_columns(void* self, void (*callback)()) {
    QPdfLinkModel_OnEndRemoveColumns((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QPdfLinkModel_BeginMoveColumns((QPdfLinkModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool q_pdflinkmodel_super_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QPdfLinkModel_SuperBeginMoveColumns((QPdfLinkModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_pdflinkmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QPdfLinkModel_OnBeginMoveColumns((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_end_move_columns(void* self) {
    QPdfLinkModel_EndMoveColumns((QPdfLinkModel*)self);
}

void q_pdflinkmodel_super_end_move_columns(void* self) {
    QPdfLinkModel_SuperEndMoveColumns((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_end_move_columns(void* self, void (*callback)()) {
    QPdfLinkModel_OnEndMoveColumns((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_begin_reset_model(void* self) {
    QPdfLinkModel_BeginResetModel((QPdfLinkModel*)self);
}

void q_pdflinkmodel_super_begin_reset_model(void* self) {
    QPdfLinkModel_SuperBeginResetModel((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_begin_reset_model(void* self, void (*callback)()) {
    QPdfLinkModel_OnBeginResetModel((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_end_reset_model(void* self) {
    QPdfLinkModel_EndResetModel((QPdfLinkModel*)self);
}

void q_pdflinkmodel_super_end_reset_model(void* self) {
    QPdfLinkModel_SuperEndResetModel((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_end_reset_model(void* self, void (*callback)()) {
    QPdfLinkModel_OnEndResetModel((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_change_persistent_index(void* self, void* from, void* to) {
    QPdfLinkModel_ChangePersistentIndex((QPdfLinkModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_pdflinkmodel_super_change_persistent_index(void* self, void* from, void* to) {
    QPdfLinkModel_SuperChangePersistentIndex((QPdfLinkModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_pdflinkmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    QPdfLinkModel_OnChangePersistentIndex((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QPdfLinkModel_ChangePersistentIndexList((QPdfLinkModel*)self, from, to);
}

void q_pdflinkmodel_super_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QPdfLinkModel_SuperChangePersistentIndexList((QPdfLinkModel*)self, from, to);
}

void q_pdflinkmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */)) {
    QPdfLinkModel_OnChangePersistentIndexList((QPdfLinkModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_pdflinkmodel_persistent_index_list(void* self) {
    libqt_list _arr = QPdfLinkModel_PersistentIndexList((QPdfLinkModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_pdflinkmodel_super_persistent_index_list(void* self) {
    libqt_list _arr = QPdfLinkModel_SuperPersistentIndexList((QPdfLinkModel*)self);
    return _arr;
}

void q_pdflinkmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*callback)()) {
    QPdfLinkModel_OnPersistentIndexList((QPdfLinkModel*)self, (intptr_t)callback);
}

QObject* q_pdflinkmodel_sender(void* self) {
    return QPdfLinkModel_Sender((QPdfLinkModel*)self);
}

QObject* q_pdflinkmodel_super_sender(void* self) {
    return QPdfLinkModel_SuperSender((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_sender(void* self, QObject* (*callback)()) {
    QPdfLinkModel_OnSender((QPdfLinkModel*)self, (intptr_t)callback);
}

int32_t q_pdflinkmodel_sender_signal_index(void* self) {
    return QPdfLinkModel_SenderSignalIndex((QPdfLinkModel*)self);
}

int32_t q_pdflinkmodel_super_sender_signal_index(void* self) {
    return QPdfLinkModel_SuperSenderSignalIndex((QPdfLinkModel*)self);
}

void q_pdflinkmodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPdfLinkModel_OnSenderSignalIndex((QPdfLinkModel*)self, (intptr_t)callback);
}

int32_t q_pdflinkmodel_receivers(void* self, const char* signal) {
    return QPdfLinkModel_Receivers((QPdfLinkModel*)self, signal);
}

int32_t q_pdflinkmodel_super_receivers(void* self, const char* signal) {
    return QPdfLinkModel_SuperReceivers((QPdfLinkModel*)self, signal);
}

void q_pdflinkmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPdfLinkModel_OnReceivers((QPdfLinkModel*)self, (intptr_t)callback);
}

bool q_pdflinkmodel_is_signal_connected(void* self, void* signal) {
    return QPdfLinkModel_IsSignalConnected((QPdfLinkModel*)self, (QMetaMethod*)signal);
}

bool q_pdflinkmodel_super_is_signal_connected(void* self, void* signal) {
    return QPdfLinkModel_SuperIsSignalConnected((QPdfLinkModel*)self, (QMetaMethod*)signal);
}

void q_pdflinkmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPdfLinkModel_OnIsSignalConnected((QPdfLinkModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdflinkmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_pdflinkmodel_delete(void* self) {
    QPdfLinkModel_Delete((QPdfLinkModel*)(self));
}
