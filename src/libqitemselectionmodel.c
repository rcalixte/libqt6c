#include "libqabstractitemmodel.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqitemselectionmodel.hpp"
#include "libqitemselectionmodel.h"

QItemSelectionRange* q_itemselectionrange_new() {
    return QItemSelectionRange_new();
}

QItemSelectionRange* q_itemselectionrange_new2(void* topL, void* bottomR) {
    return QItemSelectionRange_new2((QModelIndex*)topL, (QModelIndex*)bottomR);
}

QItemSelectionRange* q_itemselectionrange_new3(void* index) {
    return QItemSelectionRange_new3((QModelIndex*)index);
}

void q_itemselectionrange_swap(void* self, void* other) {
    QItemSelectionRange_Swap((QItemSelectionRange*)self, (QItemSelectionRange*)other);
}

int32_t q_itemselectionrange_top(void* self) {
    return QItemSelectionRange_Top((QItemSelectionRange*)self);
}

int32_t q_itemselectionrange_left(void* self) {
    return QItemSelectionRange_Left((QItemSelectionRange*)self);
}

int32_t q_itemselectionrange_bottom(void* self) {
    return QItemSelectionRange_Bottom((QItemSelectionRange*)self);
}

int32_t q_itemselectionrange_right(void* self) {
    return QItemSelectionRange_Right((QItemSelectionRange*)self);
}

int32_t q_itemselectionrange_width(void* self) {
    return QItemSelectionRange_Width((QItemSelectionRange*)self);
}

int32_t q_itemselectionrange_height(void* self) {
    return QItemSelectionRange_Height((QItemSelectionRange*)self);
}

const QPersistentModelIndex* q_itemselectionrange_top_left(void* self) {
    return QItemSelectionRange_TopLeft((QItemSelectionRange*)self);
}

const QPersistentModelIndex* q_itemselectionrange_bottom_right(void* self) {
    return QItemSelectionRange_BottomRight((QItemSelectionRange*)self);
}

QModelIndex* q_itemselectionrange_parent(void* self) {
    return QItemSelectionRange_Parent((QItemSelectionRange*)self);
}

const QAbstractItemModel* q_itemselectionrange_model(void* self) {
    return QItemSelectionRange_Model((QItemSelectionRange*)self);
}

bool q_itemselectionrange_contains(void* self, void* index) {
    return QItemSelectionRange_Contains((QItemSelectionRange*)self, (QModelIndex*)index);
}

bool q_itemselectionrange_contains2(void* self, int row, int column, void* parentIndex) {
    return QItemSelectionRange_Contains2((QItemSelectionRange*)self, row, column, (QModelIndex*)parentIndex);
}

bool q_itemselectionrange_intersects(void* self, void* other) {
    return QItemSelectionRange_Intersects((QItemSelectionRange*)self, (QItemSelectionRange*)other);
}

QItemSelectionRange* q_itemselectionrange_intersected(void* self, void* other) {
    return QItemSelectionRange_Intersected((QItemSelectionRange*)self, (QItemSelectionRange*)other);
}

bool q_itemselectionrange_is_valid(void* self) {
    return QItemSelectionRange_IsValid((QItemSelectionRange*)self);
}

bool q_itemselectionrange_is_empty(void* self) {
    return QItemSelectionRange_IsEmpty((QItemSelectionRange*)self);
}

libqt_list /* of QModelIndex* */ q_itemselectionrange_indexes(void* self) {
    libqt_list _arr = QItemSelectionRange_Indexes((QItemSelectionRange*)self);
    return _arr;
}

void q_itemselectionrange_delete(void* self) {
    QItemSelectionRange_Delete((QItemSelectionRange*)(self));
}

QItemSelectionModel* q_itemselectionmodel_new() {
    return QItemSelectionModel_new();
}

QItemSelectionModel* q_itemselectionmodel_new2(void* model, void* parent) {
    return QItemSelectionModel_new2((QAbstractItemModel*)model, (QObject*)parent);
}

QItemSelectionModel* q_itemselectionmodel_new3(void* model) {
    return QItemSelectionModel_new3((QAbstractItemModel*)model);
}

const QMetaObject* q_itemselectionmodel_meta_object(void* self) {
    return QItemSelectionModel_MetaObject((QItemSelectionModel*)self);
}

