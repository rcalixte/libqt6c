#include "libqabstracttransition.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqstate.hpp"
#include "libqsignaltransition.hpp"
#include "libqsignaltransition.h"

QSignalTransition* q_signaltransition_new() {
    return QSignalTransition_new();
}

QSignalTransition* q_signaltransition_new2(void* sender, const char* signal) {
    return QSignalTransition_new2((QObject*)sender, signal);
}

QSignalTransition* q_signaltransition_new3(void* sourceState) {
    return QSignalTransition_new3((QState*)sourceState);
}

QSignalTransition* q_signaltransition_new4(void* sender, const char* signal, void* sourceState) {
    return QSignalTransition_new4((QObject*)sender, signal, (QState*)sourceState);
}

const QMetaObject* q_signaltransition_meta_object(void* self) {
    return QSignalTransition_MetaObject((QSignalTransition*)self);
}

void q_signaltransition_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QSignalTransition_OnMetaObject((QSignalTransition*)self, (intptr_t)callback);
}

const QMetaObject* q_signaltransition_qbase_meta_object(void* self) {
    return QSignalTransition_QBaseMetaObject((QSignalTransition*)self);
}

void* q_signaltransition_metacast(void* self, const char* param1) {
    return QSignalTransition_Metacast((QSignalTransition*)self, param1);
}

void q_signaltransition_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QSignalTransition_OnMetacast((QSignalTransition*)self, (intptr_t)callback);
}

void* q_signaltransition_qbase_metacast(void* self, const char* param1) {
    return QSignalTransition_QBaseMetacast((QSignalTransition*)self, param1);
}

int32_t q_signaltransition_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSignalTransition_Metacall((QSignalTransition*)self, param1, param2, param3);
}

void q_signaltransition_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSignalTransition_OnMetacall((QSignalTransition*)self, (intptr_t)callback);
}

int32_t q_signaltransition_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSignalTransition_QBaseMetacall((QSignalTransition*)self, param1, param2, param3);
}

const char* q_signaltransition_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const QObject* q_signaltransition_sender_object(void* self) {
    return QSignalTransition_SenderObject((QSignalTransition*)self);
}

void q_signaltransition_set_sender_object(void* self, void* sender) {
    QSignalTransition_SetSenderObject((QSignalTransition*)self, (QObject*)sender);
}

