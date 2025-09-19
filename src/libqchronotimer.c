#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqchronotimer.hpp"
#include "libqchronotimer.h"

QChronoTimer* q_chronotimer_new() {
    return QChronoTimer_new();
}

QChronoTimer* q_chronotimer_new2(void* parent) {
    return QChronoTimer_new2((QObject*)parent);
}

const QMetaObject* q_chronotimer_meta_object(void* self) {
    return QChronoTimer_MetaObject((QChronoTimer*)self);
}

void* q_chronotimer_metacast(void* self, const char* param1) {
    return QChronoTimer_Metacast((QChronoTimer*)self, param1);
}

int32_t q_chronotimer_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QChronoTimer_Metacall((QChronoTimer*)self, param1, param2, param3);
}

void q_chronotimer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QChronoTimer_OnMetacall((QChronoTimer*)self, (intptr_t)callback);
}

int32_t q_chronotimer_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QChronoTimer_QBaseMetacall((QChronoTimer*)self, param1, param2, param3);
}

const char* q_chronotimer_tr(const char* s) {
    libqt_string _str = QChronoTimer_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_chronotimer_is_active(void* self) {
    return QChronoTimer_IsActive((QChronoTimer*)self);
}

void q_chronotimer_set_timer_type(void* self, int32_t atype) {
    QChronoTimer_SetTimerType((QChronoTimer*)self, atype);
}

int32_t q_chronotimer_timer_type(void* self) {
    return QChronoTimer_TimerType((QChronoTimer*)self);
}

void q_chronotimer_set_single_shot(void* self, bool singleShot) {
    QChronoTimer_SetSingleShot((QChronoTimer*)self, singleShot);
}

bool q_chronotimer_is_single_shot(void* self) {
    return QChronoTimer_IsSingleShot((QChronoTimer*)self);
}

void q_chronotimer_start(void* self) {
    QChronoTimer_Start((QChronoTimer*)self);
}

void q_chronotimer_stop(void* self) {
    QChronoTimer_Stop((QChronoTimer*)self);
}

void q_chronotimer_timer_event(void* self, void* param1) {
    QChronoTimer_TimerEvent((QChronoTimer*)self, (QTimerEvent*)param1);
}

void q_chronotimer_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QChronoTimer_OnTimerEvent((QChronoTimer*)self, (intptr_t)callback);
}

void q_chronotimer_qbase_timer_event(void* self, void* param1) {
    QChronoTimer_QBaseTimerEvent((QChronoTimer*)self, (QTimerEvent*)param1);
}

const char* q_chronotimer_tr2(const char* s, const char* c) {
    libqt_string _str = QChronoTimer_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_chronotimer_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QChronoTimer_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_chronotimer_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_chronotimer_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_chronotimer_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_chronotimer_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_chronotimer_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_chronotimer_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_chronotimer_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_chronotimer_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_chronotimer_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_chronotimer_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_chronotimer_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_chronotimer_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_chronotimer_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_chronotimer_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_chronotimer_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_chronotimer_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_chronotimer_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_chronotimer_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_chronotimer_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_chronotimer_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_chronotimer_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_chronotimer_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_chronotimer_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_chronotimer_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_chronotimer_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_chronotimer_dynamic_property_names");
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

QBindingStorage* q_chronotimer_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_chronotimer_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_chronotimer_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_chronotimer_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_chronotimer_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_chronotimer_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_chronotimer_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_chronotimer_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_chronotimer_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_chronotimer_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_chronotimer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_chronotimer_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_chronotimer_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_chronotimer_event(void* self, void* event) {
    return QChronoTimer_Event((QChronoTimer*)self, (QEvent*)event);
}

bool q_chronotimer_qbase_event(void* self, void* event) {
    return QChronoTimer_QBaseEvent((QChronoTimer*)self, (QEvent*)event);
}

void q_chronotimer_on_event(void* self, bool (*callback)(void*, void*)) {
    QChronoTimer_OnEvent((QChronoTimer*)self, (intptr_t)callback);
}

bool q_chronotimer_event_filter(void* self, void* watched, void* event) {
    return QChronoTimer_EventFilter((QChronoTimer*)self, (QObject*)watched, (QEvent*)event);
}

bool q_chronotimer_qbase_event_filter(void* self, void* watched, void* event) {
    return QChronoTimer_QBaseEventFilter((QChronoTimer*)self, (QObject*)watched, (QEvent*)event);
}

void q_chronotimer_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QChronoTimer_OnEventFilter((QChronoTimer*)self, (intptr_t)callback);
}

