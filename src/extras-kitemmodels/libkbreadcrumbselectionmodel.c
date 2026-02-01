#include "../libqcoreevent.hpp"
#include "../libqitemselectionmodel.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqobject.hpp"
#include "libkbreadcrumbselectionmodel.hpp"
#include "libkbreadcrumbselectionmodel.h"

KBreadcrumbSelectionModel* k_breadcrumbselectionmodel_new(void* selectionModel) {
    return KBreadcrumbSelectionModel_new((QItemSelectionModel*)selectionModel);
}

KBreadcrumbSelectionModel* k_breadcrumbselectionmodel_new2(void* selectionModel, int32_t target) {
    return KBreadcrumbSelectionModel_new2((QItemSelectionModel*)selectionModel, target);
}

KBreadcrumbSelectionModel* k_breadcrumbselectionmodel_new3(void* selectionModel, void* parent) {
    return KBreadcrumbSelectionModel_new3((QItemSelectionModel*)selectionModel, (QObject*)parent);
}

KBreadcrumbSelectionModel* k_breadcrumbselectionmodel_new4(void* selectionModel, int32_t target, void* parent) {
    return KBreadcrumbSelectionModel_new4((QItemSelectionModel*)selectionModel, target, (QObject*)parent);
}

const QMetaObject* k_breadcrumbselectionmodel_meta_object(void* self) {
    return KBreadcrumbSelectionModel_MetaObject((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KBreadcrumbSelectionModel_OnMetaObject((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

const QMetaObject* k_breadcrumbselectionmodel_qbase_meta_object(void* self) {
    return KBreadcrumbSelectionModel_QBaseMetaObject((KBreadcrumbSelectionModel*)self);
}

void* k_breadcrumbselectionmodel_metacast(void* self, const char* param1) {
    return KBreadcrumbSelectionModel_Metacast((KBreadcrumbSelectionModel*)self, param1);
}

void k_breadcrumbselectionmodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KBreadcrumbSelectionModel_OnMetacast((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void* k_breadcrumbselectionmodel_qbase_metacast(void* self, const char* param1) {
    return KBreadcrumbSelectionModel_QBaseMetacast((KBreadcrumbSelectionModel*)self, param1);
}

int32_t k_breadcrumbselectionmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBreadcrumbSelectionModel_Metacall((KBreadcrumbSelectionModel*)self, param1, param2, param3);
}

void k_breadcrumbselectionmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KBreadcrumbSelectionModel_OnMetacall((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

int32_t k_breadcrumbselectionmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBreadcrumbSelectionModel_QBaseMetacall((KBreadcrumbSelectionModel*)self, param1, param2, param3);
}

const char* k_breadcrumbselectionmodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_breadcrumbselectionmodel_is_actual_selection_included(void* self) {
    return KBreadcrumbSelectionModel_IsActualSelectionIncluded((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_set_actual_selection_included(void* self, bool isActualSelectionIncluded) {
    KBreadcrumbSelectionModel_SetActualSelectionIncluded((KBreadcrumbSelectionModel*)self, isActualSelectionIncluded);
}

int32_t k_breadcrumbselectionmodel_breadcrumb_length(void* self) {
    return KBreadcrumbSelectionModel_BreadcrumbLength((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_set_breadcrumb_length(void* self, int breadcrumbLength) {
    KBreadcrumbSelectionModel_SetBreadcrumbLength((KBreadcrumbSelectionModel*)self, breadcrumbLength);
}

void k_breadcrumbselectionmodel_select(void* self, void* index, int32_t command) {
    KBreadcrumbSelectionModel_Select((KBreadcrumbSelectionModel*)self, (QModelIndex*)index, command);
}

void k_breadcrumbselectionmodel_on_select(void* self, void (*callback)(void*, void*, int32_t)) {
    KBreadcrumbSelectionModel_OnSelect((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_qbase_select(void* self, void* index, int32_t command) {
    KBreadcrumbSelectionModel_QBaseSelect((KBreadcrumbSelectionModel*)self, (QModelIndex*)index, command);
}

void k_breadcrumbselectionmodel_select2(void* self, void* selection, int32_t command) {
    KBreadcrumbSelectionModel_Select2((KBreadcrumbSelectionModel*)self, (QItemSelection*)selection, command);
}

void k_breadcrumbselectionmodel_on_select2(void* self, void (*callback)(void*, void*, int32_t)) {
    KBreadcrumbSelectionModel_OnSelect2((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_qbase_select2(void* self, void* selection, int32_t command) {
    KBreadcrumbSelectionModel_QBaseSelect2((KBreadcrumbSelectionModel*)self, (QItemSelection*)selection, command);
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

QModelIndex* k_breadcrumbselectionmodel_current_index(void* self) {
    return QItemSelectionModel_CurrentIndex((QItemSelectionModel*)self);
}

bool k_breadcrumbselectionmodel_is_selected(void* self, void* index) {
    return QItemSelectionModel_IsSelected((QItemSelectionModel*)self, (QModelIndex*)index);
}

bool k_breadcrumbselectionmodel_is_row_selected(void* self, int row) {
    return QItemSelectionModel_IsRowSelected((QItemSelectionModel*)self, row);
}

bool k_breadcrumbselectionmodel_is_column_selected(void* self, int column) {
    return QItemSelectionModel_IsColumnSelected((QItemSelectionModel*)self, column);
}

bool k_breadcrumbselectionmodel_row_intersects_selection(void* self, int row) {
    return QItemSelectionModel_RowIntersectsSelection((QItemSelectionModel*)self, row);
}

bool k_breadcrumbselectionmodel_column_intersects_selection(void* self, int column) {
    return QItemSelectionModel_ColumnIntersectsSelection((QItemSelectionModel*)self, column);
}

bool k_breadcrumbselectionmodel_has_selection(void* self) {
    return QItemSelectionModel_HasSelection((QItemSelectionModel*)self);
}

libqt_list /* of QModelIndex* */ k_breadcrumbselectionmodel_selected_indexes(void* self) {
    libqt_list _arr = QItemSelectionModel_SelectedIndexes((QItemSelectionModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_breadcrumbselectionmodel_selected_rows(void* self) {
    libqt_list _arr = QItemSelectionModel_SelectedRows((QItemSelectionModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_breadcrumbselectionmodel_selected_columns(void* self) {
    libqt_list _arr = QItemSelectionModel_SelectedColumns((QItemSelectionModel*)self);
    return _arr;
}

const QItemSelection* k_breadcrumbselectionmodel_selection(void* self) {
    return QItemSelectionModel_Selection((QItemSelectionModel*)self);
}

const QAbstractItemModel* k_breadcrumbselectionmodel_model(void* self) {
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

void k_breadcrumbselectionmodel_selection_changed(void* self, void* selected, void* deselected) {
    QItemSelectionModel_SelectionChanged((QItemSelectionModel*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void k_breadcrumbselectionmodel_on_selection_changed(void* self, void (*callback)(void*, void*, void*)) {
    QItemSelectionModel_Connect_SelectionChanged((QItemSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_current_changed(void* self, void* current, void* previous) {
    QItemSelectionModel_CurrentChanged((QItemSelectionModel*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void k_breadcrumbselectionmodel_on_current_changed(void* self, void (*callback)(void*, void*, void*)) {
    QItemSelectionModel_Connect_CurrentChanged((QItemSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_current_row_changed(void* self, void* current, void* previous) {
    QItemSelectionModel_CurrentRowChanged((QItemSelectionModel*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void k_breadcrumbselectionmodel_on_current_row_changed(void* self, void (*callback)(void*, void*, void*)) {
    QItemSelectionModel_Connect_CurrentRowChanged((QItemSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_current_column_changed(void* self, void* current, void* previous) {
    QItemSelectionModel_CurrentColumnChanged((QItemSelectionModel*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void k_breadcrumbselectionmodel_on_current_column_changed(void* self, void (*callback)(void*, void*, void*)) {
    QItemSelectionModel_Connect_CurrentColumnChanged((QItemSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_model_changed(void* self, void* model) {
    QItemSelectionModel_ModelChanged((QItemSelectionModel*)self, (QAbstractItemModel*)model);
}

void k_breadcrumbselectionmodel_on_model_changed(void* self, void (*callback)(void*, void*)) {
    QItemSelectionModel_Connect_ModelChanged((QItemSelectionModel*)self, (intptr_t)callback);
}

bool k_breadcrumbselectionmodel_is_row_selected2(void* self, int row, void* parent) {
    return QItemSelectionModel_IsRowSelected2((QItemSelectionModel*)self, row, (QModelIndex*)parent);
}

bool k_breadcrumbselectionmodel_is_column_selected2(void* self, int column, void* parent) {
    return QItemSelectionModel_IsColumnSelected2((QItemSelectionModel*)self, column, (QModelIndex*)parent);
}

bool k_breadcrumbselectionmodel_row_intersects_selection2(void* self, int row, void* parent) {
    return QItemSelectionModel_RowIntersectsSelection2((QItemSelectionModel*)self, row, (QModelIndex*)parent);
}

bool k_breadcrumbselectionmodel_column_intersects_selection2(void* self, int column, void* parent) {
    return QItemSelectionModel_ColumnIntersectsSelection2((QItemSelectionModel*)self, column, (QModelIndex*)parent);
}

libqt_list /* of QModelIndex* */ k_breadcrumbselectionmodel_selected_rows1(void* self, int column) {
    libqt_list _arr = QItemSelectionModel_SelectedRows1((QItemSelectionModel*)self, column);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_breadcrumbselectionmodel_selected_columns1(void* self, int row) {
    libqt_list _arr = QItemSelectionModel_SelectedColumns1((QItemSelectionModel*)self, row);
    return _arr;
}

const char* k_breadcrumbselectionmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_breadcrumbselectionmodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_breadcrumbselectionmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_breadcrumbselectionmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_breadcrumbselectionmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_breadcrumbselectionmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_breadcrumbselectionmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_breadcrumbselectionmodel_thread(void* self) {
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

libqt_list /* of QObject* */ k_breadcrumbselectionmodel_children(void* self) {
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

QMetaObject__Connection* k_breadcrumbselectionmodel_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_breadcrumbselectionmodel_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_breadcrumbselectionmodel_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_breadcrumbselectionmodel_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_breadcrumbselectionmodel_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_breadcrumbselectionmodel_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_breadcrumbselectionmodel_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_breadcrumbselectionmodel_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_breadcrumbselectionmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_breadcrumbselectionmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_breadcrumbselectionmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_breadcrumbselectionmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_breadcrumbselectionmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_breadcrumbselectionmodel_dynamic_property_names\n");
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

QBindingStorage* k_breadcrumbselectionmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_breadcrumbselectionmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_breadcrumbselectionmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_breadcrumbselectionmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_breadcrumbselectionmodel_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_breadcrumbselectionmodel_inherits(void* self, const char* classname) {
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

QMetaObject__Connection* k_breadcrumbselectionmodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_breadcrumbselectionmodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_breadcrumbselectionmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_breadcrumbselectionmodel_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_breadcrumbselectionmodel_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_breadcrumbselectionmodel_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_breadcrumbselectionmodel_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_breadcrumbselectionmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_breadcrumbselectionmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_set_current_index(void* self, void* index, int32_t command) {
    KBreadcrumbSelectionModel_SetCurrentIndex((KBreadcrumbSelectionModel*)self, (QModelIndex*)index, command);
}

void k_breadcrumbselectionmodel_qbase_set_current_index(void* self, void* index, int32_t command) {
    KBreadcrumbSelectionModel_QBaseSetCurrentIndex((KBreadcrumbSelectionModel*)self, (QModelIndex*)index, command);
}

void k_breadcrumbselectionmodel_on_set_current_index(void* self, void (*callback)(void*, void*, int32_t)) {
    KBreadcrumbSelectionModel_OnSetCurrentIndex((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_clear(void* self) {
    KBreadcrumbSelectionModel_Clear((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_qbase_clear(void* self) {
    KBreadcrumbSelectionModel_QBaseClear((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_on_clear(void* self, void (*callback)()) {
    KBreadcrumbSelectionModel_OnClear((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_reset(void* self) {
    KBreadcrumbSelectionModel_Reset((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_qbase_reset(void* self) {
    KBreadcrumbSelectionModel_QBaseReset((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_on_reset(void* self, void (*callback)()) {
    KBreadcrumbSelectionModel_OnReset((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_clear_current_index(void* self) {
    KBreadcrumbSelectionModel_ClearCurrentIndex((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_qbase_clear_current_index(void* self) {
    KBreadcrumbSelectionModel_QBaseClearCurrentIndex((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_on_clear_current_index(void* self, void (*callback)()) {
    KBreadcrumbSelectionModel_OnClearCurrentIndex((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

bool k_breadcrumbselectionmodel_event(void* self, void* event) {
    return KBreadcrumbSelectionModel_Event((KBreadcrumbSelectionModel*)self, (QEvent*)event);
}

bool k_breadcrumbselectionmodel_qbase_event(void* self, void* event) {
    return KBreadcrumbSelectionModel_QBaseEvent((KBreadcrumbSelectionModel*)self, (QEvent*)event);
}

void k_breadcrumbselectionmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KBreadcrumbSelectionModel_OnEvent((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

bool k_breadcrumbselectionmodel_event_filter(void* self, void* watched, void* event) {
    return KBreadcrumbSelectionModel_EventFilter((KBreadcrumbSelectionModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_breadcrumbselectionmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KBreadcrumbSelectionModel_QBaseEventFilter((KBreadcrumbSelectionModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_breadcrumbselectionmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KBreadcrumbSelectionModel_OnEventFilter((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_timer_event(void* self, void* event) {
    KBreadcrumbSelectionModel_TimerEvent((KBreadcrumbSelectionModel*)self, (QTimerEvent*)event);
}

void k_breadcrumbselectionmodel_qbase_timer_event(void* self, void* event) {
    KBreadcrumbSelectionModel_QBaseTimerEvent((KBreadcrumbSelectionModel*)self, (QTimerEvent*)event);
}

void k_breadcrumbselectionmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KBreadcrumbSelectionModel_OnTimerEvent((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_child_event(void* self, void* event) {
    KBreadcrumbSelectionModel_ChildEvent((KBreadcrumbSelectionModel*)self, (QChildEvent*)event);
}

void k_breadcrumbselectionmodel_qbase_child_event(void* self, void* event) {
    KBreadcrumbSelectionModel_QBaseChildEvent((KBreadcrumbSelectionModel*)self, (QChildEvent*)event);
}

void k_breadcrumbselectionmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KBreadcrumbSelectionModel_OnChildEvent((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_custom_event(void* self, void* event) {
    KBreadcrumbSelectionModel_CustomEvent((KBreadcrumbSelectionModel*)self, (QEvent*)event);
}

void k_breadcrumbselectionmodel_qbase_custom_event(void* self, void* event) {
    KBreadcrumbSelectionModel_QBaseCustomEvent((KBreadcrumbSelectionModel*)self, (QEvent*)event);
}

void k_breadcrumbselectionmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KBreadcrumbSelectionModel_OnCustomEvent((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_connect_notify(void* self, void* signal) {
    KBreadcrumbSelectionModel_ConnectNotify((KBreadcrumbSelectionModel*)self, (QMetaMethod*)signal);
}

void k_breadcrumbselectionmodel_qbase_connect_notify(void* self, void* signal) {
    KBreadcrumbSelectionModel_QBaseConnectNotify((KBreadcrumbSelectionModel*)self, (QMetaMethod*)signal);
}

void k_breadcrumbselectionmodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KBreadcrumbSelectionModel_OnConnectNotify((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_disconnect_notify(void* self, void* signal) {
    KBreadcrumbSelectionModel_DisconnectNotify((KBreadcrumbSelectionModel*)self, (QMetaMethod*)signal);
}

void k_breadcrumbselectionmodel_qbase_disconnect_notify(void* self, void* signal) {
    KBreadcrumbSelectionModel_QBaseDisconnectNotify((KBreadcrumbSelectionModel*)self, (QMetaMethod*)signal);
}

void k_breadcrumbselectionmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KBreadcrumbSelectionModel_OnDisconnectNotify((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_emit_selection_changed(void* self, void* newSelection, void* oldSelection) {
    KBreadcrumbSelectionModel_EmitSelectionChanged((KBreadcrumbSelectionModel*)self, (QItemSelection*)newSelection, (QItemSelection*)oldSelection);
}

void k_breadcrumbselectionmodel_qbase_emit_selection_changed(void* self, void* newSelection, void* oldSelection) {
    KBreadcrumbSelectionModel_QBaseEmitSelectionChanged((KBreadcrumbSelectionModel*)self, (QItemSelection*)newSelection, (QItemSelection*)oldSelection);
}

void k_breadcrumbselectionmodel_on_emit_selection_changed(void* self, void (*callback)(void*, void*, void*)) {
    KBreadcrumbSelectionModel_OnEmitSelectionChanged((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

QObject* k_breadcrumbselectionmodel_sender(void* self) {
    return KBreadcrumbSelectionModel_Sender((KBreadcrumbSelectionModel*)self);
}

QObject* k_breadcrumbselectionmodel_qbase_sender(void* self) {
    return KBreadcrumbSelectionModel_QBaseSender((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_on_sender(void* self, QObject* (*callback)()) {
    KBreadcrumbSelectionModel_OnSender((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

int32_t k_breadcrumbselectionmodel_sender_signal_index(void* self) {
    return KBreadcrumbSelectionModel_SenderSignalIndex((KBreadcrumbSelectionModel*)self);
}

int32_t k_breadcrumbselectionmodel_qbase_sender_signal_index(void* self) {
    return KBreadcrumbSelectionModel_QBaseSenderSignalIndex((KBreadcrumbSelectionModel*)self);
}

void k_breadcrumbselectionmodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KBreadcrumbSelectionModel_OnSenderSignalIndex((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

int32_t k_breadcrumbselectionmodel_receivers(void* self, const char* signal) {
    return KBreadcrumbSelectionModel_Receivers((KBreadcrumbSelectionModel*)self, signal);
}

int32_t k_breadcrumbselectionmodel_qbase_receivers(void* self, const char* signal) {
    return KBreadcrumbSelectionModel_QBaseReceivers((KBreadcrumbSelectionModel*)self, signal);
}

void k_breadcrumbselectionmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KBreadcrumbSelectionModel_OnReceivers((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

bool k_breadcrumbselectionmodel_is_signal_connected(void* self, void* signal) {
    return KBreadcrumbSelectionModel_IsSignalConnected((KBreadcrumbSelectionModel*)self, (QMetaMethod*)signal);
}

bool k_breadcrumbselectionmodel_qbase_is_signal_connected(void* self, void* signal) {
    return KBreadcrumbSelectionModel_QBaseIsSignalConnected((KBreadcrumbSelectionModel*)self, (QMetaMethod*)signal);
}

void k_breadcrumbselectionmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KBreadcrumbSelectionModel_OnIsSignalConnected((KBreadcrumbSelectionModel*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_breadcrumbselectionmodel_delete(void* self) {
    KBreadcrumbSelectionModel_Delete((KBreadcrumbSelectionModel*)(self));
}
