#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqcoreevent.hpp"
#include "libqstyleplugin.hpp"
#include "libqstyleplugin.h"

QStylePlugin* q_styleplugin_new() {
    return QStylePlugin_new();
}

QStylePlugin* q_styleplugin_new2(void* parent) {
    return QStylePlugin_new2((QObject*)parent);
}

const QMetaObject* q_styleplugin_meta_object(void* self) {
    return QStylePlugin_MetaObject((QStylePlugin*)self);
}

void* q_styleplugin_metacast(void* self, const char* param1) {
    return QStylePlugin_Metacast((QStylePlugin*)self, param1);
}

int32_t q_styleplugin_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStylePlugin_Metacall((QStylePlugin*)self, param1, param2, param3);
}

void q_styleplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QStylePlugin_OnMetacall((QStylePlugin*)self, (intptr_t)slot);
}

int32_t q_styleplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStylePlugin_QBaseMetacall((QStylePlugin*)self, param1, param2, param3);
}

const char* q_styleplugin_tr(const char* s) {
    libqt_string _str = QStylePlugin_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QStyle* q_styleplugin_create(void* self, const char* key) {
    return QStylePlugin_Create((QStylePlugin*)self, qstring(key));
}

void q_styleplugin_on_create(void* self, QStyle* (*slot)(void*, const char*)) {
    QStylePlugin_OnCreate((QStylePlugin*)self, (intptr_t)slot);
}

QStyle* q_styleplugin_qbase_create(void* self, const char* key) {
    return QStylePlugin_QBaseCreate((QStylePlugin*)self, qstring(key));
}

const char* q_styleplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QStylePlugin_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_styleplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QStylePlugin_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_styleplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_styleplugin_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_styleplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_styleplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_styleplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_styleplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_styleplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_styleplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_styleplugin_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_styleplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_styleplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_styleplugin_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_styleplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_styleplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_styleplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_styleplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_styleplugin_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_styleplugin_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_styleplugin_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_styleplugin_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_styleplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_styleplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_styleplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_styleplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_styleplugin_dynamic_property_names(void* self) {
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

QBindingStorage* q_styleplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_styleplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_styleplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_styleplugin_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_styleplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_styleplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_styleplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_styleplugin_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_styleplugin_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_styleplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_styleplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_styleplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_styleplugin_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_styleplugin_event(void* self, void* event) {
    return QStylePlugin_Event((QStylePlugin*)self, (QEvent*)event);
}

bool q_styleplugin_qbase_event(void* self, void* event) {
    return QStylePlugin_QBaseEvent((QStylePlugin*)self, (QEvent*)event);
}

void q_styleplugin_on_event(void* self, bool (*slot)(void*, void*)) {
    QStylePlugin_OnEvent((QStylePlugin*)self, (intptr_t)slot);
}

bool q_styleplugin_event_filter(void* self, void* watched, void* event) {
    return QStylePlugin_EventFilter((QStylePlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool q_styleplugin_qbase_event_filter(void* self, void* watched, void* event) {
    return QStylePlugin_QBaseEventFilter((QStylePlugin*)self, (QObject*)watched, (QEvent*)event);
}

void q_styleplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QStylePlugin_OnEventFilter((QStylePlugin*)self, (intptr_t)slot);
}

void q_styleplugin_timer_event(void* self, void* event) {
    QStylePlugin_TimerEvent((QStylePlugin*)self, (QTimerEvent*)event);
}

void q_styleplugin_qbase_timer_event(void* self, void* event) {
    QStylePlugin_QBaseTimerEvent((QStylePlugin*)self, (QTimerEvent*)event);
}

void q_styleplugin_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QStylePlugin_OnTimerEvent((QStylePlugin*)self, (intptr_t)slot);
}

void q_styleplugin_child_event(void* self, void* event) {
    QStylePlugin_ChildEvent((QStylePlugin*)self, (QChildEvent*)event);
}

void q_styleplugin_qbase_child_event(void* self, void* event) {
    QStylePlugin_QBaseChildEvent((QStylePlugin*)self, (QChildEvent*)event);
}

void q_styleplugin_on_child_event(void* self, void (*slot)(void*, void*)) {
    QStylePlugin_OnChildEvent((QStylePlugin*)self, (intptr_t)slot);
}

void q_styleplugin_custom_event(void* self, void* event) {
    QStylePlugin_CustomEvent((QStylePlugin*)self, (QEvent*)event);
}

void q_styleplugin_qbase_custom_event(void* self, void* event) {
    QStylePlugin_QBaseCustomEvent((QStylePlugin*)self, (QEvent*)event);
}

void q_styleplugin_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QStylePlugin_OnCustomEvent((QStylePlugin*)self, (intptr_t)slot);
}

void q_styleplugin_connect_notify(void* self, void* signal) {
    QStylePlugin_ConnectNotify((QStylePlugin*)self, (QMetaMethod*)signal);
}

void q_styleplugin_qbase_connect_notify(void* self, void* signal) {
    QStylePlugin_QBaseConnectNotify((QStylePlugin*)self, (QMetaMethod*)signal);
}

void q_styleplugin_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QStylePlugin_OnConnectNotify((QStylePlugin*)self, (intptr_t)slot);
}

void q_styleplugin_disconnect_notify(void* self, void* signal) {
    QStylePlugin_DisconnectNotify((QStylePlugin*)self, (QMetaMethod*)signal);
}

void q_styleplugin_qbase_disconnect_notify(void* self, void* signal) {
    QStylePlugin_QBaseDisconnectNotify((QStylePlugin*)self, (QMetaMethod*)signal);
}

void q_styleplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QStylePlugin_OnDisconnectNotify((QStylePlugin*)self, (intptr_t)slot);
}

