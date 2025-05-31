#include "libqabstractbarseries.hpp"
#include "../libqabstractitemmodel.hpp"
#include "libqbarmodelmapper.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqcoreevent.hpp"
#include "libqvbarmodelmapper.hpp"
#include "libqvbarmodelmapper.h"

QVBarModelMapper* q_vbarmodelmapper_new() {
    return QVBarModelMapper_new();
}

QVBarModelMapper* q_vbarmodelmapper_new2(void* parent) {
    return QVBarModelMapper_new2((QObject*)parent);
}

const QMetaObject* q_vbarmodelmapper_meta_object(void* self) {
    return QVBarModelMapper_MetaObject((QVBarModelMapper*)self);
}

void* q_vbarmodelmapper_metacast(void* self, const char* param1) {
    return QVBarModelMapper_Metacast((QVBarModelMapper*)self, param1);
}

int32_t q_vbarmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVBarModelMapper_Metacall((QVBarModelMapper*)self, param1, param2, param3);
}

void q_vbarmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QVBarModelMapper_OnMetacall((QVBarModelMapper*)self, (intptr_t)slot);
}

int32_t q_vbarmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVBarModelMapper_QBaseMetacall((QVBarModelMapper*)self, param1, param2, param3);
}

const char* q_vbarmodelmapper_tr(const char* s) {
    libqt_string _str = QVBarModelMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_vbarmodelmapper_model(void* self) {
    return QVBarModelMapper_Model((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_set_model(void* self, void* model) {
    QVBarModelMapper_SetModel((QVBarModelMapper*)self, (QAbstractItemModel*)model);
}

QAbstractBarSeries* q_vbarmodelmapper_series(void* self) {
    return QVBarModelMapper_Series((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_set_series(void* self, void* series) {
    QVBarModelMapper_SetSeries((QVBarModelMapper*)self, (QAbstractBarSeries*)series);
}

int32_t q_vbarmodelmapper_first_bar_set_column(void* self) {
    return QVBarModelMapper_FirstBarSetColumn((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_set_first_bar_set_column(void* self, int firstBarSetColumn) {
    QVBarModelMapper_SetFirstBarSetColumn((QVBarModelMapper*)self, firstBarSetColumn);
}

int32_t q_vbarmodelmapper_last_bar_set_column(void* self) {
    return QVBarModelMapper_LastBarSetColumn((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_set_last_bar_set_column(void* self, int lastBarSetColumn) {
    QVBarModelMapper_SetLastBarSetColumn((QVBarModelMapper*)self, lastBarSetColumn);
}

int32_t q_vbarmodelmapper_first_row(void* self) {
    return QVBarModelMapper_FirstRow((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_set_first_row(void* self, int firstRow) {
    QVBarModelMapper_SetFirstRow((QVBarModelMapper*)self, firstRow);
}

int32_t q_vbarmodelmapper_row_count(void* self) {
    return QVBarModelMapper_RowCount((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_set_row_count(void* self, int rowCount) {
    QVBarModelMapper_SetRowCount((QVBarModelMapper*)self, rowCount);
}

void q_vbarmodelmapper_series_replaced(void* self) {
    QVBarModelMapper_SeriesReplaced((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_on_series_replaced(void* self, void (*slot)(void*)) {
    QVBarModelMapper_Connect_SeriesReplaced((QVBarModelMapper*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_model_replaced(void* self) {
    QVBarModelMapper_ModelReplaced((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_on_model_replaced(void* self, void (*slot)(void*)) {
    QVBarModelMapper_Connect_ModelReplaced((QVBarModelMapper*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_first_bar_set_column_changed(void* self) {
    QVBarModelMapper_FirstBarSetColumnChanged((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_on_first_bar_set_column_changed(void* self, void (*slot)(void*)) {
    QVBarModelMapper_Connect_FirstBarSetColumnChanged((QVBarModelMapper*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_last_bar_set_column_changed(void* self) {
    QVBarModelMapper_LastBarSetColumnChanged((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_on_last_bar_set_column_changed(void* self, void (*slot)(void*)) {
    QVBarModelMapper_Connect_LastBarSetColumnChanged((QVBarModelMapper*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_first_row_changed(void* self) {
    QVBarModelMapper_FirstRowChanged((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_on_first_row_changed(void* self, void (*slot)(void*)) {
    QVBarModelMapper_Connect_FirstRowChanged((QVBarModelMapper*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_row_count_changed(void* self) {
    QVBarModelMapper_RowCountChanged((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_on_row_count_changed(void* self, void (*slot)(void*)) {
    QVBarModelMapper_Connect_RowCountChanged((QVBarModelMapper*)self, (intptr_t)slot);
}

const char* q_vbarmodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QVBarModelMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_vbarmodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QVBarModelMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_vbarmodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_vbarmodelmapper_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_vbarmodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_vbarmodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_vbarmodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_vbarmodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_vbarmodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_vbarmodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_vbarmodelmapper_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_vbarmodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_vbarmodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

const libqt_list /* of QObject* */ q_vbarmodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_vbarmodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_vbarmodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_vbarmodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_vbarmodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_vbarmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_vbarmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_vbarmodelmapper_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_vbarmodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_vbarmodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_vbarmodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_vbarmodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_vbarmodelmapper_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_vbarmodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_vbarmodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_vbarmodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_vbarmodelmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_vbarmodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_vbarmodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_vbarmodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_vbarmodelmapper_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_vbarmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_vbarmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_vbarmodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_vbarmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_vbarmodelmapper_event(void* self, void* event) {
    return QVBarModelMapper_Event((QVBarModelMapper*)self, (QEvent*)event);
}

bool q_vbarmodelmapper_qbase_event(void* self, void* event) {
    return QVBarModelMapper_QBaseEvent((QVBarModelMapper*)self, (QEvent*)event);
}

void q_vbarmodelmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QVBarModelMapper_OnEvent((QVBarModelMapper*)self, (intptr_t)slot);
}

bool q_vbarmodelmapper_event_filter(void* self, void* watched, void* event) {
    return QVBarModelMapper_EventFilter((QVBarModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool q_vbarmodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QVBarModelMapper_QBaseEventFilter((QVBarModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

void q_vbarmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QVBarModelMapper_OnEventFilter((QVBarModelMapper*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_timer_event(void* self, void* event) {
    QVBarModelMapper_TimerEvent((QVBarModelMapper*)self, (QTimerEvent*)event);
}

void q_vbarmodelmapper_qbase_timer_event(void* self, void* event) {
    QVBarModelMapper_QBaseTimerEvent((QVBarModelMapper*)self, (QTimerEvent*)event);
}

void q_vbarmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QVBarModelMapper_OnTimerEvent((QVBarModelMapper*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_child_event(void* self, void* event) {
    QVBarModelMapper_ChildEvent((QVBarModelMapper*)self, (QChildEvent*)event);
}

void q_vbarmodelmapper_qbase_child_event(void* self, void* event) {
    QVBarModelMapper_QBaseChildEvent((QVBarModelMapper*)self, (QChildEvent*)event);
}

void q_vbarmodelmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QVBarModelMapper_OnChildEvent((QVBarModelMapper*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_custom_event(void* self, void* event) {
    QVBarModelMapper_CustomEvent((QVBarModelMapper*)self, (QEvent*)event);
}

void q_vbarmodelmapper_qbase_custom_event(void* self, void* event) {
    QVBarModelMapper_QBaseCustomEvent((QVBarModelMapper*)self, (QEvent*)event);
}

void q_vbarmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QVBarModelMapper_OnCustomEvent((QVBarModelMapper*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_connect_notify(void* self, void* signal) {
    QVBarModelMapper_ConnectNotify((QVBarModelMapper*)self, (QMetaMethod*)signal);
}

void q_vbarmodelmapper_qbase_connect_notify(void* self, void* signal) {
    QVBarModelMapper_QBaseConnectNotify((QVBarModelMapper*)self, (QMetaMethod*)signal);
}

void q_vbarmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QVBarModelMapper_OnConnectNotify((QVBarModelMapper*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_disconnect_notify(void* self, void* signal) {
    QVBarModelMapper_DisconnectNotify((QVBarModelMapper*)self, (QMetaMethod*)signal);
}

void q_vbarmodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QVBarModelMapper_QBaseDisconnectNotify((QVBarModelMapper*)self, (QMetaMethod*)signal);
}

void q_vbarmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QVBarModelMapper_OnDisconnectNotify((QVBarModelMapper*)self, (intptr_t)slot);
}

int32_t q_vbarmodelmapper_first(void* self) {
    return QVBarModelMapper_First((QVBarModelMapper*)self);
}

int32_t q_vbarmodelmapper_qbase_first(void* self) {
    return QVBarModelMapper_QBaseFirst((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_on_first(void* self, int32_t (*slot)()) {
    QVBarModelMapper_OnFirst((QVBarModelMapper*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_set_first(void* self, int first) {
    QVBarModelMapper_SetFirst((QVBarModelMapper*)self, first);
}

void q_vbarmodelmapper_qbase_set_first(void* self, int first) {
    QVBarModelMapper_QBaseSetFirst((QVBarModelMapper*)self, first);
}

void q_vbarmodelmapper_on_set_first(void* self, void (*slot)(void*, int)) {
    QVBarModelMapper_OnSetFirst((QVBarModelMapper*)self, (intptr_t)slot);
}

int32_t q_vbarmodelmapper_count(void* self) {
    return QVBarModelMapper_Count((QVBarModelMapper*)self);
}

int32_t q_vbarmodelmapper_qbase_count(void* self) {
    return QVBarModelMapper_QBaseCount((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_on_count(void* self, int32_t (*slot)()) {
    QVBarModelMapper_OnCount((QVBarModelMapper*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_set_count(void* self, int count) {
    QVBarModelMapper_SetCount((QVBarModelMapper*)self, count);
}

void q_vbarmodelmapper_qbase_set_count(void* self, int count) {
    QVBarModelMapper_QBaseSetCount((QVBarModelMapper*)self, count);
}

void q_vbarmodelmapper_on_set_count(void* self, void (*slot)(void*, int)) {
    QVBarModelMapper_OnSetCount((QVBarModelMapper*)self, (intptr_t)slot);
}

int32_t q_vbarmodelmapper_first_bar_set_section(void* self) {
    return QVBarModelMapper_FirstBarSetSection((QVBarModelMapper*)self);
}

int32_t q_vbarmodelmapper_qbase_first_bar_set_section(void* self) {
    return QVBarModelMapper_QBaseFirstBarSetSection((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_on_first_bar_set_section(void* self, int32_t (*slot)()) {
    QVBarModelMapper_OnFirstBarSetSection((QVBarModelMapper*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_set_first_bar_set_section(void* self, int firstBarSetSection) {
    QVBarModelMapper_SetFirstBarSetSection((QVBarModelMapper*)self, firstBarSetSection);
}

void q_vbarmodelmapper_qbase_set_first_bar_set_section(void* self, int firstBarSetSection) {
    QVBarModelMapper_QBaseSetFirstBarSetSection((QVBarModelMapper*)self, firstBarSetSection);
}

void q_vbarmodelmapper_on_set_first_bar_set_section(void* self, void (*slot)(void*, int)) {
    QVBarModelMapper_OnSetFirstBarSetSection((QVBarModelMapper*)self, (intptr_t)slot);
}

int32_t q_vbarmodelmapper_last_bar_set_section(void* self) {
    return QVBarModelMapper_LastBarSetSection((QVBarModelMapper*)self);
}

int32_t q_vbarmodelmapper_qbase_last_bar_set_section(void* self) {
    return QVBarModelMapper_QBaseLastBarSetSection((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_on_last_bar_set_section(void* self, int32_t (*slot)()) {
    QVBarModelMapper_OnLastBarSetSection((QVBarModelMapper*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_set_last_bar_set_section(void* self, int lastBarSetSection) {
    QVBarModelMapper_SetLastBarSetSection((QVBarModelMapper*)self, lastBarSetSection);
}

void q_vbarmodelmapper_qbase_set_last_bar_set_section(void* self, int lastBarSetSection) {
    QVBarModelMapper_QBaseSetLastBarSetSection((QVBarModelMapper*)self, lastBarSetSection);
}

void q_vbarmodelmapper_on_set_last_bar_set_section(void* self, void (*slot)(void*, int)) {
    QVBarModelMapper_OnSetLastBarSetSection((QVBarModelMapper*)self, (intptr_t)slot);
}

int64_t q_vbarmodelmapper_orientation(void* self) {
    return QVBarModelMapper_Orientation((QVBarModelMapper*)self);
}

int64_t q_vbarmodelmapper_qbase_orientation(void* self) {
    return QVBarModelMapper_QBaseOrientation((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_on_orientation(void* self, int64_t (*slot)()) {
    QVBarModelMapper_OnOrientation((QVBarModelMapper*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_set_orientation(void* self, int64_t orientation) {
    QVBarModelMapper_SetOrientation((QVBarModelMapper*)self, orientation);
}

void q_vbarmodelmapper_qbase_set_orientation(void* self, int64_t orientation) {
    QVBarModelMapper_QBaseSetOrientation((QVBarModelMapper*)self, orientation);
}

void q_vbarmodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t)) {
    QVBarModelMapper_OnSetOrientation((QVBarModelMapper*)self, (intptr_t)slot);
}

QObject* q_vbarmodelmapper_sender(void* self) {
    return QVBarModelMapper_Sender((QVBarModelMapper*)self);
}

QObject* q_vbarmodelmapper_qbase_sender(void* self) {
    return QVBarModelMapper_QBaseSender((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_on_sender(void* self, QObject* (*slot)()) {
    QVBarModelMapper_OnSender((QVBarModelMapper*)self, (intptr_t)slot);
}

int32_t q_vbarmodelmapper_sender_signal_index(void* self) {
    return QVBarModelMapper_SenderSignalIndex((QVBarModelMapper*)self);
}

int32_t q_vbarmodelmapper_qbase_sender_signal_index(void* self) {
    return QVBarModelMapper_QBaseSenderSignalIndex((QVBarModelMapper*)self);
}

void q_vbarmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QVBarModelMapper_OnSenderSignalIndex((QVBarModelMapper*)self, (intptr_t)slot);
}

int32_t q_vbarmodelmapper_receivers(void* self, const char* signal) {
    return QVBarModelMapper_Receivers((QVBarModelMapper*)self, signal);
}

int32_t q_vbarmodelmapper_qbase_receivers(void* self, const char* signal) {
    return QVBarModelMapper_QBaseReceivers((QVBarModelMapper*)self, signal);
}

void q_vbarmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QVBarModelMapper_OnReceivers((QVBarModelMapper*)self, (intptr_t)slot);
}

bool q_vbarmodelmapper_is_signal_connected(void* self, void* signal) {
    return QVBarModelMapper_IsSignalConnected((QVBarModelMapper*)self, (QMetaMethod*)signal);
}

bool q_vbarmodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QVBarModelMapper_QBaseIsSignalConnected((QVBarModelMapper*)self, (QMetaMethod*)signal);
}

void q_vbarmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QVBarModelMapper_OnIsSignalConnected((QVBarModelMapper*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_vbarmodelmapper_delete(void* self) {
    QVBarModelMapper_Delete((QVBarModelMapper*)(self));
}
