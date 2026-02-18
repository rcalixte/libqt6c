#include "libqabstracttransition.hpp"
#include "../libqcoreevent.hpp"
#include "libqeventtransition.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpainterpath.hpp"
#include "libqstate.hpp"
#include "libqmouseeventtransition.hpp"
#include "libqmouseeventtransition.h"

QMouseEventTransition* q_mouseeventtransition_new() {
    return QMouseEventTransition_new();
}

QMouseEventTransition* q_mouseeventtransition_new2(void* object, int32_t type, int32_t button) {
    return QMouseEventTransition_new2((QObject*)object, type, button);
}

QMouseEventTransition* q_mouseeventtransition_new3(void* sourceState) {
    return QMouseEventTransition_new3((QState*)sourceState);
}

QMouseEventTransition* q_mouseeventtransition_new4(void* object, int32_t type, int32_t button, void* sourceState) {
    return QMouseEventTransition_new4((QObject*)object, type, button, (QState*)sourceState);
}

const QMetaObject* q_mouseeventtransition_meta_object(void* self) {
    return QMouseEventTransition_MetaObject((QMouseEventTransition*)self);
}

void q_mouseeventtransition_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QMouseEventTransition_OnMetaObject((QMouseEventTransition*)self, (intptr_t)callback);
}

const QMetaObject* q_mouseeventtransition_qbase_meta_object(void* self) {
    return QMouseEventTransition_QBaseMetaObject((QMouseEventTransition*)self);
}

void* q_mouseeventtransition_metacast(void* self, const char* param1) {
    return QMouseEventTransition_Metacast((QMouseEventTransition*)self, param1);
}

void q_mouseeventtransition_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QMouseEventTransition_OnMetacast((QMouseEventTransition*)self, (intptr_t)callback);
}

void* q_mouseeventtransition_qbase_metacast(void* self, const char* param1) {
    return QMouseEventTransition_QBaseMetacast((QMouseEventTransition*)self, param1);
}

int32_t q_mouseeventtransition_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QMouseEventTransition_Metacall((QMouseEventTransition*)self, param1, param2, param3);
}

void q_mouseeventtransition_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QMouseEventTransition_OnMetacall((QMouseEventTransition*)self, (intptr_t)callback);
}

int32_t q_mouseeventtransition_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QMouseEventTransition_QBaseMetacall((QMouseEventTransition*)self, param1, param2, param3);
}

const char* q_mouseeventtransition_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_mouseeventtransition_button(void* self) {
    return QMouseEventTransition_Button((QMouseEventTransition*)self);
}

void q_mouseeventtransition_set_button(void* self, int32_t button) {
    QMouseEventTransition_SetButton((QMouseEventTransition*)self, button);
}

int32_t q_mouseeventtransition_modifier_mask(void* self) {
    return QMouseEventTransition_ModifierMask((QMouseEventTransition*)self);
}

void q_mouseeventtransition_set_modifier_mask(void* self, int32_t modifiers) {
    QMouseEventTransition_SetModifierMask((QMouseEventTransition*)self, modifiers);
}

QPainterPath* q_mouseeventtransition_hit_test_path(void* self) {
    return QMouseEventTransition_HitTestPath((QMouseEventTransition*)self);
}

void q_mouseeventtransition_set_hit_test_path(void* self, void* path) {
    QMouseEventTransition_SetHitTestPath((QMouseEventTransition*)self, (QPainterPath*)path);
}

void q_mouseeventtransition_on_transition(void* self, void* event) {
    QMouseEventTransition_OnTransition((QMouseEventTransition*)self, (QEvent*)event);
}

void q_mouseeventtransition_on_on_transition(void* self, void (*callback)(void*, void*)) {
    QMouseEventTransition_OnOnTransition((QMouseEventTransition*)self, (intptr_t)callback);
}

void q_mouseeventtransition_qbase_on_transition(void* self, void* event) {
    QMouseEventTransition_QBaseOnTransition((QMouseEventTransition*)self, (QEvent*)event);
}

bool q_mouseeventtransition_event_test(void* self, void* event) {
    return QMouseEventTransition_EventTest((QMouseEventTransition*)self, (QEvent*)event);
}

void q_mouseeventtransition_on_event_test(void* self, bool (*callback)(void*, void*)) {
    QMouseEventTransition_OnEventTest((QMouseEventTransition*)self, (intptr_t)callback);
}

bool q_mouseeventtransition_qbase_event_test(void* self, void* event) {
    return QMouseEventTransition_QBaseEventTest((QMouseEventTransition*)self, (QEvent*)event);
}

const char* q_mouseeventtransition_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mouseeventtransition_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_mouseeventtransition_event_source(void* self) {
    return QEventTransition_EventSource((QEventTransition*)self);
}

void q_mouseeventtransition_set_event_source(void* self, void* object) {
    QEventTransition_SetEventSource((QEventTransition*)self, (QObject*)object);
}

int32_t q_mouseeventtransition_event_type(void* self) {
    return QEventTransition_EventType((QEventTransition*)self);
}

