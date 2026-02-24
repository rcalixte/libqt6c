#include "libqabstractstate.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqstate.hpp"
#include "libqfinalstate.hpp"
#include "libqfinalstate.h"

QFinalState* q_finalstate_new() {
    return QFinalState_new();
}

QFinalState* q_finalstate_new2(void* parent) {
    return QFinalState_new2((QState*)parent);
}

const QMetaObject* q_finalstate_meta_object(void* self) {
    return QFinalState_MetaObject((QFinalState*)self);
}

void q_finalstate_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QFinalState_OnMetaObject((QFinalState*)self, (intptr_t)callback);
}

const QMetaObject* q_finalstate_super_meta_object(void* self) {
    return QFinalState_SuperMetaObject((QFinalState*)self);
}

void* q_finalstate_metacast(void* self, const char* param1) {
    return QFinalState_Metacast((QFinalState*)self, param1);
}

void q_finalstate_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QFinalState_OnMetacast((QFinalState*)self, (intptr_t)callback);
}

void* q_finalstate_super_metacast(void* self, const char* param1) {
    return QFinalState_SuperMetacast((QFinalState*)self, param1);
}

int32_t q_finalstate_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QFinalState_Metacall((QFinalState*)self, param1, param2, param3);
}

void q_finalstate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QFinalState_OnMetacall((QFinalState*)self, (intptr_t)callback);
}

int32_t q_finalstate_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QFinalState_SuperMetacall((QFinalState*)self, param1, param2, param3);
}

const char* q_finalstate_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_finalstate_on_entry(void* self, void* event) {
    QFinalState_OnEntry((QFinalState*)self, (QEvent*)event);
}

void q_finalstate_on_on_entry(void* self, void (*callback)(void*, void*)) {
    QFinalState_OnOnEntry((QFinalState*)self, (intptr_t)callback);
}

void q_finalstate_super_on_entry(void* self, void* event) {
    QFinalState_SuperOnEntry((QFinalState*)self, (QEvent*)event);
}

void q_finalstate_on_exit(void* self, void* event) {
    QFinalState_OnExit((QFinalState*)self, (QEvent*)event);
}

void q_finalstate_on_on_exit(void* self, void (*callback)(void*, void*)) {
    QFinalState_OnOnExit((QFinalState*)self, (intptr_t)callback);
}

void q_finalstate_super_on_exit(void* self, void* event) {
    QFinalState_SuperOnExit((QFinalState*)self, (QEvent*)event);
}

bool q_finalstate_event(void* self, void* e) {
    return QFinalState_Event((QFinalState*)self, (QEvent*)e);
}

void q_finalstate_on_event(void* self, bool (*callback)(void*, void*)) {
    QFinalState_OnEvent((QFinalState*)self, (intptr_t)callback);
}

bool q_finalstate_super_event(void* self, void* e) {
    return QFinalState_SuperEvent((QFinalState*)self, (QEvent*)e);
}

const char* q_finalstate_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_finalstate_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QState* q_finalstate_parent_state(void* self) {
    return QAbstractState_ParentState((QAbstractState*)self);
}

QStateMachine* q_finalstate_machine(void* self) {
    return QAbstractState_Machine((QAbstractState*)self);
}

bool q_finalstate_active(void* self) {
    return QAbstractState_Active((QAbstractState*)self);
}

void q_finalstate_active_changed(void* self, bool active) {
    QAbstractState_ActiveChanged((QAbstractState*)self, active);
}

void q_finalstate_on_active_changed(void* self, void (*callback)(void*, bool)) {
    QAbstractState_Connect_ActiveChanged((QAbstractState*)self, (intptr_t)callback);
}

const char* q_finalstate_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_finalstate_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_finalstate_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_finalstate_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_finalstate_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_finalstate_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_finalstate_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_finalstate_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_finalstate_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_finalstate_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_finalstate_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_finalstate_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_finalstate_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_finalstate_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_finalstate_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_finalstate_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_finalstate_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_finalstate_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_finalstate_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_finalstate_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_finalstate_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_finalstate_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_finalstate_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_finalstate_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_finalstate_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_finalstate_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_finalstate_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_finalstate_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_finalstate_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_finalstate_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_finalstate_dynamic_property_names\n");
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

QBindingStorage* q_finalstate_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_finalstate_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_finalstate_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_finalstate_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_finalstate_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_finalstate_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_finalstate_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_finalstate_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_finalstate_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_finalstate_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_finalstate_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_finalstate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_finalstate_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_finalstate_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_finalstate_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_finalstate_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_finalstate_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_finalstate_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_finalstate_event_filter(void* self, void* watched, void* event) {
    return QFinalState_EventFilter((QFinalState*)self, (QObject*)watched, (QEvent*)event);
}