char* q_signaltransition_signal(void* self) {
    libqt_string _str = QSignalTransition_Signal((QSignalTransition*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signaltransition_set_signal(void* self, char* signal) {
    QSignalTransition_SetSignal((QSignalTransition*)self, qstring(signal));
}

bool q_signaltransition_event_test(void* self, void* event) {
    return QSignalTransition_EventTest((QSignalTransition*)self, (QEvent*)event);
}

void q_signaltransition_on_event_test(void* self, bool (*callback)(void*, void*)) {
    QSignalTransition_OnEventTest((QSignalTransition*)self, (intptr_t)callback);
}

bool q_signaltransition_qbase_event_test(void* self, void* event) {
    return QSignalTransition_QBaseEventTest((QSignalTransition*)self, (QEvent*)event);
}

void q_signaltransition_on_transition(void* self, void* event) {
    QSignalTransition_OnTransition((QSignalTransition*)self, (QEvent*)event);
}

void q_signaltransition_on_on_transition(void* self, void (*callback)(void*, void*)) {
    QSignalTransition_OnOnTransition((QSignalTransition*)self, (intptr_t)callback);
}

void q_signaltransition_qbase_on_transition(void* self, void* event) {
    QSignalTransition_QBaseOnTransition((QSignalTransition*)self, (QEvent*)event);
}

bool q_signaltransition_event(void* self, void* e) {
    return QSignalTransition_Event((QSignalTransition*)self, (QEvent*)e);
}

void q_signaltransition_on_event(void* self, bool (*callback)(void*, void*)) {
    QSignalTransition_OnEvent((QSignalTransition*)self, (intptr_t)callback);
}

bool q_signaltransition_qbase_event(void* self, void* e) {
    return QSignalTransition_QBaseEvent((QSignalTransition*)self, (QEvent*)e);
}

const char* q_signaltransition_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_signaltransition_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QState* q_signaltransition_source_state(void* self) {
    return QAbstractTransition_SourceState((QAbstractTransition*)self);
}

QAbstractState* q_signaltransition_target_state(void* self) {
    return QAbstractTransition_TargetState((QAbstractTransition*)self);
}

void q_signaltransition_set_target_state(void* self, void* target) {
    QAbstractTransition_SetTargetState((QAbstractTransition*)self, (QAbstractState*)target);
}

libqt_list /* of QAbstractState* */ q_signaltransition_target_states(void* self) {
    libqt_list _arr = QAbstractTransition_TargetStates((QAbstractTransition*)self);
    return _arr;
}

void q_signaltransition_set_target_states(void* self, libqt_list /* of QAbstractState* */ targets) {
    QAbstractTransition_SetTargetStates((QAbstractTransition*)self, targets);
}

int32_t q_signaltransition_transition_type(void* self) {
    return QAbstractTransition_TransitionType((QAbstractTransition*)self);
}

void q_signaltransition_set_transition_type(void* self, int32_t type) {
    QAbstractTransition_SetTransitionType((QAbstractTransition*)self, type);
}

QStateMachine* q_signaltransition_machine(void* self) {
    return QAbstractTransition_Machine((QAbstractTransition*)self);
}

void q_signaltransition_add_animation(void* self, void* animation) {
    QAbstractTransition_AddAnimation((QAbstractTransition*)self, (QAbstractAnimation*)animation);
}

void q_signaltransition_remove_animation(void* self, void* animation) {
    QAbstractTransition_RemoveAnimation((QAbstractTransition*)self, (QAbstractAnimation*)animation);
}

libqt_list /* of QAbstractAnimation* */ q_signaltransition_animations(void* self) {
    libqt_list _arr = QAbstractTransition_Animations((QAbstractTransition*)self);
    return _arr;
}

const char* q_signaltransition_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signaltransition_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_signaltransition_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_signaltransition_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_signaltransition_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_signaltransition_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_signaltransition_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_signaltransition_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_signaltransition_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_signaltransition_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_signaltransition_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_signaltransition_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_signaltransition_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_signaltransition_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_signaltransition_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_signaltransition_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_signaltransition_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_signaltransition_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_signaltransition_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_signaltransition_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_signaltransition_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_signaltransition_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_signaltransition_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_signaltransition_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_signaltransition_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_signaltransition_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_signaltransition_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_signaltransition_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_signaltransition_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_signaltransition_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_signaltransition_dynamic_property_names\n");
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

QBindingStorage* q_signaltransition_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_signaltransition_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_signaltransition_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_signaltransition_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_signaltransition_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_signaltransition_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_signaltransition_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_signaltransition_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_signaltransition_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_signaltransition_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_signaltransition_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_signaltransition_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_signaltransition_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_signaltransition_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_signaltransition_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_signaltransition_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_signaltransition_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_signaltransition_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_signaltransition_event_filter(void* self, void* watched, void* event) {
    return QSignalTransition_EventFilter((QSignalTransition*)self, (QObject*)watched, (QEvent*)event);
}

bool q_signaltransition_qbase_event_filter(void* self, void* watched, void* event) {
    return QSignalTransition_QBaseEventFilter((QSignalTransition*)self, (QObject*)watched, (QEvent*)event);
}

void q_signaltransition_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSignalTransition_OnEventFilter((QSignalTransition*)self, (intptr_t)callback);
}

void q_signaltransition_timer_event(void* self, void* event) {
    QSignalTransition_TimerEvent((QSignalTransition*)self, (QTimerEvent*)event);
}

void q_signaltransition_qbase_timer_event(void* self, void* event) {
    QSignalTransition_QBaseTimerEvent((QSignalTransition*)self, (QTimerEvent*)event);
}

void q_signaltransition_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSignalTransition_OnTimerEvent((QSignalTransition*)self, (intptr_t)callback);
}

void q_signaltransition_child_event(void* self, void* event) {
    QSignalTransition_ChildEvent((QSignalTransition*)self, (QChildEvent*)event);
}

void q_signaltransition_qbase_child_event(void* self, void* event) {
    QSignalTransition_QBaseChildEvent((QSignalTransition*)self, (QChildEvent*)event);
}

void q_signaltransition_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSignalTransition_OnChildEvent((QSignalTransition*)self, (intptr_t)callback);
}

void q_signaltransition_custom_event(void* self, void* event) {
    QSignalTransition_CustomEvent((QSignalTransition*)self, (QEvent*)event);
}

