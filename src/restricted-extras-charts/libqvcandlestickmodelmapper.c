#include "../libqabstractitemmodel.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "libqcandlestickmodelmapper.hpp"
#include "libqcandlestickseries.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqvcandlestickmodelmapper.hpp"
#include "libqvcandlestickmodelmapper.h"

QVCandlestickModelMapper* q_vcandlestickmodelmapper_new() {
    return QVCandlestickModelMapper_new();
}

QVCandlestickModelMapper* q_vcandlestickmodelmapper_new2(void* parent) {
    return QVCandlestickModelMapper_new2((QObject*)parent);
}

QMetaObject* q_vcandlestickmodelmapper_meta_object(void* self) {
    return QVCandlestickModelMapper_MetaObject((QVCandlestickModelMapper*)self);
}

void* q_vcandlestickmodelmapper_metacast(void* self, const char* param1) {
    return QVCandlestickModelMapper_Metacast((QVCandlestickModelMapper*)self, param1);
}

int32_t q_vcandlestickmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVCandlestickModelMapper_Metacall((QVCandlestickModelMapper*)self, param1, param2, param3);
}

void q_vcandlestickmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QVCandlestickModelMapper_OnMetacall((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_vcandlestickmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVCandlestickModelMapper_QBaseMetacall((QVCandlestickModelMapper*)self, param1, param2, param3);
}

const char* q_vcandlestickmodelmapper_tr(const char* s) {
    libqt_string _str = QVCandlestickModelMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_vcandlestickmodelmapper_orientation(void* self) {
    return QVCandlestickModelMapper_Orientation((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_orientation(void* self, int64_t (*slot)()) {
    QVCandlestickModelMapper_OnOrientation((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

int64_t q_vcandlestickmodelmapper_qbase_orientation(void* self) {
    return QVCandlestickModelMapper_QBaseOrientation((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_set_timestamp_row(void* self, int timestampRow) {
    QVCandlestickModelMapper_SetTimestampRow((QVCandlestickModelMapper*)self, timestampRow);
}

int32_t q_vcandlestickmodelmapper_timestamp_row(void* self) {
    return QVCandlestickModelMapper_TimestampRow((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_set_open_row(void* self, int openRow) {
    QVCandlestickModelMapper_SetOpenRow((QVCandlestickModelMapper*)self, openRow);
}

int32_t q_vcandlestickmodelmapper_open_row(void* self) {
    return QVCandlestickModelMapper_OpenRow((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_set_high_row(void* self, int highRow) {
    QVCandlestickModelMapper_SetHighRow((QVCandlestickModelMapper*)self, highRow);
}

int32_t q_vcandlestickmodelmapper_high_row(void* self) {
    return QVCandlestickModelMapper_HighRow((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_set_low_row(void* self, int lowRow) {
    QVCandlestickModelMapper_SetLowRow((QVCandlestickModelMapper*)self, lowRow);
}

int32_t q_vcandlestickmodelmapper_low_row(void* self) {
    return QVCandlestickModelMapper_LowRow((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_set_close_row(void* self, int closeRow) {
    QVCandlestickModelMapper_SetCloseRow((QVCandlestickModelMapper*)self, closeRow);
}

int32_t q_vcandlestickmodelmapper_close_row(void* self) {
    return QVCandlestickModelMapper_CloseRow((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_set_first_set_column(void* self, int firstSetColumn) {
    QVCandlestickModelMapper_SetFirstSetColumn((QVCandlestickModelMapper*)self, firstSetColumn);
}

int32_t q_vcandlestickmodelmapper_first_set_column(void* self) {
    return QVCandlestickModelMapper_FirstSetColumn((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_set_last_set_column(void* self, int lastSetColumn) {
    QVCandlestickModelMapper_SetLastSetColumn((QVCandlestickModelMapper*)self, lastSetColumn);
}

int32_t q_vcandlestickmodelmapper_last_set_column(void* self) {
    return QVCandlestickModelMapper_LastSetColumn((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_timestamp_row_changed(void* self) {
    QVCandlestickModelMapper_TimestampRowChanged((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_timestamp_row_changed(void* self, void (*slot)(void*)) {
    QVCandlestickModelMapper_Connect_TimestampRowChanged((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_open_row_changed(void* self) {
    QVCandlestickModelMapper_OpenRowChanged((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_open_row_changed(void* self, void (*slot)(void*)) {
    QVCandlestickModelMapper_Connect_OpenRowChanged((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_high_row_changed(void* self) {
    QVCandlestickModelMapper_HighRowChanged((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_high_row_changed(void* self, void (*slot)(void*)) {
    QVCandlestickModelMapper_Connect_HighRowChanged((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_low_row_changed(void* self) {
    QVCandlestickModelMapper_LowRowChanged((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_low_row_changed(void* self, void (*slot)(void*)) {
    QVCandlestickModelMapper_Connect_LowRowChanged((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_close_row_changed(void* self) {
    QVCandlestickModelMapper_CloseRowChanged((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_close_row_changed(void* self, void (*slot)(void*)) {
    QVCandlestickModelMapper_Connect_CloseRowChanged((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_first_set_column_changed(void* self) {
    QVCandlestickModelMapper_FirstSetColumnChanged((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_first_set_column_changed(void* self, void (*slot)(void*)) {
    QVCandlestickModelMapper_Connect_FirstSetColumnChanged((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_last_set_column_changed(void* self) {
    QVCandlestickModelMapper_LastSetColumnChanged((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_last_set_column_changed(void* self, void (*slot)(void*)) {
    QVCandlestickModelMapper_Connect_LastSetColumnChanged((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

const char* q_vcandlestickmodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QVCandlestickModelMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_vcandlestickmodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QVCandlestickModelMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_vcandlestickmodelmapper_set_model(void* self, void* model) {
    QCandlestickModelMapper_SetModel((QCandlestickModelMapper*)self, (QAbstractItemModel*)model);
}

QAbstractItemModel* q_vcandlestickmodelmapper_model(void* self) {
    return QCandlestickModelMapper_Model((QCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_set_series(void* self, void* series) {
    QCandlestickModelMapper_SetSeries((QCandlestickModelMapper*)self, (QCandlestickSeries*)series);
}

QCandlestickSeries* q_vcandlestickmodelmapper_series(void* self) {
    return QCandlestickModelMapper_Series((QCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_model_replaced(void* self) {
    QCandlestickModelMapper_ModelReplaced((QCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_model_replaced(void* self, void (*slot)(void*)) {
    QCandlestickModelMapper_Connect_ModelReplaced((QCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_series_replaced(void* self) {
    QCandlestickModelMapper_SeriesReplaced((QCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_series_replaced(void* self, void (*slot)(void*)) {
    QCandlestickModelMapper_Connect_SeriesReplaced((QCandlestickModelMapper*)self, (intptr_t)slot);
}

const char* q_vcandlestickmodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_vcandlestickmodelmapper_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_vcandlestickmodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_vcandlestickmodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_vcandlestickmodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_vcandlestickmodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_vcandlestickmodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_vcandlestickmodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_vcandlestickmodelmapper_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_vcandlestickmodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_vcandlestickmodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_vcandlestickmodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_vcandlestickmodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_vcandlestickmodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_vcandlestickmodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_vcandlestickmodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_vcandlestickmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_vcandlestickmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_vcandlestickmodelmapper_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_vcandlestickmodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_vcandlestickmodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_vcandlestickmodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_vcandlestickmodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_vcandlestickmodelmapper_dynamic_property_names(void* self) {
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

QBindingStorage* q_vcandlestickmodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_vcandlestickmodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_vcandlestickmodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_vcandlestickmodelmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_vcandlestickmodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_vcandlestickmodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_vcandlestickmodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_vcandlestickmodelmapper_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_vcandlestickmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_vcandlestickmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_vcandlestickmodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_vcandlestickmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_vcandlestickmodelmapper_event(void* self, void* event) {
    return QVCandlestickModelMapper_Event((QVCandlestickModelMapper*)self, (QEvent*)event);
}

bool q_vcandlestickmodelmapper_qbase_event(void* self, void* event) {
    return QVCandlestickModelMapper_QBaseEvent((QVCandlestickModelMapper*)self, (QEvent*)event);
}

void q_vcandlestickmodelmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QVCandlestickModelMapper_OnEvent((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

bool q_vcandlestickmodelmapper_event_filter(void* self, void* watched, void* event) {
    return QVCandlestickModelMapper_EventFilter((QVCandlestickModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool q_vcandlestickmodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QVCandlestickModelMapper_QBaseEventFilter((QVCandlestickModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

void q_vcandlestickmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QVCandlestickModelMapper_OnEventFilter((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_timer_event(void* self, void* event) {
    QVCandlestickModelMapper_TimerEvent((QVCandlestickModelMapper*)self, (QTimerEvent*)event);
}

void q_vcandlestickmodelmapper_qbase_timer_event(void* self, void* event) {
    QVCandlestickModelMapper_QBaseTimerEvent((QVCandlestickModelMapper*)self, (QTimerEvent*)event);
}

void q_vcandlestickmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QVCandlestickModelMapper_OnTimerEvent((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_child_event(void* self, void* event) {
    QVCandlestickModelMapper_ChildEvent((QVCandlestickModelMapper*)self, (QChildEvent*)event);
}

void q_vcandlestickmodelmapper_qbase_child_event(void* self, void* event) {
    QVCandlestickModelMapper_QBaseChildEvent((QVCandlestickModelMapper*)self, (QChildEvent*)event);
}

void q_vcandlestickmodelmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QVCandlestickModelMapper_OnChildEvent((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_custom_event(void* self, void* event) {
    QVCandlestickModelMapper_CustomEvent((QVCandlestickModelMapper*)self, (QEvent*)event);
}

void q_vcandlestickmodelmapper_qbase_custom_event(void* self, void* event) {
    QVCandlestickModelMapper_QBaseCustomEvent((QVCandlestickModelMapper*)self, (QEvent*)event);
}

void q_vcandlestickmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QVCandlestickModelMapper_OnCustomEvent((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_connect_notify(void* self, void* signal) {
    QVCandlestickModelMapper_ConnectNotify((QVCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_vcandlestickmodelmapper_qbase_connect_notify(void* self, void* signal) {
    QVCandlestickModelMapper_QBaseConnectNotify((QVCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_vcandlestickmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QVCandlestickModelMapper_OnConnectNotify((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_disconnect_notify(void* self, void* signal) {
    QVCandlestickModelMapper_DisconnectNotify((QVCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_vcandlestickmodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QVCandlestickModelMapper_QBaseDisconnectNotify((QVCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_vcandlestickmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QVCandlestickModelMapper_OnDisconnectNotify((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_set_timestamp(void* self, int timestamp) {
    QVCandlestickModelMapper_SetTimestamp((QVCandlestickModelMapper*)self, timestamp);
}

void q_vcandlestickmodelmapper_qbase_set_timestamp(void* self, int timestamp) {
    QVCandlestickModelMapper_QBaseSetTimestamp((QVCandlestickModelMapper*)self, timestamp);
}

void q_vcandlestickmodelmapper_on_set_timestamp(void* self, void (*slot)(void*, int)) {
    QVCandlestickModelMapper_OnSetTimestamp((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_vcandlestickmodelmapper_timestamp(void* self) {
    return QVCandlestickModelMapper_Timestamp((QVCandlestickModelMapper*)self);
}

int32_t q_vcandlestickmodelmapper_qbase_timestamp(void* self) {
    return QVCandlestickModelMapper_QBaseTimestamp((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_timestamp(void* self, int32_t (*slot)()) {
    QVCandlestickModelMapper_OnTimestamp((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_set_open(void* self, int open) {
    QVCandlestickModelMapper_SetOpen((QVCandlestickModelMapper*)self, open);
}

void q_vcandlestickmodelmapper_qbase_set_open(void* self, int open) {
    QVCandlestickModelMapper_QBaseSetOpen((QVCandlestickModelMapper*)self, open);
}

void q_vcandlestickmodelmapper_on_set_open(void* self, void (*slot)(void*, int)) {
    QVCandlestickModelMapper_OnSetOpen((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_vcandlestickmodelmapper_open(void* self) {
    return QVCandlestickModelMapper_Open((QVCandlestickModelMapper*)self);
}

int32_t q_vcandlestickmodelmapper_qbase_open(void* self) {
    return QVCandlestickModelMapper_QBaseOpen((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_open(void* self, int32_t (*slot)()) {
    QVCandlestickModelMapper_OnOpen((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_set_high(void* self, int high) {
    QVCandlestickModelMapper_SetHigh((QVCandlestickModelMapper*)self, high);
}

void q_vcandlestickmodelmapper_qbase_set_high(void* self, int high) {
    QVCandlestickModelMapper_QBaseSetHigh((QVCandlestickModelMapper*)self, high);
}

void q_vcandlestickmodelmapper_on_set_high(void* self, void (*slot)(void*, int)) {
    QVCandlestickModelMapper_OnSetHigh((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_vcandlestickmodelmapper_high(void* self) {
    return QVCandlestickModelMapper_High((QVCandlestickModelMapper*)self);
}

int32_t q_vcandlestickmodelmapper_qbase_high(void* self) {
    return QVCandlestickModelMapper_QBaseHigh((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_high(void* self, int32_t (*slot)()) {
    QVCandlestickModelMapper_OnHigh((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_set_low(void* self, int low) {
    QVCandlestickModelMapper_SetLow((QVCandlestickModelMapper*)self, low);
}

void q_vcandlestickmodelmapper_qbase_set_low(void* self, int low) {
    QVCandlestickModelMapper_QBaseSetLow((QVCandlestickModelMapper*)self, low);
}

void q_vcandlestickmodelmapper_on_set_low(void* self, void (*slot)(void*, int)) {
    QVCandlestickModelMapper_OnSetLow((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_vcandlestickmodelmapper_low(void* self) {
    return QVCandlestickModelMapper_Low((QVCandlestickModelMapper*)self);
}

int32_t q_vcandlestickmodelmapper_qbase_low(void* self) {
    return QVCandlestickModelMapper_QBaseLow((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_low(void* self, int32_t (*slot)()) {
    QVCandlestickModelMapper_OnLow((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_set_close(void* self, int close) {
    QVCandlestickModelMapper_SetClose((QVCandlestickModelMapper*)self, close);
}

void q_vcandlestickmodelmapper_qbase_set_close(void* self, int close) {
    QVCandlestickModelMapper_QBaseSetClose((QVCandlestickModelMapper*)self, close);
}

void q_vcandlestickmodelmapper_on_set_close(void* self, void (*slot)(void*, int)) {
    QVCandlestickModelMapper_OnSetClose((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_vcandlestickmodelmapper_close(void* self) {
    return QVCandlestickModelMapper_Close((QVCandlestickModelMapper*)self);
}

int32_t q_vcandlestickmodelmapper_qbase_close(void* self) {
    return QVCandlestickModelMapper_QBaseClose((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_close(void* self, int32_t (*slot)()) {
    QVCandlestickModelMapper_OnClose((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_set_first_set_section(void* self, int firstSetSection) {
    QVCandlestickModelMapper_SetFirstSetSection((QVCandlestickModelMapper*)self, firstSetSection);
}

void q_vcandlestickmodelmapper_qbase_set_first_set_section(void* self, int firstSetSection) {
    QVCandlestickModelMapper_QBaseSetFirstSetSection((QVCandlestickModelMapper*)self, firstSetSection);
}

void q_vcandlestickmodelmapper_on_set_first_set_section(void* self, void (*slot)(void*, int)) {
    QVCandlestickModelMapper_OnSetFirstSetSection((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_vcandlestickmodelmapper_first_set_section(void* self) {
    return QVCandlestickModelMapper_FirstSetSection((QVCandlestickModelMapper*)self);
}

int32_t q_vcandlestickmodelmapper_qbase_first_set_section(void* self) {
    return QVCandlestickModelMapper_QBaseFirstSetSection((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_first_set_section(void* self, int32_t (*slot)()) {
    QVCandlestickModelMapper_OnFirstSetSection((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_set_last_set_section(void* self, int lastSetSection) {
    QVCandlestickModelMapper_SetLastSetSection((QVCandlestickModelMapper*)self, lastSetSection);
}

void q_vcandlestickmodelmapper_qbase_set_last_set_section(void* self, int lastSetSection) {
    QVCandlestickModelMapper_QBaseSetLastSetSection((QVCandlestickModelMapper*)self, lastSetSection);
}

void q_vcandlestickmodelmapper_on_set_last_set_section(void* self, void (*slot)(void*, int)) {
    QVCandlestickModelMapper_OnSetLastSetSection((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_vcandlestickmodelmapper_last_set_section(void* self) {
    return QVCandlestickModelMapper_LastSetSection((QVCandlestickModelMapper*)self);
}

int32_t q_vcandlestickmodelmapper_qbase_last_set_section(void* self) {
    return QVCandlestickModelMapper_QBaseLastSetSection((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_last_set_section(void* self, int32_t (*slot)()) {
    QVCandlestickModelMapper_OnLastSetSection((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

QObject* q_vcandlestickmodelmapper_sender(void* self) {
    return QVCandlestickModelMapper_Sender((QVCandlestickModelMapper*)self);
}

QObject* q_vcandlestickmodelmapper_qbase_sender(void* self) {
    return QVCandlestickModelMapper_QBaseSender((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_sender(void* self, QObject* (*slot)()) {
    QVCandlestickModelMapper_OnSender((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_vcandlestickmodelmapper_sender_signal_index(void* self) {
    return QVCandlestickModelMapper_SenderSignalIndex((QVCandlestickModelMapper*)self);
}

int32_t q_vcandlestickmodelmapper_qbase_sender_signal_index(void* self) {
    return QVCandlestickModelMapper_QBaseSenderSignalIndex((QVCandlestickModelMapper*)self);
}

void q_vcandlestickmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QVCandlestickModelMapper_OnSenderSignalIndex((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

int32_t q_vcandlestickmodelmapper_receivers(void* self, const char* signal) {
    return QVCandlestickModelMapper_Receivers((QVCandlestickModelMapper*)self, signal);
}

int32_t q_vcandlestickmodelmapper_qbase_receivers(void* self, const char* signal) {
    return QVCandlestickModelMapper_QBaseReceivers((QVCandlestickModelMapper*)self, signal);
}

void q_vcandlestickmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QVCandlestickModelMapper_OnReceivers((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

bool q_vcandlestickmodelmapper_is_signal_connected(void* self, void* signal) {
    return QVCandlestickModelMapper_IsSignalConnected((QVCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

bool q_vcandlestickmodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QVCandlestickModelMapper_QBaseIsSignalConnected((QVCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_vcandlestickmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QVCandlestickModelMapper_OnIsSignalConnected((QVCandlestickModelMapper*)self, (intptr_t)slot);
}

void q_vcandlestickmodelmapper_delete(void* self) {
    QVCandlestickModelMapper_Delete((QVCandlestickModelMapper*)(self));
}
