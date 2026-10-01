#include "../libqcoreevent.hpp"
#include "../libqitemselectionmodel.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqobject.hpp"
#include "libkbreadcrumbselectionmodel.hpp"
#include "libkbreadcrumbselectionmodel.h"

KBreadcrumbSelectionModel* k_breadcrumbselectionmodel_new(void* selectionModel) {
    return KBreadcrumbSelectionModel_New((QItemSelectionModel*)selectionModel);
}

KBreadcrumbSelectionModel* k_breadcrumbselectionmodel_new2(void* selectionModel, int32_t target) {
    return KBreadcrumbSelectionModel_New2((QItemSelectionModel*)selectionModel, target);
}

KBreadcrumbSelectionModel* k_breadcrumbselectionmodel_new3(void* selectionModel, void* parent) {
    return KBreadcrumbSelectionModel_New3((QItemSelectionModel*)selectionModel, (QObject*)parent);
}

KBreadcrumbSelectionModel* k_breadcrumbselectionmodel_new4(void* selectionModel, int32_t target, void* parent) {
    return KBreadcrumbSelectionModel_New4((QItemSelectionModel*)selectionModel, target, (QObject*)parent);
}

const QMetaObject* k_breadcrumbselectionmodel_meta_object(const void* self) {
    return KBreadcrumbSelectionModel_MetaObject((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    KBreadcrumbSelectionModel_OnMetaObject((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

const QMetaObject* k_breadcrumbselectionmodel_super_meta_object(const void* self) {
    return KBreadcrumbSelectionModel_SuperMetaObject((KBreadcrumbSelectionModel*)self);
}

void* k_breadcrumbselectionmodel_metacast(void* self, const char* param1) {
    return KBreadcrumbSelectionModel_Metacast((KBreadcrumbSelectionModel*)self, param1);
}

void k_breadcrumbselectionmodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KBreadcrumbSelectionModel_OnMetacast((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void* k_breadcrumbselectionmodel_super_metacast(void* self, const char* param1) {
    return KBreadcrumbSelectionModel_SuperMetacast((KBreadcrumbSelectionModel*)self, param1);
}

int32_t k_breadcrumbselectionmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBreadcrumbSelectionModel_Metacall((KBreadcrumbSelectionModel*)self, param1, param2, param3);
}

void k_breadcrumbselectionmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KBreadcrumbSelectionModel_OnMetacall((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

int32_t k_breadcrumbselectionmodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBreadcrumbSelectionModel_SuperMetacall((KBreadcrumbSelectionModel*)self, param1, param2, param3);
}

const char* k_breadcrumbselectionmodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_breadcrumbselectionmodel_is_actual_selection_included(const void* self) {
    return KBreadcrumbSelectionModel_IsActualSelectionIncluded((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_set_actual_selection_included(void* self, bool isActualSelectionIncluded) {
    KBreadcrumbSelectionModel_SetActualSelectionIncluded((KBreadcrumbSelectionModel*)self, isActualSelectionIncluded);
}

int32_t k_breadcrumbselectionmodel_breadcrumb_length(const void* self) {
    return KBreadcrumbSelectionModel_BreadcrumbLength((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_set_breadcrumb_length(void* self, int breadcrumbLength) {
    KBreadcrumbSelectionModel_SetBreadcrumbLength((KBreadcrumbSelectionModel*)self, breadcrumbLength);
}

void k_breadcrumbselectionmodel_select(void* self, const void* index, int32_t command) {
    KBreadcrumbSelectionModel_Select((KBreadcrumbSelectionModel*)self, (QModelIndex*)index, command);
}

void k_breadcrumbselectionmodel_on_select(void* self, void (*callback)(void*, const void*, int32_t)) {
    KBreadcrumbSelectionModel_OnSelect((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_super_select(void* self, const void* index, int32_t command) {
    KBreadcrumbSelectionModel_SuperSelect((KBreadcrumbSelectionModel*)self, (QModelIndex*)index, command);
}

void k_breadcrumbselectionmodel_select2(void* self, const void* selection, int32_t command) {
    KBreadcrumbSelectionModel_Select2((KBreadcrumbSelectionModel*)self, (QItemSelection*)selection, command);
}

void k_breadcrumbselectionmodel_on_select2(void* self, void (*callback)(void*, const void*, int32_t)) {
    KBreadcrumbSelectionModel_OnSelect2((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_super_select2(void* self, const void* selection, int32_t command) {
    KBreadcrumbSelectionModel_SuperSelect2((KBreadcrumbSelectionModel*)self, (QItemSelection*)selection, command);
}

const char* k_breadcrumbselectionmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_breadcrumbselectionmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QModelIndex* k_breadcrumbselectionmodel_current_index(const void* self) {
    return QItemSelectionModel_CurrentIndex((QItemSelectionModel*)self);
}

bool k_breadcrumbselectionmodel_is_selected(const void* self, const void* index) {
    return QItemSelectionModel_IsSelected((QItemSelectionModel*)self, (QModelIndex*)index);
}

bool k_breadcrumbselectionmodel_is_row_selected(const void* self, int row) {
    return QItemSelectionModel_IsRowSelected((QItemSelectionModel*)self, row);
}

bool k_breadcrumbselectionmodel_is_column_selected(const void* self, int column) {
    return QItemSelectionModel_IsColumnSelected((QItemSelectionModel*)self, column);
}

bool k_breadcrumbselectionmodel_row_intersects_selection(const void* self, int row) {
    return QItemSelectionModel_RowIntersectsSelection((QItemSelectionModel*)self, row);
}

bool k_breadcrumbselectionmodel_column_intersects_selection(const void* self, int column) {
    return QItemSelectionModel_ColumnIntersectsSelection((QItemSelectionModel*)self, column);
}

bool k_breadcrumbselectionmodel_has_selection(const void* self) {
    return QItemSelectionModel_HasSelection((QItemSelectionModel*)self);
}

libqt_list /* of QModelIndex* */ k_breadcrumbselectionmodel_selected_indexes(const void* self) {
    libqt_list _arr = QItemSelectionModel_SelectedIndexes((QItemSelectionModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_breadcrumbselectionmodel_selected_rows(const void* self) {
    libqt_list _arr = QItemSelectionModel_SelectedRows((QItemSelectionModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_breadcrumbselectionmodel_selected_columns(const void* self) {
    libqt_list _arr = QItemSelectionModel_SelectedColumns((QItemSelectionModel*)self);
    return _arr;
}

const QItemSelection* k_breadcrumbselectionmodel_selection(const void* self) {
    return QItemSelectionModel_Selection((QItemSelectionModel*)self);
}

const QAbstractItemModel* k_breadcrumbselectionmodel_model(const void* self) {
    return QItemSelectionModel_Model((QItemSelectionModel*)self);
}

QAbstractItemModel* k_breadcrumbselectionmodel_model2(void* self) {
    return QItemSelectionModel_Model2((QItemSelectionModel*)self);
}

void k_breadcrumbselectionmodel_set_model(void* self, void* model) {
    QItemSelectionModel_SetModel((QItemSelectionModel*)self, (QAbstractItemModel*)model);
}

void k_breadcrumbselectionmodel_clear_selection(void* self) {
    QItemSelectionModel_ClearSelection((QItemSelectionModel*)self);
}

void k_breadcrumbselectionmodel_selection_changed(void* self, const void* selected, const void* deselected) {
    QItemSelectionModel_SelectionChanged((QItemSelectionModel*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void k_breadcrumbselectionmodel_on_selection_changed(void* self, void (*callback)(void*, const void*, const void*)) {
    QItemSelectionModel_Connect_SelectionChanged((QItemSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_current_changed(void* self, const void* current, const void* previous) {
    QItemSelectionModel_CurrentChanged((QItemSelectionModel*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void k_breadcrumbselectionmodel_on_current_changed(void* self, void (*callback)(void*, const void*, const void*)) {
    QItemSelectionModel_Connect_CurrentChanged((QItemSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_current_row_changed(void* self, const void* current, const void* previous) {
    QItemSelectionModel_CurrentRowChanged((QItemSelectionModel*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void k_breadcrumbselectionmodel_on_current_row_changed(void* self, void (*callback)(void*, const void*, const void*)) {
    QItemSelectionModel_Connect_CurrentRowChanged((QItemSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_current_column_changed(void* self, const void* current, const void* previous) {
    QItemSelectionModel_CurrentColumnChanged((QItemSelectionModel*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void k_breadcrumbselectionmodel_on_current_column_changed(void* self, void (*callback)(void*, const void*, const void*)) {
    QItemSelectionModel_Connect_CurrentColumnChanged((QItemSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_model_changed(void* self, void* model) {
    QItemSelectionModel_ModelChanged((QItemSelectionModel*)self, (QAbstractItemModel*)model);
}

void k_breadcrumbselectionmodel_on_model_changed(void* self, void (*callback)(void*, void*)) {
    QItemSelectionModel_Connect_ModelChanged((QItemSelectionModel*)self, (intptr_t)callback);
}

bool k_breadcrumbselectionmodel_is_row_selected2(const void* self, int row, const void* parent) {
    return QItemSelectionModel_IsRowSelected2((QItemSelectionModel*)self, row, (QModelIndex*)parent);
}

bool k_breadcrumbselectionmodel_is_column_selected2(const void* self, int column, const void* parent) {
    return QItemSelectionModel_IsColumnSelected2((QItemSelectionModel*)self, column, (QModelIndex*)parent);
}

bool k_breadcrumbselectionmodel_row_intersects_selection2(const void* self, int row, const void* parent) {
    return QItemSelectionModel_RowIntersectsSelection2((QItemSelectionModel*)self, row, (QModelIndex*)parent);
}

bool k_breadcrumbselectionmodel_column_intersects_selection2(const void* self, int column, const void* parent) {
    return QItemSelectionModel_ColumnIntersectsSelection2((QItemSelectionModel*)self, column, (QModelIndex*)parent);
}

libqt_list /* of QModelIndex* */ k_breadcrumbselectionmodel_selected_rows1(const void* self, int column) {
    libqt_list _arr = QItemSelectionModel_SelectedRows1((QItemSelectionModel*)self, column);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_breadcrumbselectionmodel_selected_columns1(const void* self, int row) {
    libqt_list _arr = QItemSelectionModel_SelectedColumns1((QItemSelectionModel*)self, row);
    return _arr;
}

const char* k_breadcrumbselectionmodel_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_breadcrumbselectionmodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_breadcrumbselectionmodel_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_breadcrumbselectionmodel_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_breadcrumbselectionmodel_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_breadcrumbselectionmodel_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_breadcrumbselectionmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_breadcrumbselectionmodel_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_breadcrumbselectionmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_breadcrumbselectionmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_breadcrumbselectionmodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_breadcrumbselectionmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_breadcrumbselectionmodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_breadcrumbselectionmodel_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_breadcrumbselectionmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_breadcrumbselectionmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_breadcrumbselectionmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_breadcrumbselectionmodel_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_breadcrumbselectionmodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_breadcrumbselectionmodel_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_breadcrumbselectionmodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_breadcrumbselectionmodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_breadcrumbselectionmodel_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_breadcrumbselectionmodel_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_breadcrumbselectionmodel_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_breadcrumbselectionmodel_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_breadcrumbselectionmodel_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_breadcrumbselectionmodel_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_breadcrumbselectionmodel_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_breadcrumbselectionmodel_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_breadcrumbselectionmodel_dynamic_property_names\n");
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

QBindingStorage* k_breadcrumbselectionmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_breadcrumbselectionmodel_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_breadcrumbselectionmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_breadcrumbselectionmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_breadcrumbselectionmodel_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_breadcrumbselectionmodel_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_breadcrumbselectionmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_breadcrumbselectionmodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_breadcrumbselectionmodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_breadcrumbselectionmodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_breadcrumbselectionmodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_breadcrumbselectionmodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_breadcrumbselectionmodel_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_breadcrumbselectionmodel_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_breadcrumbselectionmodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_breadcrumbselectionmodel_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_breadcrumbselectionmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_breadcrumbselectionmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_set_current_index(void* self, const void* index, int32_t command) {
    KBreadcrumbSelectionModel_SetCurrentIndex((KBreadcrumbSelectionModel*)self, (QModelIndex*)index, command);
}

void k_breadcrumbselectionmodel_super_set_current_index(void* self, const void* index, int32_t command) {
    KBreadcrumbSelectionModel_SuperSetCurrentIndex((KBreadcrumbSelectionModel*)self, (QModelIndex*)index, command);
}

void k_breadcrumbselectionmodel_on_set_current_index(void* self, void (*callback)(void*, const void*, int32_t)) {
    KBreadcrumbSelectionModel_OnSetCurrentIndex((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_clear(void* self) {
    KBreadcrumbSelectionModel_Clear((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_super_clear(void* self) {
    KBreadcrumbSelectionModel_SuperClear((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_on_clear(void* self, void (*callback)(void*)) {
    KBreadcrumbSelectionModel_OnClear((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_reset(void* self) {
    KBreadcrumbSelectionModel_Reset((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_super_reset(void* self) {
    KBreadcrumbSelectionModel_SuperReset((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_on_reset(void* self, void (*callback)(void*)) {
    KBreadcrumbSelectionModel_OnReset((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_clear_current_index(void* self) {
    KBreadcrumbSelectionModel_ClearCurrentIndex((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_super_clear_current_index(void* self) {
    KBreadcrumbSelectionModel_SuperClearCurrentIndex((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_on_clear_current_index(void* self, void (*callback)(void*)) {
    KBreadcrumbSelectionModel_OnClearCurrentIndex((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

bool k_breadcrumbselectionmodel_event(void* self, void* event) {
    return KBreadcrumbSelectionModel_Event((KBreadcrumbSelectionModel*)self, (QEvent*)event);
}

bool k_breadcrumbselectionmodel_super_event(void* self, void* event) {
    return KBreadcrumbSelectionModel_SuperEvent((KBreadcrumbSelectionModel*)self, (QEvent*)event);
}

void k_breadcrumbselectionmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KBreadcrumbSelectionModel_OnEvent((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

bool k_breadcrumbselectionmodel_event_filter(void* self, void* watched, void* event) {
    return KBreadcrumbSelectionModel_EventFilter((KBreadcrumbSelectionModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_breadcrumbselectionmodel_super_event_filter(void* self, void* watched, void* event) {
    return KBreadcrumbSelectionModel_SuperEventFilter((KBreadcrumbSelectionModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_breadcrumbselectionmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KBreadcrumbSelectionModel_OnEventFilter((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_timer_event(void* self, void* event) {
    KBreadcrumbSelectionModel_TimerEvent((KBreadcrumbSelectionModel*)self, (QTimerEvent*)event);
}

void k_breadcrumbselectionmodel_super_timer_event(void* self, void* event) {
    KBreadcrumbSelectionModel_SuperTimerEvent((KBreadcrumbSelectionModel*)self, (QTimerEvent*)event);
}

void k_breadcrumbselectionmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KBreadcrumbSelectionModel_OnTimerEvent((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_child_event(void* self, void* event) {
    KBreadcrumbSelectionModel_ChildEvent((KBreadcrumbSelectionModel*)self, (QChildEvent*)event);
}

void k_breadcrumbselectionmodel_super_child_event(void* self, void* event) {
    KBreadcrumbSelectionModel_SuperChildEvent((KBreadcrumbSelectionModel*)self, (QChildEvent*)event);
}

void k_breadcrumbselectionmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KBreadcrumbSelectionModel_OnChildEvent((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_custom_event(void* self, void* event) {
    KBreadcrumbSelectionModel_CustomEvent((KBreadcrumbSelectionModel*)self, (QEvent*)event);
}

void k_breadcrumbselectionmodel_super_custom_event(void* self, void* event) {
    KBreadcrumbSelectionModel_SuperCustomEvent((KBreadcrumbSelectionModel*)self, (QEvent*)event);
}

void k_breadcrumbselectionmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KBreadcrumbSelectionModel_OnCustomEvent((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_connect_notify(void* self, const void* signal) {
    KBreadcrumbSelectionModel_ConnectNotify((KBreadcrumbSelectionModel*)self, (QMetaMethod*)signal);
}

void k_breadcrumbselectionmodel_super_connect_notify(void* self, const void* signal) {
    KBreadcrumbSelectionModel_SuperConnectNotify((KBreadcrumbSelectionModel*)self, (QMetaMethod*)signal);
}

void k_breadcrumbselectionmodel_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    KBreadcrumbSelectionModel_OnConnectNotify((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_disconnect_notify(void* self, const void* signal) {
    KBreadcrumbSelectionModel_DisconnectNotify((KBreadcrumbSelectionModel*)self, (QMetaMethod*)signal);
}

void k_breadcrumbselectionmodel_super_disconnect_notify(void* self, const void* signal) {
    KBreadcrumbSelectionModel_SuperDisconnectNotify((KBreadcrumbSelectionModel*)self, (QMetaMethod*)signal);
}

void k_breadcrumbselectionmodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    KBreadcrumbSelectionModel_OnDisconnectNotify((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_emit_selection_changed(void* self, const void* newSelection, const void* oldSelection) {
    KBreadcrumbSelectionModel_EmitSelectionChanged((KBreadcrumbSelectionModel*)self, (QItemSelection*)newSelection, (QItemSelection*)oldSelection);
}

QObject* k_breadcrumbselectionmodel_sender(const void* self) {
    return KBreadcrumbSelectionModel_Sender((KBreadcrumbSelectionModel*)self);
}

int32_t k_breadcrumbselectionmodel_sender_signal_index(const void* self) {
    return KBreadcrumbSelectionModel_SenderSignalIndex((KBreadcrumbSelectionModel*)self);
}

int32_t k_breadcrumbselectionmodel_receivers(const void* self, const char* signal) {
    return KBreadcrumbSelectionModel_Receivers((KBreadcrumbSelectionModel*)self, signal);
}

bool k_breadcrumbselectionmodel_is_signal_connected(const void* self, const void* signal) {
    return KBreadcrumbSelectionModel_IsSignalConnected((KBreadcrumbSelectionModel*)self, (QMetaMethod*)signal);
}

void k_breadcrumbselectionmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_delete(void* self) {
    KBreadcrumbSelectionModel_Delete((KBreadcrumbSelectionModel*)(self));
}
