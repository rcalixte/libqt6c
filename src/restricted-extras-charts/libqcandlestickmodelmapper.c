#include "../libqabstractitemmodel.hpp"
#include "libqcandlestickseries.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqcandlestickmodelmapper.hpp"
#include "libqcandlestickmodelmapper.h"

QCandlestickModelMapper* q_candlestickmodelmapper_new() {
    return QCandlestickModelMapper_New();
}

QCandlestickModelMapper* q_candlestickmodelmapper_new2(void* parent) {
    return QCandlestickModelMapper_New2((QObject*)parent);
}

const QMetaObject* q_candlestickmodelmapper_meta_object(const void* self) {
    return QCandlestickModelMapper_MetaObject((QCandlestickModelMapper*)self);
}

void q_candlestickmodelmapper_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QCandlestickModelMapper_OnMetaObject((QCandlestickModelMapper*)self, (intptr_t)callback);
}

const QMetaObject* q_candlestickmodelmapper_super_meta_object(const void* self) {
    return QCandlestickModelMapper_SuperMetaObject((QCandlestickModelMapper*)self);
}

void* q_candlestickmodelmapper_metacast(void* self, const char* param1) {
    return QCandlestickModelMapper_Metacast((QCandlestickModelMapper*)self, param1);
}

void q_candlestickmodelmapper_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QCandlestickModelMapper_OnMetacast((QCandlestickModelMapper*)self, (intptr_t)callback);
}

void* q_candlestickmodelmapper_super_metacast(void* self, const char* param1) {
    return QCandlestickModelMapper_SuperMetacast((QCandlestickModelMapper*)self, param1);
}

int32_t q_candlestickmodelmapper_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCandlestickModelMapper_Metacall((QCandlestickModelMapper*)self, param1, param2, param3);
}

void q_candlestickmodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QCandlestickModelMapper_OnMetacall((QCandlestickModelMapper*)self, (intptr_t)callback);
}

int32_t q_candlestickmodelmapper_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCandlestickModelMapper_SuperMetacall((QCandlestickModelMapper*)self, param1, param2, param3);
}

const char* q_candlestickmodelmapper_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_candlestickmodelmapper_set_model(void* self, void* model) {
    QCandlestickModelMapper_SetModel((QCandlestickModelMapper*)self, (QAbstractItemModel*)model);
}

QAbstractItemModel* q_candlestickmodelmapper_model(const void* self) {
    return QCandlestickModelMapper_Model((QCandlestickModelMapper*)self);
}

void q_candlestickmodelmapper_set_series(void* self, void* series) {
    QCandlestickModelMapper_SetSeries((QCandlestickModelMapper*)self, (QCandlestickSeries*)series);
}

QCandlestickSeries* q_candlestickmodelmapper_series(const void* self) {
    return QCandlestickModelMapper_Series((QCandlestickModelMapper*)self);
}

int32_t q_candlestickmodelmapper_orientation(const void* self) {
    return QCandlestickModelMapper_Orientation((QCandlestickModelMapper*)self);
}

