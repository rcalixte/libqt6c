#include "../libqbrush.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include <string.h>
#include "../libqcoreevent.hpp"
#include "libqcandlestickset.hpp"
#include "libqcandlestickset.h"

QCandlestickSet* q_candlestickset_new() {
    return QCandlestickSet_new();
}

QCandlestickSet* q_candlestickset_new2(double open, double high, double low, double close) {
    return QCandlestickSet_new2(open, high, low, close);
}

QCandlestickSet* q_candlestickset_new3(double timestamp) {
    return QCandlestickSet_new3(timestamp);
}

QCandlestickSet* q_candlestickset_new4(double timestamp, void* parent) {
    return QCandlestickSet_new4(timestamp, (QObject*)parent);
}

QCandlestickSet* q_candlestickset_new5(double open, double high, double low, double close, double timestamp) {
    return QCandlestickSet_new5(open, high, low, close, timestamp);
}

QCandlestickSet* q_candlestickset_new6(double open, double high, double low, double close, double timestamp, void* parent) {
    return QCandlestickSet_new6(open, high, low, close, timestamp, (QObject*)parent);
}

const QMetaObject* q_candlestickset_meta_object(void* self) {
    return QCandlestickSet_MetaObject((QCandlestickSet*)self);
}

void* q_candlestickset_metacast(void* self, const char* param1) {
    return QCandlestickSet_Metacast((QCandlestickSet*)self, param1);
}

int32_t q_candlestickset_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCandlestickSet_Metacall((QCandlestickSet*)self, param1, param2, param3);
}

void q_candlestickset_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QCandlestickSet_OnMetacall((QCandlestickSet*)self, (intptr_t)slot);
}

int32_t q_candlestickset_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCandlestickSet_QBaseMetacall((QCandlestickSet*)self, param1, param2, param3);
}