void q_mouseeventtransition_set_event_type(void* self, int32_t type) {
    QEventTransition_SetEventType((QEventTransition*)self, type);
}

QState* q_mouseeventtransition_source_state(void* self) {
    return QAbstractTransition_SourceState((QAbstractTransition*)self);
}

QAbstractState* q_mouseeventtransition_target_state(void* self) {
    return QAbstractTransition_TargetState((QAbstractTransition*)self);
}

void q_mouseeventtransition_set_target_state(void* self, void* target) {
    QAbstractTransition_SetTargetState((QAbstractTransition*)self, (QAbstractState*)target);
}

libqt_list /* of QAbstractState* */ q_mouseeventtransition_target_states(void* self) {
    libqt_list _arr = QAbstractTransition_TargetStates((QAbstractTransition*)self);
    return _arr;
}

void q_mouseeventtransition_set_target_states(void* self, libqt_list /* of QAbstractState* */ targets) {
    QAbstractTransition_SetTargetStates((QAbstractTransition*)self, targets);
}

int32_t q_mouseeventtransition_transition_type(void* self) {
    return QAbstractTransition_TransitionType((QAbstractTransition*)self);
}

void q_mouseeventtransition_set_transition_type(void* self, int32_t type) {
    QAbstractTransition_SetTransitionType((QAbstractTransition*)self, type);
}

QStateMachine* q_mouseeventtransition_machine(void* self) {
    return QAbstractTransition_Machine((QAbstractTransition*)self);
}

void q_mouseeventtransition_add_animation(void* self, void* animation) {
    QAbstractTransition_AddAnimation((QAbstractTransition*)self, (QAbstractAnimation*)animation);
}

void q_mouseeventtransition_remove_animation(void* self, void* animation) {
    QAbstractTransition_RemoveAnimation((QAbstractTransition*)self, (QAbstractAnimation*)animation);
}

libqt_list /* of QAbstractAnimation* */ q_mouseeventtransition_animations(void* self) {
    libqt_list _arr = QAbstractTransition_Animations((QAbstractTransition*)self);
    return _arr;
}

const char* q_mouseeventtransition_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mouseeventtransition_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_mouseeventtransition_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_mouseeventtransition_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_mouseeventtransition_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_mouseeventtransition_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_mouseeventtransition_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_mouseeventtransition_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_mouseeventtransition_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_mouseeventtransition_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_mouseeventtransition_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_mouseeventtransition_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_mouseeventtransition_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_mouseeventtransition_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_mouseeventtransition_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_mouseeventtransition_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_mouseeventtransition_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_mouseeventtransition_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_mouseeventtransition_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_mouseeventtransition_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_mouseeventtransition_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_mouseeventtransition_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_mouseeventtransition_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_mouseeventtransition_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_mouseeventtransition_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_mouseeventtransition_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_mouseeventtransition_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_mouseeventtransition_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_mouseeventtransition_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_mouseeventtransition_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_mouseeventtransition_dynamic_property_names\n");
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

QBindingStorage* q_mouseeventtransition_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_mouseeventtransition_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_mouseeventtransition_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_mouseeventtransition_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_mouseeventtransition_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_mouseeventtransition_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_mouseeventtransition_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_mouseeventtransition_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_mouseeventtransition_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_mouseeventtransition_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_mouseeventtransition_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_mouseeventtransition_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_mouseeventtransition_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_mouseeventtransition_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_mouseeventtransition_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_mouseeventtransition_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_mouseeventtransition_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_mouseeventtransition_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_mouseeventtransition_event(void* self, void* e) {
    return QMouseEventTransition_Event((QMouseEventTransition*)self, (QEvent*)e);
}

bool q_mouseeventtransition_qbase_event(void* self, void* e) {
    return QMouseEventTransition_QBaseEvent((QMouseEventTransition*)self, (QEvent*)e);
}

void q_mouseeventtransition_on_event(void* self, bool (*callback)(void*, void*)) {
    QMouseEventTransition_OnEvent((QMouseEventTransition*)self, (intptr_t)callback);
}

bool q_mouseeventtransition_event_filter(void* self, void* watched, void* event) {
    return QMouseEventTransition_EventFilter((QMouseEventTransition*)self, (QObject*)watched, (QEvent*)event);
}

bool q_mouseeventtransition_qbase_event_filter(void* self, void* watched, void* event) {
    return QMouseEventTransition_QBaseEventFilter((QMouseEventTransition*)self, (QObject*)watched, (QEvent*)event);
}

void q_mouseeventtransition_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QMouseEventTransition_OnEventFilter((QMouseEventTransition*)self, (intptr_t)callback);
}

void q_mouseeventtransition_timer_event(void* self, void* event) {
    QMouseEventTransition_TimerEvent((QMouseEventTransition*)self, (QTimerEvent*)event);
}

void q_mouseeventtransition_qbase_timer_event(void* self, void* event) {
    QMouseEventTransition_QBaseTimerEvent((QMouseEventTransition*)self, (QTimerEvent*)event);
}

void q_mouseeventtransition_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QMouseEventTransition_OnTimerEvent((QMouseEventTransition*)self, (intptr_t)callback);
}

