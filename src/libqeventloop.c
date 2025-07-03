#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqcoreevent.hpp"
#include "libqeventloop.hpp"
#include "libqeventloop.h"

QEventLoop* q_eventloop_new() {
    return QEventLoop_new();
}

QEventLoop* q_eventloop_new2(void* parent) {
    return QEventLoop_new2((QObject*)parent);
}

const QMetaObject* q_eventloop_meta_object(void* self) {
    return QEventLoop_MetaObject((QEventLoop*)self);
}

void* q_eventloop_metacast(void* self, const char* param1) {
    return QEventLoop_Metacast((QEventLoop*)self, param1);
}

int32_t q_eventloop_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QEventLoop_Metacall((QEventLoop*)self, param1, param2, param3);
}

void q_eventloop_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QEventLoop_OnMetacall((QEventLoop*)self, (intptr_t)slot);
}

int32_t q_eventloop_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QEventLoop_QBaseMetacall((QEventLoop*)self, param1, param2, param3);
}

const char* q_eventloop_tr(const char* s) {
    libqt_string _str = QEventLoop_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_eventloop_process_events(void* self) {
    return QEventLoop_ProcessEvents((QEventLoop*)self);
}

void q_eventloop_process_events2(void* self, int64_t flags, int maximumTime) {
    QEventLoop_ProcessEvents2((QEventLoop*)self, flags, maximumTime);
}

int32_t q_eventloop_exec(void* self) {
    return QEventLoop_Exec((QEventLoop*)self);
}

bool q_eventloop_is_running(void* self) {
    return QEventLoop_IsRunning((QEventLoop*)self);
}

void q_eventloop_wake_up(void* self) {
    QEventLoop_WakeUp((QEventLoop*)self);
}

bool q_eventloop_event(void* self, void* event) {
    return QEventLoop_Event((QEventLoop*)self, (QEvent*)event);
}

void q_eventloop_on_event(void* self, bool (*slot)(void*, void*)) {
    QEventLoop_OnEvent((QEventLoop*)self, (intptr_t)slot);
}

bool q_eventloop_qbase_event(void* self, void* event) {
    return QEventLoop_QBaseEvent((QEventLoop*)self, (QEvent*)event);
}

void q_eventloop_exit(void* self) {
    QEventLoop_Exit((QEventLoop*)self);
}

void q_eventloop_quit(void* self) {
    QEventLoop_Quit((QEventLoop*)self);
}

const char* q_eventloop_tr2(const char* s, const char* c) {
    libqt_string _str = QEventLoop_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_eventloop_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QEventLoop_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_eventloop_process_events1(void* self, int64_t flags) {
    return QEventLoop_ProcessEvents1((QEventLoop*)self, flags);
}

int32_t q_eventloop_exec1(void* self, int64_t flags) {
    return QEventLoop_Exec1((QEventLoop*)self, flags);
}

void q_eventloop_exit1(void* self, int returnCode) {
    QEventLoop_Exit1((QEventLoop*)self, returnCode);
}

const char* q_eventloop_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_eventloop_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_eventloop_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_eventloop_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_eventloop_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_eventloop_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_eventloop_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_eventloop_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_eventloop_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_eventloop_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_eventloop_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_eventloop_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_eventloop_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_eventloop_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_eventloop_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_eventloop_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_eventloop_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_eventloop_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_eventloop_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_eventloop_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_eventloop_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_eventloop_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_eventloop_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_eventloop_dynamic_property_names(void* self) {
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

QBindingStorage* q_eventloop_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_eventloop_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_eventloop_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_eventloop_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_eventloop_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_eventloop_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_eventloop_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_eventloop_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_eventloop_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_eventloop_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_eventloop_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_eventloop_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_eventloop_event_filter(void* self, void* watched, void* event) {
    return QEventLoop_EventFilter((QEventLoop*)self, (QObject*)watched, (QEvent*)event);
}

bool q_eventloop_qbase_event_filter(void* self, void* watched, void* event) {
    return QEventLoop_QBaseEventFilter((QEventLoop*)self, (QObject*)watched, (QEvent*)event);
}

void q_eventloop_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QEventLoop_OnEventFilter((QEventLoop*)self, (intptr_t)slot);
}

void q_eventloop_timer_event(void* self, void* event) {
    QEventLoop_TimerEvent((QEventLoop*)self, (QTimerEvent*)event);
}

void q_eventloop_qbase_timer_event(void* self, void* event) {
    QEventLoop_QBaseTimerEvent((QEventLoop*)self, (QTimerEvent*)event);
}

void q_eventloop_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QEventLoop_OnTimerEvent((QEventLoop*)self, (intptr_t)slot);
}

void q_eventloop_child_event(void* self, void* event) {
    QEventLoop_ChildEvent((QEventLoop*)self, (QChildEvent*)event);
}

void q_eventloop_qbase_child_event(void* self, void* event) {
    QEventLoop_QBaseChildEvent((QEventLoop*)self, (QChildEvent*)event);
}

void q_eventloop_on_child_event(void* self, void (*slot)(void*, void*)) {
    QEventLoop_OnChildEvent((QEventLoop*)self, (intptr_t)slot);
}

void q_eventloop_custom_event(void* self, void* event) {
    QEventLoop_CustomEvent((QEventLoop*)self, (QEvent*)event);
}

void q_eventloop_qbase_custom_event(void* self, void* event) {
    QEventLoop_QBaseCustomEvent((QEventLoop*)self, (QEvent*)event);
}

void q_eventloop_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QEventLoop_OnCustomEvent((QEventLoop*)self, (intptr_t)slot);
}