const char* q_candlestickset_tr(const char* s) {
    libqt_string _str = QCandlestickSet_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_candlestickset_set_timestamp(void* self, double timestamp) {
    QCandlestickSet_SetTimestamp((QCandlestickSet*)self, timestamp);
}

double q_candlestickset_timestamp(void* self) {
    return QCandlestickSet_Timestamp((QCandlestickSet*)self);
}

void q_candlestickset_set_open(void* self, double open) {
    QCandlestickSet_SetOpen((QCandlestickSet*)self, open);
}

double q_candlestickset_open(void* self) {
    return QCandlestickSet_Open((QCandlestickSet*)self);
}

void q_candlestickset_set_high(void* self, double high) {
    QCandlestickSet_SetHigh((QCandlestickSet*)self, high);
}

double q_candlestickset_high(void* self) {
    return QCandlestickSet_High((QCandlestickSet*)self);
}

void q_candlestickset_set_low(void* self, double low) {
    QCandlestickSet_SetLow((QCandlestickSet*)self, low);
}

double q_candlestickset_low(void* self) {
    return QCandlestickSet_Low((QCandlestickSet*)self);
}

void q_candlestickset_set_close(void* self, double close) {
    QCandlestickSet_SetClose((QCandlestickSet*)self, close);
}

double q_candlestickset_close(void* self) {
    return QCandlestickSet_Close((QCandlestickSet*)self);
}

void q_candlestickset_set_brush(void* self, void* brush) {
    QCandlestickSet_SetBrush((QCandlestickSet*)self, (QBrush*)brush);
}

QBrush* q_candlestickset_brush(void* self) {
    return QCandlestickSet_Brush((QCandlestickSet*)self);
}

void q_candlestickset_set_pen(void* self, void* pen) {
    QCandlestickSet_SetPen((QCandlestickSet*)self, (QPen*)pen);
}

QPen* q_candlestickset_pen(void* self) {
    return QCandlestickSet_Pen((QCandlestickSet*)self);
}

void q_candlestickset_clicked(void* self) {
    QCandlestickSet_Clicked((QCandlestickSet*)self);
}

void q_candlestickset_on_clicked(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_Clicked((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_hovered(void* self, bool status) {
    QCandlestickSet_Hovered((QCandlestickSet*)self, status);
}

void q_candlestickset_on_hovered(void* self, void (*slot)(void*, bool)) {
    QCandlestickSet_Connect_Hovered((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_pressed(void* self) {
    QCandlestickSet_Pressed((QCandlestickSet*)self);
}

void q_candlestickset_on_pressed(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_Pressed((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_released(void* self) {
    QCandlestickSet_Released((QCandlestickSet*)self);
}

void q_candlestickset_on_released(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_Released((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_double_clicked(void* self) {
    QCandlestickSet_DoubleClicked((QCandlestickSet*)self);
}

void q_candlestickset_on_double_clicked(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_DoubleClicked((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_timestamp_changed(void* self) {
    QCandlestickSet_TimestampChanged((QCandlestickSet*)self);
}

void q_candlestickset_on_timestamp_changed(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_TimestampChanged((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_open_changed(void* self) {
    QCandlestickSet_OpenChanged((QCandlestickSet*)self);
}

void q_candlestickset_on_open_changed(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_OpenChanged((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_high_changed(void* self) {
    QCandlestickSet_HighChanged((QCandlestickSet*)self);
}

void q_candlestickset_on_high_changed(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_HighChanged((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_low_changed(void* self) {
    QCandlestickSet_LowChanged((QCandlestickSet*)self);
}

void q_candlestickset_on_low_changed(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_LowChanged((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_close_changed(void* self) {
    QCandlestickSet_CloseChanged((QCandlestickSet*)self);
}

void q_candlestickset_on_close_changed(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_CloseChanged((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_brush_changed(void* self) {
    QCandlestickSet_BrushChanged((QCandlestickSet*)self);
}

void q_candlestickset_on_brush_changed(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_BrushChanged((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_pen_changed(void* self) {
    QCandlestickSet_PenChanged((QCandlestickSet*)self);
}

void q_candlestickset_on_pen_changed(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_PenChanged((QCandlestickSet*)self, (intptr_t)slot);
}

const char* q_candlestickset_tr2(const char* s, const char* c) {
    libqt_string _str = QCandlestickSet_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_candlestickset_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCandlestickSet_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_candlestickset_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_candlestickset_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_candlestickset_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_candlestickset_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_candlestickset_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_candlestickset_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_candlestickset_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_candlestickset_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_candlestickset_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_candlestickset_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_candlestickset_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_candlestickset_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_candlestickset_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_candlestickset_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_candlestickset_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_candlestickset_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_candlestickset_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_candlestickset_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_candlestickset_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_candlestickset_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_candlestickset_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_candlestickset_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_candlestickset_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_candlestickset_dynamic_property_names(void* self) {
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

QBindingStorage* q_candlestickset_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_candlestickset_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_candlestickset_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_candlestickset_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_candlestickset_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_candlestickset_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_candlestickset_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_candlestickset_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_candlestickset_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_candlestickset_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_candlestickset_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_candlestickset_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_candlestickset_event(void* self, void* event) {
    return QCandlestickSet_Event((QCandlestickSet*)self, (QEvent*)event);
}

bool q_candlestickset_qbase_event(void* self, void* event) {
    return QCandlestickSet_QBaseEvent((QCandlestickSet*)self, (QEvent*)event);
}

void q_candlestickset_on_event(void* self, bool (*slot)(void*, void*)) {
    QCandlestickSet_OnEvent((QCandlestickSet*)self, (intptr_t)slot);
}

bool q_candlestickset_event_filter(void* self, void* watched, void* event) {
    return QCandlestickSet_EventFilter((QCandlestickSet*)self, (QObject*)watched, (QEvent*)event);
}

bool q_candlestickset_qbase_event_filter(void* self, void* watched, void* event) {
    return QCandlestickSet_QBaseEventFilter((QCandlestickSet*)self, (QObject*)watched, (QEvent*)event);
}

void q_candlestickset_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QCandlestickSet_OnEventFilter((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_timer_event(void* self, void* event) {
    QCandlestickSet_TimerEvent((QCandlestickSet*)self, (QTimerEvent*)event);
}

void q_candlestickset_qbase_timer_event(void* self, void* event) {
    QCandlestickSet_QBaseTimerEvent((QCandlestickSet*)self, (QTimerEvent*)event);
}

void q_candlestickset_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QCandlestickSet_OnTimerEvent((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_child_event(void* self, void* event) {
    QCandlestickSet_ChildEvent((QCandlestickSet*)self, (QChildEvent*)event);
}

void q_candlestickset_qbase_child_event(void* self, void* event) {
    QCandlestickSet_QBaseChildEvent((QCandlestickSet*)self, (QChildEvent*)event);
}

void q_candlestickset_on_child_event(void* self, void (*slot)(void*, void*)) {
    QCandlestickSet_OnChildEvent((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_custom_event(void* self, void* event) {
    QCandlestickSet_CustomEvent((QCandlestickSet*)self, (QEvent*)event);
}

void q_candlestickset_qbase_custom_event(void* self, void* event) {
    QCandlestickSet_QBaseCustomEvent((QCandlestickSet*)self, (QEvent*)event);
}

void q_candlestickset_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QCandlestickSet_OnCustomEvent((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_connect_notify(void* self, void* signal) {
    QCandlestickSet_ConnectNotify((QCandlestickSet*)self, (QMetaMethod*)signal);
}

void q_candlestickset_qbase_connect_notify(void* self, void* signal) {
    QCandlestickSet_QBaseConnectNotify((QCandlestickSet*)self, (QMetaMethod*)signal);
}

void q_candlestickset_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QCandlestickSet_OnConnectNotify((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_disconnect_notify(void* self, void* signal) {
    QCandlestickSet_DisconnectNotify((QCandlestickSet*)self, (QMetaMethod*)signal);
}

void q_candlestickset_qbase_disconnect_notify(void* self, void* signal) {
    QCandlestickSet_QBaseDisconnectNotify((QCandlestickSet*)self, (QMetaMethod*)signal);
}

void q_candlestickset_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QCandlestickSet_OnDisconnectNotify((QCandlestickSet*)self, (intptr_t)slot);
}

QObject* q_candlestickset_sender(void* self) {
    return QCandlestickSet_Sender((QCandlestickSet*)self);
}

QObject* q_candlestickset_qbase_sender(void* self) {
    return QCandlestickSet_QBaseSender((QCandlestickSet*)self);
}

void q_candlestickset_on_sender(void* self, QObject* (*slot)()) {
    QCandlestickSet_OnSender((QCandlestickSet*)self, (intptr_t)slot);
}

int32_t q_candlestickset_sender_signal_index(void* self) {
    return QCandlestickSet_SenderSignalIndex((QCandlestickSet*)self);
}

int32_t q_candlestickset_qbase_sender_signal_index(void* self) {
    return QCandlestickSet_QBaseSenderSignalIndex((QCandlestickSet*)self);
}

void q_candlestickset_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QCandlestickSet_OnSenderSignalIndex((QCandlestickSet*)self, (intptr_t)slot);
}

int32_t q_candlestickset_receivers(void* self, const char* signal) {
    return QCandlestickSet_Receivers((QCandlestickSet*)self, signal);
}

int32_t q_candlestickset_qbase_receivers(void* self, const char* signal) {
    return QCandlestickSet_QBaseReceivers((QCandlestickSet*)self, signal);
}

void q_candlestickset_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QCandlestickSet_OnReceivers((QCandlestickSet*)self, (intptr_t)slot);
}

bool q_candlestickset_is_signal_connected(void* self, void* signal) {
    return QCandlestickSet_IsSignalConnected((QCandlestickSet*)self, (QMetaMethod*)signal);
}

bool q_candlestickset_qbase_is_signal_connected(void* self, void* signal) {
    return QCandlestickSet_QBaseIsSignalConnected((QCandlestickSet*)self, (QMetaMethod*)signal);
}

void q_candlestickset_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QCandlestickSet_OnIsSignalConnected((QCandlestickSet*)self, (intptr_t)slot);
}

void q_candlestickset_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_candlestickset_delete(void* self) {
    QCandlestickSet_Delete((QCandlestickSet*)(self));
}
