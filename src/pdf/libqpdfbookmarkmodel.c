#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "libqpdfdocument.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libqpdfbookmarkmodel.hpp"
#include "libqpdfbookmarkmodel.h"

QPdfBookmarkModel* q_pdfbookmarkmodel_new() {
    return QPdfBookmarkModel_new();
}

QPdfBookmarkModel* q_pdfbookmarkmodel_new2(void* parent) {
    return QPdfBookmarkModel_new2((QObject*)parent);
}

const QMetaObject* q_pdfbookmarkmodel_meta_object(void* self) {
    return QPdfBookmarkModel_MetaObject((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QPdfBookmarkModel_OnMetaObject((QPdfBookmarkModel*)self, (intptr_t)callback);
}

const QMetaObject* q_pdfbookmarkmodel_qbase_meta_object(void* self) {
    return QPdfBookmarkModel_QBaseMetaObject((QPdfBookmarkModel*)self);
}

void* q_pdfbookmarkmodel_metacast(void* self, const char* param1) {
    return QPdfBookmarkModel_Metacast((QPdfBookmarkModel*)self, param1);
}

void q_pdfbookmarkmodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QPdfBookmarkModel_OnMetacast((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void* q_pdfbookmarkmodel_qbase_metacast(void* self, const char* param1) {
    return QPdfBookmarkModel_QBaseMetacast((QPdfBookmarkModel*)self, param1);
}

int32_t q_pdfbookmarkmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPdfBookmarkModel_Metacall((QPdfBookmarkModel*)self, param1, param2, param3);
}

void q_pdfbookmarkmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPdfBookmarkModel_OnMetacall((QPdfBookmarkModel*)self, (intptr_t)callback);
}

int32_t q_pdfbookmarkmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPdfBookmarkModel_QBaseMetacall((QPdfBookmarkModel*)self, param1, param2, param3);
}

const char* q_pdfbookmarkmodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPdfDocument* q_pdfbookmarkmodel_document(void* self) {
    return QPdfBookmarkModel_Document((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_set_document(void* self, void* document) {
    QPdfBookmarkModel_SetDocument((QPdfBookmarkModel*)self, (QPdfDocument*)document);
}

QVariant* q_pdfbookmarkmodel_data(void* self, void* index, int role) {
    return QPdfBookmarkModel_Data((QPdfBookmarkModel*)self, (QModelIndex*)index, role);
}

void q_pdfbookmarkmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    QPdfBookmarkModel_OnData((QPdfBookmarkModel*)self, (intptr_t)callback);
}

QVariant* q_pdfbookmarkmodel_qbase_data(void* self, void* index, int role) {
    return QPdfBookmarkModel_QBaseData((QPdfBookmarkModel*)self, (QModelIndex*)index, role);
}

QModelIndex* q_pdfbookmarkmodel_index(void* self, int row, int column, void* parent) {
    return QPdfBookmarkModel_Index((QPdfBookmarkModel*)self, row, column, (QModelIndex*)parent);
}

void q_pdfbookmarkmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QPdfBookmarkModel_OnIndex((QPdfBookmarkModel*)self, (intptr_t)callback);
}

QModelIndex* q_pdfbookmarkmodel_qbase_index(void* self, int row, int column, void* parent) {
    return QPdfBookmarkModel_QBaseIndex((QPdfBookmarkModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_pdfbookmarkmodel_parent(void* self, void* index) {
    return QPdfBookmarkModel_Parent((QPdfBookmarkModel*)self, (QModelIndex*)index);
}

void q_pdfbookmarkmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnParent((QPdfBookmarkModel*)self, (intptr_t)callback);
}

QModelIndex* q_pdfbookmarkmodel_qbase_parent(void* self, void* index) {
    return QPdfBookmarkModel_QBaseParent((QPdfBookmarkModel*)self, (QModelIndex*)index);
}

int32_t q_pdfbookmarkmodel_row_count(void* self, void* parent) {
    return QPdfBookmarkModel_RowCount((QPdfBookmarkModel*)self, (QModelIndex*)parent);
}

void q_pdfbookmarkmodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnRowCount((QPdfBookmarkModel*)self, (intptr_t)callback);
}

int32_t q_pdfbookmarkmodel_qbase_row_count(void* self, void* parent) {
    return QPdfBookmarkModel_QBaseRowCount((QPdfBookmarkModel*)self, (QModelIndex*)parent);
}

int32_t q_pdfbookmarkmodel_column_count(void* self, void* parent) {
    return QPdfBookmarkModel_ColumnCount((QPdfBookmarkModel*)self, (QModelIndex*)parent);
}

void q_pdfbookmarkmodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnColumnCount((QPdfBookmarkModel*)self, (intptr_t)callback);
}

int32_t q_pdfbookmarkmodel_qbase_column_count(void* self, void* parent) {
    return QPdfBookmarkModel_QBaseColumnCount((QPdfBookmarkModel*)self, (QModelIndex*)parent);
}

libqt_map /* of int to char* */ q_pdfbookmarkmodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QPdfBookmarkModel_RoleNames((QPdfBookmarkModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_pdfbookmarkmodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_pdfbookmarkmodel_role_names\n");
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

void q_pdfbookmarkmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    QPdfBookmarkModel_OnRoleNames((QPdfBookmarkModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_pdfbookmarkmodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QPdfBookmarkModel_QBaseRoleNames((QPdfBookmarkModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_pdfbookmarkmodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_pdfbookmarkmodel_role_names\n");
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

void q_pdfbookmarkmodel_document_changed(void* self, void* document) {
    QPdfBookmarkModel_DocumentChanged((QPdfBookmarkModel*)self, (QPdfDocument*)document);
}

void q_pdfbookmarkmodel_on_document_changed(void* self, void (*callback)(void*, void*)) {
    QPdfBookmarkModel_Connect_DocumentChanged((QPdfBookmarkModel*)self, (intptr_t)callback);
}

const char* q_pdfbookmarkmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pdfbookmarkmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_pdfbookmarkmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool q_pdfbookmarkmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_pdfbookmarkmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_pdfbookmarkmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_pdfbookmarkmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_pdfbookmarkmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_pdfbookmarkmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_pdfbookmarkmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_pdfbookmarkmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_pdfbookmarkmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_pdfbookmarkmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_pdfbookmarkmodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_pdfbookmarkmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_pdfbookmarkmodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_pdfbookmarkmodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_pdfbookmarkmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_pdfbookmarkmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_pdfbookmarkmodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_pdfbookmarkmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_pdfbookmarkmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_pdfbookmarkmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_pdfbookmarkmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_pdfbookmarkmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_pdfbookmarkmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_pdfbookmarkmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfbookmarkmodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pdfbookmarkmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pdfbookmarkmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pdfbookmarkmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pdfbookmarkmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pdfbookmarkmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pdfbookmarkmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pdfbookmarkmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pdfbookmarkmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_pdfbookmarkmodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_pdfbookmarkmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pdfbookmarkmodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pdfbookmarkmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pdfbookmarkmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_pdfbookmarkmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pdfbookmarkmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pdfbookmarkmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pdfbookmarkmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pdfbookmarkmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pdfbookmarkmodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_pdfbookmarkmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pdfbookmarkmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pdfbookmarkmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pdfbookmarkmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pdfbookmarkmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_pdfbookmarkmodel_dynamic_property_names\n");
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

QBindingStorage* q_pdfbookmarkmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pdfbookmarkmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pdfbookmarkmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pdfbookmarkmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pdfbookmarkmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_pdfbookmarkmodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_pdfbookmarkmodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_pdfbookmarkmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_pdfbookmarkmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_pdfbookmarkmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pdfbookmarkmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* q_pdfbookmarkmodel_sibling(void* self, int row, int column, void* idx) {
    return QPdfBookmarkModel_Sibling((QPdfBookmarkModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* q_pdfbookmarkmodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QPdfBookmarkModel_QBaseSibling((QPdfBookmarkModel*)self, row, column, (QModelIndex*)idx);
}

void q_pdfbookmarkmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QPdfBookmarkModel_OnSibling((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_has_children(void* self, void* parent) {
    return QPdfBookmarkModel_HasChildren((QPdfBookmarkModel*)self, (QModelIndex*)parent);
}

bool q_pdfbookmarkmodel_qbase_has_children(void* self, void* parent) {
    return QPdfBookmarkModel_QBaseHasChildren((QPdfBookmarkModel*)self, (QModelIndex*)parent);
}

void q_pdfbookmarkmodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnHasChildren((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_set_data(void* self, void* index, void* value, int role) {
    return QPdfBookmarkModel_SetData((QPdfBookmarkModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool q_pdfbookmarkmodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QPdfBookmarkModel_QBaseSetData((QPdfBookmarkModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_pdfbookmarkmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    QPdfBookmarkModel_OnSetData((QPdfBookmarkModel*)self, (intptr_t)callback);
}

QVariant* q_pdfbookmarkmodel_header_data(void* self, int section, int32_t orientation, int role) {
    return QPdfBookmarkModel_HeaderData((QPdfBookmarkModel*)self, section, orientation, role);
}

QVariant* q_pdfbookmarkmodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return QPdfBookmarkModel_QBaseHeaderData((QPdfBookmarkModel*)self, section, orientation, role);
}

void q_pdfbookmarkmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    QPdfBookmarkModel_OnHeaderData((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QPdfBookmarkModel_SetHeaderData((QPdfBookmarkModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_pdfbookmarkmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QPdfBookmarkModel_QBaseSetHeaderData((QPdfBookmarkModel*)self, section, orientation, (QVariant*)value, role);
}

void q_pdfbookmarkmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    QPdfBookmarkModel_OnSetHeaderData((QPdfBookmarkModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_pdfbookmarkmodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QPdfBookmarkModel_ItemData((QPdfBookmarkModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ q_pdfbookmarkmodel_qbase_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QPdfBookmarkModel_QBaseItemData((QPdfBookmarkModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void q_pdfbookmarkmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnItemData((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_pdfbookmarkmodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_pdfbookmarkmodel_set_item_data\n");
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
    bool _out = QPdfBookmarkModel_SetItemData((QPdfBookmarkModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool q_pdfbookmarkmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_pdfbookmarkmodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_pdfbookmarkmodel_set_item_data\n");
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
    bool _out = QPdfBookmarkModel_QBaseSetItemData((QPdfBookmarkModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void q_pdfbookmarkmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QPdfBookmarkModel_OnSetItemData((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_clear_item_data(void* self, void* index) {
    return QPdfBookmarkModel_ClearItemData((QPdfBookmarkModel*)self, (QModelIndex*)index);
}

bool q_pdfbookmarkmodel_qbase_clear_item_data(void* self, void* index) {
    return QPdfBookmarkModel_QBaseClearItemData((QPdfBookmarkModel*)self, (QModelIndex*)index);
}

void q_pdfbookmarkmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnClearItemData((QPdfBookmarkModel*)self, (intptr_t)callback);
}

const char** q_pdfbookmarkmodel_mime_types(void* self) {
    libqt_list _arr = QPdfBookmarkModel_MimeTypes((QPdfBookmarkModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_pdfbookmarkmodel_mime_types\n");
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

const char** q_pdfbookmarkmodel_qbase_mime_types(void* self) {
    libqt_list _arr = QPdfBookmarkModel_QBaseMimeTypes((QPdfBookmarkModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_pdfbookmarkmodel_mime_types\n");
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

void q_pdfbookmarkmodel_on_mime_types(void* self, const char** (*callback)()) {
    QPdfBookmarkModel_OnMimeTypes((QPdfBookmarkModel*)self, (intptr_t)callback);
}

QMimeData* q_pdfbookmarkmodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QPdfBookmarkModel_MimeData((QPdfBookmarkModel*)self, indexes);
}

QMimeData* q_pdfbookmarkmodel_qbase_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QPdfBookmarkModel_QBaseMimeData((QPdfBookmarkModel*)self, indexes);
}

void q_pdfbookmarkmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    QPdfBookmarkModel_OnMimeData((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QPdfBookmarkModel_CanDropMimeData((QPdfBookmarkModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_pdfbookmarkmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QPdfBookmarkModel_QBaseCanDropMimeData((QPdfBookmarkModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_pdfbookmarkmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QPdfBookmarkModel_OnCanDropMimeData((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QPdfBookmarkModel_DropMimeData((QPdfBookmarkModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_pdfbookmarkmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QPdfBookmarkModel_QBaseDropMimeData((QPdfBookmarkModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_pdfbookmarkmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QPdfBookmarkModel_OnDropMimeData((QPdfBookmarkModel*)self, (intptr_t)callback);
}

int32_t q_pdfbookmarkmodel_supported_drop_actions(void* self) {
    return QPdfBookmarkModel_SupportedDropActions((QPdfBookmarkModel*)self);
}

int32_t q_pdfbookmarkmodel_qbase_supported_drop_actions(void* self) {
    return QPdfBookmarkModel_QBaseSupportedDropActions((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    QPdfBookmarkModel_OnSupportedDropActions((QPdfBookmarkModel*)self, (intptr_t)callback);
}

int32_t q_pdfbookmarkmodel_supported_drag_actions(void* self) {
    return QPdfBookmarkModel_SupportedDragActions((QPdfBookmarkModel*)self);
}

int32_t q_pdfbookmarkmodel_qbase_supported_drag_actions(void* self) {
    return QPdfBookmarkModel_QBaseSupportedDragActions((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    QPdfBookmarkModel_OnSupportedDragActions((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_insert_rows(void* self, int row, int count, void* parent) {
    return QPdfBookmarkModel_InsertRows((QPdfBookmarkModel*)self, row, count, (QModelIndex*)parent);
}

bool q_pdfbookmarkmodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QPdfBookmarkModel_QBaseInsertRows((QPdfBookmarkModel*)self, row, count, (QModelIndex*)parent);
}

void q_pdfbookmarkmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QPdfBookmarkModel_OnInsertRows((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_insert_columns(void* self, int column, int count, void* parent) {
    return QPdfBookmarkModel_InsertColumns((QPdfBookmarkModel*)self, column, count, (QModelIndex*)parent);
}

bool q_pdfbookmarkmodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QPdfBookmarkModel_QBaseInsertColumns((QPdfBookmarkModel*)self, column, count, (QModelIndex*)parent);
}

void q_pdfbookmarkmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QPdfBookmarkModel_OnInsertColumns((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_remove_rows(void* self, int row, int count, void* parent) {
    return QPdfBookmarkModel_RemoveRows((QPdfBookmarkModel*)self, row, count, (QModelIndex*)parent);
}

bool q_pdfbookmarkmodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QPdfBookmarkModel_QBaseRemoveRows((QPdfBookmarkModel*)self, row, count, (QModelIndex*)parent);
}

void q_pdfbookmarkmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QPdfBookmarkModel_OnRemoveRows((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_remove_columns(void* self, int column, int count, void* parent) {
    return QPdfBookmarkModel_RemoveColumns((QPdfBookmarkModel*)self, column, count, (QModelIndex*)parent);
}

bool q_pdfbookmarkmodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QPdfBookmarkModel_QBaseRemoveColumns((QPdfBookmarkModel*)self, column, count, (QModelIndex*)parent);
}

void q_pdfbookmarkmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QPdfBookmarkModel_OnRemoveColumns((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QPdfBookmarkModel_MoveRows((QPdfBookmarkModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_pdfbookmarkmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QPdfBookmarkModel_QBaseMoveRows((QPdfBookmarkModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_pdfbookmarkmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QPdfBookmarkModel_OnMoveRows((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QPdfBookmarkModel_MoveColumns((QPdfBookmarkModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_pdfbookmarkmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QPdfBookmarkModel_QBaseMoveColumns((QPdfBookmarkModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_pdfbookmarkmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QPdfBookmarkModel_OnMoveColumns((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_fetch_more(void* self, void* parent) {
    QPdfBookmarkModel_FetchMore((QPdfBookmarkModel*)self, (QModelIndex*)parent);
}

void q_pdfbookmarkmodel_qbase_fetch_more(void* self, void* parent) {
    QPdfBookmarkModel_QBaseFetchMore((QPdfBookmarkModel*)self, (QModelIndex*)parent);
}

void q_pdfbookmarkmodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnFetchMore((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_can_fetch_more(void* self, void* parent) {
    return QPdfBookmarkModel_CanFetchMore((QPdfBookmarkModel*)self, (QModelIndex*)parent);
}

bool q_pdfbookmarkmodel_qbase_can_fetch_more(void* self, void* parent) {
    return QPdfBookmarkModel_QBaseCanFetchMore((QPdfBookmarkModel*)self, (QModelIndex*)parent);
}

void q_pdfbookmarkmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnCanFetchMore((QPdfBookmarkModel*)self, (intptr_t)callback);
}

int32_t q_pdfbookmarkmodel_flags(void* self, void* index) {
    return QPdfBookmarkModel_Flags((QPdfBookmarkModel*)self, (QModelIndex*)index);
}

int32_t q_pdfbookmarkmodel_qbase_flags(void* self, void* index) {
    return QPdfBookmarkModel_QBaseFlags((QPdfBookmarkModel*)self, (QModelIndex*)index);
}

void q_pdfbookmarkmodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnFlags((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_sort(void* self, int column, int32_t order) {
    QPdfBookmarkModel_Sort((QPdfBookmarkModel*)self, column, order);
}

void q_pdfbookmarkmodel_qbase_sort(void* self, int column, int32_t order) {
    QPdfBookmarkModel_QBaseSort((QPdfBookmarkModel*)self, column, order);
}

void q_pdfbookmarkmodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QPdfBookmarkModel_OnSort((QPdfBookmarkModel*)self, (intptr_t)callback);
}

QModelIndex* q_pdfbookmarkmodel_buddy(void* self, void* index) {
    return QPdfBookmarkModel_Buddy((QPdfBookmarkModel*)self, (QModelIndex*)index);
}

QModelIndex* q_pdfbookmarkmodel_qbase_buddy(void* self, void* index) {
    return QPdfBookmarkModel_QBaseBuddy((QPdfBookmarkModel*)self, (QModelIndex*)index);
}

void q_pdfbookmarkmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnBuddy((QPdfBookmarkModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_pdfbookmarkmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QPdfBookmarkModel_Match((QPdfBookmarkModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_pdfbookmarkmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QPdfBookmarkModel_QBaseMatch((QPdfBookmarkModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_pdfbookmarkmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    QPdfBookmarkModel_OnMatch((QPdfBookmarkModel*)self, (intptr_t)callback);
}

QSize* q_pdfbookmarkmodel_span(void* self, void* index) {
    return QPdfBookmarkModel_Span((QPdfBookmarkModel*)self, (QModelIndex*)index);
}

QSize* q_pdfbookmarkmodel_qbase_span(void* self, void* index) {
    return QPdfBookmarkModel_QBaseSpan((QPdfBookmarkModel*)self, (QModelIndex*)index);
}

void q_pdfbookmarkmodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnSpan((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QPdfBookmarkModel_MultiData((QPdfBookmarkModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_pdfbookmarkmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QPdfBookmarkModel_QBaseMultiData((QPdfBookmarkModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_pdfbookmarkmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    QPdfBookmarkModel_OnMultiData((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_submit(void* self) {
    return QPdfBookmarkModel_Submit((QPdfBookmarkModel*)self);
}

bool q_pdfbookmarkmodel_qbase_submit(void* self) {
    return QPdfBookmarkModel_QBaseSubmit((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_on_submit(void* self, bool (*callback)()) {
    QPdfBookmarkModel_OnSubmit((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_revert(void* self) {
    QPdfBookmarkModel_Revert((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_qbase_revert(void* self) {
    QPdfBookmarkModel_QBaseRevert((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_on_revert(void* self, void (*callback)()) {
    QPdfBookmarkModel_OnRevert((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_reset_internal_data(void* self) {
    QPdfBookmarkModel_ResetInternalData((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_qbase_reset_internal_data(void* self) {
    QPdfBookmarkModel_QBaseResetInternalData((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_on_reset_internal_data(void* self, void (*callback)()) {
    QPdfBookmarkModel_OnResetInternalData((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_event(void* self, void* event) {
    return QPdfBookmarkModel_Event((QPdfBookmarkModel*)self, (QEvent*)event);
}

bool q_pdfbookmarkmodel_qbase_event(void* self, void* event) {
    return QPdfBookmarkModel_QBaseEvent((QPdfBookmarkModel*)self, (QEvent*)event);
}

void q_pdfbookmarkmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnEvent((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_event_filter(void* self, void* watched, void* event) {
    return QPdfBookmarkModel_EventFilter((QPdfBookmarkModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pdfbookmarkmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QPdfBookmarkModel_QBaseEventFilter((QPdfBookmarkModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_pdfbookmarkmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPdfBookmarkModel_OnEventFilter((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_timer_event(void* self, void* event) {
    QPdfBookmarkModel_TimerEvent((QPdfBookmarkModel*)self, (QTimerEvent*)event);
}

void q_pdfbookmarkmodel_qbase_timer_event(void* self, void* event) {
    QPdfBookmarkModel_QBaseTimerEvent((QPdfBookmarkModel*)self, (QTimerEvent*)event);
}

void q_pdfbookmarkmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnTimerEvent((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_child_event(void* self, void* event) {
    QPdfBookmarkModel_ChildEvent((QPdfBookmarkModel*)self, (QChildEvent*)event);
}

void q_pdfbookmarkmodel_qbase_child_event(void* self, void* event) {
    QPdfBookmarkModel_QBaseChildEvent((QPdfBookmarkModel*)self, (QChildEvent*)event);
}

void q_pdfbookmarkmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnChildEvent((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_custom_event(void* self, void* event) {
    QPdfBookmarkModel_CustomEvent((QPdfBookmarkModel*)self, (QEvent*)event);
}

void q_pdfbookmarkmodel_qbase_custom_event(void* self, void* event) {
    QPdfBookmarkModel_QBaseCustomEvent((QPdfBookmarkModel*)self, (QEvent*)event);
}

void q_pdfbookmarkmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnCustomEvent((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_connect_notify(void* self, void* signal) {
    QPdfBookmarkModel_ConnectNotify((QPdfBookmarkModel*)self, (QMetaMethod*)signal);
}

void q_pdfbookmarkmodel_qbase_connect_notify(void* self, void* signal) {
    QPdfBookmarkModel_QBaseConnectNotify((QPdfBookmarkModel*)self, (QMetaMethod*)signal);
}

void q_pdfbookmarkmodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnConnectNotify((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_disconnect_notify(void* self, void* signal) {
    QPdfBookmarkModel_DisconnectNotify((QPdfBookmarkModel*)self, (QMetaMethod*)signal);
}

void q_pdfbookmarkmodel_qbase_disconnect_notify(void* self, void* signal) {
    QPdfBookmarkModel_QBaseDisconnectNotify((QPdfBookmarkModel*)self, (QMetaMethod*)signal);
}

void q_pdfbookmarkmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnDisconnectNotify((QPdfBookmarkModel*)self, (intptr_t)callback);
}

QModelIndex* q_pdfbookmarkmodel_create_index(void* self, int row, int column) {
    return QPdfBookmarkModel_CreateIndex((QPdfBookmarkModel*)self, row, column);
}

QModelIndex* q_pdfbookmarkmodel_qbase_create_index(void* self, int row, int column) {
    return QPdfBookmarkModel_QBaseCreateIndex((QPdfBookmarkModel*)self, row, column);
}

void q_pdfbookmarkmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    QPdfBookmarkModel_OnCreateIndex((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QPdfBookmarkModel_EncodeData((QPdfBookmarkModel*)self, indexes, (QDataStream*)stream);
}

void q_pdfbookmarkmodel_qbase_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QPdfBookmarkModel_QBaseEncodeData((QPdfBookmarkModel*)self, indexes, (QDataStream*)stream);
}

void q_pdfbookmarkmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    QPdfBookmarkModel_OnEncodeData((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QPdfBookmarkModel_DecodeData((QPdfBookmarkModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_pdfbookmarkmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QPdfBookmarkModel_QBaseDecodeData((QPdfBookmarkModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_pdfbookmarkmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    QPdfBookmarkModel_OnDecodeData((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QPdfBookmarkModel_BeginInsertRows((QPdfBookmarkModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfbookmarkmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QPdfBookmarkModel_QBaseBeginInsertRows((QPdfBookmarkModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfbookmarkmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QPdfBookmarkModel_OnBeginInsertRows((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_end_insert_rows(void* self) {
    QPdfBookmarkModel_EndInsertRows((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_qbase_end_insert_rows(void* self) {
    QPdfBookmarkModel_QBaseEndInsertRows((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_on_end_insert_rows(void* self, void (*callback)()) {
    QPdfBookmarkModel_OnEndInsertRows((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QPdfBookmarkModel_BeginRemoveRows((QPdfBookmarkModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfbookmarkmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QPdfBookmarkModel_QBaseBeginRemoveRows((QPdfBookmarkModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfbookmarkmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QPdfBookmarkModel_OnBeginRemoveRows((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_end_remove_rows(void* self) {
    QPdfBookmarkModel_EndRemoveRows((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_qbase_end_remove_rows(void* self) {
    QPdfBookmarkModel_QBaseEndRemoveRows((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_on_end_remove_rows(void* self, void (*callback)()) {
    QPdfBookmarkModel_OnEndRemoveRows((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QPdfBookmarkModel_BeginMoveRows((QPdfBookmarkModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool q_pdfbookmarkmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QPdfBookmarkModel_QBaseBeginMoveRows((QPdfBookmarkModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_pdfbookmarkmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QPdfBookmarkModel_OnBeginMoveRows((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_end_move_rows(void* self) {
    QPdfBookmarkModel_EndMoveRows((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_qbase_end_move_rows(void* self) {
    QPdfBookmarkModel_QBaseEndMoveRows((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_on_end_move_rows(void* self, void (*callback)()) {
    QPdfBookmarkModel_OnEndMoveRows((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QPdfBookmarkModel_BeginInsertColumns((QPdfBookmarkModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfbookmarkmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QPdfBookmarkModel_QBaseBeginInsertColumns((QPdfBookmarkModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfbookmarkmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QPdfBookmarkModel_OnBeginInsertColumns((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_end_insert_columns(void* self) {
    QPdfBookmarkModel_EndInsertColumns((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_qbase_end_insert_columns(void* self) {
    QPdfBookmarkModel_QBaseEndInsertColumns((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_on_end_insert_columns(void* self, void (*callback)()) {
    QPdfBookmarkModel_OnEndInsertColumns((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QPdfBookmarkModel_BeginRemoveColumns((QPdfBookmarkModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfbookmarkmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QPdfBookmarkModel_QBaseBeginRemoveColumns((QPdfBookmarkModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfbookmarkmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QPdfBookmarkModel_OnBeginRemoveColumns((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_end_remove_columns(void* self) {
    QPdfBookmarkModel_EndRemoveColumns((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_qbase_end_remove_columns(void* self) {
    QPdfBookmarkModel_QBaseEndRemoveColumns((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_on_end_remove_columns(void* self, void (*callback)()) {
    QPdfBookmarkModel_OnEndRemoveColumns((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QPdfBookmarkModel_BeginMoveColumns((QPdfBookmarkModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool q_pdfbookmarkmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QPdfBookmarkModel_QBaseBeginMoveColumns((QPdfBookmarkModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_pdfbookmarkmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QPdfBookmarkModel_OnBeginMoveColumns((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_end_move_columns(void* self) {
    QPdfBookmarkModel_EndMoveColumns((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_qbase_end_move_columns(void* self) {
    QPdfBookmarkModel_QBaseEndMoveColumns((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_on_end_move_columns(void* self, void (*callback)()) {
    QPdfBookmarkModel_OnEndMoveColumns((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_begin_reset_model(void* self) {
    QPdfBookmarkModel_BeginResetModel((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_qbase_begin_reset_model(void* self) {
    QPdfBookmarkModel_QBaseBeginResetModel((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_on_begin_reset_model(void* self, void (*callback)()) {
    QPdfBookmarkModel_OnBeginResetModel((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_end_reset_model(void* self) {
    QPdfBookmarkModel_EndResetModel((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_qbase_end_reset_model(void* self) {
    QPdfBookmarkModel_QBaseEndResetModel((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_on_end_reset_model(void* self, void (*callback)()) {
    QPdfBookmarkModel_OnEndResetModel((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_change_persistent_index(void* self, void* from, void* to) {
    QPdfBookmarkModel_ChangePersistentIndex((QPdfBookmarkModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_pdfbookmarkmodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QPdfBookmarkModel_QBaseChangePersistentIndex((QPdfBookmarkModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_pdfbookmarkmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    QPdfBookmarkModel_OnChangePersistentIndex((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QPdfBookmarkModel_ChangePersistentIndexList((QPdfBookmarkModel*)self, from, to);
}

void q_pdfbookmarkmodel_qbase_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QPdfBookmarkModel_QBaseChangePersistentIndexList((QPdfBookmarkModel*)self, from, to);
}

void q_pdfbookmarkmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    QPdfBookmarkModel_OnChangePersistentIndexList((QPdfBookmarkModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_pdfbookmarkmodel_persistent_index_list(void* self) {
    libqt_list _arr = QPdfBookmarkModel_PersistentIndexList((QPdfBookmarkModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_pdfbookmarkmodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QPdfBookmarkModel_QBasePersistentIndexList((QPdfBookmarkModel*)self);
    return _arr;
}

void q_pdfbookmarkmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    QPdfBookmarkModel_OnPersistentIndexList((QPdfBookmarkModel*)self, (intptr_t)callback);
}

QObject* q_pdfbookmarkmodel_sender(void* self) {
    return QPdfBookmarkModel_Sender((QPdfBookmarkModel*)self);
}

QObject* q_pdfbookmarkmodel_qbase_sender(void* self) {
    return QPdfBookmarkModel_QBaseSender((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_on_sender(void* self, QObject* (*callback)()) {
    QPdfBookmarkModel_OnSender((QPdfBookmarkModel*)self, (intptr_t)callback);
}

int32_t q_pdfbookmarkmodel_sender_signal_index(void* self) {
    return QPdfBookmarkModel_SenderSignalIndex((QPdfBookmarkModel*)self);
}

int32_t q_pdfbookmarkmodel_qbase_sender_signal_index(void* self) {
    return QPdfBookmarkModel_QBaseSenderSignalIndex((QPdfBookmarkModel*)self);
}

void q_pdfbookmarkmodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPdfBookmarkModel_OnSenderSignalIndex((QPdfBookmarkModel*)self, (intptr_t)callback);
}

int32_t q_pdfbookmarkmodel_receivers(void* self, const char* signal) {
    return QPdfBookmarkModel_Receivers((QPdfBookmarkModel*)self, signal);
}

int32_t q_pdfbookmarkmodel_qbase_receivers(void* self, const char* signal) {
    return QPdfBookmarkModel_QBaseReceivers((QPdfBookmarkModel*)self, signal);
}

void q_pdfbookmarkmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPdfBookmarkModel_OnReceivers((QPdfBookmarkModel*)self, (intptr_t)callback);
}

bool q_pdfbookmarkmodel_is_signal_connected(void* self, void* signal) {
    return QPdfBookmarkModel_IsSignalConnected((QPdfBookmarkModel*)self, (QMetaMethod*)signal);
}

bool q_pdfbookmarkmodel_qbase_is_signal_connected(void* self, void* signal) {
    return QPdfBookmarkModel_QBaseIsSignalConnected((QPdfBookmarkModel*)self, (QMetaMethod*)signal);
}

void q_pdfbookmarkmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPdfBookmarkModel_OnIsSignalConnected((QPdfBookmarkModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_pdfbookmarkmodel_delete(void* self) {
    QPdfBookmarkModel_Delete((QPdfBookmarkModel*)(self));
}
