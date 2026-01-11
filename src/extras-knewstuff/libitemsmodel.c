#include "../extras-kcoreaddons/libkjob.hpp"
#include "libenginebase.hpp"
#include "libentry.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libitemsmodel.hpp"
#include "libitemsmodel.h"

KNSCore__ItemsModel* k_nscore__itemsmodel_new(void* engine) {
    return KNSCore__ItemsModel_new((KNSCore__EngineBase*)engine);
}

KNSCore__ItemsModel* k_nscore__itemsmodel_new2(void* engine, void* parent) {
    return KNSCore__ItemsModel_new2((KNSCore__EngineBase*)engine, (QObject*)parent);
}

const QMetaObject* k_nscore__itemsmodel_meta_object(void* self) {
    return KNSCore__ItemsModel_MetaObject((KNSCore__ItemsModel*)self);
}

void* k_nscore__itemsmodel_metacast(void* self, const char* param1) {
    return KNSCore__ItemsModel_Metacast((KNSCore__ItemsModel*)self, param1);
}

int32_t k_nscore__itemsmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNSCore__ItemsModel_Metacall((KNSCore__ItemsModel*)self, param1, param2, param3);
}

void k_nscore__itemsmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KNSCore__ItemsModel_OnMetacall((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

int32_t k_nscore__itemsmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNSCore__ItemsModel_QBaseMetacall((KNSCore__ItemsModel*)self, param1, param2, param3);
}

const char* k_nscore__itemsmodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_nscore__itemsmodel_row_count(void* self, void* parent) {
    return KNSCore__ItemsModel_RowCount((KNSCore__ItemsModel*)self, (QModelIndex*)parent);
}

void k_nscore__itemsmodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    KNSCore__ItemsModel_OnRowCount((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

int32_t k_nscore__itemsmodel_qbase_row_count(void* self, void* parent) {
    return KNSCore__ItemsModel_QBaseRowCount((KNSCore__ItemsModel*)self, (QModelIndex*)parent);
}

QVariant* k_nscore__itemsmodel_data(void* self, void* index, int role) {
    return KNSCore__ItemsModel_Data((KNSCore__ItemsModel*)self, (QModelIndex*)index, role);
}

void k_nscore__itemsmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    KNSCore__ItemsModel_OnData((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

QVariant* k_nscore__itemsmodel_qbase_data(void* self, void* index, int role) {
    return KNSCore__ItemsModel_QBaseData((KNSCore__ItemsModel*)self, (QModelIndex*)index, role);
}

int32_t k_nscore__itemsmodel_row(void* self, void* entry) {
    return KNSCore__ItemsModel_Row((KNSCore__ItemsModel*)self, (KNSCore__Entry*)entry);
}

void k_nscore__itemsmodel_add_entry(void* self, void* entry) {
    KNSCore__ItemsModel_AddEntry((KNSCore__ItemsModel*)self, (KNSCore__Entry*)entry);
}

void k_nscore__itemsmodel_remove_entry(void* self, void* entry) {
    KNSCore__ItemsModel_RemoveEntry((KNSCore__ItemsModel*)self, (KNSCore__Entry*)entry);
}

bool k_nscore__itemsmodel_has_preview_images(void* self) {
    return KNSCore__ItemsModel_HasPreviewImages((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_job_started(void* self, void* param1, const char* label) {
    KNSCore__ItemsModel_JobStarted((KNSCore__ItemsModel*)self, (KJob*)param1, qstring(label));
}

void k_nscore__itemsmodel_on_job_started(void* self, void (*callback)(void*, void*, const char*)) {
    KNSCore__ItemsModel_Connect_JobStarted((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_load_preview(void* self, void* entry, int32_t type) {
    KNSCore__ItemsModel_LoadPreview((KNSCore__ItemsModel*)self, (KNSCore__Entry*)entry, type);
}

void k_nscore__itemsmodel_on_load_preview(void* self, void (*callback)(void*, void*, int32_t)) {
    KNSCore__ItemsModel_Connect_LoadPreview((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_slot_entry_changed(void* self, void* entry) {
    KNSCore__ItemsModel_SlotEntryChanged((KNSCore__ItemsModel*)self, (KNSCore__Entry*)entry);
}

void k_nscore__itemsmodel_slot_entries_loaded(void* self, libqt_list entries) {
    KNSCore__ItemsModel_SlotEntriesLoaded((KNSCore__ItemsModel*)self, entries);
}

void k_nscore__itemsmodel_clear_entries(void* self) {
    KNSCore__ItemsModel_ClearEntries((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_slot_entry_preview_loaded(void* self, void* entry, int32_t type) {
    KNSCore__ItemsModel_SlotEntryPreviewLoaded((KNSCore__ItemsModel*)self, (KNSCore__Entry*)entry, type);
}

const char* k_nscore__itemsmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_nscore__itemsmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_nscore__itemsmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

QModelIndex* k_nscore__itemsmodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

void k_nscore__itemsmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)callback);
}

QModelIndex* k_nscore__itemsmodel_qbase_parent(void* self, void* child) {
    return QAbstractItemModel_QBaseParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

int32_t k_nscore__itemsmodel_column_count(void* self, void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void k_nscore__itemsmodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QAbstractItemModel_OnColumnCount((QAbstractItemModel*)self, (intptr_t)callback);
}

int32_t k_nscore__itemsmodel_qbase_column_count(void* self, void* parent) {
    return QAbstractItemModel_QBaseColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool k_nscore__itemsmodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

void k_nscore__itemsmodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_qbase_has_children(void* self, void* parent) {
    return QAbstractItemModel_QBaseHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

bool k_nscore__itemsmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_nscore__itemsmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_nscore__itemsmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_nscore__itemsmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_nscore__itemsmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_nscore__itemsmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_nscore__itemsmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_nscore__itemsmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_nscore__itemsmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_nscore__itemsmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_nscore__itemsmodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_nscore__itemsmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_nscore__itemsmodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_nscore__itemsmodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_nscore__itemsmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_nscore__itemsmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_nscore__itemsmodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_nscore__itemsmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_nscore__itemsmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_nscore__itemsmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_layout_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_nscore__itemsmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_nscore__itemsmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_nscore__itemsmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_nscore__itemsmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__itemsmodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_nscore__itemsmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_nscore__itemsmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_nscore__itemsmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_nscore__itemsmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_nscore__itemsmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_nscore__itemsmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_nscore__itemsmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_nscore__itemsmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_nscore__itemsmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_nscore__itemsmodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_nscore__itemsmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_nscore__itemsmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_nscore__itemsmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_nscore__itemsmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_nscore__itemsmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_nscore__itemsmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_nscore__itemsmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_nscore__itemsmodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_nscore__itemsmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_nscore__itemsmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_nscore__itemsmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_nscore__itemsmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_nscore__itemsmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__itemsmodel_dynamic_property_names");
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

QBindingStorage* k_nscore__itemsmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_nscore__itemsmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_nscore__itemsmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_nscore__itemsmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_nscore__itemsmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_nscore__itemsmodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_nscore__itemsmodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_nscore__itemsmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_nscore__itemsmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_nscore__itemsmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_nscore__itemsmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* k_nscore__itemsmodel_index(void* self, int row, int column, void* parent) {
    return KNSCore__ItemsModel_Index((KNSCore__ItemsModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_nscore__itemsmodel_qbase_index(void* self, int row, int column, void* parent) {
    return KNSCore__ItemsModel_QBaseIndex((KNSCore__ItemsModel*)self, row, column, (QModelIndex*)parent);
}

void k_nscore__itemsmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KNSCore__ItemsModel_OnIndex((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

QModelIndex* k_nscore__itemsmodel_sibling(void* self, int row, int column, void* idx) {
    return KNSCore__ItemsModel_Sibling((KNSCore__ItemsModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_nscore__itemsmodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return KNSCore__ItemsModel_QBaseSibling((KNSCore__ItemsModel*)self, row, column, (QModelIndex*)idx);
}

void k_nscore__itemsmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KNSCore__ItemsModel_OnSibling((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KNSCore__ItemsModel_DropMimeData((KNSCore__ItemsModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_nscore__itemsmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KNSCore__ItemsModel_QBaseDropMimeData((KNSCore__ItemsModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_nscore__itemsmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KNSCore__ItemsModel_OnDropMimeData((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

int32_t k_nscore__itemsmodel_flags(void* self, void* index) {
    return KNSCore__ItemsModel_Flags((KNSCore__ItemsModel*)self, (QModelIndex*)index);
}

int32_t k_nscore__itemsmodel_qbase_flags(void* self, void* index) {
    return KNSCore__ItemsModel_QBaseFlags((KNSCore__ItemsModel*)self, (QModelIndex*)index);
}

void k_nscore__itemsmodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    KNSCore__ItemsModel_OnFlags((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_set_data(void* self, void* index, void* value, int role) {
    return KNSCore__ItemsModel_SetData((KNSCore__ItemsModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_nscore__itemsmodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return KNSCore__ItemsModel_QBaseSetData((KNSCore__ItemsModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_nscore__itemsmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    KNSCore__ItemsModel_OnSetData((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

QVariant* k_nscore__itemsmodel_header_data(void* self, int section, int32_t orientation, int role) {
    return KNSCore__ItemsModel_HeaderData((KNSCore__ItemsModel*)self, section, orientation, role);
}

QVariant* k_nscore__itemsmodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return KNSCore__ItemsModel_QBaseHeaderData((KNSCore__ItemsModel*)self, section, orientation, role);
}

void k_nscore__itemsmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    KNSCore__ItemsModel_OnHeaderData((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KNSCore__ItemsModel_SetHeaderData((KNSCore__ItemsModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_nscore__itemsmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KNSCore__ItemsModel_QBaseSetHeaderData((KNSCore__ItemsModel*)self, section, orientation, (QVariant*)value, role);
}

void k_nscore__itemsmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    KNSCore__ItemsModel_OnSetHeaderData((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_nscore__itemsmodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KNSCore__ItemsModel_ItemData((KNSCore__ItemsModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_nscore__itemsmodel_qbase_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KNSCore__ItemsModel_QBaseItemData((KNSCore__ItemsModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_nscore__itemsmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    KNSCore__ItemsModel_OnItemData((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_nscore__itemsmodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_nscore__itemsmodel_set_item_data\n");
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
    bool _out = KNSCore__ItemsModel_SetItemData((KNSCore__ItemsModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool k_nscore__itemsmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_nscore__itemsmodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_nscore__itemsmodel_set_item_data\n");
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
    bool _out = KNSCore__ItemsModel_QBaseSetItemData((KNSCore__ItemsModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_nscore__itemsmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    KNSCore__ItemsModel_OnSetItemData((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_clear_item_data(void* self, void* index) {
    return KNSCore__ItemsModel_ClearItemData((KNSCore__ItemsModel*)self, (QModelIndex*)index);
}

bool k_nscore__itemsmodel_qbase_clear_item_data(void* self, void* index) {
    return KNSCore__ItemsModel_QBaseClearItemData((KNSCore__ItemsModel*)self, (QModelIndex*)index);
}

void k_nscore__itemsmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    KNSCore__ItemsModel_OnClearItemData((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

const char** k_nscore__itemsmodel_mime_types(void* self) {
    libqt_list _arr = KNSCore__ItemsModel_MimeTypes((KNSCore__ItemsModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__itemsmodel_mime_types");
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

const char** k_nscore__itemsmodel_qbase_mime_types(void* self) {
    libqt_list _arr = KNSCore__ItemsModel_QBaseMimeTypes((KNSCore__ItemsModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__itemsmodel_mime_types");
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

void k_nscore__itemsmodel_on_mime_types(void* self, const char** (*callback)()) {
    KNSCore__ItemsModel_OnMimeTypes((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

QMimeData* k_nscore__itemsmodel_mime_data(void* self, libqt_list indexes) {
    return KNSCore__ItemsModel_MimeData((KNSCore__ItemsModel*)self, indexes);
}

QMimeData* k_nscore__itemsmodel_qbase_mime_data(void* self, libqt_list indexes) {
    return KNSCore__ItemsModel_QBaseMimeData((KNSCore__ItemsModel*)self, indexes);
}

void k_nscore__itemsmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    KNSCore__ItemsModel_OnMimeData((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KNSCore__ItemsModel_CanDropMimeData((KNSCore__ItemsModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_nscore__itemsmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KNSCore__ItemsModel_QBaseCanDropMimeData((KNSCore__ItemsModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_nscore__itemsmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KNSCore__ItemsModel_OnCanDropMimeData((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

int32_t k_nscore__itemsmodel_supported_drop_actions(void* self) {
    return KNSCore__ItemsModel_SupportedDropActions((KNSCore__ItemsModel*)self);
}

int32_t k_nscore__itemsmodel_qbase_supported_drop_actions(void* self) {
    return KNSCore__ItemsModel_QBaseSupportedDropActions((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KNSCore__ItemsModel_OnSupportedDropActions((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

int32_t k_nscore__itemsmodel_supported_drag_actions(void* self) {
    return KNSCore__ItemsModel_SupportedDragActions((KNSCore__ItemsModel*)self);
}

int32_t k_nscore__itemsmodel_qbase_supported_drag_actions(void* self) {
    return KNSCore__ItemsModel_QBaseSupportedDragActions((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    KNSCore__ItemsModel_OnSupportedDragActions((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_insert_rows(void* self, int row, int count, void* parent) {
    return KNSCore__ItemsModel_InsertRows((KNSCore__ItemsModel*)self, row, count, (QModelIndex*)parent);
}

bool k_nscore__itemsmodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return KNSCore__ItemsModel_QBaseInsertRows((KNSCore__ItemsModel*)self, row, count, (QModelIndex*)parent);
}

void k_nscore__itemsmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KNSCore__ItemsModel_OnInsertRows((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_insert_columns(void* self, int column, int count, void* parent) {
    return KNSCore__ItemsModel_InsertColumns((KNSCore__ItemsModel*)self, column, count, (QModelIndex*)parent);
}

bool k_nscore__itemsmodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return KNSCore__ItemsModel_QBaseInsertColumns((KNSCore__ItemsModel*)self, column, count, (QModelIndex*)parent);
}

void k_nscore__itemsmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KNSCore__ItemsModel_OnInsertColumns((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_remove_rows(void* self, int row, int count, void* parent) {
    return KNSCore__ItemsModel_RemoveRows((KNSCore__ItemsModel*)self, row, count, (QModelIndex*)parent);
}

bool k_nscore__itemsmodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return KNSCore__ItemsModel_QBaseRemoveRows((KNSCore__ItemsModel*)self, row, count, (QModelIndex*)parent);
}

void k_nscore__itemsmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KNSCore__ItemsModel_OnRemoveRows((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_remove_columns(void* self, int column, int count, void* parent) {
    return KNSCore__ItemsModel_RemoveColumns((KNSCore__ItemsModel*)self, column, count, (QModelIndex*)parent);
}

bool k_nscore__itemsmodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return KNSCore__ItemsModel_QBaseRemoveColumns((KNSCore__ItemsModel*)self, column, count, (QModelIndex*)parent);
}

void k_nscore__itemsmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KNSCore__ItemsModel_OnRemoveColumns((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KNSCore__ItemsModel_MoveRows((KNSCore__ItemsModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_nscore__itemsmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KNSCore__ItemsModel_QBaseMoveRows((KNSCore__ItemsModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_nscore__itemsmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KNSCore__ItemsModel_OnMoveRows((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KNSCore__ItemsModel_MoveColumns((KNSCore__ItemsModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_nscore__itemsmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KNSCore__ItemsModel_QBaseMoveColumns((KNSCore__ItemsModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_nscore__itemsmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KNSCore__ItemsModel_OnMoveColumns((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_fetch_more(void* self, void* parent) {
    KNSCore__ItemsModel_FetchMore((KNSCore__ItemsModel*)self, (QModelIndex*)parent);
}

void k_nscore__itemsmodel_qbase_fetch_more(void* self, void* parent) {
    KNSCore__ItemsModel_QBaseFetchMore((KNSCore__ItemsModel*)self, (QModelIndex*)parent);
}

void k_nscore__itemsmodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    KNSCore__ItemsModel_OnFetchMore((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_can_fetch_more(void* self, void* parent) {
    return KNSCore__ItemsModel_CanFetchMore((KNSCore__ItemsModel*)self, (QModelIndex*)parent);
}

bool k_nscore__itemsmodel_qbase_can_fetch_more(void* self, void* parent) {
    return KNSCore__ItemsModel_QBaseCanFetchMore((KNSCore__ItemsModel*)self, (QModelIndex*)parent);
}

void k_nscore__itemsmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    KNSCore__ItemsModel_OnCanFetchMore((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_sort(void* self, int column, int32_t order) {
    KNSCore__ItemsModel_Sort((KNSCore__ItemsModel*)self, column, order);
}

void k_nscore__itemsmodel_qbase_sort(void* self, int column, int32_t order) {
    KNSCore__ItemsModel_QBaseSort((KNSCore__ItemsModel*)self, column, order);
}

void k_nscore__itemsmodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KNSCore__ItemsModel_OnSort((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

QModelIndex* k_nscore__itemsmodel_buddy(void* self, void* index) {
    return KNSCore__ItemsModel_Buddy((KNSCore__ItemsModel*)self, (QModelIndex*)index);
}

QModelIndex* k_nscore__itemsmodel_qbase_buddy(void* self, void* index) {
    return KNSCore__ItemsModel_QBaseBuddy((KNSCore__ItemsModel*)self, (QModelIndex*)index);
}

void k_nscore__itemsmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    KNSCore__ItemsModel_OnBuddy((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_nscore__itemsmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KNSCore__ItemsModel_Match((KNSCore__ItemsModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_nscore__itemsmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KNSCore__ItemsModel_QBaseMatch((KNSCore__ItemsModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_nscore__itemsmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    KNSCore__ItemsModel_OnMatch((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

QSize* k_nscore__itemsmodel_span(void* self, void* index) {
    return KNSCore__ItemsModel_Span((KNSCore__ItemsModel*)self, (QModelIndex*)index);
}

QSize* k_nscore__itemsmodel_qbase_span(void* self, void* index) {
    return KNSCore__ItemsModel_QBaseSpan((KNSCore__ItemsModel*)self, (QModelIndex*)index);
}

void k_nscore__itemsmodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    KNSCore__ItemsModel_OnSpan((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_nscore__itemsmodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KNSCore__ItemsModel_RoleNames((KNSCore__ItemsModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_nscore__itemsmodel_role_names");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_nscore__itemsmodel_role_names");
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

libqt_map /* of int to char* */ k_nscore__itemsmodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KNSCore__ItemsModel_QBaseRoleNames((KNSCore__ItemsModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_nscore__itemsmodel_role_names");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_nscore__itemsmodel_role_names");
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

void k_nscore__itemsmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    KNSCore__ItemsModel_OnRoleNames((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    KNSCore__ItemsModel_MultiData((KNSCore__ItemsModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_nscore__itemsmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    KNSCore__ItemsModel_QBaseMultiData((KNSCore__ItemsModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_nscore__itemsmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    KNSCore__ItemsModel_OnMultiData((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_submit(void* self) {
    return KNSCore__ItemsModel_Submit((KNSCore__ItemsModel*)self);
}

bool k_nscore__itemsmodel_qbase_submit(void* self) {
    return KNSCore__ItemsModel_QBaseSubmit((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_on_submit(void* self, bool (*callback)()) {
    KNSCore__ItemsModel_OnSubmit((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_revert(void* self) {
    KNSCore__ItemsModel_Revert((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_qbase_revert(void* self) {
    KNSCore__ItemsModel_QBaseRevert((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_on_revert(void* self, void (*callback)()) {
    KNSCore__ItemsModel_OnRevert((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_reset_internal_data(void* self) {
    KNSCore__ItemsModel_ResetInternalData((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_qbase_reset_internal_data(void* self) {
    KNSCore__ItemsModel_QBaseResetInternalData((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_on_reset_internal_data(void* self, void (*callback)()) {
    KNSCore__ItemsModel_OnResetInternalData((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_event(void* self, void* event) {
    return KNSCore__ItemsModel_Event((KNSCore__ItemsModel*)self, (QEvent*)event);
}

bool k_nscore__itemsmodel_qbase_event(void* self, void* event) {
    return KNSCore__ItemsModel_QBaseEvent((KNSCore__ItemsModel*)self, (QEvent*)event);
}

void k_nscore__itemsmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KNSCore__ItemsModel_OnEvent((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_event_filter(void* self, void* watched, void* event) {
    return KNSCore__ItemsModel_EventFilter((KNSCore__ItemsModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_nscore__itemsmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KNSCore__ItemsModel_QBaseEventFilter((KNSCore__ItemsModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_nscore__itemsmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KNSCore__ItemsModel_OnEventFilter((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_timer_event(void* self, void* event) {
    KNSCore__ItemsModel_TimerEvent((KNSCore__ItemsModel*)self, (QTimerEvent*)event);
}

void k_nscore__itemsmodel_qbase_timer_event(void* self, void* event) {
    KNSCore__ItemsModel_QBaseTimerEvent((KNSCore__ItemsModel*)self, (QTimerEvent*)event);
}

void k_nscore__itemsmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KNSCore__ItemsModel_OnTimerEvent((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_child_event(void* self, void* event) {
    KNSCore__ItemsModel_ChildEvent((KNSCore__ItemsModel*)self, (QChildEvent*)event);
}

void k_nscore__itemsmodel_qbase_child_event(void* self, void* event) {
    KNSCore__ItemsModel_QBaseChildEvent((KNSCore__ItemsModel*)self, (QChildEvent*)event);
}

void k_nscore__itemsmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KNSCore__ItemsModel_OnChildEvent((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_custom_event(void* self, void* event) {
    KNSCore__ItemsModel_CustomEvent((KNSCore__ItemsModel*)self, (QEvent*)event);
}

void k_nscore__itemsmodel_qbase_custom_event(void* self, void* event) {
    KNSCore__ItemsModel_QBaseCustomEvent((KNSCore__ItemsModel*)self, (QEvent*)event);
}

void k_nscore__itemsmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KNSCore__ItemsModel_OnCustomEvent((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_connect_notify(void* self, void* signal) {
    KNSCore__ItemsModel_ConnectNotify((KNSCore__ItemsModel*)self, (QMetaMethod*)signal);
}

void k_nscore__itemsmodel_qbase_connect_notify(void* self, void* signal) {
    KNSCore__ItemsModel_QBaseConnectNotify((KNSCore__ItemsModel*)self, (QMetaMethod*)signal);
}

void k_nscore__itemsmodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KNSCore__ItemsModel_OnConnectNotify((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_disconnect_notify(void* self, void* signal) {
    KNSCore__ItemsModel_DisconnectNotify((KNSCore__ItemsModel*)self, (QMetaMethod*)signal);
}

void k_nscore__itemsmodel_qbase_disconnect_notify(void* self, void* signal) {
    KNSCore__ItemsModel_QBaseDisconnectNotify((KNSCore__ItemsModel*)self, (QMetaMethod*)signal);
}

void k_nscore__itemsmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KNSCore__ItemsModel_OnDisconnectNotify((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

QModelIndex* k_nscore__itemsmodel_create_index(void* self, int row, int column) {
    return KNSCore__ItemsModel_CreateIndex((KNSCore__ItemsModel*)self, row, column);
}

QModelIndex* k_nscore__itemsmodel_qbase_create_index(void* self, int row, int column) {
    return KNSCore__ItemsModel_QBaseCreateIndex((KNSCore__ItemsModel*)self, row, column);
}

void k_nscore__itemsmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    KNSCore__ItemsModel_OnCreateIndex((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_encode_data(void* self, libqt_list indexes, void* stream) {
    KNSCore__ItemsModel_EncodeData((KNSCore__ItemsModel*)self, indexes, (QDataStream*)stream);
}

void k_nscore__itemsmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    KNSCore__ItemsModel_QBaseEncodeData((KNSCore__ItemsModel*)self, indexes, (QDataStream*)stream);
}

void k_nscore__itemsmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    KNSCore__ItemsModel_OnEncodeData((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KNSCore__ItemsModel_DecodeData((KNSCore__ItemsModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_nscore__itemsmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KNSCore__ItemsModel_QBaseDecodeData((KNSCore__ItemsModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_nscore__itemsmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    KNSCore__ItemsModel_OnDecodeData((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    KNSCore__ItemsModel_BeginInsertRows((KNSCore__ItemsModel*)self, (QModelIndex*)parent, first, last);
}

void k_nscore__itemsmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    KNSCore__ItemsModel_QBaseBeginInsertRows((KNSCore__ItemsModel*)self, (QModelIndex*)parent, first, last);
}

void k_nscore__itemsmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KNSCore__ItemsModel_OnBeginInsertRows((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_end_insert_rows(void* self) {
    KNSCore__ItemsModel_EndInsertRows((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_qbase_end_insert_rows(void* self) {
    KNSCore__ItemsModel_QBaseEndInsertRows((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_on_end_insert_rows(void* self, void (*callback)()) {
    KNSCore__ItemsModel_OnEndInsertRows((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    KNSCore__ItemsModel_BeginRemoveRows((KNSCore__ItemsModel*)self, (QModelIndex*)parent, first, last);
}

void k_nscore__itemsmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    KNSCore__ItemsModel_QBaseBeginRemoveRows((KNSCore__ItemsModel*)self, (QModelIndex*)parent, first, last);
}

void k_nscore__itemsmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KNSCore__ItemsModel_OnBeginRemoveRows((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_end_remove_rows(void* self) {
    KNSCore__ItemsModel_EndRemoveRows((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_qbase_end_remove_rows(void* self) {
    KNSCore__ItemsModel_QBaseEndRemoveRows((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_on_end_remove_rows(void* self, void (*callback)()) {
    KNSCore__ItemsModel_OnEndRemoveRows((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KNSCore__ItemsModel_BeginMoveRows((KNSCore__ItemsModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_nscore__itemsmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KNSCore__ItemsModel_QBaseBeginMoveRows((KNSCore__ItemsModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_nscore__itemsmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KNSCore__ItemsModel_OnBeginMoveRows((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_end_move_rows(void* self) {
    KNSCore__ItemsModel_EndMoveRows((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_qbase_end_move_rows(void* self) {
    KNSCore__ItemsModel_QBaseEndMoveRows((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_on_end_move_rows(void* self, void (*callback)()) {
    KNSCore__ItemsModel_OnEndMoveRows((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    KNSCore__ItemsModel_BeginInsertColumns((KNSCore__ItemsModel*)self, (QModelIndex*)parent, first, last);
}

void k_nscore__itemsmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    KNSCore__ItemsModel_QBaseBeginInsertColumns((KNSCore__ItemsModel*)self, (QModelIndex*)parent, first, last);
}

void k_nscore__itemsmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KNSCore__ItemsModel_OnBeginInsertColumns((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_end_insert_columns(void* self) {
    KNSCore__ItemsModel_EndInsertColumns((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_qbase_end_insert_columns(void* self) {
    KNSCore__ItemsModel_QBaseEndInsertColumns((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_on_end_insert_columns(void* self, void (*callback)()) {
    KNSCore__ItemsModel_OnEndInsertColumns((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    KNSCore__ItemsModel_BeginRemoveColumns((KNSCore__ItemsModel*)self, (QModelIndex*)parent, first, last);
}

void k_nscore__itemsmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    KNSCore__ItemsModel_QBaseBeginRemoveColumns((KNSCore__ItemsModel*)self, (QModelIndex*)parent, first, last);
}

void k_nscore__itemsmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KNSCore__ItemsModel_OnBeginRemoveColumns((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_end_remove_columns(void* self) {
    KNSCore__ItemsModel_EndRemoveColumns((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_qbase_end_remove_columns(void* self) {
    KNSCore__ItemsModel_QBaseEndRemoveColumns((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_on_end_remove_columns(void* self, void (*callback)()) {
    KNSCore__ItemsModel_OnEndRemoveColumns((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KNSCore__ItemsModel_BeginMoveColumns((KNSCore__ItemsModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_nscore__itemsmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KNSCore__ItemsModel_QBaseBeginMoveColumns((KNSCore__ItemsModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_nscore__itemsmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KNSCore__ItemsModel_OnBeginMoveColumns((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_end_move_columns(void* self) {
    KNSCore__ItemsModel_EndMoveColumns((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_qbase_end_move_columns(void* self) {
    KNSCore__ItemsModel_QBaseEndMoveColumns((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_on_end_move_columns(void* self, void (*callback)()) {
    KNSCore__ItemsModel_OnEndMoveColumns((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_begin_reset_model(void* self) {
    KNSCore__ItemsModel_BeginResetModel((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_qbase_begin_reset_model(void* self) {
    KNSCore__ItemsModel_QBaseBeginResetModel((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_on_begin_reset_model(void* self, void (*callback)()) {
    KNSCore__ItemsModel_OnBeginResetModel((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_end_reset_model(void* self) {
    KNSCore__ItemsModel_EndResetModel((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_qbase_end_reset_model(void* self) {
    KNSCore__ItemsModel_QBaseEndResetModel((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_on_end_reset_model(void* self, void (*callback)()) {
    KNSCore__ItemsModel_OnEndResetModel((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_change_persistent_index(void* self, void* from, void* to) {
    KNSCore__ItemsModel_ChangePersistentIndex((KNSCore__ItemsModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_nscore__itemsmodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    KNSCore__ItemsModel_QBaseChangePersistentIndex((KNSCore__ItemsModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_nscore__itemsmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    KNSCore__ItemsModel_OnChangePersistentIndex((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KNSCore__ItemsModel_ChangePersistentIndexList((KNSCore__ItemsModel*)self, from, to);
}

void k_nscore__itemsmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KNSCore__ItemsModel_QBaseChangePersistentIndexList((KNSCore__ItemsModel*)self, from, to);
}

void k_nscore__itemsmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    KNSCore__ItemsModel_OnChangePersistentIndexList((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_nscore__itemsmodel_persistent_index_list(void* self) {
    libqt_list _arr = KNSCore__ItemsModel_PersistentIndexList((KNSCore__ItemsModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_nscore__itemsmodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = KNSCore__ItemsModel_QBasePersistentIndexList((KNSCore__ItemsModel*)self);
    return _arr;
}

void k_nscore__itemsmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    KNSCore__ItemsModel_OnPersistentIndexList((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

QObject* k_nscore__itemsmodel_sender(void* self) {
    return KNSCore__ItemsModel_Sender((KNSCore__ItemsModel*)self);
}

QObject* k_nscore__itemsmodel_qbase_sender(void* self) {
    return KNSCore__ItemsModel_QBaseSender((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_on_sender(void* self, QObject* (*callback)()) {
    KNSCore__ItemsModel_OnSender((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

int32_t k_nscore__itemsmodel_sender_signal_index(void* self) {
    return KNSCore__ItemsModel_SenderSignalIndex((KNSCore__ItemsModel*)self);
}

int32_t k_nscore__itemsmodel_qbase_sender_signal_index(void* self) {
    return KNSCore__ItemsModel_QBaseSenderSignalIndex((KNSCore__ItemsModel*)self);
}

void k_nscore__itemsmodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KNSCore__ItemsModel_OnSenderSignalIndex((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

int32_t k_nscore__itemsmodel_receivers(void* self, const char* signal) {
    return KNSCore__ItemsModel_Receivers((KNSCore__ItemsModel*)self, signal);
}

int32_t k_nscore__itemsmodel_qbase_receivers(void* self, const char* signal) {
    return KNSCore__ItemsModel_QBaseReceivers((KNSCore__ItemsModel*)self, signal);
}

void k_nscore__itemsmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KNSCore__ItemsModel_OnReceivers((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

bool k_nscore__itemsmodel_is_signal_connected(void* self, void* signal) {
    return KNSCore__ItemsModel_IsSignalConnected((KNSCore__ItemsModel*)self, (QMetaMethod*)signal);
}

bool k_nscore__itemsmodel_qbase_is_signal_connected(void* self, void* signal) {
    return KNSCore__ItemsModel_QBaseIsSignalConnected((KNSCore__ItemsModel*)self, (QMetaMethod*)signal);
}

void k_nscore__itemsmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KNSCore__ItemsModel_OnIsSignalConnected((KNSCore__ItemsModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_nscore__itemsmodel_delete(void* self) {
    KNSCore__ItemsModel_Delete((KNSCore__ItemsModel*)(self));
}
