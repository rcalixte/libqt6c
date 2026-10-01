#include "libqcandlestickmodelmapper.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqhcandlestickmodelmapper.hpp"
#include "libqhcandlestickmodelmapper.h"

QHCandlestickModelMapper* q_hcandlestickmodelmapper_new() {
    return QHCandlestickModelMapper_New();
}

QHCandlestickModelMapper* q_hcandlestickmodelmapper_new2(void* parent) {
    return QHCandlestickModelMapper_New2((QObject*)parent);
}

const QMetaObject* q_hcandlestickmodelmapper_meta_object(const void* self) {
    return QHCandlestickModelMapper_MetaObject((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QHCandlestickModelMapper_OnMetaObject((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

const QMetaObject* q_hcandlestickmodelmapper_super_meta_object(const void* self) {
    return QHCandlestickModelMapper_SuperMetaObject((QHCandlestickModelMapper*)self);
}

void* q_hcandlestickmodelmapper_metacast(void* self, const char* param1) {
    return QHCandlestickModelMapper_Metacast((QHCandlestickModelMapper*)self, param1);
}

void q_hcandlestickmodelmapper_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QHCandlestickModelMapper_OnMetacast((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

void* q_hcandlestickmodelmapper_super_metacast(void* self, const char* param1) {
    return QHCandlestickModelMapper_SuperMetacast((QHCandlestickModelMapper*)self, param1);
}

int32_t q_hcandlestickmodelmapper_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHCandlestickModelMapper_Metacall((QHCandlestickModelMapper*)self, param1, param2, param3);
}

void q_hcandlestickmodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QHCandlestickModelMapper_OnMetacall((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

int32_t q_hcandlestickmodelmapper_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHCandlestickModelMapper_SuperMetacall((QHCandlestickModelMapper*)self, param1, param2, param3);
}

const char* q_hcandlestickmodelmapper_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_hcandlestickmodelmapper_orientation(const void* self) {
    return QHCandlestickModelMapper_Orientation((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_orientation(const void* self, int32_t (*callback)(const void*)) {
    QHCandlestickModelMapper_OnOrientation((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

int32_t q_hcandlestickmodelmapper_super_orientation(const void* self) {
    return QHCandlestickModelMapper_SuperOrientation((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_timestamp_column(void* self, int timestampColumn) {
    QHCandlestickModelMapper_SetTimestampColumn((QHCandlestickModelMapper*)self, timestampColumn);
}

int32_t q_hcandlestickmodelmapper_timestamp_column(const void* self) {
    return QHCandlestickModelMapper_TimestampColumn((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_open_column(void* self, int openColumn) {
    QHCandlestickModelMapper_SetOpenColumn((QHCandlestickModelMapper*)self, openColumn);
}

int32_t q_hcandlestickmodelmapper_open_column(const void* self) {
    return QHCandlestickModelMapper_OpenColumn((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_high_column(void* self, int highColumn) {
    QHCandlestickModelMapper_SetHighColumn((QHCandlestickModelMapper*)self, highColumn);
}

int32_t q_hcandlestickmodelmapper_high_column(const void* self) {
    return QHCandlestickModelMapper_HighColumn((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_low_column(void* self, int lowColumn) {
    QHCandlestickModelMapper_SetLowColumn((QHCandlestickModelMapper*)self, lowColumn);
}

int32_t q_hcandlestickmodelmapper_low_column(const void* self) {
    return QHCandlestickModelMapper_LowColumn((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_close_column(void* self, int closeColumn) {
    QHCandlestickModelMapper_SetCloseColumn((QHCandlestickModelMapper*)self, closeColumn);
}

int32_t q_hcandlestickmodelmapper_close_column(const void* self) {
    return QHCandlestickModelMapper_CloseColumn((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_first_set_row(void* self, int firstSetRow) {
    QHCandlestickModelMapper_SetFirstSetRow((QHCandlestickModelMapper*)self, firstSetRow);
}

int32_t q_hcandlestickmodelmapper_first_set_row(const void* self) {
    return QHCandlestickModelMapper_FirstSetRow((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_last_set_row(void* self, int lastSetRow) {
    QHCandlestickModelMapper_SetLastSetRow((QHCandlestickModelMapper*)self, lastSetRow);
}

int32_t q_hcandlestickmodelmapper_last_set_row(const void* self) {
    return QHCandlestickModelMapper_LastSetRow((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_timestamp_column_changed(void* self) {
    QHCandlestickModelMapper_TimestampColumnChanged((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_timestamp_column_changed(void* self, void (*callback)(void*)) {
    QHCandlestickModelMapper_Connect_TimestampColumnChanged((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_hcandlestickmodelmapper_open_column_changed(void* self) {
    QHCandlestickModelMapper_OpenColumnChanged((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_open_column_changed(void* self, void (*callback)(void*)) {
    QHCandlestickModelMapper_Connect_OpenColumnChanged((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_hcandlestickmodelmapper_high_column_changed(void* self) {
    QHCandlestickModelMapper_HighColumnChanged((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_high_column_changed(void* self, void (*callback)(void*)) {
    QHCandlestickModelMapper_Connect_HighColumnChanged((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_hcandlestickmodelmapper_low_column_changed(void* self) {
    QHCandlestickModelMapper_LowColumnChanged((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_low_column_changed(void* self, void (*callback)(void*)) {
    QHCandlestickModelMapper_Connect_LowColumnChanged((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_hcandlestickmodelmapper_close_column_changed(void* self) {
    QHCandlestickModelMapper_CloseColumnChanged((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_close_column_changed(void* self, void (*callback)(void*)) {
    QHCandlestickModelMapper_Connect_CloseColumnChanged((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_hcandlestickmodelmapper_first_set_row_changed(void* self) {
    QHCandlestickModelMapper_FirstSetRowChanged((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_first_set_row_changed(void* self, void (*callback)(void*)) {
    QHCandlestickModelMapper_Connect_FirstSetRowChanged((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_hcandlestickmodelmapper_last_set_row_changed(void* self) {
    QHCandlestickModelMapper_LastSetRowChanged((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_last_set_row_changed(void* self, void (*callback)(void*)) {
    QHCandlestickModelMapper_Connect_LastSetRowChanged((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

const char* q_hcandlestickmodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_hcandlestickmodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_hcandlestickmodelmapper_set_model(void* self, void* model) {
    QCandlestickModelMapper_SetModel((QCandlestickModelMapper*)self, (QAbstractItemModel*)model);
}

QAbstractItemModel* q_hcandlestickmodelmapper_model(const void* self) {
    return QCandlestickModelMapper_Model((QCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_series(void* self, void* series) {
    QCandlestickModelMapper_SetSeries((QCandlestickModelMapper*)self, (QCandlestickSeries*)series);
}

QCandlestickSeries* q_hcandlestickmodelmapper_series(const void* self) {
    return QCandlestickModelMapper_Series((QCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_model_replaced(void* self) {
    QCandlestickModelMapper_ModelReplaced((QCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_model_replaced(void* self, void (*callback)(void*)) {
    QCandlestickModelMapper_Connect_ModelReplaced((QCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_hcandlestickmodelmapper_series_replaced(void* self) {
    QCandlestickModelMapper_SeriesReplaced((QCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_on_series_replaced(void* self, void (*callback)(void*)) {
    QCandlestickModelMapper_Connect_SeriesReplaced((QCandlestickModelMapper*)self, (intptr_t)callback);
}

const char* q_hcandlestickmodelmapper_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_hcandlestickmodelmapper_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_hcandlestickmodelmapper_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_hcandlestickmodelmapper_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_hcandlestickmodelmapper_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_hcandlestickmodelmapper_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_hcandlestickmodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_hcandlestickmodelmapper_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_hcandlestickmodelmapper_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_hcandlestickmodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_hcandlestickmodelmapper_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_hcandlestickmodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_hcandlestickmodelmapper_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_hcandlestickmodelmapper_children(const void* self) {
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

QMetaObject__Connection* q_hcandlestickmodelmapper_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_hcandlestickmodelmapper_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_hcandlestickmodelmapper_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_hcandlestickmodelmapper_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_hcandlestickmodelmapper_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_hcandlestickmodelmapper_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_hcandlestickmodelmapper_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_hcandlestickmodelmapper_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_hcandlestickmodelmapper_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_hcandlestickmodelmapper_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_hcandlestickmodelmapper_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_hcandlestickmodelmapper_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_hcandlestickmodelmapper_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_hcandlestickmodelmapper_dynamic_property_names\n");
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

QBindingStorage* q_hcandlestickmodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_hcandlestickmodelmapper_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_hcandlestickmodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_hcandlestickmodelmapper_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_hcandlestickmodelmapper_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_hcandlestickmodelmapper_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_hcandlestickmodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_hcandlestickmodelmapper_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_hcandlestickmodelmapper_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_hcandlestickmodelmapper_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_hcandlestickmodelmapper_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_hcandlestickmodelmapper_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_hcandlestickmodelmapper_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_hcandlestickmodelmapper_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_hcandlestickmodelmapper_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_hcandlestickmodelmapper_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_hcandlestickmodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_hcandlestickmodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_hcandlestickmodelmapper_event(void* self, void* event) {
    return QHCandlestickModelMapper_Event((QHCandlestickModelMapper*)self, (QEvent*)event);
}

bool q_hcandlestickmodelmapper_super_event(void* self, void* event) {
    return QHCandlestickModelMapper_SuperEvent((QHCandlestickModelMapper*)self, (QEvent*)event);
}

void q_hcandlestickmodelmapper_on_event(void* self, bool (*callback)(void*, void*)) {
    QHCandlestickModelMapper_OnEvent((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

bool q_hcandlestickmodelmapper_event_filter(void* self, void* watched, void* event) {
    return QHCandlestickModelMapper_EventFilter((QHCandlestickModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool q_hcandlestickmodelmapper_super_event_filter(void* self, void* watched, void* event) {
    return QHCandlestickModelMapper_SuperEventFilter((QHCandlestickModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

void q_hcandlestickmodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QHCandlestickModelMapper_OnEventFilter((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_hcandlestickmodelmapper_timer_event(void* self, void* event) {
    QHCandlestickModelMapper_TimerEvent((QHCandlestickModelMapper*)self, (QTimerEvent*)event);
}

void q_hcandlestickmodelmapper_super_timer_event(void* self, void* event) {
    QHCandlestickModelMapper_SuperTimerEvent((QHCandlestickModelMapper*)self, (QTimerEvent*)event);
}

void q_hcandlestickmodelmapper_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QHCandlestickModelMapper_OnTimerEvent((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_hcandlestickmodelmapper_child_event(void* self, void* event) {
    QHCandlestickModelMapper_ChildEvent((QHCandlestickModelMapper*)self, (QChildEvent*)event);
}

void q_hcandlestickmodelmapper_super_child_event(void* self, void* event) {
    QHCandlestickModelMapper_SuperChildEvent((QHCandlestickModelMapper*)self, (QChildEvent*)event);
}

void q_hcandlestickmodelmapper_on_child_event(void* self, void (*callback)(void*, void*)) {
    QHCandlestickModelMapper_OnChildEvent((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_hcandlestickmodelmapper_custom_event(void* self, void* event) {
    QHCandlestickModelMapper_CustomEvent((QHCandlestickModelMapper*)self, (QEvent*)event);
}

void q_hcandlestickmodelmapper_super_custom_event(void* self, void* event) {
    QHCandlestickModelMapper_SuperCustomEvent((QHCandlestickModelMapper*)self, (QEvent*)event);
}

void q_hcandlestickmodelmapper_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QHCandlestickModelMapper_OnCustomEvent((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_hcandlestickmodelmapper_connect_notify(void* self, const void* signal) {
    QHCandlestickModelMapper_ConnectNotify((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_hcandlestickmodelmapper_super_connect_notify(void* self, const void* signal) {
    QHCandlestickModelMapper_SuperConnectNotify((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_hcandlestickmodelmapper_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QHCandlestickModelMapper_OnConnectNotify((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_hcandlestickmodelmapper_disconnect_notify(void* self, const void* signal) {
    QHCandlestickModelMapper_DisconnectNotify((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_hcandlestickmodelmapper_super_disconnect_notify(void* self, const void* signal) {
    QHCandlestickModelMapper_SuperDisconnectNotify((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_hcandlestickmodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QHCandlestickModelMapper_OnDisconnectNotify((QHCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_hcandlestickmodelmapper_set_timestamp(void* self, int timestamp) {
    QHCandlestickModelMapper_SetTimestamp((QHCandlestickModelMapper*)self, timestamp);
}

int32_t q_hcandlestickmodelmapper_timestamp(const void* self) {
    return QHCandlestickModelMapper_Timestamp((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_open(void* self, int open) {
    QHCandlestickModelMapper_SetOpen((QHCandlestickModelMapper*)self, open);
}

int32_t q_hcandlestickmodelmapper_open(const void* self) {
    return QHCandlestickModelMapper_Open((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_high(void* self, int high) {
    QHCandlestickModelMapper_SetHigh((QHCandlestickModelMapper*)self, high);
}

int32_t q_hcandlestickmodelmapper_high(const void* self) {
    return QHCandlestickModelMapper_High((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_low(void* self, int low) {
    QHCandlestickModelMapper_SetLow((QHCandlestickModelMapper*)self, low);
}

int32_t q_hcandlestickmodelmapper_low(const void* self) {
    return QHCandlestickModelMapper_Low((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_close(void* self, int close) {
    QHCandlestickModelMapper_SetClose((QHCandlestickModelMapper*)self, close);
}

int32_t q_hcandlestickmodelmapper_close(const void* self) {
    return QHCandlestickModelMapper_Close((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_first_set_section(void* self, int firstSetSection) {
    QHCandlestickModelMapper_SetFirstSetSection((QHCandlestickModelMapper*)self, firstSetSection);
}

int32_t q_hcandlestickmodelmapper_first_set_section(const void* self) {
    return QHCandlestickModelMapper_FirstSetSection((QHCandlestickModelMapper*)self);
}

void q_hcandlestickmodelmapper_set_last_set_section(void* self, int lastSetSection) {
    QHCandlestickModelMapper_SetLastSetSection((QHCandlestickModelMapper*)self, lastSetSection);
}

int32_t q_hcandlestickmodelmapper_last_set_section(const void* self) {
    return QHCandlestickModelMapper_LastSetSection((QHCandlestickModelMapper*)self);
}

QObject* q_hcandlestickmodelmapper_sender(const void* self) {
    return QHCandlestickModelMapper_Sender((QHCandlestickModelMapper*)self);
}

int32_t q_hcandlestickmodelmapper_sender_signal_index(const void* self) {
    return QHCandlestickModelMapper_SenderSignalIndex((QHCandlestickModelMapper*)self);
}

int32_t q_hcandlestickmodelmapper_receivers(const void* self, const char* signal) {
    return QHCandlestickModelMapper_Receivers((QHCandlestickModelMapper*)self, signal);
}

bool q_hcandlestickmodelmapper_is_signal_connected(const void* self, const void* signal) {
    return QHCandlestickModelMapper_IsSignalConnected((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_hcandlestickmodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_hcandlestickmodelmapper_delete(void* self) {
    QHCandlestickModelMapper_Delete((QHCandlestickModelMapper*)(self));
}
