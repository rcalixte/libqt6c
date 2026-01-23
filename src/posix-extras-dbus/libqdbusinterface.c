#include "../libqcoreevent.hpp"
#include "libqdbusabstractinterface.hpp"
#include "libqdbusconnection.hpp"
#include "libqdbusmessage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqdbusinterface.hpp"
#include "libqdbusinterface.h"

QDBusInterface* q_dbusinterface_new(const char* service, const char* path) {
    return QDBusInterface_new(qstring(service), qstring(path));
}

QDBusInterface* q_dbusinterface_new2(const char* service, const char* path, const char* interface) {
    return QDBusInterface_new2(qstring(service), qstring(path), qstring(interface));
}

QDBusInterface* q_dbusinterface_new3(const char* service, const char* path, const char* interface, void* connection) {
    return QDBusInterface_new3(qstring(service), qstring(path), qstring(interface), (QDBusConnection*)connection);
}

QDBusInterface* q_dbusinterface_new4(const char* service, const char* path, const char* interface, void* connection, void* parent) {
    return QDBusInterface_new4(qstring(service), qstring(path), qstring(interface), (QDBusConnection*)connection, (QObject*)parent);
}

const QMetaObject* q_dbusinterface_meta_object(void* self) {
    return QDBusInterface_MetaObject((QDBusInterface*)self);
}

void* q_dbusinterface_metacast(void* self, const char* param1) {
    return QDBusInterface_Metacast((QDBusInterface*)self, param1);
}

int32_t q_dbusinterface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDBusInterface_Metacall((QDBusInterface*)self, param1, param2, param3);
}

void q_dbusinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDBusInterface_OnMetacall((QDBusInterface*)self, (intptr_t)callback);
}

int32_t q_dbusinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDBusInterface_QBaseMetacall((QDBusInterface*)self, param1, param2, param3);
}

const char* q_dbusinterface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dbusinterface_is_valid(void* self) {
    return QDBusAbstractInterface_IsValid((QDBusAbstractInterface*)self);
}

QDBusConnection* q_dbusinterface_connection(void* self) {
    return QDBusAbstractInterface_Connection((QDBusAbstractInterface*)self);
}

