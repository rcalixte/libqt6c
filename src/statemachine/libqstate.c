#include "libqabstractstate.hpp"
#include "libqabstracttransition.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqsignaltransition.hpp"
#include "../libqvariant.hpp"
#include "libqstate.hpp"
#include "libqstate.h"

QState* q_state_new() {
    return QState_new();
}

QState* q_state_new2(int32_t childMode) {
    return QState_new2(childMode);
}

QState* q_state_new3(void* parent) {
    return QState_new3((QState*)parent);
}

QState* q_state_new4(int32_t childMode, void* parent) {
    return QState_new4(childMode, (QState*)parent);
}

const QMetaObject* q_state_meta_object(void* self) {
    return QState_MetaObject((QState*)self);
}

void q_state_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QState_OnMetaObject((QState*)self, (intptr_t)callback);
}

const QMetaObject* q_state_qbase_meta_object(void* self) {
    return QState_QBaseMetaObject((QState*)self);
}

void* q_state_metacast(void* self, const char* param1) {
    return QState_Metacast((QState*)self, param1);
}

void q_state_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QState_OnMetacast((QState*)self, (intptr_t)callback);
}

void* q_state_qbase_metacast(void* self, const char* param1) {
    return QState_QBaseMetacast((QState*)self, param1);
}

int32_t q_state_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QState_Metacall((QState*)self, param1, param2, param3);
}

void q_state_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QState_OnMetacall((QState*)self, (intptr_t)callback);
}

int32_t q_state_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QState_QBaseMetacall((QState*)self, param1, param2, param3);
}

const char* q_state_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractState* q_state_error_state(void* self) {
    return QState_ErrorState((QState*)self);
}

void q_state_set_error_state(void* self, void* state) {
    QState_SetErrorState((QState*)self, (QAbstractState*)state);
}

void q_state_add_transition(void* self, void* transition) {
    QState_AddTransition((QState*)self, (QAbstractTransition*)transition);
}

QSignalTransition* q_state_add_transition2(void* self, void* sender, const char* signal, void* target) {
    return QState_AddTransition2((QState*)self, (QObject*)sender, signal, (QAbstractState*)target);
}

QAbstractTransition* q_state_add_transition3(void* self, void* target) {
    return QState_AddTransition3((QState*)self, (QAbstractState*)target);
}

void q_state_remove_transition(void* self, void* transition) {
    QState_RemoveTransition((QState*)self, (QAbstractTransition*)transition);
}

libqt_list /* of QAbstractTransition* */ q_state_transitions(void* self) {
    libqt_list _arr = QState_Transitions((QState*)self);
    return _arr;
}

QAbstractState* q_state_initial_state(void* self) {
    return QState_InitialState((QState*)self);
}

void q_state_set_initial_state(void* self, void* state) {
    QState_SetInitialState((QState*)self, (QAbstractState*)state);
}

int32_t q_state_child_mode(void* self) {
    return QState_ChildMode((QState*)self);
}

void q_state_set_child_mode(void* self, int32_t mode) {
    QState_SetChildMode((QState*)self, mode);
}

void q_state_assign_property(void* self, void* object, const char* name, void* value) {
    QState_AssignProperty((QState*)self, (QObject*)object, name, (QVariant*)value);
}

void q_state_on_entry(void* self, void* event) {
    QState_OnEntry((QState*)self, (QEvent*)event);
}

void q_state_on_on_entry(void* self, void (*callback)(void*, void*)) {
    QState_OnOnEntry((QState*)self, (intptr_t)callback);
}

void q_state_qbase_on_entry(void* self, void* event) {
    QState_QBaseOnEntry((QState*)self, (QEvent*)event);
}

void q_state_on_exit(void* self, void* event) {
    QState_OnExit((QState*)self, (QEvent*)event);
}

void q_state_on_on_exit(void* self, void (*callback)(void*, void*)) {
    QState_OnOnExit((QState*)self, (intptr_t)callback);
}

void q_state_qbase_on_exit(void* self, void* event) {
    QState_QBaseOnExit((QState*)self, (QEvent*)event);
}

bool q_state_event(void* self, void* e) {
    return QState_Event((QState*)self, (QEvent*)e);
}

void q_state_on_event(void* self, bool (*callback)(void*, void*)) {
    QState_OnEvent((QState*)self, (intptr_t)callback);
}

bool q_state_qbase_event(void* self, void* e) {
    return QState_QBaseEvent((QState*)self, (QEvent*)e);
}

const char* q_state_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_state_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QState* q_state_parent_state(void* self) {
    return QAbstractState_ParentState((QAbstractState*)self);
}

QStateMachine* q_state_machine(void* self) {
    return QAbstractState_Machine((QAbstractState*)self);
}

bool q_state_active(void* self) {
    return QAbstractState_Active((QAbstractState*)self);
}

void q_state_active_changed(void* self, bool active) {
    QAbstractState_ActiveChanged((QAbstractState*)self, active);
}

void q_state_on_active_changed(void* self, void (*callback)(void*, bool)) {
    QAbstractState_Connect_ActiveChanged((QAbstractState*)self, (intptr_t)callback);
}

const char* q_state_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_state_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_state_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_state_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_state_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_state_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_state_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_state_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_state_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_state_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_state_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_state_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_state_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_state_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_state_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_state_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_state_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_state_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_state_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_state_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_state_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_state_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_state_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_state_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_state_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_state_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_state_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_state_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_state_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_state_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_state_dynamic_property_names\n");
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