void q_candlestickmodelmapper_on_orientation(const void* self, int32_t (*callback)(const void*)) {
    QCandlestickModelMapper_OnOrientation((QCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_candlestickmodelmapper_model_replaced(void* self) {
    QCandlestickModelMapper_ModelReplaced((QCandlestickModelMapper*)self);
}

void q_candlestickmodelmapper_on_model_replaced(void* self, void (*callback)(void*)) {
    QCandlestickModelMapper_Connect_ModelReplaced((QCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_candlestickmodelmapper_series_replaced(void* self) {
    QCandlestickModelMapper_SeriesReplaced((QCandlestickModelMapper*)self);
}

void q_candlestickmodelmapper_on_series_replaced(void* self, void (*callback)(void*)) {
    QCandlestickModelMapper_Connect_SeriesReplaced((QCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_candlestickmodelmapper_set_timestamp(void* self, int timestamp) {
    QCandlestickModelMapper_SetTimestamp((QCandlestickModelMapper*)self, timestamp);
}

int32_t q_candlestickmodelmapper_timestamp(const void* self) {
    return QCandlestickModelMapper_Timestamp((QCandlestickModelMapper*)self);
}

void q_candlestickmodelmapper_set_open(void* self, int open) {
    QCandlestickModelMapper_SetOpen((QCandlestickModelMapper*)self, open);
}

int32_t q_candlestickmodelmapper_open(const void* self) {
    return QCandlestickModelMapper_Open((QCandlestickModelMapper*)self);
}

void q_candlestickmodelmapper_set_high(void* self, int high) {
    QCandlestickModelMapper_SetHigh((QCandlestickModelMapper*)self, high);
}

int32_t q_candlestickmodelmapper_high(const void* self) {
    return QCandlestickModelMapper_High((QCandlestickModelMapper*)self);
}

void q_candlestickmodelmapper_set_low(void* self, int low) {
    QCandlestickModelMapper_SetLow((QCandlestickModelMapper*)self, low);
}

int32_t q_candlestickmodelmapper_low(const void* self) {
    return QCandlestickModelMapper_Low((QCandlestickModelMapper*)self);
}

void q_candlestickmodelmapper_set_close(void* self, int close) {
    QCandlestickModelMapper_SetClose((QCandlestickModelMapper*)self, close);
}

int32_t q_candlestickmodelmapper_close(const void* self) {
    return QCandlestickModelMapper_Close((QCandlestickModelMapper*)self);
}

void q_candlestickmodelmapper_set_first_set_section(void* self, int firstSetSection) {
    QCandlestickModelMapper_SetFirstSetSection((QCandlestickModelMapper*)self, firstSetSection);
}

int32_t q_candlestickmodelmapper_first_set_section(const void* self) {
    return QCandlestickModelMapper_FirstSetSection((QCandlestickModelMapper*)self);
}

void q_candlestickmodelmapper_set_last_set_section(void* self, int lastSetSection) {
    QCandlestickModelMapper_SetLastSetSection((QCandlestickModelMapper*)self, lastSetSection);
}

int32_t q_candlestickmodelmapper_last_set_section(const void* self) {
    return QCandlestickModelMapper_LastSetSection((QCandlestickModelMapper*)self);
}

const char* q_candlestickmodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_candlestickmodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_candlestickmodelmapper_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_candlestickmodelmapper_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_candlestickmodelmapper_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_candlestickmodelmapper_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_candlestickmodelmapper_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_candlestickmodelmapper_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_candlestickmodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_candlestickmodelmapper_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_candlestickmodelmapper_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_candlestickmodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_candlestickmodelmapper_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_candlestickmodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_candlestickmodelmapper_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_candlestickmodelmapper_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_candlestickmodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_candlestickmodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_candlestickmodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_candlestickmodelmapper_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_candlestickmodelmapper_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_candlestickmodelmapper_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_candlestickmodelmapper_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_candlestickmodelmapper_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_candlestickmodelmapper_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_candlestickmodelmapper_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_candlestickmodelmapper_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_candlestickmodelmapper_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_candlestickmodelmapper_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_candlestickmodelmapper_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_candlestickmodelmapper_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_candlestickmodelmapper_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_candlestickmodelmapper_dynamic_property_names\n");
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

QBindingStorage* q_candlestickmodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_candlestickmodelmapper_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_candlestickmodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_candlestickmodelmapper_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_candlestickmodelmapper_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_candlestickmodelmapper_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_candlestickmodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_candlestickmodelmapper_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_candlestickmodelmapper_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_candlestickmodelmapper_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_candlestickmodelmapper_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_candlestickmodelmapper_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_candlestickmodelmapper_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_candlestickmodelmapper_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_candlestickmodelmapper_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_candlestickmodelmapper_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_candlestickmodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_candlestickmodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_candlestickmodelmapper_event(void* self, void* event) {
    return QCandlestickModelMapper_Event((QCandlestickModelMapper*)self, (QEvent*)event);
}

bool q_candlestickmodelmapper_super_event(void* self, void* event) {
    return QCandlestickModelMapper_SuperEvent((QCandlestickModelMapper*)self, (QEvent*)event);
}

void q_candlestickmodelmapper_on_event(void* self, bool (*callback)(void*, void*)) {
    QCandlestickModelMapper_OnEvent((QCandlestickModelMapper*)self, (intptr_t)callback);
}

bool q_candlestickmodelmapper_event_filter(void* self, void* watched, void* event) {
    return QCandlestickModelMapper_EventFilter((QCandlestickModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool q_candlestickmodelmapper_super_event_filter(void* self, void* watched, void* event) {
    return QCandlestickModelMapper_SuperEventFilter((QCandlestickModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

void q_candlestickmodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QCandlestickModelMapper_OnEventFilter((QCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_candlestickmodelmapper_timer_event(void* self, void* event) {
    QCandlestickModelMapper_TimerEvent((QCandlestickModelMapper*)self, (QTimerEvent*)event);
}

void q_candlestickmodelmapper_super_timer_event(void* self, void* event) {
    QCandlestickModelMapper_SuperTimerEvent((QCandlestickModelMapper*)self, (QTimerEvent*)event);
}

void q_candlestickmodelmapper_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QCandlestickModelMapper_OnTimerEvent((QCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_candlestickmodelmapper_child_event(void* self, void* event) {
    QCandlestickModelMapper_ChildEvent((QCandlestickModelMapper*)self, (QChildEvent*)event);
}

void q_candlestickmodelmapper_super_child_event(void* self, void* event) {
    QCandlestickModelMapper_SuperChildEvent((QCandlestickModelMapper*)self, (QChildEvent*)event);
}

void q_candlestickmodelmapper_on_child_event(void* self, void (*callback)(void*, void*)) {
    QCandlestickModelMapper_OnChildEvent((QCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_candlestickmodelmapper_custom_event(void* self, void* event) {
    QCandlestickModelMapper_CustomEvent((QCandlestickModelMapper*)self, (QEvent*)event);
}

void q_candlestickmodelmapper_super_custom_event(void* self, void* event) {
    QCandlestickModelMapper_SuperCustomEvent((QCandlestickModelMapper*)self, (QEvent*)event);
}

void q_candlestickmodelmapper_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QCandlestickModelMapper_OnCustomEvent((QCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_candlestickmodelmapper_connect_notify(void* self, const void* signal) {
    QCandlestickModelMapper_ConnectNotify((QCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_candlestickmodelmapper_super_connect_notify(void* self, const void* signal) {
    QCandlestickModelMapper_SuperConnectNotify((QCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_candlestickmodelmapper_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QCandlestickModelMapper_OnConnectNotify((QCandlestickModelMapper*)self, (intptr_t)callback);
}

void q_candlestickmodelmapper_disconnect_notify(void* self, const void* signal) {
    QCandlestickModelMapper_DisconnectNotify((QCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_candlestickmodelmapper_super_disconnect_notify(void* self, const void* signal) {
    QCandlestickModelMapper_SuperDisconnectNotify((QCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_candlestickmodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QCandlestickModelMapper_OnDisconnectNotify((QCandlestickModelMapper*)self, (intptr_t)callback);
}

QObject* q_candlestickmodelmapper_sender(const void* self) {
    return QCandlestickModelMapper_Sender((QCandlestickModelMapper*)self);
}

int32_t q_candlestickmodelmapper_sender_signal_index(const void* self) {
    return QCandlestickModelMapper_SenderSignalIndex((QCandlestickModelMapper*)self);
}

int32_t q_candlestickmodelmapper_receivers(const void* self, const char* signal) {
    return QCandlestickModelMapper_Receivers((QCandlestickModelMapper*)self, signal);
}

bool q_candlestickmodelmapper_is_signal_connected(const void* self, const void* signal) {
    return QCandlestickModelMapper_IsSignalConnected((QCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

void q_candlestickmodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_candlestickmodelmapper_delete(void* self) {
    QCandlestickModelMapper_Delete((QCandlestickModelMapper*)(self));
}
