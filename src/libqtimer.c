#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqtimer.hpp"
#include "libqtimer.h"

QTimer* q_timer_new() {
    return QTimer_new();
}

QTimer* q_timer_new2(void* parent) {
    return QTimer_new2((QObject*)parent);
}

const QMetaObject* q_timer_meta_object(void* self) {
    return QTimer_MetaObject((QTimer*)self);
}

void* q_timer_metacast(void* self, const char* param1) {
    return QTimer_Metacast((QTimer*)self, param1);
}

int32_t q_timer_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTimer_Metacall((QTimer*)self, param1, param2, param3);
}

void q_timer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QTimer_OnMetacall((QTimer*)self, (intptr_t)callback);
}

int32_t q_timer_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTimer_QBaseMetacall((QTimer*)self, param1, param2, param3);
}

const char* q_timer_tr(const char* s) {
    libqt_string _str = QTimer_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_timer_is_active(void* self) {
    return QTimer_IsActive((QTimer*)self);
}

int32_t q_timer_timer_id(void* self) {
    return QTimer_TimerId((QTimer*)self);
}

int32_t q_timer_id(void* self) {
    return QTimer_Id((QTimer*)self);
}

void q_timer_set_interval(void* self, int msec) {
    QTimer_SetInterval((QTimer*)self, msec);
}

int32_t q_timer_interval(void* self) {
    return QTimer_Interval((QTimer*)self);
}

int32_t q_timer_remaining_time(void* self) {
    return QTimer_RemainingTime((QTimer*)self);
}

void q_timer_set_timer_type(void* self, int32_t atype) {
    QTimer_SetTimerType((QTimer*)self, atype);
}

int32_t q_timer_timer_type(void* self) {
    return QTimer_TimerType((QTimer*)self);
}

void q_timer_set_single_shot(void* self, bool singleShot) {
    QTimer_SetSingleShot((QTimer*)self, singleShot);
}

bool q_timer_is_single_shot(void* self) {
    return QTimer_IsSingleShot((QTimer*)self);
}

void q_timer_start(void* self, int msec) {
    QTimer_Start((QTimer*)self, msec);
}

void q_timer_start2(void* self) {
    QTimer_Start2((QTimer*)self);
}

void q_timer_stop(void* self) {
    QTimer_Stop((QTimer*)self);
}

void q_timer_timer_event(void* self, void* param1) {
    QTimer_TimerEvent((QTimer*)self, (QTimerEvent*)param1);
}

void q_timer_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QTimer_OnTimerEvent((QTimer*)self, (intptr_t)callback);
}

void q_timer_qbase_timer_event(void* self, void* param1) {
    QTimer_QBaseTimerEvent((QTimer*)self, (QTimerEvent*)param1);
}

const char* q_timer_tr2(const char* s, const char* c) {
    libqt_string _str = QTimer_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_timer_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTimer_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_timer_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_timer_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_timer_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_timer_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_timer_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_timer_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_timer_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_timer_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_timer_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_timer_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_timer_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_timer_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_timer_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_timer_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_timer_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_timer_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_timer_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_timer_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_timer_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_timer_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_timer_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_timer_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_timer_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_timer_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_timer_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_timer_dynamic_property_names");
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

QBindingStorage* q_timer_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_timer_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_timer_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_timer_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_timer_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_timer_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_timer_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_timer_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_timer_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_timer_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_timer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_timer_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_timer_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_timer_event(void* self, void* event) {
    return QTimer_Event((QTimer*)self, (QEvent*)event);
}

bool q_timer_qbase_event(void* self, void* event) {
    return QTimer_QBaseEvent((QTimer*)self, (QEvent*)event);
}

void q_timer_on_event(void* self, bool (*callback)(void*, void*)) {
    QTimer_OnEvent((QTimer*)self, (intptr_t)callback);
}

bool q_timer_event_filter(void* self, void* watched, void* event) {
    return QTimer_EventFilter((QTimer*)self, (QObject*)watched, (QEvent*)event);
}

bool q_timer_qbase_event_filter(void* self, void* watched, void* event) {
    return QTimer_QBaseEventFilter((QTimer*)self, (QObject*)watched, (QEvent*)event);
}

void q_timer_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QTimer_OnEventFilter((QTimer*)self, (intptr_t)callback);
}

