#include "libqabstractstate.hpp"
#include "libqabstracttransition.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqstate.hpp"
#include "libqhistorystate.hpp"
#include "libqhistorystate.h"

QHistoryState* q_historystate_new() {
    return QHistoryState_new();
}

QHistoryState* q_historystate_new2(int32_t type) {
    return QHistoryState_new2(type);
}

QHistoryState* q_historystate_new3(void* parent) {
    return QHistoryState_new3((QState*)parent);
}

QHistoryState* q_historystate_new4(int32_t type, void* parent) {
    return QHistoryState_new4(type, (QState*)parent);
}

const QMetaObject* q_historystate_meta_object(void* self) {
    return QHistoryState_MetaObject((QHistoryState*)self);
}

void q_historystate_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QHistoryState_OnMetaObject((QHistoryState*)self, (intptr_t)callback);
}

const QMetaObject* q_historystate_super_meta_object(void* self) {
    return QHistoryState_SuperMetaObject((QHistoryState*)self);
}

void* q_historystate_metacast(void* self, const char* param1) {
    return QHistoryState_Metacast((QHistoryState*)self, param1);
}

void q_historystate_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QHistoryState_OnMetacast((QHistoryState*)self, (intptr_t)callback);
}

void* q_historystate_super_metacast(void* self, const char* param1) {
    return QHistoryState_SuperMetacast((QHistoryState*)self, param1);
}

int32_t q_historystate_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHistoryState_Metacall((QHistoryState*)self, param1, param2, param3);
}

void q_historystate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QHistoryState_OnMetacall((QHistoryState*)self, (intptr_t)callback);
}

int32_t q_historystate_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHistoryState_SuperMetacall((QHistoryState*)self, param1, param2, param3);
}

const char* q_historystate_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractTransition* q_historystate_default_transition(void* self) {
    return QHistoryState_DefaultTransition((QHistoryState*)self);
}

void q_historystate_set_default_transition(void* self, void* transition) {
    QHistoryState_SetDefaultTransition((QHistoryState*)self, (QAbstractTransition*)transition);
}

QAbstractState* q_historystate_default_state(void* self) {
    return QHistoryState_DefaultState((QHistoryState*)self);
}

void q_historystate_set_default_state(void* self, void* state) {
    QHistoryState_SetDefaultState((QHistoryState*)self, (QAbstractState*)state);
}

int32_t q_historystate_history_type(void* self) {
    return QHistoryState_HistoryType((QHistoryState*)self);
}

void q_historystate_set_history_type(void* self, int32_t type) {
    QHistoryState_SetHistoryType((QHistoryState*)self, type);
}

void q_historystate_on_entry(void* self, void* event) {
    QHistoryState_OnEntry((QHistoryState*)self, (QEvent*)event);
}

void q_historystate_on_on_entry(void* self, void (*callback)(void*, void*)) {
    QHistoryState_OnOnEntry((QHistoryState*)self, (intptr_t)callback);
}

void q_historystate_super_on_entry(void* self, void* event) {
    QHistoryState_SuperOnEntry((QHistoryState*)self, (QEvent*)event);
}

void q_historystate_on_exit(void* self, void* event) {
    QHistoryState_OnExit((QHistoryState*)self, (QEvent*)event);
}

void q_historystate_on_on_exit(void* self, void (*callback)(void*, void*)) {
    QHistoryState_OnOnExit((QHistoryState*)self, (intptr_t)callback);
}

void q_historystate_super_on_exit(void* self, void* event) {
    QHistoryState_SuperOnExit((QHistoryState*)self, (QEvent*)event);
}

bool q_historystate_event(void* self, void* e) {
    return QHistoryState_Event((QHistoryState*)self, (QEvent*)e);
}

void q_historystate_on_event(void* self, bool (*callback)(void*, void*)) {
    QHistoryState_OnEvent((QHistoryState*)self, (intptr_t)callback);
}

bool q_historystate_super_event(void* self, void* e) {
    return QHistoryState_SuperEvent((QHistoryState*)self, (QEvent*)e);
}

const char* q_historystate_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_historystate_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QState* q_historystate_parent_state(void* self) {
    return QAbstractState_ParentState((QAbstractState*)self);
}

QStateMachine* q_historystate_machine(void* self) {
    return QAbstractState_Machine((QAbstractState*)self);
}

bool q_historystate_active(void* self) {
    return QAbstractState_Active((QAbstractState*)self);
}

void q_historystate_active_changed(void* self, bool active) {
    QAbstractState_ActiveChanged((QAbstractState*)self, active);
}

void q_historystate_on_active_changed(void* self, void (*callback)(void*, bool)) {
    QAbstractState_Connect_ActiveChanged((QAbstractState*)self, (intptr_t)callback);
}

const char* q_historystate_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_historystate_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_historystate_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_historystate_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_historystate_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_historystate_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_historystate_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_historystate_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_historystate_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_historystate_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_historystate_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_historystate_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_historystate_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_historystate_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_historystate_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_historystate_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_historystate_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_historystate_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_historystate_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_historystate_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_historystate_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_historystate_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_historystate_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_historystate_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_historystate_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_historystate_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_historystate_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_historystate_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_historystate_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_historystate_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_historystate_dynamic_property_names\n");
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

QBindingStorage* q_historystate_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_historystate_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_historystate_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_historystate_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_historystate_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_historystate_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_historystate_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_historystate_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_historystate_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_historystate_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_historystate_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_historystate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_historystate_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_historystate_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_historystate_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_historystate_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_historystate_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_historystate_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_historystate_event_filter(void* self, void* watched, void* event) {
    return QHistoryState_EventFilter((QHistoryState*)self, (QObject*)watched, (QEvent*)event);
}

