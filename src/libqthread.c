#include "libqabstracteventdispatcher.hpp"
#include "libqcoreevent.hpp"
#include "libqdeadlinetimer.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqthread.hpp"
#include "libqthread.h"

QThread* q_thread_new() {
    return QThread_new();
}

QThread* q_thread_new2(void* parent) {
    return QThread_new2((QObject*)parent);
}

const QMetaObject* q_thread_meta_object(void* self) {
    return QThread_MetaObject((QThread*)self);
}

void q_thread_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QThread_OnMetaObject((QThread*)self, (intptr_t)callback);
}

const QMetaObject* q_thread_qbase_meta_object(void* self) {
    return QThread_QBaseMetaObject((QThread*)self);
}

void* q_thread_metacast(void* self, const char* param1) {
    return QThread_Metacast((QThread*)self, param1);
}

void q_thread_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QThread_OnMetacast((QThread*)self, (intptr_t)callback);
}

void* q_thread_qbase_metacast(void* self, const char* param1) {
    return QThread_QBaseMetacast((QThread*)self, param1);
}

int32_t q_thread_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QThread_Metacall((QThread*)self, param1, param2, param3);
}

void q_thread_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QThread_OnMetacall((QThread*)self, (intptr_t)callback);
}

int32_t q_thread_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QThread_QBaseMetacall((QThread*)self, param1, param2, param3);
}

const char* q_thread_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void* q_thread_current_thread_id() {
    return QThread_CurrentThreadId();
}

QThread* q_thread_current_thread() {
    return QThread_CurrentThread();
}

bool q_thread_is_main_thread() {
    return QThread_IsMainThread();
}

int32_t q_thread_ideal_thread_count() {
    return QThread_IdealThreadCount();
}

void q_thread_yield_current_thread() {
    QThread_YieldCurrentThread();
}

void q_thread_set_priority(void* self, int32_t priority) {
    QThread_SetPriority((QThread*)self, priority);
}

int32_t q_thread_priority(void* self) {
    return QThread_Priority((QThread*)self);
}

bool q_thread_is_finished(void* self) {
    return QThread_IsFinished((QThread*)self);
}

bool q_thread_is_running(void* self) {
    return QThread_IsRunning((QThread*)self);
}

void q_thread_request_interruption(void* self) {
    QThread_RequestInterruption((QThread*)self);
}

bool q_thread_is_interruption_requested(void* self) {
    return QThread_IsInterruptionRequested((QThread*)self);
}

void q_thread_set_stack_size(void* self, uint32_t stackSize) {
    QThread_SetStackSize((QThread*)self, stackSize);
}

uint32_t q_thread_stack_size(void* self) {
    return QThread_StackSize((QThread*)self);
}

QAbstractEventDispatcher* q_thread_event_dispatcher(void* self) {
    return QThread_EventDispatcher((QThread*)self);
}

void q_thread_set_event_dispatcher(void* self, void* eventDispatcher) {
    QThread_SetEventDispatcher((QThread*)self, (QAbstractEventDispatcher*)eventDispatcher);
}

bool q_thread_event(void* self, void* event) {
    return QThread_Event((QThread*)self, (QEvent*)event);
}

void q_thread_on_event(void* self, bool (*callback)(void*, void*)) {
    QThread_OnEvent((QThread*)self, (intptr_t)callback);
}

bool q_thread_qbase_event(void* self, void* event) {
    return QThread_QBaseEvent((QThread*)self, (QEvent*)event);
}

int32_t q_thread_loop_level(void* self) {
    return QThread_LoopLevel((QThread*)self);
}

bool q_thread_is_current_thread(void* self) {
    return QThread_IsCurrentThread((QThread*)self);
}

void q_thread_start(void* self) {
    QThread_Start((QThread*)self);
}

void q_thread_terminate(void* self) {
    QThread_Terminate((QThread*)self);
}

void q_thread_exit(void* self) {
    QThread_Exit((QThread*)self);
}

void q_thread_quit(void* self) {
    QThread_Quit((QThread*)self);
}

bool q_thread_wait(void* self) {
    return QThread_Wait((QThread*)self);
}

bool q_thread_wait2(void* self, uint64_t time) {
    return QThread_Wait2((QThread*)self, time);
}

void q_thread_sleep(uint64_t param1) {
    QThread_Sleep(param1);
}

void q_thread_msleep(uint64_t param1) {
    QThread_Msleep(param1);
}

void q_thread_usleep(uint64_t param1) {
    QThread_Usleep(param1);
}

void q_thread_sleep2(int64_t nsec) {
    QThread_Sleep2(nsec);
}

void q_thread_run(void* self) {
    QThread_Run((QThread*)self);
}

void q_thread_on_run(void* self, void (*callback)()) {
    QThread_OnRun((QThread*)self, (intptr_t)callback);
}

void q_thread_qbase_run(void* self) {
    QThread_QBaseRun((QThread*)self);
}

int32_t q_thread_exec(void* self) {
    return QThread_Exec((QThread*)self);
}

void q_thread_on_exec(void* self, int32_t (*callback)()) {
    QThread_OnExec((QThread*)self, (intptr_t)callback);
}

int32_t q_thread_qbase_exec(void* self) {
    return QThread_QBaseExec((QThread*)self);
}

const char* q_thread_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_thread_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_thread_start1(void* self, int32_t param1) {
    QThread_Start1((QThread*)self, param1);
}

