#include "libqaccessible.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqaccessibleplugin.hpp"
#include "libqaccessibleplugin.h"

QAccessiblePlugin* q_accessibleplugin_new() {
    return QAccessiblePlugin_new();
}

QAccessiblePlugin* q_accessibleplugin_new2(void* parent) {
    return QAccessiblePlugin_new2((QObject*)parent);
}

const QMetaObject* q_accessibleplugin_meta_object(void* self) {
    return QAccessiblePlugin_MetaObject((QAccessiblePlugin*)self);
}

void* q_accessibleplugin_metacast(void* self, const char* param1) {
    return QAccessiblePlugin_Metacast((QAccessiblePlugin*)self, param1);
}

int32_t q_accessibleplugin_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAccessiblePlugin_Metacall((QAccessiblePlugin*)self, param1, param2, param3);
}

void q_accessibleplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAccessiblePlugin_OnMetacall((QAccessiblePlugin*)self, (intptr_t)slot);
}

int32_t q_accessibleplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAccessiblePlugin_QBaseMetacall((QAccessiblePlugin*)self, param1, param2, param3);
}

const char* q_accessibleplugin_tr(const char* s) {
    libqt_string _str = QAccessiblePlugin_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAccessibleInterface* q_accessibleplugin_create(void* self, const char* key, void* object) {
    return QAccessiblePlugin_Create((QAccessiblePlugin*)self, qstring(key), (QObject*)object);
}

void q_accessibleplugin_on_create(void* self, QAccessibleInterface* (*slot)(void*, const char*, void*)) {
    QAccessiblePlugin_OnCreate((QAccessiblePlugin*)self, (intptr_t)slot);
}

QAccessibleInterface* q_accessibleplugin_qbase_create(void* self, const char* key, void* object) {
    return QAccessiblePlugin_QBaseCreate((QAccessiblePlugin*)self, qstring(key), (QObject*)object);
}

const char* q_accessibleplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QAccessiblePlugin_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibleplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAccessiblePlugin_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibleplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accessibleplugin_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_accessibleplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_accessibleplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_accessibleplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_accessibleplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_accessibleplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_accessibleplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_accessibleplugin_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_accessibleplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_accessibleplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_accessibleplugin_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_accessibleplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_accessibleplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_accessibleplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_accessibleplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_accessibleplugin_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_accessibleplugin_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_accessibleplugin_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_accessibleplugin_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_accessibleplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_accessibleplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_accessibleplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_accessibleplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_accessibleplugin_dynamic_property_names(void* self) {
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

QBindingStorage* q_accessibleplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_accessibleplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_accessibleplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_accessibleplugin_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_accessibleplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_accessibleplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_accessibleplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_accessibleplugin_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_accessibleplugin_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_accessibleplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_accessibleplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_accessibleplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_accessibleplugin_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_accessibleplugin_event(void* self, void* event) {
    return QAccessiblePlugin_Event((QAccessiblePlugin*)self, (QEvent*)event);
}

bool q_accessibleplugin_qbase_event(void* self, void* event) {
    return QAccessiblePlugin_QBaseEvent((QAccessiblePlugin*)self, (QEvent*)event);
}

void q_accessibleplugin_on_event(void* self, bool (*slot)(void*, void*)) {
    QAccessiblePlugin_OnEvent((QAccessiblePlugin*)self, (intptr_t)slot);
}

bool q_accessibleplugin_event_filter(void* self, void* watched, void* event) {
    return QAccessiblePlugin_EventFilter((QAccessiblePlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool q_accessibleplugin_qbase_event_filter(void* self, void* watched, void* event) {
    return QAccessiblePlugin_QBaseEventFilter((QAccessiblePlugin*)self, (QObject*)watched, (QEvent*)event);
}

void q_accessibleplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAccessiblePlugin_OnEventFilter((QAccessiblePlugin*)self, (intptr_t)slot);
}

void q_accessibleplugin_timer_event(void* self, void* event) {
    QAccessiblePlugin_TimerEvent((QAccessiblePlugin*)self, (QTimerEvent*)event);
}

void q_accessibleplugin_qbase_timer_event(void* self, void* event) {
    QAccessiblePlugin_QBaseTimerEvent((QAccessiblePlugin*)self, (QTimerEvent*)event);
}

void q_accessibleplugin_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAccessiblePlugin_OnTimerEvent((QAccessiblePlugin*)self, (intptr_t)slot);
}

void q_accessibleplugin_child_event(void* self, void* event) {
    QAccessiblePlugin_ChildEvent((QAccessiblePlugin*)self, (QChildEvent*)event);
}

void q_accessibleplugin_qbase_child_event(void* self, void* event) {
    QAccessiblePlugin_QBaseChildEvent((QAccessiblePlugin*)self, (QChildEvent*)event);
}

void q_accessibleplugin_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAccessiblePlugin_OnChildEvent((QAccessiblePlugin*)self, (intptr_t)slot);
}

void q_accessibleplugin_custom_event(void* self, void* event) {
    QAccessiblePlugin_CustomEvent((QAccessiblePlugin*)self, (QEvent*)event);
}

void q_accessibleplugin_qbase_custom_event(void* self, void* event) {
    QAccessiblePlugin_QBaseCustomEvent((QAccessiblePlugin*)self, (QEvent*)event);
}

void q_accessibleplugin_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAccessiblePlugin_OnCustomEvent((QAccessiblePlugin*)self, (intptr_t)slot);
}

void q_accessibleplugin_connect_notify(void* self, void* signal) {
    QAccessiblePlugin_ConnectNotify((QAccessiblePlugin*)self, (QMetaMethod*)signal);
}

void q_accessibleplugin_qbase_connect_notify(void* self, void* signal) {
    QAccessiblePlugin_QBaseConnectNotify((QAccessiblePlugin*)self, (QMetaMethod*)signal);
}

void q_accessibleplugin_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAccessiblePlugin_OnConnectNotify((QAccessiblePlugin*)self, (intptr_t)slot);
}

