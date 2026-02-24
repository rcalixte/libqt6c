#include "../libqabstractanimation.hpp"
#include "libqabstractstate.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqstate.hpp"
#include "../libqvariant.hpp"
#include "libqstatemachine.hpp"
#include "libqstatemachine.h"

QStateMachine* q_statemachine_new() {
    return QStateMachine_new();
}

QStateMachine* q_statemachine_new2(int32_t childMode) {
    return QStateMachine_new2(childMode);
}

QStateMachine* q_statemachine_new3(void* parent) {
    return QStateMachine_new3((QObject*)parent);
}

QStateMachine* q_statemachine_new4(int32_t childMode, void* parent) {
    return QStateMachine_new4(childMode, (QObject*)parent);
}

const QMetaObject* q_statemachine_meta_object(void* self) {
    return QStateMachine_MetaObject((QStateMachine*)self);
}

void q_statemachine_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QStateMachine_OnMetaObject((QStateMachine*)self, (intptr_t)callback);
}

const QMetaObject* q_statemachine_super_meta_object(void* self) {
    return QStateMachine_SuperMetaObject((QStateMachine*)self);
}

void* q_statemachine_metacast(void* self, const char* param1) {
    return QStateMachine_Metacast((QStateMachine*)self, param1);
}

void q_statemachine_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QStateMachine_OnMetacast((QStateMachine*)self, (intptr_t)callback);
}

void* q_statemachine_super_metacast(void* self, const char* param1) {
    return QStateMachine_SuperMetacast((QStateMachine*)self, param1);
}

int32_t q_statemachine_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStateMachine_Metacall((QStateMachine*)self, param1, param2, param3);
}

void q_statemachine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QStateMachine_OnMetacall((QStateMachine*)self, (intptr_t)callback);
}

int32_t q_statemachine_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStateMachine_SuperMetacall((QStateMachine*)self, param1, param2, param3);
}

const char* q_statemachine_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statemachine_add_state(void* self, void* state) {
    QStateMachine_AddState((QStateMachine*)self, (QAbstractState*)state);
}

void q_statemachine_remove_state(void* self, void* state) {
    QStateMachine_RemoveState((QStateMachine*)self, (QAbstractState*)state);
}

int32_t q_statemachine_error(void* self) {
    return QStateMachine_Error((QStateMachine*)self);
}