QObject* q_styleplugin_sender(void* self) {
    return QStylePlugin_Sender((QStylePlugin*)self);
}

QObject* q_styleplugin_qbase_sender(void* self) {
    return QStylePlugin_QBaseSender((QStylePlugin*)self);
}

void q_styleplugin_on_sender(void* self, QObject* (*slot)()) {
    QStylePlugin_OnSender((QStylePlugin*)self, (intptr_t)slot);
}

int32_t q_styleplugin_sender_signal_index(void* self) {
    return QStylePlugin_SenderSignalIndex((QStylePlugin*)self);
}

int32_t q_styleplugin_qbase_sender_signal_index(void* self) {
    return QStylePlugin_QBaseSenderSignalIndex((QStylePlugin*)self);
}

void q_styleplugin_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QStylePlugin_OnSenderSignalIndex((QStylePlugin*)self, (intptr_t)slot);
}

int32_t q_styleplugin_receivers(void* self, const char* signal) {
    return QStylePlugin_Receivers((QStylePlugin*)self, signal);
}

int32_t q_styleplugin_qbase_receivers(void* self, const char* signal) {
    return QStylePlugin_QBaseReceivers((QStylePlugin*)self, signal);
}

void q_styleplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QStylePlugin_OnReceivers((QStylePlugin*)self, (intptr_t)slot);
}

bool q_styleplugin_is_signal_connected(void* self, void* signal) {
    return QStylePlugin_IsSignalConnected((QStylePlugin*)self, (QMetaMethod*)signal);
}

bool q_styleplugin_qbase_is_signal_connected(void* self, void* signal) {
    return QStylePlugin_QBaseIsSignalConnected((QStylePlugin*)self, (QMetaMethod*)signal);
}

void q_styleplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QStylePlugin_OnIsSignalConnected((QStylePlugin*)self, (intptr_t)slot);
}

void q_styleplugin_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_styleplugin_delete(void* self) {
    QStylePlugin_Delete((QStylePlugin*)(self));
}
