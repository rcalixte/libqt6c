#include "../libqabstractanimation.hpp"
#include "libqabstractstate.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqstate.hpp"
#include "libqstatemachine.hpp"
#include "libqabstracttransition.hpp"
#include "libqabstracttransition.h"

QAbstractTransition* q_abstracttransition_new() {
    return QAbstractTransition_new();
}

QAbstractTransition* q_abstracttransition_new2(void* sourceState) {
    return QAbstractTransition_new2((QState*)sourceState);
}

const QMetaObject* q_abstracttransition_meta_object(void* self) {
    return QAbstractTransition_MetaObject((QAbstractTransition*)self);
}

void q_abstracttransition_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QAbstractTransition_OnMetaObject((QAbstractTransition*)self, (intptr_t)callback);
}

const QMetaObject* q_abstracttransition_super_meta_object(void* self) {
    return QAbstractTransition_SuperMetaObject((QAbstractTransition*)self);
}

void* q_abstracttransition_metacast(void* self, const char* param1) {
    return QAbstractTransition_Metacast((QAbstractTransition*)self, param1);
}

void q_abstracttransition_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QAbstractTransition_OnMetacast((QAbstractTransition*)self, (intptr_t)callback);
}

void* q_abstracttransition_super_metacast(void* self, const char* param1) {
    return QAbstractTransition_SuperMetacast((QAbstractTransition*)self, param1);
}

int32_t q_abstracttransition_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstractTransition_Metacall((QAbstractTransition*)self, param1, param2, param3);
}

void q_abstracttransition_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAbstractTransition_OnMetacall((QAbstractTransition*)self, (intptr_t)callback);
}

int32_t q_abstracttransition_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstractTransition_SuperMetacall((QAbstractTransition*)self, param1, param2, param3);
}

const char* q_abstracttransition_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QState* q_abstracttransition_source_state(void* self) {
    return QAbstractTransition_SourceState((QAbstractTransition*)self);
}

QAbstractState* q_abstracttransition_target_state(void* self) {
    return QAbstractTransition_TargetState((QAbstractTransition*)self);
}

void q_abstracttransition_set_target_state(void* self, void* target) {
    QAbstractTransition_SetTargetState((QAbstractTransition*)self, (QAbstractState*)target);
}

libqt_list /* of QAbstractState* */ q_abstracttransition_target_states(void* self) {
    libqt_list _arr = QAbstractTransition_TargetStates((QAbstractTransition*)self);
    return _arr;
}

void q_abstracttransition_set_target_states(void* self, libqt_list /* of QAbstractState* */ targets) {
    QAbstractTransition_SetTargetStates((QAbstractTransition*)self, targets);
}

int32_t q_abstracttransition_transition_type(void* self) {
    return QAbstractTransition_TransitionType((QAbstractTransition*)self);
}

void q_abstracttransition_set_transition_type(void* self, int32_t type) {
    QAbstractTransition_SetTransitionType((QAbstractTransition*)self, type);
}

QStateMachine* q_abstracttransition_machine(void* self) {
    return QAbstractTransition_Machine((QAbstractTransition*)self);
}

void q_abstracttransition_add_animation(void* self, void* animation) {
    QAbstractTransition_AddAnimation((QAbstractTransition*)self, (QAbstractAnimation*)animation);
}

void q_abstracttransition_remove_animation(void* self, void* animation) {
    QAbstractTransition_RemoveAnimation((QAbstractTransition*)self, (QAbstractAnimation*)animation);
}

libqt_list /* of QAbstractAnimation* */ q_abstracttransition_animations(void* self) {
    libqt_list _arr = QAbstractTransition_Animations((QAbstractTransition*)self);
    return _arr;
}

bool q_abstracttransition_event_test(void* self, void* event) {
    return QAbstractTransition_EventTest((QAbstractTransition*)self, (QEvent*)event);
}

void q_abstracttransition_on_event_test(void* self, bool (*callback)(void*, void*)) {
    QAbstractTransition_OnEventTest((QAbstractTransition*)self, (intptr_t)callback);
}