const char* q_statemachine_error_string(void* self) {
    libqt_string _str = QStateMachine_ErrorString((QStateMachine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statemachine_clear_error(void* self) {
    QStateMachine_ClearError((QStateMachine*)self);
}

bool q_statemachine_is_running(void* self) {
    return QStateMachine_IsRunning((QStateMachine*)self);
}

bool q_statemachine_is_animated(void* self) {
    return QStateMachine_IsAnimated((QStateMachine*)self);
}

void q_statemachine_set_animated(void* self, bool enabled) {
    QStateMachine_SetAnimated((QStateMachine*)self, enabled);
}

void q_statemachine_add_default_animation(void* self, void* animation) {
    QStateMachine_AddDefaultAnimation((QStateMachine*)self, (QAbstractAnimation*)animation);
}

libqt_list /* of QAbstractAnimation* */ q_statemachine_default_animations(void* self) {
    libqt_list _arr = QStateMachine_DefaultAnimations((QStateMachine*)self);
    return _arr;
}

void q_statemachine_remove_default_animation(void* self, void* animation) {
    QStateMachine_RemoveDefaultAnimation((QStateMachine*)self, (QAbstractAnimation*)animation);
}

int32_t q_statemachine_global_restore_policy(void* self) {
    return QStateMachine_GlobalRestorePolicy((QStateMachine*)self);
}

void q_statemachine_set_global_restore_policy(void* self, int32_t restorePolicy) {
    QStateMachine_SetGlobalRestorePolicy((QStateMachine*)self, restorePolicy);
}

void q_statemachine_post_event(void* self, void* event) {
    QStateMachine_PostEvent((QStateMachine*)self, (QEvent*)event);
}

int32_t q_statemachine_post_delayed_event(void* self, void* event, int delay) {
    return QStateMachine_PostDelayedEvent((QStateMachine*)self, (QEvent*)event, delay);
}

bool q_statemachine_cancel_delayed_event(void* self, int id) {
    return QStateMachine_CancelDelayedEvent((QStateMachine*)self, id);
}

libqt_list /* set of QAbstractState* */ q_statemachine_configuration(void* self) {
    return QStateMachine_Configuration((QStateMachine*)self);
}

bool q_statemachine_event_filter(void* self, void* watched, void* event) {
    return QStateMachine_EventFilter((QStateMachine*)self, (QObject*)watched, (QEvent*)event);
}

void q_statemachine_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QStateMachine_OnEventFilter((QStateMachine*)self, (intptr_t)callback);
}

bool q_statemachine_super_event_filter(void* self, void* watched, void* event) {
    return QStateMachine_SuperEventFilter((QStateMachine*)self, (QObject*)watched, (QEvent*)event);
}

int32_t q_statemachine_post_delayed_event2(void* self, void* event, int64_t delay) {
    return QStateMachine_PostDelayedEvent2((QStateMachine*)self, (QEvent*)event, delay);
}

void q_statemachine_start(void* self) {
    QStateMachine_Start((QStateMachine*)self);
}

void q_statemachine_stop(void* self) {
    QStateMachine_Stop((QStateMachine*)self);
}

void q_statemachine_set_running(void* self, bool running) {
    QStateMachine_SetRunning((QStateMachine*)self, running);
}

void q_statemachine_running_changed(void* self, bool running) {
    QStateMachine_RunningChanged((QStateMachine*)self, running);
}

void q_statemachine_on_running_changed(void* self, void (*callback)(void*, bool)) {
    QStateMachine_Connect_RunningChanged((QStateMachine*)self, (intptr_t)callback);
}

void q_statemachine_on_entry(void* self, void* event) {
    QStateMachine_OnEntry((QStateMachine*)self, (QEvent*)event);
}

void q_statemachine_on_on_entry(void* self, void (*callback)(void*, void*)) {
    QStateMachine_OnOnEntry((QStateMachine*)self, (intptr_t)callback);
}

void q_statemachine_super_on_entry(void* self, void* event) {
    QStateMachine_SuperOnEntry((QStateMachine*)self, (QEvent*)event);
}

void q_statemachine_on_exit(void* self, void* event) {
    QStateMachine_OnExit((QStateMachine*)self, (QEvent*)event);
}

void q_statemachine_on_on_exit(void* self, void (*callback)(void*, void*)) {
    QStateMachine_OnOnExit((QStateMachine*)self, (intptr_t)callback);
}

void q_statemachine_super_on_exit(void* self, void* event) {
    QStateMachine_SuperOnExit((QStateMachine*)self, (QEvent*)event);
}

void q_statemachine_begin_select_transitions(void* self, void* event) {
    QStateMachine_BeginSelectTransitions((QStateMachine*)self, (QEvent*)event);
}

void q_statemachine_on_begin_select_transitions(void* self, void (*callback)(void*, void*)) {
    QStateMachine_OnBeginSelectTransitions((QStateMachine*)self, (intptr_t)callback);
}

void q_statemachine_super_begin_select_transitions(void* self, void* event) {
    QStateMachine_SuperBeginSelectTransitions((QStateMachine*)self, (QEvent*)event);
}

void q_statemachine_end_select_transitions(void* self, void* event) {
    QStateMachine_EndSelectTransitions((QStateMachine*)self, (QEvent*)event);
}

void q_statemachine_on_end_select_transitions(void* self, void (*callback)(void*, void*)) {
    QStateMachine_OnEndSelectTransitions((QStateMachine*)self, (intptr_t)callback);
}

void q_statemachine_super_end_select_transitions(void* self, void* event) {
    QStateMachine_SuperEndSelectTransitions((QStateMachine*)self, (QEvent*)event);
}

void q_statemachine_begin_microstep(void* self, void* event) {
    QStateMachine_BeginMicrostep((QStateMachine*)self, (QEvent*)event);
}

void q_statemachine_on_begin_microstep(void* self, void (*callback)(void*, void*)) {
    QStateMachine_OnBeginMicrostep((QStateMachine*)self, (intptr_t)callback);
}

void q_statemachine_super_begin_microstep(void* self, void* event) {
    QStateMachine_SuperBeginMicrostep((QStateMachine*)self, (QEvent*)event);
}

void q_statemachine_end_microstep(void* self, void* event) {
    QStateMachine_EndMicrostep((QStateMachine*)self, (QEvent*)event);
}

void q_statemachine_on_end_microstep(void* self, void (*callback)(void*, void*)) {
    QStateMachine_OnEndMicrostep((QStateMachine*)self, (intptr_t)callback);
}

void q_statemachine_super_end_microstep(void* self, void* event) {
    QStateMachine_SuperEndMicrostep((QStateMachine*)self, (QEvent*)event);
}

bool q_statemachine_event(void* self, void* e) {
    return QStateMachine_Event((QStateMachine*)self, (QEvent*)e);
}

void q_statemachine_on_event(void* self, bool (*callback)(void*, void*)) {
    QStateMachine_OnEvent((QStateMachine*)self, (intptr_t)callback);
}

bool q_statemachine_super_event(void* self, void* e) {
    return QStateMachine_SuperEvent((QStateMachine*)self, (QEvent*)e);
}

const char* q_statemachine_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_statemachine_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statemachine_post_event2(void* self, void* event, int32_t priority) {
    QStateMachine_PostEvent2((QStateMachine*)self, (QEvent*)event, priority);
}

QAbstractState* q_statemachine_error_state(void* self) {
    return QState_ErrorState((QState*)self);
}

void q_statemachine_set_error_state(void* self, void* state) {
    QState_SetErrorState((QState*)self, (QAbstractState*)state);
}

void q_statemachine_add_transition(void* self, void* transition) {
    QState_AddTransition((QState*)self, (QAbstractTransition*)transition);
}

QSignalTransition* q_statemachine_add_transition2(void* self, void* sender, const char* signal, void* target) {
    return QState_AddTransition2((QState*)self, (QObject*)sender, signal, (QAbstractState*)target);
}

QAbstractTransition* q_statemachine_add_transition3(void* self, void* target) {
    return QState_AddTransition3((QState*)self, (QAbstractState*)target);
}

void q_statemachine_remove_transition(void* self, void* transition) {
    QState_RemoveTransition((QState*)self, (QAbstractTransition*)transition);
}

libqt_list /* of QAbstractTransition* */ q_statemachine_transitions(void* self) {
    libqt_list _arr = QState_Transitions((QState*)self);
    return _arr;
}

QAbstractState* q_statemachine_initial_state(void* self) {
    return QState_InitialState((QState*)self);
}

void q_statemachine_set_initial_state(void* self, void* state) {
    QState_SetInitialState((QState*)self, (QAbstractState*)state);
}

int32_t q_statemachine_child_mode(void* self) {
    return QState_ChildMode((QState*)self);
}

void q_statemachine_set_child_mode(void* self, int32_t mode) {
    QState_SetChildMode((QState*)self, mode);
}

void q_statemachine_assign_property(void* self, void* object, const char* name, void* value) {
    QState_AssignProperty((QState*)self, (QObject*)object, name, (QVariant*)value);
}

QState* q_statemachine_parent_state(void* self) {
    return QAbstractState_ParentState((QAbstractState*)self);
}

QStateMachine* q_statemachine_machine(void* self) {
    return QAbstractState_Machine((QAbstractState*)self);
}

bool q_statemachine_active(void* self) {
    return QAbstractState_Active((QAbstractState*)self);
}

void q_statemachine_active_changed(void* self, bool active) {
    QAbstractState_ActiveChanged((QAbstractState*)self, active);
}

void q_statemachine_on_active_changed(void* self, void (*callback)(void*, bool)) {
    QAbstractState_Connect_ActiveChanged((QAbstractState*)self, (intptr_t)callback);
}

const char* q_statemachine_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statemachine_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_statemachine_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_statemachine_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_statemachine_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_statemachine_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_statemachine_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_statemachine_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_statemachine_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_statemachine_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_statemachine_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_statemachine_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_statemachine_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_statemachine_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_statemachine_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_statemachine_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_statemachine_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_statemachine_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_statemachine_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_statemachine_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_statemachine_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_statemachine_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_statemachine_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_statemachine_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_statemachine_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_statemachine_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_statemachine_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_statemachine_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_statemachine_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_statemachine_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_statemachine_dynamic_property_names\n");
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

QBindingStorage* q_statemachine_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_statemachine_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_statemachine_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_statemachine_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_statemachine_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_statemachine_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_statemachine_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_statemachine_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_statemachine_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_statemachine_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_statemachine_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_statemachine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_statemachine_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_statemachine_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_statemachine_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_statemachine_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_statemachine_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_statemachine_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_statemachine_timer_event(void* self, void* event) {
    QStateMachine_TimerEvent((QStateMachine*)self, (QTimerEvent*)event);
}

void q_statemachine_super_timer_event(void* self, void* event) {
    QStateMachine_SuperTimerEvent((QStateMachine*)self, (QTimerEvent*)event);
}

void q_statemachine_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QStateMachine_OnTimerEvent((QStateMachine*)self, (intptr_t)callback);
}

void q_statemachine_child_event(void* self, void* event) {
    QStateMachine_ChildEvent((QStateMachine*)self, (QChildEvent*)event);
}

void q_statemachine_super_child_event(void* self, void* event) {
    QStateMachine_SuperChildEvent((QStateMachine*)self, (QChildEvent*)event);
}

void q_statemachine_on_child_event(void* self, void (*callback)(void*, void*)) {
    QStateMachine_OnChildEvent((QStateMachine*)self, (intptr_t)callback);
}

void q_statemachine_custom_event(void* self, void* event) {
    QStateMachine_CustomEvent((QStateMachine*)self, (QEvent*)event);
}

void q_statemachine_super_custom_event(void* self, void* event) {
    QStateMachine_SuperCustomEvent((QStateMachine*)self, (QEvent*)event);
}

void q_statemachine_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QStateMachine_OnCustomEvent((QStateMachine*)self, (intptr_t)callback);
}