void q_accessibleplugin_disconnect_notify(void* self, void* signal) {
    QAccessiblePlugin_DisconnectNotify((QAccessiblePlugin*)self, (QMetaMethod*)signal);
}

void q_accessibleplugin_qbase_disconnect_notify(void* self, void* signal) {
    QAccessiblePlugin_QBaseDisconnectNotify((QAccessiblePlugin*)self, (QMetaMethod*)signal);
}

void q_accessibleplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAccessiblePlugin_OnDisconnectNotify((QAccessiblePlugin*)self, (intptr_t)slot);
}

QObject* q_accessibleplugin_sender(void* self) {
    return QAccessiblePlugin_Sender((QAccessiblePlugin*)self);
}

QObject* q_accessibleplugin_qbase_sender(void* self) {
    return QAccessiblePlugin_QBaseSender((QAccessiblePlugin*)self);
}

void q_accessibleplugin_on_sender(void* self, QObject* (*slot)()) {
    QAccessiblePlugin_OnSender((QAccessiblePlugin*)self, (intptr_t)slot);
}

int32_t q_accessibleplugin_sender_signal_index(void* self) {
    return QAccessiblePlugin_SenderSignalIndex((QAccessiblePlugin*)self);
}

int32_t q_accessibleplugin_qbase_sender_signal_index(void* self) {
    return QAccessiblePlugin_QBaseSenderSignalIndex((QAccessiblePlugin*)self);
}

void q_accessibleplugin_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAccessiblePlugin_OnSenderSignalIndex((QAccessiblePlugin*)self, (intptr_t)slot);
}

int32_t q_accessibleplugin_receivers(void* self, const char* signal) {
    return QAccessiblePlugin_Receivers((QAccessiblePlugin*)self, signal);
}

int32_t q_accessibleplugin_qbase_receivers(void* self, const char* signal) {
    return QAccessiblePlugin_QBaseReceivers((QAccessiblePlugin*)self, signal);
}

void q_accessibleplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAccessiblePlugin_OnReceivers((QAccessiblePlugin*)self, (intptr_t)slot);
}

bool q_accessibleplugin_is_signal_connected(void* self, void* signal) {
    return QAccessiblePlugin_IsSignalConnected((QAccessiblePlugin*)self, (QMetaMethod*)signal);
}

bool q_accessibleplugin_qbase_is_signal_connected(void* self, void* signal) {
    return QAccessiblePlugin_QBaseIsSignalConnected((QAccessiblePlugin*)self, (QMetaMethod*)signal);
}

void q_accessibleplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAccessiblePlugin_OnIsSignalConnected((QAccessiblePlugin*)self, (intptr_t)slot);
}

void q_accessibleplugin_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_accessibleplugin_delete(void* self) {
    QAccessiblePlugin_Delete((QAccessiblePlugin*)(self));
}