void q_timer_child_event(void* self, void* event) {
    QTimer_ChildEvent((QTimer*)self, (QChildEvent*)event);
}

void q_timer_qbase_child_event(void* self, void* event) {
    QTimer_QBaseChildEvent((QTimer*)self, (QChildEvent*)event);
}

void q_timer_on_child_event(void* self, void (*callback)(void*, void*)) {
    QTimer_OnChildEvent((QTimer*)self, (intptr_t)callback);
}

void q_timer_custom_event(void* self, void* event) {
    QTimer_CustomEvent((QTimer*)self, (QEvent*)event);
}

void q_timer_qbase_custom_event(void* self, void* event) {
    QTimer_QBaseCustomEvent((QTimer*)self, (QEvent*)event);
}

void q_timer_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QTimer_OnCustomEvent((QTimer*)self, (intptr_t)callback);
}

void q_timer_connect_notify(void* self, void* signal) {
    QTimer_ConnectNotify((QTimer*)self, (QMetaMethod*)signal);
}

void q_timer_qbase_connect_notify(void* self, void* signal) {
    QTimer_QBaseConnectNotify((QTimer*)self, (QMetaMethod*)signal);
}

void q_timer_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QTimer_OnConnectNotify((QTimer*)self, (intptr_t)callback);
}

void q_timer_disconnect_notify(void* self, void* signal) {
    QTimer_DisconnectNotify((QTimer*)self, (QMetaMethod*)signal);
}

void q_timer_qbase_disconnect_notify(void* self, void* signal) {
    QTimer_QBaseDisconnectNotify((QTimer*)self, (QMetaMethod*)signal);
}

void q_timer_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QTimer_OnDisconnectNotify((QTimer*)self, (intptr_t)callback);
}

QObject* q_timer_sender(void* self) {
    return QTimer_Sender((QTimer*)self);
}

QObject* q_timer_qbase_sender(void* self) {
    return QTimer_QBaseSender((QTimer*)self);
}

void q_timer_on_sender(void* self, QObject* (*callback)()) {
    QTimer_OnSender((QTimer*)self, (intptr_t)callback);
}

int32_t q_timer_sender_signal_index(void* self) {
    return QTimer_SenderSignalIndex((QTimer*)self);
}

int32_t q_timer_qbase_sender_signal_index(void* self) {
    return QTimer_QBaseSenderSignalIndex((QTimer*)self);
}

void q_timer_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QTimer_OnSenderSignalIndex((QTimer*)self, (intptr_t)callback);
}

int32_t q_timer_receivers(void* self, const char* signal) {
    return QTimer_Receivers((QTimer*)self, signal);
}

int32_t q_timer_qbase_receivers(void* self, const char* signal) {
    return QTimer_QBaseReceivers((QTimer*)self, signal);
}

void q_timer_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QTimer_OnReceivers((QTimer*)self, (intptr_t)callback);
}

bool q_timer_is_signal_connected(void* self, void* signal) {
    return QTimer_IsSignalConnected((QTimer*)self, (QMetaMethod*)signal);
}

bool q_timer_qbase_is_signal_connected(void* self, void* signal) {
    return QTimer_QBaseIsSignalConnected((QTimer*)self, (QMetaMethod*)signal);
}

void q_timer_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QTimer_OnIsSignalConnected((QTimer*)self, (intptr_t)callback);
}

void q_timer_on_timeout(void* self, void (*callback)(void*)) {
    QTimer_Connect_Timeout((QTimer*)self, (intptr_t)callback);
}

void q_timer_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_timer_delete(void* self) {
    QTimer_Delete((QTimer*)(self));
}