bool q_abstracttransition_super_event_test(void* self, void* event) {
    return QAbstractTransition_SuperEventTest((QAbstractTransition*)self, (QEvent*)event);
}

void q_abstracttransition_on_transition(void* self, void* event) {
    QAbstractTransition_OnTransition((QAbstractTransition*)self, (QEvent*)event);
}

void q_abstracttransition_on_on_transition(void* self, void (*callback)(void*, void*)) {
    QAbstractTransition_OnOnTransition((QAbstractTransition*)self, (intptr_t)callback);
}

void q_abstracttransition_super_on_transition(void* self, void* event) {
    QAbstractTransition_SuperOnTransition((QAbstractTransition*)self, (QEvent*)event);
}

bool q_abstracttransition_event(void* self, void* e) {
    return QAbstractTransition_Event((QAbstractTransition*)self, (QEvent*)e);
}

void q_abstracttransition_on_event(void* self, bool (*callback)(void*, void*)) {
    QAbstractTransition_OnEvent((QAbstractTransition*)self, (intptr_t)callback);
}

bool q_abstracttransition_super_event(void* self, void* e) {
    return QAbstractTransition_SuperEvent((QAbstractTransition*)self, (QEvent*)e);
}

const char* q_abstracttransition_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstracttransition_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstracttransition_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstracttransition_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstracttransition_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstracttransition_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstracttransition_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstracttransition_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstracttransition_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstracttransition_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstracttransition_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstracttransition_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_abstracttransition_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_abstracttransition_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstracttransition_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstracttransition_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstracttransition_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_abstracttransition_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstracttransition_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstracttransition_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_abstracttransition_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstracttransition_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstracttransition_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_abstracttransition_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstracttransition_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_abstracttransition_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_abstracttransition_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_abstracttransition_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstracttransition_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstracttransition_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstracttransition_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstracttransition_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_abstracttransition_dynamic_property_names\n");
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

QBindingStorage* q_abstracttransition_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstracttransition_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstracttransition_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstracttransition_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_abstracttransition_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_abstracttransition_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstracttransition_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_abstracttransition_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_abstracttransition_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_abstracttransition_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_abstracttransition_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_abstracttransition_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_abstracttransition_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_abstracttransition_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_abstracttransition_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_abstracttransition_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_abstracttransition_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstracttransition_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_abstracttransition_event_filter(void* self, void* watched, void* event) {
    return QAbstractTransition_EventFilter((QAbstractTransition*)self, (QObject*)watched, (QEvent*)event);
}

bool q_abstracttransition_super_event_filter(void* self, void* watched, void* event) {
    return QAbstractTransition_SuperEventFilter((QAbstractTransition*)self, (QObject*)watched, (QEvent*)event);
}

void q_abstracttransition_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAbstractTransition_OnEventFilter((QAbstractTransition*)self, (intptr_t)callback);
}

void q_abstracttransition_timer_event(void* self, void* event) {
    QAbstractTransition_TimerEvent((QAbstractTransition*)self, (QTimerEvent*)event);
}

void q_abstracttransition_super_timer_event(void* self, void* event) {
    QAbstractTransition_SuperTimerEvent((QAbstractTransition*)self, (QTimerEvent*)event);
}

void q_abstracttransition_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAbstractTransition_OnTimerEvent((QAbstractTransition*)self, (intptr_t)callback);
}

void q_abstracttransition_child_event(void* self, void* event) {
    QAbstractTransition_ChildEvent((QAbstractTransition*)self, (QChildEvent*)event);
}

void q_abstracttransition_super_child_event(void* self, void* event) {
    QAbstractTransition_SuperChildEvent((QAbstractTransition*)self, (QChildEvent*)event);
}

void q_abstracttransition_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAbstractTransition_OnChildEvent((QAbstractTransition*)self, (intptr_t)callback);
}

void q_abstracttransition_custom_event(void* self, void* event) {
    QAbstractTransition_CustomEvent((QAbstractTransition*)self, (QEvent*)event);
}

