#include "../libqcoreevent.hpp"
#include "libqdbusconnection.hpp"
#include "libqdbusmessage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqdbusvirtualobject.hpp"
#include "libqdbusvirtualobject.h"

QDBusVirtualObject* q_dbusvirtualobject_new() {
    return QDBusVirtualObject_new();
}

QDBusVirtualObject* q_dbusvirtualobject_new2(void* parent) {
    return QDBusVirtualObject_new2((QObject*)parent);
}

const QMetaObject* q_dbusvirtualobject_meta_object(void* self) {
    return QDBusVirtualObject_MetaObject((QDBusVirtualObject*)self);
}

void* q_dbusvirtualobject_metacast(void* self, const char* param1) {
    return QDBusVirtualObject_Metacast((QDBusVirtualObject*)self, param1);
}

int32_t q_dbusvirtualobject_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDBusVirtualObject_Metacall((QDBusVirtualObject*)self, param1, param2, param3);
}

void q_dbusvirtualobject_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDBusVirtualObject_OnMetacall((QDBusVirtualObject*)self, (intptr_t)callback);
}

int32_t q_dbusvirtualobject_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDBusVirtualObject_QBaseMetacall((QDBusVirtualObject*)self, param1, param2, param3);
}

const char* q_dbusvirtualobject_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusvirtualobject_introspect(void* self, const char* path) {
    libqt_string _str = QDBusVirtualObject_Introspect((QDBusVirtualObject*)self, qstring(path));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dbusvirtualobject_on_introspect(void* self, const char* (*callback)(void*, const char*)) {
    QDBusVirtualObject_OnIntrospect((QDBusVirtualObject*)self, (intptr_t)callback);
}

const char* q_dbusvirtualobject_qbase_introspect(void* self, const char* path) {
    libqt_string _str = QDBusVirtualObject_QBaseIntrospect((QDBusVirtualObject*)self, qstring(path));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dbusvirtualobject_handle_message(void* self, void* message, void* connection) {
    return QDBusVirtualObject_HandleMessage((QDBusVirtualObject*)self, (QDBusMessage*)message, (QDBusConnection*)connection);
}

void q_dbusvirtualobject_on_handle_message(void* self, bool (*callback)(void*, void*, void*)) {
    QDBusVirtualObject_OnHandleMessage((QDBusVirtualObject*)self, (intptr_t)callback);
}

bool q_dbusvirtualobject_qbase_handle_message(void* self, void* message, void* connection) {
    return QDBusVirtualObject_QBaseHandleMessage((QDBusVirtualObject*)self, (QDBusMessage*)message, (QDBusConnection*)connection);
}

const char* q_dbusvirtualobject_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusvirtualobject_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusvirtualobject_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dbusvirtualobject_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_dbusvirtualobject_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_dbusvirtualobject_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_dbusvirtualobject_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_dbusvirtualobject_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_dbusvirtualobject_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_dbusvirtualobject_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_dbusvirtualobject_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_dbusvirtualobject_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_dbusvirtualobject_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_dbusvirtualobject_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_dbusvirtualobject_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_dbusvirtualobject_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_dbusvirtualobject_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_dbusvirtualobject_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_dbusvirtualobject_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_dbusvirtualobject_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_dbusvirtualobject_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_dbusvirtualobject_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_dbusvirtualobject_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_dbusvirtualobject_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_dbusvirtualobject_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_dbusvirtualobject_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_dbusvirtualobject_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_dbusvirtualobject_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_dbusvirtualobject_dynamic_property_names\n");
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

QBindingStorage* q_dbusvirtualobject_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_dbusvirtualobject_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_dbusvirtualobject_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_dbusvirtualobject_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_dbusvirtualobject_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_dbusvirtualobject_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_dbusvirtualobject_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_dbusvirtualobject_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_dbusvirtualobject_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_dbusvirtualobject_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_dbusvirtualobject_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_dbusvirtualobject_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_dbusvirtualobject_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_dbusvirtualobject_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_dbusvirtualobject_event(void* self, void* event) {
    return QDBusVirtualObject_Event((QDBusVirtualObject*)self, (QEvent*)event);
}

bool q_dbusvirtualobject_qbase_event(void* self, void* event) {
    return QDBusVirtualObject_QBaseEvent((QDBusVirtualObject*)self, (QEvent*)event);
}

void q_dbusvirtualobject_on_event(void* self, bool (*callback)(void*, void*)) {
    QDBusVirtualObject_OnEvent((QDBusVirtualObject*)self, (intptr_t)callback);
}

bool q_dbusvirtualobject_event_filter(void* self, void* watched, void* event) {
    return QDBusVirtualObject_EventFilter((QDBusVirtualObject*)self, (QObject*)watched, (QEvent*)event);
}

bool q_dbusvirtualobject_qbase_event_filter(void* self, void* watched, void* event) {
    return QDBusVirtualObject_QBaseEventFilter((QDBusVirtualObject*)self, (QObject*)watched, (QEvent*)event);
}

void q_dbusvirtualobject_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDBusVirtualObject_OnEventFilter((QDBusVirtualObject*)self, (intptr_t)callback);
}

void q_dbusvirtualobject_timer_event(void* self, void* event) {
    QDBusVirtualObject_TimerEvent((QDBusVirtualObject*)self, (QTimerEvent*)event);
}

void q_dbusvirtualobject_qbase_timer_event(void* self, void* event) {
    QDBusVirtualObject_QBaseTimerEvent((QDBusVirtualObject*)self, (QTimerEvent*)event);
}

void q_dbusvirtualobject_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDBusVirtualObject_OnTimerEvent((QDBusVirtualObject*)self, (intptr_t)callback);
}