void q_statemachine_connect_notify(void* self, void* signal) {
    QStateMachine_ConnectNotify((QStateMachine*)self, (QMetaMethod*)signal);
}

void q_statemachine_super_connect_notify(void* self, void* signal) {
    QStateMachine_SuperConnectNotify((QStateMachine*)self, (QMetaMethod*)signal);
}

void q_statemachine_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QStateMachine_OnConnectNotify((QStateMachine*)self, (intptr_t)callback);
}

void q_statemachine_disconnect_notify(void* self, void* signal) {
    QStateMachine_DisconnectNotify((QStateMachine*)self, (QMetaMethod*)signal);
}

void q_statemachine_super_disconnect_notify(void* self, void* signal) {
    QStateMachine_SuperDisconnectNotify((QStateMachine*)self, (QMetaMethod*)signal);
}

void q_statemachine_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QStateMachine_OnDisconnectNotify((QStateMachine*)self, (intptr_t)callback);
}

QObject* q_statemachine_sender(void* self) {
    return QStateMachine_Sender((QStateMachine*)self);
}

QObject* q_statemachine_super_sender(void* self) {
    return QStateMachine_SuperSender((QStateMachine*)self);
}

void q_statemachine_on_sender(void* self, QObject* (*callback)()) {
    QStateMachine_OnSender((QStateMachine*)self, (intptr_t)callback);
}

