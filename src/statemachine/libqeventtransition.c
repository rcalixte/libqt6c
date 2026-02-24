#include "libqabstracttransition.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqstate.hpp"
#include "libqeventtransition.hpp"
#include "libqeventtransition.h"

QEventTransition* q_eventtransition_new() {
    return QEventTransition_new();
}

QEventTransition* q_eventtransition_new2(void* object, int32_t type) {
    return QEventTransition_new2((QObject*)object, type);
}

QEventTransition* q_eventtransition_new3(void* sourceState) {
    return QEventTransition_new3((QState*)sourceState);
}

QEventTransition* q_eventtransition_new4(void* object, int32_t type, void* sourceState) {
    return QEventTransition_new4((QObject*)object, type, (QState*)sourceState);
}

const QMetaObject* q_eventtransition_meta_object(void* self) {
    return QEventTransition_MetaObject((QEventTransition*)self);
}

void q_eventtransition_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QEventTransition_OnMetaObject((QEventTransition*)self, (intptr_t)callback);
}

const QMetaObject* q_eventtransition_super_meta_object(void* self) {
    return QEventTransition_SuperMetaObject((QEventTransition*)self);
}

void* q_eventtransition_metacast(void* self, const char* param1) {
    return QEventTransition_Metacast((QEventTransition*)self, param1);
}

void q_eventtransition_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QEventTransition_OnMetacast((QEventTransition*)self, (intptr_t)callback);
}

void* q_eventtransition_super_metacast(void* self, const char* param1) {
    return QEventTransition_SuperMetacast((QEventTransition*)self, param1);
}

int32_t q_eventtransition_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QEventTransition_Metacall((QEventTransition*)self, param1, param2, param3);
}

void q_eventtransition_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QEventTransition_OnMetacall((QEventTransition*)self, (intptr_t)callback);
}

int32_t q_eventtransition_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QEventTransition_SuperMetacall((QEventTransition*)self, param1, param2, param3);
}

const char* q_eventtransition_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_eventtransition_event_source(void* self) {
    return QEventTransition_EventSource((QEventTransition*)self);
}

void q_eventtransition_set_event_source(void* self, void* object) {
    QEventTransition_SetEventSource((QEventTransition*)self, (QObject*)object);
}

int32_t q_eventtransition_event_type(void* self) {
    return QEventTransition_EventType((QEventTransition*)self);
}

void q_eventtransition_set_event_type(void* self, int32_t type) {
    QEventTransition_SetEventType((QEventTransition*)self, type);
}

bool q_eventtransition_event_test(void* self, void* event) {
    return QEventTransition_EventTest((QEventTransition*)self, (QEvent*)event);
}

void q_eventtransition_on_event_test(void* self, bool (*callback)(void*, void*)) {
    QEventTransition_OnEventTest((QEventTransition*)self, (intptr_t)callback);
}

bool q_eventtransition_super_event_test(void* self, void* event) {
    return QEventTransition_SuperEventTest((QEventTransition*)self, (QEvent*)event);
}

void q_eventtransition_on_transition(void* self, void* event) {
    QEventTransition_OnTransition((QEventTransition*)self, (QEvent*)event);
}

void q_eventtransition_on_on_transition(void* self, void (*callback)(void*, void*)) {
    QEventTransition_OnOnTransition((QEventTransition*)self, (intptr_t)callback);
}

void q_eventtransition_super_on_transition(void* self, void* event) {
    QEventTransition_SuperOnTransition((QEventTransition*)self, (QEvent*)event);
}

bool q_eventtransition_event(void* self, void* e) {
    return QEventTransition_Event((QEventTransition*)self, (QEvent*)e);
}

void q_eventtransition_on_event(void* self, bool (*callback)(void*, void*)) {
    QEventTransition_OnEvent((QEventTransition*)self, (intptr_t)callback);
}

bool q_eventtransition_super_event(void* self, void* e) {
    return QEventTransition_SuperEvent((QEventTransition*)self, (QEvent*)e);
}

const char* q_eventtransition_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_eventtransition_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QState* q_eventtransition_source_state(void* self) {
    return QAbstractTransition_SourceState((QAbstractTransition*)self);
}