void* q_itemselectionmodel_metacast(void* self, const char* param1) {
    return QItemSelectionModel_Metacast((QItemSelectionModel*)self, param1);
}

int32_t q_itemselectionmodel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QItemSelectionModel_Metacall((QItemSelectionModel*)self, param1, param2, param3);
}

void q_itemselectionmodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QItemSelectionModel_OnMetacall((QItemSelectionModel*)self, (intptr_t)slot);
}

int32_t q_itemselectionmodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QItemSelectionModel_QBaseMetacall((QItemSelectionModel*)self, param1, param2, param3);
}

const char* q_itemselectionmodel_tr(const char* s) {
    libqt_string _str = QItemSelectionModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QModelIndex* q_itemselectionmodel_current_index(void* self) {
    return QItemSelectionModel_CurrentIndex((QItemSelectionModel*)self);
}

bool q_itemselectionmodel_is_selected(void* self, void* index) {
    return QItemSelectionModel_IsSelected((QItemSelectionModel*)self, (QModelIndex*)index);
}

bool q_itemselectionmodel_is_row_selected(void* self, int row) {
    return QItemSelectionModel_IsRowSelected((QItemSelectionModel*)self, row);
}

bool q_itemselectionmodel_is_column_selected(void* self, int column) {
    return QItemSelectionModel_IsColumnSelected((QItemSelectionModel*)self, column);
}

bool q_itemselectionmodel_row_intersects_selection(void* self, int row) {
    return QItemSelectionModel_RowIntersectsSelection((QItemSelectionModel*)self, row);
}

bool q_itemselectionmodel_column_intersects_selection(void* self, int column) {
    return QItemSelectionModel_ColumnIntersectsSelection((QItemSelectionModel*)self, column);
}

bool q_itemselectionmodel_has_selection(void* self) {
    return QItemSelectionModel_HasSelection((QItemSelectionModel*)self);
}

libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_indexes(void* self) {
    libqt_list _arr = QItemSelectionModel_SelectedIndexes((QItemSelectionModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_rows(void* self) {
    libqt_list _arr = QItemSelectionModel_SelectedRows((QItemSelectionModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_columns(void* self) {
    libqt_list _arr = QItemSelectionModel_SelectedColumns((QItemSelectionModel*)self);
    return _arr;
}

const QItemSelection* q_itemselectionmodel_selection(void* self) {
    return QItemSelectionModel_Selection((QItemSelectionModel*)self);
}

const QAbstractItemModel* q_itemselectionmodel_model(void* self) {
    return QItemSelectionModel_Model((QItemSelectionModel*)self);
}

QAbstractItemModel* q_itemselectionmodel_model2(void* self) {
    return QItemSelectionModel_Model2((QItemSelectionModel*)self);
}

void q_itemselectionmodel_set_model(void* self, void* model) {
    QItemSelectionModel_SetModel((QItemSelectionModel*)self, (QAbstractItemModel*)model);
}

void q_itemselectionmodel_set_current_index(void* self, void* index, int64_t command) {
    QItemSelectionModel_SetCurrentIndex((QItemSelectionModel*)self, (QModelIndex*)index, command);
}

void q_itemselectionmodel_on_set_current_index(void* self, void (*slot)(void*, void*, int64_t)) {
    QItemSelectionModel_OnSetCurrentIndex((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_qbase_set_current_index(void* self, void* index, int64_t command) {
    QItemSelectionModel_QBaseSetCurrentIndex((QItemSelectionModel*)self, (QModelIndex*)index, command);
}

void q_itemselectionmodel_select(void* self, void* index, int64_t command) {
    QItemSelectionModel_Select((QItemSelectionModel*)self, (QModelIndex*)index, command);
}

void q_itemselectionmodel_on_select(void* self, void (*slot)(void*, void*, int64_t)) {
    QItemSelectionModel_OnSelect((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_qbase_select(void* self, void* index, int64_t command) {
    QItemSelectionModel_QBaseSelect((QItemSelectionModel*)self, (QModelIndex*)index, command);
}

void q_itemselectionmodel_select2(void* self, void* selection, int64_t command) {
    QItemSelectionModel_Select2((QItemSelectionModel*)self, (QItemSelection*)selection, command);
}

void q_itemselectionmodel_on_select2(void* self, void (*slot)(void*, void*, int64_t)) {
    QItemSelectionModel_OnSelect2((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_qbase_select2(void* self, void* selection, int64_t command) {
    QItemSelectionModel_QBaseSelect2((QItemSelectionModel*)self, (QItemSelection*)selection, command);
}

void q_itemselectionmodel_clear(void* self) {
    QItemSelectionModel_Clear((QItemSelectionModel*)self);
}

void q_itemselectionmodel_on_clear(void* self, void (*slot)()) {
    QItemSelectionModel_OnClear((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_qbase_clear(void* self) {
    QItemSelectionModel_QBaseClear((QItemSelectionModel*)self);
}

void q_itemselectionmodel_reset(void* self) {
    QItemSelectionModel_Reset((QItemSelectionModel*)self);
}

void q_itemselectionmodel_on_reset(void* self, void (*slot)()) {
    QItemSelectionModel_OnReset((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_qbase_reset(void* self) {
    QItemSelectionModel_QBaseReset((QItemSelectionModel*)self);
}

void q_itemselectionmodel_clear_selection(void* self) {
    QItemSelectionModel_ClearSelection((QItemSelectionModel*)self);
}

void q_itemselectionmodel_clear_current_index(void* self) {
    QItemSelectionModel_ClearCurrentIndex((QItemSelectionModel*)self);
}

void q_itemselectionmodel_on_clear_current_index(void* self, void (*slot)()) {
    QItemSelectionModel_OnClearCurrentIndex((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_qbase_clear_current_index(void* self) {
    QItemSelectionModel_QBaseClearCurrentIndex((QItemSelectionModel*)self);
}

void q_itemselectionmodel_selection_changed(void* self, void* selected, void* deselected) {
    QItemSelectionModel_SelectionChanged((QItemSelectionModel*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_itemselectionmodel_on_selection_changed(void* self, void (*slot)(void*, void*, void*)) {
    QItemSelectionModel_Connect_SelectionChanged((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_current_changed(void* self, void* current, void* previous) {
    QItemSelectionModel_CurrentChanged((QItemSelectionModel*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void q_itemselectionmodel_on_current_changed(void* self, void (*slot)(void*, void*, void*)) {
    QItemSelectionModel_Connect_CurrentChanged((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_current_row_changed(void* self, void* current, void* previous) {
    QItemSelectionModel_CurrentRowChanged((QItemSelectionModel*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void q_itemselectionmodel_on_current_row_changed(void* self, void (*slot)(void*, void*, void*)) {
    QItemSelectionModel_Connect_CurrentRowChanged((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_current_column_changed(void* self, void* current, void* previous) {
    QItemSelectionModel_CurrentColumnChanged((QItemSelectionModel*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void q_itemselectionmodel_on_current_column_changed(void* self, void (*slot)(void*, void*, void*)) {
    QItemSelectionModel_Connect_CurrentColumnChanged((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_model_changed(void* self, void* model) {
    QItemSelectionModel_ModelChanged((QItemSelectionModel*)self, (QAbstractItemModel*)model);
}

void q_itemselectionmodel_on_model_changed(void* self, void (*slot)(void*, void*)) {
    QItemSelectionModel_Connect_ModelChanged((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_emit_selection_changed(void* self, void* newSelection, void* oldSelection) {
    QItemSelectionModel_EmitSelectionChanged((QItemSelectionModel*)self, (QItemSelection*)newSelection, (QItemSelection*)oldSelection);
}

void q_itemselectionmodel_on_emit_selection_changed(void* self, void (*slot)(void*, void*, void*)) {
    QItemSelectionModel_OnEmitSelectionChanged((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_qbase_emit_selection_changed(void* self, void* newSelection, void* oldSelection) {
    QItemSelectionModel_QBaseEmitSelectionChanged((QItemSelectionModel*)self, (QItemSelection*)newSelection, (QItemSelection*)oldSelection);
}

const char* q_itemselectionmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QItemSelectionModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_itemselectionmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QItemSelectionModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_itemselectionmodel_is_row_selected2(void* self, int row, void* parent) {
    return QItemSelectionModel_IsRowSelected2((QItemSelectionModel*)self, row, (QModelIndex*)parent);
}

bool q_itemselectionmodel_is_column_selected2(void* self, int column, void* parent) {
    return QItemSelectionModel_IsColumnSelected2((QItemSelectionModel*)self, column, (QModelIndex*)parent);
}

bool q_itemselectionmodel_row_intersects_selection2(void* self, int row, void* parent) {
    return QItemSelectionModel_RowIntersectsSelection2((QItemSelectionModel*)self, row, (QModelIndex*)parent);
}

bool q_itemselectionmodel_column_intersects_selection2(void* self, int column, void* parent) {
    return QItemSelectionModel_ColumnIntersectsSelection2((QItemSelectionModel*)self, column, (QModelIndex*)parent);
}

libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_rows1(void* self, int column) {
    libqt_list _arr = QItemSelectionModel_SelectedRows1((QItemSelectionModel*)self, column);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_columns1(void* self, int row) {
    libqt_list _arr = QItemSelectionModel_SelectedColumns1((QItemSelectionModel*)self, row);
    return _arr;
}

const char* q_itemselectionmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemselectionmodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_itemselectionmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_itemselectionmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_itemselectionmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_itemselectionmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_itemselectionmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_itemselectionmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_itemselectionmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_itemselectionmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_itemselectionmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_itemselectionmodel_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_itemselectionmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_itemselectionmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_itemselectionmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_itemselectionmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_itemselectionmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_itemselectionmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_itemselectionmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_itemselectionmodel_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_itemselectionmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_itemselectionmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_itemselectionmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_itemselectionmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_itemselectionmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_itemselectionmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_itemselectionmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_itemselectionmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_itemselectionmodel_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_itemselectionmodel_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_itemselectionmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_itemselectionmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_itemselectionmodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_itemselectionmodel_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_itemselectionmodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_itemselectionmodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_itemselectionmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_itemselectionmodel_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_itemselectionmodel_event(void* self, void* event) {
    return QItemSelectionModel_Event((QItemSelectionModel*)self, (QEvent*)event);
}

bool q_itemselectionmodel_qbase_event(void* self, void* event) {
    return QItemSelectionModel_QBaseEvent((QItemSelectionModel*)self, (QEvent*)event);
}

void q_itemselectionmodel_on_event(void* self, bool (*slot)(void*, void*)) {
    QItemSelectionModel_OnEvent((QItemSelectionModel*)self, (intptr_t)slot);
}

bool q_itemselectionmodel_event_filter(void* self, void* watched, void* event) {
    return QItemSelectionModel_EventFilter((QItemSelectionModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_itemselectionmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QItemSelectionModel_QBaseEventFilter((QItemSelectionModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_itemselectionmodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QItemSelectionModel_OnEventFilter((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_timer_event(void* self, void* event) {
    QItemSelectionModel_TimerEvent((QItemSelectionModel*)self, (QTimerEvent*)event);
}

void q_itemselectionmodel_qbase_timer_event(void* self, void* event) {
    QItemSelectionModel_QBaseTimerEvent((QItemSelectionModel*)self, (QTimerEvent*)event);
}

void q_itemselectionmodel_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QItemSelectionModel_OnTimerEvent((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_child_event(void* self, void* event) {
    QItemSelectionModel_ChildEvent((QItemSelectionModel*)self, (QChildEvent*)event);
}

void q_itemselectionmodel_qbase_child_event(void* self, void* event) {
    QItemSelectionModel_QBaseChildEvent((QItemSelectionModel*)self, (QChildEvent*)event);
}

void q_itemselectionmodel_on_child_event(void* self, void (*slot)(void*, void*)) {
    QItemSelectionModel_OnChildEvent((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_custom_event(void* self, void* event) {
    QItemSelectionModel_CustomEvent((QItemSelectionModel*)self, (QEvent*)event);
}

void q_itemselectionmodel_qbase_custom_event(void* self, void* event) {
    QItemSelectionModel_QBaseCustomEvent((QItemSelectionModel*)self, (QEvent*)event);
}

void q_itemselectionmodel_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QItemSelectionModel_OnCustomEvent((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_connect_notify(void* self, void* signal) {
    QItemSelectionModel_ConnectNotify((QItemSelectionModel*)self, (QMetaMethod*)signal);
}

void q_itemselectionmodel_qbase_connect_notify(void* self, void* signal) {
    QItemSelectionModel_QBaseConnectNotify((QItemSelectionModel*)self, (QMetaMethod*)signal);
}

void q_itemselectionmodel_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QItemSelectionModel_OnConnectNotify((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_disconnect_notify(void* self, void* signal) {
    QItemSelectionModel_DisconnectNotify((QItemSelectionModel*)self, (QMetaMethod*)signal);
}

void q_itemselectionmodel_qbase_disconnect_notify(void* self, void* signal) {
    QItemSelectionModel_QBaseDisconnectNotify((QItemSelectionModel*)self, (QMetaMethod*)signal);
}

void q_itemselectionmodel_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QItemSelectionModel_OnDisconnectNotify((QItemSelectionModel*)self, (intptr_t)slot);
}

QObject* q_itemselectionmodel_sender(void* self) {
    return QItemSelectionModel_Sender((QItemSelectionModel*)self);
}

QObject* q_itemselectionmodel_qbase_sender(void* self) {
    return QItemSelectionModel_QBaseSender((QItemSelectionModel*)self);
}

void q_itemselectionmodel_on_sender(void* self, QObject* (*slot)()) {
    QItemSelectionModel_OnSender((QItemSelectionModel*)self, (intptr_t)slot);
}

int32_t q_itemselectionmodel_sender_signal_index(void* self) {
    return QItemSelectionModel_SenderSignalIndex((QItemSelectionModel*)self);
}

int32_t q_itemselectionmodel_qbase_sender_signal_index(void* self) {
    return QItemSelectionModel_QBaseSenderSignalIndex((QItemSelectionModel*)self);
}

void q_itemselectionmodel_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QItemSelectionModel_OnSenderSignalIndex((QItemSelectionModel*)self, (intptr_t)slot);
}

int32_t q_itemselectionmodel_receivers(void* self, const char* signal) {
    return QItemSelectionModel_Receivers((QItemSelectionModel*)self, signal);
}

int32_t q_itemselectionmodel_qbase_receivers(void* self, const char* signal) {
    return QItemSelectionModel_QBaseReceivers((QItemSelectionModel*)self, signal);
}

void q_itemselectionmodel_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QItemSelectionModel_OnReceivers((QItemSelectionModel*)self, (intptr_t)slot);
}

bool q_itemselectionmodel_is_signal_connected(void* self, void* signal) {
    return QItemSelectionModel_IsSignalConnected((QItemSelectionModel*)self, (QMetaMethod*)signal);
}

bool q_itemselectionmodel_qbase_is_signal_connected(void* self, void* signal) {
    return QItemSelectionModel_QBaseIsSignalConnected((QItemSelectionModel*)self, (QMetaMethod*)signal);
}

void q_itemselectionmodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QItemSelectionModel_OnIsSignalConnected((QItemSelectionModel*)self, (intptr_t)slot);
}

void q_itemselectionmodel_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_itemselectionmodel_delete(void* self) {
    QItemSelectionModel_Delete((QItemSelectionModel*)(self));
}

// Also inherits unprojectable QList<QItemSelectionRange>

QItemSelection* q_itemselection_new(void* topLeft, void* bottomRight) {
    return QItemSelection_new((QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

QItemSelection* q_itemselection_new2() {
    return QItemSelection_new2();
}

QItemSelection* q_itemselection_new3(void* param1) {
    return QItemSelection_new3((QItemSelection*)param1);
}

void q_itemselection_select(void* self, void* topLeft, void* bottomRight) {
    QItemSelection_Select((QItemSelection*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

bool q_itemselection_contains(void* self, void* index) {
    return QItemSelection_Contains((QItemSelection*)self, (QModelIndex*)index);
}

libqt_list /* of QModelIndex* */ q_itemselection_indexes(void* self) {
    libqt_list _arr = QItemSelection_Indexes((QItemSelection*)self);
    return _arr;
}

void q_itemselection_merge(void* self, void* other, int64_t command) {
    QItemSelection_Merge((QItemSelection*)self, (QItemSelection*)other, command);
}

void q_itemselection_split(void* range, void* other, void* result) {
    QItemSelection_Split((QItemSelectionRange*)range, (QItemSelectionRange*)other, (QItemSelection*)result);
}

void q_itemselection_delete(void* self) {
    QItemSelection_Delete((QItemSelection*)(self));
}
