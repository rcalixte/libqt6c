#include "libqabstractbarseries.hpp"
#include "../libqabstractitemmodel.hpp"
#include "libqbarmodelmapper.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqcoreevent.hpp"
#include "libqhbarmodelmapper.hpp"
#include "libqhbarmodelmapper.h"

QHBarModelMapper* q_hbarmodelmapper_new() {
    return QHBarModelMapper_new();
}

QHBarModelMapper* q_hbarmodelmapper_new2(void* parent) {
    return QHBarModelMapper_new2((QObject*)parent);
}

const QMetaObject* q_hbarmodelmapper_meta_object(void* self) {
    return QHBarModelMapper_MetaObject((QHBarModelMapper*)self);
}

void* q_hbarmodelmapper_metacast(void* self, const char* param1) {
    return QHBarModelMapper_Metacast((QHBarModelMapper*)self, param1);
}

int32_t q_hbarmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHBarModelMapper_Metacall((QHBarModelMapper*)self, param1, param2, param3);
}

void q_hbarmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QHBarModelMapper_OnMetacall((QHBarModelMapper*)self, (intptr_t)slot);
}

int32_t q_hbarmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHBarModelMapper_QBaseMetacall((QHBarModelMapper*)self, param1, param2, param3);
}

const char* q_hbarmodelmapper_tr(const char* s) {
    libqt_string _str = QHBarModelMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_hbarmodelmapper_model(void* self) {
    return QHBarModelMapper_Model((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_set_model(void* self, void* model) {
    QHBarModelMapper_SetModel((QHBarModelMapper*)self, (QAbstractItemModel*)model);
}

QAbstractBarSeries* q_hbarmodelmapper_series(void* self) {
    return QHBarModelMapper_Series((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_set_series(void* self, void* series) {
    QHBarModelMapper_SetSeries((QHBarModelMapper*)self, (QAbstractBarSeries*)series);
}

int32_t q_hbarmodelmapper_first_bar_set_row(void* self) {
    return QHBarModelMapper_FirstBarSetRow((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_set_first_bar_set_row(void* self, int firstBarSetRow) {
    QHBarModelMapper_SetFirstBarSetRow((QHBarModelMapper*)self, firstBarSetRow);
}

int32_t q_hbarmodelmapper_last_bar_set_row(void* self) {
    return QHBarModelMapper_LastBarSetRow((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_set_last_bar_set_row(void* self, int lastBarSetRow) {
    QHBarModelMapper_SetLastBarSetRow((QHBarModelMapper*)self, lastBarSetRow);
}

int32_t q_hbarmodelmapper_first_column(void* self) {
    return QHBarModelMapper_FirstColumn((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_set_first_column(void* self, int firstColumn) {
    QHBarModelMapper_SetFirstColumn((QHBarModelMapper*)self, firstColumn);
}

int32_t q_hbarmodelmapper_column_count(void* self) {
    return QHBarModelMapper_ColumnCount((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_set_column_count(void* self, int columnCount) {
    QHBarModelMapper_SetColumnCount((QHBarModelMapper*)self, columnCount);
}

void q_hbarmodelmapper_series_replaced(void* self) {
    QHBarModelMapper_SeriesReplaced((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_on_series_replaced(void* self, void (*slot)(void*)) {
    QHBarModelMapper_Connect_SeriesReplaced((QHBarModelMapper*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_model_replaced(void* self) {
    QHBarModelMapper_ModelReplaced((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_on_model_replaced(void* self, void (*slot)(void*)) {
    QHBarModelMapper_Connect_ModelReplaced((QHBarModelMapper*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_first_bar_set_row_changed(void* self) {
    QHBarModelMapper_FirstBarSetRowChanged((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_on_first_bar_set_row_changed(void* self, void (*slot)(void*)) {
    QHBarModelMapper_Connect_FirstBarSetRowChanged((QHBarModelMapper*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_last_bar_set_row_changed(void* self) {
    QHBarModelMapper_LastBarSetRowChanged((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_on_last_bar_set_row_changed(void* self, void (*slot)(void*)) {
    QHBarModelMapper_Connect_LastBarSetRowChanged((QHBarModelMapper*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_first_column_changed(void* self) {
    QHBarModelMapper_FirstColumnChanged((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_on_first_column_changed(void* self, void (*slot)(void*)) {
    QHBarModelMapper_Connect_FirstColumnChanged((QHBarModelMapper*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_column_count_changed(void* self) {
    QHBarModelMapper_ColumnCountChanged((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_on_column_count_changed(void* self, void (*slot)(void*)) {
    QHBarModelMapper_Connect_ColumnCountChanged((QHBarModelMapper*)self, (intptr_t)slot);
}

const char* q_hbarmodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QHBarModelMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_hbarmodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QHBarModelMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_hbarmodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_hbarmodelmapper_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_hbarmodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_hbarmodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_hbarmodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_hbarmodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_hbarmodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_hbarmodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_hbarmodelmapper_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_hbarmodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_hbarmodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_hbarmodelmapper_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_hbarmodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_hbarmodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_hbarmodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_hbarmodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_hbarmodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_hbarmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_hbarmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_hbarmodelmapper_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_hbarmodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_hbarmodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_hbarmodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_hbarmodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_hbarmodelmapper_dynamic_property_names(void* self) {
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
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_hbarmodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_hbarmodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_hbarmodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_hbarmodelmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_hbarmodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_hbarmodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_hbarmodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_hbarmodelmapper_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_hbarmodelmapper_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_hbarmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_hbarmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_hbarmodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_hbarmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_hbarmodelmapper_event(void* self, void* event) {
    return QHBarModelMapper_Event((QHBarModelMapper*)self, (QEvent*)event);
}

bool q_hbarmodelmapper_qbase_event(void* self, void* event) {
    return QHBarModelMapper_QBaseEvent((QHBarModelMapper*)self, (QEvent*)event);
}

void q_hbarmodelmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QHBarModelMapper_OnEvent((QHBarModelMapper*)self, (intptr_t)slot);
}

bool q_hbarmodelmapper_event_filter(void* self, void* watched, void* event) {
    return QHBarModelMapper_EventFilter((QHBarModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool q_hbarmodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QHBarModelMapper_QBaseEventFilter((QHBarModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

void q_hbarmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QHBarModelMapper_OnEventFilter((QHBarModelMapper*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_timer_event(void* self, void* event) {
    QHBarModelMapper_TimerEvent((QHBarModelMapper*)self, (QTimerEvent*)event);
}

void q_hbarmodelmapper_qbase_timer_event(void* self, void* event) {
    QHBarModelMapper_QBaseTimerEvent((QHBarModelMapper*)self, (QTimerEvent*)event);
}

void q_hbarmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QHBarModelMapper_OnTimerEvent((QHBarModelMapper*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_child_event(void* self, void* event) {
    QHBarModelMapper_ChildEvent((QHBarModelMapper*)self, (QChildEvent*)event);
}

void q_hbarmodelmapper_qbase_child_event(void* self, void* event) {
    QHBarModelMapper_QBaseChildEvent((QHBarModelMapper*)self, (QChildEvent*)event);
}

void q_hbarmodelmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QHBarModelMapper_OnChildEvent((QHBarModelMapper*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_custom_event(void* self, void* event) {
    QHBarModelMapper_CustomEvent((QHBarModelMapper*)self, (QEvent*)event);
}

void q_hbarmodelmapper_qbase_custom_event(void* self, void* event) {
    QHBarModelMapper_QBaseCustomEvent((QHBarModelMapper*)self, (QEvent*)event);
}

void q_hbarmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QHBarModelMapper_OnCustomEvent((QHBarModelMapper*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_connect_notify(void* self, void* signal) {
    QHBarModelMapper_ConnectNotify((QHBarModelMapper*)self, (QMetaMethod*)signal);
}

void q_hbarmodelmapper_qbase_connect_notify(void* self, void* signal) {
    QHBarModelMapper_QBaseConnectNotify((QHBarModelMapper*)self, (QMetaMethod*)signal);
}

void q_hbarmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QHBarModelMapper_OnConnectNotify((QHBarModelMapper*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_disconnect_notify(void* self, void* signal) {
    QHBarModelMapper_DisconnectNotify((QHBarModelMapper*)self, (QMetaMethod*)signal);
}

void q_hbarmodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QHBarModelMapper_QBaseDisconnectNotify((QHBarModelMapper*)self, (QMetaMethod*)signal);
}

void q_hbarmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QHBarModelMapper_OnDisconnectNotify((QHBarModelMapper*)self, (intptr_t)slot);
}

int32_t q_hbarmodelmapper_first(void* self) {
    return QHBarModelMapper_First((QHBarModelMapper*)self);
}

int32_t q_hbarmodelmapper_qbase_first(void* self) {
    return QHBarModelMapper_QBaseFirst((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_on_first(void* self, int32_t (*slot)()) {
    QHBarModelMapper_OnFirst((QHBarModelMapper*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_set_first(void* self, int first) {
    QHBarModelMapper_SetFirst((QHBarModelMapper*)self, first);
}

void q_hbarmodelmapper_qbase_set_first(void* self, int first) {
    QHBarModelMapper_QBaseSetFirst((QHBarModelMapper*)self, first);
}

void q_hbarmodelmapper_on_set_first(void* self, void (*slot)(void*, int)) {
    QHBarModelMapper_OnSetFirst((QHBarModelMapper*)self, (intptr_t)slot);
}

int32_t q_hbarmodelmapper_count(void* self) {
    return QHBarModelMapper_Count((QHBarModelMapper*)self);
}

int32_t q_hbarmodelmapper_qbase_count(void* self) {
    return QHBarModelMapper_QBaseCount((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_on_count(void* self, int32_t (*slot)()) {
    QHBarModelMapper_OnCount((QHBarModelMapper*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_set_count(void* self, int count) {
    QHBarModelMapper_SetCount((QHBarModelMapper*)self, count);
}

void q_hbarmodelmapper_qbase_set_count(void* self, int count) {
    QHBarModelMapper_QBaseSetCount((QHBarModelMapper*)self, count);
}

void q_hbarmodelmapper_on_set_count(void* self, void (*slot)(void*, int)) {
    QHBarModelMapper_OnSetCount((QHBarModelMapper*)self, (intptr_t)slot);
}

int32_t q_hbarmodelmapper_first_bar_set_section(void* self) {
    return QHBarModelMapper_FirstBarSetSection((QHBarModelMapper*)self);
}

int32_t q_hbarmodelmapper_qbase_first_bar_set_section(void* self) {
    return QHBarModelMapper_QBaseFirstBarSetSection((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_on_first_bar_set_section(void* self, int32_t (*slot)()) {
    QHBarModelMapper_OnFirstBarSetSection((QHBarModelMapper*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_set_first_bar_set_section(void* self, int firstBarSetSection) {
    QHBarModelMapper_SetFirstBarSetSection((QHBarModelMapper*)self, firstBarSetSection);
}

void q_hbarmodelmapper_qbase_set_first_bar_set_section(void* self, int firstBarSetSection) {
    QHBarModelMapper_QBaseSetFirstBarSetSection((QHBarModelMapper*)self, firstBarSetSection);
}

void q_hbarmodelmapper_on_set_first_bar_set_section(void* self, void (*slot)(void*, int)) {
    QHBarModelMapper_OnSetFirstBarSetSection((QHBarModelMapper*)self, (intptr_t)slot);
}

int32_t q_hbarmodelmapper_last_bar_set_section(void* self) {
    return QHBarModelMapper_LastBarSetSection((QHBarModelMapper*)self);
}

int32_t q_hbarmodelmapper_qbase_last_bar_set_section(void* self) {
    return QHBarModelMapper_QBaseLastBarSetSection((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_on_last_bar_set_section(void* self, int32_t (*slot)()) {
    QHBarModelMapper_OnLastBarSetSection((QHBarModelMapper*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_set_last_bar_set_section(void* self, int lastBarSetSection) {
    QHBarModelMapper_SetLastBarSetSection((QHBarModelMapper*)self, lastBarSetSection);
}

void q_hbarmodelmapper_qbase_set_last_bar_set_section(void* self, int lastBarSetSection) {
    QHBarModelMapper_QBaseSetLastBarSetSection((QHBarModelMapper*)self, lastBarSetSection);
}

void q_hbarmodelmapper_on_set_last_bar_set_section(void* self, void (*slot)(void*, int)) {
    QHBarModelMapper_OnSetLastBarSetSection((QHBarModelMapper*)self, (intptr_t)slot);
}

int64_t q_hbarmodelmapper_orientation(void* self) {
    return QHBarModelMapper_Orientation((QHBarModelMapper*)self);
}

int64_t q_hbarmodelmapper_qbase_orientation(void* self) {
    return QHBarModelMapper_QBaseOrientation((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_on_orientation(void* self, int64_t (*slot)()) {
    QHBarModelMapper_OnOrientation((QHBarModelMapper*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_set_orientation(void* self, int64_t orientation) {
    QHBarModelMapper_SetOrientation((QHBarModelMapper*)self, orientation);
}

void q_hbarmodelmapper_qbase_set_orientation(void* self, int64_t orientation) {
    QHBarModelMapper_QBaseSetOrientation((QHBarModelMapper*)self, orientation);
}

void q_hbarmodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t)) {
    QHBarModelMapper_OnSetOrientation((QHBarModelMapper*)self, (intptr_t)slot);
}

QObject* q_hbarmodelmapper_sender(void* self) {
    return QHBarModelMapper_Sender((QHBarModelMapper*)self);
}

QObject* q_hbarmodelmapper_qbase_sender(void* self) {
    return QHBarModelMapper_QBaseSender((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_on_sender(void* self, QObject* (*slot)()) {
    QHBarModelMapper_OnSender((QHBarModelMapper*)self, (intptr_t)slot);
}

int32_t q_hbarmodelmapper_sender_signal_index(void* self) {
    return QHBarModelMapper_SenderSignalIndex((QHBarModelMapper*)self);
}

int32_t q_hbarmodelmapper_qbase_sender_signal_index(void* self) {
    return QHBarModelMapper_QBaseSenderSignalIndex((QHBarModelMapper*)self);
}

void q_hbarmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QHBarModelMapper_OnSenderSignalIndex((QHBarModelMapper*)self, (intptr_t)slot);
}

int32_t q_hbarmodelmapper_receivers(void* self, const char* signal) {
    return QHBarModelMapper_Receivers((QHBarModelMapper*)self, signal);
}

int32_t q_hbarmodelmapper_qbase_receivers(void* self, const char* signal) {
    return QHBarModelMapper_QBaseReceivers((QHBarModelMapper*)self, signal);
}

void q_hbarmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QHBarModelMapper_OnReceivers((QHBarModelMapper*)self, (intptr_t)slot);
}

bool q_hbarmodelmapper_is_signal_connected(void* self, void* signal) {
    return QHBarModelMapper_IsSignalConnected((QHBarModelMapper*)self, (QMetaMethod*)signal);
}

bool q_hbarmodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QHBarModelMapper_QBaseIsSignalConnected((QHBarModelMapper*)self, (QMetaMethod*)signal);
}

void q_hbarmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QHBarModelMapper_OnIsSignalConnected((QHBarModelMapper*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_hbarmodelmapper_delete(void* self) {
    QHBarModelMapper_Delete((QHBarModelMapper*)(self));
}
