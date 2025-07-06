#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqgenericplugin.hpp"
#include "libqgenericplugin.h"

QGenericPlugin* q_genericplugin_new() {
    return QGenericPlugin_new();
}

QGenericPlugin* q_genericplugin_new2(void* parent) {
    return QGenericPlugin_new2((QObject*)parent);
}

const QMetaObject* q_genericplugin_meta_object(void* self) {
    return QGenericPlugin_MetaObject((QGenericPlugin*)self);
}

void* q_genericplugin_metacast(void* self, const char* param1) {
    return QGenericPlugin_Metacast((QGenericPlugin*)self, param1);
}

int32_t q_genericplugin_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGenericPlugin_Metacall((QGenericPlugin*)self, param1, param2, param3);
}

void q_genericplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGenericPlugin_OnMetacall((QGenericPlugin*)self, (intptr_t)slot);
}

int32_t q_genericplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGenericPlugin_QBaseMetacall((QGenericPlugin*)self, param1, param2, param3);
}

const char* q_genericplugin_tr(const char* s) {
    libqt_string _str = QGenericPlugin_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_genericplugin_create(void* self, const char* name, const char* spec) {
    return QGenericPlugin_Create((QGenericPlugin*)self, qstring(name), qstring(spec));
}

void q_genericplugin_on_create(void* self, QObject* (*slot)(void*, const char*, const char*)) {
    QGenericPlugin_OnCreate((QGenericPlugin*)self, (intptr_t)slot);
}

QObject* q_genericplugin_qbase_create(void* self, const char* name, const char* spec) {
    return QGenericPlugin_QBaseCreate((QGenericPlugin*)self, qstring(name), qstring(spec));
}

const char* q_genericplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QGenericPlugin_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_genericplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGenericPlugin_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_genericplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_genericplugin_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_genericplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_genericplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_genericplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_genericplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_genericplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_genericplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_genericplugin_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_genericplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_genericplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_genericplugin_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_genericplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_genericplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_genericplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_genericplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_genericplugin_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_genericplugin_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_genericplugin_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_genericplugin_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_genericplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_genericplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_genericplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_genericplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_genericplugin_dynamic_property_names(void* self) {
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

QBindingStorage* q_genericplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_genericplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_genericplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_genericplugin_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_genericplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_genericplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_genericplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_genericplugin_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_genericplugin_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_genericplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_genericplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_genericplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_genericplugin_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_genericplugin_event(void* self, void* event) {
    return QGenericPlugin_Event((QGenericPlugin*)self, (QEvent*)event);
}

bool q_genericplugin_qbase_event(void* self, void* event) {
    return QGenericPlugin_QBaseEvent((QGenericPlugin*)self, (QEvent*)event);
}

void q_genericplugin_on_event(void* self, bool (*slot)(void*, void*)) {
    QGenericPlugin_OnEvent((QGenericPlugin*)self, (intptr_t)slot);
}

bool q_genericplugin_event_filter(void* self, void* watched, void* event) {
    return QGenericPlugin_EventFilter((QGenericPlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool q_genericplugin_qbase_event_filter(void* self, void* watched, void* event) {
    return QGenericPlugin_QBaseEventFilter((QGenericPlugin*)self, (QObject*)watched, (QEvent*)event);
}

void q_genericplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGenericPlugin_OnEventFilter((QGenericPlugin*)self, (intptr_t)slot);
}

void q_genericplugin_timer_event(void* self, void* event) {
    QGenericPlugin_TimerEvent((QGenericPlugin*)self, (QTimerEvent*)event);
}

void q_genericplugin_qbase_timer_event(void* self, void* event) {
    QGenericPlugin_QBaseTimerEvent((QGenericPlugin*)self, (QTimerEvent*)event);
}

void q_genericplugin_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGenericPlugin_OnTimerEvent((QGenericPlugin*)self, (intptr_t)slot);
}

void q_genericplugin_child_event(void* self, void* event) {
    QGenericPlugin_ChildEvent((QGenericPlugin*)self, (QChildEvent*)event);
}

void q_genericplugin_qbase_child_event(void* self, void* event) {
    QGenericPlugin_QBaseChildEvent((QGenericPlugin*)self, (QChildEvent*)event);
}

void q_genericplugin_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGenericPlugin_OnChildEvent((QGenericPlugin*)self, (intptr_t)slot);
}

void q_genericplugin_custom_event(void* self, void* event) {
    QGenericPlugin_CustomEvent((QGenericPlugin*)self, (QEvent*)event);
}

void q_genericplugin_qbase_custom_event(void* self, void* event) {
    QGenericPlugin_QBaseCustomEvent((QGenericPlugin*)self, (QEvent*)event);
}

void q_genericplugin_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGenericPlugin_OnCustomEvent((QGenericPlugin*)self, (intptr_t)slot);
}

void q_genericplugin_connect_notify(void* self, void* signal) {
    QGenericPlugin_ConnectNotify((QGenericPlugin*)self, (QMetaMethod*)signal);
}

void q_genericplugin_qbase_connect_notify(void* self, void* signal) {
    QGenericPlugin_QBaseConnectNotify((QGenericPlugin*)self, (QMetaMethod*)signal);
}

void q_genericplugin_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGenericPlugin_OnConnectNotify((QGenericPlugin*)self, (intptr_t)slot);
}

