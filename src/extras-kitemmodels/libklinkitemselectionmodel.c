#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqitemselectionmodel.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libklinkitemselectionmodel.hpp"
#include "libklinkitemselectionmodel.h"

KLinkItemSelectionModel* k_linkitemselectionmodel_new(void* targetModel, void* linkedItemSelectionModel) {
    return KLinkItemSelectionModel_new((QAbstractItemModel*)targetModel, (QItemSelectionModel*)linkedItemSelectionModel);
}

KLinkItemSelectionModel* k_linkitemselectionmodel_new2() {
    return KLinkItemSelectionModel_new2();
}

KLinkItemSelectionModel* k_linkitemselectionmodel_new3(void* targetModel, void* linkedItemSelectionModel, void* parent) {
    return KLinkItemSelectionModel_new3((QAbstractItemModel*)targetModel, (QItemSelectionModel*)linkedItemSelectionModel, (QObject*)parent);
}

KLinkItemSelectionModel* k_linkitemselectionmodel_new4(void* parent) {
    return KLinkItemSelectionModel_new4((QObject*)parent);
}

const QMetaObject* k_linkitemselectionmodel_meta_object(void* self) {
    return KLinkItemSelectionModel_MetaObject((KLinkItemSelectionModel*)self);
}

void k_linkitemselectionmodel_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KLinkItemSelectionModel_OnMetaObject((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

const QMetaObject* k_linkitemselectionmodel_qbase_meta_object(void* self) {
    return KLinkItemSelectionModel_QBaseMetaObject((KLinkItemSelectionModel*)self);
}

void* k_linkitemselectionmodel_metacast(void* self, const char* param1) {
    return KLinkItemSelectionModel_Metacast((KLinkItemSelectionModel*)self, param1);
}

void k_linkitemselectionmodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KLinkItemSelectionModel_OnMetacast((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

void* k_linkitemselectionmodel_qbase_metacast(void* self, const char* param1) {
    return KLinkItemSelectionModel_QBaseMetacast((KLinkItemSelectionModel*)self, param1);
}

int32_t k_linkitemselectionmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KLinkItemSelectionModel_Metacall((KLinkItemSelectionModel*)self, param1, param2, param3);
}

void k_linkitemselectionmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KLinkItemSelectionModel_OnMetacall((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

int32_t k_linkitemselectionmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KLinkItemSelectionModel_QBaseMetacall((KLinkItemSelectionModel*)self, param1, param2, param3);
}

const char* k_linkitemselectionmodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QItemSelectionModel* k_linkitemselectionmodel_linked_item_selection_model(void* self) {
    return KLinkItemSelectionModel_LinkedItemSelectionModel((KLinkItemSelectionModel*)self);
}

void k_linkitemselectionmodel_set_linked_item_selection_model(void* self, void* selectionModel) {
    KLinkItemSelectionModel_SetLinkedItemSelectionModel((KLinkItemSelectionModel*)self, (QItemSelectionModel*)selectionModel);
}

void k_linkitemselectionmodel_select(void* self, void* index, int32_t command) {
    KLinkItemSelectionModel_Select((KLinkItemSelectionModel*)self, (QModelIndex*)index, command);
}

void k_linkitemselectionmodel_on_select(void* self, void (*callback)(void*, void*, int32_t)) {
    KLinkItemSelectionModel_OnSelect((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_qbase_select(void* self, void* index, int32_t command) {
    KLinkItemSelectionModel_QBaseSelect((KLinkItemSelectionModel*)self, (QModelIndex*)index, command);
}

void k_linkitemselectionmodel_select2(void* self, void* selection, int32_t command) {
    KLinkItemSelectionModel_Select2((KLinkItemSelectionModel*)self, (QItemSelection*)selection, command);
}

void k_linkitemselectionmodel_on_select2(void* self, void (*callback)(void*, void*, int32_t)) {
    KLinkItemSelectionModel_OnSelect2((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_qbase_select2(void* self, void* selection, int32_t command) {
    KLinkItemSelectionModel_QBaseSelect2((KLinkItemSelectionModel*)self, (QItemSelection*)selection, command);
}

void k_linkitemselectionmodel_linked_item_selection_model_changed(void* self) {
    KLinkItemSelectionModel_LinkedItemSelectionModelChanged((KLinkItemSelectionModel*)self);
}

void k_linkitemselectionmodel_on_linked_item_selection_model_changed(void* self, void (*callback)(void*)) {
    KLinkItemSelectionModel_Connect_LinkedItemSelectionModelChanged((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

const char* k_linkitemselectionmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_linkitemselectionmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QModelIndex* k_linkitemselectionmodel_current_index(void* self) {
    return QItemSelectionModel_CurrentIndex((QItemSelectionModel*)self);
}

bool k_linkitemselectionmodel_is_selected(void* self, void* index) {
    return QItemSelectionModel_IsSelected((QItemSelectionModel*)self, (QModelIndex*)index);
}

bool k_linkitemselectionmodel_is_row_selected(void* self, int row) {
    return QItemSelectionModel_IsRowSelected((QItemSelectionModel*)self, row);
}

bool k_linkitemselectionmodel_is_column_selected(void* self, int column) {
    return QItemSelectionModel_IsColumnSelected((QItemSelectionModel*)self, column);
}

bool k_linkitemselectionmodel_row_intersects_selection(void* self, int row) {
    return QItemSelectionModel_RowIntersectsSelection((QItemSelectionModel*)self, row);
}

bool k_linkitemselectionmodel_column_intersects_selection(void* self, int column) {
    return QItemSelectionModel_ColumnIntersectsSelection((QItemSelectionModel*)self, column);
}

bool k_linkitemselectionmodel_has_selection(void* self) {
    return QItemSelectionModel_HasSelection((QItemSelectionModel*)self);
}

libqt_list /* of QModelIndex* */ k_linkitemselectionmodel_selected_indexes(void* self) {
    libqt_list _arr = QItemSelectionModel_SelectedIndexes((QItemSelectionModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_linkitemselectionmodel_selected_rows(void* self) {
    libqt_list _arr = QItemSelectionModel_SelectedRows((QItemSelectionModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_linkitemselectionmodel_selected_columns(void* self) {
    libqt_list _arr = QItemSelectionModel_SelectedColumns((QItemSelectionModel*)self);
    return _arr;
}

const QItemSelection* k_linkitemselectionmodel_selection(void* self) {
    return QItemSelectionModel_Selection((QItemSelectionModel*)self);
}

const QAbstractItemModel* k_linkitemselectionmodel_model(void* self) {
    return QItemSelectionModel_Model((QItemSelectionModel*)self);
}

QAbstractItemModel* k_linkitemselectionmodel_model2(void* self) {
    return QItemSelectionModel_Model2((QItemSelectionModel*)self);
}

void k_linkitemselectionmodel_set_model(void* self, void* model) {
    QItemSelectionModel_SetModel((QItemSelectionModel*)self, (QAbstractItemModel*)model);
}

void k_linkitemselectionmodel_clear_selection(void* self) {
    QItemSelectionModel_ClearSelection((QItemSelectionModel*)self);
}

void k_linkitemselectionmodel_selection_changed(void* self, void* selected, void* deselected) {
    QItemSelectionModel_SelectionChanged((QItemSelectionModel*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void k_linkitemselectionmodel_on_selection_changed(void* self, void (*callback)(void*, void*, void*)) {
    QItemSelectionModel_Connect_SelectionChanged((QItemSelectionModel*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_current_changed(void* self, void* current, void* previous) {
    QItemSelectionModel_CurrentChanged((QItemSelectionModel*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void k_linkitemselectionmodel_on_current_changed(void* self, void (*callback)(void*, void*, void*)) {
    QItemSelectionModel_Connect_CurrentChanged((QItemSelectionModel*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_current_row_changed(void* self, void* current, void* previous) {
    QItemSelectionModel_CurrentRowChanged((QItemSelectionModel*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void k_linkitemselectionmodel_on_current_row_changed(void* self, void (*callback)(void*, void*, void*)) {
    QItemSelectionModel_Connect_CurrentRowChanged((QItemSelectionModel*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_current_column_changed(void* self, void* current, void* previous) {
    QItemSelectionModel_CurrentColumnChanged((QItemSelectionModel*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void k_linkitemselectionmodel_on_current_column_changed(void* self, void (*callback)(void*, void*, void*)) {
    QItemSelectionModel_Connect_CurrentColumnChanged((QItemSelectionModel*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_model_changed(void* self, void* model) {
    QItemSelectionModel_ModelChanged((QItemSelectionModel*)self, (QAbstractItemModel*)model);
}

void k_linkitemselectionmodel_on_model_changed(void* self, void (*callback)(void*, void*)) {
    QItemSelectionModel_Connect_ModelChanged((QItemSelectionModel*)self, (intptr_t)callback);
}

bool k_linkitemselectionmodel_is_row_selected2(void* self, int row, void* parent) {
    return QItemSelectionModel_IsRowSelected2((QItemSelectionModel*)self, row, (QModelIndex*)parent);
}

bool k_linkitemselectionmodel_is_column_selected2(void* self, int column, void* parent) {
    return QItemSelectionModel_IsColumnSelected2((QItemSelectionModel*)self, column, (QModelIndex*)parent);
}

bool k_linkitemselectionmodel_row_intersects_selection2(void* self, int row, void* parent) {
    return QItemSelectionModel_RowIntersectsSelection2((QItemSelectionModel*)self, row, (QModelIndex*)parent);
}

bool k_linkitemselectionmodel_column_intersects_selection2(void* self, int column, void* parent) {
    return QItemSelectionModel_ColumnIntersectsSelection2((QItemSelectionModel*)self, column, (QModelIndex*)parent);
}

libqt_list /* of QModelIndex* */ k_linkitemselectionmodel_selected_rows1(void* self, int column) {
    libqt_list _arr = QItemSelectionModel_SelectedRows1((QItemSelectionModel*)self, column);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_linkitemselectionmodel_selected_columns1(void* self, int row) {
    libqt_list _arr = QItemSelectionModel_SelectedColumns1((QItemSelectionModel*)self, row);
    return _arr;
}

const char* k_linkitemselectionmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_linkitemselectionmodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_linkitemselectionmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_linkitemselectionmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_linkitemselectionmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_linkitemselectionmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_linkitemselectionmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_linkitemselectionmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_linkitemselectionmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_linkitemselectionmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_linkitemselectionmodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_linkitemselectionmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_linkitemselectionmodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_linkitemselectionmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_linkitemselectionmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_linkitemselectionmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_linkitemselectionmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_linkitemselectionmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_linkitemselectionmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_linkitemselectionmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_linkitemselectionmodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_linkitemselectionmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_linkitemselectionmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_linkitemselectionmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_linkitemselectionmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_linkitemselectionmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_linkitemselectionmodel_dynamic_property_names\n");
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

QBindingStorage* k_linkitemselectionmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_linkitemselectionmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_linkitemselectionmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_linkitemselectionmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_linkitemselectionmodel_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_linkitemselectionmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_linkitemselectionmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_linkitemselectionmodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_linkitemselectionmodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_linkitemselectionmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_linkitemselectionmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_linkitemselectionmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_linkitemselectionmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_set_current_index(void* self, void* index, int32_t command) {
    KLinkItemSelectionModel_SetCurrentIndex((KLinkItemSelectionModel*)self, (QModelIndex*)index, command);
}

void k_linkitemselectionmodel_qbase_set_current_index(void* self, void* index, int32_t command) {
    KLinkItemSelectionModel_QBaseSetCurrentIndex((KLinkItemSelectionModel*)self, (QModelIndex*)index, command);
}

void k_linkitemselectionmodel_on_set_current_index(void* self, void (*callback)(void*, void*, int32_t)) {
    KLinkItemSelectionModel_OnSetCurrentIndex((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_clear(void* self) {
    KLinkItemSelectionModel_Clear((KLinkItemSelectionModel*)self);
}

void k_linkitemselectionmodel_qbase_clear(void* self) {
    KLinkItemSelectionModel_QBaseClear((KLinkItemSelectionModel*)self);
}

void k_linkitemselectionmodel_on_clear(void* self, void (*callback)()) {
    KLinkItemSelectionModel_OnClear((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_reset(void* self) {
    KLinkItemSelectionModel_Reset((KLinkItemSelectionModel*)self);
}

void k_linkitemselectionmodel_qbase_reset(void* self) {
    KLinkItemSelectionModel_QBaseReset((KLinkItemSelectionModel*)self);
}

void k_linkitemselectionmodel_on_reset(void* self, void (*callback)()) {
    KLinkItemSelectionModel_OnReset((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_clear_current_index(void* self) {
    KLinkItemSelectionModel_ClearCurrentIndex((KLinkItemSelectionModel*)self);
}

void k_linkitemselectionmodel_qbase_clear_current_index(void* self) {
    KLinkItemSelectionModel_QBaseClearCurrentIndex((KLinkItemSelectionModel*)self);
}

void k_linkitemselectionmodel_on_clear_current_index(void* self, void (*callback)()) {
    KLinkItemSelectionModel_OnClearCurrentIndex((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

bool k_linkitemselectionmodel_event(void* self, void* event) {
    return KLinkItemSelectionModel_Event((KLinkItemSelectionModel*)self, (QEvent*)event);
}

bool k_linkitemselectionmodel_qbase_event(void* self, void* event) {
    return KLinkItemSelectionModel_QBaseEvent((KLinkItemSelectionModel*)self, (QEvent*)event);
}

void k_linkitemselectionmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KLinkItemSelectionModel_OnEvent((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

bool k_linkitemselectionmodel_event_filter(void* self, void* watched, void* event) {
    return KLinkItemSelectionModel_EventFilter((KLinkItemSelectionModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_linkitemselectionmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KLinkItemSelectionModel_QBaseEventFilter((KLinkItemSelectionModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_linkitemselectionmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KLinkItemSelectionModel_OnEventFilter((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_timer_event(void* self, void* event) {
    KLinkItemSelectionModel_TimerEvent((KLinkItemSelectionModel*)self, (QTimerEvent*)event);
}

void k_linkitemselectionmodel_qbase_timer_event(void* self, void* event) {
    KLinkItemSelectionModel_QBaseTimerEvent((KLinkItemSelectionModel*)self, (QTimerEvent*)event);
}

void k_linkitemselectionmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KLinkItemSelectionModel_OnTimerEvent((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_child_event(void* self, void* event) {
    KLinkItemSelectionModel_ChildEvent((KLinkItemSelectionModel*)self, (QChildEvent*)event);
}

void k_linkitemselectionmodel_qbase_child_event(void* self, void* event) {
    KLinkItemSelectionModel_QBaseChildEvent((KLinkItemSelectionModel*)self, (QChildEvent*)event);
}

void k_linkitemselectionmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KLinkItemSelectionModel_OnChildEvent((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_custom_event(void* self, void* event) {
    KLinkItemSelectionModel_CustomEvent((KLinkItemSelectionModel*)self, (QEvent*)event);
}

void k_linkitemselectionmodel_qbase_custom_event(void* self, void* event) {
    KLinkItemSelectionModel_QBaseCustomEvent((KLinkItemSelectionModel*)self, (QEvent*)event);
}

void k_linkitemselectionmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KLinkItemSelectionModel_OnCustomEvent((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_connect_notify(void* self, void* signal) {
    KLinkItemSelectionModel_ConnectNotify((KLinkItemSelectionModel*)self, (QMetaMethod*)signal);
}

void k_linkitemselectionmodel_qbase_connect_notify(void* self, void* signal) {
    KLinkItemSelectionModel_QBaseConnectNotify((KLinkItemSelectionModel*)self, (QMetaMethod*)signal);
}

void k_linkitemselectionmodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KLinkItemSelectionModel_OnConnectNotify((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_disconnect_notify(void* self, void* signal) {
    KLinkItemSelectionModel_DisconnectNotify((KLinkItemSelectionModel*)self, (QMetaMethod*)signal);
}

void k_linkitemselectionmodel_qbase_disconnect_notify(void* self, void* signal) {
    KLinkItemSelectionModel_QBaseDisconnectNotify((KLinkItemSelectionModel*)self, (QMetaMethod*)signal);
}

void k_linkitemselectionmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KLinkItemSelectionModel_OnDisconnectNotify((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_emit_selection_changed(void* self, void* newSelection, void* oldSelection) {
    KLinkItemSelectionModel_EmitSelectionChanged((KLinkItemSelectionModel*)self, (QItemSelection*)newSelection, (QItemSelection*)oldSelection);
}

void k_linkitemselectionmodel_qbase_emit_selection_changed(void* self, void* newSelection, void* oldSelection) {
    KLinkItemSelectionModel_QBaseEmitSelectionChanged((KLinkItemSelectionModel*)self, (QItemSelection*)newSelection, (QItemSelection*)oldSelection);
}

void k_linkitemselectionmodel_on_emit_selection_changed(void* self, void (*callback)(void*, void*, void*)) {
    KLinkItemSelectionModel_OnEmitSelectionChanged((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

QObject* k_linkitemselectionmodel_sender(void* self) {
    return KLinkItemSelectionModel_Sender((KLinkItemSelectionModel*)self);
}

QObject* k_linkitemselectionmodel_qbase_sender(void* self) {
    return KLinkItemSelectionModel_QBaseSender((KLinkItemSelectionModel*)self);
}

void k_linkitemselectionmodel_on_sender(void* self, QObject* (*callback)()) {
    KLinkItemSelectionModel_OnSender((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

int32_t k_linkitemselectionmodel_sender_signal_index(void* self) {
    return KLinkItemSelectionModel_SenderSignalIndex((KLinkItemSelectionModel*)self);
}

int32_t k_linkitemselectionmodel_qbase_sender_signal_index(void* self) {
    return KLinkItemSelectionModel_QBaseSenderSignalIndex((KLinkItemSelectionModel*)self);
}

void k_linkitemselectionmodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KLinkItemSelectionModel_OnSenderSignalIndex((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

int32_t k_linkitemselectionmodel_receivers(void* self, const char* signal) {
    return KLinkItemSelectionModel_Receivers((KLinkItemSelectionModel*)self, signal);
}

int32_t k_linkitemselectionmodel_qbase_receivers(void* self, const char* signal) {
    return KLinkItemSelectionModel_QBaseReceivers((KLinkItemSelectionModel*)self, signal);
}

void k_linkitemselectionmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KLinkItemSelectionModel_OnReceivers((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

bool k_linkitemselectionmodel_is_signal_connected(void* self, void* signal) {
    return KLinkItemSelectionModel_IsSignalConnected((KLinkItemSelectionModel*)self, (QMetaMethod*)signal);
}

bool k_linkitemselectionmodel_qbase_is_signal_connected(void* self, void* signal) {
    return KLinkItemSelectionModel_QBaseIsSignalConnected((KLinkItemSelectionModel*)self, (QMetaMethod*)signal);
}

void k_linkitemselectionmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KLinkItemSelectionModel_OnIsSignalConnected((KLinkItemSelectionModel*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_linkitemselectionmodel_delete(void* self) {
    KLinkItemSelectionModel_Delete((KLinkItemSelectionModel*)(self));
}