void q_dbusvirtualobject_child_event(void* self, void* event) {
    QDBusVirtualObject_ChildEvent((QDBusVirtualObject*)self, (QChildEvent*)event);
}

void q_dbusvirtualobject_qbase_child_event(void* self, void* event) {
    QDBusVirtualObject_QBaseChildEvent((QDBusVirtualObject*)self, (QChildEvent*)event);
}

void q_dbusvirtualobject_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDBusVirtualObject_OnChildEvent((QDBusVirtualObject*)self, (intptr_t)callback);
}

void q_dbusvirtualobject_custom_event(void* self, void* event) {
    QDBusVirtualObject_CustomEvent((QDBusVirtualObject*)self, (QEvent*)event);
}

void q_dbusvirtualobject_qbase_custom_event(void* self, void* event) {
    QDBusVirtualObject_QBaseCustomEvent((QDBusVirtualObject*)self, (QEvent*)event);
}

void q_dbusvirtualobject_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDBusVirtualObject_OnCustomEvent((QDBusVirtualObject*)self, (intptr_t)callback);
}

void q_dbusvirtualobject_connect_notify(void* self, void* signal) {
    QDBusVirtualObject_ConnectNotify((QDBusVirtualObject*)self, (QMetaMethod*)signal);
}

void q_dbusvirtualobject_qbase_connect_notify(void* self, void* signal) {
    QDBusVirtualObject_QBaseConnectNotify((QDBusVirtualObject*)self, (QMetaMethod*)signal);
}

void q_dbusvirtualobject_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDBusVirtualObject_OnConnectNotify((QDBusVirtualObject*)self, (intptr_t)callback);
}

void q_dbusvirtualobject_disconnect_notify(void* self, void* signal) {
    QDBusVirtualObject_DisconnectNotify((QDBusVirtualObject*)self, (QMetaMethod*)signal);
}

void q_dbusvirtualobject_qbase_disconnect_notify(void* self, void* signal) {
    QDBusVirtualObject_QBaseDisconnectNotify((QDBusVirtualObject*)self, (QMetaMethod*)signal);
}

void q_dbusvirtualobject_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDBusVirtualObject_OnDisconnectNotify((QDBusVirtualObject*)self, (intptr_t)callback);
}

QObject* q_dbusvirtualobject_sender(void* self) {
    return QDBusVirtualObject_Sender((QDBusVirtualObject*)self);
}

QObject* q_dbusvirtualobject_qbase_sender(void* self) {
    return QDBusVirtualObject_QBaseSender((QDBusVirtualObject*)self);
}

void q_dbusvirtualobject_on_sender(void* self, QObject* (*callback)()) {
    QDBusVirtualObject_OnSender((QDBusVirtualObject*)self, (intptr_t)callback);
}

int32_t q_dbusvirtualobject_sender_signal_index(void* self) {
    return QDBusVirtualObject_SenderSignalIndex((QDBusVirtualObject*)self);
}

int32_t q_dbusvirtualobject_qbase_sender_signal_index(void* self) {
    return QDBusVirtualObject_QBaseSenderSignalIndex((QDBusVirtualObject*)self);
}

void q_dbusvirtualobject_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDBusVirtualObject_OnSenderSignalIndex((QDBusVirtualObject*)self, (intptr_t)callback);
}

int32_t q_dbusvirtualobject_receivers(void* self, const char* signal) {
    return QDBusVirtualObject_Receivers((QDBusVirtualObject*)self, signal);
}

int32_t q_dbusvirtualobject_qbase_receivers(void* self, const char* signal) {
    return QDBusVirtualObject_QBaseReceivers((QDBusVirtualObject*)self, signal);
}

void q_dbusvirtualobject_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDBusVirtualObject_OnReceivers((QDBusVirtualObject*)self, (intptr_t)callback);
}

bool q_dbusvirtualobject_is_signal_connected(void* self, void* signal) {
    return QDBusVirtualObject_IsSignalConnected((QDBusVirtualObject*)self, (QMetaMethod*)signal);
}

bool q_dbusvirtualobject_qbase_is_signal_connected(void* self, void* signal) {
    return QDBusVirtualObject_QBaseIsSignalConnected((QDBusVirtualObject*)self, (QMetaMethod*)signal);
}

void q_dbusvirtualobject_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDBusVirtualObject_OnIsSignalConnected((QDBusVirtualObject*)self, (intptr_t)callback);
}

void q_dbusvirtualobject_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_dbusvirtualobject_delete(void* self) {
    QDBusVirtualObject_Delete((QDBusVirtualObject*)(self));
}