QAbstractState* q_eventtransition_target_state(void* self) {
    return QAbstractTransition_TargetState((QAbstractTransition*)self);
}

void q_eventtransition_set_target_state(void* self, void* target) {
    QAbstractTransition_SetTargetState((QAbstractTransition*)self, (QAbstractState*)target);
}

libqt_list /* of QAbstractState* */ q_eventtransition_target_states(void* self) {
    libqt_list _arr = QAbstractTransition_TargetStates((QAbstractTransition*)self);
    return _arr;
}

void q_eventtransition_set_target_states(void* self, libqt_list /* of QAbstractState* */ targets) {
    QAbstractTransition_SetTargetStates((QAbstractTransition*)self, targets);
}

int32_t q_eventtransition_transition_type(void* self) {
    return QAbstractTransition_TransitionType((QAbstractTransition*)self);
}

void q_eventtransition_set_transition_type(void* self, int32_t type) {
    QAbstractTransition_SetTransitionType((QAbstractTransition*)self, type);
}

QStateMachine* q_eventtransition_machine(void* self) {
    return QAbstractTransition_Machine((QAbstractTransition*)self);
}

void q_eventtransition_add_animation(void* self, void* animation) {
    QAbstractTransition_AddAnimation((QAbstractTransition*)self, (QAbstractAnimation*)animation);
}

void q_eventtransition_remove_animation(void* self, void* animation) {
    QAbstractTransition_RemoveAnimation((QAbstractTransition*)self, (QAbstractAnimation*)animation);
}

libqt_list /* of QAbstractAnimation* */ q_eventtransition_animations(void* self) {
    libqt_list _arr = QAbstractTransition_Animations((QAbstractTransition*)self);
    return _arr;
}

const char* q_eventtransition_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_eventtransition_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_eventtransition_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_eventtransition_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_eventtransition_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_eventtransition_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_eventtransition_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_eventtransition_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_eventtransition_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_eventtransition_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_eventtransition_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_eventtransition_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_eventtransition_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_eventtransition_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_eventtransition_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_eventtransition_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_eventtransition_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_eventtransition_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_eventtransition_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_eventtransition_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_eventtransition_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_eventtransition_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_eventtransition_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_eventtransition_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_eventtransition_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_eventtransition_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_eventtransition_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_eventtransition_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_eventtransition_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_eventtransition_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_eventtransition_dynamic_property_names\n");
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

QBindingStorage* q_eventtransition_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_eventtransition_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_eventtransition_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_eventtransition_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_eventtransition_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_eventtransition_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_eventtransition_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_eventtransition_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_eventtransition_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_eventtransition_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_eventtransition_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_eventtransition_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_eventtransition_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_eventtransition_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_eventtransition_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_eventtransition_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_eventtransition_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_eventtransition_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_eventtransition_event_filter(void* self, void* watched, void* event) {
    return QEventTransition_EventFilter((QEventTransition*)self, (QObject*)watched, (QEvent*)event);
}

bool q_eventtransition_super_event_filter(void* self, void* watched, void* event) {
    return QEventTransition_SuperEventFilter((QEventTransition*)self, (QObject*)watched, (QEvent*)event);
}

void q_eventtransition_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QEventTransition_OnEventFilter((QEventTransition*)self, (intptr_t)callback);
}

void q_eventtransition_timer_event(void* self, void* event) {
    QEventTransition_TimerEvent((QEventTransition*)self, (QTimerEvent*)event);
}

void q_eventtransition_super_timer_event(void* self, void* event) {
    QEventTransition_SuperTimerEvent((QEventTransition*)self, (QTimerEvent*)event);
}

void q_eventtransition_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QEventTransition_OnTimerEvent((QEventTransition*)self, (intptr_t)callback);
}

void q_eventtransition_child_event(void* self, void* event) {
    QEventTransition_ChildEvent((QEventTransition*)self, (QChildEvent*)event);
}

void q_eventtransition_super_child_event(void* self, void* event) {
    QEventTransition_SuperChildEvent((QEventTransition*)self, (QChildEvent*)event);
}