void q_chronotimer_child_event(void* self, void* event) {
    QChronoTimer_ChildEvent((QChronoTimer*)self, (QChildEvent*)event);
}

void q_chronotimer_qbase_child_event(void* self, void* event) {
    QChronoTimer_QBaseChildEvent((QChronoTimer*)self, (QChildEvent*)event);
}

void q_chronotimer_on_child_event(void* self, void (*callback)(void*, void*)) {
    QChronoTimer_OnChildEvent((QChronoTimer*)self, (intptr_t)callback);
}

void q_chronotimer_custom_event(void* self, void* event) {
    QChronoTimer_CustomEvent((QChronoTimer*)self, (QEvent*)event);
}

void q_chronotimer_qbase_custom_event(void* self, void* event) {
    QChronoTimer_QBaseCustomEvent((QChronoTimer*)self, (QEvent*)event);
}

void q_chronotimer_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QChronoTimer_OnCustomEvent((QChronoTimer*)self, (intptr_t)callback);
}

void q_chronotimer_connect_notify(void* self, void* signal) {
    QChronoTimer_ConnectNotify((QChronoTimer*)self, (QMetaMethod*)signal);
}

void q_chronotimer_qbase_connect_notify(void* self, void* signal) {
    QChronoTimer_QBaseConnectNotify((QChronoTimer*)self, (QMetaMethod*)signal);
}

void q_chronotimer_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QChronoTimer_OnConnectNotify((QChronoTimer*)self, (intptr_t)callback);
}

void q_chronotimer_disconnect_notify(void* self, void* signal) {
    QChronoTimer_DisconnectNotify((QChronoTimer*)self, (QMetaMethod*)signal);
}

void q_chronotimer_qbase_disconnect_notify(void* self, void* signal) {
    QChronoTimer_QBaseDisconnectNotify((QChronoTimer*)self, (QMetaMethod*)signal);
}

void q_chronotimer_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QChronoTimer_OnDisconnectNotify((QChronoTimer*)self, (intptr_t)callback);
}

QObject* q_chronotimer_sender(void* self) {
    return QChronoTimer_Sender((QChronoTimer*)self);
}

QObject* q_chronotimer_qbase_sender(void* self) {
    return QChronoTimer_QBaseSender((QChronoTimer*)self);
}

void q_chronotimer_on_sender(void* self, QObject* (*callback)()) {
    QChronoTimer_OnSender((QChronoTimer*)self, (intptr_t)callback);
}

int32_t q_chronotimer_sender_signal_index(void* self) {
    return QChronoTimer_SenderSignalIndex((QChronoTimer*)self);
}

int32_t q_chronotimer_qbase_sender_signal_index(void* self) {
    return QChronoTimer_QBaseSenderSignalIndex((QChronoTimer*)self);
}

void q_chronotimer_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QChronoTimer_OnSenderSignalIndex((QChronoTimer*)self, (intptr_t)callback);
}

int32_t q_chronotimer_receivers(void* self, const char* signal) {
    return QChronoTimer_Receivers((QChronoTimer*)self, signal);
}

int32_t q_chronotimer_qbase_receivers(void* self, const char* signal) {
    return QChronoTimer_QBaseReceivers((QChronoTimer*)self, signal);
}

void q_chronotimer_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QChronoTimer_OnReceivers((QChronoTimer*)self, (intptr_t)callback);
}

bool q_chronotimer_is_signal_connected(void* self, void* signal) {
    return QChronoTimer_IsSignalConnected((QChronoTimer*)self, (QMetaMethod*)signal);
}

bool q_chronotimer_qbase_is_signal_connected(void* self, void* signal) {
    return QChronoTimer_QBaseIsSignalConnected((QChronoTimer*)self, (QMetaMethod*)signal);
}

void q_chronotimer_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QChronoTimer_OnIsSignalConnected((QChronoTimer*)self, (intptr_t)callback);
}

void q_chronotimer_on_timeout(void* self, void (*callback)(void*)) {
    QChronoTimer_Connect_Timeout((QChronoTimer*)self, (intptr_t)callback);
}

void q_chronotimer_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_chronotimer_delete(void* self) {
    QChronoTimer_Delete((QChronoTimer*)(self));
}