bool q_finalstate_super_event_filter(void* self, void* watched, void* event) {
    return QFinalState_SuperEventFilter((QFinalState*)self, (QObject*)watched, (QEvent*)event);
}

void q_finalstate_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QFinalState_OnEventFilter((QFinalState*)self, (intptr_t)callback);
}

void q_finalstate_timer_event(void* self, void* event) {
    QFinalState_TimerEvent((QFinalState*)self, (QTimerEvent*)event);
}

void q_finalstate_super_timer_event(void* self, void* event) {
    QFinalState_SuperTimerEvent((QFinalState*)self, (QTimerEvent*)event);
}

void q_finalstate_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QFinalState_OnTimerEvent((QFinalState*)self, (intptr_t)callback);
}

void q_finalstate_child_event(void* self, void* event) {
    QFinalState_ChildEvent((QFinalState*)self, (QChildEvent*)event);
}

void q_finalstate_super_child_event(void* self, void* event) {
    QFinalState_SuperChildEvent((QFinalState*)self, (QChildEvent*)event);
}

void q_finalstate_on_child_event(void* self, void (*callback)(void*, void*)) {
    QFinalState_OnChildEvent((QFinalState*)self, (intptr_t)callback);
}

void q_finalstate_custom_event(void* self, void* event) {
    QFinalState_CustomEvent((QFinalState*)self, (QEvent*)event);
}

void q_finalstate_super_custom_event(void* self, void* event) {
    QFinalState_SuperCustomEvent((QFinalState*)self, (QEvent*)event);
}

void q_finalstate_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QFinalState_OnCustomEvent((QFinalState*)self, (intptr_t)callback);
}

void q_finalstate_connect_notify(void* self, void* signal) {
    QFinalState_ConnectNotify((QFinalState*)self, (QMetaMethod*)signal);
}

void q_finalstate_super_connect_notify(void* self, void* signal) {
    QFinalState_SuperConnectNotify((QFinalState*)self, (QMetaMethod*)signal);
}

void q_finalstate_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QFinalState_OnConnectNotify((QFinalState*)self, (intptr_t)callback);
}

void q_finalstate_disconnect_notify(void* self, void* signal) {
    QFinalState_DisconnectNotify((QFinalState*)self, (QMetaMethod*)signal);
}

void q_finalstate_super_disconnect_notify(void* self, void* signal) {
    QFinalState_SuperDisconnectNotify((QFinalState*)self, (QMetaMethod*)signal);
}

void q_finalstate_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QFinalState_OnDisconnectNotify((QFinalState*)self, (intptr_t)callback);
}

QObject* q_finalstate_sender(void* self) {
    return QFinalState_Sender((QFinalState*)self);
}

QObject* q_finalstate_super_sender(void* self) {
    return QFinalState_SuperSender((QFinalState*)self);
}

void q_finalstate_on_sender(void* self, QObject* (*callback)()) {
    QFinalState_OnSender((QFinalState*)self, (intptr_t)callback);
}

int32_t q_finalstate_sender_signal_index(void* self) {
    return QFinalState_SenderSignalIndex((QFinalState*)self);
}

int32_t q_finalstate_super_sender_signal_index(void* self) {
    return QFinalState_SuperSenderSignalIndex((QFinalState*)self);
}

void q_finalstate_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QFinalState_OnSenderSignalIndex((QFinalState*)self, (intptr_t)callback);
}

int32_t q_finalstate_receivers(void* self, const char* signal) {
    return QFinalState_Receivers((QFinalState*)self, signal);
}

int32_t q_finalstate_super_receivers(void* self, const char* signal) {
    return QFinalState_SuperReceivers((QFinalState*)self, signal);
}

void q_finalstate_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QFinalState_OnReceivers((QFinalState*)self, (intptr_t)callback);
}

bool q_finalstate_is_signal_connected(void* self, void* signal) {
    return QFinalState_IsSignalConnected((QFinalState*)self, (QMetaMethod*)signal);
}

bool q_finalstate_super_is_signal_connected(void* self, void* signal) {
    return QFinalState_SuperIsSignalConnected((QFinalState*)self, (QMetaMethod*)signal);
}

void q_finalstate_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QFinalState_OnIsSignalConnected((QFinalState*)self, (intptr_t)callback);
}

void q_finalstate_on_entered(void* self, void (*callback)(void*)) {
    QAbstractState_Connect_Entered((QAbstractState*)self, (intptr_t)callback);
}

void q_finalstate_on_exited(void* self, void (*callback)(void*)) {
    QAbstractState_Connect_Exited((QAbstractState*)self, (intptr_t)callback);
}

void q_finalstate_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_finalstate_delete(void* self) {
    QFinalState_Delete((QFinalState*)(self));
}