const char* q_dbusinterface_service(void* self) {
    libqt_string _str = QDBusAbstractInterface_Service((QDBusAbstractInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusinterface_path(void* self) {
    libqt_string _str = QDBusAbstractInterface_Path((QDBusAbstractInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusinterface_interface(void* self) {
    libqt_string _str = QDBusAbstractInterface_Interface((QDBusAbstractInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDBusError* q_dbusinterface_last_error(void* self) {
    return QDBusAbstractInterface_LastError((QDBusAbstractInterface*)self);
}

void q_dbusinterface_set_timeout(void* self, int timeout) {
    QDBusAbstractInterface_SetTimeout((QDBusAbstractInterface*)self, timeout);
}

int32_t q_dbusinterface_timeout(void* self) {
    return QDBusAbstractInterface_Timeout((QDBusAbstractInterface*)self);
}

void q_dbusinterface_set_interactive_authorization_allowed(void* self, bool enable) {
    QDBusAbstractInterface_SetInteractiveAuthorizationAllowed((QDBusAbstractInterface*)self, enable);
}

bool q_dbusinterface_is_interactive_authorization_allowed(void* self) {
    return QDBusAbstractInterface_IsInteractiveAuthorizationAllowed((QDBusAbstractInterface*)self);
}

QDBusMessage* q_dbusinterface_call(void* self, const char* method) {
    return QDBusAbstractInterface_Call((QDBusAbstractInterface*)self, qstring(method));
}

QDBusMessage* q_dbusinterface_call2(void* self, int32_t mode, const char* method) {
    return QDBusAbstractInterface_Call2((QDBusAbstractInterface*)self, mode, qstring(method));
}

QDBusMessage* q_dbusinterface_call_with_argument_list(void* self, int32_t mode, const char* method, libqt_list /* of QVariant* */ args) {
    return QDBusAbstractInterface_CallWithArgumentList((QDBusAbstractInterface*)self, mode, qstring(method), args);
}

QDBusPendingCall* q_dbusinterface_async_call(void* self, const char* method) {
    return QDBusAbstractInterface_AsyncCall((QDBusAbstractInterface*)self, qstring(method));
}

QDBusPendingCall* q_dbusinterface_async_call_with_argument_list(void* self, const char* method, libqt_list /* of QVariant* */ args) {
    return QDBusAbstractInterface_AsyncCallWithArgumentList((QDBusAbstractInterface*)self, qstring(method), args);
}

const char* q_dbusinterface_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusinterface_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusinterface_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dbusinterface_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_dbusinterface_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_dbusinterface_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_dbusinterface_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_dbusinterface_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_dbusinterface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_dbusinterface_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_dbusinterface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_dbusinterface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_dbusinterface_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_dbusinterface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_dbusinterface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_dbusinterface_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_dbusinterface_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_dbusinterface_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_dbusinterface_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_dbusinterface_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_dbusinterface_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_dbusinterface_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_dbusinterface_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_dbusinterface_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_dbusinterface_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_dbusinterface_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_dbusinterface_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_dbusinterface_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_dbusinterface_dynamic_property_names\n");
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

QBindingStorage* q_dbusinterface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_dbusinterface_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_dbusinterface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_dbusinterface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_dbusinterface_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_dbusinterface_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_dbusinterface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_dbusinterface_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_dbusinterface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_dbusinterface_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_dbusinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_dbusinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_dbusinterface_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_dbusinterface_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_dbusinterface_connect_notify(void* self, void* signal) {
    QDBusInterface_ConnectNotify((QDBusInterface*)self, (QMetaMethod*)signal);
}

void q_dbusinterface_qbase_connect_notify(void* self, void* signal) {
    QDBusInterface_QBaseConnectNotify((QDBusInterface*)self, (QMetaMethod*)signal);
}

void q_dbusinterface_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDBusInterface_OnConnectNotify((QDBusInterface*)self, (intptr_t)callback);
}

void q_dbusinterface_disconnect_notify(void* self, void* signal) {
    QDBusInterface_DisconnectNotify((QDBusInterface*)self, (QMetaMethod*)signal);
}

void q_dbusinterface_qbase_disconnect_notify(void* self, void* signal) {
    QDBusInterface_QBaseDisconnectNotify((QDBusInterface*)self, (QMetaMethod*)signal);
}

void q_dbusinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDBusInterface_OnDisconnectNotify((QDBusInterface*)self, (intptr_t)callback);
}

bool q_dbusinterface_event(void* self, void* event) {
    return QDBusInterface_Event((QDBusInterface*)self, (QEvent*)event);
}

bool q_dbusinterface_qbase_event(void* self, void* event) {
    return QDBusInterface_QBaseEvent((QDBusInterface*)self, (QEvent*)event);
}

void q_dbusinterface_on_event(void* self, bool (*callback)(void*, void*)) {
    QDBusInterface_OnEvent((QDBusInterface*)self, (intptr_t)callback);
}

bool q_dbusinterface_event_filter(void* self, void* watched, void* event) {
    return QDBusInterface_EventFilter((QDBusInterface*)self, (QObject*)watched, (QEvent*)event);
}

bool q_dbusinterface_qbase_event_filter(void* self, void* watched, void* event) {
    return QDBusInterface_QBaseEventFilter((QDBusInterface*)self, (QObject*)watched, (QEvent*)event);
}

void q_dbusinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDBusInterface_OnEventFilter((QDBusInterface*)self, (intptr_t)callback);
}

void q_dbusinterface_timer_event(void* self, void* event) {
    QDBusInterface_TimerEvent((QDBusInterface*)self, (QTimerEvent*)event);
}

void q_dbusinterface_qbase_timer_event(void* self, void* event) {
    QDBusInterface_QBaseTimerEvent((QDBusInterface*)self, (QTimerEvent*)event);
}

void q_dbusinterface_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDBusInterface_OnTimerEvent((QDBusInterface*)self, (intptr_t)callback);
}

void q_dbusinterface_child_event(void* self, void* event) {
    QDBusInterface_ChildEvent((QDBusInterface*)self, (QChildEvent*)event);
}

void q_dbusinterface_qbase_child_event(void* self, void* event) {
    QDBusInterface_QBaseChildEvent((QDBusInterface*)self, (QChildEvent*)event);
}

void q_dbusinterface_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDBusInterface_OnChildEvent((QDBusInterface*)self, (intptr_t)callback);
}

void q_dbusinterface_custom_event(void* self, void* event) {
    QDBusInterface_CustomEvent((QDBusInterface*)self, (QEvent*)event);
}

void q_dbusinterface_qbase_custom_event(void* self, void* event) {
    QDBusInterface_QBaseCustomEvent((QDBusInterface*)self, (QEvent*)event);
}

void q_dbusinterface_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDBusInterface_OnCustomEvent((QDBusInterface*)self, (intptr_t)callback);
}

QVariant* q_dbusinterface_internal_prop_get(void* self, const char* propname) {
    return QDBusInterface_InternalPropGet((QDBusInterface*)self, propname);
}

QVariant* q_dbusinterface_qbase_internal_prop_get(void* self, const char* propname) {
    return QDBusInterface_QBaseInternalPropGet((QDBusInterface*)self, propname);
}

void q_dbusinterface_on_internal_prop_get(void* self, QVariant* (*callback)(void*, const char*)) {
    QDBusInterface_OnInternalPropGet((QDBusInterface*)self, (intptr_t)callback);
}

void q_dbusinterface_internal_prop_set(void* self, const char* propname, void* value) {
    QDBusInterface_InternalPropSet((QDBusInterface*)self, propname, (QVariant*)value);
}

void q_dbusinterface_qbase_internal_prop_set(void* self, const char* propname, void* value) {
    QDBusInterface_QBaseInternalPropSet((QDBusInterface*)self, propname, (QVariant*)value);
}

void q_dbusinterface_on_internal_prop_set(void* self, void (*callback)(void*, const char*, void*)) {
    QDBusInterface_OnInternalPropSet((QDBusInterface*)self, (intptr_t)callback);
}

QDBusMessage* q_dbusinterface_internal_const_call(void* self, int32_t mode, const char* method) {
    return QDBusInterface_InternalConstCall((QDBusInterface*)self, mode, qstring(method));
}

QDBusMessage* q_dbusinterface_qbase_internal_const_call(void* self, int32_t mode, const char* method) {
    return QDBusInterface_QBaseInternalConstCall((QDBusInterface*)self, mode, qstring(method));
}

void q_dbusinterface_on_internal_const_call(void* self, QDBusMessage* (*callback)(void*, int32_t, const char*)) {
    QDBusInterface_OnInternalConstCall((QDBusInterface*)self, (intptr_t)callback);
}

QObject* q_dbusinterface_sender(void* self) {
    return QDBusInterface_Sender((QDBusInterface*)self);
}

QObject* q_dbusinterface_qbase_sender(void* self) {
    return QDBusInterface_QBaseSender((QDBusInterface*)self);
}

void q_dbusinterface_on_sender(void* self, QObject* (*callback)()) {
    QDBusInterface_OnSender((QDBusInterface*)self, (intptr_t)callback);
}

int32_t q_dbusinterface_sender_signal_index(void* self) {
    return QDBusInterface_SenderSignalIndex((QDBusInterface*)self);
}

int32_t q_dbusinterface_qbase_sender_signal_index(void* self) {
    return QDBusInterface_QBaseSenderSignalIndex((QDBusInterface*)self);
}

void q_dbusinterface_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDBusInterface_OnSenderSignalIndex((QDBusInterface*)self, (intptr_t)callback);
}

int32_t q_dbusinterface_receivers(void* self, const char* signal) {
    return QDBusInterface_Receivers((QDBusInterface*)self, signal);
}

int32_t q_dbusinterface_qbase_receivers(void* self, const char* signal) {
    return QDBusInterface_QBaseReceivers((QDBusInterface*)self, signal);
}

void q_dbusinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDBusInterface_OnReceivers((QDBusInterface*)self, (intptr_t)callback);
}

bool q_dbusinterface_is_signal_connected(void* self, void* signal) {
    return QDBusInterface_IsSignalConnected((QDBusInterface*)self, (QMetaMethod*)signal);
}

bool q_dbusinterface_qbase_is_signal_connected(void* self, void* signal) {
    return QDBusInterface_QBaseIsSignalConnected((QDBusInterface*)self, (QMetaMethod*)signal);
}

void q_dbusinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDBusInterface_OnIsSignalConnected((QDBusInterface*)self, (intptr_t)callback);
}

void q_dbusinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_dbusinterface_delete(void* self) {
    QDBusInterface_Delete((QDBusInterface*)(self));
}
