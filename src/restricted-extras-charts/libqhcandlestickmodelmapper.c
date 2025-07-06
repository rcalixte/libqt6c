#include "libqcandlestickmodelmapper.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqcoreevent.hpp"
#include "libqhcandlestickmodelmapper.hpp"
#include "libqhcandlestickmodelmapper.h"

QHCandlestickModelMapper* q_hcandlestickmodelmapper_new() {
    return QHCandlestickModelMapper_new();
}

QHCandlestickModelMapper* q_hcandlestickmodelmapper_new2(void* parent) {
    return QHCandlestickModelMapper_new2((QObject*)parent);
}

const QMetaObject* q_hcandlestickmodelmapper_meta_object(void* self) {
    return QHCandlestickModelMapper_MetaObject((QHCandlestickModelMapper*)self);
}

void* q_hcandlestickmodelmapper_metacast(void* self, const char* param1) {
    return QHCandlestickModelMapper_Metacast((QHCandlestickModelMapper*)self, param1);
}

int32_t q_hcandlestickmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHCandlestickModelMapper_Metacall((QHCandlestickModelMapper*)self, param1, param2, param3);
}

void q_hcandlestickmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QHCandlestickModelMapper_OnMetacall((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_hcandlestickmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHCandlestickModelMapper_QBaseMetacall((QHCandlestickModelMapper*)self, param1, param2, param3);
}

const char* q_hcandlestickmodelmapper_tr(const char* s) {
    libqt_string _str = QHCandlestickModelMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_hcandlestickmodelmapper_orientation(void* self) {
    return QHCandlestickModelMapper_Orientation((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_orientation(void* self, int64_t (*slot)()) {
    QHCandlestickModelMapper_OnOrientation((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

int64_t q_hcandlestickmodelmapper_qbase_orientation(void* self) {
    return QHCandlestickModelMapper_QBaseOrientation((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_timestamp_column(void* self, int timestampColumn) {
    QHCandlestickModelMapper_SetTimestampColumn((QHCandlestickModelMapper*)self, timestampColumn);
}

int32_t q_hcandlestickmodelmapper_timestamp_column(void* self) {
    return QHCandlestickModelMapper_TimestampColumn((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_open_column(void* self, int openColumn) {
    QHCandlestickModelMapper_SetOpenColumn((QHCandlestickModelMapper*)self, openColumn);
}

int32_t q_hcandlestickmodelmapper_open_column(void* self) {
    return QHCandlestickModelMapper_OpenColumn((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_high_column(void* self, int highColumn) {
    QHCandlestickModelMapper_SetHighColumn((QHCandlestickModelMapper*)self, highColumn);
}

int32_t q_hcandlestickmodelmapper_high_column(void* self) {
    return QHCandlestickModelMapper_HighColumn((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_low_column(void* self, int lowColumn) {
    QHCandlestickModelMapper_SetLowColumn((QHCandlestickModelMapper*)self, lowColumn);
}

int32_t q_hcandlestickmodelmapper_low_column(void* self) {
    return QHCandlestickModelMapper_LowColumn((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_close_column(void* self, int closeColumn) {
    QHCandlestickModelMapper_SetCloseColumn((QHCandlestickModelMapper*)self, closeColumn);
}

int32_t q_hcandlestickmodelmapper_close_column(void* self) {
    return QHCandlestickModelMapper_CloseColumn((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_first_set_row(void* self, int firstSetRow) {
    QHCandlestickModelMapper_SetFirstSetRow((QHCandlestickModelMapper*)self, firstSetRow);
}

int32_t q_hcandlestickmodelmapper_first_set_row(void* self) {
    return QHCandlestickModelMapper_FirstSetRow((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_last_set_row(void* self, int lastSetRow) {
    QHCandlestickModelMapper_SetLastSetRow((QHCandlestickModelMapper*)self, lastSetRow);
}

int32_t q_hcandlestickmodelmapper_last_set_row(void* self) {
    return QHCandlestickModelMapper_LastSetRow((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_timestamp_column_changed(void* self) {
    QHCandlestickModelMapper_TimestampColumnChanged((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_timestamp_column_changed(void* self, void (*slot)(void*)) {
    QHCandlestickModelMapper_Connect_TimestampColumnChanged((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_open_column_changed(void* self) {
    QHCandlestickModelMapper_OpenColumnChanged((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_open_column_changed(void* self, void (*slot)(void*)) {
    QHCandlestickModelMapper_Connect_OpenColumnChanged((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_high_column_changed(void* self) {
    QHCandlestickModelMapper_HighColumnChanged((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_high_column_changed(void* self, void (*slot)(void*)) {
    QHCandlestickModelMapper_Connect_HighColumnChanged((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_low_column_changed(void* self) {
    QHCandlestickModelMapper_LowColumnChanged((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_low_column_changed(void* self, void (*slot)(void*)) {
    QHCandlestickModelMapper_Connect_LowColumnChanged((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_close_column_changed(void* self) {
    QHCandlestickModelMapper_CloseColumnChanged((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_close_column_changed(void* self, void (*slot)(void*)) {
    QHCandlestickModelMapper_Connect_CloseColumnChanged((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_first_set_row_changed(void* self) {
    QHCandlestickModelMapper_FirstSetRowChanged((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_first_set_row_changed(void* self, void (*slot)(void*)) {
    QHCandlestickModelMapper_Connect_FirstSetRowChanged((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_last_set_row_changed(void* self) {
    QHCandlestickModelMapper_LastSetRowChanged((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_last_set_row_changed(void* self, void (*slot)(void*)) {
    QHCandlestickModelMapper_Connect_LastSetRowChanged((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

const char* q_hcandlestickmodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QHCandlestickModelMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_hcandlestickmodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QHCandlestickModelMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_hcandlestickmodelmapper_set_model(void* self, void* model) {
    QCandlestickModelMapper_SetModel((QCandlestickModelMapper*)self, (QAbstractItemModel*)model);
}

QAbstractItemModel* q_hcandlestickmodelmapper_model(void* self) {
    return QCandlestickModelMapper_Model((QCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_series(void* self, void* series) {
    QCandlestickModelMapper_SetSeries((QCandlestickModelMapper*)self, (QCandlestickSeries*)series);
}

QCandlestickSeries* q_hcandlestickmodelmapper_series(void* self) {
    return QCandlestickModelMapper_Series((QCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_model_replaced(void* self) {
    QCandlestickModelMapper_ModelReplaced((QCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_model_replaced(void* self, void (*slot)(void*)) {
    QCandlestickModelMapper_Connect_ModelReplaced((QCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_series_replaced(void* self) {
    QCandlestickModelMapper_SeriesReplaced((QCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_series_replaced(void* self, void (*slot)(void*)) {
    QCandlestickModelMapper_Connect_SeriesReplaced((QCandlestickModelMapper*)self, (intptr_t)slot);
}

const char* q_hcandlestickmodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_hcandlestickmodelmapper_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_hcandlestickmodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_hcandlestickmodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_hcandlestickmodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_hcandlestickmodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_hcandlestickmodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_hcandlestickmodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_hcandlestickmodelmapper_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_hcandlestickmodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_hcandlestickmodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_hcandlestickmodelmapper_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_hcandlestickmodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_hcandlestickmodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_hcandlestickmodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_hcandlestickmodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_hcandlestickmodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_hcandlestickmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_hcandlestickmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_hcandlestickmodelmapper_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_hcandlestickmodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_hcandlestickmodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_hcandlestickmodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_hcandlestickmodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_hcandlestickmodelmapper_dynamic_property_names(void* self) {
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

QBindingStorage* q_hcandlestickmodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_hcandlestickmodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_hcandlestickmodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_hcandlestickmodelmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_hcandlestickmodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_hcandlestickmodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_hcandlestickmodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_hcandlestickmodelmapper_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_hcandlestickmodelmapper_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_hcandlestickmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_hcandlestickmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_hcandlestickmodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_hcandlestickmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_hcandlestickmodelmapper_event(void* self, void* event) {
    return QHCandlestickModelMapper_Event((QHCandlestickModelMapper*)self, (QEvent*)event);
}

bool q_hcandlestickmodelmapper_qbase_event(void* self, void* event) {
    return QHCandlestickModelMapper_QBaseEvent((QHCandlestickModelMapper*)self, (QEvent*)event);
}

void q_hcandlestickmodelmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QHCandlestickModelMapper_OnEvent((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

bool q_hcandlestickmodelmapper_event_filter(void* self, void* watched, void* event) {
    return QHCandlestickModelMapper_EventFilter((QHCandlestickModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool q_hcandlestickmodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QHCandlestickModelMapper_QBaseEventFilter((QHCandlestickModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

void q_hcandlestickmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QHCandlestickModelMapper_OnEventFilter((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_timer_event(void* self, void* event) {
    QHCandlestickModelMapper_TimerEvent((QHCandlestickModelMapper*)self, (QTimerEvent*)event);
}

void q_hcandlestickmodelmapper_qbase_timer_event(void* self, void* event) {
    QHCandlestickModelMapper_QBaseTimerEvent((QHCandlestickModelMapper*)self, (QTimerEvent*)event);
}

void q_hcandlestickmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QHCandlestickModelMapper_OnTimerEvent((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_child_event(void* self, void* event) {
    QHCandlestickModelMapper_ChildEvent((QHCandlestickModelMapper*)self, (QChildEvent*)event);
}

void q_hcandlestickmodelmapper_qbase_child_event(void* self, void* event) {
    QHCandlestickModelMapper_QBaseChildEvent((QHCandlestickModelMapper*)self, (QChildEvent*)event);
}

void q_hcandlestickmodelmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QHCandlestickModelMapper_OnChildEvent((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_custom_event(void* self, void* event) {
    QHCandlestickModelMapper_CustomEvent((QHCandlestickModelMapper*)self, (QEvent*)event);
}

void q_hcandlestickmodelmapper_qbase_custom_event(void* self, void* event) {
    QHCandlestickModelMapper_QBaseCustomEvent((QHCandlestickModelMapper*)self, (QEvent*)event);
}

void q_hcandlestickmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QHCandlestickModelMapper_OnCustomEvent((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_connect_notify(void* self, void* signal) {
    QHCandlestickModelMapper_ConnectNotify((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_hcandlestickmodelmapper_qbase_connect_notify(void* self, void* signal) {
    QHCandlestickModelMapper_QBaseConnectNotify((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_hcandlestickmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QHCandlestickModelMapper_OnConnectNotify((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_disconnect_notify(void* self, void* signal) {
    QHCandlestickModelMapper_DisconnectNotify((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_hcandlestickmodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QHCandlestickModelMapper_QBaseDisconnectNotify((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_hcandlestickmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QHCandlestickModelMapper_OnDisconnectNotify((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_set_timestamp(void* self, int timestamp) {
    QHCandlestickModelMapper_SetTimestamp((QHCandlestickModelMapper*)self, timestamp);
}

void q_hcandlestickmodelmapper_qbase_set_timestamp(void* self, int timestamp) {
    QHCandlestickModelMapper_QBaseSetTimestamp((QHCandlestickModelMapper*)self, timestamp);
}

void q_hcandlestickmodelmapper_on_set_timestamp(void* self, void (*slot)(void*, int)) {
    QHCandlestickModelMapper_OnSetTimestamp((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_hcandlestickmodelmapper_timestamp(void* self) {
    return QHCandlestickModelMapper_Timestamp((QHCandlestickModelMapper*)self);
}

int32_t q_hcandlestickmodelmapper_qbase_timestamp(void* self) {
    return QHCandlestickModelMapper_QBaseTimestamp((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_timestamp(void* self, int32_t (*slot)()) {
    QHCandlestickModelMapper_OnTimestamp((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_set_open(void* self, int open) {
    QHCandlestickModelMapper_SetOpen((QHCandlestickModelMapper*)self, open);
}

void q_hcandlestickmodelmapper_qbase_set_open(void* self, int open) {
    QHCandlestickModelMapper_QBaseSetOpen((QHCandlestickModelMapper*)self, open);
}

void q_hcandlestickmodelmapper_on_set_open(void* self, void (*slot)(void*, int)) {
    QHCandlestickModelMapper_OnSetOpen((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_hcandlestickmodelmapper_open(void* self) {
    return QHCandlestickModelMapper_Open((QHCandlestickModelMapper*)self);
}

int32_t q_hcandlestickmodelmapper_qbase_open(void* self) {
    return QHCandlestickModelMapper_QBaseOpen((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_open(void* self, int32_t (*slot)()) {
    QHCandlestickModelMapper_OnOpen((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_set_high(void* self, int high) {
    QHCandlestickModelMapper_SetHigh((QHCandlestickModelMapper*)self, high);
}

void q_hcandlestickmodelmapper_qbase_set_high(void* self, int high) {
    QHCandlestickModelMapper_QBaseSetHigh((QHCandlestickModelMapper*)self, high);
}

void q_hcandlestickmodelmapper_on_set_high(void* self, void (*slot)(void*, int)) {
    QHCandlestickModelMapper_OnSetHigh((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_hcandlestickmodelmapper_high(void* self) {
    return QHCandlestickModelMapper_High((QHCandlestickModelMapper*)self);
}

int32_t q_hcandlestickmodelmapper_qbase_high(void* self) {
    return QHCandlestickModelMapper_QBaseHigh((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_high(void* self, int32_t (*slot)()) {
    QHCandlestickModelMapper_OnHigh((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_set_low(void* self, int low) {
    QHCandlestickModelMapper_SetLow((QHCandlestickModelMapper*)self, low);
}

void q_hcandlestickmodelmapper_qbase_set_low(void* self, int low) {
    QHCandlestickModelMapper_QBaseSetLow((QHCandlestickModelMapper*)self, low);
}

void q_hcandlestickmodelmapper_on_set_low(void* self, void (*slot)(void*, int)) {
    QHCandlestickModelMapper_OnSetLow((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_hcandlestickmodelmapper_low(void* self) {
    return QHCandlestickModelMapper_Low((QHCandlestickModelMapper*)self);
}

int32_t q_hcandlestickmodelmapper_qbase_low(void* self) {
    return QHCandlestickModelMapper_QBaseLow((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_low(void* self, int32_t (*slot)()) {
    QHCandlestickModelMapper_OnLow((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_set_close(void* self, int close) {
    QHCandlestickModelMapper_SetClose((QHCandlestickModelMapper*)self, close);
}

void q_hcandlestickmodelmapper_qbase_set_close(void* self, int close) {
    QHCandlestickModelMapper_QBaseSetClose((QHCandlestickModelMapper*)self, close);
}

void q_hcandlestickmodelmapper_on_set_close(void* self, void (*slot)(void*, int)) {
    QHCandlestickModelMapper_OnSetClose((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_hcandlestickmodelmapper_close(void* self) {
    return QHCandlestickModelMapper_Close((QHCandlestickModelMapper*)self);
}

int32_t q_hcandlestickmodelmapper_qbase_close(void* self) {
    return QHCandlestickModelMapper_QBaseClose((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_close(void* self, int32_t (*slot)()) {
    QHCandlestickModelMapper_OnClose((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_set_first_set_section(void* self, int firstSetSection) {
    QHCandlestickModelMapper_SetFirstSetSection((QHCandlestickModelMapper*)self, firstSetSection);
}

void q_hcandlestickmodelmapper_qbase_set_first_set_section(void* self, int firstSetSection) {
    QHCandlestickModelMapper_QBaseSetFirstSetSection((QHCandlestickModelMapper*)self, firstSetSection);
}

void q_hcandlestickmodelmapper_on_set_first_set_section(void* self, void (*slot)(void*, int)) {
    QHCandlestickModelMapper_OnSetFirstSetSection((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_hcandlestickmodelmapper_first_set_section(void* self) {
    return QHCandlestickModelMapper_FirstSetSection((QHCandlestickModelMapper*)self);
}

int32_t q_hcandlestickmodelmapper_qbase_first_set_section(void* self) {
    return QHCandlestickModelMapper_QBaseFirstSetSection((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_first_set_section(void* self, int32_t (*slot)()) {
    QHCandlestickModelMapper_OnFirstSetSection((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_set_last_set_section(void* self, int lastSetSection) {
    QHCandlestickModelMapper_SetLastSetSection((QHCandlestickModelMapper*)self, lastSetSection);
}

void q_hcandlestickmodelmapper_qbase_set_last_set_section(void* self, int lastSetSection) {
    QHCandlestickModelMapper_QBaseSetLastSetSection((QHCandlestickModelMapper*)self, lastSetSection);
}

void q_hcandlestickmodelmapper_on_set_last_set_section(void* self, void (*slot)(void*, int)) {
    QHCandlestickModelMapper_OnSetLastSetSection((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_hcandlestickmodelmapper_last_set_section(void* self) {
    return QHCandlestickModelMapper_LastSetSection((QHCandlestickModelMapper*)self);
}

int32_t q_hcandlestickmodelmapper_qbase_last_set_section(void* self) {
    return QHCandlestickModelMapper_QBaseLastSetSection((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_last_set_section(void* self, int32_t (*slot)()) {
    QHCandlestickModelMapper_OnLastSetSection((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

QObject* q_hcandlestickmodelmapper_sender(void* self) {
    return QHCandlestickModelMapper_Sender((QHCandlestickModelMapper*)self);
}

QObject* q_hcandlestickmodelmapper_qbase_sender(void* self) {
    return QHCandlestickModelMapper_QBaseSender((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_sender(void* self, QObject* (*slot)()) {
    QHCandlestickModelMapper_OnSender((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_hcandlestickmodelmapper_sender_signal_index(void* self) {
    return QHCandlestickModelMapper_SenderSignalIndex((QHCandlestickModelMapper*)self);
}

int32_t q_hcandlestickmodelmapper_qbase_sender_signal_index(void* self) {
    return QHCandlestickModelMapper_QBaseSenderSignalIndex((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QHCandlestickModelMapper_OnSenderSignalIndex((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_hcandlestickmodelmapper_receivers(void* self, const char* signal) {
    return QHCandlestickModelMapper_Receivers((QHCandlestickModelMapper*)self, signal);
}

int32_t q_hcandlestickmodelmapper_qbase_receivers(void* self, const char* signal) {
    return QHCandlestickModelMapper_QBaseReceivers((QHCandlestickModelMapper*)self, signal);
}

void q_hcandlestickmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QHCandlestickModelMapper_OnReceivers((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

bool q_hcandlestickmodelmapper_is_signal_connected(void* self, void* signal) {
    return QHCandlestickModelMapper_IsSignalConnected((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

bool q_hcandlestickmodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QHCandlestickModelMapper_QBaseIsSignalConnected((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_hcandlestickmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QHCandlestickModelMapper_OnIsSignalConnected((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_hcandlestickmodelmapper_delete(void* self) {
    QHCandlestickModelMapper_Delete((QHCandlestickModelMapper*)(self));
}