void q_thread_exit1(void* self, int retcode) {
    QThread_Exit1((QThread*)self, retcode);
}

bool q_thread_wait1(void* self, void* deadline) {
    return QThread_Wait1((QThread*)self, (QDeadlineTimer*)deadline);
}

const char* q_thread_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_thread_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_thread_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_thread_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_thread_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_thread_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_thread_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_thread_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_thread_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_thread_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_thread_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_thread_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_thread_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_thread_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_thread_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_thread_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_thread_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_thread_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_thread_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_thread_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_thread_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_thread_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_thread_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_thread_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_thread_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_thread_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_thread_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_thread_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_thread_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_thread_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_thread_dynamic_property_names\n");
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

QBindingStorage* q_thread_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_thread_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_thread_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_thread_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_thread_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_thread_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_thread_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_thread_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_thread_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_thread_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_thread_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_thread_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_thread_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_thread_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_thread_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_thread_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_thread_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_thread_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_thread_event_filter(void* self, void* watched, void* event) {
    return QThread_EventFilter((QThread*)self, (QObject*)watched, (QEvent*)event);
}

bool q_thread_qbase_event_filter(void* self, void* watched, void* event) {
    return QThread_QBaseEventFilter((QThread*)self, (QObject*)watched, (QEvent*)event);
}

void q_thread_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QThread_OnEventFilter((QThread*)self, (intptr_t)callback);
}

void q_thread_timer_event(void* self, void* event) {
    QThread_TimerEvent((QThread*)self, (QTimerEvent*)event);
}

void q_thread_qbase_timer_event(void* self, void* event) {
    QThread_QBaseTimerEvent((QThread*)self, (QTimerEvent*)event);
}

void q_thread_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QThread_OnTimerEvent((QThread*)self, (intptr_t)callback);
}

void q_thread_child_event(void* self, void* event) {
    QThread_ChildEvent((QThread*)self, (QChildEvent*)event);
}

void q_thread_qbase_child_event(void* self, void* event) {
    QThread_QBaseChildEvent((QThread*)self, (QChildEvent*)event);
}

void q_thread_on_child_event(void* self, void (*callback)(void*, void*)) {
    QThread_OnChildEvent((QThread*)self, (intptr_t)callback);
}

void q_thread_custom_event(void* self, void* event) {
    QThread_CustomEvent((QThread*)self, (QEvent*)event);
}

void q_thread_qbase_custom_event(void* self, void* event) {
    QThread_QBaseCustomEvent((QThread*)self, (QEvent*)event);
}

void q_thread_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QThread_OnCustomEvent((QThread*)self, (intptr_t)callback);
}

void q_thread_connect_notify(void* self, void* signal) {
    QThread_ConnectNotify((QThread*)self, (QMetaMethod*)signal);
}

void q_thread_qbase_connect_notify(void* self, void* signal) {
    QThread_QBaseConnectNotify((QThread*)self, (QMetaMethod*)signal);
}

void q_thread_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QThread_OnConnectNotify((QThread*)self, (intptr_t)callback);
}

void q_thread_disconnect_notify(void* self, void* signal) {
    QThread_DisconnectNotify((QThread*)self, (QMetaMethod*)signal);
}

void q_thread_qbase_disconnect_notify(void* self, void* signal) {
    QThread_QBaseDisconnectNotify((QThread*)self, (QMetaMethod*)signal);
}

void q_thread_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QThread_OnDisconnectNotify((QThread*)self, (intptr_t)callback);
}

QObject* q_thread_sender(void* self) {
    return QThread_Sender((QThread*)self);
}

QObject* q_thread_qbase_sender(void* self) {
    return QThread_QBaseSender((QThread*)self);
}

void q_thread_on_sender(void* self, QObject* (*callback)()) {
    QThread_OnSender((QThread*)self, (intptr_t)callback);
}

int32_t q_thread_sender_signal_index(void* self) {
    return QThread_SenderSignalIndex((QThread*)self);
}

int32_t q_thread_qbase_sender_signal_index(void* self) {
    return QThread_QBaseSenderSignalIndex((QThread*)self);
}

void q_thread_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QThread_OnSenderSignalIndex((QThread*)self, (intptr_t)callback);
}

int32_t q_thread_receivers(void* self, const char* signal) {
    return QThread_Receivers((QThread*)self, signal);
}

int32_t q_thread_qbase_receivers(void* self, const char* signal) {
    return QThread_QBaseReceivers((QThread*)self, signal);
}

void q_thread_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QThread_OnReceivers((QThread*)self, (intptr_t)callback);
}

bool q_thread_is_signal_connected(void* self, void* signal) {
    return QThread_IsSignalConnected((QThread*)self, (QMetaMethod*)signal);
}

bool q_thread_qbase_is_signal_connected(void* self, void* signal) {
    return QThread_QBaseIsSignalConnected((QThread*)self, (QMetaMethod*)signal);
}

void q_thread_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QThread_OnIsSignalConnected((QThread*)self, (intptr_t)callback);
}

void q_thread_on_started(void* self, void (*callback)(void*)) {
    QThread_Connect_Started((QThread*)self, (intptr_t)callback);
}

void q_thread_on_finished(void* self, void (*callback)(void*)) {
    QThread_Connect_Finished((QThread*)self, (intptr_t)callback);
}

void q_thread_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_thread_delete(void* self) {
    QThread_Delete((QThread*)(self));
}