void q_signaltransition_qbase_custom_event(void* self, void* event) {
    QSignalTransition_QBaseCustomEvent((QSignalTransition*)self, (QEvent*)event);
}

void q_signaltransition_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSignalTransition_OnCustomEvent((QSignalTransition*)self, (intptr_t)callback);
}

void q_signaltransition_connect_notify(void* self, void* signal) {
    QSignalTransition_ConnectNotify((QSignalTransition*)self, (QMetaMethod*)signal);
}

void q_signaltransition_qbase_connect_notify(void* self, void* signal) {
    QSignalTransition_QBaseConnectNotify((QSignalTransition*)self, (QMetaMethod*)signal);
}

void q_signaltransition_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSignalTransition_OnConnectNotify((QSignalTransition*)self, (intptr_t)callback);
}

void q_signaltransition_disconnect_notify(void* self, void* signal) {
    QSignalTransition_DisconnectNotify((QSignalTransition*)self, (QMetaMethod*)signal);
}

void q_signaltransition_qbase_disconnect_notify(void* self, void* signal) {
    QSignalTransition_QBaseDisconnectNotify((QSignalTransition*)self, (QMetaMethod*)signal);
}

void q_signaltransition_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSignalTransition_OnDisconnectNotify((QSignalTransition*)self, (intptr_t)callback);
}

QObject* q_signaltransition_sender(void* self) {
    return QSignalTransition_Sender((QSignalTransition*)self);
}

QObject* q_signaltransition_qbase_sender(void* self) {
    return QSignalTransition_QBaseSender((QSignalTransition*)self);
}

void q_signaltransition_on_sender(void* self, QObject* (*callback)()) {
    QSignalTransition_OnSender((QSignalTransition*)self, (intptr_t)callback);
}

int32_t q_signaltransition_sender_signal_index(void* self) {
    return QSignalTransition_SenderSignalIndex((QSignalTransition*)self);
}

int32_t q_signaltransition_qbase_sender_signal_index(void* self) {
    return QSignalTransition_QBaseSenderSignalIndex((QSignalTransition*)self);
}

void q_signaltransition_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSignalTransition_OnSenderSignalIndex((QSignalTransition*)self, (intptr_t)callback);
}

int32_t q_signaltransition_receivers(void* self, const char* signal) {
    return QSignalTransition_Receivers((QSignalTransition*)self, signal);
}

int32_t q_signaltransition_qbase_receivers(void* self, const char* signal) {
    return QSignalTransition_QBaseReceivers((QSignalTransition*)self, signal);
}

void q_signaltransition_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSignalTransition_OnReceivers((QSignalTransition*)self, (intptr_t)callback);
}

bool q_signaltransition_is_signal_connected(void* self, void* signal) {
    return QSignalTransition_IsSignalConnected((QSignalTransition*)self, (QMetaMethod*)signal);
}

bool q_signaltransition_qbase_is_signal_connected(void* self, void* signal) {
    return QSignalTransition_QBaseIsSignalConnected((QSignalTransition*)self, (QMetaMethod*)signal);
}

void q_signaltransition_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSignalTransition_OnIsSignalConnected((QSignalTransition*)self, (intptr_t)callback);
}

void q_signaltransition_on_sender_object_changed(void* self, void (*callback)(void*)) {
    QSignalTransition_Connect_SenderObjectChanged((QSignalTransition*)self, (intptr_t)callback);
}

void q_signaltransition_on_signal_changed(void* self, void (*callback)(void*)) {
    QSignalTransition_Connect_SignalChanged((QSignalTransition*)self, (intptr_t)callback);
}

void q_signaltransition_on_triggered(void* self, void (*callback)(void*)) {
    QAbstractTransition_Connect_Triggered((QAbstractTransition*)self, (intptr_t)callback);
}

void q_signaltransition_on_target_state_changed(void* self, void (*callback)(void*)) {
    QAbstractTransition_Connect_TargetStateChanged((QAbstractTransition*)self, (intptr_t)callback);
}

void q_signaltransition_on_target_states_changed(void* self, void (*callback)(void*)) {
    QAbstractTransition_Connect_TargetStatesChanged((QAbstractTransition*)self, (intptr_t)callback);
}

void q_signaltransition_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_signaltransition_delete(void* self) {
    QSignalTransition_Delete((QSignalTransition*)(self));
}