int32_t q_statemachine_sender_signal_index(void* self) {
    return QStateMachine_SenderSignalIndex((QStateMachine*)self);
}

int32_t q_statemachine_super_sender_signal_index(void* self) {
    return QStateMachine_SuperSenderSignalIndex((QStateMachine*)self);
}

void q_statemachine_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QStateMachine_OnSenderSignalIndex((QStateMachine*)self, (intptr_t)callback);
}

int32_t q_statemachine_receivers(void* self, const char* signal) {
    return QStateMachine_Receivers((QStateMachine*)self, signal);
}

int32_t q_statemachine_super_receivers(void* self, const char* signal) {
    return QStateMachine_SuperReceivers((QStateMachine*)self, signal);
}

void q_statemachine_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QStateMachine_OnReceivers((QStateMachine*)self, (intptr_t)callback);
}

bool q_statemachine_is_signal_connected(void* self, void* signal) {
    return QStateMachine_IsSignalConnected((QStateMachine*)self, (QMetaMethod*)signal);
}

bool q_statemachine_super_is_signal_connected(void* self, void* signal) {
    return QStateMachine_SuperIsSignalConnected((QStateMachine*)self, (QMetaMethod*)signal);
}

void q_statemachine_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QStateMachine_OnIsSignalConnected((QStateMachine*)self, (intptr_t)callback);
}