void q_abstracttransition_super_custom_event(void* self, void* event) {
    QAbstractTransition_SuperCustomEvent((QAbstractTransition*)self, (QEvent*)event);
}

void q_abstracttransition_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAbstractTransition_OnCustomEvent((QAbstractTransition*)self, (intptr_t)callback);
}

void q_abstracttransition_connect_notify(void* self, void* signal) {
    QAbstractTransition_ConnectNotify((QAbstractTransition*)self, (QMetaMethod*)signal);
}

void q_abstracttransition_super_connect_notify(void* self, void* signal) {
    QAbstractTransition_SuperConnectNotify((QAbstractTransition*)self, (QMetaMethod*)signal);
}

void q_abstracttransition_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractTransition_OnConnectNotify((QAbstractTransition*)self, (intptr_t)callback);
}

void q_abstracttransition_disconnect_notify(void* self, void* signal) {
    QAbstractTransition_DisconnectNotify((QAbstractTransition*)self, (QMetaMethod*)signal);
}

void q_abstracttransition_super_disconnect_notify(void* self, void* signal) {
    QAbstractTransition_SuperDisconnectNotify((QAbstractTransition*)self, (QMetaMethod*)signal);
}

void q_abstracttransition_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractTransition_OnDisconnectNotify((QAbstractTransition*)self, (intptr_t)callback);
}

QObject* q_abstracttransition_sender(void* self) {
    return QAbstractTransition_Sender((QAbstractTransition*)self);
}

QObject* q_abstracttransition_super_sender(void* self) {
    return QAbstractTransition_SuperSender((QAbstractTransition*)self);
}

void q_abstracttransition_on_sender(void* self, QObject* (*callback)()) {
    QAbstractTransition_OnSender((QAbstractTransition*)self, (intptr_t)callback);
}

int32_t q_abstracttransition_sender_signal_index(void* self) {
    return QAbstractTransition_SenderSignalIndex((QAbstractTransition*)self);
}

int32_t q_abstracttransition_super_sender_signal_index(void* self) {
    return QAbstractTransition_SuperSenderSignalIndex((QAbstractTransition*)self);
}

void q_abstracttransition_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAbstractTransition_OnSenderSignalIndex((QAbstractTransition*)self, (intptr_t)callback);
}

int32_t q_abstracttransition_receivers(void* self, const char* signal) {
    return QAbstractTransition_Receivers((QAbstractTransition*)self, signal);
}

int32_t q_abstracttransition_super_receivers(void* self, const char* signal) {
    return QAbstractTransition_SuperReceivers((QAbstractTransition*)self, signal);
}

void q_abstracttransition_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAbstractTransition_OnReceivers((QAbstractTransition*)self, (intptr_t)callback);
}

bool q_abstracttransition_is_signal_connected(void* self, void* signal) {
    return QAbstractTransition_IsSignalConnected((QAbstractTransition*)self, (QMetaMethod*)signal);
}

bool q_abstracttransition_super_is_signal_connected(void* self, void* signal) {
    return QAbstractTransition_SuperIsSignalConnected((QAbstractTransition*)self, (QMetaMethod*)signal);
}

void q_abstracttransition_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAbstractTransition_OnIsSignalConnected((QAbstractTransition*)self, (intptr_t)callback);
}

void q_abstracttransition_on_triggered(void* self, void (*callback)(void*)) {
    QAbstractTransition_Connect_Triggered((QAbstractTransition*)self, (intptr_t)callback);
}

void q_abstracttransition_on_target_state_changed(void* self, void (*callback)(void*)) {
    QAbstractTransition_Connect_TargetStateChanged((QAbstractTransition*)self, (intptr_t)callback);
}

void q_abstracttransition_on_target_states_changed(void* self, void (*callback)(void*)) {
    QAbstractTransition_Connect_TargetStatesChanged((QAbstractTransition*)self, (intptr_t)callback);
}

void q_abstracttransition_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_abstracttransition_delete(void* self) {
    QAbstractTransition_Delete((QAbstractTransition*)(self));
}
