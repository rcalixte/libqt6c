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
    return QPdfSearchModel_new();
}

QPdfSearchModel* q_pdfsearchmodel_new2(void* parent) {
    return QPdfSearchModel_new2((QObject*)parent);
}

const QMetaObject* q_pdfsearchmodel_meta_object(void* self) {
    return QPdfSearchModel_MetaObject((QPdfSearchModel*)self);
}

void* q_pdfsearchmodel_metacast(void* self, const char* param1) {
    return QPdfSearchModel_Metacast((QPdfSearchModel*)self, param1);
}

int32_t q_pdfsearchmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPdfSearchModel_Metacall((QPdfSearchModel*)self, param1, param2, param3);
}

void q_pdfsearchmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPdfSearchModel_OnMetacall((QPdfSearchModel*)self, (intptr_t)callback);
}

int32_t q_pdfsearchmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPdfSearchModel_QBaseMetacall((QPdfSearchModel*)self, param1, param2, param3);
}

const char* q_pdfsearchmodel_tr(const char* s) {
    libqt_string _str = QPdfSearchModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QPdfLink* */ q_pdfsearchmodel_results_on_page(void* self, int page) {
    libqt_list _arr = QPdfSearchModel_ResultsOnPage((QPdfSearchModel*)self, page);
    return _arr;
}

QPdfLink* q_pdfsearchmodel_result_at_index(void* self, int index) {
    return QPdfSearchModel_ResultAtIndex((QPdfSearchModel*)self, index);
}

QPdfDocument* q_pdfsearchmodel_document(void* self) {
    return QPdfSearchModel_Document((QPdfSearchModel*)self);
}

const char* q_pdfsearchmodel_search_string(void* self) {
    libqt_string _str = QPdfSearchModel_SearchString((QPdfSearchModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_map /* of int to char* */ q_pdfsearchmodel_role_names(void* self) {
    return QPdfSearchModel_RoleNames((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    QPdfSearchModel_OnRoleNames((QPdfSearchModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_pdfsearchmodel_qbase_role_names(void* self) {
    return QPdfSearchModel_QBaseRoleNames((QPdfSearchModel*)self);
}

int32_t q_pdfsearchmodel_row_count(void* self, void* parent) {
    return QPdfSearchModel_RowCount((QPdfSearchModel*)self, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    QPdfSearchModel_OnRowCount((QPdfSearchModel*)self, (intptr_t)callback);
}

int32_t q_pdfsearchmodel_qbase_row_count(void* self, void* parent) {
    return QPdfSearchModel_QBaseRowCount((QPdfSearchModel*)self, (QModelIndex*)parent);
}

QVariant* q_pdfsearchmodel_data(void* self, void* index, int role) {
    return QPdfSearchModel_Data((QPdfSearchModel*)self, (QModelIndex*)index, role);
}

void q_pdfsearchmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    QPdfSearchModel_OnData((QPdfSearchModel*)self, (intptr_t)callback);
}

QVariant* q_pdfsearchmodel_qbase_data(void* self, void* index, int role) {
    return QPdfSearchModel_QBaseData((QPdfSearchModel*)self, (QModelIndex*)index, role);
}

int32_t q_pdfsearchmodel_count(void* self) {
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

void q_pdfsearchmodel_on_update_page(void* self, void (*callback)(void*, int)) {
    QPdfSearchModel_OnUpdatePage((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_qbase_update_page(void* self, int page) {
    QPdfSearchModel_QBaseUpdatePage((QPdfSearchModel*)self, page);
}

void q_pdfsearchmodel_timer_event(void* self, void* event) {
    QPdfSearchModel_TimerEvent((QPdfSearchModel*)self, (QTimerEvent*)event);
}

void q_pdfsearchmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPdfSearchModel_OnTimerEvent((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_qbase_timer_event(void* self, void* event) {
    QPdfSearchModel_QBaseTimerEvent((QPdfSearchModel*)self, (QTimerEvent*)event);
}

const char* q_pdfsearchmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QPdfSearchModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pdfsearchmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPdfSearchModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_pdfsearchmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* q_pdfsearchmodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void q_pdfsearchmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_pdfsearchmodel_qbase_parent(void* self, void* child) {
    return QAbstractItemModel_QBaseParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

int32_t q_pdfsearchmodel_column_count(void* self, void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QAbstractItemModel_OnColumnCount((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t q_pdfsearchmodel_qbase_column_count(void* self, void* parent) {
    return QAbstractItemModel_QBaseColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_qbase_has_children(void* self, void* parent) {
    return QAbstractItemModel_QBaseHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
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

bool q_pdfsearchmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_pdfsearchmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_pdfsearchmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_pdfsearchmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_pdfsearchmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
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

bool q_pdfsearchmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_pdfsearchmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_pdfsearchmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_pdfsearchmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_layout_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_pdfsearchmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_pdfsearchmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_pdfsearchmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_pdfsearchmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfsearchmodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pdfsearchmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pdfsearchmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pdfsearchmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pdfsearchmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pdfsearchmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pdfsearchmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pdfsearchmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pdfsearchmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_pdfsearchmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pdfsearchmodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pdfsearchmodel_children(void* self) {
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

QMetaObject__Connection* q_pdfsearchmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pdfsearchmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pdfsearchmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pdfsearchmodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_pdfsearchmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pdfsearchmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pdfsearchmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pdfsearchmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pdfsearchmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_pdfsearchmodel_dynamic_property_names");
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

QBindingStorage* q_pdfsearchmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pdfsearchmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pdfsearchmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pdfsearchmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pdfsearchmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_pdfsearchmodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_pdfsearchmodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_pdfsearchmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_pdfsearchmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_pdfsearchmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pdfsearchmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* q_pdfsearchmodel_index(void* self, int row, int column, void* parent) {
    return QPdfSearchModel_Index((QPdfSearchModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_pdfsearchmodel_qbase_index(void* self, int row, int column, void* parent) {
    return QPdfSearchModel_QBaseIndex((QPdfSearchModel*)self, row, column, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QPdfSearchModel_OnIndex((QPdfSearchModel*)self, (intptr_t)callback);
}

QModelIndex* q_pdfsearchmodel_sibling(void* self, int row, int column, void* idx) {
    return QPdfSearchModel_Sibling((QPdfSearchModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* q_pdfsearchmodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QPdfSearchModel_QBaseSibling((QPdfSearchModel*)self, row, column, (QModelIndex*)idx);
}

void q_pdfsearchmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QPdfSearchModel_OnSibling((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QPdfSearchModel_DropMimeData((QPdfSearchModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QPdfSearchModel_QBaseDropMimeData((QPdfSearchModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QPdfSearchModel_OnDropMimeData((QPdfSearchModel*)self, (intptr_t)callback);
}

int32_t q_pdfsearchmodel_flags(void* self, void* index) {
    return QPdfSearchModel_Flags((QPdfSearchModel*)self, (QModelIndex*)index);
}

int32_t q_pdfsearchmodel_qbase_flags(void* self, void* index) {
    return QPdfSearchModel_QBaseFlags((QPdfSearchModel*)self, (QModelIndex*)index);
}

void q_pdfsearchmodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    QPdfSearchModel_OnFlags((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_set_data(void* self, void* index, void* value, int role) {
    return QPdfSearchModel_SetData((QPdfSearchModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool q_pdfsearchmodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QPdfSearchModel_QBaseSetData((QPdfSearchModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_pdfsearchmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    QPdfSearchModel_OnSetData((QPdfSearchModel*)self, (intptr_t)callback);
}

QVariant* q_pdfsearchmodel_header_data(void* self, int section, int32_t orientation, int role) {
    return QPdfSearchModel_HeaderData((QPdfSearchModel*)self, section, orientation, role);
}

QVariant* q_pdfsearchmodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return QPdfSearchModel_QBaseHeaderData((QPdfSearchModel*)self, section, orientation, role);
}

void q_pdfsearchmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    QPdfSearchModel_OnHeaderData((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QPdfSearchModel_SetHeaderData((QPdfSearchModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_pdfsearchmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QPdfSearchModel_QBaseSetHeaderData((QPdfSearchModel*)self, section, orientation, (QVariant*)value, role);
}

void q_pdfsearchmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    QPdfSearchModel_OnSetHeaderData((QPdfSearchModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_pdfsearchmodel_item_data(void* self, void* index) {
    return QPdfSearchModel_ItemData((QPdfSearchModel*)self, (QModelIndex*)index);
}

libqt_map /* of int to QVariant* */ q_pdfsearchmodel_qbase_item_data(void* self, void* index) {
    return QPdfSearchModel_QBaseItemData((QPdfSearchModel*)self, (QModelIndex*)index);
}

void q_pdfsearchmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    QPdfSearchModel_OnItemData((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QPdfSearchModel_SetItemData((QPdfSearchModel*)self, (QModelIndex*)index, roles);
}

bool q_pdfsearchmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QPdfSearchModel_QBaseSetItemData((QPdfSearchModel*)self, (QModelIndex*)index, roles);
}

void q_pdfsearchmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QPdfSearchModel_OnSetItemData((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_clear_item_data(void* self, void* index) {
    return QPdfSearchModel_ClearItemData((QPdfSearchModel*)self, (QModelIndex*)index);
}

bool q_pdfsearchmodel_qbase_clear_item_data(void* self, void* index) {
    return QPdfSearchModel_QBaseClearItemData((QPdfSearchModel*)self, (QModelIndex*)index);
}

void q_pdfsearchmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    QPdfSearchModel_OnClearItemData((QPdfSearchModel*)self, (intptr_t)callback);
}

const char** q_pdfsearchmodel_mime_types(void* self) {
    libqt_list _arr = QPdfSearchModel_MimeTypes((QPdfSearchModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_pdfsearchmodel_mime_types");
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

const char** q_pdfsearchmodel_qbase_mime_types(void* self) {
    libqt_list _arr = QPdfSearchModel_QBaseMimeTypes((QPdfSearchModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_pdfsearchmodel_mime_types");
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

void q_pdfsearchmodel_on_mime_types(void* self, const char** (*callback)()) {
    QPdfSearchModel_OnMimeTypes((QPdfSearchModel*)self, (intptr_t)callback);
}

QMimeData* q_pdfsearchmodel_mime_data(void* self, libqt_list indexes) {
    return QPdfSearchModel_MimeData((QPdfSearchModel*)self, indexes);
}

QMimeData* q_pdfsearchmodel_qbase_mime_data(void* self, libqt_list indexes) {
    return QPdfSearchModel_QBaseMimeData((QPdfSearchModel*)self, indexes);
}

void q_pdfsearchmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    QPdfSearchModel_OnMimeData((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QPdfSearchModel_CanDropMimeData((QPdfSearchModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QPdfSearchModel_QBaseCanDropMimeData((QPdfSearchModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QPdfSearchModel_OnCanDropMimeData((QPdfSearchModel*)self, (intptr_t)callback);
}

int32_t q_pdfsearchmodel_supported_drop_actions(void* self) {
    return QPdfSearchModel_SupportedDropActions((QPdfSearchModel*)self);
}

int32_t q_pdfsearchmodel_qbase_supported_drop_actions(void* self) {
    return QPdfSearchModel_QBaseSupportedDropActions((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    QPdfSearchModel_OnSupportedDropActions((QPdfSearchModel*)self, (intptr_t)callback);
}

int32_t q_pdfsearchmodel_supported_drag_actions(void* self) {
    return QPdfSearchModel_SupportedDragActions((QPdfSearchModel*)self);
}

int32_t q_pdfsearchmodel_qbase_supported_drag_actions(void* self) {
    return QPdfSearchModel_QBaseSupportedDragActions((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    QPdfSearchModel_OnSupportedDragActions((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_insert_rows(void* self, int row, int count, void* parent) {
    return QPdfSearchModel_InsertRows((QPdfSearchModel*)self, row, count, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QPdfSearchModel_QBaseInsertRows((QPdfSearchModel*)self, row, count, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QPdfSearchModel_OnInsertRows((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_insert_columns(void* self, int column, int count, void* parent) {
    return QPdfSearchModel_InsertColumns((QPdfSearchModel*)self, column, count, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QPdfSearchModel_QBaseInsertColumns((QPdfSearchModel*)self, column, count, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QPdfSearchModel_OnInsertColumns((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_remove_rows(void* self, int row, int count, void* parent) {
    return QPdfSearchModel_RemoveRows((QPdfSearchModel*)self, row, count, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QPdfSearchModel_QBaseRemoveRows((QPdfSearchModel*)self, row, count, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QPdfSearchModel_OnRemoveRows((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_remove_columns(void* self, int column, int count, void* parent) {
    return QPdfSearchModel_RemoveColumns((QPdfSearchModel*)self, column, count, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QPdfSearchModel_QBaseRemoveColumns((QPdfSearchModel*)self, column, count, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QPdfSearchModel_OnRemoveColumns((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QPdfSearchModel_MoveRows((QPdfSearchModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_pdfsearchmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QPdfSearchModel_QBaseMoveRows((QPdfSearchModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_pdfsearchmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QPdfSearchModel_OnMoveRows((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QPdfSearchModel_MoveColumns((QPdfSearchModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_pdfsearchmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QPdfSearchModel_QBaseMoveColumns((QPdfSearchModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_pdfsearchmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QPdfSearchModel_OnMoveColumns((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_fetch_more(void* self, void* parent) {
    QPdfSearchModel_FetchMore((QPdfSearchModel*)self, (QModelIndex*)parent);
}

void q_pdfsearchmodel_qbase_fetch_more(void* self, void* parent) {
    QPdfSearchModel_QBaseFetchMore((QPdfSearchModel*)self, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    QPdfSearchModel_OnFetchMore((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_can_fetch_more(void* self, void* parent) {
    return QPdfSearchModel_CanFetchMore((QPdfSearchModel*)self, (QModelIndex*)parent);
}

bool q_pdfsearchmodel_qbase_can_fetch_more(void* self, void* parent) {
    return QPdfSearchModel_QBaseCanFetchMore((QPdfSearchModel*)self, (QModelIndex*)parent);
}

void q_pdfsearchmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    QPdfSearchModel_OnCanFetchMore((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_sort(void* self, int column, int32_t order) {
    QPdfSearchModel_Sort((QPdfSearchModel*)self, column, order);
}

void q_pdfsearchmodel_qbase_sort(void* self, int column, int32_t order) {
    QPdfSearchModel_QBaseSort((QPdfSearchModel*)self, column, order);
}

void q_pdfsearchmodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QPdfSearchModel_OnSort((QPdfSearchModel*)self, (intptr_t)callback);
}

QModelIndex* q_pdfsearchmodel_buddy(void* self, void* index) {
    return QPdfSearchModel_Buddy((QPdfSearchModel*)self, (QModelIndex*)index);
}

QModelIndex* q_pdfsearchmodel_qbase_buddy(void* self, void* index) {
    return QPdfSearchModel_QBaseBuddy((QPdfSearchModel*)self, (QModelIndex*)index);
}

void q_pdfsearchmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    QPdfSearchModel_OnBuddy((QPdfSearchModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_pdfsearchmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QPdfSearchModel_Match((QPdfSearchModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_pdfsearchmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QPdfSearchModel_QBaseMatch((QPdfSearchModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_pdfsearchmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    QPdfSearchModel_OnMatch((QPdfSearchModel*)self, (intptr_t)callback);
}

QSize* q_pdfsearchmodel_span(void* self, void* index) {
    return QPdfSearchModel_Span((QPdfSearchModel*)self, (QModelIndex*)index);
}

QSize* q_pdfsearchmodel_qbase_span(void* self, void* index) {
    return QPdfSearchModel_QBaseSpan((QPdfSearchModel*)self, (QModelIndex*)index);
}

void q_pdfsearchmodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    QPdfSearchModel_OnSpan((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QPdfSearchModel_MultiData((QPdfSearchModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_pdfsearchmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QPdfSearchModel_QBaseMultiData((QPdfSearchModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_pdfsearchmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    QPdfSearchModel_OnMultiData((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_submit(void* self) {
    return QPdfSearchModel_Submit((QPdfSearchModel*)self);
}

bool q_pdfsearchmodel_qbase_submit(void* self) {
    return QPdfSearchModel_QBaseSubmit((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_submit(void* self, bool (*callback)()) {
    QPdfSearchModel_OnSubmit((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_revert(void* self) {
    QPdfSearchModel_Revert((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_qbase_revert(void* self) {
    QPdfSearchModel_QBaseRevert((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_revert(void* self, void (*callback)()) {
    QPdfSearchModel_OnRevert((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_reset_internal_data(void* self) {
    QPdfSearchModel_ResetInternalData((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_qbase_reset_internal_data(void* self) {
    QPdfSearchModel_QBaseResetInternalData((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_reset_internal_data(void* self, void (*callback)()) {
    QPdfSearchModel_OnResetInternalData((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_event(void* self, void* event) {
    return QPdfSearchModel_Event((QPdfSearchModel*)self, (QEvent*)event);
}

bool q_pdfsearchmodel_qbase_event(void* self, void* event) {
    return QPdfSearchModel_QBaseEvent((QPdfSearchModel*)self, (QEvent*)event);
}

void q_pdfsearchmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QPdfSearchModel_OnEvent((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_event_filter(void* self, void* watched, void* event) {
    return QPdfSearchModel_EventFilter((QPdfSearchModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pdfsearchmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QPdfSearchModel_QBaseEventFilter((QPdfSearchModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_pdfsearchmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPdfSearchModel_OnEventFilter((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_child_event(void* self, void* event) {
    QPdfSearchModel_ChildEvent((QPdfSearchModel*)self, (QChildEvent*)event);
}

void q_pdfsearchmodel_qbase_child_event(void* self, void* event) {
    QPdfSearchModel_QBaseChildEvent((QPdfSearchModel*)self, (QChildEvent*)event);
}

void q_pdfsearchmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPdfSearchModel_OnChildEvent((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_custom_event(void* self, void* event) {
    QPdfSearchModel_CustomEvent((QPdfSearchModel*)self, (QEvent*)event);
}

void q_pdfsearchmodel_qbase_custom_event(void* self, void* event) {
    QPdfSearchModel_QBaseCustomEvent((QPdfSearchModel*)self, (QEvent*)event);
}

void q_pdfsearchmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPdfSearchModel_OnCustomEvent((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_connect_notify(void* self, void* signal) {
    QPdfSearchModel_ConnectNotify((QPdfSearchModel*)self, (QMetaMethod*)signal);
}

void q_pdfsearchmodel_qbase_connect_notify(void* self, void* signal) {
    QPdfSearchModel_QBaseConnectNotify((QPdfSearchModel*)self, (QMetaMethod*)signal);
}

void q_pdfsearchmodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPdfSearchModel_OnConnectNotify((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_disconnect_notify(void* self, void* signal) {
    QPdfSearchModel_DisconnectNotify((QPdfSearchModel*)self, (QMetaMethod*)signal);
}

void q_pdfsearchmodel_qbase_disconnect_notify(void* self, void* signal) {
    QPdfSearchModel_QBaseDisconnectNotify((QPdfSearchModel*)self, (QMetaMethod*)signal);
}

void q_pdfsearchmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPdfSearchModel_OnDisconnectNotify((QPdfSearchModel*)self, (intptr_t)callback);
}

QModelIndex* q_pdfsearchmodel_create_index(void* self, int row, int column) {
    return QPdfSearchModel_CreateIndex((QPdfSearchModel*)self, row, column);
}

QModelIndex* q_pdfsearchmodel_qbase_create_index(void* self, int row, int column) {
    return QPdfSearchModel_QBaseCreateIndex((QPdfSearchModel*)self, row, column);
}

void q_pdfsearchmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    QPdfSearchModel_OnCreateIndex((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_encode_data(void* self, libqt_list indexes, void* stream) {
    QPdfSearchModel_EncodeData((QPdfSearchModel*)self, indexes, (QDataStream*)stream);
}

void q_pdfsearchmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    QPdfSearchModel_QBaseEncodeData((QPdfSearchModel*)self, indexes, (QDataStream*)stream);
}

void q_pdfsearchmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    QPdfSearchModel_OnEncodeData((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QPdfSearchModel_DecodeData((QPdfSearchModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_pdfsearchmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QPdfSearchModel_QBaseDecodeData((QPdfSearchModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_pdfsearchmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    QPdfSearchModel_OnDecodeData((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QPdfSearchModel_BeginInsertRows((QPdfSearchModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfsearchmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QPdfSearchModel_QBaseBeginInsertRows((QPdfSearchModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfsearchmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QPdfSearchModel_OnBeginInsertRows((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_end_insert_rows(void* self) {
    QPdfSearchModel_EndInsertRows((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_qbase_end_insert_rows(void* self) {
    QPdfSearchModel_QBaseEndInsertRows((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_end_insert_rows(void* self, void (*callback)()) {
    QPdfSearchModel_OnEndInsertRows((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QPdfSearchModel_BeginRemoveRows((QPdfSearchModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfsearchmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QPdfSearchModel_QBaseBeginRemoveRows((QPdfSearchModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfsearchmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QPdfSearchModel_OnBeginRemoveRows((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_end_remove_rows(void* self) {
    QPdfSearchModel_EndRemoveRows((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_qbase_end_remove_rows(void* self) {
    QPdfSearchModel_QBaseEndRemoveRows((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_end_remove_rows(void* self, void (*callback)()) {
    QPdfSearchModel_OnEndRemoveRows((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QPdfSearchModel_BeginMoveRows((QPdfSearchModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool q_pdfsearchmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QPdfSearchModel_QBaseBeginMoveRows((QPdfSearchModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_pdfsearchmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QPdfSearchModel_OnBeginMoveRows((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_end_move_rows(void* self) {
    QPdfSearchModel_EndMoveRows((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_qbase_end_move_rows(void* self) {
    QPdfSearchModel_QBaseEndMoveRows((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_end_move_rows(void* self, void (*callback)()) {
    QPdfSearchModel_OnEndMoveRows((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QPdfSearchModel_BeginInsertColumns((QPdfSearchModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfsearchmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QPdfSearchModel_QBaseBeginInsertColumns((QPdfSearchModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfsearchmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QPdfSearchModel_OnBeginInsertColumns((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_end_insert_columns(void* self) {
    QPdfSearchModel_EndInsertColumns((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_qbase_end_insert_columns(void* self) {
    QPdfSearchModel_QBaseEndInsertColumns((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_end_insert_columns(void* self, void (*callback)()) {
    QPdfSearchModel_OnEndInsertColumns((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QPdfSearchModel_BeginRemoveColumns((QPdfSearchModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfsearchmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QPdfSearchModel_QBaseBeginRemoveColumns((QPdfSearchModel*)self, (QModelIndex*)parent, first, last);
}

void q_pdfsearchmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QPdfSearchModel_OnBeginRemoveColumns((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_end_remove_columns(void* self) {
    QPdfSearchModel_EndRemoveColumns((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_qbase_end_remove_columns(void* self) {
    QPdfSearchModel_QBaseEndRemoveColumns((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_end_remove_columns(void* self, void (*callback)()) {
    QPdfSearchModel_OnEndRemoveColumns((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QPdfSearchModel_BeginMoveColumns((QPdfSearchModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool q_pdfsearchmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QPdfSearchModel_QBaseBeginMoveColumns((QPdfSearchModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_pdfsearchmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QPdfSearchModel_OnBeginMoveColumns((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_end_move_columns(void* self) {
    QPdfSearchModel_EndMoveColumns((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_qbase_end_move_columns(void* self) {
    QPdfSearchModel_QBaseEndMoveColumns((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_end_move_columns(void* self, void (*callback)()) {
    QPdfSearchModel_OnEndMoveColumns((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_begin_reset_model(void* self) {
    QPdfSearchModel_BeginResetModel((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_qbase_begin_reset_model(void* self) {
    QPdfSearchModel_QBaseBeginResetModel((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_begin_reset_model(void* self, void (*callback)()) {
    QPdfSearchModel_OnBeginResetModel((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_end_reset_model(void* self) {
    QPdfSearchModel_EndResetModel((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_qbase_end_reset_model(void* self) {
    QPdfSearchModel_QBaseEndResetModel((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_end_reset_model(void* self, void (*callback)()) {
    QPdfSearchModel_OnEndResetModel((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_change_persistent_index(void* self, void* from, void* to) {
    QPdfSearchModel_ChangePersistentIndex((QPdfSearchModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_pdfsearchmodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QPdfSearchModel_QBaseChangePersistentIndex((QPdfSearchModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_pdfsearchmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    QPdfSearchModel_OnChangePersistentIndex((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QPdfSearchModel_ChangePersistentIndexList((QPdfSearchModel*)self, from, to);
}

void q_pdfsearchmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QPdfSearchModel_QBaseChangePersistentIndexList((QPdfSearchModel*)self, from, to);
}

void q_pdfsearchmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    QPdfSearchModel_OnChangePersistentIndexList((QPdfSearchModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_pdfsearchmodel_persistent_index_list(void* self) {
    libqt_list _arr = QPdfSearchModel_PersistentIndexList((QPdfSearchModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_pdfsearchmodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QPdfSearchModel_QBasePersistentIndexList((QPdfSearchModel*)self);
    return _arr;
}

void q_pdfsearchmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    QPdfSearchModel_OnPersistentIndexList((QPdfSearchModel*)self, (intptr_t)callback);
}

QObject* q_pdfsearchmodel_sender(void* self) {
    return QPdfSearchModel_Sender((QPdfSearchModel*)self);
}

QObject* q_pdfsearchmodel_qbase_sender(void* self) {
    return QPdfSearchModel_QBaseSender((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_sender(void* self, QObject* (*callback)()) {
    QPdfSearchModel_OnSender((QPdfSearchModel*)self, (intptr_t)callback);
}

int32_t q_pdfsearchmodel_sender_signal_index(void* self) {
    return QPdfSearchModel_SenderSignalIndex((QPdfSearchModel*)self);
}

int32_t q_pdfsearchmodel_qbase_sender_signal_index(void* self) {
    return QPdfSearchModel_QBaseSenderSignalIndex((QPdfSearchModel*)self);
}

void q_pdfsearchmodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPdfSearchModel_OnSenderSignalIndex((QPdfSearchModel*)self, (intptr_t)callback);
}

int32_t q_pdfsearchmodel_receivers(void* self, const char* signal) {
    return QPdfSearchModel_Receivers((QPdfSearchModel*)self, signal);
}

int32_t q_pdfsearchmodel_qbase_receivers(void* self, const char* signal) {
    return QPdfSearchModel_QBaseReceivers((QPdfSearchModel*)self, signal);
}

void q_pdfsearchmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPdfSearchModel_OnReceivers((QPdfSearchModel*)self, (intptr_t)callback);
}

bool q_pdfsearchmodel_is_signal_connected(void* self, void* signal) {
    return QPdfSearchModel_IsSignalConnected((QPdfSearchModel*)self, (QMetaMethod*)signal);
}

bool q_pdfsearchmodel_qbase_is_signal_connected(void* self, void* signal) {
    return QPdfSearchModel_QBaseIsSignalConnected((QPdfSearchModel*)self, (QMetaMethod*)signal);
}

void q_pdfsearchmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPdfSearchModel_OnIsSignalConnected((QPdfSearchModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_pdfsearchmodel_delete(void* self) {
    QPdfSearchModel_Delete((QPdfSearchModel*)(self));
}