void q_eventloop_connect_notify(void* self, void* signal) {
    QEventLoop_ConnectNotify((QEventLoop*)self, (QMetaMethod*)signal);
}

void q_eventloop_qbase_connect_notify(void* self, void* signal) {
    QEventLoop_QBaseConnectNotify((QEventLoop*)self, (QMetaMethod*)signal);
}

void q_eventloop_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QEventLoop_OnConnectNotify((QEventLoop*)self, (intptr_t)slot);
}

void q_eventloop_disconnect_notify(void* self, void* signal) {
    QEventLoop_DisconnectNotify((QEventLoop*)self, (QMetaMethod*)signal);
}

void q_eventloop_qbase_disconnect_notify(void* self, void* signal) {
    QEventLoop_QBaseDisconnectNotify((QEventLoop*)self, (QMetaMethod*)signal);
}

void q_eventloop_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QEventLoop_OnDisconnectNotify((QEventLoop*)self, (intptr_t)slot);
}

QObject* q_eventloop_sender(void* self) {
    return QEventLoop_Sender((QEventLoop*)self);
}

QObject* q_eventloop_qbase_sender(void* self) {
    return QEventLoop_QBaseSender((QEventLoop*)self);
}

void q_eventloop_on_sender(void* self, QObject* (*slot)()) {
    QEventLoop_OnSender((QEventLoop*)self, (intptr_t)slot);
}

int32_t q_eventloop_sender_signal_index(void* self) {
    return QEventLoop_SenderSignalIndex((QEventLoop*)self);
}

int32_t q_eventloop_qbase_sender_signal_index(void* self) {
    return QEventLoop_QBaseSenderSignalIndex((QEventLoop*)self);
}

void q_eventloop_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QEventLoop_OnSenderSignalIndex((QEventLoop*)self, (intptr_t)slot);
}

int32_t q_eventloop_receivers(void* self, const char* signal) {
    return QEventLoop_Receivers((QEventLoop*)self, signal);
}

int32_t q_eventloop_qbase_receivers(void* self, const char* signal) {
    return QEventLoop_QBaseReceivers((QEventLoop*)self, signal);
}

void q_eventloop_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QEventLoop_OnReceivers((QEventLoop*)self, (intptr_t)slot);
}

bool q_eventloop_is_signal_connected(void* self, void* signal) {
    return QEventLoop_IsSignalConnected((QEventLoop*)self, (QMetaMethod*)signal);
}

bool q_eventloop_qbase_is_signal_connected(void* self, void* signal) {
    return QEventLoop_QBaseIsSignalConnected((QEventLoop*)self, (QMetaMethod*)signal);
}

void q_eventloop_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QEventLoop_OnIsSignalConnected((QEventLoop*)self, (intptr_t)slot);
}

void q_eventloop_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_eventloop_delete(void* self) {
    QEventLoop_Delete((QEventLoop*)(self));
}

QEventLoopLocker* q_eventlooplocker_new() {
    return QEventLoopLocker_new();
}

QEventLoopLocker* q_eventlooplocker_new2(void* loop) {
    return QEventLoopLocker_new2((QEventLoop*)loop);
}

QEventLoopLocker* q_eventlooplocker_new3(void* thread) {
    return QEventLoopLocker_new3((QThread*)thread);
}

void q_eventlooplocker_delete(void* self) {
    QEventLoopLocker_Delete((QEventLoopLocker*)(self));
}