void q_statemachine_on_started(void* self, void (*callback)(void*)) {
    QStateMachine_Connect_Started((QStateMachine*)self, (intptr_t)callback);
}

void q_statemachine_on_stopped(void* self, void (*callback)(void*)) {
    QStateMachine_Connect_Stopped((QStateMachine*)self, (intptr_t)callback);
}

void q_statemachine_on_finished(void* self, void (*callback)(void*)) {
    QState_Connect_Finished((QState*)self, (intptr_t)callback);
}

void q_statemachine_on_properties_assigned(void* self, void (*callback)(void*)) {
    QState_Connect_PropertiesAssigned((QState*)self, (intptr_t)callback);
}

void q_statemachine_on_child_mode_changed(void* self, void (*callback)(void*)) {
    QState_Connect_ChildModeChanged((QState*)self, (intptr_t)callback);
}

void q_statemachine_on_initial_state_changed(void* self, void (*callback)(void*)) {
    QState_Connect_InitialStateChanged((QState*)self, (intptr_t)callback);
}

void q_statemachine_on_error_state_changed(void* self, void (*callback)(void*)) {
    QState_Connect_ErrorStateChanged((QState*)self, (intptr_t)callback);
}

void q_statemachine_on_entered(void* self, void (*callback)(void*)) {
    QAbstractState_Connect_Entered((QAbstractState*)self, (intptr_t)callback);
}

void q_statemachine_on_exited(void* self, void (*callback)(void*)) {
    QAbstractState_Connect_Exited((QAbstractState*)self, (intptr_t)callback);
}

void q_statemachine_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_statemachine_delete(void* self) {
    QStateMachine_Delete((QStateMachine*)(self));
}

QStateMachine__SignalEvent* q_statemachine__signalevent_new(void* sender, int signalIndex, libqt_list /* of QVariant* */ arguments) {
    return QStateMachine__SignalEvent_new((QObject*)sender, signalIndex, arguments);
}

QStateMachine__SignalEvent* q_statemachine__signalevent_new2(void* param1) {
    return QStateMachine__SignalEvent_new2((QStateMachine__SignalEvent*)param1);
}

QObject* q_statemachine__signalevent_sender(void* self) {
    return QStateMachine__SignalEvent_Sender((QStateMachine__SignalEvent*)self);
}

int32_t q_statemachine__signalevent_signal_index(void* self) {
    return QStateMachine__SignalEvent_SignalIndex((QStateMachine__SignalEvent*)self);
}

libqt_list /* of QVariant* */ q_statemachine__signalevent_arguments(void* self) {
    libqt_list _arr = QStateMachine__SignalEvent_Arguments((QStateMachine__SignalEvent*)self);
    return _arr;
}