void q_mouseeventtransition_child_event(void* self, void* event) {
    QMouseEventTransition_ChildEvent((QMouseEventTransition*)self, (QChildEvent*)event);
}

void q_mouseeventtransition_qbase_child_event(void* self, void* event) {
    QMouseEventTransition_QBaseChildEvent((QMouseEventTransition*)self, (QChildEvent*)event);
}

void q_mouseeventtransition_on_child_event(void* self, void (*callback)(void*, void*)) {
    QMouseEventTransition_OnChildEvent((QMouseEventTransition*)self, (intptr_t)callback);
}

void q_mouseeventtransition_custom_event(void* self, void* event) {
    QMouseEventTransition_CustomEvent((QMouseEventTransition*)self, (QEvent*)event);
}

void q_mouseeventtransition_qbase_custom_event(void* self, void* event) {
    QMouseEventTransition_QBaseCustomEvent((QMouseEventTransition*)self, (QEvent*)event);
}

void q_mouseeventtransition_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QMouseEventTransition_OnCustomEvent((QMouseEventTransition*)self, (intptr_t)callback);
}

void q_mouseeventtransition_connect_notify(void* self, void* signal) {
    QMouseEventTransition_ConnectNotify((QMouseEventTransition*)self, (QMetaMethod*)signal);
}

void q_mouseeventtransition_qbase_connect_notify(void* self, void* signal) {
    QMouseEventTransition_QBaseConnectNotify((QMouseEventTransition*)self, (QMetaMethod*)signal);
}

void q_mouseeventtransition_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QMouseEventTransition_OnConnectNotify((QMouseEventTransition*)self, (intptr_t)callback);
}

void q_mouseeventtransition_disconnect_notify(void* self, void* signal) {
    QMouseEventTransition_DisconnectNotify((QMouseEventTransition*)self, (QMetaMethod*)signal);
}

void q_mouseeventtransition_qbase_disconnect_notify(void* self, void* signal) {
    QMouseEventTransition_QBaseDisconnectNotify((QMouseEventTransition*)self, (QMetaMethod*)signal);
}

void q_mouseeventtransition_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QMouseEventTransition_OnDisconnectNotify((QMouseEventTransition*)self, (intptr_t)callback);
}

QObject* q_mouseeventtransition_sender(void* self) {
    return QMouseEventTransition_Sender((QMouseEventTransition*)self);
}

QObject* q_mouseeventtransition_qbase_sender(void* self) {
    return QMouseEventTransition_QBaseSender((QMouseEventTransition*)self);
}

void q_mouseeventtransition_on_sender(void* self, QObject* (*callback)()) {
    QMouseEventTransition_OnSender((QMouseEventTransition*)self, (intptr_t)callback);
}

int32_t q_mouseeventtransition_sender_signal_index(void* self) {
    return QMouseEventTransition_SenderSignalIndex((QMouseEventTransition*)self);
}

int32_t q_mouseeventtransition_qbase_sender_signal_index(void* self) {
    return QMouseEventTransition_QBaseSenderSignalIndex((QMouseEventTransition*)self);
}

void q_mouseeventtransition_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QMouseEventTransition_OnSenderSignalIndex((QMouseEventTransition*)self, (intptr_t)callback);
}

int32_t q_mouseeventtransition_receivers(void* self, const char* signal) {
    return QMouseEventTransition_Receivers((QMouseEventTransition*)self, signal);
}

int32_t q_mouseeventtransition_qbase_receivers(void* self, const char* signal) {
    return QMouseEventTransition_QBaseReceivers((QMouseEventTransition*)self, signal);
}

void q_mouseeventtransition_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QMouseEventTransition_OnReceivers((QMouseEventTransition*)self, (intptr_t)callback);
}

bool q_mouseeventtransition_is_signal_connected(void* self, void* signal) {
    return QMouseEventTransition_IsSignalConnected((QMouseEventTransition*)self, (QMetaMethod*)signal);
}

bool q_mouseeventtransition_qbase_is_signal_connected(void* self, void* signal) {
    return QMouseEventTransition_QBaseIsSignalConnected((QMouseEventTransition*)self, (QMetaMethod*)signal);
}

void q_mouseeventtransition_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QMouseEventTransition_OnIsSignalConnected((QMouseEventTransition*)self, (intptr_t)callback);
}

void q_mouseeventtransition_on_triggered(void* self, void (*callback)(void*)) {
    QAbstractTransition_Connect_Triggered((QAbstractTransition*)self, (intptr_t)callback);
}

void q_mouseeventtransition_on_target_state_changed(void* self, void (*callback)(void*)) {
    QAbstractTransition_Connect_TargetStateChanged((QAbstractTransition*)self, (intptr_t)callback);
}

void q_mouseeventtransition_on_target_states_changed(void* self, void (*callback)(void*)) {
    QAbstractTransition_Connect_TargetStatesChanged((QAbstractTransition*)self, (intptr_t)callback);
}

void q_mouseeventtransition_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_mouseeventtransition_delete(void* self) {
    QMouseEventTransition_Delete((QMouseEventTransition*)(self));
}
