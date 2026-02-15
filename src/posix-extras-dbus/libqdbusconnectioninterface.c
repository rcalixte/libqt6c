#include "libqdbusabstractinterface.hpp"
#include "libqdbuserror.hpp"
#include "libqdbusmessage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqdbusconnectioninterface.hpp"
#include "libqdbusconnectioninterface.h"

const QMetaObject* q_dbusconnectioninterface_meta_object(void* self) {
    return QDBusConnectionInterface_MetaObject((QDBusConnectionInterface*)self);
}

void* q_dbusconnectioninterface_metacast(void* self, const char* param1) {
    return QDBusConnectionInterface_Metacast((QDBusConnectionInterface*)self, param1);
}

int32_t q_dbusconnectioninterface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDBusConnectionInterface_Metacall((QDBusConnectionInterface*)self, param1, param2, param3);
}

const char* q_dbusconnectioninterface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dbusconnectioninterface_service_registered(void* self, const char* service) {
    QDBusConnectionInterface_ServiceRegistered((QDBusConnectionInterface*)self, qstring(service));
}

void q_dbusconnectioninterface_on_service_registered(void* self, void (*callback)(void*, const char*)) {
    QDBusConnectionInterface_Connect_ServiceRegistered((QDBusConnectionInterface*)self, (intptr_t)callback);
}

void q_dbusconnectioninterface_service_unregistered(void* self, const char* service) {
    QDBusConnectionInterface_ServiceUnregistered((QDBusConnectionInterface*)self, qstring(service));
}

void q_dbusconnectioninterface_on_service_unregistered(void* self, void (*callback)(void*, const char*)) {
    QDBusConnectionInterface_Connect_ServiceUnregistered((QDBusConnectionInterface*)self, (intptr_t)callback);
}

void q_dbusconnectioninterface_service_owner_changed(void* self, const char* name, const char* oldOwner, const char* newOwner) {
    QDBusConnectionInterface_ServiceOwnerChanged((QDBusConnectionInterface*)self, qstring(name), qstring(oldOwner), qstring(newOwner));
}

void q_dbusconnectioninterface_on_service_owner_changed(void* self, void (*callback)(void*, const char*, const char*, const char*)) {
    QDBusConnectionInterface_Connect_ServiceOwnerChanged((QDBusConnectionInterface*)self, (intptr_t)callback);
}

void q_dbusconnectioninterface_call_with_callback_failed(void* self, void* error, void* call) {
    QDBusConnectionInterface_CallWithCallbackFailed((QDBusConnectionInterface*)self, (QDBusError*)error, (QDBusMessage*)call);
}

void q_dbusconnectioninterface_on_call_with_callback_failed(void* self, void (*callback)(void*, void*, void*)) {
    QDBusConnectionInterface_Connect_CallWithCallbackFailed((QDBusConnectionInterface*)self, (intptr_t)callback);
}

void q_dbusconnectioninterface_name_acquired(void* self, const char* param1) {
    QDBusConnectionInterface_NameAcquired((QDBusConnectionInterface*)self, qstring(param1));
}

void q_dbusconnectioninterface_on_name_acquired(void* self, void (*callback)(void*, const char*)) {
    QDBusConnectionInterface_Connect_NameAcquired((QDBusConnectionInterface*)self, (intptr_t)callback);
}

void q_dbusconnectioninterface_name_lost(void* self, const char* param1) {
    QDBusConnectionInterface_NameLost((QDBusConnectionInterface*)self, qstring(param1));
}

void q_dbusconnectioninterface_on_name_lost(void* self, void (*callback)(void*, const char*)) {
    QDBusConnectionInterface_Connect_NameLost((QDBusConnectionInterface*)self, (intptr_t)callback);
}

void q_dbusconnectioninterface_name_owner_changed(void* self, const char* param1, const char* param2, const char* param3) {
    QDBusConnectionInterface_NameOwnerChanged((QDBusConnectionInterface*)self, qstring(param1), qstring(param2), qstring(param3));
}

void q_dbusconnectioninterface_on_name_owner_changed(void* self, void (*callback)(void*, const char*, const char*, const char*)) {
    QDBusConnectionInterface_Connect_NameOwnerChanged((QDBusConnectionInterface*)self, (intptr_t)callback);
}

const char* q_dbusconnectioninterface_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusconnectioninterface_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dbusconnectioninterface_is_valid(void* self) {
    return QDBusAbstractInterface_IsValid((QDBusAbstractInterface*)self);
}

QDBusConnection* q_dbusconnectioninterface_connection(void* self) {
    return QDBusAbstractInterface_Connection((QDBusAbstractInterface*)self);
}