QBindingStorage* q_state_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_state_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_state_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_state_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_state_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_state_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_state_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_state_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_state_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_state_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_state_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_state_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_state_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_state_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_state_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_state_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_state_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_state_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_state_event_filter(void* self, void* watched, void* event) {
    return QState_EventFilter((QState*)self, (QObject*)watched, (QEvent*)event);
}

bool q_state_qbase_event_filter(void* self, void* watched, void* event) {
    return QState_QBaseEventFilter((QState*)self, (QObject*)watched, (QEvent*)event);
}

void q_state_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QState_OnEventFilter((QState*)self, (intptr_t)callback);
}

void q_state_timer_event(void* self, void* event) {
    QState_TimerEvent((QState*)self, (QTimerEvent*)event);
}

void q_state_qbase_timer_event(void* self, void* event) {
    QState_QBaseTimerEvent((QState*)self, (QTimerEvent*)event);
}

void q_state_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QState_OnTimerEvent((QState*)self, (intptr_t)callback);
}

void q_state_child_event(void* self, void* event) {
    QState_ChildEvent((QState*)self, (QChildEvent*)event);
}

void q_state_qbase_child_event(void* self, void* event) {
    QState_QBaseChildEvent((QState*)self, (QChildEvent*)event);
}

void q_state_on_child_event(void* self, void (*callback)(void*, void*)) {
    QState_OnChildEvent((QState*)self, (intptr_t)callback);
}

void q_state_custom_event(void* self, void* event) {
    QState_CustomEvent((QState*)self, (QEvent*)event);
}

void q_state_qbase_custom_event(void* self, void* event) {
    QState_QBaseCustomEvent((QState*)self, (QEvent*)event);
}

void q_state_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QState_OnCustomEvent((QState*)self, (intptr_t)callback);
}

void q_state_connect_notify(void* self, void* signal) {
    QState_ConnectNotify((QState*)self, (QMetaMethod*)signal);
}

void q_state_qbase_connect_notify(void* self, void* signal) {
    QState_QBaseConnectNotify((QState*)self, (QMetaMethod*)signal);
}

void q_state_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QState_OnConnectNotify((QState*)self, (intptr_t)callback);
}

void q_state_disconnect_notify(void* self, void* signal) {
    QState_DisconnectNotify((QState*)self, (QMetaMethod*)signal);
}

void q_state_qbase_disconnect_notify(void* self, void* signal) {
    QState_QBaseDisconnectNotify((QState*)self, (QMetaMethod*)signal);
}

void q_state_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QState_OnDisconnectNotify((QState*)self, (intptr_t)callback);
}

QObject* q_state_sender(void* self) {
    return QState_Sender((QState*)self);
}

QObject* q_state_qbase_sender(void* self) {
    return QState_QBaseSender((QState*)self);
}

void q_state_on_sender(void* self, QObject* (*callback)()) {
    QState_OnSender((QState*)self, (intptr_t)callback);
}

int32_t q_state_sender_signal_index(void* self) {
    return QState_SenderSignalIndex((QState*)self);
}

int32_t q_state_qbase_sender_signal_index(void* self) {
    return QState_QBaseSenderSignalIndex((QState*)self);
}

void q_state_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QState_OnSenderSignalIndex((QState*)self, (intptr_t)callback);
}

int32_t q_state_receivers(void* self, const char* signal) {
    return QState_Receivers((QState*)self, signal);
}

int32_t q_state_qbase_receivers(void* self, const char* signal) {
    return QState_QBaseReceivers((QState*)self, signal);
}

void q_state_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QState_OnReceivers((QState*)self, (intptr_t)callback);
}

bool q_state_is_signal_connected(void* self, void* signal) {
    return QState_IsSignalConnected((QState*)self, (QMetaMethod*)signal);
}

bool q_state_qbase_is_signal_connected(void* self, void* signal) {
    return QState_QBaseIsSignalConnected((QState*)self, (QMetaMethod*)signal);
}

void q_state_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QState_OnIsSignalConnected((QState*)self, (intptr_t)callback);
}

void q_state_on_finished(void* self, void (*callback)(void*)) {
    QState_Connect_Finished((QState*)self, (intptr_t)callback);
}

void q_state_on_properties_assigned(void* self, void (*callback)(void*)) {
    QState_Connect_PropertiesAssigned((QState*)self, (intptr_t)callback);
}

void q_state_on_child_mode_changed(void* self, void (*callback)(void*)) {
    QState_Connect_ChildModeChanged((QState*)self, (intptr_t)callback);
}

void q_state_on_initial_state_changed(void* self, void (*callback)(void*)) {
    QState_Connect_InitialStateChanged((QState*)self, (intptr_t)callback);
}

void q_state_on_error_state_changed(void* self, void (*callback)(void*)) {
    QState_Connect_ErrorStateChanged((QState*)self, (intptr_t)callback);
}

void q_state_on_entered(void* self, void (*callback)(void*)) {
    QAbstractState_Connect_Entered((QAbstractState*)self, (intptr_t)callback);
}

void q_state_on_exited(void* self, void (*callback)(void*)) {
    QAbstractState_Connect_Exited((QAbstractState*)self, (intptr_t)callback);
}

void q_state_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_state_delete(void* self) {
    QState_Delete((QState*)(self));
}