int32_t q_statemachine__signalevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_statemachine__signalevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_statemachine__signalevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_statemachine__signalevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_statemachine__signalevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_statemachine__signalevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_statemachine__signalevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_statemachine__signalevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_statemachine__signalevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_statemachine__signalevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_statemachine__signalevent_set_accepted(void* self, bool accepted) {
    QStateMachine__SignalEvent_SetAccepted((QStateMachine__SignalEvent*)self, accepted);
}

void q_statemachine__signalevent_super_set_accepted(void* self, bool accepted) {
    QStateMachine__SignalEvent_SuperSetAccepted((QStateMachine__SignalEvent*)self, accepted);
}

void q_statemachine__signalevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QStateMachine__SignalEvent_OnSetAccepted((QStateMachine__SignalEvent*)self, (intptr_t)callback);
}

QEvent* q_statemachine__signalevent_clone(void* self) {
    return QStateMachine__SignalEvent_Clone((QStateMachine__SignalEvent*)self);
}

QEvent* q_statemachine__signalevent_super_clone(void* self) {
    return QStateMachine__SignalEvent_SuperClone((QStateMachine__SignalEvent*)self);
}

void q_statemachine__signalevent_on_clone(void* self, QEvent* (*callback)()) {
    QStateMachine__SignalEvent_OnClone((QStateMachine__SignalEvent*)self, (intptr_t)callback);
}

void q_statemachine__signalevent_delete(void* self) {
    QStateMachine__SignalEvent_Delete((QStateMachine__SignalEvent*)(self));
}

QStateMachine__WrappedEvent* q_statemachine__wrappedevent_new(void* object, void* event) {
    return QStateMachine__WrappedEvent_new((QObject*)object, (QEvent*)event);
}

QStateMachine__WrappedEvent* q_statemachine__wrappedevent_new2(void* param1) {
    return QStateMachine__WrappedEvent_new2((QStateMachine__WrappedEvent*)param1);
}

QObject* q_statemachine__wrappedevent_object(void* self) {
    return QStateMachine__WrappedEvent_Object((QStateMachine__WrappedEvent*)self);
}

QEvent* q_statemachine__wrappedevent_event(void* self) {
    return QStateMachine__WrappedEvent_Event((QStateMachine__WrappedEvent*)self);
}

int32_t q_statemachine__wrappedevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_statemachine__wrappedevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_statemachine__wrappedevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_statemachine__wrappedevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_statemachine__wrappedevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_statemachine__wrappedevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_statemachine__wrappedevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_statemachine__wrappedevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_statemachine__wrappedevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_statemachine__wrappedevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_statemachine__wrappedevent_set_accepted(void* self, bool accepted) {
    QStateMachine__WrappedEvent_SetAccepted((QStateMachine__WrappedEvent*)self, accepted);
}

void q_statemachine__wrappedevent_super_set_accepted(void* self, bool accepted) {
    QStateMachine__WrappedEvent_SuperSetAccepted((QStateMachine__WrappedEvent*)self, accepted);
}

void q_statemachine__wrappedevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QStateMachine__WrappedEvent_OnSetAccepted((QStateMachine__WrappedEvent*)self, (intptr_t)callback);
}

QEvent* q_statemachine__wrappedevent_clone(void* self) {
    return QStateMachine__WrappedEvent_Clone((QStateMachine__WrappedEvent*)self);
}

QEvent* q_statemachine__wrappedevent_super_clone(void* self) {
    return QStateMachine__WrappedEvent_SuperClone((QStateMachine__WrappedEvent*)self);
}

void q_statemachine__wrappedevent_on_clone(void* self, QEvent* (*callback)()) {
    QStateMachine__WrappedEvent_OnClone((QStateMachine__WrappedEvent*)self, (intptr_t)callback);
}

void q_statemachine__wrappedevent_delete(void* self) {
    QStateMachine__WrappedEvent_Delete((QStateMachine__WrappedEvent*)(self));
}