const char* q_dbusconnectioninterface_service(void* self) {
    libqt_string _str = QDBusAbstractInterface_Service((QDBusAbstractInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusconnectioninterface_path(void* self) {
    libqt_string _str = QDBusAbstractInterface_Path((QDBusAbstractInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusconnectioninterface_interface(void* self) {
    libqt_string _str = QDBusAbstractInterface_Interface((QDBusAbstractInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDBusError* q_dbusconnectioninterface_last_error(void* self) {
    return QDBusAbstractInterface_LastError((QDBusAbstractInterface*)self);
}

void q_dbusconnectioninterface_set_timeout(void* self, int timeout) {
    QDBusAbstractInterface_SetTimeout((QDBusAbstractInterface*)self, timeout);
}

int32_t q_dbusconnectioninterface_timeout(void* self) {
    return QDBusAbstractInterface_Timeout((QDBusAbstractInterface*)self);
}

void q_dbusconnectioninterface_set_interactive_authorization_allowed(void* self, bool enable) {
    QDBusAbstractInterface_SetInteractiveAuthorizationAllowed((QDBusAbstractInterface*)self, enable);
}

bool q_dbusconnectioninterface_is_interactive_authorization_allowed(void* self) {
    return QDBusAbstractInterface_IsInteractiveAuthorizationAllowed((QDBusAbstractInterface*)self);
}

QDBusMessage* q_dbusconnectioninterface_call(void* self, const char* method) {
    return QDBusAbstractInterface_Call((QDBusAbstractInterface*)self, qstring(method));
}

QDBusMessage* q_dbusconnectioninterface_call2(void* self, int32_t mode, const char* method) {
    return QDBusAbstractInterface_Call2((QDBusAbstractInterface*)self, mode, qstring(method));
}

QDBusMessage* q_dbusconnectioninterface_call_with_argument_list(void* self, int32_t mode, const char* method, libqt_list /* of QVariant* */ args) {
    return QDBusAbstractInterface_CallWithArgumentList((QDBusAbstractInterface*)self, mode, qstring(method), args);
}

bool q_dbusconnectioninterface_call_with_callback(void* self, const char* method, libqt_list /* of QVariant* */ args, void* receiver, const char* member, const char* errorSlot) {
    return QDBusAbstractInterface_CallWithCallback((QDBusAbstractInterface*)self, qstring(method), args, (QObject*)receiver, member, errorSlot);
}

bool q_dbusconnectioninterface_call_with_callback2(void* self, const char* method, libqt_list /* of QVariant* */ args, void* receiver, const char* member) {
    return QDBusAbstractInterface_CallWithCallback2((QDBusAbstractInterface*)self, qstring(method), args, (QObject*)receiver, member);
}

QDBusPendingCall* q_dbusconnectioninterface_async_call(void* self, const char* method) {
    return QDBusAbstractInterface_AsyncCall((QDBusAbstractInterface*)self, qstring(method));
}

QDBusPendingCall* q_dbusconnectioninterface_async_call_with_argument_list(void* self, const char* method, libqt_list /* of QVariant* */ args) {
    return QDBusAbstractInterface_AsyncCallWithArgumentList((QDBusAbstractInterface*)self, qstring(method), args);
}

bool q_dbusconnectioninterface_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_dbusconnectioninterface_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_dbusconnectioninterface_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dbusconnectioninterface_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_dbusconnectioninterface_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_dbusconnectioninterface_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_dbusconnectioninterface_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_dbusconnectioninterface_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_dbusconnectioninterface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_dbusconnectioninterface_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_dbusconnectioninterface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_dbusconnectioninterface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_dbusconnectioninterface_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_dbusconnectioninterface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_dbusconnectioninterface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_dbusconnectioninterface_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_dbusconnectioninterface_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_dbusconnectioninterface_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_dbusconnectioninterface_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_dbusconnectioninterface_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_dbusconnectioninterface_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_dbusconnectioninterface_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_dbusconnectioninterface_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_dbusconnectioninterface_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_dbusconnectioninterface_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_dbusconnectioninterface_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_dbusconnectioninterface_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_dbusconnectioninterface_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_dbusconnectioninterface_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_dbusconnectioninterface_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_dbusconnectioninterface_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_dbusconnectioninterface_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_dbusconnectioninterface_dynamic_property_names\n");
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

QBindingStorage* q_dbusconnectioninterface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_dbusconnectioninterface_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_dbusconnectioninterface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_dbusconnectioninterface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_dbusconnectioninterface_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_dbusconnectioninterface_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_dbusconnectioninterface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_dbusconnectioninterface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_dbusconnectioninterface_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_dbusconnectioninterface_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_dbusconnectioninterface_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_dbusconnectioninterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_dbusconnectioninterface_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_dbusconnectioninterface_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_dbusconnectioninterface_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_dbusconnectioninterface_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_dbusconnectioninterface_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_dbusconnectioninterface_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_dbusconnectioninterface_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}
