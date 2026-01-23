#include "libqcoreevent.hpp"
#include "libqdeadlinetimer.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqrunnable.hpp"
#include "libqthread.hpp"
#include "libqthreadpool.hpp"
#include "libqthreadpool.h"

QThreadPool* q_threadpool_new() {
    return QThreadPool_new();
}

QThreadPool* q_threadpool_new2(void* parent) {
    return QThreadPool_new2((QObject*)parent);
}

const QMetaObject* q_threadpool_meta_object(void* self) {
    return QThreadPool_MetaObject((QThreadPool*)self);
}

void* q_threadpool_metacast(void* self, const char* param1) {
    return QThreadPool_Metacast((QThreadPool*)self, param1);
}

int32_t q_threadpool_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QThreadPool_Metacall((QThreadPool*)self, param1, param2, param3);
}

void q_threadpool_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QThreadPool_OnMetacall((QThreadPool*)self, (intptr_t)callback);
}

int32_t q_threadpool_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QThreadPool_QBaseMetacall((QThreadPool*)self, param1, param2, param3);
}

const char* q_threadpool_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QThreadPool* q_threadpool_global_instance() {
    return QThreadPool_GlobalInstance();
}

void q_threadpool_start(void* self, void* runnable) {
    QThreadPool_Start((QThreadPool*)self, (QRunnable*)runnable);
}

bool q_threadpool_try_start(void* self, void* runnable) {
    return QThreadPool_TryStart((QThreadPool*)self, (QRunnable*)runnable);
}

void q_threadpool_start_on_reserved_thread(void* self, void* runnable) {
    QThreadPool_StartOnReservedThread((QThreadPool*)self, (QRunnable*)runnable);
}

int32_t q_threadpool_expiry_timeout(void* self) {
    return QThreadPool_ExpiryTimeout((QThreadPool*)self);
}

void q_threadpool_set_expiry_timeout(void* self, int expiryTimeout) {
    QThreadPool_SetExpiryTimeout((QThreadPool*)self, expiryTimeout);
}

int32_t q_threadpool_max_thread_count(void* self) {
    return QThreadPool_MaxThreadCount((QThreadPool*)self);
}

void q_threadpool_set_max_thread_count(void* self, int maxThreadCount) {
    QThreadPool_SetMaxThreadCount((QThreadPool*)self, maxThreadCount);
}

int32_t q_threadpool_active_thread_count(void* self) {
    return QThreadPool_ActiveThreadCount((QThreadPool*)self);
}

void q_threadpool_set_stack_size(void* self, uint32_t stackSize) {
    QThreadPool_SetStackSize((QThreadPool*)self, stackSize);
}

uint32_t q_threadpool_stack_size(void* self) {
    return QThreadPool_StackSize((QThreadPool*)self);
}

void q_threadpool_set_thread_priority(void* self, int32_t priority) {
    QThreadPool_SetThreadPriority((QThreadPool*)self, priority);
}

int32_t q_threadpool_thread_priority(void* self) {
    return QThreadPool_ThreadPriority((QThreadPool*)self);
}

void q_threadpool_reserve_thread(void* self) {
    QThreadPool_ReserveThread((QThreadPool*)self);
}

void q_threadpool_release_thread(void* self) {
    QThreadPool_ReleaseThread((QThreadPool*)self);
}

bool q_threadpool_wait_for_done(void* self, int msecs) {
    return QThreadPool_WaitForDone((QThreadPool*)self, msecs);
}

bool q_threadpool_wait_for_done2(void* self) {
    return QThreadPool_WaitForDone2((QThreadPool*)self);
}

void q_threadpool_clear(void* self) {
    QThreadPool_Clear((QThreadPool*)self);
}

bool q_threadpool_contains(void* self, void* thread) {
    return QThreadPool_Contains((QThreadPool*)self, (QThread*)thread);
}

bool q_threadpool_try_take(void* self, void* runnable) {
    return QThreadPool_TryTake((QThreadPool*)self, (QRunnable*)runnable);
}

const char* q_threadpool_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_threadpool_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_threadpool_start2(void* self, void* runnable, int priority) {
    QThreadPool_Start2((QThreadPool*)self, (QRunnable*)runnable, priority);
}

bool q_threadpool_wait_for_done1(void* self, void* deadline) {
    return QThreadPool_WaitForDone1((QThreadPool*)self, (QDeadlineTimer*)deadline);
}

const char* q_threadpool_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_threadpool_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_threadpool_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_threadpool_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_threadpool_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_threadpool_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_threadpool_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_threadpool_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_threadpool_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_threadpool_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_threadpool_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_threadpool_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_threadpool_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_threadpool_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_threadpool_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_threadpool_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_threadpool_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_threadpool_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_threadpool_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_threadpool_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_threadpool_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_threadpool_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_threadpool_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_threadpool_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_threadpool_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_threadpool_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_threadpool_dynamic_property_names\n");
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

QBindingStorage* q_threadpool_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_threadpool_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_threadpool_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_threadpool_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_threadpool_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_threadpool_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_threadpool_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_threadpool_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_threadpool_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_threadpool_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_threadpool_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_threadpool_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_threadpool_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_threadpool_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_threadpool_event(void* self, void* event) {
    return QThreadPool_Event((QThreadPool*)self, (QEvent*)event);
}