bool q_historystate_super_event_filter(void* self, void* watched, void* event) {
    return QHistoryState_SuperEventFilter((QHistoryState*)self, (QObject*)watched, (QEvent*)event);
}

void q_historystate_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QHistoryState_OnEventFilter((QHistoryState*)self, (intptr_t)callback);
}

void q_historystate_timer_event(void* self, void* event) {
    QHistoryState_TimerEvent((QHistoryState*)self, (QTimerEvent*)event);
}

void q_historystate_super_timer_event(void* self, void* event) {
    QHistoryState_SuperTimerEvent((QHistoryState*)self, (QTimerEvent*)event);
}

void q_historystate_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QHistoryState_OnTimerEvent((QHistoryState*)self, (intptr_t)callback);
}

void q_historystate_child_event(void* self, void* event) {
    QHistoryState_ChildEvent((QHistoryState*)self, (QChildEvent*)event);
}

void q_historystate_super_child_event(void* self, void* event) {
    QHistoryState_SuperChildEvent((QHistoryState*)self, (QChildEvent*)event);
}

void q_historystate_on_child_event(void* self, void (*callback)(void*, void*)) {
    QHistoryState_OnChildEvent((QHistoryState*)self, (intptr_t)callback);
}

void q_historystate_custom_event(void* self, void* event) {
    QHistoryState_CustomEvent((QHistoryState*)self, (QEvent*)event);
}

void q_historystate_super_custom_event(void* self, void* event) {
    QHistoryState_SuperCustomEvent((QHistoryState*)self, (QEvent*)event);
}

void q_historystate_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QHistoryState_OnCustomEvent((QHistoryState*)self, (intptr_t)callback);
}

void q_historystate_connect_notify(void* self, void* signal) {
    QHistoryState_ConnectNotify((QHistoryState*)self, (QMetaMethod*)signal);
}

void q_historystate_super_connect_notify(void* self, void* signal) {
    QHistoryState_SuperConnectNotify((QHistoryState*)self, (QMetaMethod*)signal);
}

void q_historystate_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QHistoryState_OnConnectNotify((QHistoryState*)self, (intptr_t)callback);
}

void q_historystate_disconnect_notify(void* self, void* signal) {
    QHistoryState_DisconnectNotify((QHistoryState*)self, (QMetaMethod*)signal);
}

void q_historystate_super_disconnect_notify(void* self, void* signal) {
    QHistoryState_SuperDisconnectNotify((QHistoryState*)self, (QMetaMethod*)signal);
}

void q_historystate_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QHistoryState_OnDisconnectNotify((QHistoryState*)self, (intptr_t)callback);
}

QObject* q_historystate_sender(void* self) {
    return QHistoryState_Sender((QHistoryState*)self);
}

QObject* q_historystate_super_sender(void* self) {
    return QHistoryState_SuperSender((QHistoryState*)self);
}

void q_historystate_on_sender(void* self, QObject* (*callback)()) {
    QHistoryState_OnSender((QHistoryState*)self, (intptr_t)callback);
}

int32_t q_historystate_sender_signal_index(void* self) {
    return QHistoryState_SenderSignalIndex((QHistoryState*)self);
}

int32_t q_historystate_super_sender_signal_index(void* self) {
    return QHistoryState_SuperSenderSignalIndex((QHistoryState*)self);
}

void q_historystate_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QHistoryState_OnSenderSignalIndex((QHistoryState*)self, (intptr_t)callback);
}

int32_t q_historystate_receivers(void* self, const char* signal) {
    return QHistoryState_Receivers((QHistoryState*)self, signal);
}

int32_t q_historystate_super_receivers(void* self, const char* signal) {
    return QHistoryState_SuperReceivers((QHistoryState*)self, signal);
}

void q_historystate_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QHistoryState_OnReceivers((QHistoryState*)self, (intptr_t)callback);
}

bool q_historystate_is_signal_connected(void* self, void* signal) {
    return QHistoryState_IsSignalConnected((QHistoryState*)self, (QMetaMethod*)signal);
}

bool q_historystate_super_is_signal_connected(void* self, void* signal) {
    return QHistoryState_SuperIsSignalConnected((QHistoryState*)self, (QMetaMethod*)signal);
}

void q_historystate_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QHistoryState_OnIsSignalConnected((QHistoryState*)self, (intptr_t)callback);
}

void q_historystate_on_default_transition_changed(void* self, void (*callback)(void*)) {
    QHistoryState_Connect_DefaultTransitionChanged((QHistoryState*)self, (intptr_t)callback);
}

void q_historystate_on_default_state_changed(void* self, void (*callback)(void*)) {
    QHistoryState_Connect_DefaultStateChanged((QHistoryState*)self, (intptr_t)callback);
}

void q_historystate_on_history_type_changed(void* self, void (*callback)(void*)) {
    QHistoryState_Connect_HistoryTypeChanged((QHistoryState*)self, (intptr_t)callback);
}

void q_historystate_on_entered(void* self, void (*callback)(void*)) {
    QAbstractState_Connect_Entered((QAbstractState*)self, (intptr_t)callback);
}

void q_historystate_on_exited(void* self, void (*callback)(void*)) {
    QAbstractState_Connect_Exited((QAbstractState*)self, (intptr_t)callback);
}

void q_historystate_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_historystate_delete(void* self) {
    QHistoryState_Delete((QHistoryState*)(self));
}