void q_eventtransition_on_child_event(void* self, void (*callback)(void*, void*)) {
    QEventTransition_OnChildEvent((QEventTransition*)self, (intptr_t)callback);
}

void q_eventtransition_custom_event(void* self, void* event) {
    QEventTransition_CustomEvent((QEventTransition*)self, (QEvent*)event);
}

void q_eventtransition_super_custom_event(void* self, void* event) {
    QEventTransition_SuperCustomEvent((QEventTransition*)self, (QEvent*)event);
}

void q_eventtransition_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QEventTransition_OnCustomEvent((QEventTransition*)self, (intptr_t)callback);
}

void q_eventtransition_connect_notify(void* self, void* signal) {
    QEventTransition_ConnectNotify((QEventTransition*)self, (QMetaMethod*)signal);
}

void q_eventtransition_super_connect_notify(void* self, void* signal) {
    QEventTransition_SuperConnectNotify((QEventTransition*)self, (QMetaMethod*)signal);
}

void q_eventtransition_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QEventTransition_OnConnectNotify((QEventTransition*)self, (intptr_t)callback);
}

void q_eventtransition_disconnect_notify(void* self, void* signal) {
    QEventTransition_DisconnectNotify((QEventTransition*)self, (QMetaMethod*)signal);
}

void q_eventtransition_super_disconnect_notify(void* self, void* signal) {
    QEventTransition_SuperDisconnectNotify((QEventTransition*)self, (QMetaMethod*)signal);
}

void q_eventtransition_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QEventTransition_OnDisconnectNotify((QEventTransition*)self, (intptr_t)callback);
}

QObject* q_eventtransition_sender(void* self) {
    return QEventTransition_Sender((QEventTransition*)self);
}

QObject* q_eventtransition_super_sender(void* self) {
    return QEventTransition_SuperSender((QEventTransition*)self);
}

void q_eventtransition_on_sender(void* self, QObject* (*callback)()) {
    QEventTransition_OnSender((QEventTransition*)self, (intptr_t)callback);
}

int32_t q_eventtransition_sender_signal_index(void* self) {
    return QEventTransition_SenderSignalIndex((QEventTransition*)self);
}

int32_t q_eventtransition_super_sender_signal_index(void* self) {
    return QEventTransition_SuperSenderSignalIndex((QEventTransition*)self);
}

void q_eventtransition_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QEventTransition_OnSenderSignalIndex((QEventTransition*)self, (intptr_t)callback);
}

int32_t q_eventtransition_receivers(void* self, const char* signal) {
    return QEventTransition_Receivers((QEventTransition*)self, signal);
}

int32_t q_eventtransition_super_receivers(void* self, const char* signal) {
    return QEventTransition_SuperReceivers((QEventTransition*)self, signal);
}

void q_eventtransition_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QEventTransition_OnReceivers((QEventTransition*)self, (intptr_t)callback);
}

bool q_eventtransition_is_signal_connected(void* self, void* signal) {
    return QEventTransition_IsSignalConnected((QEventTransition*)self, (QMetaMethod*)signal);
}

bool q_eventtransition_super_is_signal_connected(void* self, void* signal) {
    return QEventTransition_SuperIsSignalConnected((QEventTransition*)self, (QMetaMethod*)signal);
}

void q_eventtransition_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QEventTransition_OnIsSignalConnected((QEventTransition*)self, (intptr_t)callback);
}

void q_eventtransition_on_triggered(void* self, void (*callback)(void*)) {
    QAbstractTransition_Connect_Triggered((QAbstractTransition*)self, (intptr_t)callback);
}

void q_eventtransition_on_target_state_changed(void* self, void (*callback)(void*)) {
    QAbstractTransition_Connect_TargetStateChanged((QAbstractTransition*)self, (intptr_t)callback);
}

void q_eventtransition_on_target_states_changed(void* self, void (*callback)(void*)) {
    QAbstractTransition_Connect_TargetStatesChanged((QAbstractTransition*)self, (intptr_t)callback);
}

void q_eventtransition_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_eventtransition_delete(void* self) {
    QEventTransition_Delete((QEventTransition*)(self));
}
