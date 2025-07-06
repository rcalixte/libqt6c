#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqobject.hpp"
#include "libqobject.h"

QMetaObject* q_objectdata_dynamic_meta_object(void* self) {
    return QObjectData_DynamicMetaObject((QObjectData*)self);
}

void q_objectdata_delete(void* self) {
    QObjectData_Delete((QObjectData*)(self));
}

QObject* q_object_new() {
    return QObject_new();
}

QObject* q_object_new2(void* parent) {
    return QObject_new2((QObject*)parent);
}

const QMetaObject* q_object_meta_object(void* self) {
    return QObject_MetaObject((QObject*)self);
}

void* q_object_metacast(void* self, const char* param1) {
    return QObject_Metacast((QObject*)self, param1);
}

int32_t q_object_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QObject_Metacall((QObject*)self, param1, param2, param3);
}

void q_object_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QObject_OnMetacall((QObject*)self, (intptr_t)slot);
}

int32_t q_object_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QObject_QBaseMetacall((QObject*)self, param1, param2, param3);
}

const char* q_object_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_object_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

void q_object_on_event(void* self, bool (*slot)(void*, void*)) {
    QObject_OnEvent((QObject*)self, (intptr_t)slot);
}

bool q_object_qbase_event(void* self, void* event) {
    return QObject_QBaseEvent((QObject*)self, (QEvent*)event);
}

bool q_object_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

void q_object_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QObject_OnEventFilter((QObject*)self, (intptr_t)slot);
}

bool q_object_qbase_event_filter(void* self, void* watched, void* event) {
    return QObject_QBaseEventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_object_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_object_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_object_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_object_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_object_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_object_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_object_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_object_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_object_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_object_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_object_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_object_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_object_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_object_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_object_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_object_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_object_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_object_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_object_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_object_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_object_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_object_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_object_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_object_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_object_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_object_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_object_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_object_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_object_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_object_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_object_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_object_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

QObject* q_object_sender(void* self) {
    return QObject_Sender((QObject*)self);
}

void q_object_on_sender(void* self, QObject* (*slot)()) {
    QObject_OnSender((QObject*)self, (intptr_t)slot);
}

QObject* q_object_qbase_sender(void* self) {
    return QObject_QBaseSender((QObject*)self);
}

int32_t q_object_sender_signal_index(void* self) {
    return QObject_SenderSignalIndex((QObject*)self);
}

void q_object_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QObject_OnSenderSignalIndex((QObject*)self, (intptr_t)slot);
}

int32_t q_object_qbase_sender_signal_index(void* self) {
    return QObject_QBaseSenderSignalIndex((QObject*)self);
}

int32_t q_object_receivers(void* self, const char* signal) {
    return QObject_Receivers((QObject*)self, signal);
}

void q_object_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QObject_OnReceivers((QObject*)self, (intptr_t)slot);
}

int32_t q_object_qbase_receivers(void* self, const char* signal) {
    return QObject_QBaseReceivers((QObject*)self, signal);
}

bool q_object_is_signal_connected(void* self, void* signal) {
    return QObject_IsSignalConnected((QObject*)self, (QMetaMethod*)signal);
}

void q_object_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QObject_OnIsSignalConnected((QObject*)self, (intptr_t)slot);
}

bool q_object_qbase_is_signal_connected(void* self, void* signal) {
    return QObject_QBaseIsSignalConnected((QObject*)self, (QMetaMethod*)signal);
}

void q_object_timer_event(void* self, void* event) {
    QObject_TimerEvent((QObject*)self, (QTimerEvent*)event);
}

void q_object_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QObject_OnTimerEvent((QObject*)self, (intptr_t)slot);
}

void q_object_qbase_timer_event(void* self, void* event) {
    QObject_QBaseTimerEvent((QObject*)self, (QTimerEvent*)event);
}

void q_object_child_event(void* self, void* event) {
    QObject_ChildEvent((QObject*)self, (QChildEvent*)event);
}

void q_object_on_child_event(void* self, void (*slot)(void*, void*)) {
    QObject_OnChildEvent((QObject*)self, (intptr_t)slot);
}

void q_object_qbase_child_event(void* self, void* event) {
    QObject_QBaseChildEvent((QObject*)self, (QChildEvent*)event);
}

void q_object_custom_event(void* self, void* event) {
    QObject_CustomEvent((QObject*)self, (QEvent*)event);
}

void q_object_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QObject_OnCustomEvent((QObject*)self, (intptr_t)slot);
}

void q_object_qbase_custom_event(void* self, void* event) {
    QObject_QBaseCustomEvent((QObject*)self, (QEvent*)event);
}

void q_object_connect_notify(void* self, void* signal) {
    QObject_ConnectNotify((QObject*)self, (QMetaMethod*)signal);
}

void q_object_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QObject_OnConnectNotify((QObject*)self, (intptr_t)slot);
}

void q_object_qbase_connect_notify(void* self, void* signal) {
    QObject_QBaseConnectNotify((QObject*)self, (QMetaMethod*)signal);
}

void q_object_disconnect_notify(void* self, void* signal) {
    QObject_DisconnectNotify((QObject*)self, (QMetaMethod*)signal);
}

void q_object_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QObject_OnDisconnectNotify((QObject*)self, (intptr_t)slot);
}

void q_object_qbase_disconnect_notify(void* self, void* signal) {
    QObject_QBaseDisconnectNotify((QObject*)self, (QMetaMethod*)signal);
}

const char* q_object_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_object_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_object_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_object_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_object_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_object_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_object_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_object_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_object_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_object_delete(void* self) {
    QObject_Delete((QObject*)(self));
}

QSignalBlocker* q_signalblocker_new(void* o) {
    return QSignalBlocker_new((QObject*)o);
}

QSignalBlocker* q_signalblocker_new2(void* o) {
    return QSignalBlocker_new2((QObject*)o);
}

void q_signalblocker_reblock(void* self) {
    QSignalBlocker_Reblock((QSignalBlocker*)self);
}

void q_signalblocker_unblock(void* self) {
    QSignalBlocker_Unblock((QSignalBlocker*)self);
}

void q_signalblocker_dismiss(void* self) {
    QSignalBlocker_Dismiss((QSignalBlocker*)self);
}

void q_signalblocker_delete(void* self) {
    QSignalBlocker_Delete((QSignalBlocker*)(self));
}