void q_genericplugin_disconnect_notify(void* self, void* signal) {
    QGenericPlugin_DisconnectNotify((QGenericPlugin*)self, (QMetaMethod*)signal);
}

void q_genericplugin_qbase_disconnect_notify(void* self, void* signal) {
    QGenericPlugin_QBaseDisconnectNotify((QGenericPlugin*)self, (QMetaMethod*)signal);
}

void q_genericplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGenericPlugin_OnDisconnectNotify((QGenericPlugin*)self, (intptr_t)slot);
}

QObject* q_genericplugin_sender(void* self) {
    return QGenericPlugin_Sender((QGenericPlugin*)self);
}

QObject* q_genericplugin_qbase_sender(void* self) {
    return QGenericPlugin_QBaseSender((QGenericPlugin*)self);
}

void q_genericplugin_on_sender(void* self, QObject* (*slot)()) {
    QGenericPlugin_OnSender((QGenericPlugin*)self, (intptr_t)slot);
}

int32_t q_genericplugin_sender_signal_index(void* self) {
    return QGenericPlugin_SenderSignalIndex((QGenericPlugin*)self);
}

int32_t q_genericplugin_qbase_sender_signal_index(void* self) {
    return QGenericPlugin_QBaseSenderSignalIndex((QGenericPlugin*)self);
}

void q_genericplugin_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGenericPlugin_OnSenderSignalIndex((QGenericPlugin*)self, (intptr_t)slot);
}

int32_t q_genericplugin_receivers(void* self, const char* signal) {
    return QGenericPlugin_Receivers((QGenericPlugin*)self, signal);
}

int32_t q_genericplugin_qbase_receivers(void* self, const char* signal) {
    return QGenericPlugin_QBaseReceivers((QGenericPlugin*)self, signal);
}

void q_genericplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGenericPlugin_OnReceivers((QGenericPlugin*)self, (intptr_t)slot);
}

bool q_genericplugin_is_signal_connected(void* self, void* signal) {
    return QGenericPlugin_IsSignalConnected((QGenericPlugin*)self, (QMetaMethod*)signal);
}

bool q_genericplugin_qbase_is_signal_connected(void* self, void* signal) {
    return QGenericPlugin_QBaseIsSignalConnected((QGenericPlugin*)self, (QMetaMethod*)signal);
}

void q_genericplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGenericPlugin_OnIsSignalConnected((QGenericPlugin*)self, (intptr_t)slot);
}

void q_genericplugin_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_genericplugin_delete(void* self) {
    QGenericPlugin_Delete((QGenericPlugin*)(self));
}