bool q_threadpool_qbase_event(void* self, void* event) {
    return QThreadPool_QBaseEvent((QThreadPool*)self, (QEvent*)event);
}

void q_threadpool_on_event(void* self, bool (*callback)(void*, void*)) {
    QThreadPool_OnEvent((QThreadPool*)self, (intptr_t)callback);
}

bool q_threadpool_event_filter(void* self, void* watched, void* event) {
    return QThreadPool_EventFilter((QThreadPool*)self, (QObject*)watched, (QEvent*)event);
}

bool q_threadpool_qbase_event_filter(void* self, void* watched, void* event) {
    return QThreadPool_QBaseEventFilter((QThreadPool*)self, (QObject*)watched, (QEvent*)event);
}

void q_threadpool_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QThreadPool_OnEventFilter((QThreadPool*)self, (intptr_t)callback);
}

void q_threadpool_timer_event(void* self, void* event) {
    QThreadPool_TimerEvent((QThreadPool*)self, (QTimerEvent*)event);
}

void q_threadpool_qbase_timer_event(void* self, void* event) {
    QThreadPool_QBaseTimerEvent((QThreadPool*)self, (QTimerEvent*)event);
}

void q_threadpool_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QThreadPool_OnTimerEvent((QThreadPool*)self, (intptr_t)callback);
}

void q_threadpool_child_event(void* self, void* event) {
    QThreadPool_ChildEvent((QThreadPool*)self, (QChildEvent*)event);
}

void q_threadpool_qbase_child_event(void* self, void* event) {
    QThreadPool_QBaseChildEvent((QThreadPool*)self, (QChildEvent*)event);
}

void q_threadpool_on_child_event(void* self, void (*callback)(void*, void*)) {
    QThreadPool_OnChildEvent((QThreadPool*)self, (intptr_t)callback);
}

void q_threadpool_custom_event(void* self, void* event) {
    QThreadPool_CustomEvent((QThreadPool*)self, (QEvent*)event);
}

void q_threadpool_qbase_custom_event(void* self, void* event) {
    QThreadPool_QBaseCustomEvent((QThreadPool*)self, (QEvent*)event);
}

void q_threadpool_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QThreadPool_OnCustomEvent((QThreadPool*)self, (intptr_t)callback);
}

void q_threadpool_connect_notify(void* self, void* signal) {
    QThreadPool_ConnectNotify((QThreadPool*)self, (QMetaMethod*)signal);
}

void q_threadpool_qbase_connect_notify(void* self, void* signal) {
    QThreadPool_QBaseConnectNotify((QThreadPool*)self, (QMetaMethod*)signal);
}

void q_threadpool_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QThreadPool_OnConnectNotify((QThreadPool*)self, (intptr_t)callback);
}

void q_threadpool_disconnect_notify(void* self, void* signal) {
    QThreadPool_DisconnectNotify((QThreadPool*)self, (QMetaMethod*)signal);
}

void q_threadpool_qbase_disconnect_notify(void* self, void* signal) {
    QThreadPool_QBaseDisconnectNotify((QThreadPool*)self, (QMetaMethod*)signal);
}

void q_threadpool_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QThreadPool_OnDisconnectNotify((QThreadPool*)self, (intptr_t)callback);
}

QObject* q_threadpool_sender(void* self) {
    return QThreadPool_Sender((QThreadPool*)self);
}

QObject* q_threadpool_qbase_sender(void* self) {
    return QThreadPool_QBaseSender((QThreadPool*)self);
}

void q_threadpool_on_sender(void* self, QObject* (*callback)()) {
    QThreadPool_OnSender((QThreadPool*)self, (intptr_t)callback);
}

int32_t q_threadpool_sender_signal_index(void* self) {
    return QThreadPool_SenderSignalIndex((QThreadPool*)self);
}

int32_t q_threadpool_qbase_sender_signal_index(void* self) {
    return QThreadPool_QBaseSenderSignalIndex((QThreadPool*)self);
}

void q_threadpool_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QThreadPool_OnSenderSignalIndex((QThreadPool*)self, (intptr_t)callback);
}

int32_t q_threadpool_receivers(void* self, const char* signal) {
    return QThreadPool_Receivers((QThreadPool*)self, signal);
}

int32_t q_threadpool_qbase_receivers(void* self, const char* signal) {
    return QThreadPool_QBaseReceivers((QThreadPool*)self, signal);
}

void q_threadpool_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QThreadPool_OnReceivers((QThreadPool*)self, (intptr_t)callback);
}

bool q_threadpool_is_signal_connected(void* self, void* signal) {
    return QThreadPool_IsSignalConnected((QThreadPool*)self, (QMetaMethod*)signal);
}

bool q_threadpool_qbase_is_signal_connected(void* self, void* signal) {
    return QThreadPool_QBaseIsSignalConnected((QThreadPool*)self, (QMetaMethod*)signal);
}

void q_threadpool_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QThreadPool_OnIsSignalConnected((QThreadPool*)self, (intptr_t)callback);
}

void q_threadpool_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_threadpool_delete(void* self) {
    QThreadPool_Delete((QThreadPool*)(self));
}
